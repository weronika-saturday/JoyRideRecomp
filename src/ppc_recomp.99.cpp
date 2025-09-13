#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8248A358"))) PPC_WEAK_FUNC(sub_8248A358);
PPC_FUNC_IMPL(__imp__sub_8248A358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// bl 0x828e941c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31966
	r30.s64 = -2094923776;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r30,-15992
	r29.s64 = r30.s64 + -15992;
	// lfs f13,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,-15992(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -15992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f0,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f1,f10,f13,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64));
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-15992(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -15992);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f1,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f0,f3,f4,f6
	f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f6.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f13,f7,f1,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 - ctx.f2.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f5,f8,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmadds f10,f13,f10,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f1,f12,f9,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f10.f64));
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,192
	ctx.r4.s64 = r11.s64 + 192;
	// lfs f0,-16000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16000);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f30,f0
	ctx.f8.f64 = double(float(f30.f64 - f0.f64));
	// fsubs f7,f0,f9
	ctx.f7.f64 = double(float(f0.f64 - ctx.f9.f64));
	// fmuls f30,f8,f13
	f30.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f29,f7,f13
	f29.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,208
	ctx.r4.s64 = r11.s64 + 208;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,92
	ctx.r4.s64 = r11.s64 + 92;
	// lfs f6,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,92(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 92, temp.u32);
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,96(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,100(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// lfs f3,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,104(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 104, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r5,-31966
	ctx.r5.s64 = -2094923776;
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,-15996(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15996);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,92(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// fmuls f12,f2,f29
	ctx.f12.f64 = double(float(ctx.f2.f64 * f29.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 * f30.f64));
	// stfs f11,100(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f8,104(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsel f5,f12,f12,f31
	ctx.f5.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsel f4,f10,f10,f31
	ctx.f4.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : f31.f64;
	// fsel f3,f7,f7,f31
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : f31.f64;
	// fsubs f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 - f0.f64));
	// fsubs f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 - f0.f64));
	// fsubs f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 - f0.f64));
	// fsubs f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 - f0.f64));
	// fsel f11,f2,f0,f6
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? f0.f64 : ctx.f6.f64;
	// stfs f11,56(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// fsel f10,f1,f0,f5
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? f0.f64 : ctx.f5.f64;
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// fsel f9,f13,f0,f4
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : ctx.f4.f64;
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// fsel f8,f12,f0,f3
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f3.f64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stfs f8,68(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f7,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lfs f6,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lfs f5,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsel f3,f4,f6,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// lfs f2,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsel f0,f1,f7,f3
	f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f7.f64 : ctx.f3.f64;
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - f0.f64));
	// fsel f12,f13,f2,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : f0.f64;
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 72, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-15992(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -15992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmadds f7,f11,f13,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f1,f10,f12,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f7.f64));
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,76(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 76, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8248A5BC"))) PPC_WEAK_FUNC(sub_8248A5BC);
PPC_FUNC_IMPL(__imp__sub_8248A5BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8248A5C0"))) PPC_WEAK_FUNC(sub_8248A5C0);
PPC_FUNC_IMPL(__imp__sub_8248A5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r8,r11,-11960
	ctx.r8.s64 = r11.s64 + -11960;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r7,r10,-11796
	ctx.r7.s64 = ctx.r10.s64 + -11796;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// addi r6,r9,-11812
	ctx.r6.s64 = ctx.r9.s64 + -11812;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// li r28,8
	r28.s64 = 8;
	// addi r29,r10,-11896
	r29.s64 = ctx.r10.s64 + -11896;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r3,36
	ctx.r3.s64 = 36;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f30,21036(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8248a690
	if (cr6.eq) goto loc_8248A690;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8248ac78
	sub_8248AC78(ctx, base);
	// b 0x8248a694
	goto loc_8248A694;
loc_8248A690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8248A694:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248a710
	if (cr6.eq) goto loc_8248A710;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8248ac78
	sub_8248AC78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_8248A710:
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8248A724"))) PPC_WEAK_FUNC(sub_8248A724);
PPC_FUNC_IMPL(__imp__sub_8248A724) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8248A728"))) PPC_WEAK_FUNC(sub_8248A728);
PPC_FUNC_IMPL(__imp__sub_8248A728) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11796
	ctx.r9.s64 = r11.s64 + -11796;
	// addi r8,r10,-11812
	ctx.r8.s64 = ctx.r10.s64 + -11812;
	// li r30,0
	r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248a770
	if (cr6.eq) goto loc_8248A770;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_8248A770:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248a784
	if (cr6.eq) goto loc_8248A784;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8248A784:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11940
	ctx.r9.s64 = r11.s64 + -11940;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
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

__attribute__((alias("__imp__sub_8248A7B8"))) PPC_WEAK_FUNC(sub_8248A7B8);
PPC_FUNC_IMPL(__imp__sub_8248A7B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A7BC"))) PPC_WEAK_FUNC(sub_8248A7BC);
PPC_FUNC_IMPL(__imp__sub_8248A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248A7C0"))) PPC_WEAK_FUNC(sub_8248A7C0);
PPC_FUNC_IMPL(__imp__sub_8248A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f30,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// ble cr6,0x8248a818
	if (!cr6.gt) goto loc_8248A818;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f30,80(r8)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stb r9,15(r7)
	PPC_STORE_U8(ctx.r7.u32 + 15, ctx.r9.u8);
	// b 0x8248a888
	goto loc_8248A888;
loc_8248A818:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x8248a86c
	if (!cr6.lt) goto loc_8248A86C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f11,80(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8248a888
	if (!cr6.gt) goto loc_8248A888;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
	// b 0x8248a888
	goto loc_8248A888;
loc_8248A86C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stfs f30,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stb r11,15(r8)
	PPC_STORE_U8(ctx.r8.u32 + 15, r11.u8);
loc_8248A888:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fsel f8,f9,f9,f30
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f30.f64;
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - f31.f64));
	// fsel f1,f7,f31,f8
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? f31.f64 : ctx.f8.f64;
	// bl 0x8248acf0
	sub_8248ACF0(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f6,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stfs f6,36(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lfs f3,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,124(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fdivs f0,f2,f1
	f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// fsel f13,f0,f0,f30
	ctx.f13.f64 = f0.f64 >= 0.0 ? f0.f64 : f30.f64;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsel f1,f12,f31,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// bl 0x8248acf0
	sub_8248ACF0(ctx, base);
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 - ctx.f10.f64));
	// stfs f9,32(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// fsel f7,f8,f8,f30
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : f30.f64;
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - f31.f64));
	// fsel f5,f6,f31,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f31.f64 : ctx.f7.f64;
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lfs f4,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f30
	cr6.compare(ctx.f4.f64, f30.f64);
	// ble cr6,0x8248a984
	if (!cr6.gt) goto loc_8248A984;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f13,104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248a984
	if (!cr6.gt) goto loc_8248A984;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
loc_8248A984:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248A9AC"))) PPC_WEAK_FUNC(sub_8248A9AC);
PPC_FUNC_IMPL(__imp__sub_8248A9AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248A9B0"))) PPC_WEAK_FUNC(sub_8248A9B0);
PPC_FUNC_IMPL(__imp__sub_8248A9B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248aa18
	if (!cr6.gt) goto loc_8248AA18;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248aa04
	if (!cr6.gt) goto loc_8248AA04;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_8248AA04:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// b 0x8248aa74
	goto loc_8248AA74;
loc_8248AA18:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248aa60
	if (!cr6.lt) goto loc_8248AA60;
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248aa40
	if (!cr6.gt) goto loc_8248AA40;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_8248AA40:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// b 0x8248aa74
	goto loc_8248AA74;
loc_8248AA60:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
loc_8248AA74:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8248acf0
	sub_8248ACF0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f13,48(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f12,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsel f9,f10,f10,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : f31.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,52(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
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

__attribute__((alias("__imp__sub_8248AADC"))) PPC_WEAK_FUNC(sub_8248AADC);
PPC_FUNC_IMPL(__imp__sub_8248AADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AAE0"))) PPC_WEAK_FUNC(sub_8248AAE0);
PPC_FUNC_IMPL(__imp__sub_8248AAE0) {
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
	// bl 0x82489f38
	sub_82489F38(ctx, base);
	// bl 0x8248a100
	sub_8248A100(ctx, base);
	// bl 0x8248a7c0
	sub_8248A7C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248a9b0
	sub_8248A9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248a220
	sub_8248A220(ctx, base);
	// bl 0x8248a2d0
	sub_8248A2D0(ctx, base);
	// bl 0x8248a358
	sub_8248A358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248AB28"))) PPC_WEAK_FUNC(sub_8248AB28);
PPC_FUNC_IMPL(__imp__sub_8248AB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AB2C"))) PPC_WEAK_FUNC(sub_8248AB2C);
PPC_FUNC_IMPL(__imp__sub_8248AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248AB30"))) PPC_WEAK_FUNC(sub_8248AB30);
PPC_FUNC_IMPL(__imp__sub_8248AB30) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248AB6C"))) PPC_WEAK_FUNC(sub_8248AB6C);
PPC_FUNC_IMPL(__imp__sub_8248AB6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AB70"))) PPC_WEAK_FUNC(sub_8248AB70);
PPC_FUNC_IMPL(__imp__sub_8248AB70) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11940
	ctx.r9.s64 = r11.s64 + -11940;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248abc0
	if (cr6.eq) goto loc_8248ABC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248ABC0:
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

__attribute__((alias("__imp__sub_8248ABD4"))) PPC_WEAK_FUNC(sub_8248ABD4);
PPC_FUNC_IMPL(__imp__sub_8248ABD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248ABD8"))) PPC_WEAK_FUNC(sub_8248ABD8);
PPC_FUNC_IMPL(__imp__sub_8248ABD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
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

__attribute__((alias("__imp__sub_8248AC1C"))) PPC_WEAK_FUNC(sub_8248AC1C);
PPC_FUNC_IMPL(__imp__sub_8248AC1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AC20"))) PPC_WEAK_FUNC(sub_8248AC20);
PPC_FUNC_IMPL(__imp__sub_8248AC20) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248AC74"))) PPC_WEAK_FUNC(sub_8248AC74);
PPC_FUNC_IMPL(__imp__sub_8248AC74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AC78"))) PPC_WEAK_FUNC(sub_8248AC78);
PPC_FUNC_IMPL(__imp__sub_8248AC78) {
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
	// li r11,3
	r11.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// bl 0x82393db0
	sub_82393DB0(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248ACEC"))) PPC_WEAK_FUNC(sub_8248ACEC);
PPC_FUNC_IMPL(__imp__sub_8248ACEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248ACF0"))) PPC_WEAK_FUNC(sub_8248ACF0);
PPC_FUNC_IMPL(__imp__sub_8248ACF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmuls f29,f1,f1
	f29.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f31,f0,f1
	f31.f64 = double(float(f0.f64 - ctx.f1.f64));
	// bl 0x82393db0
	sub_82393DB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// beq cr6,0x8248ae20
	if (cr6.eq) goto loc_8248AE20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8248add0
	if (cr6.eq) goto loc_8248ADD0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8248ae48
	if (!cr6.eq) goto loc_8248AE48;
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(f29.f64 * f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f12,f31,f31
	ctx.f12.f64 = double(float(f31.f64 * f31.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f29,f30
	ctx.f9.f64 = double(float(f29.f64 * f30.f64));
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	f0.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmadds f8,f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f7,f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f6,f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f5,f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f4,f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f3,f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// b 0x8248ae48
	goto loc_8248AE48;
loc_8248ADD0:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f12,f31,f30
	ctx.f12.f64 = double(float(f31.f64 * f30.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f2,f9,f4,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmadds f1,f8,f4,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f0,f7,f29,f2
	f0.f64 = double(float(ctx.f7.f64 * f29.f64 + ctx.f2.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f13,f6,f29,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * f29.f64 + ctx.f1.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// b 0x8248ae48
	goto loc_8248AE48;
loc_8248AE20:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 * f30.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f31,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * f31.f64 + ctx.f12.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fmadds f7,f9,f31,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f11.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_8248AE48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8248AE68"))) PPC_WEAK_FUNC(sub_8248AE68);
PPC_FUNC_IMPL(__imp__sub_8248AE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AE6C"))) PPC_WEAK_FUNC(sub_8248AE6C);
PPC_FUNC_IMPL(__imp__sub_8248AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248AE70"))) PPC_WEAK_FUNC(sub_8248AE70);
PPC_FUNC_IMPL(__imp__sub_8248AE70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248AE74"))) PPC_WEAK_FUNC(sub_8248AE74);
PPC_FUNC_IMPL(__imp__sub_8248AE74) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8248ae78
	goto loc_8248AE78;
loc_8248AE78:
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
	// bl 0x8248a728
	sub_8248A728(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248aeb0
	if (cr6.eq) goto loc_8248AEB0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248AEB0:
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

__attribute__((alias("__imp__sub_8248AE78"))) PPC_WEAK_FUNC(sub_8248AE78);
PPC_FUNC_IMPL(__imp__sub_8248AE78) {
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
	// bl 0x8248a728
	sub_8248A728(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248aeb0
	if (cr6.eq) goto loc_8248AEB0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248AEB0:
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

__attribute__((alias("__imp__sub_8248AEC8"))) PPC_WEAK_FUNC(sub_8248AEC8);
PPC_FUNC_IMPL(__imp__sub_8248AEC8) {
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
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248AF00"))) PPC_WEAK_FUNC(sub_8248AF00);
PPC_FUNC_IMPL(__imp__sub_8248AF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AF04"))) PPC_WEAK_FUNC(sub_8248AF04);
PPC_FUNC_IMPL(__imp__sub_8248AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248AF08"))) PPC_WEAK_FUNC(sub_8248AF08);
PPC_FUNC_IMPL(__imp__sub_8248AF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248af3c
	if (!cr6.gt) goto loc_8248AF3C;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248af3c
	if (!cr6.gt) goto loc_8248AF3C;
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
loc_8248AF3C:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
}

__attribute__((alias("__imp__sub_8248AF60"))) PPC_WEAK_FUNC(sub_8248AF60);
PPC_FUNC_IMPL(__imp__sub_8248AF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AF64"))) PPC_WEAK_FUNC(sub_8248AF64);
PPC_FUNC_IMPL(__imp__sub_8248AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248AF68"))) PPC_WEAK_FUNC(sub_8248AF68);
PPC_FUNC_IMPL(__imp__sub_8248AF68) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// bne cr6,0x8248afb0
	if (!cr6.eq) goto loc_8248AFB0;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248afb0
	if (!cr6.eq) goto loc_8248AFB0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_8248AFB0:
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

__attribute__((alias("__imp__sub_8248AFC4"))) PPC_WEAK_FUNC(sub_8248AFC4);
PPC_FUNC_IMPL(__imp__sub_8248AFC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AFC8"))) PPC_WEAK_FUNC(sub_8248AFC8);
PPC_FUNC_IMPL(__imp__sub_8248AFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AFCC"))) PPC_WEAK_FUNC(sub_8248AFCC);
PPC_FUNC_IMPL(__imp__sub_8248AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248AFD0"))) PPC_WEAK_FUNC(sub_8248AFD0);
PPC_FUNC_IMPL(__imp__sub_8248AFD0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11668
	ctx.r9.s64 = r11.s64 + -11668;
	// addi r8,r10,-11684
	ctx.r8.s64 = ctx.r10.s64 + -11684;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-11732
	ctx.r5.s64 = ctx.r7.s64 + -11732;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248B034"))) PPC_WEAK_FUNC(sub_8248B034);
PPC_FUNC_IMPL(__imp__sub_8248B034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B038"))) PPC_WEAK_FUNC(sub_8248B038);
PPC_FUNC_IMPL(__imp__sub_8248B038) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,20940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20940);
	f0.f64 = double(temp.f32);
	// lfs f10,244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,248(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f12,f9
	ctx.f12.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// ble cr6,0x8248b070
	if (!cr6.gt) goto loc_8248B070;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
loc_8248B070:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8248b080
	if (!cr6.gt) goto loc_8248B080;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r10,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r10.u8);
loc_8248B080:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8248B090"))) PPC_WEAK_FUNC(sub_8248B090);
PPC_FUNC_IMPL(__imp__sub_8248B090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B094"))) PPC_WEAK_FUNC(sub_8248B094);
PPC_FUNC_IMPL(__imp__sub_8248B094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B098"))) PPC_WEAK_FUNC(sub_8248B098);
PPC_FUNC_IMPL(__imp__sub_8248B098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfs f6,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,256(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 256);
	f0.f64 = double(temp.f32);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// lfs f10,260(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f7,264(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 264);
	ctx.f7.f64 = double(temp.f32);
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f9,176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// fabs f5,f7
	ctx.f5.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// beq cr6,0x8248b0e4
	if (cr6.eq) goto loc_8248B0E4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_8248B0E4:
	// fneg f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bgt cr6,0x8248b10c
	if (cr6.gt) goto loc_8248B10C;
	// fcmpu cr6,f12,f6
	cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// stb r10,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r10.u8);
	// ble cr6,0x8248b10c
	if (!cr6.gt) goto loc_8248B10C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8248B10C:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f9.f64);
	// blt cr6,0x8248b134
	if (cr6.lt) goto loc_8248B134;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
	// ble cr6,0x8248b134
	if (!cr6.gt) goto loc_8248B134;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8248B134:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x8248b15c
	if (cr6.gt) goto loc_8248B15C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// stb r10,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r10.u8);
	// ble cr6,0x8248b15c
	if (!cr6.gt) goto loc_8248B15C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,3
	ctx.r9.s64 = 3;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8248B15C:
	// fcmpu cr6,f10,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x8248b184
	if (cr6.lt) goto loc_8248B184;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f8,f13
	cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// stb r10,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r10.u8);
	// ble cr6,0x8248b184
	if (!cr6.gt) goto loc_8248B184;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,4
	ctx.r9.s64 = 4;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8248B184:
	// fcmpu cr6,f7,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x8248b1ac
	if (cr6.gt) goto loc_8248B1AC;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f5,f13
	cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// stb r10,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r10.u8);
	// ble cr6,0x8248b1ac
	if (!cr6.gt) goto loc_8248B1AC;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,6
	ctx.r9.s64 = 6;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8248B1AC:
	// fcmpu cr6,f7,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// blt cr6,0x8248b1d0
	if (cr6.lt) goto loc_8248B1D0;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// fcmpu cr6,f5,f13
	cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// stb r10,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r10.u8);
	// ble cr6,0x8248b1d0
	if (!cr6.gt) goto loc_8248B1D0;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_8248B1D0:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8248b21c
	if (!cr6.eq) goto loc_8248B21C;
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8248b21c
	if (!cr6.eq) goto loc_8248B21C;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8248b21c
	if (!cr6.eq) goto loc_8248B21C;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// b 0x8248b220
	goto loc_8248B220;
loc_8248B21C:
	// stfs f6,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
loc_8248B220:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8248b24c
	if (!cr6.eq) goto loc_8248B24C;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8248b24c
	if (!cr6.eq) goto loc_8248B24C;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_8248B24C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8248B280"))) PPC_WEAK_FUNC(sub_8248B280);
PPC_FUNC_IMPL(__imp__sub_8248B280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B284"))) PPC_WEAK_FUNC(sub_8248B284);
PPC_FUNC_IMPL(__imp__sub_8248B284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B288"))) PPC_WEAK_FUNC(sub_8248B288);
PPC_FUNC_IMPL(__imp__sub_8248B288) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11748
	ctx.r7.s64 = ctx.r10.s64 + -11748;
	// addi r6,r9,-11668
	ctx.r6.s64 = ctx.r9.s64 + -11668;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-11684
	ctx.r5.s64 = ctx.r8.s64 + -11684;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_8248B2F8"))) PPC_WEAK_FUNC(sub_8248B2F8);
PPC_FUNC_IMPL(__imp__sub_8248B2F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B2FC"))) PPC_WEAK_FUNC(sub_8248B2FC);
PPC_FUNC_IMPL(__imp__sub_8248B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B300"))) PPC_WEAK_FUNC(sub_8248B300);
PPC_FUNC_IMPL(__imp__sub_8248B300) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r8.u8);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r8.u8);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r8.u8);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,7(r6)
	PPC_STORE_U8(ctx.r6.u32 + 7, ctx.r8.u8);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r8.u8);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,9(r4)
	PPC_STORE_U8(ctx.r4.u32 + 9, ctx.r8.u8);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r8.u8);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stb r8,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r8.u8);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8248b4a4
	if (!cr6.eq) goto loc_8248B4A4;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248b3a8
	if (!cr6.gt) goto loc_8248B3A8;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x8248b3a8
	if (!cr6.gt) goto loc_8248B3A8;
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
loc_8248B3A8:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248b3cc
	if (!cr6.eq) goto loc_8248B3CC;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
loc_8248B3CC:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f9,152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// ble cr6,0x8248b598
	if (!cr6.gt) goto loc_8248B598;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f13,48(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f13,52(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r8,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8248b598
	if (!cr6.eq) goto loc_8248B598;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f13,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,156(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8248b46c
	if (cr6.gt) goto loc_8248B46C;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8248b46c
	if (cr6.gt) goto loc_8248B46C;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// b 0x8248b474
	goto loc_8248B474;
loc_8248B46C:
	// bl 0x8248b038
	sub_8248B038(ctx, base);
	// bl 0x8248b098
	sub_8248B098(ctx, base);
loc_8248B474:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x8248b598
	if (cr6.eq) goto loc_8248B598;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8248B4A4:
	// lbz r11,11(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248b4d8
	if (!cr6.eq) goto loc_8248B4D8;
	// bl 0x8248af08
	sub_8248AF08(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8248B4D8:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248b598
	if (!cr6.eq) goto loc_8248B598;
	// bl 0x8248af08
	sub_8248AF08(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f12,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// lfs f9,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// ble cr6,0x8248b534
	if (!cr6.gt) goto loc_8248B534;
	// lfs f11,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8248b534
	if (!cr6.lt) goto loc_8248B534;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// b 0x8248b568
	goto loc_8248B568;
loc_8248B534:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f11,172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x8248b560
	if (!cr6.gt) goto loc_8248B560;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8248b560
	if (cr6.lt) goto loc_8248B560;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// b 0x8248b568
	goto loc_8248B568;
loc_8248B560:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
loc_8248B568:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r8,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r8.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,32(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,24(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,36(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f0,28(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
loc_8248B598:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8248B5A4"))) PPC_WEAK_FUNC(sub_8248B5A4);
PPC_FUNC_IMPL(__imp__sub_8248B5A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B5A8"))) PPC_WEAK_FUNC(sub_8248B5A8);
PPC_FUNC_IMPL(__imp__sub_8248B5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8248b5dc
	if (cr6.eq) goto loc_8248B5DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8248b5e0
	if (!cr6.eq) goto loc_8248B5E0;
loc_8248B5DC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8248B5E0:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19264);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r27,52
	ctx.r4.s64 = r27.s64 + 52;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248b634
	if (!cr6.eq) goto loc_8248B634;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248b634
	if (!cr6.eq) goto loc_8248B634;
	// lwz r11,19264(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19264);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8248B634:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r30.u8);
	// stfs f0,28(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r30.u8);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r30.u8);
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stb r30,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r30.u8);
	// stb r30,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, r30.u8);
	// stb r30,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, r30.u8);
	// stb r30,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r30.u8);
	// stb r30,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r30.u8);
	// stb r30,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r30.u8);
	// stb r30,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, r30.u8);
	// stb r30,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, r30.u8);
	// stb r30,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, r30.u8);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8248B698"))) PPC_WEAK_FUNC(sub_8248B698);
PPC_FUNC_IMPL(__imp__sub_8248B698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8248B69C"))) PPC_WEAK_FUNC(sub_8248B69C);
PPC_FUNC_IMPL(__imp__sub_8248B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B6A0"))) PPC_WEAK_FUNC(sub_8248B6A0);
PPC_FUNC_IMPL(__imp__sub_8248B6A0) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32183
	r11.s64 = -2109145088;
	// addi r30,r11,-20632
	r30.s64 = r11.s64 + -20632;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8248b6d8
	if (cr6.eq) goto loc_8248B6D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8248b6dc
	if (!cr6.eq) goto loc_8248B6DC;
loc_8248B6D8:
	// li r11,0
	r11.s64 = 0;
loc_8248B6DC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3528
	ctx.r3.s64 = ctx.r9.s64 + 3528;
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
	// lwz r11,19264(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19264);
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
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8248B72C"))) PPC_WEAK_FUNC(sub_8248B72C);
PPC_FUNC_IMPL(__imp__sub_8248B72C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8248B730"))) PPC_WEAK_FUNC(sub_8248B730);
PPC_FUNC_IMPL(__imp__sub_8248B730) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248B770"))) PPC_WEAK_FUNC(sub_8248B770);
PPC_FUNC_IMPL(__imp__sub_8248B770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B774"))) PPC_WEAK_FUNC(sub_8248B774);
PPC_FUNC_IMPL(__imp__sub_8248B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B778"))) PPC_WEAK_FUNC(sub_8248B778);
PPC_FUNC_IMPL(__imp__sub_8248B778) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11732
	ctx.r9.s64 = r11.s64 + -11732;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248b7c8
	if (cr6.eq) goto loc_8248B7C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248B7C8:
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

__attribute__((alias("__imp__sub_8248B7DC"))) PPC_WEAK_FUNC(sub_8248B7DC);
PPC_FUNC_IMPL(__imp__sub_8248B7DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B7E0"))) PPC_WEAK_FUNC(sub_8248B7E0);
PPC_FUNC_IMPL(__imp__sub_8248B7E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8248B82C"))) PPC_WEAK_FUNC(sub_8248B82C);
PPC_FUNC_IMPL(__imp__sub_8248B82C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B830"))) PPC_WEAK_FUNC(sub_8248B830);
PPC_FUNC_IMPL(__imp__sub_8248B830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248B834"))) PPC_WEAK_FUNC(sub_8248B834);
PPC_FUNC_IMPL(__imp__sub_8248B834) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248b898
	sub_8248B898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248B838"))) PPC_WEAK_FUNC(sub_8248B838);
PPC_FUNC_IMPL(__imp__sub_8248B838) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248B894"))) PPC_WEAK_FUNC(sub_8248B894);
PPC_FUNC_IMPL(__imp__sub_8248B894) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B898"))) PPC_WEAK_FUNC(sub_8248B898);
PPC_FUNC_IMPL(__imp__sub_8248B898) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11668
	ctx.r9.s64 = r11.s64 + -11668;
	// addi r8,r10,-11684
	ctx.r8.s64 = ctx.r10.s64 + -11684;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-11732
	ctx.r5.s64 = ctx.r7.s64 + -11732;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8248b90c
	if (cr6.eq) goto loc_8248B90C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248B90C:
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

__attribute__((alias("__imp__sub_8248B920"))) PPC_WEAK_FUNC(sub_8248B920);
PPC_FUNC_IMPL(__imp__sub_8248B920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B924"))) PPC_WEAK_FUNC(sub_8248B924);
PPC_FUNC_IMPL(__imp__sub_8248B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B928"))) PPC_WEAK_FUNC(sub_8248B928);
PPC_FUNC_IMPL(__imp__sub_8248B928) {
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
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248B964"))) PPC_WEAK_FUNC(sub_8248B964);
PPC_FUNC_IMPL(__imp__sub_8248B964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B968"))) PPC_WEAK_FUNC(sub_8248B968);
PPC_FUNC_IMPL(__imp__sub_8248B968) {
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
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_8248B9A8"))) PPC_WEAK_FUNC(sub_8248B9A8);
PPC_FUNC_IMPL(__imp__sub_8248B9A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B9AC"))) PPC_WEAK_FUNC(sub_8248B9AC);
PPC_FUNC_IMPL(__imp__sub_8248B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B9B0"))) PPC_WEAK_FUNC(sub_8248B9B0);
PPC_FUNC_IMPL(__imp__sub_8248B9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B9B4"))) PPC_WEAK_FUNC(sub_8248B9B4);
PPC_FUNC_IMPL(__imp__sub_8248B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B9B8"))) PPC_WEAK_FUNC(sub_8248B9B8);
PPC_FUNC_IMPL(__imp__sub_8248B9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248B9BC"))) PPC_WEAK_FUNC(sub_8248B9BC);
PPC_FUNC_IMPL(__imp__sub_8248B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248B9C0"))) PPC_WEAK_FUNC(sub_8248B9C0);
PPC_FUNC_IMPL(__imp__sub_8248B9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r10.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
	// stb r10,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r10.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r10.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r10.u8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r10.u8);
	// stb r10,21(r11)
	PPC_STORE_U8(r11.u32 + 21, ctx.r10.u8);
	// stb r10,22(r11)
	PPC_STORE_U8(r11.u32 + 22, ctx.r10.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(r11.u32 + 23, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// stb r10,25(r11)
	PPC_STORE_U8(r11.u32 + 25, ctx.r10.u8);
	// stb r10,26(r11)
	PPC_STORE_U8(r11.u32 + 26, ctx.r10.u8);
	// stb r10,27(r11)
	PPC_STORE_U8(r11.u32 + 27, ctx.r10.u8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r10,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r10.u8);
	// stb r8,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BA40"))) PPC_WEAK_FUNC(sub_8248BA40);
PPC_FUNC_IMPL(__imp__sub_8248BA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11588
	ctx.r9.s64 = r11.s64 + -11588;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248BA5C"))) PPC_WEAK_FUNC(sub_8248BA5C);
PPC_FUNC_IMPL(__imp__sub_8248BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BA60"))) PPC_WEAK_FUNC(sub_8248BA60);
PPC_FUNC_IMPL(__imp__sub_8248BA60) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11604
	ctx.r7.s64 = ctx.r10.s64 + -11604;
	// addi r6,r9,-11524
	ctx.r6.s64 = ctx.r9.s64 + -11524;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-11540
	ctx.r5.s64 = ctx.r8.s64 + -11540;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248BAD0"))) PPC_WEAK_FUNC(sub_8248BAD0);
PPC_FUNC_IMPL(__imp__sub_8248BAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BAD4"))) PPC_WEAK_FUNC(sub_8248BAD4);
PPC_FUNC_IMPL(__imp__sub_8248BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BAD8"))) PPC_WEAK_FUNC(sub_8248BAD8);
PPC_FUNC_IMPL(__imp__sub_8248BAD8) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248BB20"))) PPC_WEAK_FUNC(sub_8248BB20);
PPC_FUNC_IMPL(__imp__sub_8248BB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BB24"))) PPC_WEAK_FUNC(sub_8248BB24);
PPC_FUNC_IMPL(__imp__sub_8248BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BB28"))) PPC_WEAK_FUNC(sub_8248BB28);
PPC_FUNC_IMPL(__imp__sub_8248BB28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8248BB7C"))) PPC_WEAK_FUNC(sub_8248BB7C);
PPC_FUNC_IMPL(__imp__sub_8248BB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BB80"))) PPC_WEAK_FUNC(sub_8248BB80);
PPC_FUNC_IMPL(__imp__sub_8248BB80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8248BBDC"))) PPC_WEAK_FUNC(sub_8248BBDC);
PPC_FUNC_IMPL(__imp__sub_8248BBDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BBE0"))) PPC_WEAK_FUNC(sub_8248BBE0);
PPC_FUNC_IMPL(__imp__sub_8248BBE0) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248BC4C"))) PPC_WEAK_FUNC(sub_8248BC4C);
PPC_FUNC_IMPL(__imp__sub_8248BC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BC50"))) PPC_WEAK_FUNC(sub_8248BC50);
PPC_FUNC_IMPL(__imp__sub_8248BC50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248BC54"))) PPC_WEAK_FUNC(sub_8248BC54);
PPC_FUNC_IMPL(__imp__sub_8248BC54) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8248bc58
	goto loc_8248BC58;
loc_8248BC58:
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11588
	ctx.r9.s64 = r11.s64 + -11588;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248bca8
	if (cr6.eq) goto loc_8248BCA8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248BCA8:
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

__attribute__((alias("__imp__sub_8248BC58"))) PPC_WEAK_FUNC(sub_8248BC58);
PPC_FUNC_IMPL(__imp__sub_8248BC58) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11588
	ctx.r9.s64 = r11.s64 + -11588;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248bca8
	if (cr6.eq) goto loc_8248BCA8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248BCA8:
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

__attribute__((alias("__imp__sub_8248BCC0"))) PPC_WEAK_FUNC(sub_8248BCC0);
PPC_FUNC_IMPL(__imp__sub_8248BCC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BCC4"))) PPC_WEAK_FUNC(sub_8248BCC4);
PPC_FUNC_IMPL(__imp__sub_8248BCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BCC8"))) PPC_WEAK_FUNC(sub_8248BCC8);
PPC_FUNC_IMPL(__imp__sub_8248BCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BCCC"))) PPC_WEAK_FUNC(sub_8248BCCC);
PPC_FUNC_IMPL(__imp__sub_8248BCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BCD0"))) PPC_WEAK_FUNC(sub_8248BCD0);
PPC_FUNC_IMPL(__imp__sub_8248BCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248bd00
	if (!cr6.eq) goto loc_8248BD00;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248bd00
	if (!cr6.gt) goto loc_8248BD00;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8248BD00:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BD1C"))) PPC_WEAK_FUNC(sub_8248BD1C);
PPC_FUNC_IMPL(__imp__sub_8248BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BD20"))) PPC_WEAK_FUNC(sub_8248BD20);
PPC_FUNC_IMPL(__imp__sub_8248BD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r11,3(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// ble cr6,0x8248bdac
	if (!cr6.gt) goto loc_8248BDAC;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248bd78
	if (!cr6.gt) goto loc_8248BD78;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r10.u8);
	// b 0x8248bdac
	goto loc_8248BDAC;
loc_8248BD78:
	// lfs f13,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248bd94
	if (!cr6.gt) goto loc_8248BD94;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// b 0x8248bdac
	goto loc_8248BDAC;
loc_8248BD94:
	// lfs f13,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248bdac
	if (!cr6.gt) goto loc_8248BDAC;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_8248BDAC:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r9.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stfs f0,92(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
}

__attribute__((alias("__imp__sub_8248BDC8"))) PPC_WEAK_FUNC(sub_8248BDC8);
PPC_FUNC_IMPL(__imp__sub_8248BDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BDCC"))) PPC_WEAK_FUNC(sub_8248BDCC);
PPC_FUNC_IMPL(__imp__sub_8248BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BDD0"))) PPC_WEAK_FUNC(sub_8248BDD0);
PPC_FUNC_IMPL(__imp__sub_8248BDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8248be04
	if (!cr6.eq) goto loc_8248BE04;
	// stb r9,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r9.u8);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
loc_8248BE04:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BE24"))) PPC_WEAK_FUNC(sub_8248BE24);
PPC_FUNC_IMPL(__imp__sub_8248BE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BE28"))) PPC_WEAK_FUNC(sub_8248BE28);
PPC_FUNC_IMPL(__imp__sub_8248BE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8248be4c
	if (!cr6.eq) goto loc_8248BE4C;
	// stb r9,17(r11)
	PPC_STORE_U8(r11.u32 + 17, ctx.r9.u8);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
loc_8248BE4C:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8248be68
	if (!cr6.eq) goto loc_8248BE68;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r10.u8);
loc_8248BE68:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r8,19(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stb r9,19(r11)
	PPC_STORE_U8(r11.u32 + 19, ctx.r9.u8);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BE88"))) PPC_WEAK_FUNC(sub_8248BE88);
PPC_FUNC_IMPL(__imp__sub_8248BE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11588
	ctx.r9.s64 = r11.s64 + -11588;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248BEA4"))) PPC_WEAK_FUNC(sub_8248BEA4);
PPC_FUNC_IMPL(__imp__sub_8248BEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BEA8"))) PPC_WEAK_FUNC(sub_8248BEA8);
PPC_FUNC_IMPL(__imp__sub_8248BEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r11,4(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,96(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8248bed8
	if (cr6.lt) goto loc_8248BED8;
	// li r11,1
	r11.s64 = 1;
loc_8248BED8:
	// lfs f13,212(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8248bef4
	if (cr6.lt) goto loc_8248BEF4;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8248bef4
	if (!cr6.eq) goto loc_8248BEF4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8248BEF4:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,100(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,12524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12524);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-12676(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12676);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x8248bf24
	if (cr6.lt) goto loc_8248BF24;
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// blt cr6,0x8248bf3c
	if (cr6.lt) goto loc_8248BF3C;
loc_8248BF24:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// lfs f13,-11472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11472);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x8248bf50
	if (cr6.gt) goto loc_8248BF50;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248bf50
	if (!cr6.gt) goto loc_8248BF50;
loc_8248BF3C:
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r10.u8);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r11,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, r11.u8);
	// b 0x8248bfd0
	goto loc_8248BFD0;
loc_8248BF50:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f10,-11476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11476);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bgt cr6,0x8248bfc0
	if (cr6.gt) goto loc_8248BFC0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f12,-11480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11480);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8248bfc0
	if (cr6.lt) goto loc_8248BFC0;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8248bf9c
	if (cr6.gt) goto loc_8248BF9C;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bgt cr6,0x8248bf9c
	if (cr6.gt) goto loc_8248BF9C;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x8248bf9c
	if (cr6.lt) goto loc_8248BF9C;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,22(r9)
	PPC_STORE_U8(ctx.r9.u32 + 22, ctx.r10.u8);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r11,26(r8)
	PPC_STORE_U8(ctx.r8.u32 + 26, r11.u8);
	// b 0x8248bfd0
	goto loc_8248BFD0;
loc_8248BF9C:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f9.f64);
	// blt cr6,0x8248bfd0
	if (cr6.lt) goto loc_8248BFD0;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// bgt cr6,0x8248bfd0
	if (cr6.gt) goto loc_8248BFD0;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,23(r9)
	PPC_STORE_U8(ctx.r9.u32 + 23, ctx.r10.u8);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r11,27(r8)
	PPC_STORE_U8(ctx.r8.u32 + 27, r11.u8);
	// b 0x8248bfd0
	goto loc_8248BFD0;
loc_8248BFC0:
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r10,21(r9)
	PPC_STORE_U8(ctx.r9.u32 + 21, ctx.r10.u8);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stb r11,25(r8)
	PPC_STORE_U8(ctx.r8.u32 + 25, r11.u8);
loc_8248BFD0:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stfs f11,96(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
}

__attribute__((alias("__imp__sub_8248BFE4"))) PPC_WEAK_FUNC(sub_8248BFE4);
PPC_FUNC_IMPL(__imp__sub_8248BFE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248BFE8"))) PPC_WEAK_FUNC(sub_8248BFE8);
PPC_FUNC_IMPL(__imp__sub_8248BFE8) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11604
	ctx.r7.s64 = ctx.r10.s64 + -11604;
	// addi r6,r9,-11448
	ctx.r6.s64 = ctx.r9.s64 + -11448;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-11464
	ctx.r5.s64 = ctx.r8.s64 + -11464;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C058"))) PPC_WEAK_FUNC(sub_8248C058);
PPC_FUNC_IMPL(__imp__sub_8248C058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C05C"))) PPC_WEAK_FUNC(sub_8248C05C);
PPC_FUNC_IMPL(__imp__sub_8248C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C060"))) PPC_WEAK_FUNC(sub_8248C060);
PPC_FUNC_IMPL(__imp__sub_8248C060) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248c0e8
	if (!cr6.eq) goto loc_8248C0E8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stb r30,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r30.u8);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8248c0cc
	if (cr6.eq) goto loc_8248C0CC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8248c0c0
	if (cr6.eq) goto loc_8248C0C0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bne cr6,0x8248c0d0
	if (!cr6.eq) goto loc_8248C0D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// b 0x8248c0d4
	goto loc_8248C0D4;
loc_8248C0C0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// b 0x8248c0d4
	goto loc_8248C0D4;
loc_8248C0CC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
loc_8248C0D0:
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
loc_8248C0D4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r29,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r29.u8);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
loc_8248C0E8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f13,188(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8248c118
	if (!cr6.gt) goto loc_8248C118;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stb r29,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r29.u8);
loc_8248C118:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248c134
	if (!cr6.eq) goto loc_8248C134;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stb r30,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r30.u8);
loc_8248C134:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248c1bc
	if (!cr6.eq) goto loc_8248C1BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,12932
	ctx.r3.s64 = r11.s64 + 12932;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// bne cr6,0x8248c174
	if (!cr6.eq) goto loc_8248C174;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
loc_8248C174:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// bl 0x825ca380
	sub_825CA380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8248c19c
	if (cr6.eq) goto loc_8248C19C;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8248c19c
	if (cr6.eq) goto loc_8248C19C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stb r30,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r30.u8);
	// b 0x8248c1a4
	goto loc_8248C1A4;
loc_8248C19C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stb r30,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r30.u8);
loc_8248C1A4:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stb r29,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, r29.u8);
loc_8248C1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8248C1C0"))) PPC_WEAK_FUNC(sub_8248C1C0);
PPC_FUNC_IMPL(__imp__sub_8248C1C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8248C1C4"))) PPC_WEAK_FUNC(sub_8248C1C4);
PPC_FUNC_IMPL(__imp__sub_8248C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C1C8"))) PPC_WEAK_FUNC(sub_8248C1C8);
PPC_FUNC_IMPL(__imp__sub_8248C1C8) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// stb r31,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r31.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r31.u8);
	// stb r31,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r31.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r31.u8);
	// stb r31,6(r11)
	PPC_STORE_U8(r11.u32 + 6, r31.u8);
	// stb r31,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r31.u8);
	// stb r31,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r31.u8);
	// stb r31,9(r11)
	PPC_STORE_U8(r11.u32 + 9, r31.u8);
	// stb r31,10(r11)
	PPC_STORE_U8(r11.u32 + 10, r31.u8);
	// stb r31,11(r11)
	PPC_STORE_U8(r11.u32 + 11, r31.u8);
	// stb r31,12(r11)
	PPC_STORE_U8(r11.u32 + 12, r31.u8);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// stb r31,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r31.u8);
	// stb r31,22(r11)
	PPC_STORE_U8(r11.u32 + 22, r31.u8);
	// stb r31,23(r11)
	PPC_STORE_U8(r11.u32 + 23, r31.u8);
	// stb r31,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r31.u8);
	// stb r31,25(r11)
	PPC_STORE_U8(r11.u32 + 25, r31.u8);
	// stb r31,26(r11)
	PPC_STORE_U8(r11.u32 + 26, r31.u8);
	// stb r31,27(r11)
	PPC_STORE_U8(r11.u32 + 27, r31.u8);
	// bl 0x8248c060
	sub_8248C060(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248bd20
	sub_8248BD20(ctx, base);
	// bl 0x8248bea8
	sub_8248BEA8(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r11,1
	r11.s64 = 1;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8248c29c
	if (!cr6.eq) goto loc_8248C29C;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c280
	if (!cr6.eq) goto loc_8248C280;
	// stb r31,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, r31.u8);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
loc_8248C280:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c29c
	if (!cr6.eq) goto loc_8248C29C;
	// stb r31,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, r31.u8);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
loc_8248C29C:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c2b8
	if (!cr6.eq) goto loc_8248C2B8;
	// stb r31,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, r31.u8);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
loc_8248C2B8:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r9,18(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c2d4
	if (!cr6.eq) goto loc_8248C2D4;
	// stb r31,18(r10)
	PPC_STORE_U8(ctx.r10.u32 + 18, r31.u8);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
loc_8248C2D4:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lbz r9,19(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c2f0
	if (!cr6.eq) goto loc_8248C2F0;
	// stb r31,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, r31.u8);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stb r11,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, r11.u8);
loc_8248C2F0:
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

__attribute__((alias("__imp__sub_8248C304"))) PPC_WEAK_FUNC(sub_8248C304);
PPC_FUNC_IMPL(__imp__sub_8248C304) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C308"))) PPC_WEAK_FUNC(sub_8248C308);
PPC_FUNC_IMPL(__imp__sub_8248C308) {
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
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C34C"))) PPC_WEAK_FUNC(sub_8248C34C);
PPC_FUNC_IMPL(__imp__sub_8248C34C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C350"))) PPC_WEAK_FUNC(sub_8248C350);
PPC_FUNC_IMPL(__imp__sub_8248C350) {
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
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C398"))) PPC_WEAK_FUNC(sub_8248C398);
PPC_FUNC_IMPL(__imp__sub_8248C398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C39C"))) PPC_WEAK_FUNC(sub_8248C39C);
PPC_FUNC_IMPL(__imp__sub_8248C39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C3A0"))) PPC_WEAK_FUNC(sub_8248C3A0);
PPC_FUNC_IMPL(__imp__sub_8248C3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C3A4"))) PPC_WEAK_FUNC(sub_8248C3A4);
PPC_FUNC_IMPL(__imp__sub_8248C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C3A8"))) PPC_WEAK_FUNC(sub_8248C3A8);
PPC_FUNC_IMPL(__imp__sub_8248C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C3C8"))) PPC_WEAK_FUNC(sub_8248C3C8);
PPC_FUNC_IMPL(__imp__sub_8248C3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11368
	ctx.r9.s64 = r11.s64 + -11368;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248C3E4"))) PPC_WEAK_FUNC(sub_8248C3E4);
PPC_FUNC_IMPL(__imp__sub_8248C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C3E8"))) PPC_WEAK_FUNC(sub_8248C3E8);
PPC_FUNC_IMPL(__imp__sub_8248C3E8) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8248c830
	sub_8248C830(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11288
	ctx.r9.s64 = r11.s64 + -11288;
	// addi r8,r10,-11304
	ctx.r8.s64 = ctx.r10.s64 + -11304;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C430"))) PPC_WEAK_FUNC(sub_8248C430);
PPC_FUNC_IMPL(__imp__sub_8248C430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C434"))) PPC_WEAK_FUNC(sub_8248C434);
PPC_FUNC_IMPL(__imp__sub_8248C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C438"))) PPC_WEAK_FUNC(sub_8248C438);
PPC_FUNC_IMPL(__imp__sub_8248C438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaae0
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,3792(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f5,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,212(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,192
	ctx.r10.s64 = r11.s64 + 192;
	// lfs f9,196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 196);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,208
	ctx.r10.s64 = r11.s64 + 208;
	// lfs f12,200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f1,192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f6,220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// lfs f27,164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 164);
	f27.f64 = double(temp.f32);
	// lfs f28,160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 160);
	f28.f64 = double(temp.f32);
	// lfs f26,168(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 168);
	f26.f64 = double(temp.f32);
	// lfs f29,204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 204);
	f29.f64 = double(temp.f32);
	// lfs f25,172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 172);
	f25.f64 = double(temp.f32);
	// lfs f10,216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f3,-25600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// fmr f31,f9
	f31.f64 = ctx.f9.f64;
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmr f30,f12
	f30.f64 = ctx.f12.f64;
	// fmuls f23,f1,f13
	f23.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f22,f11,f12
	f22.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f9,f10
	f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmr f24,f1
	f24.f64 = ctx.f1.f64;
	// fadds f8,f27,f8
	ctx.f8.f64 = double(float(f27.f64 + ctx.f8.f64));
	// fmuls f31,f31,f2
	f31.f64 = double(float(f31.f64 * ctx.f2.f64));
	// fadds f7,f26,f7
	ctx.f7.f64 = double(float(f26.f64 + ctx.f7.f64));
	// fmuls f30,f30,f2
	f30.f64 = double(float(f30.f64 * ctx.f2.f64));
	// fmsubs f11,f11,f9,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - f23.f64));
	// fadds f4,f28,f4
	ctx.f4.f64 = double(float(f28.f64 + ctx.f4.f64));
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f29,f29,f2
	f29.f64 = double(float(f29.f64 * ctx.f2.f64));
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - f0.f64));
	// fmsubs f28,f24,f10,f22
	f28.f64 = double(float(f24.f64 * ctx.f10.f64 - f22.f64));
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(f25.f64 + ctx.f6.f64));
	// fadds f9,f8,f31
	ctx.f9.f64 = double(float(ctx.f8.f64 + f31.f64));
	// fmuls f0,f2,f5
	f0.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fadds f8,f7,f30
	ctx.f8.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fadds f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f11,f28,f2
	ctx.f11.f64 = double(float(f28.f64 * ctx.f2.f64));
	// fadds f7,f6,f29
	ctx.f7.f64 = double(float(ctx.f6.f64 + f29.f64));
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x8248c64c
	if (cr6.eq) goto loc_8248C64C;
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// lfs f4,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// fcmpu cr6,f4,f5
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// fsel f1,f2,f2,f5
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f2.f64 : ctx.f5.f64;
	// fsubs f6,f1,f3
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f2,f6,f3,f1
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f1.f64;
	// fsubs f6,f3,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// ble cr6,0x8248c5f0
	if (!cr6.gt) goto loc_8248C5F0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// fadds f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 + f0.f64));
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f9,68(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f8,8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// b 0x8248c64c
	goto loc_8248C64C;
loc_8248C5F0:
	// fcmpu cr6,f4,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bge cr6,0x8248c648
	if (!cr6.lt) goto loc_8248C648;
	// li r10,2
	ctx.r10.s64 = 2;
	// fsubs f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - f0.f64));
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f0,6240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6240);
	f0.f64 = double(temp.f32);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f13,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// b 0x8248c64c
	goto loc_8248C64C;
loc_8248C648:
	// stfs f5,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_8248C64C:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248c680
	if (!cr6.eq) goto loc_8248C680;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsel f11,f12,f12,f5
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f5.f64;
	// fsubs f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fsel f9,f10,f3,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f3.f64 : ctx.f11.f64;
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_8248C680:
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab2c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8248C690"))) PPC_WEAK_FUNC(sub_8248C690);
PPC_FUNC_IMPL(__imp__sub_8248C690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C694"))) PPC_WEAK_FUNC(sub_8248C694);
PPC_FUNC_IMPL(__imp__sub_8248C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C698"))) PPC_WEAK_FUNC(sub_8248C698);
PPC_FUNC_IMPL(__imp__sub_8248C698) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C6E8"))) PPC_WEAK_FUNC(sub_8248C6E8);
PPC_FUNC_IMPL(__imp__sub_8248C6E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C6EC"))) PPC_WEAK_FUNC(sub_8248C6EC);
PPC_FUNC_IMPL(__imp__sub_8248C6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C6F0"))) PPC_WEAK_FUNC(sub_8248C6F0);
PPC_FUNC_IMPL(__imp__sub_8248C6F0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11368
	ctx.r9.s64 = r11.s64 + -11368;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248c740
	if (cr6.eq) goto loc_8248C740;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248C740:
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

__attribute__((alias("__imp__sub_8248C754"))) PPC_WEAK_FUNC(sub_8248C754);
PPC_FUNC_IMPL(__imp__sub_8248C754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C758"))) PPC_WEAK_FUNC(sub_8248C758);
PPC_FUNC_IMPL(__imp__sub_8248C758) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8248C7BC"))) PPC_WEAK_FUNC(sub_8248C7BC);
PPC_FUNC_IMPL(__imp__sub_8248C7BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C7C0"))) PPC_WEAK_FUNC(sub_8248C7C0);
PPC_FUNC_IMPL(__imp__sub_8248C7C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8248C82C"))) PPC_WEAK_FUNC(sub_8248C82C);
PPC_FUNC_IMPL(__imp__sub_8248C82C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C830"))) PPC_WEAK_FUNC(sub_8248C830);
PPC_FUNC_IMPL(__imp__sub_8248C830) {
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
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11384
	ctx.r7.s64 = ctx.r10.s64 + -11384;
	// addi r6,r9,-11368
	ctx.r6.s64 = ctx.r9.s64 + -11368;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-11320
	ctx.r5.s64 = ctx.r8.s64 + -11320;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248C8A4"))) PPC_WEAK_FUNC(sub_8248C8A4);
PPC_FUNC_IMPL(__imp__sub_8248C8A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C8A8"))) PPC_WEAK_FUNC(sub_8248C8A8);
PPC_FUNC_IMPL(__imp__sub_8248C8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248C8AC"))) PPC_WEAK_FUNC(sub_8248C8AC);
PPC_FUNC_IMPL(__imp__sub_8248C8AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248c6f0
	sub_8248C6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248C8B0"))) PPC_WEAK_FUNC(sub_8248C8B0);
PPC_FUNC_IMPL(__imp__sub_8248C8B0) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r5,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r5.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248C92C"))) PPC_WEAK_FUNC(sub_8248C92C);
PPC_FUNC_IMPL(__imp__sub_8248C92C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C930"))) PPC_WEAK_FUNC(sub_8248C930);
PPC_FUNC_IMPL(__imp__sub_8248C930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C934"))) PPC_WEAK_FUNC(sub_8248C934);
PPC_FUNC_IMPL(__imp__sub_8248C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C938"))) PPC_WEAK_FUNC(sub_8248C938);
PPC_FUNC_IMPL(__imp__sub_8248C938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x82705648
	sub_82705648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248C964"))) PPC_WEAK_FUNC(sub_8248C964);
PPC_FUNC_IMPL(__imp__sub_8248C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C968"))) PPC_WEAK_FUNC(sub_8248C968);
PPC_FUNC_IMPL(__imp__sub_8248C968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C96C"))) PPC_WEAK_FUNC(sub_8248C96C);
PPC_FUNC_IMPL(__imp__sub_8248C96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C970"))) PPC_WEAK_FUNC(sub_8248C970);
PPC_FUNC_IMPL(__imp__sub_8248C970) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x8248c9bc
	if (!cr6.eq) goto loc_8248C9BC;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r30.u8);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
loc_8248C9BC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248c9f4
	if (!cr6.eq) goto loc_8248C9F4;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8248c9f4
	if (!cr6.eq) goto loc_8248C9F4;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
loc_8248C9F4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8248ca5c
	if (!cr6.eq) goto loc_8248CA5C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8248ca20
	if (cr6.eq) goto loc_8248CA20;
	// li r11,0
	r11.s64 = 0;
loc_8248CA20:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248ca48
	if (!cr6.eq) goto loc_8248CA48;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f2,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705608
	sub_82705608(ctx, base);
loc_8248CA48:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82705660
	sub_82705660(ctx, base);
loc_8248CA5C:
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

__attribute__((alias("__imp__sub_8248CA70"))) PPC_WEAK_FUNC(sub_8248CA70);
PPC_FUNC_IMPL(__imp__sub_8248CA70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CA74"))) PPC_WEAK_FUNC(sub_8248CA74);
PPC_FUNC_IMPL(__imp__sub_8248CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CA78"))) PPC_WEAK_FUNC(sub_8248CA78);
PPC_FUNC_IMPL(__imp__sub_8248CA78) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8248cc90
	sub_8248CC90(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11160
	ctx.r9.s64 = r11.s64 + -11160;
	// addi r8,r10,-11176
	ctx.r8.s64 = ctx.r10.s64 + -11176;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
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

__attribute__((alias("__imp__sub_8248CAF0"))) PPC_WEAK_FUNC(sub_8248CAF0);
PPC_FUNC_IMPL(__imp__sub_8248CAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CAF4"))) PPC_WEAK_FUNC(sub_8248CAF4);
PPC_FUNC_IMPL(__imp__sub_8248CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CAF8"))) PPC_WEAK_FUNC(sub_8248CAF8);
PPC_FUNC_IMPL(__imp__sub_8248CAF8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11160
	ctx.r9.s64 = r11.s64 + -11160;
	// addi r8,r10,-11176
	ctx.r8.s64 = ctx.r10.s64 + -11176;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r7,-11240
	ctx.r5.s64 = ctx.r7.s64 + -11240;
	// addi r4,r6,3368
	ctx.r4.s64 = ctx.r6.s64 + 3368;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
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

__attribute__((alias("__imp__sub_8248CB80"))) PPC_WEAK_FUNC(sub_8248CB80);
PPC_FUNC_IMPL(__imp__sub_8248CB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CB84"))) PPC_WEAK_FUNC(sub_8248CB84);
PPC_FUNC_IMPL(__imp__sub_8248CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CB88"))) PPC_WEAK_FUNC(sub_8248CB88);
PPC_FUNC_IMPL(__imp__sub_8248CB88) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82485650
	sub_82485650(ctx, base);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// lwz r30,28(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x8248cbd4
	if (cr6.eq) goto loc_8248CBD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_8248CBD4:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8248CBEC"))) PPC_WEAK_FUNC(sub_8248CBEC);
PPC_FUNC_IMPL(__imp__sub_8248CBEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CBF0"))) PPC_WEAK_FUNC(sub_8248CBF0);
PPC_FUNC_IMPL(__imp__sub_8248CBF0) {
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
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248cc28
	if (cr6.eq) goto loc_8248CC28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_8248CC28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CC38"))) PPC_WEAK_FUNC(sub_8248CC38);
PPC_FUNC_IMPL(__imp__sub_8248CC38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CC3C"))) PPC_WEAK_FUNC(sub_8248CC3C);
PPC_FUNC_IMPL(__imp__sub_8248CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CC40"))) PPC_WEAK_FUNC(sub_8248CC40);
PPC_FUNC_IMPL(__imp__sub_8248CC40) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CC8C"))) PPC_WEAK_FUNC(sub_8248CC8C);
PPC_FUNC_IMPL(__imp__sub_8248CC8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CC90"))) PPC_WEAK_FUNC(sub_8248CC90);
PPC_FUNC_IMPL(__imp__sub_8248CC90) {
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
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11400
	ctx.r7.s64 = ctx.r10.s64 + -11400;
	// addi r6,r9,-11240
	ctx.r6.s64 = ctx.r9.s64 + -11240;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-11192
	ctx.r5.s64 = ctx.r8.s64 + -11192;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CD00"))) PPC_WEAK_FUNC(sub_8248CD00);
PPC_FUNC_IMPL(__imp__sub_8248CD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CD04"))) PPC_WEAK_FUNC(sub_8248CD04);
PPC_FUNC_IMPL(__imp__sub_8248CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CD08"))) PPC_WEAK_FUNC(sub_8248CD08);
PPC_FUNC_IMPL(__imp__sub_8248CD08) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r6,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r6.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248CD7C"))) PPC_WEAK_FUNC(sub_8248CD7C);
PPC_FUNC_IMPL(__imp__sub_8248CD7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CD80"))) PPC_WEAK_FUNC(sub_8248CD80);
PPC_FUNC_IMPL(__imp__sub_8248CD80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248CD84"))) PPC_WEAK_FUNC(sub_8248CD84);
PPC_FUNC_IMPL(__imp__sub_8248CD84) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8248cd88
	goto loc_8248CD88;
loc_8248CD88:
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
	// bl 0x8248caf8
	sub_8248CAF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248cdc0
	if (cr6.eq) goto loc_8248CDC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248CDC0:
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

__attribute__((alias("__imp__sub_8248CD88"))) PPC_WEAK_FUNC(sub_8248CD88);
PPC_FUNC_IMPL(__imp__sub_8248CD88) {
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
	// bl 0x8248caf8
	sub_8248CAF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248cdc0
	if (cr6.eq) goto loc_8248CDC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248CDC0:
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

__attribute__((alias("__imp__sub_8248CDD8"))) PPC_WEAK_FUNC(sub_8248CDD8);
PPC_FUNC_IMPL(__imp__sub_8248CDD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CDDC"))) PPC_WEAK_FUNC(sub_8248CDDC);
PPC_FUNC_IMPL(__imp__sub_8248CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CDE0"))) PPC_WEAK_FUNC(sub_8248CDE0);
PPC_FUNC_IMPL(__imp__sub_8248CDE0) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705648
	sub_82705648(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CE1C"))) PPC_WEAK_FUNC(sub_8248CE1C);
PPC_FUNC_IMPL(__imp__sub_8248CE1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CE20"))) PPC_WEAK_FUNC(sub_8248CE20);
PPC_FUNC_IMPL(__imp__sub_8248CE20) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8248ce6c
	if (cr6.eq) goto loc_8248CE6C;
	// li r11,0
	r11.s64 = 0;
loc_8248CE6C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248ce94
	if (!cr6.eq) goto loc_8248CE94;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f2,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705608
	sub_82705608(ctx, base);
loc_8248CE94:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82705660
	sub_82705660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CEB8"))) PPC_WEAK_FUNC(sub_8248CEB8);
PPC_FUNC_IMPL(__imp__sub_8248CEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CEBC"))) PPC_WEAK_FUNC(sub_8248CEBC);
PPC_FUNC_IMPL(__imp__sub_8248CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CEC0"))) PPC_WEAK_FUNC(sub_8248CEC0);
PPC_FUNC_IMPL(__imp__sub_8248CEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248CEDC"))) PPC_WEAK_FUNC(sub_8248CEDC);
PPC_FUNC_IMPL(__imp__sub_8248CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CEE0"))) PPC_WEAK_FUNC(sub_8248CEE0);
PPC_FUNC_IMPL(__imp__sub_8248CEE0) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8248cc90
	sub_8248CC90(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11096
	ctx.r9.s64 = r11.s64 + -11096;
	// addi r8,r10,-11112
	ctx.r8.s64 = ctx.r10.s64 + -11112;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CF28"))) PPC_WEAK_FUNC(sub_8248CF28);
PPC_FUNC_IMPL(__imp__sub_8248CF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CF2C"))) PPC_WEAK_FUNC(sub_8248CF2C);
PPC_FUNC_IMPL(__imp__sub_8248CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CF30"))) PPC_WEAK_FUNC(sub_8248CF30);
PPC_FUNC_IMPL(__imp__sub_8248CF30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CF34"))) PPC_WEAK_FUNC(sub_8248CF34);
PPC_FUNC_IMPL(__imp__sub_8248CF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CF38"))) PPC_WEAK_FUNC(sub_8248CF38);
PPC_FUNC_IMPL(__imp__sub_8248CF38) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705648
	sub_82705648(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248CF74"))) PPC_WEAK_FUNC(sub_8248CF74);
PPC_FUNC_IMPL(__imp__sub_8248CF74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248CF78"))) PPC_WEAK_FUNC(sub_8248CF78);
PPC_FUNC_IMPL(__imp__sub_8248CF78) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lfs f13,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8248cfc4
	if (cr6.eq) goto loc_8248CFC4;
	// li r11,0
	r11.s64 = 0;
loc_8248CFC4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248cfec
	if (!cr6.eq) goto loc_8248CFEC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f2,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705608
	sub_82705608(ctx, base);
loc_8248CFEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82705660
	sub_82705660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D010"))) PPC_WEAK_FUNC(sub_8248D010);
PPC_FUNC_IMPL(__imp__sub_8248D010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D014"))) PPC_WEAK_FUNC(sub_8248D014);
PPC_FUNC_IMPL(__imp__sub_8248D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D018"))) PPC_WEAK_FUNC(sub_8248D018);
PPC_FUNC_IMPL(__imp__sub_8248D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248D034"))) PPC_WEAK_FUNC(sub_8248D034);
PPC_FUNC_IMPL(__imp__sub_8248D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D038"))) PPC_WEAK_FUNC(sub_8248D038);
PPC_FUNC_IMPL(__imp__sub_8248D038) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8248cc90
	sub_8248CC90(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-11032
	ctx.r9.s64 = r11.s64 + -11032;
	// addi r8,r10,-11048
	ctx.r8.s64 = ctx.r10.s64 + -11048;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D080"))) PPC_WEAK_FUNC(sub_8248D080);
PPC_FUNC_IMPL(__imp__sub_8248D080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D084"))) PPC_WEAK_FUNC(sub_8248D084);
PPC_FUNC_IMPL(__imp__sub_8248D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D088"))) PPC_WEAK_FUNC(sub_8248D088);
PPC_FUNC_IMPL(__imp__sub_8248D088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D08C"))) PPC_WEAK_FUNC(sub_8248D08C);
PPC_FUNC_IMPL(__imp__sub_8248D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D090"))) PPC_WEAK_FUNC(sub_8248D090);
PPC_FUNC_IMPL(__imp__sub_8248D090) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705648
	sub_82705648(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D0CC"))) PPC_WEAK_FUNC(sub_8248D0CC);
PPC_FUNC_IMPL(__imp__sub_8248D0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D0D0"))) PPC_WEAK_FUNC(sub_8248D0D0);
PPC_FUNC_IMPL(__imp__sub_8248D0D0) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8248d108
	if (cr6.eq) goto loc_8248D108;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8248d22c
	if (!cr6.eq) goto loc_8248D22C;
loc_8248D108:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8248d22c
	if (cr6.eq) goto loc_8248D22C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248d22c
	if (!cr6.lt) goto loc_8248D22C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248d22c
	if (!cr6.eq) goto loc_8248D22C;
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248d22c
	if (!cr6.eq) goto loc_8248D22C;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8248d188
	if (!cr6.lt) goto loc_8248D188;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x8248d1bc
	goto loc_8248D1BC;
loc_8248D188:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lfs f13,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248d1a4
	if (!cr6.lt) goto loc_8248D1A4;
	// li r11,2
	r11.s64 = 2;
	// b 0x8248d1b8
	goto loc_8248D1B8;
loc_8248D1A4:
	// lfs f13,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// li r11,3
	r11.s64 = 3;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8248d1b8
	if (cr6.lt) goto loc_8248D1B8;
	// li r11,4
	r11.s64 = 4;
loc_8248D1B8:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_8248D1BC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8248d1dc
	if (cr6.eq) goto loc_8248D1DC;
	// li r11,0
	r11.s64 = 0;
loc_8248D1DC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8248d204
	if (!cr6.eq) goto loc_8248D204;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f2,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705608
	sub_82705608(ctx, base);
loc_8248D204:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82705660
	sub_82705660(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8248D22C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 & ctx.r9.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82705648
	sub_82705648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D278"))) PPC_WEAK_FUNC(sub_8248D278);
PPC_FUNC_IMPL(__imp__sub_8248D278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D27C"))) PPC_WEAK_FUNC(sub_8248D27C);
PPC_FUNC_IMPL(__imp__sub_8248D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D280"))) PPC_WEAK_FUNC(sub_8248D280);
PPC_FUNC_IMPL(__imp__sub_8248D280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D284"))) PPC_WEAK_FUNC(sub_8248D284);
PPC_FUNC_IMPL(__imp__sub_8248D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D288"))) PPC_WEAK_FUNC(sub_8248D288);
PPC_FUNC_IMPL(__imp__sub_8248D288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248D2A4"))) PPC_WEAK_FUNC(sub_8248D2A4);
PPC_FUNC_IMPL(__imp__sub_8248D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D2A8"))) PPC_WEAK_FUNC(sub_8248D2A8);
PPC_FUNC_IMPL(__imp__sub_8248D2A8) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8248cc90
	sub_8248CC90(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-10968
	ctx.r9.s64 = r11.s64 + -10968;
	// addi r8,r10,-10984
	ctx.r8.s64 = ctx.r10.s64 + -10984;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D2F0"))) PPC_WEAK_FUNC(sub_8248D2F0);
PPC_FUNC_IMPL(__imp__sub_8248D2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D2F4"))) PPC_WEAK_FUNC(sub_8248D2F4);
PPC_FUNC_IMPL(__imp__sub_8248D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D2F8"))) PPC_WEAK_FUNC(sub_8248D2F8);
PPC_FUNC_IMPL(__imp__sub_8248D2F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248D2FC"))) PPC_WEAK_FUNC(sub_8248D2FC);
PPC_FUNC_IMPL(__imp__sub_8248D2FC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8248d300
	goto loc_8248D300;
loc_8248D300:
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248d350
	if (cr6.eq) goto loc_8248D350;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248D350:
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

__attribute__((alias("__imp__sub_8248D300"))) PPC_WEAK_FUNC(sub_8248D300);
PPC_FUNC_IMPL(__imp__sub_8248D300) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248d350
	if (cr6.eq) goto loc_8248D350;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248D350:
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

__attribute__((alias("__imp__sub_8248D368"))) PPC_WEAK_FUNC(sub_8248D368);
PPC_FUNC_IMPL(__imp__sub_8248D368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248d388
	if (!cr6.lt) goto loc_8248D388;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248D388:
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r11,6(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r8,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r8.s64 = 0 - r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D3A8"))) PPC_WEAK_FUNC(sub_8248D3A8);
PPC_FUNC_IMPL(__imp__sub_8248D3A8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lfs f13,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8248d414
	if (!cr6.gt) goto loc_8248D414;
	// lfs f0,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// lwz r31,40(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x824917a8
	sub_824917A8(ctx, base);
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x8248d444
	if (cr6.lt) goto loc_8248D444;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8248d448
	goto loc_8248D448;
loc_8248D414:
	// lfs f0,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r4,20(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r31,40(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x824917a8
	sub_824917A8(ctx, base);
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x8248d448
	if (!cr6.lt) goto loc_8248D448;
loc_8248D444:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8248D448:
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

__attribute__((alias("__imp__sub_8248D45C"))) PPC_WEAK_FUNC(sub_8248D45C);
PPC_FUNC_IMPL(__imp__sub_8248D45C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D460"))) PPC_WEAK_FUNC(sub_8248D460);
PPC_FUNC_IMPL(__imp__sub_8248D460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D464"))) PPC_WEAK_FUNC(sub_8248D464);
PPC_FUNC_IMPL(__imp__sub_8248D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D468"))) PPC_WEAK_FUNC(sub_8248D468);
PPC_FUNC_IMPL(__imp__sub_8248D468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-10920
	ctx.r9.s64 = r11.s64 + -10920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// b 0x826e8e28
	sub_826E8E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248D484"))) PPC_WEAK_FUNC(sub_8248D484);
PPC_FUNC_IMPL(__imp__sub_8248D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D488"))) PPC_WEAK_FUNC(sub_8248D488);
PPC_FUNC_IMPL(__imp__sub_8248D488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,-10872
	r29.s64 = ctx.r10.s64 + -10872;
	// li r28,8
	r28.s64 = 8;
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
	// li r8,36
	ctx.r8.s64 = 36;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,216
	ctx.r3.s64 = 216;
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
	// beq cr6,0x8248d4f0
	if (cr6.eq) goto loc_8248D4F0;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8248f9d0
	sub_8248F9D0(ctx, base);
	// b 0x8248d4f4
	goto loc_8248D4F4;
loc_8248D4F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248D4F4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,37
	ctx.r8.s64 = 37;
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// li r3,88
	ctx.r3.s64 = 88;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248d564
	if (cr6.eq) goto loc_8248D564;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x82490178
	sub_82490178(ctx, base);
	// bl 0x82495160
	sub_82495160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82495b70
	sub_82495B70(ctx, base);
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_8248D564:
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8248D570"))) PPC_WEAK_FUNC(sub_8248D570);
PPC_FUNC_IMPL(__imp__sub_8248D570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8248D574"))) PPC_WEAK_FUNC(sub_8248D574);
PPC_FUNC_IMPL(__imp__sub_8248D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D578"))) PPC_WEAK_FUNC(sub_8248D578);
PPC_FUNC_IMPL(__imp__sub_8248D578) {
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
	// lwz r30,56(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8248d5ac
	if (cr6.eq) goto loc_8248D5AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82495bd8
	sub_82495BD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
loc_8248D5AC:
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8248d5cc
	if (cr6.eq) goto loc_8248D5CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248ec10
	sub_8248EC10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
loc_8248D5CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8248D5D0"))) PPC_WEAK_FUNC(sub_8248D5D0);
PPC_FUNC_IMPL(__imp__sub_8248D5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8248D5D4"))) PPC_WEAK_FUNC(sub_8248D5D4);
PPC_FUNC_IMPL(__imp__sub_8248D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D5D8"))) PPC_WEAK_FUNC(sub_8248D5D8);
PPC_FUNC_IMPL(__imp__sub_8248D5D8) {
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
	// bl 0x8248d3a8
	sub_8248D3A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bne cr6,0x8248d640
	if (!cr6.eq) goto loc_8248D640;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248d620
	if (!cr6.eq) goto loc_8248D620;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82495ec8
	sub_82495EC8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r3,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r3.u32);
	// b 0x8248d648
	goto loc_8248D648;
loc_8248D620:
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248d648
	if (!cr6.eq) goto loc_8248D648;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82495ec8
	sub_82495EC8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r3,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r3.u32);
	// b 0x8248d648
	goto loc_8248D648;
loc_8248D640:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
loc_8248D648:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248d668
	if (!cr6.lt) goto loc_8248D668;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248D668:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r8,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r8.s64 = 0 - r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r5.u8);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,100(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82490108
	sub_82490108(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D6A8"))) PPC_WEAK_FUNC(sub_8248D6A8);
PPC_FUNC_IMPL(__imp__sub_8248D6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D6AC"))) PPC_WEAK_FUNC(sub_8248D6AC);
PPC_FUNC_IMPL(__imp__sub_8248D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D6B0"))) PPC_WEAK_FUNC(sub_8248D6B0);
PPC_FUNC_IMPL(__imp__sub_8248D6B0) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r10,-11620
	ctx.r7.s64 = ctx.r10.s64 + -11620;
	// addi r6,r9,-10776
	ctx.r6.s64 = ctx.r9.s64 + -10776;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r5,r8,-10792
	ctx.r5.s64 = ctx.r8.s64 + -10792;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D71C"))) PPC_WEAK_FUNC(sub_8248D71C);
PPC_FUNC_IMPL(__imp__sub_8248D71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D720"))) PPC_WEAK_FUNC(sub_8248D720);
PPC_FUNC_IMPL(__imp__sub_8248D720) {
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
	// bl 0x826e8f08
	sub_826E8F08(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82485660
	sub_82485660(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8248D764"))) PPC_WEAK_FUNC(sub_8248D764);
PPC_FUNC_IMPL(__imp__sub_8248D764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D768"))) PPC_WEAK_FUNC(sub_8248D768);
PPC_FUNC_IMPL(__imp__sub_8248D768) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-10920
	ctx.r9.s64 = r11.s64 + -10920;
	// addi r8,r10,3368
	ctx.r8.s64 = ctx.r10.s64 + 3368;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248d7b8
	if (cr6.eq) goto loc_8248D7B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8248D7B8:
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

__attribute__((alias("__imp__sub_8248D7CC"))) PPC_WEAK_FUNC(sub_8248D7CC);
PPC_FUNC_IMPL(__imp__sub_8248D7CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D7D0"))) PPC_WEAK_FUNC(sub_8248D7D0);
PPC_FUNC_IMPL(__imp__sub_8248D7D0) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82485670
	sub_82485670(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// bl 0x826e8ec0
	sub_826E8EC0(ctx, base);
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

__attribute__((alias("__imp__sub_8248D834"))) PPC_WEAK_FUNC(sub_8248D834);
PPC_FUNC_IMPL(__imp__sub_8248D834) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D838"))) PPC_WEAK_FUNC(sub_8248D838);
PPC_FUNC_IMPL(__imp__sub_8248D838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
}

__attribute__((alias("__imp__sub_8248D83C"))) PPC_WEAK_FUNC(sub_8248D83C);
PPC_FUNC_IMPL(__imp__sub_8248D83C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248d768
	sub_8248D768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248D840"))) PPC_WEAK_FUNC(sub_8248D840);
PPC_FUNC_IMPL(__imp__sub_8248D840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8248d860
	if (!cr6.lt) goto loc_8248D860;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8248D860:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r7,-13328(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + -13328);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r9
	r11.u64 = ctx.r4.u64 & ctx.r9.u64;
	// bne cr6,0x8248d88c
	if (!cr6.eq) goto loc_8248D88C;
	// li r11,1
	r11.s64 = 1;
loc_8248D88C:
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & r11.u64;
	// stb r5,9(r9)
	PPC_STORE_U8(ctx.r9.u32 + 9, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D8AC"))) PPC_WEAK_FUNC(sub_8248D8AC);
PPC_FUNC_IMPL(__imp__sub_8248D8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D8B0"))) PPC_WEAK_FUNC(sub_8248D8B0);
PPC_FUNC_IMPL(__imp__sub_8248D8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248D8B4"))) PPC_WEAK_FUNC(sub_8248D8B4);
PPC_FUNC_IMPL(__imp__sub_8248D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D8B8"))) PPC_WEAK_FUNC(sub_8248D8B8);
PPC_FUNC_IMPL(__imp__sub_8248D8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

