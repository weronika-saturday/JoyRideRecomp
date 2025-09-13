#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825A4AE8"))) PPC_WEAK_FUNC(sub_825A4AE8);
PPC_FUNC_IMPL(__imp__sub_825A4AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, r11.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, r11.u8);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, r11.u8);
	// stfs f0,244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4B10"))) PPC_WEAK_FUNC(sub_825A4B10);
PPC_FUNC_IMPL(__imp__sub_825A4B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7468
	ctx.r10.s64 = r11.s64 + -7468;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825A4B1C"))) PPC_WEAK_FUNC(sub_825A4B1C);
PPC_FUNC_IMPL(__imp__sub_825A4B1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4B20"))) PPC_WEAK_FUNC(sub_825A4B20);
PPC_FUNC_IMPL(__imp__sub_825A4B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, r11.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r11,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, r11.u8);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, r11.u8);
	// stfs f0,244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stb r11,274(r3)
	PPC_STORE_U8(ctx.r3.u32 + 274, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4B4C"))) PPC_WEAK_FUNC(sub_825A4B4C);
PPC_FUNC_IMPL(__imp__sub_825A4B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4B50"))) PPC_WEAK_FUNC(sub_825A4B50);
PPC_FUNC_IMPL(__imp__sub_825A4B50) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f12,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lfs f10,220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r11,12576
	ctx.r4.s64 = r11.s64 + 12576;
	// lfs f8,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// fadds f31,f0,f13
	f31.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f30,f12,f11
	f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f29,f10,f9
	f29.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f28,f8,f7
	f28.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f29,8(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r4,r10,12560
	ctx.r4.s64 = ctx.r10.s64 + 12560;
	// stfs f28,12(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f6,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f31,f2
	f0.f64 = double(float(f31.f64 - ctx.f2.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fsubs f9,f28,f11
	ctx.f9.f64 = double(float(f28.f64 - ctx.f11.f64));
	// lfs f4,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f4,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fadds f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f8,8(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + f0.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fadds f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f4,12(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f3,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,0(r28)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,4(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,8(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825A4C5C"))) PPC_WEAK_FUNC(sub_825A4C5C);
PPC_FUNC_IMPL(__imp__sub_825A4C5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825A4C60"))) PPC_WEAK_FUNC(sub_825A4C60);
PPC_FUNC_IMPL(__imp__sub_825A4C60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,271(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4cac
	if (!cr6.eq) goto loc_825A4CAC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r30.u32);
	// stw r30,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, r30.u32);
	// stb r30,268(r3)
	PPC_STORE_U8(ctx.r3.u32 + 268, r30.u8);
	// stb r30,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, r30.u8);
	// stb r30,274(r3)
	PPC_STORE_U8(ctx.r3.u32 + 274, r30.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
loc_825A4CAC:
	// lbz r11,273(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 273);
	// lbz r10,275(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 275);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,271(r31)
	PPC_STORE_U8(r31.u32 + 271, r11.u8);
	// beq cr6,0x825a4d14
	if (cr6.eq) goto loc_825A4D14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824191a0
	sub_824191A0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825a4ce4
	if (cr6.eq) goto loc_825A4CE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4ce8
	if (!cr6.eq) goto loc_825A4CE8;
loc_825A4CE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825A4CE8:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8231dab8
	sub_8231DAB8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824191b8
	sub_824191B8(ctx, base);
loc_825A4D14:
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

__attribute__((alias("__imp__sub_825A4D28"))) PPC_WEAK_FUNC(sub_825A4D28);
PPC_FUNC_IMPL(__imp__sub_825A4D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4D2C"))) PPC_WEAK_FUNC(sub_825A4D2C);
PPC_FUNC_IMPL(__imp__sub_825A4D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4D30"))) PPC_WEAK_FUNC(sub_825A4D30);
PPC_FUNC_IMPL(__imp__sub_825A4D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x825a4d74
	if (cr6.eq) goto loc_825A4D74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4d78
	if (!cr6.eq) goto loc_825A4D78;
loc_825A4D74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4D78:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r11,-25548
	ctx.r4.s64 = r11.s64 + -25548;
	// bl 0x82474580
	sub_82474580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a4e5c
	if (cr6.eq) goto loc_825A4E5C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8246d640
	sub_8246D640(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmadds f11,f31,f0,f12
	ctx.f11.f64 = double(float(f31.f64 * f0.f64 + ctx.f12.f64));
	// lfs f13,15384(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x825a4dd0
	if (cr6.lt) goto loc_825A4DD0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
loc_825A4DD0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-912(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -912);
	f0.f64 = double(temp.f32);
	// lfs f31,6664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6664);
	f31.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + f0.f64));
	// fmadds f6,f10,f31,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * f31.f64 + ctx.f9.f64));
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmadds f13,f5,f31,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * f31.f64 + ctx.f4.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_825A4E5C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A4E78"))) PPC_WEAK_FUNC(sub_825A4E78);
PPC_FUNC_IMPL(__imp__sub_825A4E78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4E7C"))) PPC_WEAK_FUNC(sub_825A4E7C);
PPC_FUNC_IMPL(__imp__sub_825A4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4E80"))) PPC_WEAK_FUNC(sub_825A4E80);
PPC_FUNC_IMPL(__imp__sub_825A4E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r23,-31970
	r23.s64 = -2095185920;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r22,0
	r22.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// beq cr6,0x825a4f54
	if (cr6.eq) goto loc_825A4F54;
	// lbz r11,274(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 274);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4f54
	if (!cr6.eq) goto loc_825A4F54;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-28128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28128);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// beq cr6,0x825a4f00
	if (cr6.eq) goto loc_825A4F00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4f04
	if (!cr6.eq) goto loc_825A4F04;
loc_825A4F00:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825A4F04:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a4f50
	if (cr6.eq) goto loc_825A4F50;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4f50
	if (!cr6.eq) goto loc_825A4F50;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825A4F50:
	// stb r21,274(r31)
	PPC_STORE_U8(r31.u32 + 274, r21.u8);
loc_825A4F54:
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825a4f70
	if (cr6.eq) goto loc_825A4F70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4f74
	if (!cr6.eq) goto loc_825A4F74;
loc_825A4F70:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825A4F74:
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// bl 0x824746a0
	sub_824746A0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a527c
	if (cr6.eq) goto loc_825A527C;
	// addi r27,r31,208
	r27.s64 = r31.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82466568
	sub_82466568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825a527c
	if (!cr6.gt) goto loc_825A527C;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82466648
	sub_82466648(ctx, base);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r31,56
	ctx.r6.s64 = r31.s64 + 56;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a4b50
	sub_825A4B50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x828eb900
	sub_828EB900(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f1,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f30.f64 = double(temp.f32);
	// fdivs f2,f30,f12
	ctx.f2.f64 = double(float(f30.f64 / ctx.f12.f64));
	// bl 0x828ea7c8
	sub_828EA7C8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f0,-7480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7480);
	f0.f64 = double(temp.f32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fsel f6,f7,f0,f11
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,6196(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6196);
	f0.f64 = double(temp.f32);
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * f0.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lbz r5,269(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 269);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lfs f0,-31496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31496);
	f0.f64 = double(temp.f32);
	// lfs f31,21036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 * f0.f64));
	// bne cr6,0x825a508c
	if (!cr6.eq) goto loc_825A508C;
	// lfs f13,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x825a5084
	if (!cr6.lt) goto loc_825A5084;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x825a508c
	goto loc_825A508C;
loc_825A5084:
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stb r21,269(r31)
	PPC_STORE_U8(r31.u32 + 269, r21.u8);
loc_825A508C:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x825a5260
	if (cr6.lt) goto loc_825A5260;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,-19812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19812);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a512c
	if (cr6.eq) goto loc_825A512C;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-28136(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq cr6,0x825a50dc
	if (cr6.eq) goto loc_825A50DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a50e0
	if (!cr6.eq) goto loc_825A50E0;
loc_825A50DC:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825A50E0:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a512c
	if (cr6.eq) goto loc_825A512C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a512c
	if (!cr6.eq) goto loc_825A512C;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825A512C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82466568
	sub_82466568(ctx, base);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824665d0
	sub_824665D0(ctx, base);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x825a5260
	if (cr6.lt) goto loc_825A5260;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x825a5244
	if (cr6.lt) goto loc_825A5244;
	// lbz r9,270(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 270);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a51b0
	if (cr6.eq) goto loc_825A51B0;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// stw r22,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r22.u32);
	// stw r22,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stb r22,268(r31)
	PPC_STORE_U8(r31.u32 + 268, r22.u8);
	// stb r22,269(r31)
	PPC_STORE_U8(r31.u32 + 269, r22.u8);
	// blt cr6,0x825a5260
	if (cr6.lt) goto loc_825A5260;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// b 0x825a5260
	goto loc_825A5260;
loc_825A51B0:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// stb r21,268(r31)
	PPC_STORE_U8(r31.u32 + 268, r21.u8);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stb r22,271(r31)
	PPC_STORE_U8(r31.u32 + 271, r22.u8);
	// stw r8,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r8.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r7,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r7.u32);
	// lwz r3,-14368(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14368);
	// lwz r11,-28132(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28132);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825a51f0
	if (cr6.eq) goto loc_825A51F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a51f4
	if (!cr6.eq) goto loc_825A51F4;
loc_825A51F0:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825A51F4:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5260
	if (cr6.eq) goto loc_825A5260;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a5260
	if (!cr6.eq) goto loc_825A5260;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
	// b 0x825a5260
	goto loc_825A5260;
loc_825A5244:
	// lbz r11,268(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 268);
	// stw r22,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a525c
	if (!cr6.eq) goto loc_825A525C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,6240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f31.f64 = double(temp.f32);
loc_825A525C:
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
loc_825A5260:
	// lbz r11,268(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a5294
	if (!cr6.eq) goto loc_825A5294;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 + f30.f64));
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// b 0x825a5294
	goto loc_825A5294;
loc_825A527C:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a4d30
	sub_825A4D30(ctx, base);
loc_825A5294:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_825A52A8"))) PPC_WEAK_FUNC(sub_825A52A8);
PPC_FUNC_IMPL(__imp__sub_825A52A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825A52AC"))) PPC_WEAK_FUNC(sub_825A52AC);
PPC_FUNC_IMPL(__imp__sub_825A52AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A52B0"))) PPC_WEAK_FUNC(sub_825A52B0);
PPC_FUNC_IMPL(__imp__sub_825A52B0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7468
	ctx.r10.s64 = r11.s64 + -7468;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-7784
	ctx.r3.s64 = ctx.r8.s64 + -7784;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r7.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r3,r6,-7344
	ctx.r3.s64 = ctx.r6.s64 + -7344;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r30,r11,-19828
	r30.s64 = r11.s64 + -19828;
	// beq cr6,0x825a5384
	if (cr6.eq) goto loc_825A5384;
	// rotlwi r11,r5,0
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
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
	// beq cr6,0x825a5384
	if (cr6.eq) goto loc_825A5384;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a5388
	if (!cr6.eq) goto loc_825A5388;
loc_825A5384:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825A5388:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7356
	ctx.r3.s64 = r11.s64 + -7356;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a5414
	if (cr6.eq) goto loc_825A5414;
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
	// beq cr6,0x825a5414
	if (cr6.eq) goto loc_825A5414;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a5418
	if (!cr6.eq) goto loc_825A5418;
loc_825A5414:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825A5418:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-18632
	ctx.r9.s64 = r11.s64 + -18632;
	// addi r3,r10,-7372
	ctx.r3.s64 = ctx.r10.s64 + -7372;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a54b0
	if (cr6.eq) goto loc_825A54B0;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825a54b0
	if (cr6.eq) goto loc_825A54B0;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a54b4
	if (!cr6.eq) goto loc_825A54B4;
loc_825A54B0:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_825A54B4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,-18656
	ctx.r8.s64 = ctx.r10.s64 + -18656;
	// addi r3,r9,-7388
	ctx.r3.s64 = ctx.r9.s64 + -7388;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a5534
	if (cr6.eq) goto loc_825A5534;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825a5534
	if (cr6.eq) goto loc_825A5534;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a5538
	if (!cr6.eq) goto loc_825A5538;
loc_825A5534:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_825A5538:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r11,-7400
	ctx.r3.s64 = r11.s64 + -7400;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a55b8
	if (cr6.eq) goto loc_825A55B8;
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
	// beq cr6,0x825a55b8
	if (cr6.eq) goto loc_825A55B8;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a55bc
	if (!cr6.eq) goto loc_825A55BC;
loc_825A55B8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A55BC:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,270(r31)
	PPC_STORE_U8(r31.u32 + 270, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r10,-7420
	ctx.r3.s64 = ctx.r10.s64 + -7420;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a5638
	if (cr6.eq) goto loc_825A5638;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825a5638
	if (cr6.eq) goto loc_825A5638;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a563c
	if (!cr6.eq) goto loc_825A563C;
loc_825A5638:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_825A563C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-7436
	ctx.r3.s64 = ctx.r9.s64 + -7436;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a56bc
	if (cr6.eq) goto loc_825A56BC;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825a56bc
	if (cr6.eq) goto loc_825A56BC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a56c0
	if (!cr6.eq) goto loc_825A56C0;
loc_825A56BC:
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_825A56C0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r3,r11,-24212
	ctx.r3.s64 = r11.s64 + -24212;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a5738
	if (cr6.eq) goto loc_825A5738;
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
	// beq cr6,0x825a5738
	if (cr6.eq) goto loc_825A5738;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a573c
	if (!cr6.eq) goto loc_825A573C;
loc_825A5738:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A573C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,272(r31)
	PPC_STORE_U8(r31.u32 + 272, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r10,-7448
	ctx.r3.s64 = ctx.r10.s64 + -7448;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a57b8
	if (cr6.eq) goto loc_825A57B8;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825a57b8
	if (cr6.eq) goto loc_825A57B8;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a57bc
	if (!cr6.eq) goto loc_825A57BC;
loc_825A57B8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A57BC:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,273(r31)
	PPC_STORE_U8(r31.u32 + 273, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r3,r10,-7516
	ctx.r3.s64 = ctx.r10.s64 + -7516;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a5834
	if (cr6.eq) goto loc_825A5834;
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
	// beq cr6,0x825a5834
	if (cr6.eq) goto loc_825A5834;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a5838
	if (!cr6.eq) goto loc_825A5838;
loc_825A5834:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A5838:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,275(r31)
	PPC_STORE_U8(r31.u32 + 275, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stfs f31,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// stb r30,271(r31)
	PPC_STORE_U8(r31.u32 + 271, r30.u8);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stb r30,268(r31)
	PPC_STORE_U8(r31.u32 + 268, r30.u8);
	// stb r30,269(r31)
	PPC_STORE_U8(r31.u32 + 269, r30.u8);
	// stb r30,274(r31)
	PPC_STORE_U8(r31.u32 + 274, r30.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825A5874"))) PPC_WEAK_FUNC(sub_825A5874);
PPC_FUNC_IMPL(__imp__sub_825A5874) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A5878"))) PPC_WEAK_FUNC(sub_825A5878);
PPC_FUNC_IMPL(__imp__sub_825A5878) {
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
	// addi r10,r11,-7468
	ctx.r10.s64 = r11.s64 + -7468;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a58bc
	if (cr6.eq) goto loc_825A58BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A58BC:
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

__attribute__((alias("__imp__sub_825A58D0"))) PPC_WEAK_FUNC(sub_825A58D0);
PPC_FUNC_IMPL(__imp__sub_825A58D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A58D4"))) PPC_WEAK_FUNC(sub_825A58D4);
PPC_FUNC_IMPL(__imp__sub_825A58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A58D8"))) PPC_WEAK_FUNC(sub_825A58D8);
PPC_FUNC_IMPL(__imp__sub_825A58D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1322(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1322, r11.u8);
	// stb r10,1325(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1325, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A58EC"))) PPC_WEAK_FUNC(sub_825A58EC);
PPC_FUNC_IMPL(__imp__sub_825A58EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A58F0"))) PPC_WEAK_FUNC(sub_825A58F0);
PPC_FUNC_IMPL(__imp__sub_825A58F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,1322(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1322, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A58FC"))) PPC_WEAK_FUNC(sub_825A58FC);
PPC_FUNC_IMPL(__imp__sub_825A58FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5900"))) PPC_WEAK_FUNC(sub_825A5900);
PPC_FUNC_IMPL(__imp__sub_825A5900) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a5960
	if (cr6.eq) goto loc_825A5960;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x825a5960
	if (!cr6.gt) goto loc_825A5960;
	// li r11,0
	r11.s64 = 0;
	// b 0x825a5984
	goto loc_825A5984;
loc_825A5960:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 536);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825a5988
	if (cr6.gt) goto loc_825A5988;
	// li r11,3
	r11.s64 = 3;
loc_825A5984:
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
loc_825A5988:
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

__attribute__((alias("__imp__sub_825A599C"))) PPC_WEAK_FUNC(sub_825A599C);
PPC_FUNC_IMPL(__imp__sub_825A599C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A59A0"))) PPC_WEAK_FUNC(sub_825A59A0);
PPC_FUNC_IMPL(__imp__sub_825A59A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// bne cr6,0x825a59cc
	if (!cr6.eq) goto loc_825A59CC;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1300, temp.u32);
	// stb r11,1319(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1319, r11.u8);
	// stb r11,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, r11.u8);
	// blr 
	return;
loc_825A59CC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A59D8"))) PPC_WEAK_FUNC(sub_825A59D8);
PPC_FUNC_IMPL(__imp__sub_825A59D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A59F0"))) PPC_WEAK_FUNC(sub_825A59F0);
PPC_FUNC_IMPL(__imp__sub_825A59F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5A08"))) PPC_WEAK_FUNC(sub_825A5A08);
PPC_FUNC_IMPL(__imp__sub_825A5A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5A20"))) PPC_WEAK_FUNC(sub_825A5A20);
PPC_FUNC_IMPL(__imp__sub_825A5A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,1320(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1320);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1300, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a5a48
	if (!cr6.eq) goto loc_825A5A48;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
loc_825A5A48:
	// lfs f0,520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1300, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5A54"))) PPC_WEAK_FUNC(sub_825A5A54);
PPC_FUNC_IMPL(__imp__sub_825A5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5A58"))) PPC_WEAK_FUNC(sub_825A5A58);
PPC_FUNC_IMPL(__imp__sub_825A5A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5A5C"))) PPC_WEAK_FUNC(sub_825A5A5C);
PPC_FUNC_IMPL(__imp__sub_825A5A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5A60"))) PPC_WEAK_FUNC(sub_825A5A60);
PPC_FUNC_IMPL(__imp__sub_825A5A60) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,752
	ctx.r3.s64 = ctx.r3.s64 + 752;
	// addi r10,r11,-7276
	ctx.r10.s64 = r11.s64 + -7276;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = r31.s64 + 704;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A5AC0"))) PPC_WEAK_FUNC(sub_825A5AC0);
PPC_FUNC_IMPL(__imp__sub_825A5AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5AC4"))) PPC_WEAK_FUNC(sub_825A5AC4);
PPC_FUNC_IMPL(__imp__sub_825A5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5AC8"))) PPC_WEAK_FUNC(sub_825A5AC8);
PPC_FUNC_IMPL(__imp__sub_825A5AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r7,r9,-19808
	ctx.r7.s64 = ctx.r9.s64 + -19808;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-19808(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1072(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1072, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1076(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1076, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1080(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1080, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1084(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1084, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1088(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1088, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1092(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1092, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1096(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1100, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1104(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1104, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1108(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1108, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1112, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1116(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1116, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1124(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1128(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1132(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1132, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1136(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1136, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1140(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1140, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1144(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1144, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1148(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1148, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1184(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1184, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1188(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1188, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1192(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1192, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1196(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1196, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1200(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1200, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1204(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1204, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1208(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1208, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1212(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1212, temp.u32);
	// lfs f0,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	f0.f64 = double(temp.f32);
	// stfs f0,1216(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1216, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1220(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1220, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1224(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1224, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1228(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1228, temp.u32);
	// stb r11,1316(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1316, r11.u8);
	// lfs f0,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r11,1317(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1317, r11.u8);
	// lfs f13,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,1318(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1318, r11.u8);
	// stfs f0,1252(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1252, temp.u32);
	// stb r11,1319(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1319, r11.u8);
	// stfs f0,1256(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1256, temp.u32);
	// stw r11,1304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1304, r11.u32);
	// stfs f0,1244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1244, temp.u32);
	// stfs f0,1240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1240, temp.u32);
	// stfs f0,1248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1248, temp.u32);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// stfs f0,1236(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// stfs f13,1300(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1300, temp.u32);
	// stw r11,1312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1312, r11.u32);
	// addi r5,r6,12696
	ctx.r5.s64 = ctx.r6.s64 + 12696;
	// lis r4,-31965
	ctx.r4.s64 = -2094858240;
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lfs f13,12696(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12696);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r4,12664
	r31.s64 = ctx.r4.s64 + 12664;
	// stfs f13,928(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 928, temp.u32);
	// addi r30,r8,12648
	r30.s64 = ctx.r8.s64 + 12648;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r29,-32253
	r29.s64 = -2113732608;
	// stfs f13,932(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 932, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,936(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 936, temp.u32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,940(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 940, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,960(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,964(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,968(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,972(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,976(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,980(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,984(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,988(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,992(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 992, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,996(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 996, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1000(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1000, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1004(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1004, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1008(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1008, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1012(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1012, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1016(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1016, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1020(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1020, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1024(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1024, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1028(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1028, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1032(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1032, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1036(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1036, temp.u32);
	// lfs f13,12664(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12664);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1040(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1040, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1044(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1044, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1048(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1048, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1052(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1052, temp.u32);
	// lfs f13,12664(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12664);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1056(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1056, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1060(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1060, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1064(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1064, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1068(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1068, temp.u32);
	// lfs f13,12648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12648);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1152, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1156, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-7256(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -7256);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,1160(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1164, temp.u32);
	// lfs f13,-19808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19808);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// stb r11,1323(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1323, r11.u8);
	// stfs f0,1232(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1232, temp.u32);
	// stb r10,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r10.u8);
	// stfs f0,1272(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1272, temp.u32);
	// stb r11,1325(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1325, r11.u8);
	// stfs f0,1268(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1268, temp.u32);
	// stb r10,1326(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1326, ctx.r10.u8);
	// stfs f0,1276(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1276, temp.u32);
	// stfs f12,1296(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1296, temp.u32);
	// stfs f0,1260(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1260, temp.u32);
	// stfs f0,1264(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1264, temp.u32);
}

__attribute__((alias("__imp__sub_825A5DAC"))) PPC_WEAK_FUNC(sub_825A5DAC);
PPC_FUNC_IMPL(__imp__sub_825A5DAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A5DB0"))) PPC_WEAK_FUNC(sub_825A5DB0);
PPC_FUNC_IMPL(__imp__sub_825A5DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5e74
	if (cr6.eq) goto loc_825A5E74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5e74
	if (cr6.eq) goto loc_825A5E74;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,1
	r26.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x824250e8
	sub_824250E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a5e48
	if (cr6.eq) goto loc_825A5E48;
	// li r27,1
	r27.s64 = 1;
loc_825A5E48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x82425198
	sub_82425198(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a5e74
	if (cr6.eq) goto loc_825A5E74;
	// li r29,1
	r29.s64 = 1;
loc_825A5E74:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a5eec
	if (!cr6.eq) goto loc_825A5EEC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18084
	ctx.r4.s64 = ctx.r9.s64 + 18084;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5eec
	if (cr6.eq) goto loc_825A5EEC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7252
	ctx.r3.s64 = r11.s64 + -7252;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x826e9c50
	sub_826E9C50(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a5eec
	if (cr6.eq) goto loc_825A5EEC;
	// li r29,1
	r29.s64 = 1;
loc_825A5EEC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// bne cr6,0x825a5fe0
	if (!cr6.eq) goto loc_825A5FE0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,20576
	ctx.r4.s64 = ctx.r9.s64 + 20576;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5fe0
	if (cr6.eq) goto loc_825A5FE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823edbc0
	sub_823EDBC0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x825a5f50
	if (cr6.gt) goto loc_825A5F50;
	// li r11,0
	r11.s64 = 0;
loc_825A5F50:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823edbd0
	sub_823EDBD0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x825a5f7c
	if (cr6.gt) goto loc_825A5F7C;
	// li r11,0
	r11.s64 = 0;
loc_825A5F7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,1
	r11.s64 = 1;
	// lwz r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lfs f0,-11120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11120);
	f0.f64 = double(temp.f32);
	// lfs f13,216(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x825a5fb8
	if (cr6.gt) goto loc_825A5FB8;
	// li r11,0
	r11.s64 = 0;
loc_825A5FB8:
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a5fe0
	if (cr6.eq) goto loc_825A5FE0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a5fe0
	if (cr6.eq) goto loc_825A5FE0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5fe0
	if (cr6.eq) goto loc_825A5FE0;
	// li r29,1
	r29.s64 = 1;
loc_825A5FE0:
	// lbz r10,1316(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1316);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a5ff8
	if (cr6.eq) goto loc_825A5FF8;
	// stfs f31,1252(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 1252, temp.u32);
	// stb r29,1316(r28)
	PPC_STORE_U8(r28.u32 + 1316, r29.u8);
loc_825A5FF8:
	// lbz r10,1317(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1317);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a602c
	if (cr6.eq) goto loc_825A602C;
	// stfs f31,1256(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 1256, temp.u32);
	// stb r27,1317(r28)
	PPC_STORE_U8(r28.u32 + 1317, r27.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825a6024
	if (cr6.eq) goto loc_825A6024;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a602c
	if (!cr6.eq) goto loc_825A602C;
loc_825A6024:
	// li r11,0
	r11.s64 = 0;
	// stb r11,1317(r28)
	PPC_STORE_U8(r28.u32 + 1317, r11.u8);
loc_825A602C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_825A6034"))) PPC_WEAK_FUNC(sub_825A6034);
PPC_FUNC_IMPL(__imp__sub_825A6034) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825A6038"))) PPC_WEAK_FUNC(sub_825A6038);
PPC_FUNC_IMPL(__imp__sub_825A6038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f29,4036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4036);
	f29.f64 = double(temp.f32);
	// beq cr6,0x825a6208
	if (cr6.eq) goto loc_825A6208;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f30,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f30.f64 = double(temp.f32);
	// lfs f31,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	f31.f64 = double(temp.f32);
	// beq cr6,0x825a616c
	if (cr6.eq) goto loc_825A616C;
	// lfs f0,1272(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1272);
	f0.f64 = double(temp.f32);
	// addi r4,r31,656
	ctx.r4.s64 = r31.s64 + 656;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 * f29.f64));
	// bl 0x825a0930
	sub_825A0930(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * f28.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * f28.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(f0.f64 + ctx.f4.f64));
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f0,f6,f28
	f0.f64 = double(float(ctx.f6.f64 * f28.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f0,f3
	ctx.f9.f64 = double(float(f0.f64 + ctx.f3.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_825A616C:
	// lfs f0,1272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1272);
	f0.f64 = double(temp.f32);
	// addi r4,r31,704
	ctx.r4.s64 = r31.s64 + 704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 * f29.f64));
	// bl 0x825a0930
	sub_825A0930(ctx, base);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f9,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f1,f9
	f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f11,f0,f6
	ctx.f11.f64 = double(float(f0.f64 + ctx.f6.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
loc_825A6208:
	// lfs f0,1272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1272);
	f0.f64 = double(temp.f32);
	// addi r3,r31,704
	ctx.r3.s64 = r31.s64 + 704;
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 * f29.f64));
	// bl 0x825a0888
	sub_825A0888(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
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

__attribute__((alias("__imp__sub_825A6240"))) PPC_WEAK_FUNC(sub_825A6240);
PPC_FUNC_IMPL(__imp__sub_825A6240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6244"))) PPC_WEAK_FUNC(sub_825A6244);
PPC_FUNC_IMPL(__imp__sub_825A6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6248"))) PPC_WEAK_FUNC(sub_825A6248);
PPC_FUNC_IMPL(__imp__sub_825A6248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,1236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x825a6294
	if (!cr6.gt) goto loc_825A6294;
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f0,1236(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x825a6364
	if (!cr6.lt) goto loc_825A6364;
	// stfs f31,1236(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// b 0x825a6364
	goto loc_825A6364;
loc_825A6294:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,532(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x825a635c
	if (cr6.gt) goto loc_825A635C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825a62dc
	if (!cr6.gt) goto loc_825A62DC;
	// li r11,2
	r11.s64 = 2;
	// b 0x825a6360
	goto loc_825A6360;
loc_825A62DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a6364
	if (!cr6.eq) goto loc_825A6364;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-516(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -516);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x825a6364
	if (!cr6.gt) goto loc_825A6364;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 536);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825a6338
	if (!cr6.gt) goto loc_825A6338;
	// li r11,4
	r11.s64 = 4;
	// b 0x825a6360
	goto loc_825A6360;
loc_825A6338:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,540(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x825a6364
	if (cr6.lt) goto loc_825A6364;
	// li r11,3
	r11.s64 = 3;
	// b 0x825a6360
	goto loc_825A6360;
loc_825A635C:
	// li r11,1
	r11.s64 = 1;
loc_825A6360:
	// stw r11,1304(r31)
	PPC_STORE_U32(r31.u32 + 1304, r11.u32);
loc_825A6364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A637C"))) PPC_WEAK_FUNC(sub_825A637C);
PPC_FUNC_IMPL(__imp__sub_825A637C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6380"))) PPC_WEAK_FUNC(sub_825A6380);
PPC_FUNC_IMPL(__imp__sub_825A6380) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,532(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x825a64a0
	if (cr6.gt) goto loc_825A64A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a646c
	if (cr6.eq) goto loc_825A646C;
	// lfs f0,528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 528);
	f0.f64 = double(temp.f32);
	// lfs f13,1240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a6458
	if (!cr6.lt) goto loc_825A6458;
	// lfs f0,1248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1248);
	f0.f64 = double(temp.f32);
	// lfs f13,504(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825a6458
	if (!cr6.gt) goto loc_825A6458;
	// lwz r29,552(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x825a6424
	if (cr6.gt) goto loc_825A6424;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825A6424:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bgt cr6,0x825a64a8
	if (cr6.gt) goto loc_825A64A8;
	// lfs f0,1240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1240);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 + f31.f64));
	// stfs f13,1240(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 1240, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_825A6458:
	// li r11,0
	r11.s64 = 0;
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_825A646C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 536);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825a64a8
	if (!cr6.gt) goto loc_825A64A8;
	// li r11,4
	r11.s64 = 4;
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_825A64A0:
	// li r11,1
	r11.s64 = 1;
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
loc_825A64A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825A64B0"))) PPC_WEAK_FUNC(sub_825A64B0);
PPC_FUNC_IMPL(__imp__sub_825A64B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A64B4"))) PPC_WEAK_FUNC(sub_825A64B4);
PPC_FUNC_IMPL(__imp__sub_825A64B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A64B8"))) PPC_WEAK_FUNC(sub_825A64B8);
PPC_FUNC_IMPL(__imp__sub_825A64B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,532(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x825a65a4
	if (cr6.gt) goto loc_825A65A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825a65a4
	if (cr6.gt) goto loc_825A65A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a6560
	if (cr6.eq) goto loc_825A6560;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x825a65a4
	if (!cr6.gt) goto loc_825A65A4;
	// li r11,0
	r11.s64 = 0;
	// b 0x825a65a0
	goto loc_825A65A0;
loc_825A6560:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 536);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825a6580
	if (!cr6.gt) goto loc_825A6580;
	// li r11,4
	r11.s64 = 4;
	// b 0x825a65a0
	goto loc_825A65A0;
loc_825A6580:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,540(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x825a65a4
	if (cr6.lt) goto loc_825A65A4;
	// li r11,3
	r11.s64 = 3;
loc_825A65A0:
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
loc_825A65A4:
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

__attribute__((alias("__imp__sub_825A65B8"))) PPC_WEAK_FUNC(sub_825A65B8);
PPC_FUNC_IMPL(__imp__sub_825A65B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A65BC"))) PPC_WEAK_FUNC(sub_825A65BC);
PPC_FUNC_IMPL(__imp__sub_825A65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A65C0"))) PPC_WEAK_FUNC(sub_825A65C0);
PPC_FUNC_IMPL(__imp__sub_825A65C0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825a66a0
	if (cr6.gt) goto loc_825A66A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f13,532(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825a662c
	if (!cr6.gt) goto loc_825A662C;
	// li r11,1
	r11.s64 = 1;
	// b 0x825a669c
	goto loc_825A669C;
loc_825A662C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a6654
	if (cr6.eq) goto loc_825A6654;
	// li r11,0
	r11.s64 = 0;
	// b 0x825a669c
	goto loc_825A669C;
loc_825A6654:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 536);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825a667c
	if (!cr6.gt) goto loc_825A667C;
	// li r11,4
	r11.s64 = 4;
	// b 0x825a669c
	goto loc_825A669C;
loc_825A667C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,540(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x825a66a0
	if (cr6.lt) goto loc_825A66A0;
	// li r11,3
	r11.s64 = 3;
loc_825A669C:
	// stw r11,1304(r30)
	PPC_STORE_U32(r30.u32 + 1304, r11.u32);
loc_825A66A0:
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

__attribute__((alias("__imp__sub_825A66B4"))) PPC_WEAK_FUNC(sub_825A66B4);
PPC_FUNC_IMPL(__imp__sub_825A66B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A66B8"))) PPC_WEAK_FUNC(sub_825A66B8);
PPC_FUNC_IMPL(__imp__sub_825A66B8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825a5ac8
	sub_825A5AC8(ctx, base);
	// lfs f0,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	f0.f64 = double(temp.f32);
	// addi r4,r3,800
	ctx.r4.s64 = ctx.r3.s64 + 800;
	// stfs f0,1008(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1008, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// stfs f13,1012(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1012, temp.u32);
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lfs f12,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,944
	r11.s64 = ctx.r3.s64 + 944;
	// stfs f12,1016(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1016, temp.u32);
	// addi r3,r3,928
	ctx.r3.s64 = ctx.r3.s64 + 928;
	// lfs f11,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,864
	r11.s64 = r31.s64 + 864;
	// stfs f11,1020(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1020, temp.u32);
	// lfs f10,944(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1024(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1024, temp.u32);
	// lfs f9,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1028(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1028, temp.u32);
	// lfs f8,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1032(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1032, temp.u32);
	// lfs f7,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1036(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1036, temp.u32);
	// lfs f6,800(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 800);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,864(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 864, temp.u32);
	// lfs f5,804(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 804);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,868(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 868, temp.u32);
	// lfs f4,808(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 808);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,872(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 872, temp.u32);
	// lfs f3,812(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 812);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,876(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 876, temp.u32);
	// lfs f2,816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 816);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,880(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 880, temp.u32);
	// lfs f0,820(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 820);
	f0.f64 = double(temp.f32);
	// stfs f0,884(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 884, temp.u32);
	// lfs f13,824(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 824);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,888(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 888, temp.u32);
	// lfs f12,828(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 828);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,892(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 892, temp.u32);
	// lfs f11,832(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 832);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,896(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 896, temp.u32);
	// lfs f10,836(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 836);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,900(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 900, temp.u32);
	// lfs f9,840(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 840);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,904(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 904, temp.u32);
	// lfs f8,844(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 844);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,908(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 908, temp.u32);
	// lfs f7,848(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 848);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,912(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 912, temp.u32);
	// lfs f6,852(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 852);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,916(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 916, temp.u32);
	// lfs f5,856(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 856);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,920(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 920, temp.u32);
	// lfs f4,860(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 860);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,924(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 924, temp.u32);
	// lfs f1,-7288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7288);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f3,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 832);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,832
	r11.s64 = r31.s64 + 832;
	// stfs f3,1040(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 1040, temp.u32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// lfs f2,836(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 836);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r31,976
	ctx.r10.s64 = r31.s64 + 976;
	// stfs f2,1044(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1044, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,840(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 840);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f1,1048(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1048, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,844(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 844);
	f0.f64 = double(temp.f32);
	// stfs f0,1052(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1052, temp.u32);
	// lfs f13,832(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 832);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1056, temp.u32);
	// lfs f12,836(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 836);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1060(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1060, temp.u32);
	// lfs f11,840(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 840);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1064(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1064, temp.u32);
	// lfs f10,844(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 844);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1068(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1068, temp.u32);
	// lfs f9,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,960(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,964(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// lfs f7,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,968(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// lfs f6,248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,972(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// lfs f5,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,976(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
	// lfs f4,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,980(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// lfs f3,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,984(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 984, temp.u32);
	// lfs f2,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,988(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 988, temp.u32);
	// lfs f1,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,840(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 816);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,836(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 836);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,800(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 800);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,808(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 808);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	f0.f64 = double(temp.f32);
	// lfs f11,820(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 820);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmadds f3,f4,f1,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f10.f64));
	// lfs f10,804(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 804);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f2,f7,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f12.f64));
	// lfs f12,832(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f5,f6,f7,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,824(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 824);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f7,f10,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f3.f64));
	// lfs f6,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f0,f8,f13
	ctx.f7.f64 = double(float(f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f6,1132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1132, temp.u32);
	// fmadds f11,f1,f12,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,1120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1120, temp.u32);
	// stfs f9,1124(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1124, temp.u32);
	// stfs f7,1128(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1128, temp.u32);
	// lfs f4,824(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 824);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,800(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 800);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,820(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 820);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,988(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 988);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,984(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 984);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,832(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 832);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,840(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 840);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,836(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 836);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 816);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,808(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 808);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,804(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 804);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f5,980(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f8,1148(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1148, temp.u32);
	// fmadds f13,f5,f13,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f0,3656(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3656);
	f0.f64 = double(temp.f32);
	// fmadds f8,f2,f1,f3
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f6,f2,f12,f4
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f4,f9,f2,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f4,1140(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 1140, temp.u32);
	// fmadds f3,f11,f5,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f3,1136(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 1136, temp.u32);
	// fmadds f2,f10,f7,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f2,1144(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1144, temp.u32);
	// stfs f0,1236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1236, temp.u32);
	// stb r8,1322(r31)
	PPC_STORE_U8(r31.u32 + 1322, ctx.r8.u8);
	// stb r7,1324(r31)
	PPC_STORE_U8(r31.u32 + 1324, ctx.r7.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A693C"))) PPC_WEAK_FUNC(sub_825A693C);
PPC_FUNC_IMPL(__imp__sub_825A693C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6940"))) PPC_WEAK_FUNC(sub_825A6940);
PPC_FUNC_IMPL(__imp__sub_825A6940) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,1252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1252);
	f0.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f12,456(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f13,1252(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1252, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825a69a4
	if (!cr6.lt) goto loc_825A69A4;
	// lbz r11,1316(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a69a4
	if (cr6.eq) goto loc_825A69A4;
	// lfs f0,332(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	f0.f64 = double(temp.f32);
	// stfs f0,1072(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1072, temp.u32);
	// lfs f13,336(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1076(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1076, temp.u32);
	// lfs f12,340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1080(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1080, temp.u32);
	// lfs f11,344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1084(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1084, temp.u32);
loc_825A69A4:
	// lfs f0,1256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1256);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lfs f13,460(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,1256(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1256, temp.u32);
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x825a69f4
	if (!cr6.lt) goto loc_825A69F4;
	// lbz r11,1317(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1317);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a69f4
	if (cr6.eq) goto loc_825A69F4;
	// addi r4,r31,752
	ctx.r4.s64 = r31.s64 + 752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a0930
	sub_825A0930(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,1072(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1072, temp.u32);
	// stfs f13,1076(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1076, temp.u32);
	// stfs f12,1080(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1080, temp.u32);
	// stfs f11,1084(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1084, temp.u32);
loc_825A69F4:
	// lbz r11,1320(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6a34
	if (cr6.eq) goto loc_825A6A34;
	// lfs f0,1072(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1072);
	f0.f64 = double(temp.f32);
	// addi r11,r31,1072
	r11.s64 = r31.s64 + 1072;
	// lfs f13,1076(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1076);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f11,1080(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1080);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,1084(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1084);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f12,1072(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1072, temp.u32);
	// stfs f10,1076(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1076, temp.u32);
	// stfs f8,1080(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1080, temp.u32);
	// stfs f7,1084(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1084, temp.u32);
loc_825A6A34:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A6A4C"))) PPC_WEAK_FUNC(sub_825A6A4C);
PPC_FUNC_IMPL(__imp__sub_825A6A4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6A50"))) PPC_WEAK_FUNC(sub_825A6A50);
PPC_FUNC_IMPL(__imp__sub_825A6A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,1320(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6aac
	if (cr6.eq) goto loc_825A6AAC;
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f0,960(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// lfs f13,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,964(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// lfs f12,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,968(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lfs f11,296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,972(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// lfs f10,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,976(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f9,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,980(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// lfs f8,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,984(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f7,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f7,988(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// stfs f0,1284(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1284, temp.u32);
	// blr 
	return;
loc_825A6AAC:
	// lbz r11,556(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 556);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a6b74
	if (!cr6.eq) goto loc_825A6B74;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,1268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1268);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f4,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,972(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// fmuls f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fadds f11,f1,f10
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f11,960(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// fadds f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f10,964(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// fadds f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f9,968(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lfs f8,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1268);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	f0.f64 = double(float(f0.f64 - ctx.f1.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f2,988(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f11,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fadds f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f6,984(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,980(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f5,976(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// blr 
	return;
loc_825A6B74:
	// lfs f0,1184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	f0.f64 = double(temp.f32);
	// stfs f0,960(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 960, temp.u32);
	// lfs f13,1188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,964(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// lfs f12,1192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,968(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lfs f11,1196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,972(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 972, temp.u32);
	// lfs f10,1200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,976(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 976, temp.u32);
	// lfs f9,1204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,980(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 980, temp.u32);
	// lfs f8,1208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,984(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 984, temp.u32);
	// lfs f7,1212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1212);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,988(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 988, temp.u32);
}

__attribute__((alias("__imp__sub_825A6BB4"))) PPC_WEAK_FUNC(sub_825A6BB4);
PPC_FUNC_IMPL(__imp__sub_825A6BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6BB8"))) PPC_WEAK_FUNC(sub_825A6BB8);
PPC_FUNC_IMPL(__imp__sub_825A6BB8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f10,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// fmuls f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f0,f1
	ctx.f3.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f9.f64 = double(temp.f32);
	// fadds f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f5,f12,f1
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmadds f1,f7,f4,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f10,f0,f3,f1
	ctx.f10.f64 = double(float(f0.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x825a6c6c
	if (!cr6.lt) goto loc_825A6C6C;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f1,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f1,0(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f0,f12,f4
	f0.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f13,f11,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fadds f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
loc_825A6C6C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825A6C70"))) PPC_WEAK_FUNC(sub_825A6C70);
PPC_FUNC_IMPL(__imp__sub_825A6C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6C74"))) PPC_WEAK_FUNC(sub_825A6C74);
PPC_FUNC_IMPL(__imp__sub_825A6C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6C78"))) PPC_WEAK_FUNC(sub_825A6C78);
PPC_FUNC_IMPL(__imp__sub_825A6C78) {
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
	// bl 0x828eaaf8
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stb r10,1325(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1325, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,20948
	ctx.r4.s64 = ctx.r6.s64 + 20948;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// bne cr6,0x825a6cd8
	if (!cr6.eq) goto loc_825A6CD8;
	// li r30,0
	r30.s64 = 0;
loc_825A6CD8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,20576
	ctx.r4.s64 = ctx.r9.s64 + 20576;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a6eac
	if (cr6.eq) goto loc_825A6EAC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6eac
	if (cr6.eq) goto loc_825A6EAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// addi r5,r8,12680
	ctx.r5.s64 = ctx.r8.s64 + 12680;
	// addi r4,r7,12696
	ctx.r4.s64 = ctx.r7.s64 + 12696;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r28,16(r6)
	r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// bl 0x82406e40
	sub_82406E40(ctx, base);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r9,-5452
	ctx.r4.s64 = ctx.r9.s64 + -5452;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f11,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,1184(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1184, temp.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
	// addi r30,r31,1184
	r30.s64 = r31.s64 + 1184;
	// lfs f0,-7308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7308);
	f0.f64 = double(temp.f32);
	// lfs f13,-7304(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -7304);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f9,1188(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1188, temp.u32);
	// stfs f8,1192(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1192, temp.u32);
	// stfs f31,1200(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1200, temp.u32);
	// lfs f6,1188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1188);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1204(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1204, temp.u32);
	// lfs f5,1192(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1192);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// lfs f12,-7300(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -7300);
	ctx.f12.f64 = double(temp.f32);
	// stfs f5,1208(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 1208, temp.u32);
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// lfs f4,1196(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1196);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1212(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 1212, temp.u32);
	// stfs f2,1208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1208, temp.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6eac
	if (cr6.eq) goto loc_825A6EAC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f28.f64 = double(temp.f32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r8,252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f29,96(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,23632(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23632);
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825a6e7c
	if (cr6.eq) goto loc_825A6E7C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a6e80
	if (!cr6.eq) goto loc_825A6E80;
loc_825A6E7C:
	// li r11,0
	r11.s64 = 0;
loc_825A6E80:
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a6eac
	if (cr6.eq) goto loc_825A6EAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6EAC:
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825A6EC0"))) PPC_WEAK_FUNC(sub_825A6EC0);
PPC_FUNC_IMPL(__imp__sub_825A6EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825A6EC4"))) PPC_WEAK_FUNC(sub_825A6EC4);
PPC_FUNC_IMPL(__imp__sub_825A6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6EC8"))) PPC_WEAK_FUNC(sub_825A6EC8);
PPC_FUNC_IMPL(__imp__sub_825A6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// bl 0x828e9400
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eaac0
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r28,-32253
	r28.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,800
	ctx.r4.s64 = ctx.r3.s64 + 800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lfs f1,-7288(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -7288);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r30,r31,928
	r30.s64 = r31.s64 + 928;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,-23476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23476);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x8233d748
	sub_8233D748(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,928(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 928, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 932, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,936(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 936, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,940(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 940, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f10,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 464);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 / ctx.f10.f64));
	// lis r24,-32229
	r24.s64 = -2112159744;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f8,1072(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1072);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1076(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1076);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r31,960
	r30.s64 = r31.s64 + 960;
	// addi r29,r11,-19808
	r29.s64 = r11.s64 + -19808;
	// lfs f6,1080(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1080);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,848(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 848);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,1072
	r11.s64 = r31.s64 + 1072;
	// lfs f0,-25600(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r11,r31,1088
	r11.s64 = r31.s64 + 1088;
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f4,852(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 852);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f0,f9
	ctx.f2.f64 = double(float(f0.f64 - ctx.f9.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,856(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 856);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f13,1084(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1084);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f13,1084(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1084, temp.u32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f10,f8,f2
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fadds f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f7,1072(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1072, temp.u32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f6,1076(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1076, temp.u32);
	// fadds f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f5,1080(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 1080, temp.u32);
	// lfs f4,1088(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1088);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1092(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1092);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,1096(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1096);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,468(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 468);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f31,f2
	ctx.f1.f64 = double(float(f31.f64 / ctx.f2.f64));
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// lfs f12,1104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1108(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1112(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,1100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f3,f11,f1
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f8,1100(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1100, temp.u32);
	// fmuls f2,f10,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f13,-7288(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -7288);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmr f21,f0
	f21.f64 = f0.f64;
	// fadds f0,f6,f3
	f0.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f0,1092(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1092, temp.u32);
	// fadds f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f12,1096(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1096, temp.u32);
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,1088(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1088, temp.u32);
	// lfs f11,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f6,960(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// lfs f5,1092(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1092);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f4,964(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f3,1096(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1096);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f2,968(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// lfs f1,1100(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1100);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f9,f1
	f0.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f0,972(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// lfs f9,1072(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1072);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f7,960(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// lfs f6,1076(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1076);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f4
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f5,964(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// lfs f4,1080(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1080);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f2
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f3,968(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// lfs f2,1084(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1084);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + f0.f64));
	// stfs f1,972(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// fmr f0,f5
	f0.f64 = ctx.f5.f64;
	// lfs f10,1216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1216);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f8,960(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// lfs f7,1220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1220);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f5
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f6,964(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f5,1224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1224);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f3
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f4,968(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// lfs f3,1228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1228);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f2,972(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// lfs f0,1300(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1300);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825a7120
	if (!cr6.gt) goto loc_825A7120;
	// fdivs f21,f31,f0
	f21.f64 = double(float(f31.f64 / f0.f64));
loc_825A7120:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f1,1284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1284);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r23,r11,12648
	r23.s64 = r11.s64 + 12648;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r11,12632
	ctx.r4.s64 = r11.s64 + 12632;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f1,1288(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1288);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f7,12(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f5,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// lfs f17,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f17.f64 = double(temp.f32);
	// lfs f3,984(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 984);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f17,f3
	ctx.f11.f64 = double(float(f17.f64 * ctx.f3.f64));
	// lfs f4,980(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f17,f1
	f31.f64 = double(float(f17.f64 * ctx.f1.f64));
	// lfs f18,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f18.f64 = double(temp.f32);
	// fmuls f2,f30,f4
	ctx.f2.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f16,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f16.f64 = double(temp.f32);
	// fmuls f8,f18,f8
	ctx.f8.f64 = double(float(f18.f64 * ctx.f8.f64));
	// fmuls f1,f16,f1
	ctx.f1.f64 = double(float(f16.f64 * ctx.f1.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f16,f3
	f27.f64 = double(float(f16.f64 * ctx.f3.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lbz r10,1319(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1319);
	// lfs f29,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmadds f3,f18,f3,f2
	ctx.f3.f64 = double(float(f18.f64 * ctx.f3.f64 + ctx.f2.f64));
	// lfs f28,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f28.f64 = double(temp.f32);
	// fmadds f2,f13,f5,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f11.f64));
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f6,f0,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f8.f64));
	// lfs f10,988(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 988);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f13,f6,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + f31.f64));
	// fmadds f6,f12,f6,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f1,f12,f5,f27
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + f27.f64));
	// fmadds f24,f0,f5,f3
	f24.f64 = double(float(f0.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f23,f29,f4,f2
	f23.f64 = double(float(f29.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f27,f30,f7,f11
	f27.f64 = double(float(f30.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f26,f29,f7,f8
	f26.f64 = double(float(f29.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f25,f28,f7,f6
	f25.f64 = double(float(f28.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f22,f28,f4,f1
	f22.f64 = double(float(f28.f64 * ctx.f4.f64 + ctx.f1.f64));
	// beq cr6,0x825a73b4
	if (cr6.eq) goto loc_825A73B4;
	// lfs f11,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f8,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f23,f11
	ctx.f7.f64 = double(float(f23.f64 + ctx.f11.f64));
	// lfs f6,1140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1140);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f22,f8
	ctx.f5.f64 = double(float(f22.f64 + ctx.f8.f64));
	// lfs f4,1124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1124);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfs f12,1144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1144);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f25,f8
	ctx.f13.f64 = double(float(f25.f64 + ctx.f8.f64));
	// lfs f6,1128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1128);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f1,944(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f6,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f8,1136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,1120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1120);
	f0.f64 = double(temp.f32);
	// fadds f6,f24,f1
	ctx.f6.f64 = double(float(f24.f64 + ctx.f1.f64));
	// fadds f19,f27,f1
	f19.f64 = double(float(f27.f64 + ctx.f1.f64));
	// lfs f20,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	f20.f64 = double(temp.f32);
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// lfs f31,1148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1148);
	f31.f64 = double(temp.f32);
	// lfs f15,1132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1132);
	f15.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fadds f14,f31,f20
	f14.f64 = double(float(f31.f64 + f20.f64));
	// lfs f31,-7288(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -7288);
	f31.f64 = double(temp.f32);
	// fadds f15,f15,f20
	f15.f64 = double(float(f15.f64 + f20.f64));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fsubs f0,f2,f3
	f0.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f5,f10,f20
	ctx.f5.f64 = double(float(ctx.f10.f64 + f20.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f4,f26,f11
	ctx.f4.f64 = double(float(f26.f64 + ctx.f11.f64));
	// fsubs f11,f19,f6
	ctx.f11.f64 = double(float(f19.f64 - ctx.f6.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f9,f20
	ctx.f3.f64 = double(float(ctx.f9.f64 + f20.f64));
	// fsubs f10,f1,f8
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fsubs f2,f15,f14
	ctx.f2.f64 = double(float(f15.f64 - f14.f64));
	// stfs f2,172(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f9,f4,f7
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f3,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f7,f12,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f6,f11,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f20,f10,f10,f7
	f20.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f19,f9,f9,f6
	f19.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lfs f5,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// lfs f4,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f12,f4,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f9,f11,f3,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : f0.f64;
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsel f1,f6,f13,f7
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f0,11932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11932);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, f0.f64);
	// bgt cr6,0x825a73b4
	if (cr6.gt) goto loc_825A73B4;
	// fsqrts f0,f20
	f0.f64 = double(float(sqrt(f20.f64)));
	// lfs f12,-25600(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f13,f19
	ctx.f13.f64 = double(float(sqrt(f19.f64)));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x825a73b8
	if (!cr6.lt) goto loc_825A73B8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,1319(r31)
	PPC_STORE_U8(r31.u32 + 1319, r11.u8);
	// b 0x825a73b8
	goto loc_825A73B8;
loc_825A73B4:
	// lfs f12,-25600(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
loc_825A73B8:
	// fsubs f0,f12,f21
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 - f21.f64));
	// lfs f13,1120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1124);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f27,f21
	ctx.f10.f64 = double(float(f27.f64 * f21.f64));
	// lfs f9,1128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f26,f21
	ctx.f8.f64 = double(float(f26.f64 * f21.f64));
	// fmuls f7,f25,f21
	ctx.f7.f64 = double(float(f25.f64 * f21.f64));
	// lfs f6,1132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1132);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1132(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1132, temp.u32);
	// fmuls f5,f24,f21
	ctx.f5.f64 = double(float(f24.f64 * f21.f64));
	// fmuls f4,f22,f21
	ctx.f4.f64 = double(float(f22.f64 * f21.f64));
	// addi r30,r31,1120
	r30.s64 = r31.s64 + 1120;
	// fmuls f3,f23,f21
	ctx.f3.f64 = double(float(f23.f64 * f21.f64));
	// addi r29,r31,1136
	r29.s64 = r31.s64 + 1136;
	// addi r26,r31,944
	r26.s64 = r31.s64 + 944;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fadds f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f11,1120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1120, temp.u32);
	// fadds f10,f1,f8
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f10,1124(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1124, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f9,1128(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1128, temp.u32);
	// lfs f7,1144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1144);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// lfs f11,1140(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1140);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f2,1136(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1136);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f8,1148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1148);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1148(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1148, temp.u32);
	// fadds f9,f13,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f8,f10,f3
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f1,1144(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1144, temp.u32);
	// stfs f9,1136(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1136, temp.u32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// stfs f8,1140(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1140, temp.u32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// lfs f4,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f8,f6
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f7,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f2,f4
	f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f13,1148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f3,944(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f5,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,1128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1132(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1132);
	ctx.f6.f64 = double(temp.f32);
	// fadds f1,f7,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f0,1120(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1120);
	f0.f64 = double(temp.f32);
	// fadds f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// lfs f8,944(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,1124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1124);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lbz r11,1326(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1326);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a75bc
	if (!cr6.eq) goto loc_825A75BC;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a75b8
	if (cr6.eq) goto loc_825A75B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + f0.f64));
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f8,0(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f6,4(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stfs f4,8(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// stfs f3,12(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r27.u32 + 12, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 + f0.f64));
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f8,4(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f6,8(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f5,12(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
loc_825A75B8:
	// lfs f12,-25600(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
loc_825A75BC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f6,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f17,f0
	ctx.f3.f64 = double(float(f17.f64 * f0.f64));
	// lfs f13,-15528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15528);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f16,f0
	ctx.f2.f64 = double(float(f16.f64 * f0.f64));
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f18,f0,f5
	ctx.f1.f64 = double(float(f18.f64 * f0.f64 + ctx.f5.f64));
	// lfs f5,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f11,f0,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f3.f64));
	// fmadds f7,f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f2.f64));
	// fmadds f3,f30,f13,f1
	ctx.f3.f64 = double(float(f30.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f29,f13,f11
	ctx.f2.f64 = double(float(f29.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f1,f28,f13,f7
	ctx.f1.f64 = double(float(f28.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fadds f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// fadds f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// fadds f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f5,1268(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1268);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,492(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 492);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,496(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 496);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f3,f6,f5,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f3,88(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f11,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f29,f13
	ctx.f2.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmadds f1,f30,f11,f2
	ctx.f1.f64 = double(float(f30.f64 * ctx.f11.f64 + ctx.f2.f64));
	// lfs f8,12(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f28,f10,f1
	ctx.f7.f64 = double(float(f28.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fsubs f3,f12,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f10,f29,f3
	ctx.f10.f64 = double(float(f29.f64 * ctx.f3.f64));
	// fmuls f9,f30,f3
	ctx.f9.f64 = double(float(f30.f64 * ctx.f3.f64));
	// fmuls f8,f28,f3
	ctx.f8.f64 = double(float(f28.f64 * ctx.f3.f64));
	// fmuls f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fadds f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f6,60(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// fadds f5,f9,f1
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lbz r7,1321(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1321);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a7708
	if (cr6.eq) goto loc_825A7708;
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f9,480(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 480);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,484(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 484);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f30,f13,f10
	ctx.f7.f64 = double(float(f30.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f28,f11,f7
	ctx.f6.f64 = double(float(f28.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fsel f5,f6,f6,f0
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : f0.f64;
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmadds f1,f4,f8,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f3.f64));
	// bl 0x825a6bb8
	sub_825A6BB8(ctx, base);
loc_825A7708:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f12,f11
	f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f10,f9
	f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f28,f8,f7
	f28.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f2,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 * ctx.f1.f64));
	// lfs f6,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f30,f1
	f0.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lfs f5,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f29,f1
	ctx.f13.f64 = double(float(f29.f64 * ctx.f1.f64));
	// lfs f4,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f28,f1
	ctx.f12.f64 = double(float(f28.f64 * ctx.f1.f64));
	// lfs f3,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fadds f11,f2,f6
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// fadds f10,f0,f5
	ctx.f10.f64 = double(float(f0.f64 + ctx.f5.f64));
	// stfs f10,4(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f9,8(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// fadds f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f8,12(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_825A77A0"))) PPC_WEAK_FUNC(sub_825A77A0);
PPC_FUNC_IMPL(__imp__sub_825A77A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825A77A4"))) PPC_WEAK_FUNC(sub_825A77A4);
PPC_FUNC_IMPL(__imp__sub_825A77A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A77A8"))) PPC_WEAK_FUNC(sub_825A77A8);
PPC_FUNC_IMPL(__imp__sub_825A77A8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,1244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	f0.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,1244(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1244, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,1323(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1323, r29.u8);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1248, temp.u32);
	// bl 0x825a6940
	sub_825A6940(ctx, base);
	// lbz r10,1318(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1318);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a780c
	if (cr6.eq) goto loc_825A780C;
	// lfs f0,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 348);
	f0.f64 = double(temp.f32);
	// stfs f0,1104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1104, temp.u32);
	// lfs f13,352(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1108, temp.u32);
	// lfs f12,356(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1112, temp.u32);
	// lfs f11,360(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1116(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1116, temp.u32);
loc_825A780C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6a50
	sub_825A6A50(ctx, base);
	// lbz r11,1320(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a7908
	if (!cr6.eq) goto loc_825A7908;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a7908
	if (!cr6.eq) goto loc_825A7908;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-7240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a7908
	if (!cr6.lt) goto loc_825A7908;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lfs f10,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// addi r8,r9,12648
	ctx.r8.s64 = ctx.r9.s64 + 12648;
	// lfs f8,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,976
	r11.s64 = r31.s64 + 976;
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,12648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12648);
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
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(f0.f64 * ctx.f6.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fsubs f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f1,960(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// fsubs f0,f9,f4
	f0.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f0,964(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// fsubs f13,f8,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// stfs f13,968(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// fsubs f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// stfs f12,972(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// lfs f11,980(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,984(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 984);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,988(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 988);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f6,976(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
	// lfs f5,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,980(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// lfs f3,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f2,984(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 984, temp.u32);
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f9,f1
	f0.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfs f0,988(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 988, temp.u32);
	// stb r29,1321(r31)
	PPC_STORE_U8(r31.u32 + 1321, r29.u8);
loc_825A7908:
	// lbz r11,1319(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1319);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a7944
	if (!cr6.eq) goto loc_825A7944;
	// lbz r11,1320(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 516);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a793c
	if (!cr6.eq) goto loc_825A793C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a7944
	if (!cr6.lt) goto loc_825A7944;
loc_825A793C:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A7944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825A7948"))) PPC_WEAK_FUNC(sub_825A7948);
PPC_FUNC_IMPL(__imp__sub_825A7948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A794C"))) PPC_WEAK_FUNC(sub_825A794C);
PPC_FUNC_IMPL(__imp__sub_825A794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7950"))) PPC_WEAK_FUNC(sub_825A7950);
PPC_FUNC_IMPL(__imp__sub_825A7950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,1248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1248);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f13,1248(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1248, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// lfs f30,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f30.f64 = double(temp.f32);
	// stfs f30,1244(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1244, temp.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f12,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x825a79b4
	if (!cr6.gt) goto loc_825A79B4;
	// stfs f1,1260(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1260, temp.u32);
loc_825A79B4:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,1260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1260);
	f0.f64 = double(temp.f32);
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f31,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// ble cr6,0x825a79e0
	if (!cr6.gt) goto loc_825A79E0;
	// lfs f13,1248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1248);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fsel f11,f12,f12,f30
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f30.f64;
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fsel f30,f10,f31,f11
	f30.f64 = ctx.f10.f64 >= 0.0 ? f31.f64 : ctx.f11.f64;
loc_825A79E0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1176(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1176);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f11,1168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,1180(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1180);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1060(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1060);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-7236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7236);
	f0.f64 = double(temp.f32);
	// fmuls f10,f30,f0
	ctx.f10.f64 = double(float(f30.f64 * f0.f64));
	// lfs f7,1064(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1064);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,1068(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1068);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,1056(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1056);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,-7288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7288);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f10,f31
	ctx.f3.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fsel f2,f3,f31,f10
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? f31.f64 : ctx.f10.f64;
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f13,f12,f2
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fadds f0,f8,f1
	f0.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fadds f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fcmpu cr6,f1,f4
	cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// ble cr6,0x825a7a88
	if (!cr6.gt) goto loc_825A7A88;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f31,f9
	ctx.f8.f64 = double(float(f31.f64 / ctx.f9.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(f0.f64 * ctx.f8.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x825a7a98
	goto loc_825A7A98;
loc_825A7A88:
	// stfs f6,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_825A7A98:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r31,864
	r30.s64 = r31.s64 + 864;
	// addi r6,r31,1152
	ctx.r6.s64 = r31.s64 + 1152;
	// addi r5,r11,-19808
	ctx.r5.s64 = r11.s64 + -19808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// lfs f0,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	f0.f64 = double(temp.f32);
	// stfs f0,912(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 912, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,800
	r11.s64 = r31.s64 + 800;
	// stfs f13,916(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 916, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f12,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// stfs f12,920(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 920, temp.u32);
	// stfs f31,924(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 924, temp.u32);
	// lfs f11,864(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 864);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,800(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 800, temp.u32);
	// lfs f10,868(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 868);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,804(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 804, temp.u32);
	// lfs f9,872(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 872);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,808(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 808, temp.u32);
	// lfs f8,876(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 876);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,812(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 812, temp.u32);
	// lfs f7,880(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 880);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,816(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 816, temp.u32);
	// lfs f6,884(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 884);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,820(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 820, temp.u32);
	// lfs f5,888(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 888);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,824(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 824, temp.u32);
	// lfs f4,892(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 892);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,828(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 828, temp.u32);
	// lfs f3,896(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 896);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,832(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 832, temp.u32);
	// lfs f2,900(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 900);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,836(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 836, temp.u32);
	// lfs f0,904(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 904);
	f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 840, temp.u32);
	// lfs f13,908(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,844(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 844, temp.u32);
	// lfs f12,912(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 912);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,848(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 848, temp.u32);
	// lfs f11,916(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 916);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,852(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 852, temp.u32);
	// lfs f10,920(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 920);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,856(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 856, temp.u32);
	// lfs f9,924(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 924);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,860(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 860, temp.u32);
	// bl 0x825a6940
	sub_825A6940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6a50
	sub_825A6A50(ctx, base);
	// lbz r10,1320(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a7c20
	if (!cr6.eq) goto loc_825A7C20;
	// lfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 404);
	f0.f64 = double(temp.f32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// lfs f13,396(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 * f30.f64));
	// lfs f7,408(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 408);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 * f30.f64));
	// lfs f10,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,976
	r11.s64 = r31.s64 + 976;
	// lfs f3,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,400(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 400);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f4,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f12,f10
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f2,968(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,960(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// fadds f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f13,972(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// fadds f0,f6,f4
	f0.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f0,964(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// lfs f11,984(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,980(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,392(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 392);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f12,384(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,380(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 380);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,988(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 988);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,388(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 388);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 * f30.f64));
	// fmuls f5,f12,f30
	ctx.f5.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f0,f6,f30
	f0.f64 = double(float(ctx.f6.f64 * f30.f64));
	// fadds f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f12,984(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 984, temp.u32);
	// fadds f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f3,988(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 988, temp.u32);
	// fadds f13,f5,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f13,980(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// fadds f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f11,976(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
loc_825A7C20:
	// lbz r11,1320(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 516);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a7c48
	if (!cr6.eq) goto loc_825A7C48;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a7c50
	if (!cr6.lt) goto loc_825A7C50;
loc_825A7C48:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A7C50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_825A7C70"))) PPC_WEAK_FUNC(sub_825A7C70);
PPC_FUNC_IMPL(__imp__sub_825A7C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A7C74"))) PPC_WEAK_FUNC(sub_825A7C74);
PPC_FUNC_IMPL(__imp__sub_825A7C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7C78"))) PPC_WEAK_FUNC(sub_825A7C78);
PPC_FUNC_IMPL(__imp__sub_825A7C78) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r3,928
	ctx.r4.s64 = ctx.r3.s64 + 928;
	// stb r10,1324(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1324, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,1240(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1240, temp.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,800
	ctx.r10.s64 = r31.s64 + 800;
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f12,1156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1156, temp.u32);
	// addi r11,r31,1168
	r11.s64 = r31.s64 + 1168;
	// stfs f10,1164(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1164, temp.u32);
	// stfs f11,1160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1160, temp.u32);
	// stfs f13,1152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1152, temp.u32);
	// stfs f31,1260(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1260, temp.u32);
	// lfs f9,364(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1168(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1168, temp.u32);
	// lfs f8,368(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1172(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1172, temp.u32);
	// lfs f7,372(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 372);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1176(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1176, temp.u32);
	// lfs f6,376(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1180(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1180, temp.u32);
	// lfs f5,808(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 808);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,1064(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1064);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,1056(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1056);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,800(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 800);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f11,804(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 804);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f5,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f10.f64));
	// lfs f13,812(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 812);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fsqrts f6,f8
	ctx.f6.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f1,f2,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f9.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f4,f0,f6
	ctx.f4.f64 = double(float(f0.f64 / ctx.f6.f64));
	// lfs f0,-7232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7232);
	f0.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmadds f3,f11,f31,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f7.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f5,f4
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f11,f4,f31
	ctx.f11.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fcmpu cr6,f3,f31
	cr6.compare(ctx.f3.f64, f31.f64);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * f0.f64));
	// ble cr6,0x825a7d90
	if (!cr6.gt) goto loc_825A7D90;
	// fadds f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f0,f4,f8
	f0.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// b 0x825a7da0
	goto loc_825A7DA0;
loc_825A7D90:
	// fsubs f1,f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fsubs f0,f8,f4
	f0.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fsubs f13,f7,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
loc_825A7DA0:
	// stfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A7DC4"))) PPC_WEAK_FUNC(sub_825A7DC4);
PPC_FUNC_IMPL(__imp__sub_825A7DC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A7DC8"))) PPC_WEAK_FUNC(sub_825A7DC8);
PPC_FUNC_IMPL(__imp__sub_825A7DC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,1296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-15528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15528);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a7ecc
	if (!cr6.lt) goto loc_825A7ECC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,1272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x825a7ee4
	if (!cr6.gt) goto loc_825A7EE4;
	// lbz r11,1323(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1323);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a7e20
	if (!cr6.eq) goto loc_825A7E20;
	// lfs f0,1044(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x825a7ee4
	if (!cr6.gt) goto loc_825A7EE4;
loc_825A7E20:
	// li r11,1
	r11.s64 = 1;
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1044);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// stb r11,1323(r31)
	PPC_STORE_U8(r31.u32 + 1323, r11.u8);
	// ble cr6,0x825a7ea4
	if (!cr6.gt) goto loc_825A7EA4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r10,r11,12648
	ctx.r10.s64 = r11.s64 + 12648;
	// addi r30,r31,864
	r30.s64 = r31.s64 + 864;
	// addi r5,r9,-19808
	ctx.r5.s64 = ctx.r9.s64 + -19808;
	// lfs f0,12648(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12648);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r4,r31,1040
	ctx.r4.s64 = r31.s64 + 1040;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// lfs f13,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,912(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 912, temp.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f12,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f12,916(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 916, temp.u32);
	// lfs f11,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f11,920(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 920, temp.u32);
	// stfs f0,924(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 924, temp.u32);
	// b 0x825a7edc
	goto loc_825A7EDC;
loc_825A7EA4:
	// lfs f0,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	f0.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// stfs f0,912(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 912, temp.u32);
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,916(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 916, temp.u32);
	// lfs f12,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f12,920(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 920, temp.u32);
	// stfs f0,924(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 924, temp.u32);
	// b 0x825a7ed8
	goto loc_825A7ED8;
loc_825A7ECC:
	// lbz r11,1323(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1323);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a7ee4
	if (cr6.eq) goto loc_825A7EE4;
loc_825A7ED8:
	// addi r4,r31,864
	ctx.r4.s64 = r31.s64 + 864;
loc_825A7EDC:
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x822d3698
	sub_822D3698(ctx, base);
loc_825A7EE4:
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

__attribute__((alias("__imp__sub_825A7EF8"))) PPC_WEAK_FUNC(sub_825A7EF8);
PPC_FUNC_IMPL(__imp__sub_825A7EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A7EFC"))) PPC_WEAK_FUNC(sub_825A7EFC);
PPC_FUNC_IMPL(__imp__sub_825A7EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A7F00"))) PPC_WEAK_FUNC(sub_825A7F00);
PPC_FUNC_IMPL(__imp__sub_825A7F00) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,944(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// addi r30,r3,944
	r30.s64 = ctx.r3.s64 + 944;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stfs f0,992(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 992, temp.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f13,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stfs f13,996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 996, temp.u32);
	// lfs f12,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f12,1000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1000, temp.u32);
	// lfs f11,956(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 956);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1004(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1004, temp.u32);
	// lfs f10,1272(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1272);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1232(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1232, temp.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lfs f1,444(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 444);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f9,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,64(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// stfs f9,944(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 944, temp.u32);
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,948(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 948, temp.u32);
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stfs f7,952(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 952, temp.u32);
	// lfs f6,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,956(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 956, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f5,944(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 944);
	ctx.f5.f64 = double(temp.f32);
	// lis r3,-31965
	ctx.r3.s64 = -2094858240;
	// lfs f4,948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 948);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,800
	r11.s64 = r31.s64 + 800;
	// lfs f3,952(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 952);
	ctx.f3.f64 = double(temp.f32);
	// li r24,1
	r24.s64 = 1;
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r3,12648
	r11.s64 = ctx.r3.s64 + 12648;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,800(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 800, temp.u32);
	// stfs f1,804(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 804, temp.u32);
	// stfs f0,808(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 808, temp.u32);
	// stfs f13,812(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 812, temp.u32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,816(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 816, temp.u32);
	// stfs f11,820(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 820, temp.u32);
	// stfs f10,824(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 824, temp.u32);
	// stfs f9,828(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 828, temp.u32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f30.f64 = double(temp.f32);
	// stfs f8,832(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 832, temp.u32);
	// stfs f7,836(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 836, temp.u32);
	// stfs f6,840(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 840, temp.u32);
	// stfs f2,844(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 844, temp.u32);
	// stfs f5,848(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 848, temp.u32);
	// stfs f4,852(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 852, temp.u32);
	// stfs f3,856(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 856, temp.u32);
	// stfs f30,860(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 860, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lbz r10,1322(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1322);
	// lfs f1,824(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 824);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f12,820(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 820);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f11,816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 816);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12648(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12648);
	ctx.f13.f64 = double(temp.f32);
	// stb r24,1321(r31)
	PPC_STORE_U8(r31.u32 + 1321, r24.u8);
	// fmadds f9,f12,f0,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f8,f11,f13,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,1280(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1280, temp.u32);
	// beq cr6,0x825a809c
	if (cr6.eq) goto loc_825A809C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a66b8
	sub_825A66B8(ctx, base);
loc_825A809C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,1324(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1324);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// beq cr6,0x825a81c8
	if (cr6.eq) goto loc_825A81C8;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f11,1012(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1012);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,1008
	r11.s64 = r31.s64 + 1008;
	// lfs f10,1016(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1016);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f0,f11
	ctx.f13.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,1008(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1008);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,1020(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1020);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f11,f9
	f0.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f6,-13388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// fadds f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fcmpu cr6,f4,f6
	cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// ble cr6,0x825a8158
	if (!cr6.gt) goto loc_825A8158;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// fdivs f3,f30,f5
	ctx.f3.f64 = double(float(f30.f64 / ctx.f5.f64));
	// stfs f7,1052(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1052, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfs f2,1040(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1040, temp.u32);
	// fmuls f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f1,1044(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1044, temp.u32);
	// fmuls f0,f12,f3
	f0.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f0,1048(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1048, temp.u32);
	// stfs f31,1296(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1296, temp.u32);
	// b 0x825a8164
	goto loc_825A8164;
loc_825A8158:
	// lfs f0,1296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1296);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(f0.f64 + f29.f64));
	// stfs f13,1296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1296, temp.u32);
loc_825A8164:
	// lfs f6,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,1024
	r11.s64 = r31.s64 + 1024;
	// lfs f4,1036(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1036);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f13,1024(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f10,1028(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1028);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,1032(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1032);
	ctx.f7.f64 = double(temp.f32);
	// stfs f3,1068(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 1068, temp.u32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,1056(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1056, temp.u32);
	// stfs f8,1060(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 1060, temp.u32);
	// stfs f5,1064(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 1064, temp.u32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,1024(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1024, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,1028(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 1028, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1032(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1032, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1036(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1036, temp.u32);
loc_825A81C8:
	// lfs f0,1264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	f0.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// fadds f13,f29,f0
	ctx.f13.f64 = double(float(f29.f64 + f0.f64));
	// stfs f31,1272(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1272, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stfs f31,1284(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1284, temp.u32);
	// stb r26,1320(r31)
	PPC_STORE_U8(r31.u32 + 1320, r26.u8);
	// stfs f31,1288(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1288, temp.u32);
	// addi r28,r11,-19808
	r28.s64 = r11.s64 + -19808;
	// stfs f31,1292(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1292, temp.u32);
	// stfs f13,1264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1264, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1268, temp.u32);
	// beq cr6,0x825a8328
	if (cr6.eq) goto loc_825A8328;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 488);
	f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// stfs f7,1272(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1272, temp.u32);
	// fdivs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 / f0.f64));
	// fsubs f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 - f30.f64));
	// fsel f4,f5,f30,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? f30.f64 : ctx.f6.f64;
	// stfs f4,1268(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 1268, temp.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,18232
	ctx.r4.s64 = ctx.r6.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a8328
	if (cr6.eq) goto loc_825A8328;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82339968
	sub_82339968(ctx, base);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f1,-7288(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7288);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f7,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f5,f9,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f2,f8,f4,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,1276(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 1276, temp.u32);
loc_825A8328:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,448(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 448);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4036);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x825a83a8
	if (!cr6.lt) goto loc_825A83A8;
	// lbz r11,8(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a83a8
	if (cr6.eq) goto loc_825A83A8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x825a837c
	if (cr6.eq) goto loc_825A837C;
	// lbz r11,557(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 557);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a83a8
	if (!cr6.eq) goto loc_825A83A8;
loc_825A837C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-7200
	ctx.r4.s64 = r11.s64 + -7200;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,12628(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12628);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-7320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7320);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,1284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1284, temp.u32);
loc_825A83A8:
	// lwz r11,1312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1312);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// blt 0x825a83c8
	if (cr0.lt) goto loc_825A83C8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A83C8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x825a83e0
	if (cr6.gt) goto loc_825A83E0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A83E0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, r11.u32);
	// lbz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a845c
	if (cr6.eq) goto loc_825A845C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a845c
	if (!cr6.eq) goto loc_825A845C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-7224
	ctx.r4.s64 = r11.s64 + -7224;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// mr r11,r24
	r11.u64 = r24.u64;
	// bne cr6,0x825a841c
	if (!cr6.eq) goto loc_825A841C;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825A841C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a845c
	if (cr6.eq) goto loc_825A845C;
	// lwz r11,1308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1308);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r8,r10,21846
	ctx.r8.u64 = ctx.r10.u64 | 21846;
	// stw r9,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, ctx.r9.u32);
	// mulhw r10,r11,r8
	ctx.r10.s64 = (int64_t(r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
	// stw r6,1308(r31)
	PPC_STORE_U32(r31.u32 + 1308, ctx.r6.u32);
loc_825A845C:
	// lwz r11,1308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1308);
	// addi r30,r31,1216
	r30.s64 = r31.s64 + 1216;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a84c4
	if (cr6.eq) goto loc_825A84C4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825a849c
	if (cr6.eq) goto loc_825A849C;
	// stfs f31,1292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1292, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,1216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1216, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1220, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1224, temp.u32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1228, temp.u32);
	// b 0x825a84ec
	goto loc_825A84EC;
loc_825A849C:
	// lfs f0,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 544);
	f0.f64 = double(temp.f32);
	// stfs f0,1292(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1292, temp.u32);
	// lfs f13,412(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1216, temp.u32);
	// lfs f12,416(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1220, temp.u32);
	// lfs f11,420(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1224, temp.u32);
	// lfs f10,424(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// b 0x825a84e8
	goto loc_825A84E8;
loc_825A84C4:
	// lfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 548);
	f0.f64 = double(temp.f32);
	// stfs f0,1292(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1292, temp.u32);
	// lfs f13,428(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1216, temp.u32);
	// lfs f12,432(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 432);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1220, temp.u32);
	// lfs f11,436(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1224, temp.u32);
	// lfs f10,440(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 440);
	ctx.f10.f64 = double(temp.f32);
loc_825A84E8:
	// stfs f10,1228(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1228, temp.u32);
loc_825A84EC:
	// lfs f0,1288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1288);
	f0.f64 = double(temp.f32);
	// lbz r11,558(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 558);
	// lfs f13,1292(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1292);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,1288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1288, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a855c
	if (cr6.eq) goto loc_825A855C;
	// lbz r11,8(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a855c
	if (cr6.eq) goto loc_825A855C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-15524
	ctx.r4.s64 = r11.s64 + -15524;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// beq cr6,0x825a855c
	if (cr6.eq) goto loc_825A855C;
	// stfs f31,1288(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1288, temp.u32);
	// stb r24,1320(r31)
	PPC_STORE_U8(r31.u32 + 1320, r24.u8);
	// stfs f31,1284(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1284, temp.u32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f31,1264(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1264, temp.u32);
loc_825A855C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a5db0
	sub_825A5DB0(ctx, base);
	// stb r26,1318(r31)
	PPC_STORE_U8(r31.u32 + 1318, r26.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stfs f0,1104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1104, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1108, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stfs f0,1112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1112, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lfs f0,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1116, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,-7228(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7228);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x825a85b4
	if (!cr6.lt) goto loc_825A85B4;
	// stb r24,1318(r31)
	PPC_STORE_U8(r31.u32 + 1318, r24.u8);
loc_825A85B4:
	// lbz r11,1325(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1325);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a85d0
	if (!cr6.eq) goto loc_825A85D0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6c78
	sub_825A6C78(ctx, base);
loc_825A85D0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,1326(r31)
	PPC_STORE_U8(r31.u32 + 1326, ctx.r3.u8);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_825A8600"))) PPC_WEAK_FUNC(sub_825A8600);
PPC_FUNC_IMPL(__imp__sub_825A8600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825A8604"))) PPC_WEAK_FUNC(sub_825A8604);
PPC_FUNC_IMPL(__imp__sub_825A8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8608"))) PPC_WEAK_FUNC(sub_825A8608);
PPC_FUNC_IMPL(__imp__sub_825A8608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f1,8740(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8740);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x825a7dc8
	sub_825A7DC8(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f0,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1248);
	f0.f64 = double(temp.f32);
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 + f0.f64));
	// stfs f13,1248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1248, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f31,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,1244(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1244, temp.u32);
	// bl 0x825a6940
	sub_825A6940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6a50
	sub_825A6A50(ctx, base);
	// lbz r7,1320(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825a87b0
	if (!cr6.eq) goto loc_825A87B0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 500);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825a87b0
	if (!cr6.gt) goto loc_825A87B0;
	// lfs f0,472(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 472);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f10,1248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1248);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r4,r31,560
	ctx.r4.s64 = r31.s64 + 560;
	// lfs f0,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsel f7,f9,f9,f31
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f4,f6,f31,f8
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? f31.f64 : ctx.f8.f64;
	// fsel f31,f5,f0,f7
	f31.f64 = ctx.f5.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fsel f30,f3,f13,f4
	f30.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// bl 0x825a0930
	sub_825A0930(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r31,608
	ctx.r4.s64 = r31.s64 + 608;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fmuls f13,f2,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 * f30.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(f0.f64 * f30.f64));
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f7,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f5,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f5.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f4,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// fadds f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f3,960(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// fadds f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f2,964(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// fadds f0,f5,f9
	f0.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f0,968(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// fadds f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f13,972(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// bl 0x825a0930
	sub_825A0930(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 * f30.f64));
	// lfs f4,976(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 976);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,980(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 980);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,976
	r11.s64 = r31.s64 + 976;
	// lfs f2,984(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 984);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,988(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 988);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f4
	f0.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f0,976(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 976, temp.u32);
	// fadds f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f13,980(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 980, temp.u32);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,984(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 984, temp.u32);
	// fadds f11,f1,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f11,988(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 988, temp.u32);
loc_825A87B0:
	// lbz r11,1320(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// lfs f0,516(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 516);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a87d8
	if (!cr6.eq) goto loc_825A87D8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a87e0
	if (!cr6.lt) goto loc_825A87E0;
loc_825A87D8:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A87E0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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

__attribute__((alias("__imp__sub_825A8804"))) PPC_WEAK_FUNC(sub_825A8804);
PPC_FUNC_IMPL(__imp__sub_825A8804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A8808"))) PPC_WEAK_FUNC(sub_825A8808);
PPC_FUNC_IMPL(__imp__sub_825A8808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,8740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8740);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a7dc8
	sub_825A7DC8(ctx, base);
	// lfs f13,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1248);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fadds f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1244, temp.u32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfs f9,1248(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1248, temp.u32);
	// bl 0x825a6940
	sub_825A6940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6a50
	sub_825A6A50(ctx, base);
	// lfs f8,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f5,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,960(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// lfs f4,304(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,964(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// lfs f1,308(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 308);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,968(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// lfs f12,312(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,972(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// lbz r9,1320(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// lfs f10,516(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 516);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1300(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a88d4
	if (!cr6.eq) goto loc_825A88D4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a88dc
	if (!cr6.lt) goto loc_825A88DC;
loc_825A88D4:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A88DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A88F0"))) PPC_WEAK_FUNC(sub_825A88F0);
PPC_FUNC_IMPL(__imp__sub_825A88F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A88F4"))) PPC_WEAK_FUNC(sub_825A88F4);
PPC_FUNC_IMPL(__imp__sub_825A88F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A88F8"))) PPC_WEAK_FUNC(sub_825A88F8);
PPC_FUNC_IMPL(__imp__sub_825A88F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,8740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8740);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825a7dc8
	sub_825A7DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825a6940
	sub_825A6940(ctx, base);
	// lfs f13,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1244, temp.u32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfs f9,1248(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1248, temp.u32);
	// bl 0x825a6a50
	sub_825A6A50(ctx, base);
	// lfs f8,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,960(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 960);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f5,964(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 964);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,960(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 960, temp.u32);
	// lfs f4,320(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 320);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,968(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 968);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,964(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 964, temp.u32);
	// lfs f1,324(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,972(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 972);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,968(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 968, temp.u32);
	// lfs f12,328(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,972(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 972, temp.u32);
	// lbz r9,1320(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1320);
	// lfs f10,516(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 516);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1300(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a89c4
	if (!cr6.eq) goto loc_825A89C4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,1264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1264);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825a89cc
	if (!cr6.lt) goto loc_825A89CC;
loc_825A89C4:
	// lfs f0,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 520);
	f0.f64 = double(temp.f32);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A89CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A89E0"))) PPC_WEAK_FUNC(sub_825A89E0);
PPC_FUNC_IMPL(__imp__sub_825A89E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A89E4"))) PPC_WEAK_FUNC(sub_825A89E4);
PPC_FUNC_IMPL(__imp__sub_825A89E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A89E8"))) PPC_WEAK_FUNC(sub_825A89E8);
PPC_FUNC_IMPL(__imp__sub_825A89E8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x825a8a94
	if (cr6.gt) goto loc_825A8A94;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825a8a48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8A48;
	// bdzf 4*cr6+eq,0x825a8a5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8A5C;
	// bdzf 4*cr6+eq,0x825a8a70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8A70;
	// bne cr6,0x825a8a84
	if (!cr6.eq) goto loc_825A8A84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6248
	sub_825A6248(ctx, base);
	// b 0x825a8a94
	goto loc_825A8A94;
loc_825A8A48:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a64b8
	sub_825A64B8(ctx, base);
	// b 0x825a8a94
	goto loc_825A8A94;
loc_825A8A5C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a65c0
	sub_825A65C0(ctx, base);
	// b 0x825a8a94
	goto loc_825A8A94;
loc_825A8A70:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6380
	sub_825A6380(ctx, base);
	// b 0x825a8a94
	goto loc_825A8A94;
loc_825A8A84:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a5900
	sub_825A5900(ctx, base);
loc_825A8A94:
	// lwz r11,1304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1304);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// beq cr6,0x825a8b2c
	if (cr6.eq) goto loc_825A8B2C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x825a8b2c
	if (cr6.gt) goto loc_825A8B2C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825a8aec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8AEC;
	// bdzf 4*cr6+eq,0x825a8b04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8B04;
	// bdzf 4*cr6+eq,0x825a8aec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8AEC;
	// bne cr6,0x825a8b1c
	if (!cr6.eq) goto loc_825A8B1C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1240, temp.u32);
	// bne cr6,0x825a8ae4
	if (!cr6.eq) goto loc_825A8AE4;
	// lfs f0,524(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 524);
	f0.f64 = double(temp.f32);
	// stb r11,1319(r31)
	PPC_STORE_U8(r31.u32 + 1319, r11.u8);
	// stfs f0,1300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1300, temp.u32);
loc_825A8AE4:
	// stb r11,1324(r31)
	PPC_STORE_U8(r31.u32 + 1324, r11.u8);
	// b 0x825a8b2c
	goto loc_825A8B2C;
loc_825A8AEC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1324(r31)
	PPC_STORE_U8(r31.u32 + 1324, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1240, temp.u32);
	// b 0x825a8b2c
	goto loc_825A8B2C;
loc_825A8B04:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1324(r31)
	PPC_STORE_U8(r31.u32 + 1324, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1240, temp.u32);
	// b 0x825a8b2c
	goto loc_825A8B2C;
loc_825A8B1C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a7c78
	sub_825A7C78(ctx, base);
loc_825A8B2C:
	// lwz r11,1304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1304);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x825a8bf8
	if (cr6.gt) goto loc_825A8BF8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825a8b74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8B74;
	// bdzf 4*cr6+eq,0x825a8b98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8B98;
	// bdzf 4*cr6+eq,0x825a8bbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825A8BBC;
	// bne cr6,0x825a8be0
	if (!cr6.eq) goto loc_825A8BE0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a77a8
	sub_825A77A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_825A8B74:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a8808
	sub_825A8808(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_825A8B98:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a88f8
	sub_825A88F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_825A8BBC:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a8608
	sub_825A8608(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_825A8BE0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a7950
	sub_825A7950(ctx, base);
loc_825A8BF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825A8C00"))) PPC_WEAK_FUNC(sub_825A8C00);
PPC_FUNC_IMPL(__imp__sub_825A8C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825A8C04"))) PPC_WEAK_FUNC(sub_825A8C04);
PPC_FUNC_IMPL(__imp__sub_825A8C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A8C08"))) PPC_WEAK_FUNC(sub_825A8C08);
PPC_FUNC_IMPL(__imp__sub_825A8C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a8c6c
	if (cr6.eq) goto loc_825A8C6C;
	// bl 0x825a7f00
	sub_825A7F00(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a89e8
	sub_825A89E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825a6ec8
	sub_825A6EC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a6038
	sub_825A6038(ctx, base);
loc_825A8C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_825A8C74"))) PPC_WEAK_FUNC(sub_825A8C74);
PPC_FUNC_IMPL(__imp__sub_825A8C74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825A8C78"))) PPC_WEAK_FUNC(sub_825A8C78);
PPC_FUNC_IMPL(__imp__sub_825A8C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eaaf0
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r10,-7276
	ctx.r9.s64 = ctx.r10.s64 + -7276;
	// addi r28,r11,-7784
	r28.s64 = r11.s64 + -7784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-6200
	ctx.r3.s64 = ctx.r8.s64 + -6200;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r21,r11,-19808
	r21.s64 = r11.s64 + -19808;
	// beq cr6,0x825a8d34
	if (cr6.eq) goto loc_825A8D34;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825a8d34
	if (cr6.eq) goto loc_825A8D34;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a8d38
	if (!cr6.eq) goto loc_825A8D38;
loc_825A8D34:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A8D38:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,212(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,216(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6216
	ctx.r3.s64 = r11.s64 + -6216;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a8de8
	if (cr6.eq) goto loc_825A8DE8;
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
	// beq cr6,0x825a8de8
	if (cr6.eq) goto loc_825A8DE8;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a8dec
	if (!cr6.eq) goto loc_825A8DEC;
loc_825A8DE8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A8DEC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,224(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,228(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-6232
	ctx.r3.s64 = ctx.r8.s64 + -6232;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f30,3640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	f30.f64 = double(temp.f32);
	// lfs f29,-7800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7800);
	f29.f64 = double(temp.f32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a8ec4
	if (cr6.eq) goto loc_825A8EC4;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825a8ec4
	if (cr6.eq) goto loc_825A8EC4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a8ec8
	if (!cr6.eq) goto loc_825A8EC8;
loc_825A8EC4:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A8EC8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,244(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,248(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r11,-6248
	ctx.r3.s64 = r11.s64 + -6248;
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,388
	ctx.r5.s64 = ctx.r1.s64 + 388;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a8f88
	if (cr6.eq) goto loc_825A8F88;
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
	// beq cr6,0x825a8f88
	if (cr6.eq) goto loc_825A8F88;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a8f8c
	if (!cr6.eq) goto loc_825A8F8C;
loc_825A8F88:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A8F8C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,256(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,264(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6268
	ctx.r3.s64 = r11.s64 + -6268;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,396
	ctx.r5.s64 = ctx.r1.s64 + 396;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a903c
	if (cr6.eq) goto loc_825A903C;
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
	// beq cr6,0x825a903c
	if (cr6.eq) goto loc_825A903C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9040
	if (!cr6.eq) goto loc_825A9040;
loc_825A903C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A9040:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,276(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,280(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6288
	ctx.r3.s64 = r11.s64 + -6288;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,404
	ctx.r5.s64 = ctx.r1.s64 + 404;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a90f0
	if (cr6.eq) goto loc_825A90F0;
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
	// beq cr6,0x825a90f0
	if (cr6.eq) goto loc_825A90F0;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a90f4
	if (!cr6.eq) goto loc_825A90F4;
loc_825A90F0:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A90F4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,292(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 292, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,296(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 296, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6316
	ctx.r3.s64 = r11.s64 + -6316;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a91a4
	if (cr6.eq) goto loc_825A91A4;
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
	// beq cr6,0x825a91a4
	if (cr6.eq) goto loc_825A91A4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a91a8
	if (!cr6.eq) goto loc_825A91A8;
loc_825A91A4:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A91A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 308, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6348
	ctx.r3.s64 = r11.s64 + -6348;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9258
	if (cr6.eq) goto loc_825A9258;
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
	// beq cr6,0x825a9258
	if (cr6.eq) goto loc_825A9258;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a925c
	if (!cr6.eq) goto loc_825A925C;
loc_825A9258:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A925C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,316(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,324(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 324, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,328(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6364
	ctx.r3.s64 = r11.s64 + -6364;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a930c
	if (cr6.eq) goto loc_825A930C;
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
	// beq cr6,0x825a930c
	if (cr6.eq) goto loc_825A930C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9310
	if (!cr6.eq) goto loc_825A9310;
loc_825A930C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_825A9310:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,332(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 336, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,340(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,344(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 344, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r10,-6384
	ctx.r3.s64 = ctx.r10.s64 + -6384;
	// lfs f26,-31320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31320);
	f26.f64 = double(temp.f32);
	// stfs f26,164(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a93d8
	if (cr6.eq) goto loc_825A93D8;
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
	// beq cr6,0x825a93d8
	if (cr6.eq) goto loc_825A93D8;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a93dc
	if (!cr6.eq) goto loc_825A93DC;
loc_825A93D8:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A93DC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,348(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 348, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 352, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,356(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 356, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,360(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 360, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r10,-6416
	ctx.r3.s64 = ctx.r10.s64 + -6416;
	// lfs f0,1468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1468);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a94a4
	if (cr6.eq) goto loc_825A94A4;
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
	// beq cr6,0x825a94a4
	if (cr6.eq) goto loc_825A94A4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a94a8
	if (!cr6.eq) goto loc_825A94A8;
loc_825A94A4:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A94A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,364(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 364, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 368, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 372, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 376, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r10,-6440
	ctx.r3.s64 = ctx.r10.s64 + -6440;
	// lfs f0,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9570
	if (cr6.eq) goto loc_825A9570;
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
	// beq cr6,0x825a9570
	if (cr6.eq) goto loc_825A9570;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9574
	if (!cr6.eq) goto loc_825A9574;
loc_825A9570:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A9574:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,380(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 380, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,392(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 392, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r3,r10,-6464
	ctx.r3.s64 = ctx.r10.s64 + -6464;
	// lfs f0,3636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3636);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a963c
	if (cr6.eq) goto loc_825A963C;
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
	// beq cr6,0x825a963c
	if (cr6.eq) goto loc_825A963C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9640
	if (!cr6.eq) goto loc_825A9640;
loc_825A963C:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A9640:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,396(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 396, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 400, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 404, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 408, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r11,-6484
	ctx.r3.s64 = r11.s64 + -6484;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-6500
	r29.s64 = r11.s64 + -6500;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9724
	if (cr6.eq) goto loc_825A9724;
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
	// beq cr6,0x825a9724
	if (cr6.eq) goto loc_825A9724;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9728
	if (!cr6.eq) goto loc_825A9728;
loc_825A9724:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A9728:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,412(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 412, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 416, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 420, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,424(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r11,-6516
	ctx.r3.s64 = r11.s64 + -6516;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a980c
	if (cr6.eq) goto loc_825A980C;
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
	// beq cr6,0x825a980c
	if (cr6.eq) goto loc_825A980C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9810
	if (!cr6.eq) goto loc_825A9810;
loc_825A980C:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
loc_825A9810:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,428(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 432, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,436(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,440(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f28,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f28.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6536
	ctx.r3.s64 = ctx.r10.s64 + -6536;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a98d4
	if (cr6.eq) goto loc_825A98D4;
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
	// beq cr6,0x825a98d4
	if (cr6.eq) goto loc_825A98D4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a98d8
	if (!cr6.eq) goto loc_825A98D8;
loc_825A98D4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A98D8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,444(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-24324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6564
	ctx.r3.s64 = ctx.r10.s64 + -6564;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a997c
	if (cr6.eq) goto loc_825A997C;
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
	// beq cr6,0x825a997c
	if (cr6.eq) goto loc_825A997C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9980
	if (!cr6.eq) goto loc_825A9980;
loc_825A997C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9980:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,448(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 448, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6588
	ctx.r3.s64 = r11.s64 + -6588;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9a1c
	if (cr6.eq) goto loc_825A9A1C;
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
	// beq cr6,0x825a9a1c
	if (cr6.eq) goto loc_825A9A1C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9a20
	if (!cr6.eq) goto loc_825A9A20;
loc_825A9A1C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9A20:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,452(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 452, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6604
	ctx.r3.s64 = r11.s64 + -6604;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9abc
	if (cr6.eq) goto loc_825A9ABC;
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
	// beq cr6,0x825a9abc
	if (cr6.eq) goto loc_825A9ABC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9ac0
	if (!cr6.eq) goto loc_825A9AC0;
loc_825A9ABC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9AC0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,456(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 456, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-6608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6608);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6632
	ctx.r3.s64 = ctx.r10.s64 + -6632;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9b64
	if (cr6.eq) goto loc_825A9B64;
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
	// beq cr6,0x825a9b64
	if (cr6.eq) goto loc_825A9B64;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9b68
	if (!cr6.eq) goto loc_825A9B68;
loc_825A9B64:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9B68:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,460(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 460, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6656
	ctx.r3.s64 = r11.s64 + -6656;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9c04
	if (cr6.eq) goto loc_825A9C04;
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
	// beq cr6,0x825a9c04
	if (cr6.eq) goto loc_825A9C04;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9c08
	if (!cr6.eq) goto loc_825A9C08;
loc_825A9C04:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9C08:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,464(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6684
	ctx.r3.s64 = r11.s64 + -6684;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9ca4
	if (cr6.eq) goto loc_825A9CA4;
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
	// beq cr6,0x825a9ca4
	if (cr6.eq) goto loc_825A9CA4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9ca8
	if (!cr6.eq) goto loc_825A9CA8;
loc_825A9CA4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9CA8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,468(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-7304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7304);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6700
	ctx.r3.s64 = ctx.r10.s64 + -6700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9d4c
	if (cr6.eq) goto loc_825A9D4C;
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
	// beq cr6,0x825a9d4c
	if (cr6.eq) goto loc_825A9D4C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9d50
	if (!cr6.eq) goto loc_825A9D50;
loc_825A9D4C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9D50:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,472(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,3656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3656);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6716
	ctx.r3.s64 = ctx.r10.s64 + -6716;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9df4
	if (cr6.eq) goto loc_825A9DF4;
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
	// beq cr6,0x825a9df4
	if (cr6.eq) goto loc_825A9DF4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9df8
	if (!cr6.eq) goto loc_825A9DF8;
loc_825A9DF4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9DF8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,476(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f27,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f27.f64 = double(temp.f32);
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6732
	ctx.r3.s64 = ctx.r10.s64 + -6732;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9e9c
	if (cr6.eq) goto loc_825A9E9C;
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
	// beq cr6,0x825a9e9c
	if (cr6.eq) goto loc_825A9E9C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9ea0
	if (!cr6.eq) goto loc_825A9EA0;
loc_825A9E9C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9EA0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,480(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,15536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15536);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6748
	ctx.r3.s64 = ctx.r10.s64 + -6748;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a9f44
	if (cr6.eq) goto loc_825A9F44;
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
	// beq cr6,0x825a9f44
	if (cr6.eq) goto loc_825A9F44;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9f48
	if (!cr6.eq) goto loc_825A9F48;
loc_825A9F44:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9F48:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,484(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6760
	ctx.r3.s64 = r11.s64 + -6760;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a9fe4
	if (cr6.eq) goto loc_825A9FE4;
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
	// beq cr6,0x825a9fe4
	if (cr6.eq) goto loc_825A9FE4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a9fe8
	if (!cr6.eq) goto loc_825A9FE8;
loc_825A9FE4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A9FE8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,-11120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11120);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,488(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f29,-12676(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12676);
	f29.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-6768
	ctx.r3.s64 = ctx.r8.s64 + -6768;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825aa098
	if (cr6.eq) goto loc_825AA098;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825aa098
	if (cr6.eq) goto loc_825AA098;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa09c
	if (!cr6.eq) goto loc_825AA09C;
loc_825AA098:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA09C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f30,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f30.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// stfs f13,492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-6776
	ctx.r3.s64 = ctx.r9.s64 + -6776;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825aa144
	if (cr6.eq) goto loc_825AA144;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825aa144
	if (cr6.eq) goto loc_825AA144;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa148
	if (!cr6.eq) goto loc_825AA148;
loc_825AA144:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA148:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// stfs f13,496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6796
	ctx.r3.s64 = r11.s64 + -6796;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa1e8
	if (cr6.eq) goto loc_825AA1E8;
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
	// beq cr6,0x825aa1e8
	if (cr6.eq) goto loc_825AA1E8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa1ec
	if (!cr6.eq) goto loc_825AA1EC;
loc_825AA1E8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA1EC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,500(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6812
	ctx.r3.s64 = r11.s64 + -6812;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa288
	if (cr6.eq) goto loc_825AA288;
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
	// beq cr6,0x825aa288
	if (cr6.eq) goto loc_825AA288;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa28c
	if (!cr6.eq) goto loc_825AA28C;
loc_825AA288:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA28C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,504(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6828
	ctx.r3.s64 = r11.s64 + -6828;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa328
	if (cr6.eq) goto loc_825AA328;
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
	// beq cr6,0x825aa328
	if (cr6.eq) goto loc_825AA328;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa32c
	if (!cr6.eq) goto loc_825AA32C;
loc_825AA328:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA32C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// stfs f13,508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lfs f1,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 508);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,512(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7832
	ctx.r3.s64 = r11.s64 + -7832;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa3dc
	if (cr6.eq) goto loc_825AA3DC;
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
	// beq cr6,0x825aa3dc
	if (cr6.eq) goto loc_825AA3DC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa3e0
	if (!cr6.eq) goto loc_825AA3E0;
loc_825AA3DC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA3E0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,516(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 516, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6856
	ctx.r3.s64 = r11.s64 + -6856;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa47c
	if (cr6.eq) goto loc_825AA47C;
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
	// beq cr6,0x825aa47c
	if (cr6.eq) goto loc_825AA47C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa480
	if (!cr6.eq) goto loc_825AA480;
loc_825AA47C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA480:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,520(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 520, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,-512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -512);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6888
	ctx.r3.s64 = ctx.r10.s64 + -6888;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aa524
	if (cr6.eq) goto loc_825AA524;
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
	// beq cr6,0x825aa524
	if (cr6.eq) goto loc_825AA524;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa528
	if (!cr6.eq) goto loc_825AA528;
loc_825AA524:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA528:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,524(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 524, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6904
	ctx.r3.s64 = r11.s64 + -6904;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa5c4
	if (cr6.eq) goto loc_825AA5C4;
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
	// beq cr6,0x825aa5c4
	if (cr6.eq) goto loc_825AA5C4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa5c8
	if (!cr6.eq) goto loc_825AA5C8;
loc_825AA5C4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA5C8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,528(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 528, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6936
	ctx.r3.s64 = ctx.r10.s64 + -6936;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aa66c
	if (cr6.eq) goto loc_825AA66C;
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
	// beq cr6,0x825aa66c
	if (cr6.eq) goto loc_825AA66C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa670
	if (!cr6.eq) goto loc_825AA670;
loc_825AA66C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA670:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,532(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 532, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6956
	ctx.r3.s64 = r11.s64 + -6956;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa70c
	if (cr6.eq) goto loc_825AA70C;
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
	// beq cr6,0x825aa70c
	if (cr6.eq) goto loc_825AA70C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa710
	if (!cr6.eq) goto loc_825AA710;
loc_825AA70C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA710:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,536(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 536, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-6980
	ctx.r3.s64 = r11.s64 + -6980;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa7ac
	if (cr6.eq) goto loc_825AA7AC;
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
	// beq cr6,0x825aa7ac
	if (cr6.eq) goto loc_825AA7AC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa7b0
	if (!cr6.eq) goto loc_825AA7B0;
loc_825AA7AC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA7B0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,540(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 540, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7004
	ctx.r3.s64 = r11.s64 + -7004;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa868
	if (cr6.eq) goto loc_825AA868;
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
	// beq cr6,0x825aa868
	if (cr6.eq) goto loc_825AA868;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa86c
	if (!cr6.eq) goto loc_825AA86C;
loc_825AA868:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825AA86C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,544(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 544, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7024
	ctx.r3.s64 = r11.s64 + -7024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa92c
	if (cr6.eq) goto loc_825AA92C;
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
	// beq cr6,0x825aa92c
	if (cr6.eq) goto loc_825AA92C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa930
	if (!cr6.eq) goto loc_825AA930;
loc_825AA92C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AA930:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,548(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 548, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7044
	ctx.r3.s64 = r11.s64 + -7044;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aa9d8
	if (cr6.eq) goto loc_825AA9D8;
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
	// beq cr6,0x825aa9d8
	if (cr6.eq) goto loc_825AA9D8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aa9dc
	if (!cr6.eq) goto loc_825AA9DC;
loc_825AA9D8:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825AA9DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,552(r31)
	PPC_STORE_U32(r31.u32 + 552, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r22,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r22.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7068
	ctx.r3.s64 = ctx.r10.s64 + -7068;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aaa78
	if (cr6.eq) goto loc_825AAA78;
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
	// beq cr6,0x825aaa78
	if (cr6.eq) goto loc_825AAA78;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aaa7c
	if (!cr6.eq) goto loc_825AAA7C;
loc_825AAA78:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_825AAA7C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,556(r31)
	PPC_STORE_U8(r31.u32 + 556, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r23,1
	r23.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r23.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7092
	ctx.r3.s64 = ctx.r10.s64 + -7092;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aab1c
	if (cr6.eq) goto loc_825AAB1C;
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
	// beq cr6,0x825aab1c
	if (cr6.eq) goto loc_825AAB1C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aab20
	if (!cr6.eq) goto loc_825AAB20;
loc_825AAB1C:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_825AAB20:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,557(r31)
	PPC_STORE_U8(r31.u32 + 557, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r23.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7108
	ctx.r3.s64 = ctx.r10.s64 + -7108;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aabbc
	if (cr6.eq) goto loc_825AABBC;
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
	// beq cr6,0x825aabbc
	if (cr6.eq) goto loc_825AABBC;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aabc0
	if (!cr6.eq) goto loc_825AABC0;
loc_825AABBC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_825AABC0:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,558(r31)
	PPC_STORE_U8(r31.u32 + 558, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r29,r31,560
	r29.s64 = r31.s64 + 560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a0a68
	sub_825A0A68(ctx, base);
	// addi r27,r31,608
	r27.s64 = r31.s64 + 608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a0a68
	sub_825A0A68(ctx, base);
	// addi r26,r31,656
	r26.s64 = r31.s64 + 656;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825a0a68
	sub_825A0A68(ctx, base);
	// addi r25,r31,704
	r25.s64 = r31.s64 + 704;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a0a68
	sub_825A0A68(ctx, base);
	// addi r24,r31,752
	r24.s64 = r31.s64 + 752;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825a0a68
	sub_825A0A68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r11,-7116
	r28.s64 = r11.s64 + -7116;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r20,24
	ctx.r10.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aacb8
	if (cr6.eq) goto loc_825AACB8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a0bc0
	sub_825A0BC0(ctx, base);
loc_825AACB8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-7128
	r29.s64 = r11.s64 + -7128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aad30
	if (cr6.eq) goto loc_825AAD30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// addi r5,r1,332
	ctx.r5.s64 = ctx.r1.s64 + 332;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a0bc0
	sub_825A0BC0(ctx, base);
loc_825AAD30:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-7148
	r29.s64 = r11.s64 + -7148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aada8
	if (cr6.eq) goto loc_825AADA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825a0bc0
	sub_825A0BC0(ctx, base);
loc_825AADA8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-7164
	r29.s64 = r11.s64 + -7164;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// addi r5,r1,356
	ctx.r5.s64 = ctx.r1.s64 + 356;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aae20
	if (cr6.eq) goto loc_825AAE20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
	// addi r5,r1,364
	ctx.r5.s64 = ctx.r1.s64 + 364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a0bc0
	sub_825A0BC0(ctx, base);
loc_825AAE20:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-7184
	r29.s64 = r11.s64 + -7184;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// addi r5,r1,372
	ctx.r5.s64 = ctx.r1.s64 + 372;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aae98
	if (cr6.eq) goto loc_825AAE98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r5,r1,380
	ctx.r5.s64 = ctx.r1.s64 + 380;
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
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825a0bc0
	sub_825A0BC0(ctx, base);
loc_825AAE98:
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r31,800
	r11.s64 = r31.s64 + 800;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,800(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 800, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,804(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 804, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,808(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 808, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,812(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 812, temp.u32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,816(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 816, temp.u32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,820(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 820, temp.u32);
	// lfs f8,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,824(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 824, temp.u32);
	// lfs f7,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,828(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 828, temp.u32);
	// lfs f6,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,832(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 832, temp.u32);
	// lfs f5,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,836(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 836, temp.u32);
	// lfs f4,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,840(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 840, temp.u32);
	// lfs f3,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,844(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 844, temp.u32);
	// lfs f2,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,848(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 848, temp.u32);
	// lfs f1,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,852(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 852, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,856(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 856, temp.u32);
	// lfs f13,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,860(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 860, temp.u32);
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,944(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 944, temp.u32);
	// lfs f0,4(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,948(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 948, temp.u32);
	// lfs f0,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,952(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 952, temp.u32);
	// lfs f0,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,956(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 956, temp.u32);
	// bl 0x825a5ac8
	sub_825A5AC8(ctx, base);
	// stb r23,1322(r31)
	PPC_STORE_U8(r31.u32 + 1322, r23.u8);
	// stb r23,1324(r31)
	PPC_STORE_U8(r31.u32 + 1324, r23.u8);
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,1184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1184, temp.u32);
	// lfs f0,4(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1188, temp.u32);
	// lfs f0,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1192, temp.u32);
	// lfs f0,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1196, temp.u32);
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,1200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1200, temp.u32);
	// lfs f0,4(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1204, temp.u32);
	// lfs f0,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1208, temp.u32);
	// lfs f0,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1212, temp.u32);
	// stb r22,1325(r31)
	PPC_STORE_U8(r31.u32 + 1325, r22.u8);
	// stb r23,1326(r31)
	PPC_STORE_U8(r31.u32 + 1326, r23.u8);
	// stw r22,1308(r31)
	PPC_STORE_U32(r31.u32 + 1308, r22.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x828eab3c
}

__attribute__((alias("__imp__sub_825AAFAC"))) PPC_WEAK_FUNC(sub_825AAFAC);
PPC_FUNC_IMPL(__imp__sub_825AAFAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825AAFB0"))) PPC_WEAK_FUNC(sub_825AAFB0);
PPC_FUNC_IMPL(__imp__sub_825AAFB0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,752
	ctx.r3.s64 = ctx.r3.s64 + 752;
	// addi r10,r11,-7276
	ctx.r10.s64 = r11.s64 + -7276;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,704
	ctx.r3.s64 = r31.s64 + 704;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,608
	ctx.r3.s64 = r31.s64 + 608;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// bl 0x825a0b00
	sub_825A0B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ab020
	if (cr6.eq) goto loc_825AB020;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AB020:
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

__attribute__((alias("__imp__sub_825AB034"))) PPC_WEAK_FUNC(sub_825AB034);
PPC_FUNC_IMPL(__imp__sub_825AB034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB038"))) PPC_WEAK_FUNC(sub_825AB038);
PPC_FUNC_IMPL(__imp__sub_825AB038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-6144
	ctx.r10.s64 = r11.s64 + -6144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB048"))) PPC_WEAK_FUNC(sub_825AB048);
PPC_FUNC_IMPL(__imp__sub_825AB048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f4,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,64(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,68(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB0B4"))) PPC_WEAK_FUNC(sub_825AB0B4);
PPC_FUNC_IMPL(__imp__sub_825AB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB0B8"))) PPC_WEAK_FUNC(sub_825AB0B8);
PPC_FUNC_IMPL(__imp__sub_825AB0B8) {
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
	// bl 0x828e9414
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eaae8
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ab41c
	if (cr6.eq) goto loc_825AB41C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,-6060
	ctx.r4.s64 = r11.s64 + -6060;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// addi r4,r10,-6068
	ctx.r4.s64 = ctx.r10.s64 + -6068;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r4,r9,-6080
	ctx.r4.s64 = ctx.r9.s64 + -6080;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// addi r4,r8,-6088
	ctx.r4.s64 = ctx.r8.s64 + -6088;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// addi r4,r7,-6096
	ctx.r4.s64 = ctx.r7.s64 + -6096;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// addi r4,r6,-6112
	ctx.r4.s64 = ctx.r6.s64 + -6112;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r4,r5,-6124
	ctx.r4.s64 = ctx.r5.s64 + -6124;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lfs f10,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,208(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r29,r30,56
	r29.s64 = r30.s64 + 56;
	// fsubs f8,f0,f30
	ctx.f8.f64 = double(float(f0.f64 - f30.f64));
	// lfs f13,-6180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -6180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f0,f1
	ctx.f7.f64 = double(float(f0.f64 - ctx.f1.f64));
	// lfs f12,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-6184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6184);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// lfs f0,2992(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2992);
	f0.f64 = double(temp.f32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f6,f30,f13,f8
	ctx.f6.f64 = double(float(f30.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f5,f30,f12,f8
	ctx.f5.f64 = double(float(f30.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f4,f1,f11,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f3,f1,f0,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f7.f64));
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f30,f2,f10
	f30.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f29,f1,f9
	f29.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825ab41c
	if (cr6.eq) goto loc_825AB41C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-6160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// fmuls f0,f29,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f28.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// fmuls f13,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 * f27.f64));
	// lis r28,-31965
	r28.s64 = -2094858240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r27,r28,12812
	r27.s64 = r28.s64 + 12812;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// fmuls f8,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(f30.f64 * f25.f64));
	// fmuls f7,f30,f26
	ctx.f7.f64 = double(float(f30.f64 * f26.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f30,f24
	ctx.f4.f64 = double(float(f30.f64 * f24.f64));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f29.f64 = double(temp.f32);
	// fmuls f10,f8,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f28,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f28.f64 = double(temp.f32);
	// fmuls f8,f7,f31
	ctx.f8.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f31,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f31.f64 = double(temp.f32);
	// lfs f27,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f27.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f6,f2,f10
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f5,f31,f8
	ctx.f5.f64 = double(float(f31.f64 * ctx.f8.f64));
	// fmuls f3,f29,f8
	ctx.f3.f64 = double(float(f29.f64 * ctx.f8.f64));
	// fmuls f2,f28,f8
	ctx.f2.f64 = double(float(f28.f64 * ctx.f8.f64));
	// fmuls f10,f27,f8
	ctx.f10.f64 = double(float(f27.f64 * ctx.f8.f64));
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(f0.f64 + ctx.f9.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f13,f7
	f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// lfs f0,12812(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12812);
	f0.f64 = double(temp.f32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f13,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fadds f0,f1,f9
	f0.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// fadds f4,f13,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f3,f0,f5
	ctx.f3.f64 = double(float(f0.f64 + ctx.f5.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// bl 0x82339968
	sub_82339968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3698
	sub_822D3698(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f10
	ctx.f8.f64 = double(float(f0.f64 + ctx.f10.f64));
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f5,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f3,12(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
loc_825AB41C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab34
}

__attribute__((alias("__imp__sub_825AB428"))) PPC_WEAK_FUNC(sub_825AB428);
PPC_FUNC_IMPL(__imp__sub_825AB428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825AB42C"))) PPC_WEAK_FUNC(sub_825AB42C);
PPC_FUNC_IMPL(__imp__sub_825AB42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB430"))) PPC_WEAK_FUNC(sub_825AB430);
PPC_FUNC_IMPL(__imp__sub_825AB430) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-6144
	ctx.r9.s64 = r11.s64 + -6144;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-29172
	ctx.r3.s64 = ctx.r7.s64 + -29172;
	// lfs f0,4932(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4932);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825ab4fc
	if (cr6.eq) goto loc_825AB4FC;
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
	// beq cr6,0x825ab4fc
	if (cr6.eq) goto loc_825AB4FC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ab500
	if (!cr6.eq) goto loc_825AB500;
loc_825AB4FC:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825AB500:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-6048
	ctx.r3.s64 = ctx.r9.s64 + -6048;
	// lfs f0,12808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12808);
	f0.f64 = double(temp.f32);
	// lfs f13,-6036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6036);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825ab588
	if (cr6.eq) goto loc_825AB588;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
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
	// beq cr6,0x825ab588
	if (cr6.eq) goto loc_825AB588;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ab58c
	if (!cr6.eq) goto loc_825AB58C;
loc_825AB588:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_825AB58C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AB5B4"))) PPC_WEAK_FUNC(sub_825AB5B4);
PPC_FUNC_IMPL(__imp__sub_825AB5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB5B8"))) PPC_WEAK_FUNC(sub_825AB5B8);
PPC_FUNC_IMPL(__imp__sub_825AB5B8) {
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
	// addi r10,r11,-6144
	ctx.r10.s64 = r11.s64 + -6144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ab5fc
	if (cr6.eq) goto loc_825AB5FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AB5FC:
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

__attribute__((alias("__imp__sub_825AB610"))) PPC_WEAK_FUNC(sub_825AB610);
PPC_FUNC_IMPL(__imp__sub_825AB610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB614"))) PPC_WEAK_FUNC(sub_825AB614);
PPC_FUNC_IMPL(__imp__sub_825AB614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB618"))) PPC_WEAK_FUNC(sub_825AB618);
PPC_FUNC_IMPL(__imp__sub_825AB618) {
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
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-6012
	ctx.r10.s64 = r11.s64 + -6012;
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

__attribute__((alias("__imp__sub_825AB650"))) PPC_WEAK_FUNC(sub_825AB650);
PPC_FUNC_IMPL(__imp__sub_825AB650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB654"))) PPC_WEAK_FUNC(sub_825AB654);
PPC_FUNC_IMPL(__imp__sub_825AB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB658"))) PPC_WEAK_FUNC(sub_825AB658);
PPC_FUNC_IMPL(__imp__sub_825AB658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-6012
	ctx.r10.s64 = r11.s64 + -6012;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB668"))) PPC_WEAK_FUNC(sub_825AB668);
PPC_FUNC_IMPL(__imp__sub_825AB668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
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
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r9,r11,-19732
	ctx.r9.s64 = r11.s64 + -19732;
	// addi r8,r10,12876
	ctx.r8.s64 = ctx.r10.s64 + 12876;
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// lfs f0,-19732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19732);
	f0.f64 = double(temp.f32);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r5,r7,12892
	ctx.r5.s64 = ctx.r7.s64 + 12892;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r28,r3,56
	r28.s64 = ctx.r3.s64 + 56;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,12876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12876);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,12892(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12892);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r3,-14368(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825ab71c
	if (cr6.eq) goto loc_825AB71C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ab720
	if (!cr6.eq) goto loc_825AB720;
loc_825AB71C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825AB720:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8246e8d0
	sub_8246E8D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ab878
	if (cr6.eq) goto loc_825AB878;
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ab878
	if (cr6.eq) goto loc_825AB878;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ab878
	if (cr6.eq) goto loc_825AB878;
	// bl 0x824bc960
	sub_824BC960(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ab878
	if (cr6.eq) goto loc_825AB878;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82339968
	sub_82339968(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfs f0,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f0.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f30,f10,f0
	f30.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f31,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * f0.f64));
	// lfs f2,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f29,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f29.f64 = double(temp.f32);
	// lfs f13,-6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6028);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-6024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6024);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f10,f12
	f28.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f11,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f9,f12
	f27.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f0,-6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6020);
	f0.f64 = double(temp.f32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmr f6,f0
	ctx.f6.f64 = f0.f64;
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fadds f5,f31,f30
	ctx.f5.f64 = double(float(f31.f64 + f30.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fadds f1,f29,f1
	ctx.f1.f64 = double(float(f29.f64 + ctx.f1.f64));
	// stfs f1,12(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 * ctx.f13.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f5,f31,f5
	ctx.f5.f64 = double(float(f31.f64 + ctx.f5.f64));
	// lfs f31,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f31.f64 = double(temp.f32);
	// fadds f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 + f30.f64));
	// fadds f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f13,f5,f28
	ctx.f13.f64 = double(float(ctx.f5.f64 + f28.f64));
	// fadds f5,f4,f27
	ctx.f5.f64 = double(float(ctx.f4.f64 + f27.f64));
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f29,f29,f11
	f29.f64 = double(float(f29.f64 * ctx.f11.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fadds f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f11,f29,f1
	ctx.f11.f64 = double(float(f29.f64 + ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f9,4(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f8,8(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f7,12(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
loc_825AB878:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_825AB884"))) PPC_WEAK_FUNC(sub_825AB884);
PPC_FUNC_IMPL(__imp__sub_825AB884) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825AB888"))) PPC_WEAK_FUNC(sub_825AB888);
PPC_FUNC_IMPL(__imp__sub_825AB888) {
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
	// addi r10,r11,-6012
	ctx.r10.s64 = r11.s64 + -6012;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ab8cc
	if (cr6.eq) goto loc_825AB8CC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AB8CC:
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

__attribute__((alias("__imp__sub_825AB8E0"))) PPC_WEAK_FUNC(sub_825AB8E0);
PPC_FUNC_IMPL(__imp__sub_825AB8E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB8E4"))) PPC_WEAK_FUNC(sub_825AB8E4);
PPC_FUNC_IMPL(__imp__sub_825AB8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB8E8"))) PPC_WEAK_FUNC(sub_825AB8E8);
PPC_FUNC_IMPL(__imp__sub_825AB8E8) {
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
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-5988
	ctx.r10.s64 = r11.s64 + -5988;
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

__attribute__((alias("__imp__sub_825AB920"))) PPC_WEAK_FUNC(sub_825AB920);
PPC_FUNC_IMPL(__imp__sub_825AB920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AB924"))) PPC_WEAK_FUNC(sub_825AB924);
PPC_FUNC_IMPL(__imp__sub_825AB924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AB928"))) PPC_WEAK_FUNC(sub_825AB928);
PPC_FUNC_IMPL(__imp__sub_825AB928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-5988
	ctx.r10.s64 = r11.s64 + -5988;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825AB938"))) PPC_WEAK_FUNC(sub_825AB938);
PPC_FUNC_IMPL(__imp__sub_825AB938) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825ab96c
	if (cr6.eq) goto loc_825AB96C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ab970
	if (!cr6.eq) goto loc_825AB970;
loc_825AB96C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825AB970:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r11,-25548
	ctx.r4.s64 = r11.s64 + -25548;
	// bl 0x82474580
	sub_82474580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aba24
	if (cr6.eq) goto loc_825ABA24;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,12956
	ctx.r4.s64 = r11.s64 + 12956;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f9,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f8,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lfs f7,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f8
	ctx.f12.f64 = double(float(f0.f64 + ctx.f8.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_825ABA24:
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

__attribute__((alias("__imp__sub_825ABA38"))) PPC_WEAK_FUNC(sub_825ABA38);
PPC_FUNC_IMPL(__imp__sub_825ABA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABA3C"))) PPC_WEAK_FUNC(sub_825ABA3C);
PPC_FUNC_IMPL(__imp__sub_825ABA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABA40"))) PPC_WEAK_FUNC(sub_825ABA40);
PPC_FUNC_IMPL(__imp__sub_825ABA40) {
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
	// addi r10,r11,-5988
	ctx.r10.s64 = r11.s64 + -5988;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825aba84
	if (cr6.eq) goto loc_825ABA84;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ABA84:
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

__attribute__((alias("__imp__sub_825ABA98"))) PPC_WEAK_FUNC(sub_825ABA98);
PPC_FUNC_IMPL(__imp__sub_825ABA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABA9C"))) PPC_WEAK_FUNC(sub_825ABA9C);
PPC_FUNC_IMPL(__imp__sub_825ABA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABAA0"))) PPC_WEAK_FUNC(sub_825ABAA0);
PPC_FUNC_IMPL(__imp__sub_825ABAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-5964
	ctx.r10.s64 = r11.s64 + -5964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825a4b10
	sub_825A4B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ABAB0"))) PPC_WEAK_FUNC(sub_825ABAB0);
PPC_FUNC_IMPL(__imp__sub_825ABAB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a4b20
	sub_825A4B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ABAB4"))) PPC_WEAK_FUNC(sub_825ABAB4);
PPC_FUNC_IMPL(__imp__sub_825ABAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABAB8"))) PPC_WEAK_FUNC(sub_825ABAB8);
PPC_FUNC_IMPL(__imp__sub_825ABAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a4e80
	sub_825A4E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ABABC"))) PPC_WEAK_FUNC(sub_825ABABC);
PPC_FUNC_IMPL(__imp__sub_825ABABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABAC0"))) PPC_WEAK_FUNC(sub_825ABAC0);
PPC_FUNC_IMPL(__imp__sub_825ABAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eaaf8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r5,r10,-5932
	ctx.r5.s64 = ctx.r10.s64 + -5932;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r6,r8,13024
	ctx.r6.s64 = ctx.r8.s64 + 13024;
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lfs f31,13024(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f28.f64 = double(temp.f32);
	// beq cr6,0x825abb34
	if (cr6.eq) goto loc_825ABB34;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825abb38
	if (!cr6.eq) goto loc_825ABB38;
loc_825ABB34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ABB38:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r11,-5944
	ctx.r4.s64 = r11.s64 + -5944;
	// bl 0x824747b0
	sub_824747B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825abb7c
	if (cr6.eq) goto loc_825ABB7C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 + 28;
	// lfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f28.f64 = double(temp.f32);
loc_825ABB7C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f30,216(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f29,220(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f28,224(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eab44
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ABBAC"))) PPC_WEAK_FUNC(sub_825ABBAC);
PPC_FUNC_IMPL(__imp__sub_825ABBAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABBB0"))) PPC_WEAK_FUNC(sub_825ABBB0);
PPC_FUNC_IMPL(__imp__sub_825ABBB0) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x825a4c60
	sub_825A4C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825abac0
	sub_825ABAC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ABBE0"))) PPC_WEAK_FUNC(sub_825ABBE0);
PPC_FUNC_IMPL(__imp__sub_825ABBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABBE4"))) PPC_WEAK_FUNC(sub_825ABBE4);
PPC_FUNC_IMPL(__imp__sub_825ABBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABBE8"))) PPC_WEAK_FUNC(sub_825ABBE8);
PPC_FUNC_IMPL(__imp__sub_825ABBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825a52b0
	sub_825A52B0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-5964
	ctx.r10.s64 = r11.s64 + -5964;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r9,-7784
	ctx.r3.s64 = ctx.r9.s64 + -7784;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r8,-5924
	ctx.r3.s64 = ctx.r8.s64 + -5924;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825abca8
	if (cr6.eq) goto loc_825ABCA8;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825abca8
	if (cr6.eq) goto loc_825ABCA8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825abcac
	if (!cr6.eq) goto loc_825ABCAC;
loc_825ABCA8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_825ABCAC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825ABCC4"))) PPC_WEAK_FUNC(sub_825ABCC4);
PPC_FUNC_IMPL(__imp__sub_825ABCC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ABCC8"))) PPC_WEAK_FUNC(sub_825ABCC8);
PPC_FUNC_IMPL(__imp__sub_825ABCC8) {
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
	// addi r10,r11,-5964
	ctx.r10.s64 = r11.s64 + -5964;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825a4b10
	sub_825A4B10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825abd0c
	if (cr6.eq) goto loc_825ABD0C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ABD0C:
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

__attribute__((alias("__imp__sub_825ABD20"))) PPC_WEAK_FUNC(sub_825ABD20);
PPC_FUNC_IMPL(__imp__sub_825ABD20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABD24"))) PPC_WEAK_FUNC(sub_825ABD24);
PPC_FUNC_IMPL(__imp__sub_825ABD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABD28"))) PPC_WEAK_FUNC(sub_825ABD28);
PPC_FUNC_IMPL(__imp__sub_825ABD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-5900
	ctx.r10.s64 = r11.s64 + -5900;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ABD38"))) PPC_WEAK_FUNC(sub_825ABD38);
PPC_FUNC_IMPL(__imp__sub_825ABD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ABD64"))) PPC_WEAK_FUNC(sub_825ABD64);
PPC_FUNC_IMPL(__imp__sub_825ABD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABD68"))) PPC_WEAK_FUNC(sub_825ABD68);
PPC_FUNC_IMPL(__imp__sub_825ABD68) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// beq cr6,0x825abe10
	if (cr6.eq) goto loc_825ABE10;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,-5836
	ctx.r4.s64 = r11.s64 + -5836;
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f12,220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-5860
	ctx.r4.s64 = ctx.r10.s64 + -5860;
	// fmadds f11,f13,f31,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64 + ctx.f12.f64));
	// stfs f11,220(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lfs f10,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f8,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,-5880
	ctx.r4.s64 = ctx.r9.s64 + -5880;
	// fmadds f7,f9,f31,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f8.f64));
	// stfs f7,212(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// bl 0x82419200
	sub_82419200(ctx, base);
	// lfs f6,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f1,f6
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lfs f4,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f31,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * f31.f64 + ctx.f4.f64));
	// stfs f3,216(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
loc_825ABE10:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lfs f30,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// beq cr6,0x825abe5c
	if (cr6.eq) goto loc_825ABE5C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_825ABE5C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f1,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fsubs f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f3,32(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825ABF30"))) PPC_WEAK_FUNC(sub_825ABF30);
PPC_FUNC_IMPL(__imp__sub_825ABF30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ABF34"))) PPC_WEAK_FUNC(sub_825ABF34);
PPC_FUNC_IMPL(__imp__sub_825ABF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ABF38"))) PPC_WEAK_FUNC(sub_825ABF38);
PPC_FUNC_IMPL(__imp__sub_825ABF38) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-5900
	ctx.r9.s64 = r11.s64 + -5900;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-29172
	ctx.r3.s64 = ctx.r7.s64 + -29172;
	// lfs f0,4932(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4932);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825ac004
	if (cr6.eq) goto loc_825AC004;
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
	// beq cr6,0x825ac004
	if (cr6.eq) goto loc_825AC004;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ac008
	if (!cr6.eq) goto loc_825AC008;
loc_825AC004:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825AC008:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-6048
	ctx.r3.s64 = ctx.r10.s64 + -6048;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ac084
	if (cr6.eq) goto loc_825AC084;
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
	// beq cr6,0x825ac084
	if (cr6.eq) goto loc_825AC084;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ac088
	if (!cr6.eq) goto loc_825AC088;
loc_825AC084:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_825AC088:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,4492(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f13,3640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f0,13088(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13088);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AC0E0"))) PPC_WEAK_FUNC(sub_825AC0E0);
PPC_FUNC_IMPL(__imp__sub_825AC0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AC0E4"))) PPC_WEAK_FUNC(sub_825AC0E4);
PPC_FUNC_IMPL(__imp__sub_825AC0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC0E8"))) PPC_WEAK_FUNC(sub_825AC0E8);
PPC_FUNC_IMPL(__imp__sub_825AC0E8) {
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
	// addi r10,r11,-5900
	ctx.r10.s64 = r11.s64 + -5900;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ac12c
	if (cr6.eq) goto loc_825AC12C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AC12C:
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

__attribute__((alias("__imp__sub_825AC140"))) PPC_WEAK_FUNC(sub_825AC140);
PPC_FUNC_IMPL(__imp__sub_825AC140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AC144"))) PPC_WEAK_FUNC(sub_825AC144);
PPC_FUNC_IMPL(__imp__sub_825AC144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC148"))) PPC_WEAK_FUNC(sub_825AC148);
PPC_FUNC_IMPL(__imp__sub_825AC148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AC14C"))) PPC_WEAK_FUNC(sub_825AC14C);
PPC_FUNC_IMPL(__imp__sub_825AC14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC150"))) PPC_WEAK_FUNC(sub_825AC150);
PPC_FUNC_IMPL(__imp__sub_825AC150) {
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
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-5792
	ctx.r10.s64 = r11.s64 + -5792;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825ac1a8
	if (cr6.eq) goto loc_825AC1A8;
	// bl 0x826ef410
	sub_826EF410(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac1a8
	if (cr6.eq) goto loc_825AC1A8;
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
	// stw r9,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r9.u32);
loc_825AC1A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AC1C0"))) PPC_WEAK_FUNC(sub_825AC1C0);
PPC_FUNC_IMPL(__imp__sub_825AC1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AC1C4"))) PPC_WEAK_FUNC(sub_825AC1C4);
PPC_FUNC_IMPL(__imp__sub_825AC1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC1C8"))) PPC_WEAK_FUNC(sub_825AC1C8);
PPC_FUNC_IMPL(__imp__sub_825AC1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828eaaec
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f28,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f28.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f0,f28
	f27.f64 = double(float(f0.f64 - f28.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// fsubs f26,f13,f12
	f26.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// fsubs f25,f11,f10
	f25.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r28,r9,-19672
	r28.s64 = ctx.r9.s64 + -19672;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f30,-5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5804);
	f30.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f9,f27,f31
	ctx.f9.f64 = double(float(f27.f64 * f31.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// fmuls f8,f26,f31
	ctx.f8.f64 = double(float(f26.f64 * f31.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmsubs f7,f25,f31,f9
	ctx.f7.f64 = double(float(f25.f64 * f31.f64 - ctx.f9.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 - f25.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f5,f27,f8
	ctx.f5.f64 = double(float(f27.f64 - ctx.f8.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f31.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// fmuls f4,f31,f26
	ctx.f4.f64 = double(float(f31.f64 * f26.f64));
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f29.f64 = double(temp.f32);
	// fmuls f3,f30,f25
	ctx.f3.f64 = double(float(f30.f64 * f25.f64));
	// fmuls f2,f29,f27
	ctx.f2.f64 = double(float(f29.f64 * f27.f64));
	// fmsubs f0,f29,f25,f4
	f0.f64 = double(float(f29.f64 * f25.f64 - ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f13,f31,f27,f3
	ctx.f13.f64 = double(float(f31.f64 * f27.f64 - ctx.f3.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f30,f26,f2
	ctx.f12.f64 = double(float(f30.f64 * f26.f64 - ctx.f2.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lfs f11,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f30,f11
	ctx.f10.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// fmuls f9,f29,f11
	ctx.f9.f64 = double(float(f29.f64 * ctx.f11.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f6,f31,f11
	ctx.f6.f64 = double(float(f31.f64 * ctx.f11.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// li r28,5
	r28.s64 = 5;
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lfs f31,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f2,f28,f10
	ctx.f2.f64 = double(float(f28.f64 + ctx.f10.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f1,f8,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f7,f11
	f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fadds f11,f5,f6
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f1,f28,f10
	ctx.f1.f64 = double(float(f28.f64 - ctx.f10.f64));
	// stfs f1,176(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fsubs f9,f3,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f7,f28,f12
	ctx.f7.f64 = double(float(f28.f64 + ctx.f12.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + f0.f64));
	// stfs f4,136(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 - ctx.f12.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f11,f8,f2
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - f0.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_825AC394:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,236(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ac3c4
	if (cr6.eq) goto loc_825AC3C4;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// fsel f31,f13,f0,f31
	f31.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : f31.f64;
loc_825AC3C4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x825ac394
	if (!cr0.eq) goto loc_825AC394;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_825AC3E8"))) PPC_WEAK_FUNC(sub_825AC3E8);
PPC_FUNC_IMPL(__imp__sub_825AC3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825AC3EC"))) PPC_WEAK_FUNC(sub_825AC3EC);
PPC_FUNC_IMPL(__imp__sub_825AC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC3F0"))) PPC_WEAK_FUNC(sub_825AC3F0);
PPC_FUNC_IMPL(__imp__sub_825AC3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eaaf4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f13,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f30.f64 = double(temp.f32);
	// lfs f29,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f29.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f28,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f28.f64 = double(temp.f32);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// fadds f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fsubs f12,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - f27.f64));
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// fsubs f11,f29,f27
	ctx.f11.f64 = double(float(f29.f64 - f27.f64));
	// fsubs f10,f28,f27
	ctx.f10.f64 = double(float(f28.f64 - f27.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f8,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f6,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f5,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f4,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f3,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f31,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f2,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// fadds f1,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
	// fadds f0,f29,f27
	f0.f64 = double(float(f29.f64 + f27.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f28,f27
	ctx.f13.f64 = double(float(f28.f64 + f27.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x826ef020
	sub_826EF020(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eab40
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AC508"))) PPC_WEAK_FUNC(sub_825AC508);
PPC_FUNC_IMPL(__imp__sub_825AC508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AC50C"))) PPC_WEAK_FUNC(sub_825AC50C);
PPC_FUNC_IMPL(__imp__sub_825AC50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC510"))) PPC_WEAK_FUNC(sub_825AC510);
PPC_FUNC_IMPL(__imp__sub_825AC510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// bl 0x828e9414
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eaacc
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// beq cr6,0x825ac70c
	if (cr6.eq) goto loc_825AC70C;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x825ac3f0
	sub_825AC3F0(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,64(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lfs f20,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f20.f64 = double(temp.f32);
	// fmr f27,f20
	f27.f64 = f20.f64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// lfs f26,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f25.f64 = double(temp.f32);
	// lfs f24,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f24.f64 = double(temp.f32);
	// lfs f23,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f23.f64 = double(temp.f32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f17,15384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15384);
	f17.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f19,-5768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5768);
	f19.f64 = double(temp.f32);
	// addi r29,r30,204
	r29.s64 = r30.s64 + 204;
	// lfs f18,-5772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5772);
	f18.f64 = double(temp.f32);
	// addi r28,r11,13140
	r28.s64 = r11.s64 + 13140;
	// lfs f21,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f21.f64 = double(temp.f32);
	// lfs f22,224(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	f22.f64 = double(temp.f32);
loc_825AC5EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f22.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 + f0.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f30,f9,f13
	f30.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f28,f7,f11
	f28.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825ac1c8
	sub_825AC1C8(ctx, base);
	// fcmpu cr6,f1,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f21.f64);
	// bge cr6,0x825ac6ec
	if (!cr6.lt) goto loc_825AC6EC;
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, f27.f64);
	// ble cr6,0x825ac6c4
	if (!cr6.gt) goto loc_825AC6C4;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 - f0.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f29,f11
	ctx.f8.f64 = double(float(f29.f64 - ctx.f11.f64));
	// fsubs f7,f28,f9
	ctx.f7.f64 = double(float(f28.f64 - ctx.f9.f64));
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f5,f10,f1
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f4,f8,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fadds f26,f0,f6
	f26.f64 = double(float(f0.f64 + ctx.f6.f64));
	// fadds f25,f13,f5
	f25.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f24,f11,f4
	f24.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f23,f9,f3
	f23.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
loc_825AC6C4:
	// fcmpu cr6,f27,f18
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f18.f64);
	// bgt cr6,0x825ac6fc
	if (cr6.gt) goto loc_825AC6FC;
	// fsubs f22,f22,f19
	f22.f64 = double(float(f22.f64 - f19.f64));
	// fcmpu cr6,f22,f20
	cr6.compare(f22.f64, f20.f64);
	// bge cr6,0x825ac6dc
	if (!cr6.lt) goto loc_825AC6DC;
	// fadds f22,f22,f17
	f22.f64 = double(float(f22.f64 + f17.f64));
loc_825AC6DC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,36
	cr6.compare<int32_t>(r27.s32, 36, xer);
	// blt cr6,0x825ac5ec
	if (cr6.lt) goto loc_825AC5EC;
	// b 0x825ac6fc
	goto loc_825AC6FC;
loc_825AC6EC:
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	f26.f64 = f31.f64;
	// fmr f25,f30
	f25.f64 = f30.f64;
	// fmr f24,f29
	f24.f64 = f29.f64;
	// fmr f23,f28
	f23.f64 = f28.f64;
loc_825AC6FC:
	// stfs f26,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f25,28(r30)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// stfs f24,32(r30)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f23,36(r30)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
loc_825AC70C:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab18
}

__attribute__((alias("__imp__sub_825AC720"))) PPC_WEAK_FUNC(sub_825AC720);
PPC_FUNC_IMPL(__imp__sub_825AC720) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825AC724"))) PPC_WEAK_FUNC(sub_825AC724);
PPC_FUNC_IMPL(__imp__sub_825AC724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AC728"))) PPC_WEAK_FUNC(sub_825AC728);
PPC_FUNC_IMPL(__imp__sub_825AC728) {
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
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-5792
	ctx.r9.s64 = r11.s64 + -5792;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-5668
	ctx.r3.s64 = ctx.r8.s64 + -5668;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ac7e4
	if (cr6.eq) goto loc_825AC7E4;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825ac7e4
	if (cr6.eq) goto loc_825AC7E4;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ac7ec
	if (!cr6.eq) goto loc_825AC7EC;
loc_825AC7E4:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,13156
	r11.s64 = r11.s64 + 13156;
loc_825AC7EC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,204(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 204, temp.u32);
	// addi r31,r30,204
	r31.s64 = r30.s64 + 204;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,212(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,216(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-5688
	ctx.r3.s64 = ctx.r10.s64 + -5688;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ac888
	if (cr6.eq) goto loc_825AC888;
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
	// beq cr6,0x825ac888
	if (cr6.eq) goto loc_825AC888;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ac88c
	if (!cr6.eq) goto loc_825AC88C;
loc_825AC888:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825AC88C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f31.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,224(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-25128
	ctx.r3.s64 = ctx.r9.s64 + -25128;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14120(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825ac8dc
	if (cr6.eq) goto loc_825AC8DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ac8e0
	if (!cr6.eq) goto loc_825AC8E0;
loc_825AC8DC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825AC8E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r3.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsel f6,f7,f8,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : f0.f64;
	// stfs f6,228(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// lfs f0,-8900(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8900);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x828eb900
	sub_828EB900(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f4,228(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// li r6,30
	ctx.r6.s64 = 30;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// addi r7,r9,-5760
	ctx.r7.s64 = ctx.r9.s64 + -5760;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f3,232(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 232, temp.u32);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ac994
	if (cr6.eq) goto loc_825AC994;
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// bl 0x826ef488
	sub_826EF488(ctx, base);
	// b 0x825ac998
	goto loc_825AC998;
loc_825AC994:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825AC998:
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
	// bl 0x826ef3b8
	sub_826EF3B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825AC9AC"))) PPC_WEAK_FUNC(sub_825AC9AC);
PPC_FUNC_IMPL(__imp__sub_825AC9AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825AC9B0"))) PPC_WEAK_FUNC(sub_825AC9B0);
PPC_FUNC_IMPL(__imp__sub_825AC9B0) {
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
	// bl 0x825ac150
	sub_825AC150(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ac9e8
	if (cr6.eq) goto loc_825AC9E8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AC9E8:
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

__attribute__((alias("__imp__sub_825AC9FC"))) PPC_WEAK_FUNC(sub_825AC9FC);
PPC_FUNC_IMPL(__imp__sub_825AC9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACA00"))) PPC_WEAK_FUNC(sub_825ACA00);
PPC_FUNC_IMPL(__imp__sub_825ACA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-5652
	ctx.r10.s64 = r11.s64 + -5652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ACA10"))) PPC_WEAK_FUNC(sub_825ACA10);
PPC_FUNC_IMPL(__imp__sub_825ACA10) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825aca44
	if (cr6.eq) goto loc_825ACA44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aca48
	if (!cr6.eq) goto loc_825ACA48;
loc_825ACA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ACA48:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r11,-17900
	ctx.r4.s64 = r11.s64 + -17900;
	// bl 0x824744f8
	sub_824744F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825acafc
	if (cr6.eq) goto loc_825ACAFC;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,13228
	ctx.r4.s64 = r11.s64 + 13228;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f9,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f8,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f1,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lfs f7,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f8
	ctx.f12.f64 = double(float(f0.f64 + ctx.f8.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_825ACAFC:
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

__attribute__((alias("__imp__sub_825ACB10"))) PPC_WEAK_FUNC(sub_825ACB10);
PPC_FUNC_IMPL(__imp__sub_825ACB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACB14"))) PPC_WEAK_FUNC(sub_825ACB14);
PPC_FUNC_IMPL(__imp__sub_825ACB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACB18"))) PPC_WEAK_FUNC(sub_825ACB18);
PPC_FUNC_IMPL(__imp__sub_825ACB18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r10,-5652
	ctx.r9.s64 = ctx.r10.s64 + -5652;
	// addi r29,r11,28616
	r29.s64 = r11.s64 + 28616;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825accec
	if (cr6.eq) goto loc_825ACCEC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8200
	ctx.r3.s64 = r11.s64 + -8200;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r29,r10,-19652
	r29.s64 = ctx.r10.s64 + -19652;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d1a78
	sub_822D1A78(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-8192
	ctx.r3.s64 = ctx.r8.s64 + -8192;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d1a78
	sub_822D1A78(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r3,r6,-18716
	ctx.r3.s64 = ctx.r6.s64 + -18716;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r5,-5660
	ctx.r4.s64 = ctx.r5.s64 + -5660;
	// bl 0x822b0ab0
	sub_822B0AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f6,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4492(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-8240
	ctx.r3.s64 = ctx.r9.s64 + -8240;
	// lfs f0,4436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4436);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x822b0ab0
	sub_822B0AB0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f4,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,92(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825ACCEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825ACCF4"))) PPC_WEAK_FUNC(sub_825ACCF4);
PPC_FUNC_IMPL(__imp__sub_825ACCF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825ACCF8"))) PPC_WEAK_FUNC(sub_825ACCF8);
PPC_FUNC_IMPL(__imp__sub_825ACCF8) {
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
	// addi r10,r11,-5652
	ctx.r10.s64 = r11.s64 + -5652;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825acd3c
	if (cr6.eq) goto loc_825ACD3C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ACD3C:
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

__attribute__((alias("__imp__sub_825ACD50"))) PPC_WEAK_FUNC(sub_825ACD50);
PPC_FUNC_IMPL(__imp__sub_825ACD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACD54"))) PPC_WEAK_FUNC(sub_825ACD54);
PPC_FUNC_IMPL(__imp__sub_825ACD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACD58"))) PPC_WEAK_FUNC(sub_825ACD58);
PPC_FUNC_IMPL(__imp__sub_825ACD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-5628
	ctx.r10.s64 = r11.s64 + -5628;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825a4b10
	sub_825A4B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ACD68"))) PPC_WEAK_FUNC(sub_825ACD68);
PPC_FUNC_IMPL(__imp__sub_825ACD68) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a4b20
	sub_825A4B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ACD6C"))) PPC_WEAK_FUNC(sub_825ACD6C);
PPC_FUNC_IMPL(__imp__sub_825ACD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACD70"))) PPC_WEAK_FUNC(sub_825ACD70);
PPC_FUNC_IMPL(__imp__sub_825ACD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a4e80
	sub_825A4E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ACD74"))) PPC_WEAK_FUNC(sub_825ACD74);
PPC_FUNC_IMPL(__imp__sub_825ACD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACD78"))) PPC_WEAK_FUNC(sub_825ACD78);
PPC_FUNC_IMPL(__imp__sub_825ACD78) {
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r9,r11,13296
	ctx.r9.s64 = r11.s64 + 13296;
	// addi r31,r3,212
	r31.s64 = ctx.r3.s64 + 212;
	// lfs f0,13296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13296);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825acdd0
	if (cr6.eq) goto loc_825ACDD0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825acdd4
	if (!cr6.eq) goto loc_825ACDD4;
loc_825ACDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ACDD4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r11,-5944
	ctx.r4.s64 = r11.s64 + -5944;
	// bl 0x824747b0
	sub_824747B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ace2c
	if (cr6.eq) goto loc_825ACE2C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-5608
	ctx.r4.s64 = r11.s64 + -5608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_825ACE2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ACE3C"))) PPC_WEAK_FUNC(sub_825ACE3C);
PPC_FUNC_IMPL(__imp__sub_825ACE3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACE40"))) PPC_WEAK_FUNC(sub_825ACE40);
PPC_FUNC_IMPL(__imp__sub_825ACE40) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x825a4c60
	sub_825A4C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825acd78
	sub_825ACD78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ACE70"))) PPC_WEAK_FUNC(sub_825ACE70);
PPC_FUNC_IMPL(__imp__sub_825ACE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACE74"))) PPC_WEAK_FUNC(sub_825ACE74);
PPC_FUNC_IMPL(__imp__sub_825ACE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACE78"))) PPC_WEAK_FUNC(sub_825ACE78);
PPC_FUNC_IMPL(__imp__sub_825ACE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825a52b0
	sub_825A52B0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-5628
	ctx.r10.s64 = r11.s64 + -5628;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r3,r9,-7784
	ctx.r3.s64 = ctx.r9.s64 + -7784;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r3,r8,-5924
	ctx.r3.s64 = ctx.r8.s64 + -5924;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825acf38
	if (cr6.eq) goto loc_825ACF38;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825acf38
	if (cr6.eq) goto loc_825ACF38;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825acf3c
	if (!cr6.eq) goto loc_825ACF3C;
loc_825ACF38:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_825ACF3C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825ACF54"))) PPC_WEAK_FUNC(sub_825ACF54);
PPC_FUNC_IMPL(__imp__sub_825ACF54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ACF58"))) PPC_WEAK_FUNC(sub_825ACF58);
PPC_FUNC_IMPL(__imp__sub_825ACF58) {
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
	// addi r10,r11,-5628
	ctx.r10.s64 = r11.s64 + -5628;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825a4b10
	sub_825A4B10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825acf9c
	if (cr6.eq) goto loc_825ACF9C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ACF9C:
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

__attribute__((alias("__imp__sub_825ACFB0"))) PPC_WEAK_FUNC(sub_825ACFB0);
PPC_FUNC_IMPL(__imp__sub_825ACFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACFB4"))) PPC_WEAK_FUNC(sub_825ACFB4);
PPC_FUNC_IMPL(__imp__sub_825ACFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACFB8"))) PPC_WEAK_FUNC(sub_825ACFB8);
PPC_FUNC_IMPL(__imp__sub_825ACFB8) {
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
	// stfs f0,240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACFC8"))) PPC_WEAK_FUNC(sub_825ACFC8);
PPC_FUNC_IMPL(__imp__sub_825ACFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ACFCC"))) PPC_WEAK_FUNC(sub_825ACFCC);
PPC_FUNC_IMPL(__imp__sub_825ACFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ACFD0"))) PPC_WEAK_FUNC(sub_825ACFD0);
PPC_FUNC_IMPL(__imp__sub_825ACFD0) {
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
	// lwz r3,236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-5576
	ctx.r10.s64 = r11.s64 + -5576;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825ad028
	if (cr6.eq) goto loc_825AD028;
	// bl 0x826ef410
	sub_826EF410(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ad028
	if (cr6.eq) goto loc_825AD028;
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
	// stw r9,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r9.u32);
loc_825AD028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AD040"))) PPC_WEAK_FUNC(sub_825AD040);
PPC_FUNC_IMPL(__imp__sub_825AD040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AD044"))) PPC_WEAK_FUNC(sub_825AD044);
PPC_FUNC_IMPL(__imp__sub_825AD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD048"))) PPC_WEAK_FUNC(sub_825AD048);
PPC_FUNC_IMPL(__imp__sub_825AD048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828eaaec
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f28,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f28.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f0,f28
	f27.f64 = double(float(f0.f64 - f28.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// fsubs f26,f13,f12
	f26.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// fsubs f25,f11,f10
	f25.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r28,r9,-19612
	r28.s64 = ctx.r9.s64 + -19612;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f30,-5588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5588);
	f30.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmuls f9,f27,f31
	ctx.f9.f64 = double(float(f27.f64 * f31.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// fmuls f8,f26,f31
	ctx.f8.f64 = double(float(f26.f64 * f31.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmsubs f7,f25,f31,f9
	ctx.f7.f64 = double(float(f25.f64 * f31.f64 - ctx.f9.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 - f25.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f5,f27,f8
	ctx.f5.f64 = double(float(f27.f64 - ctx.f8.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f31.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// fmuls f4,f31,f26
	ctx.f4.f64 = double(float(f31.f64 * f26.f64));
	// lfs f29,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f29.f64 = double(temp.f32);
	// fmuls f3,f30,f25
	ctx.f3.f64 = double(float(f30.f64 * f25.f64));
	// fmuls f2,f29,f27
	ctx.f2.f64 = double(float(f29.f64 * f27.f64));
	// fmsubs f0,f29,f25,f4
	f0.f64 = double(float(f29.f64 * f25.f64 - ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f13,f31,f27,f3
	ctx.f13.f64 = double(float(f31.f64 * f27.f64 - ctx.f3.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f30,f26,f2
	ctx.f12.f64 = double(float(f30.f64 * f26.f64 - ctx.f2.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-5556(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -5556);
	f0.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f0,3656(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3656);
	f0.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f3,f30,f7
	ctx.f3.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fmuls f2,f29,f7
	ctx.f2.f64 = double(float(f29.f64 * ctx.f7.f64));
	// fmuls f1,f31,f7
	ctx.f1.f64 = double(float(f31.f64 * ctx.f7.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f6
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// fmuls f12,f8,f6
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f11,f0,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f6.f64));
	// fadds f8,f3,f28
	ctx.f8.f64 = double(float(ctx.f3.f64 + f28.f64));
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// fadds f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// fadds f31,f1,f5
	f31.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// li r28,4
	r28.s64 = 4;
	// fadds f30,f13,f4
	f30.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fadds f0,f10,f28
	f0.f64 = double(float(ctx.f10.f64 + f28.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f7,f9
	f0.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f12,f5
	f0.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fadds f29,f11,f4
	f29.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f7,f3,f28
	ctx.f7.f64 = double(float(ctx.f3.f64 + f28.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f3,f31,f12
	ctx.f3.f64 = double(float(f31.f64 + ctx.f12.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f2,f30,f11
	ctx.f2.f64 = double(float(f30.f64 + ctx.f11.f64));
	// stfs f2,156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_825AD224:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,248(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ad254
	if (cr6.eq) goto loc_825AD254;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// fsel f31,f13,f0,f31
	f31.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : f31.f64;
loc_825AD254:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x825ad224
	if (!cr0.eq) goto loc_825AD224;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_825AD278"))) PPC_WEAK_FUNC(sub_825AD278);
PPC_FUNC_IMPL(__imp__sub_825AD278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825AD27C"))) PPC_WEAK_FUNC(sub_825AD27C);
PPC_FUNC_IMPL(__imp__sub_825AD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD280"))) PPC_WEAK_FUNC(sub_825AD280);
PPC_FUNC_IMPL(__imp__sub_825AD280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eaaf4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f13,244(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f30.f64 = double(temp.f32);
	// lfs f29,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f29.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f28,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f28.f64 = double(temp.f32);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f0,3640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	f0.f64 = double(temp.f32);
	// fadds f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// fsubs f12,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - f27.f64));
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// fsubs f11,f29,f27
	ctx.f11.f64 = double(float(f29.f64 - f27.f64));
	// fsubs f10,f28,f27
	ctx.f10.f64 = double(float(f28.f64 - f27.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f8,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f6,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f5,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f4,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f3,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f31,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f2,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// fadds f1,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
	// fadds f0,f29,f27
	f0.f64 = double(float(f29.f64 + f27.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f28,f27
	ctx.f13.f64 = double(float(f28.f64 + f27.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x826ef020
	sub_826EF020(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eab40
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AD398"))) PPC_WEAK_FUNC(sub_825AD398);
PPC_FUNC_IMPL(__imp__sub_825AD398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AD39C"))) PPC_WEAK_FUNC(sub_825AD39C);
PPC_FUNC_IMPL(__imp__sub_825AD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD3A0"))) PPC_WEAK_FUNC(sub_825AD3A0);
PPC_FUNC_IMPL(__imp__sub_825AD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaac0
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// bl 0x82339888
	sub_82339888(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,204
	ctx.r4.s64 = r30.s64 + 204;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f25,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f25.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f24,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f24.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f23,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f23.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f22,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f22.f64 = double(temp.f32);
	// lfs f16,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f16.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,15384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15384);
	f0.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f19,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f19.f64 = double(temp.f32);
	// fmr f27,f16
	f27.f64 = f16.f64;
	// lfs f18,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f18.f64 = double(temp.f32);
	// fmr f26,f16
	f26.f64 = f16.f64;
	// lfs f17,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f17.f64 = double(temp.f32);
	// lfs f15,-5552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5552);
	f15.f64 = double(temp.f32);
	// lfs f14,-5772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5772);
	f14.f64 = double(temp.f32);
	// lfs f21,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f21.f64 = double(temp.f32);
	// lfs f20,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	f20.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_825AD444:
	// fmuls f31,f26,f20
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f26.f64 * f20.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f13,f0,f17
	ctx.f13.f64 = double(float(f0.f64 * f17.f64));
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f12,f18,f0
	ctx.f12.f64 = double(float(f18.f64 * f0.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f11,f19,f0
	ctx.f11.f64 = double(float(f19.f64 * f0.f64));
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,220(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fadds f31,f9,f5
	f31.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// fadds f30,f8,f4
	f30.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fadds f29,f7,f3
	f29.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f28,f2,f6
	f28.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f28,124(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x825ad048
	sub_825AD048(ctx, base);
	// fcmpu cr6,f1,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f21.f64);
	// bge cr6,0x825ad55c
	if (!cr6.lt) goto loc_825AD55C;
	// fcmpu cr6,f1,f27
	cr6.compare(ctx.f1.f64, f27.f64);
	// ble cr6,0x825ad530
	if (!cr6.gt) goto loc_825AD530;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 - f0.f64));
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f29,f11
	ctx.f8.f64 = double(float(f29.f64 - ctx.f11.f64));
	// fsubs f7,f28,f9
	ctx.f7.f64 = double(float(f28.f64 - ctx.f9.f64));
	// fmuls f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f5,f10,f1
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f4,f8,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fadds f25,f0,f6
	f25.f64 = double(float(f0.f64 + ctx.f6.f64));
	// fadds f24,f13,f5
	f24.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f23,f11,f4
	f23.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fadds f22,f9,f3
	f22.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
loc_825AD530:
	// fcmpu cr6,f27,f14
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f14.f64);
	// bgt cr6,0x825ad570
	if (cr6.gt) goto loc_825AD570;
	// fsubs f26,f26,f15
	f26.f64 = double(float(f26.f64 - f15.f64));
	// fcmpu cr6,f26,f16
	cr6.compare(f26.f64, f16.f64);
	// bge cr6,0x825ad54c
	if (!cr6.lt) goto loc_825AD54C;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f26,f26,f0
	f26.f64 = double(float(f26.f64 + f0.f64));
loc_825AD54C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// blt cr6,0x825ad444
	if (cr6.lt) goto loc_825AD444;
	// b 0x825ad570
	goto loc_825AD570;
loc_825AD55C:
	// fmr f27,f21
	ctx.fpscr.disableFlushMode();
	f27.f64 = f21.f64;
	// fmr f25,f31
	f25.f64 = f31.f64;
	// fmr f24,f30
	f24.f64 = f30.f64;
	// fmr f23,f29
	f23.f64 = f29.f64;
	// fmr f22,f28
	f22.f64 = f28.f64;
loc_825AD570:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f25,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f24,4(r28)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f23,8(r28)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f22,12(r28)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_825AD598"))) PPC_WEAK_FUNC(sub_825AD598);
PPC_FUNC_IMPL(__imp__sub_825AD598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825AD59C"))) PPC_WEAK_FUNC(sub_825AD59C);
PPC_FUNC_IMPL(__imp__sub_825AD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD5A0"))) PPC_WEAK_FUNC(sub_825AD5A0);
PPC_FUNC_IMPL(__imp__sub_825AD5A0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// beq cr6,0x825ad9a4
	if (cr6.eq) goto loc_825AD9A4;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lfs f31,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f28.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fmr f27,f29
	f27.f64 = f29.f64;
	// stfs f30,12(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stfs f29,16(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f28,20(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// lfs f26,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f26.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f28.f64 = double(temp.f32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825ad280
	sub_825AD280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r28,0
	r28.s64 = 0;
	// lfs f25,15384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15384);
	f25.f64 = double(temp.f32);
	// addi r29,r11,13360
	r29.s64 = r11.s64 + 13360;
	// lfs f23,-5548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5548);
	f23.f64 = double(temp.f32);
	// lfs f24,-5772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5772);
	f24.f64 = double(temp.f32);
loc_825AD67C:
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 + f0.f64));
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f10,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f0,f12
	ctx.f5.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f9,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f8,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f2,f8,f7,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f1,f11,f8,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmsubs f5,f0,f11,f3
	ctx.f5.f64 = double(float(f0.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmadds f6,f0,f7,f4
	ctx.f6.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f4,f11,f9,f2
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f3,f10,f13,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fnmsubs f1,f8,f12,f5
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// fmadds f2,f12,f9,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fnmsubs f0,f12,f10,f4
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fnmsubs f12,f7,f9,f3
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f9.f64 - ctx.f3.f64)));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f10,f10,f7,f1
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f7.f64 - ctx.f1.f64)));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fnmsubs f11,f8,f13,f2
	ctx.f11.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x825ad3a0
	sub_825AD3A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825ad730
	if (!cr6.gt) goto loc_825AD730;
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f29.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f28.f64 = double(temp.f32);
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f27.f64 = double(temp.f32);
	// lfs f26,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f26.f64 = double(temp.f32);
loc_825AD730:
	// fcmpu cr6,f31,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f24.f64);
	// bgt cr6,0x825ad810
	if (cr6.gt) goto loc_825AD810;
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 - f30.f64));
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	f0.f64 = double(temp.f32);
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f10,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmadds f2,f8,f11,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f1,f7,f0,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f6,f8,f0,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f4.f64));
	// fmsubs f5,f12,f0,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f3.f64));
	// fmadds f4,f12,f9,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f3,f10,f13,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f7,f9,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fnmsubs f1,f7,f11,f5
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fnmsubs f0,f7,f10,f4
	f0.f64 = double(float(-(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fnmsubs f12,f8,f9,f3
	ctx.f12.f64 = double(float(-(ctx.f8.f64 * ctx.f9.f64 - ctx.f3.f64)));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fnmsubs f11,f11,f13,f2
	ctx.f11.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f2.f64)));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fnmsubs f10,f8,f10,f1
	ctx.f10.f64 = double(float(-(ctx.f8.f64 * ctx.f10.f64 - ctx.f1.f64)));
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x825ad3a0
	sub_825AD3A0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825ad7ec
	if (!cr6.gt) goto loc_825AD7EC;
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f29.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f28.f64 = double(temp.f32);
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f27.f64 = double(temp.f32);
	// lfs f26,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f26.f64 = double(temp.f32);
loc_825AD7EC:
	// fcmpu cr6,f31,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f24.f64);
	// bgt cr6,0x825ad810
	if (cr6.gt) goto loc_825AD810;
	// fadds f30,f30,f23
	f30.f64 = double(float(f30.f64 + f23.f64));
	// fcmpu cr6,f30,f25
	cr6.compare(f30.f64, f25.f64);
	// ble cr6,0x825ad804
	if (!cr6.gt) goto loc_825AD804;
	// fsubs f30,f30,f25
	f30.f64 = double(float(f30.f64 - f25.f64));
loc_825AD804:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(r28.s32, 8, xer);
	// blt cr6,0x825ad67c
	if (cr6.lt) goto loc_825AD67C;
loc_825AD810:
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fadds f0,f30,f0
	f0.f64 = double(float(f30.f64 + f0.f64));
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f27,88(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,-5584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5584);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,240(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825ad844
	if (!cr6.gt) goto loc_825AD844;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,240(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
loc_825AD844:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// lfs f4,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f2,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r30,220
	r11.s64 = r30.s64 + 220;
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,4932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4932);
	f0.f64 = double(temp.f32);
	// fmadds f3,f10,f2,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fmadds f1,f9,f2,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f4,f8,f2,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f4.f64));
	// lfs f31,224(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	f31.f64 = double(temp.f32);
	// lfs f25,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmadds f3,f7,f31,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * f31.f64 + ctx.f3.f64));
	// lfs f24,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f24.f64 = double(temp.f32);
	// fmadds f2,f6,f31,f1
	ctx.f2.f64 = double(float(ctx.f6.f64 * f31.f64 + ctx.f1.f64));
	// lfs f30,232(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	f30.f64 = double(temp.f32);
	// fmadds f1,f5,f31,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * f31.f64 + ctx.f4.f64));
	// lfs f23,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f23.f64 = double(temp.f32);
	// lfs f22,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f22.f64 = double(temp.f32);
	// fadds f30,f30,f22
	f30.f64 = double(float(f30.f64 + f22.f64));
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f4,f3,f25
	ctx.f4.f64 = double(float(ctx.f3.f64 + f25.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f3,f2,f24
	ctx.f3.f64 = double(float(ctx.f2.f64 + f24.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f2,f1,f23
	ctx.f2.f64 = double(float(ctx.f1.f64 + f23.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f1,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,224(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,232(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,228(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmadds f10,f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f3,f3,f26
	ctx.f3.f64 = double(float(ctx.f3.f64 + f26.f64));
	// stfs f3,36(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// fmadds f2,f9,f1,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f1,f8,f1,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f13,f7,f4,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f12,f6,f4,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f11,f5,f4,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fadds f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f10,24(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// fadds f9,f12,f28
	ctx.f9.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// fadds f8,f11,f27
	ctx.f8.f64 = double(float(ctx.f11.f64 + f27.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsubs f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fadds f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fadds f0,f8,f13
	f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f4,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_825AD9A4:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_825AD9B8"))) PPC_WEAK_FUNC(sub_825AD9B8);
PPC_FUNC_IMPL(__imp__sub_825AD9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825AD9BC"))) PPC_WEAK_FUNC(sub_825AD9BC);
PPC_FUNC_IMPL(__imp__sub_825AD9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AD9C0"))) PPC_WEAK_FUNC(sub_825AD9C0);
PPC_FUNC_IMPL(__imp__sub_825AD9C0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-5576
	ctx.r9.s64 = r11.s64 + -5576;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
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
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-5668
	ctx.r3.s64 = ctx.r8.s64 + -5668;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ada78
	if (cr6.eq) goto loc_825ADA78;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825ada78
	if (cr6.eq) goto loc_825ADA78;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ada80
	if (!cr6.eq) goto loc_825ADA80;
loc_825ADA78:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r11,r11,13376
	r11.s64 = r11.s64 + 13376;
loc_825ADA80:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,204(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 204, temp.u32);
	// addi r31,r30,204
	r31.s64 = r30.s64 + 204;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 208, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,212(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 212, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,216(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5472
	ctx.r3.s64 = r11.s64 + -5472;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825adb10
	if (cr6.eq) goto loc_825ADB10;
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
	// beq cr6,0x825adb10
	if (cr6.eq) goto loc_825ADB10;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825adb18
	if (!cr6.eq) goto loc_825ADB18;
loc_825ADB10:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,-19612
	r11.s64 = r11.s64 + -19612;
loc_825ADB18:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,220(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,224(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,228(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 232, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-25128
	ctx.r3.s64 = ctx.r9.s64 + -25128;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f0,3640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	f0.f64 = double(temp.f32);
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - f0.f64));
	// fsel f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : f0.f64;
	// stfs f2,244(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14120(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825adbb0
	if (cr6.eq) goto loc_825ADBB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825adbb4
	if (!cr6.eq) goto loc_825ADBB4;
loc_825ADBB0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825ADBB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r7,r10,-5544
	ctx.r7.s64 = ctx.r10.s64 + -5544;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825adc28
	if (cr6.eq) goto loc_825ADC28;
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// bl 0x826ef488
	sub_826EF488(ctx, base);
	// stw r3,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r3.u32);
	// bl 0x826ef3b8
	sub_826EF3B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_825ADC28:
	// stw r31,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ef3b8
	sub_826EF3B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825ADC3C"))) PPC_WEAK_FUNC(sub_825ADC3C);
PPC_FUNC_IMPL(__imp__sub_825ADC3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ADC40"))) PPC_WEAK_FUNC(sub_825ADC40);
PPC_FUNC_IMPL(__imp__sub_825ADC40) {
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
	// bl 0x825acfd0
	sub_825ACFD0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825adc78
	if (cr6.eq) goto loc_825ADC78;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ADC78:
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

__attribute__((alias("__imp__sub_825ADC8C"))) PPC_WEAK_FUNC(sub_825ADC8C);
PPC_FUNC_IMPL(__imp__sub_825ADC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ADC90"))) PPC_WEAK_FUNC(sub_825ADC90);
PPC_FUNC_IMPL(__imp__sub_825ADC90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ADC94"))) PPC_WEAK_FUNC(sub_825ADC94);
PPC_FUNC_IMPL(__imp__sub_825ADC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADC98"))) PPC_WEAK_FUNC(sub_825ADC98);
PPC_FUNC_IMPL(__imp__sub_825ADC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r11,802(r3)
	PPC_STORE_U8(ctx.r3.u32 + 802, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ADCA4"))) PPC_WEAK_FUNC(sub_825ADCA4);
PPC_FUNC_IMPL(__imp__sub_825ADCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADCA8"))) PPC_WEAK_FUNC(sub_825ADCA8);
PPC_FUNC_IMPL(__imp__sub_825ADCA8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	f0.f64 = double(temp.f32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x825adcdc
	if (!cr6.lt) goto loc_825ADCDC;
	// lfs f12,696(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / f0.f64));
	// lfs f0,704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	f0.f64 = double(temp.f32);
	// lfs f10,700(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// bgelr cr6
	if (!cr6.lt) return;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
loc_825ADCDC:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ADCE4"))) PPC_WEAK_FUNC(sub_825ADCE4);
PPC_FUNC_IMPL(__imp__sub_825ADCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADCE8"))) PPC_WEAK_FUNC(sub_825ADCE8);
PPC_FUNC_IMPL(__imp__sub_825ADCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e9418
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r29,r3,372
	r29.s64 = ctx.r3.s64 + 372;
	// addi r28,r3,572
	r28.s64 = ctx.r3.s64 + 572;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x825add1c
	if (!cr6.eq) goto loc_825ADD1C;
	// li r30,0
	r30.s64 = 0;
loc_825ADD1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x825add48
	if (!cr6.eq) goto loc_825ADD48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_825ADD48:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f30,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x825add74
	if (!cr6.eq) goto loc_825ADD74;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_825ADD74:
	// lwz r11,796(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825addcc
	if (cr6.eq) goto loc_825ADDCC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x825addb0
	if (cr6.eq) goto loc_825ADDB0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x825ade0c
	if (!cr6.eq) goto loc_825ADE0C;
	// addi r4,r31,732
	ctx.r4.s64 = r31.s64 + 732;
	// addi r7,r31,780
	ctx.r7.s64 = r31.s64 + 780;
	// addi r6,r31,764
	ctx.r6.s64 = r31.s64 + 764;
	// addi r5,r31,748
	ctx.r5.s64 = r31.s64 + 748;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233d9e0
	sub_8233D9E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x825adde0
	goto loc_825ADDE0;
loc_825ADDB0:
	// addi r4,r31,732
	ctx.r4.s64 = r31.s64 + 732;
	// addi r6,r31,764
	ctx.r6.s64 = r31.s64 + 764;
	// addi r5,r31,748
	ctx.r5.s64 = r31.s64 + 748;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825af230
	sub_825AF230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x825adde0
	goto loc_825ADDE0;
loc_825ADDCC:
	// addi r4,r31,732
	ctx.r4.s64 = r31.s64 + 732;
	// addi r5,r31,748
	ctx.r5.s64 = r31.s64 + 748;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825af198
	sub_825AF198(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_825ADDE0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8233da70
	sub_8233DA70(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
loc_825ADE0C:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f31.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f10,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f8,16(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fadds f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// fadds f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f3,16(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f2,84(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fmadds f12,f2,f0,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f13.f64));
	// stfs f12,84(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// lbz r11,801(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 801);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825adf4c
	if (cr6.eq) goto loc_825ADF4C;
	// lwz r11,796(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x825adf4c
	if (!cr6.gt) goto loc_825ADF4C;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,740(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,716
	ctx.r10.s64 = r11.s64 + 716;
	// lfs f9,732(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 732);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,736(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 736);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 720);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f1,716(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 716);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,724(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 724);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - f0.f64));
	// lfs f0,708(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 708);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f11,f4,f4
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f10,f8,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f9,f2,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f8,f5,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f7,f13,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsqrts f13,f8
	ctx.f13.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsqrts f12,f7
	ctx.f12.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825adf20
	if (!cr6.lt) goto loc_825ADF20;
	// lfs f12,696(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 696);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// b 0x825adf34
	goto loc_825ADF34;
loc_825ADF20:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x825adf4c
	if (!cr6.lt) goto loc_825ADF4C;
	// lfs f13,696(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 696);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_825ADF34:
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 704);
	f0.f64 = double(temp.f32);
	// lfs f10,700(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 700);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// bge cr6,0x825adf48
	if (!cr6.lt) goto loc_825ADF48;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_825ADF48:
	// stfs f13,700(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 700, temp.u32);
loc_825ADF4C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_825ADF58"))) PPC_WEAK_FUNC(sub_825ADF58);
PPC_FUNC_IMPL(__imp__sub_825ADF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825ADF5C"))) PPC_WEAK_FUNC(sub_825ADF5C);
PPC_FUNC_IMPL(__imp__sub_825ADF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ADF60"))) PPC_WEAK_FUNC(sub_825ADF60);
PPC_FUNC_IMPL(__imp__sub_825ADF60) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// addi r10,r11,-5444
	ctx.r10.s64 = r11.s64 + -5444;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825adf9c
	if (cr6.eq) goto loc_825ADF9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825adfa0
	if (!cr6.eq) goto loc_825ADFA0;
loc_825ADF9C:
	// li r11,0
	r11.s64 = 0;
loc_825ADFA0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22044);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r28,260
	r26.s64 = r28.s64 + 260;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825adff8
	if (!cr6.eq) goto loc_825ADFF8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825adff8
	if (!cr6.eq) goto loc_825ADFF8;
	// lwz r11,22044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22044);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825ADFF8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825ae014
	if (cr6.eq) goto loc_825AE014;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ae018
	if (!cr6.eq) goto loc_825AE018;
loc_825AE014:
	// li r11,0
	r11.s64 = 0;
loc_825AE018:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22040);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,232
	r27.s64 = r28.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ae070
	if (!cr6.eq) goto loc_825AE070;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ae070
	if (!cr6.eq) goto loc_825AE070;
	// lwz r11,22040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22040);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825AE070:
	// lwz r3,728(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ae090
	if (cr6.eq) goto loc_825AE090;
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
loc_825AE090:
	// addi r3,r28,488
	ctx.r3.s64 = r28.s64 + 488;
	// bl 0x825af3f8
	sub_825AF3F8(ctx, base);
	// addi r3,r28,288
	ctx.r3.s64 = r28.s64 + 288;
	// bl 0x825af3f8
	sub_825AF3F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r28,204
	ctx.r3.s64 = r28.s64 + 204;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825AE0C4"))) PPC_WEAK_FUNC(sub_825AE0C4);
PPC_FUNC_IMPL(__imp__sub_825AE0C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825AE0C8"))) PPC_WEAK_FUNC(sub_825AE0C8);
PPC_FUNC_IMPL(__imp__sub_825AE0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,392(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r29,r3,488
	r29.s64 = ctx.r3.s64 + 488;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f0,732(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 732, temp.u32);
	// lfs f13,396(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,736(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 736, temp.u32);
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
	// stfs f12,740(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 740, temp.u32);
	// lfs f11,404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,744(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 744, temp.u32);
	// stw r10,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825af2c8
	sub_825AF2C8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r19,0
	r19.s64 = 0;
	// addi r3,r8,14076
	ctx.r3.s64 = ctx.r8.s64 + 14076;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825ae18c
	if (cr6.eq) goto loc_825AE18C;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x825ae18c
	if (cr6.eq) goto loc_825AE18C;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ae190
	if (!cr6.eq) goto loc_825AE190;
loc_825AE18C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825AE190:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AE1A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ae1a0
	if (!cr6.eq) goto loc_825AE1A0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x825a1128
	sub_825A1128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,572
	ctx.r3.s64 = r28.s64 + 572;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5308
	r30.s64 = r11.s64 + -5308;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ae27c
	if (cr6.eq) goto loc_825AE27C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AE254:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ae254
	if (!cr6.eq) goto loc_825AE254;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r28,516
	ctx.r3.s64 = r28.s64 + 516;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
loc_825AE27C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5320
	r30.s64 = r11.s64 + -5320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae318
	if (cr6.eq) goto loc_825AE318;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AE2F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ae2f0
	if (!cr6.eq) goto loc_825AE2F0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r28,544
	ctx.r3.s64 = r28.s64 + 544;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
loc_825AE318:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r20,r11,-5336
	r20.s64 = r11.s64 + -5336;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae38c
	if (cr6.eq) goto loc_825AE38C;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c8928
	sub_822C8928(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,801(r28)
	PPC_STORE_U8(r28.u32 + 801, ctx.r10.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE38C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r21,r11,-5352
	r21.s64 = r11.s64 + -5352;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae400
	if (cr6.eq) goto loc_825AE400;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// stw r10,720(r28)
	PPC_STORE_U32(r28.u32 + 720, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE400:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5376
	r30.s64 = r11.s64 + -5376;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae474
	if (cr6.eq) goto loc_825AE474;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// stw r10,724(r28)
	PPC_STORE_U32(r28.u32 + 724, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE474:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r22,r11,-5388
	r22.s64 = r11.s64 + -5388;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae4ec
	if (cr6.eq) goto loc_825AE4EC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822daa00
	sub_822DAA00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,684(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 684, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825ae4f4
	goto loc_825AE4F4;
loc_825AE4EC:
	// lfs f0,692(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 692);
	f0.f64 = double(temp.f32);
	// stfs f0,684(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 684, temp.u32);
loc_825AE4F4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5400
	r30.s64 = r11.s64 + -5400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae958
	if (cr6.eq) goto loc_825AE958;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,304(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825ae958
	if (!cr6.gt) goto loc_825AE958;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825ae958
	if (!cr6.gt) goto loc_825AE958;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r28,288
	r27.s64 = r28.s64 + 288;
	// addi r25,r11,-5416
	r25.s64 = r11.s64 + -5416;
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// addi r23,r10,-5424
	r23.s64 = ctx.r10.s64 + -5424;
loc_825AE5A0:
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae624
	if (cr6.eq) goto loc_825AE624;
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
	// beq cr6,0x825ae624
	if (cr6.eq) goto loc_825AE624;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ae628
	if (!cr6.eq) goto loc_825AE628;
loc_825AE624:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825AE628:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825ae648
	if (cr6.lt) goto loc_825AE648;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x825ae64c
	goto loc_825AE64C;
loc_825AE648:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_825AE64C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825AE650:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825ae650
	if (!cr6.eq) goto loc_825AE650;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
loc_825AE674:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825ae674
	if (!cr6.eq) goto loc_825AE674;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r1,188
	r11.s64 = ctx.r1.s64 + 188;
	// blt cr6,0x825ae6a4
	if (cr6.lt) goto loc_825AE6A4;
	// addi r11,r1,172
	r11.s64 = ctx.r1.s64 + 172;
loc_825AE6A4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825ae6b8
	if (cr6.lt) goto loc_825AE6B8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x825ae6bc
	goto loc_825AE6BC;
loc_825AE6B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_825AE6BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825ae944
	if (!cr6.eq) goto loc_825AE944;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae738
	if (cr6.eq) goto loc_825AE738;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c8928
	sub_822C8928(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,801(r28)
	PPC_STORE_U8(r28.u32 + 801, ctx.r10.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE738:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae7a4
	if (cr6.eq) goto loc_825AE7A4;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,720(r28)
	PPC_STORE_U32(r28.u32 + 720, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE7A4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae810
	if (cr6.eq) goto loc_825AE810;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822daa00
	sub_822DAA00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,684(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 684, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825AE810:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ae944
	if (cr6.eq) goto loc_825AE944;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825ae944
	if (!cr6.gt) goto loc_825AE944;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_825AE898:
	// lwz r11,796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 796);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,796(r28)
	PPC_STORE_U32(r28.u32 + 796, ctx.r10.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ae904
	if (cr6.eq) goto loc_825AE904;
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
	// beq cr6,0x825ae904
	if (cr6.eq) goto loc_825AE904;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ae908
	if (!cr6.eq) goto loc_825AE908;
loc_825AE904:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825AE908:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stfs f0,732(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 732, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,736(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 736, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,740(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 740, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,744(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 744, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x825ae898
	if (cr6.lt) goto loc_825AE898;
loc_825AE944:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x825ae5a0
	if (cr6.lt) goto loc_825AE5A0;
loc_825AE958:
	// lwz r11,796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 796);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,796(r28)
	PPC_STORE_U32(r28.u32 + 796, ctx.r9.u32);
	// lfs f13,592(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 592);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r10,r11,732
	ctx.r10.s64 = r11.s64 + 732;
	// stfs f13,732(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 732, temp.u32);
	// lfs f12,596(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 596);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,736(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 736, temp.u32);
	// lfs f11,600(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 600);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,740(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 740, temp.u32);
	// lfs f10,604(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 604);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,744(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 744, temp.u32);
	// lfs f9,684(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 684);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,688(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 688, temp.u32);
	// stfs f9,700(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r28.u32 + 700, temp.u32);
	// stfs f9,696(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r28.u32 + 696, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_825AE9B8"))) PPC_WEAK_FUNC(sub_825AE9B8);
PPC_FUNC_IMPL(__imp__sub_825AE9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825AE9BC"))) PPC_WEAK_FUNC(sub_825AE9BC);
PPC_FUNC_IMPL(__imp__sub_825AE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AE9C0"))) PPC_WEAK_FUNC(sub_825AE9C0);
PPC_FUNC_IMPL(__imp__sub_825AE9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825af2c8
	sub_825AF2C8(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// bne cr6,0x825ae9f0
	if (!cr6.eq) goto loc_825AE9F0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_825AE9F0:
	// addi r3,r29,372
	ctx.r3.s64 = r29.s64 + 372;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// lfs f0,692(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 692);
	f0.f64 = double(temp.f32);
	// stfs f0,700(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 700, temp.u32);
	// stb r24,801(r29)
	PPC_STORE_U8(r29.u32 + 801, r24.u8);
	// stb r24,800(r29)
	PPC_STORE_U8(r29.u32 + 800, r24.u8);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r24,720(r29)
	PPC_STORE_U32(r29.u32 + 720, r24.u32);
	// addi r3,r11,-18640
	ctx.r3.s64 = r11.s64 + -18640;
	// lwz r30,728(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 728);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825aeba0
	if (!cr6.gt) goto loc_825AEBA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r25,r11,14076
	r25.s64 = r11.s64 + 14076;
loc_825AEA64:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aeae8
	if (cr6.eq) goto loc_825AEAE8;
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
	// beq cr6,0x825aeae8
	if (cr6.eq) goto loc_825AEAE8;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aeaec
	if (!cr6.eq) goto loc_825AEAEC;
loc_825AEAE8:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825AEAEC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825aeb7c
	if (cr6.eq) goto loc_825AEB7C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825aeb7c
	if (cr6.eq) goto loc_825AEB7C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AEB10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825aeb10
	if (!cr6.eq) goto loc_825AEB10;
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_825AEB34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825aeb34
	if (!cr6.eq) goto loc_825AEB34;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x825aeb64
	if (cr6.lt) goto loc_825AEB64;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
loc_825AEB64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825aeb94
	if (cr6.eq) goto loc_825AEB94;
loc_825AEB7C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x825aea64
	if (cr6.lt) goto loc_825AEA64;
	// b 0x825aeba0
	goto loc_825AEBA0;
loc_825AEB94:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ae0c8
	sub_825AE0C8(ctx, base);
loc_825AEBA0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lbz r30,800(r29)
	r30.u64 = PPC_LOAD_U8(r29.u32 + 800);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r29,22032(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22032);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aebfc
	if (cr6.eq) goto loc_825AEBFC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-26364
	ctx.r9.s64 = ctx.r10.s64 + -26364;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// stw r24,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r24.u32);
	// stw r24,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r24.u32);
	// stw r24,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r24.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825AEBFC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825AEC00"))) PPC_WEAK_FUNC(sub_825AEC00);
PPC_FUNC_IMPL(__imp__sub_825AEC00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825AEC04"))) PPC_WEAK_FUNC(sub_825AEC04);
PPC_FUNC_IMPL(__imp__sub_825AEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AEC08"))) PPC_WEAK_FUNC(sub_825AEC08);
PPC_FUNC_IMPL(__imp__sub_825AEC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// addi r10,r11,-5444
	ctx.r10.s64 = r11.s64 + -5444;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,232
	r26.s64 = r31.s64 + 232;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,260
	r25.s64 = r31.s64 + 260;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x825af368
	sub_825AF368(ctx, base);
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// bl 0x825af368
	sub_825AF368(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,688(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// stw r3,712(r31)
	PPC_STORE_U32(r31.u32 + 712, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r27,720(r31)
	PPC_STORE_U32(r31.u32 + 720, r27.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r27,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r27.u32);
	// addi r7,r8,-5240
	ctx.r7.s64 = ctx.r8.s64 + -5240;
	// stw r27,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r27.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// stb r27,800(r31)
	PPC_STORE_U8(r31.u32 + 800, r27.u8);
	// li r3,60
	ctx.r3.s64 = 60;
	// stb r27,801(r31)
	PPC_STORE_U8(r31.u32 + 801, r27.u8);
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// stb r27,802(r31)
	PPC_STORE_U8(r31.u32 + 802, r27.u8);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825aecd8
	if (cr6.eq) goto loc_825AECD8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826cbd90
	sub_826CBD90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825aecdc
	goto loc_825AECDC;
loc_825AECD8:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_825AECDC:
	// stw r30,728(r31)
	PPC_STORE_U32(r31.u32 + 728, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-7784
	r29.s64 = r11.s64 + -7784;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5264
	ctx.r3.s64 = r11.s64 + -5264;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r28,r11,-5460
	r28.s64 = r11.s64 + -5460;
	// beq cr6,0x825aed70
	if (cr6.eq) goto loc_825AED70;
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
	// beq cr6,0x825aed70
	if (cr6.eq) goto loc_825AED70;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aed74
	if (!cr6.eq) goto loc_825AED74;
loc_825AED70:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825AED74:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,692(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 692, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lfs f13,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 696, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f13,700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 700, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5280
	ctx.r3.s64 = r11.s64 + -5280;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aee18
	if (cr6.eq) goto loc_825AEE18;
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
	// beq cr6,0x825aee18
	if (cr6.eq) goto loc_825AEE18;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aee1c
	if (!cr6.eq) goto loc_825AEE1C;
loc_825AEE18:
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
loc_825AEE1C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,704(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 704, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5296
	ctx.r3.s64 = r11.s64 + -5296;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825aeeb4
	if (cr6.eq) goto loc_825AEEB4;
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
	// beq cr6,0x825aeeb4
	if (cr6.eq) goto loc_825AEEB4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aeeb8
	if (!cr6.eq) goto loc_825AEEB8;
loc_825AEEB4:
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_825AEEB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,708(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 708, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,732
	ctx.r3.s64 = r31.s64 + 732;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lis r11,-32165
	r11.s64 = -2107965440;
	// addi r28,r11,-5696
	r28.s64 = r11.s64 + -5696;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825aef08
	if (cr6.eq) goto loc_825AEF08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aef0c
	if (!cr6.eq) goto loc_825AEF0C;
loc_825AEF08:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_825AEF0C:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r24,12(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,-27112
	ctx.r3.s64 = ctx.r10.s64 + -27112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,22040(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22040);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-9064
	r28.s64 = r11.s64 + -9064;
	// beq cr6,0x825aef80
	if (cr6.eq) goto loc_825AEF80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aef84
	if (!cr6.eq) goto loc_825AEF84;
loc_825AEF80:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825AEF84:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-27176
	ctx.r3.s64 = ctx.r10.s64 + -27176;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,22044(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22044);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,712(r31)
	PPC_STORE_U32(r31.u32 + 712, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825AEFDC"))) PPC_WEAK_FUNC(sub_825AEFDC);
PPC_FUNC_IMPL(__imp__sub_825AEFDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825AEFE0"))) PPC_WEAK_FUNC(sub_825AEFE0);
PPC_FUNC_IMPL(__imp__sub_825AEFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,712(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 712);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825af01c
	if (cr6.lt) goto loc_825AF01C;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x825af028
	goto loc_825AF028;
loc_825AF01C:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825AF028:
	// stw r11,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r11.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// stw r3,712(r31)
	PPC_STORE_U32(r31.u32 + 712, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825af050
	if (!cr6.gt) goto loc_825AF050;
	// lwz r10,716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 716);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// stw r9,720(r31)
	PPC_STORE_U32(r31.u32 + 720, ctx.r9.u32);
	// b 0x825af178
	goto loc_825AF178;
loc_825AF050:
	// lbz r11,800(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 800);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825af178
	if (!cr6.eq) goto loc_825AF178;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,802(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 802);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// beq cr6,0x825af07c
	if (cr6.eq) goto loc_825AF07C;
	// lfs f1,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825af0ac
	goto loc_825AF0AC;
loc_825AF07C:
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,688(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825af09c
	if (!cr6.gt) goto loc_825AF09C;
	// stfs f31,688(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x825af0ac
	goto loc_825AF0AC;
loc_825AF09C:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x825af0ac
	if (!cr6.lt) goto loc_825AF0AC;
	// stfs f0,688(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_825AF0AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825adce8
	sub_825ADCE8(ctx, base);
	// lfs f0,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 688);
	f0.f64 = double(temp.f32);
	// lfs f13,700(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 700);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,688(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// fcmpu cr6,f12,f31
	cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x825af178
	if (!cr6.lt) goto loc_825AF178;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stfs f31,688(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// li r11,1
	r11.s64 = 1;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r11,800(r31)
	PPC_STORE_U8(r31.u32 + 800, r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r10,22032(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22032);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82334ab0
	sub_82334AB0(ctx, base);
	// addi r4,r31,488
	ctx.r4.s64 = r31.s64 + 488;
	// addi r3,r31,288
	ctx.r3.s64 = r31.s64 + 288;
	// bl 0x825af4d0
	sub_825AF4D0(ctx, base);
	// lwz r7,560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x825af134
	if (!cr6.gt) goto loc_825AF134;
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825af134
	if (!cr6.gt) goto loc_825AF134;
	// lwz r10,564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 564);
	// addi r11,r31,544
	r11.s64 = r31.s64 + 544;
	// b 0x825af154
	goto loc_825AF154;
loc_825AF134:
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825af178
	if (!cr6.gt) goto loc_825AF178;
	// lwz r11,724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 724);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825af178
	if (!cr6.lt) goto loc_825AF178;
	// lwz r10,536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// addi r11,r31,516
	r11.s64 = r31.s64 + 516;
loc_825AF154:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825af160
	if (cr6.lt) goto loc_825AF160;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825AF160:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82330d80
	sub_82330D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ae9c0
	sub_825AE9C0(ctx, base);
loc_825AF178:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AF194"))) PPC_WEAK_FUNC(sub_825AF194);
PPC_FUNC_IMPL(__imp__sub_825AF194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF198"))) PPC_WEAK_FUNC(sub_825AF198);
PPC_FUNC_IMPL(__imp__sub_825AF198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,2
	r11.s64 = 2;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r10,13444
	ctx.r9.s64 = ctx.r10.s64 + 13444;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,13444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13444);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,13444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13444);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
}

__attribute__((alias("__imp__sub_825AF228"))) PPC_WEAK_FUNC(sub_825AF228);
PPC_FUNC_IMPL(__imp__sub_825AF228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF22C"))) PPC_WEAK_FUNC(sub_825AF22C);
PPC_FUNC_IMPL(__imp__sub_825AF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF230"))) PPC_WEAK_FUNC(sub_825AF230);
PPC_FUNC_IMPL(__imp__sub_825AF230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,3
	r11.s64 = 3;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r10,13444
	ctx.r9.s64 = ctx.r10.s64 + 13444;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,13444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13444);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
}

__attribute__((alias("__imp__sub_825AF2C0"))) PPC_WEAK_FUNC(sub_825AF2C0);
PPC_FUNC_IMPL(__imp__sub_825AF2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF2C4"))) PPC_WEAK_FUNC(sub_825AF2C4);
PPC_FUNC_IMPL(__imp__sub_825AF2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF2C8"))) PPC_WEAK_FUNC(sub_825AF2C8);
PPC_FUNC_IMPL(__imp__sub_825AF2C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x825a1060
	sub_825A1060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x825af31c
	if (cr6.lt) goto loc_825AF31C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825af320
	goto loc_825AF320;
loc_825AF31C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825AF320:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// blt cr6,0x825af33c
	if (cr6.lt) goto loc_825AF33C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825AF33C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f0,-5460(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5460);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AF364"))) PPC_WEAK_FUNC(sub_825AF364);
PPC_FUNC_IMPL(__imp__sub_825AF364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF368"))) PPC_WEAK_FUNC(sub_825AF368);
PPC_FUNC_IMPL(__imp__sub_825AF368) {
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
	// li r30,0
	r30.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r30.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// bl 0x825a1060
	sub_825A1060(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825af3cc
	if (cr6.lt) goto loc_825AF3CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x825af3d0
	goto loc_825AF3D0;
loc_825AF3CC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825AF3D0:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825af2c8
	sub_825AF2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_825AF3F4"))) PPC_WEAK_FUNC(sub_825AF3F4);
PPC_FUNC_IMPL(__imp__sub_825AF3F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF3F8"))) PPC_WEAK_FUNC(sub_825AF3F8);
PPC_FUNC_IMPL(__imp__sub_825AF3F8) {
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
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r3,56
	r28.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825af420
	if (cr6.lt) goto loc_825AF420;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825AF420:
	// li r30,0
	r30.s64 = 0;
	// li r27,15
	r27.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r30.u32);
	// addi r31,r29,28
	r31.s64 = r29.s64 + 28;
	// stw r27,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r27.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r30.u8);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825af44c
	if (cr6.lt) goto loc_825AF44C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825AF44C:
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825af46c
	if (cr6.lt) goto loc_825AF46C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825AF46C:
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825AF47C"))) PPC_WEAK_FUNC(sub_825AF47C);
PPC_FUNC_IMPL(__imp__sub_825AF47C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825AF480"))) PPC_WEAK_FUNC(sub_825AF480);
PPC_FUNC_IMPL(__imp__sub_825AF480) {
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
	// bl 0x825adf60
	sub_825ADF60(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825af4b8
	if (cr6.eq) goto loc_825AF4B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825AF4B8:
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

