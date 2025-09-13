#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8257B350"))) PPC_WEAK_FUNC(sub_8257B350);
PPC_FUNC_IMPL(__imp__sub_8257B350) {
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
	// bl 0x8257ba90
	sub_8257BA90(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-18940
	ctx.r10.s64 = r11.s64 + -18940;
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

__attribute__((alias("__imp__sub_8257B388"))) PPC_WEAK_FUNC(sub_8257B388);
PPC_FUNC_IMPL(__imp__sub_8257B388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B38C"))) PPC_WEAK_FUNC(sub_8257B38C);
PPC_FUNC_IMPL(__imp__sub_8257B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B390"))) PPC_WEAK_FUNC(sub_8257B390);
PPC_FUNC_IMPL(__imp__sub_8257B390) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257b848
	sub_8257B848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B394"))) PPC_WEAK_FUNC(sub_8257B394);
PPC_FUNC_IMPL(__imp__sub_8257B394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B398"))) PPC_WEAK_FUNC(sub_8257B398);
PPC_FUNC_IMPL(__imp__sub_8257B398) {
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
	// bl 0x8257b920
	sub_8257B920(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b3d0
	if (cr6.eq) goto loc_8257B3D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257B3D0:
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

__attribute__((alias("__imp__sub_8257B3E4"))) PPC_WEAK_FUNC(sub_8257B3E4);
PPC_FUNC_IMPL(__imp__sub_8257B3E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B3E8"))) PPC_WEAK_FUNC(sub_8257B3E8);
PPC_FUNC_IMPL(__imp__sub_8257B3E8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-18920
	ctx.r10.s64 = r11.s64 + -18920;
	// li r30,4
	r30.s64 = 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	r29.s64 = 0;
loc_8257B40C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b430
	if (cr6.eq) goto loc_8257B430;
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
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8257B430:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8257b40c
	if (!cr0.eq) goto loc_8257B40C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257B440"))) PPC_WEAK_FUNC(sub_8257B440);
PPC_FUNC_IMPL(__imp__sub_8257B440) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257B444"))) PPC_WEAK_FUNC(sub_8257B444);
PPC_FUNC_IMPL(__imp__sub_8257B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B448"))) PPC_WEAK_FUNC(sub_8257B448);
PPC_FUNC_IMPL(__imp__sub_8257B448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r9,r11,-18920
	ctx.r9.s64 = r11.s64 + -18920;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// ld r27,88(r1)
	r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ld r26,80(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r31,4
	r31.s64 = 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r11,-18916
	r30.s64 = r11.s64 + -18916;
loc_8257B498:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b4c8
	if (cr6.eq) goto loc_8257B4C8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8257b350
	sub_8257B350(ctx, base);
	// b 0x8257b4cc
	goto loc_8257B4CC;
loc_8257B4C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8257B4CC:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// bne 0x8257b498
	if (!cr0.eq) goto loc_8257B498;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8257B4E0"))) PPC_WEAK_FUNC(sub_8257B4E0);
PPC_FUNC_IMPL(__imp__sub_8257B4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8257B4E4"))) PPC_WEAK_FUNC(sub_8257B4E4);
PPC_FUNC_IMPL(__imp__sub_8257B4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B4E8"))) PPC_WEAK_FUNC(sub_8257B4E8);
PPC_FUNC_IMPL(__imp__sub_8257B4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e9404
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x828eaaec
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// lfs f26,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f26.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8257b77c
	if (!cr6.gt) goto loc_8257B77C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r4,28
	r31.s64 = ctx.r4.s64 + 28;
	// lis r24,-32253
	r24.s64 = -2113732608;
	// lfs f27,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f27.f64 = double(temp.f32);
	// addi r29,r11,-21484
	r29.s64 = r11.s64 + -21484;
loc_8257B540:
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f13,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,-18928(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -18928);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f30,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f31,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f31.f64 = double(temp.f32);
	// fmadds f5,f12,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f11,f5
	ctx.f11.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// stfs f5,144(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f4,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f2,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// blt cr6,0x8257b614
	if (cr6.lt) goto loc_8257B614;
	// fdivs f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 / ctx.f11.f64));
	// li r11,1
	r11.s64 = 1;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(f0.f64 * ctx.f11.f64));
	// b 0x8257b624
	goto loc_8257B624;
loc_8257B614:
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f31.f64;
	// li r11,0
	r11.s64 = 0;
	// fmr f9,f30
	ctx.f9.f64 = f30.f64;
	// fmr f8,f29
	ctx.f8.f64 = f29.f64;
loc_8257B624:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b744
	if (cr6.eq) goto loc_8257B744;
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmadds f7,f13,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f11,f6
	ctx.f11.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x8257b670
	if (cr6.lt) goto loc_8257B670;
	// fdivs f11,f27,f11
	ctx.f11.f64 = double(float(f27.f64 / ctx.f11.f64));
	// li r11,1
	r11.s64 = 1;
	// fmuls f31,f11,f12
	f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f30,f0,f11
	f30.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// b 0x8257b678
	goto loc_8257B678;
loc_8257B670:
	// lfs f28,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f28.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
loc_8257B678:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b744
	if (cr6.eq) goto loc_8257B744;
	// fmuls f0,f29,f9
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * ctx.f9.f64));
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f30,f10
	ctx.f12.f64 = double(float(f30.f64 * ctx.f10.f64));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmuls f13,f8,f31
	ctx.f13.f64 = double(float(ctx.f8.f64 * f31.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmsubs f11,f30,f8,f0
	ctx.f11.f64 = double(float(f30.f64 * ctx.f8.f64 - f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f9,f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64 - ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f10,f29,f10,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b744
	if (cr6.eq) goto loc_8257B744;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(f0.f64 * f30.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f8,-24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f3,f12,f29,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * f29.f64 - ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f0,f31,f10
	ctx.f2.f64 = double(float(f0.f64 * f31.f64 - ctx.f10.f64));
	// stfs f5,156(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmsubs f1,f30,f13,f9
	ctx.f1.f64 = double(float(f30.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
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
	// stfs f26,140(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8257B744:
	// lwzu r3,4(r26)
	ea = 4 + r26.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r26.u32 = ea;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8257b540
	if (cr6.lt) goto loc_8257B540;
loc_8257B77C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x8257b7e0
	if (!cr6.lt) goto loc_8257B7E0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// subfic r30,r11,4
	xer.ca = r11.u32 <= 4;
	r30.s64 = 4 - r11.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r9,r23
	r31.u64 = ctx.r9.u64 + r23.u64;
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r29,r11,36
	r29.s64 = r11.s64 + 36;
loc_8257B7A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzu r28,4(r31)
	ea = 4 + r31.u32;
	r28.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// bne 0x8257b7a4
	if (!cr0.eq) goto loc_8257B7A4;
loc_8257B7E0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_8257B7EC"))) PPC_WEAK_FUNC(sub_8257B7EC);
PPC_FUNC_IMPL(__imp__sub_8257B7EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8257B7F0"))) PPC_WEAK_FUNC(sub_8257B7F0);
PPC_FUNC_IMPL(__imp__sub_8257B7F0) {
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
	// bl 0x8257b3e8
	sub_8257B3E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257b828
	if (cr6.eq) goto loc_8257B828;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257B828:
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

__attribute__((alias("__imp__sub_8257B83C"))) PPC_WEAK_FUNC(sub_8257B83C);
PPC_FUNC_IMPL(__imp__sub_8257B83C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B840"))) PPC_WEAK_FUNC(sub_8257B840);
PPC_FUNC_IMPL(__imp__sub_8257B840) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257bdd0
	sub_8257BDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B840"))) PPC_WEAK_FUNC(sub_8257B840);
PPC_FUNC_IMPL(__imp__sub_8257B840) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8257B844"))) PPC_WEAK_FUNC(sub_8257B844);
PPC_FUNC_IMPL(__imp__sub_8257B844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B848"))) PPC_WEAK_FUNC(sub_8257B848);
PPC_FUNC_IMPL(__imp__sub_8257B848) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b890
	if (cr6.eq) goto loc_8257B890;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257b890
	if (cr6.eq) goto loc_8257B890;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8257f3d8
	sub_8257F3D8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8257B890:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257b8f4
	if (!cr6.eq) goto loc_8257B8F4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8257b8f4
	if (cr6.eq) goto loc_8257B8F4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_8257B8D0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x8257b8f0
	if (cr6.eq) goto loc_8257B8F0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8257b8d0
	if (!cr6.eq) goto loc_8257B8D0;
	// b 0x8257b8f4
	goto loc_8257B8F4;
loc_8257B8F0:
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8257B8F4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b914
	if (cr6.eq) goto loc_8257B914;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8257f420
	sub_8257F420(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8257f3d8
	sub_8257F3D8(ctx, base);
loc_8257B914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257B918"))) PPC_WEAK_FUNC(sub_8257B918);
PPC_FUNC_IMPL(__imp__sub_8257B918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257B91C"))) PPC_WEAK_FUNC(sub_8257B91C);
PPC_FUNC_IMPL(__imp__sub_8257B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257B920"))) PPC_WEAK_FUNC(sub_8257B920);
PPC_FUNC_IMPL(__imp__sub_8257B920) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-18828
	ctx.r10.s64 = r11.s64 + -18828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x8257b99c
	if (cr6.eq) goto loc_8257B99C;
loc_8257B960:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257b980
	if (cr6.eq) goto loc_8257B980;
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
loc_8257B980:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8257b960
	if (!cr6.eq) goto loc_8257B960;
loc_8257B99C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257b9c0
	if (!cr6.gt) goto loc_8257B9C0;
loc_8257B9A8:
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
	// bgt cr6,0x8257b9a8
	if (cr6.gt) goto loc_8257B9A8;
loc_8257B9C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257bce8
	sub_8257BCE8(ctx, base);
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

__attribute__((alias("__imp__sub_8257B9DC"))) PPC_WEAK_FUNC(sub_8257B9DC);
PPC_FUNC_IMPL(__imp__sub_8257B9DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B9E0"))) PPC_WEAK_FUNC(sub_8257B9E0);
PPC_FUNC_IMPL(__imp__sub_8257B9E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8257f648
	sub_8257F648(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-18804
	ctx.r10.s64 = r11.s64 + -18804;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-18820
	r29.s64 = r11.s64 + -18820;
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
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
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8257ba84
	if (cr6.eq) goto loc_8257BA84;
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_8257BA84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257BA8C"))) PPC_WEAK_FUNC(sub_8257BA8C);
PPC_FUNC_IMPL(__imp__sub_8257BA8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257BA90"))) PPC_WEAK_FUNC(sub_8257BA90);
PPC_FUNC_IMPL(__imp__sub_8257BA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-18828
	ctx.r9.s64 = r11.s64 + -18828;
	// li r31,0
	r31.s64 = 0;
	// addi r8,r10,-18840
	ctx.r8.s64 = ctx.r10.s64 + -18840;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addi r29,r11,-18740
	r29.s64 = r11.s64 + -18740;
	// stw r6,20(r23)
	PPC_STORE_U32(r23.u32 + 20, ctx.r6.u32);
	// stw r31,28(r23)
	PPC_STORE_U32(r23.u32 + 28, r31.u32);
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
	// clrlwi r5,r27,24
	ctx.r5.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257bc08
	if (cr6.eq) goto loc_8257BC08;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8257bc08
	if (!cr6.gt) goto loc_8257BC08;
	// li r11,29
	r11.s64 = 29;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// ld r26,120(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r27,r11,-18800
	r27.s64 = r11.s64 + -18800;
	// ld r25,112(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_8257BB94:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r8,35
	ctx.r8.s64 = 35;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rldicr r6,r24,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r24.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257bbfc
	if (cr6.eq) goto loc_8257BBFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8257b9e0
	sub_8257B9E0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257bbfc
	if (cr6.eq) goto loc_8257BBFC;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8257BBFC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r22
	cr6.compare<int32_t>(r30.s32, r22.s32, xer);
	// blt cr6,0x8257bb94
	if (cr6.lt) goto loc_8257BB94;
loc_8257BC08:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8257BC10"))) PPC_WEAK_FUNC(sub_8257BC10);
PPC_FUNC_IMPL(__imp__sub_8257BC10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8257BC14"))) PPC_WEAK_FUNC(sub_8257BC14);
PPC_FUNC_IMPL(__imp__sub_8257BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BC18"))) PPC_WEAK_FUNC(sub_8257BC18);
PPC_FUNC_IMPL(__imp__sub_8257BC18) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-18852
	ctx.r9.s64 = r11.s64 + -18852;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8257bc5c
	if (!cr6.gt) goto loc_8257BC5C;
loc_8257BC44:
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
	// bgt cr6,0x8257bc44
	if (cr6.gt) goto loc_8257BC44;
loc_8257BC5C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257bc74
	if (cr6.eq) goto loc_8257BC74;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257BC74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257BC84"))) PPC_WEAK_FUNC(sub_8257BC84);
PPC_FUNC_IMPL(__imp__sub_8257BC84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BC88"))) PPC_WEAK_FUNC(sub_8257BC88);
PPC_FUNC_IMPL(__imp__sub_8257BC88) {
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
	// addi r9,r10,-18840
	ctx.r9.s64 = ctx.r10.s64 + -18840;
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

__attribute__((alias("__imp__sub_8257BCE0"))) PPC_WEAK_FUNC(sub_8257BCE0);
PPC_FUNC_IMPL(__imp__sub_8257BCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BCE4"))) PPC_WEAK_FUNC(sub_8257BCE4);
PPC_FUNC_IMPL(__imp__sub_8257BCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BCE8"))) PPC_WEAK_FUNC(sub_8257BCE8);
PPC_FUNC_IMPL(__imp__sub_8257BCE8) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-18840
	ctx.r9.s64 = r11.s64 + -18840;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8257bd2c
	if (!cr6.gt) goto loc_8257BD2C;
loc_8257BD14:
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
	// bgt cr6,0x8257bd14
	if (cr6.gt) goto loc_8257BD14;
loc_8257BD2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257bdd0
	sub_8257BDD0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-18852
	ctx.r10.s64 = r11.s64 + -18852;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8257bd68
	if (!cr6.gt) goto loc_8257BD68;
loc_8257BD50:
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
	// bgt cr6,0x8257bd50
	if (cr6.gt) goto loc_8257BD50;
loc_8257BD68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257BD78"))) PPC_WEAK_FUNC(sub_8257BD78);
PPC_FUNC_IMPL(__imp__sub_8257BD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BD7C"))) PPC_WEAK_FUNC(sub_8257BD7C);
PPC_FUNC_IMPL(__imp__sub_8257BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BD80"))) PPC_WEAK_FUNC(sub_8257BD80);
PPC_FUNC_IMPL(__imp__sub_8257BD80) {
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
	// bl 0x8257bce8
	sub_8257BCE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257bdb8
	if (cr6.eq) goto loc_8257BDB8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257BDB8:
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

__attribute__((alias("__imp__sub_8257BDCC"))) PPC_WEAK_FUNC(sub_8257BDCC);
PPC_FUNC_IMPL(__imp__sub_8257BDCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BDD0"))) PPC_WEAK_FUNC(sub_8257BDD0);
PPC_FUNC_IMPL(__imp__sub_8257BDD0) {
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
	// beq cr6,0x8257beb4
	if (cr6.eq) goto loc_8257BEB4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257be44
	if (!cr6.eq) goto loc_8257BE44;
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
	// beq cr6,0x8257beb4
	if (cr6.eq) goto loc_8257BEB4;
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
	// b 0x8257beb4
	goto loc_8257BEB4;
loc_8257BE44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257bc88
	sub_8257BC88(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8257be70
	if (!cr6.gt) goto loc_8257BE70;
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
loc_8257BE70:
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
	// bl 0x8257bce8
	sub_8257BCE8(ctx, base);
loc_8257BEB4:
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

__attribute__((alias("__imp__sub_8257BEC8"))) PPC_WEAK_FUNC(sub_8257BEC8);
PPC_FUNC_IMPL(__imp__sub_8257BEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BECC"))) PPC_WEAK_FUNC(sub_8257BECC);
PPC_FUNC_IMPL(__imp__sub_8257BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BED0"))) PPC_WEAK_FUNC(sub_8257BED0);
PPC_FUNC_IMPL(__imp__sub_8257BED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257BEDC"))) PPC_WEAK_FUNC(sub_8257BEDC);
PPC_FUNC_IMPL(__imp__sub_8257BEDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82887988
	sub_82887988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BEE0"))) PPC_WEAK_FUNC(sub_8257BEE0);
PPC_FUNC_IMPL(__imp__sub_8257BEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BEE4"))) PPC_WEAK_FUNC(sub_8257BEE4);
PPC_FUNC_IMPL(__imp__sub_8257BEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BEE8"))) PPC_WEAK_FUNC(sub_8257BEE8);
PPC_FUNC_IMPL(__imp__sub_8257BEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8257BEF8"))) PPC_WEAK_FUNC(sub_8257BEF8);
PPC_FUNC_IMPL(__imp__sub_8257BEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82888cc8
	sub_82888CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BEFC"))) PPC_WEAK_FUNC(sub_8257BEFC);
PPC_FUNC_IMPL(__imp__sub_8257BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BF00"))) PPC_WEAK_FUNC(sub_8257BF00);
PPC_FUNC_IMPL(__imp__sub_8257BF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257BF0C"))) PPC_WEAK_FUNC(sub_8257BF0C);
PPC_FUNC_IMPL(__imp__sub_8257BF0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82886420
	sub_82886420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BF10"))) PPC_WEAK_FUNC(sub_8257BF10);
PPC_FUNC_IMPL(__imp__sub_8257BF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF14"))) PPC_WEAK_FUNC(sub_8257BF14);
PPC_FUNC_IMPL(__imp__sub_8257BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BF18"))) PPC_WEAK_FUNC(sub_8257BF18);
PPC_FUNC_IMPL(__imp__sub_8257BF18) {
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
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257bf4c
	if (cr6.eq) goto loc_8257BF4C;
	// bl 0x82886608
	sub_82886608(ctx, base);
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
loc_8257BF4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8257BF5C"))) PPC_WEAK_FUNC(sub_8257BF5C);
PPC_FUNC_IMPL(__imp__sub_8257BF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF60"))) PPC_WEAK_FUNC(sub_8257BF60);
PPC_FUNC_IMPL(__imp__sub_8257BF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
}

__attribute__((alias("__imp__sub_8257BF64"))) PPC_WEAK_FUNC(sub_8257BF64);
PPC_FUNC_IMPL(__imp__sub_8257BF64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF68"))) PPC_WEAK_FUNC(sub_8257BF68);
PPC_FUNC_IMPL(__imp__sub_8257BF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
}

__attribute__((alias("__imp__sub_8257BF70"))) PPC_WEAK_FUNC(sub_8257BF70);
PPC_FUNC_IMPL(__imp__sub_8257BF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF74"))) PPC_WEAK_FUNC(sub_8257BF74);
PPC_FUNC_IMPL(__imp__sub_8257BF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BF78"))) PPC_WEAK_FUNC(sub_8257BF78);
PPC_FUNC_IMPL(__imp__sub_8257BF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
}

__attribute__((alias("__imp__sub_8257BF80"))) PPC_WEAK_FUNC(sub_8257BF80);
PPC_FUNC_IMPL(__imp__sub_8257BF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF84"))) PPC_WEAK_FUNC(sub_8257BF84);
PPC_FUNC_IMPL(__imp__sub_8257BF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BF88"))) PPC_WEAK_FUNC(sub_8257BF88);
PPC_FUNC_IMPL(__imp__sub_8257BF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
}

__attribute__((alias("__imp__sub_8257BF90"))) PPC_WEAK_FUNC(sub_8257BF90);
PPC_FUNC_IMPL(__imp__sub_8257BF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257BF94"))) PPC_WEAK_FUNC(sub_8257BF94);
PPC_FUNC_IMPL(__imp__sub_8257BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257BF98"))) PPC_WEAK_FUNC(sub_8257BF98);
PPC_FUNC_IMPL(__imp__sub_8257BF98) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r7,104(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// rlwinm r6,r7,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8257c0a4
	if (!cr6.eq) goto loc_8257C0A4;
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	f0.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,188(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f5,f12,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f11,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fsqrts f0,f4
	f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x8257c090
	if (!cr6.gt) goto loc_8257C090;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f8,240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f10,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / f0.f64));
	// fdivs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// lfs f10,15536(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15536);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x8257c098
	goto loc_8257C098;
loc_8257C090:
	// stfs f10,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8257C098:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82888cc8
	sub_82888CC8(ctx, base);
loc_8257C0A4:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8257C0B8"))) PPC_WEAK_FUNC(sub_8257C0B8);
PPC_FUNC_IMPL(__imp__sub_8257C0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C0BC"))) PPC_WEAK_FUNC(sub_8257C0BC);
PPC_FUNC_IMPL(__imp__sub_8257C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C0C0"))) PPC_WEAK_FUNC(sub_8257C0C0);
PPC_FUNC_IMPL(__imp__sub_8257C0C0) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8257c160
	if (!cr6.gt) goto loc_8257C160;
	// lfs f12,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8257c160
	if (!cr6.lt) goto loc_8257C160;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8257c160
	if (!cr6.gt) goto loc_8257C160;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82889880
	sub_82889880(ctx, base);
	// lfs f1,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889870
	sub_82889870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8257C160:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82889880
	sub_82889880(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257C180"))) PPC_WEAK_FUNC(sub_8257C180);
PPC_FUNC_IMPL(__imp__sub_8257C180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C184"))) PPC_WEAK_FUNC(sub_8257C184);
PPC_FUNC_IMPL(__imp__sub_8257C184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C188"))) PPC_WEAK_FUNC(sub_8257C188);
PPC_FUNC_IMPL(__imp__sub_8257C188) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257c1c4
	if (cr6.eq) goto loc_8257C1C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257c1c8
	if (!cr6.eq) goto loc_8257C1C8;
loc_8257C1C4:
	// li r11,0
	r11.s64 = 0;
loc_8257C1C8:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,3384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// stfs f10,240(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// stfs f7,72(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,76(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,80(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,84(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,88(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,92(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f8,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,124(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257c334
	if (cr6.eq) goto loc_8257C334;
	// lfs f0,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	f0.f64 = double(temp.f32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r9,r11,272
	ctx.r9.s64 = r11.s64 + 272;
	// lfs f13,276(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f12,280(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f11,284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f10,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f9,292(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f8,296(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,152(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f7,300(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 300);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f6,304(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 304);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,160(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f5,308(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 308);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f4,312(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,168(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f3,316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 316);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,172(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f2,320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,176(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f1,324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,180(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 328);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f13,332(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889708
	sub_82889708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c0c0
	sub_8257C0C0(ctx, base);
	// b 0x8257c3b8
	goto loc_8257C3B8;
loc_8257C334:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,152(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,160(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,168(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,172(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,176(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,180(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
loc_8257C3B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257C3CC"))) PPC_WEAK_FUNC(sub_8257C3CC);
PPC_FUNC_IMPL(__imp__sub_8257C3CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C3D0"))) PPC_WEAK_FUNC(sub_8257C3D0);
PPC_FUNC_IMPL(__imp__sub_8257C3D0) {
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
	// lwz r11,220(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,220
	r29.s64 = ctx.r3.s64 + 220;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257c3fc
	if (!cr6.eq) goto loc_8257C3FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8257C3FC:
	// lwz r11,256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257c46c
	if (!cr6.eq) goto loc_8257C46C;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c424
	if (cr6.eq) goto loc_8257C424;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
loc_8257C424:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257c444
	if (cr6.eq) goto loc_8257C444;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257c448
	if (!cr6.eq) goto loc_8257C448;
loc_8257C444:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8257C448:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// bl 0x8257fbf0
	sub_8257FBF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828882e0
	sub_828882E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8257C46C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257C474"))) PPC_WEAK_FUNC(sub_8257C474);
PPC_FUNC_IMPL(__imp__sub_8257C474) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257C478"))) PPC_WEAK_FUNC(sub_8257C478);
PPC_FUNC_IMPL(__imp__sub_8257C478) {
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
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,92(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,96(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,104(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f1,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,108(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stfs f9,132(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stfs f8,136(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,140(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,144(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,152(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,156(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f2,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,160(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,164(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,180(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,184(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f9,188(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// lfs f0,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stb r11,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r11.u8);
	// lfs f13,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// stb r11,264(r31)
	PPC_STORE_U8(r31.u32 + 264, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257C684"))) PPC_WEAK_FUNC(sub_8257C684);
PPC_FUNC_IMPL(__imp__sub_8257C684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C688"))) PPC_WEAK_FUNC(sub_8257C688);
PPC_FUNC_IMPL(__imp__sub_8257C688) {
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
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c6a8
	if (cr6.eq) goto loc_8257C6A8;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
loc_8257C6A8:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257c6cc
	if (cr6.eq) goto loc_8257C6CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257c6d0
	if (!cr6.eq) goto loc_8257C6D0;
loc_8257C6CC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8257C6D0:
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// addi r29,r31,220
	r29.s64 = r31.s64 + 220;
	// lwz r30,68(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257c71c
	if (cr6.eq) goto loc_8257C71C;
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8257c700
	if (!cr6.eq) goto loc_8257C700;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257fc50
	sub_8257FC50(ctx, base);
	// b 0x8257c708
	goto loc_8257C708;
loc_8257C700:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8257c714
	if (!cr6.eq) goto loc_8257C714;
loc_8257C708:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257fbf0
	sub_8257FBF0(ctx, base);
loc_8257C714:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828882e0
	sub_828882E0(ctx, base);
loc_8257C71C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257fc10
	sub_8257FC10(ctx, base);
	// stw r28,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r28.u32);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257c744
	if (cr6.lt) goto loc_8257C744;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257C744:
	// li r11,15
	r11.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257C758"))) PPC_WEAK_FUNC(sub_8257C758);
PPC_FUNC_IMPL(__imp__sub_8257C758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257C75C"))) PPC_WEAK_FUNC(sub_8257C75C);
PPC_FUNC_IMPL(__imp__sub_8257C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C760"))) PPC_WEAK_FUNC(sub_8257C760);
PPC_FUNC_IMPL(__imp__sub_8257C760) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257c8d8
	if (cr6.eq) goto loc_8257C8D8;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// bl 0x828898e0
	sub_828898E0(ctx, base);
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257c8cc
	if (!cr6.eq) goto loc_8257C8CC;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c8b4
	if (cr6.eq) goto loc_8257C8B4;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x82888e18
	sub_82888E18(ctx, base);
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x828898e8
	sub_828898E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c848
	if (cr6.eq) goto loc_8257C848;
	// bl 0x828864f0
	sub_828864F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r7,r10,-18720
	ctx.r7.s64 = ctx.r10.s64 + -18720;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r8,113
	ctx.r8.s64 = 113;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// lwz r4,220(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82887958
	sub_82887958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828862e8
	sub_828862E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82886628
	sub_82886628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,264(r31)
	PPC_STORE_U8(r31.u32 + 264, ctx.r6.u8);
	// bl 0x82886430
	sub_82886430(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c844
	if (cr6.eq) goto loc_8257C844;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r28,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r28.u32);
loc_8257C844:
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
loc_8257C848:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257c868
	if (cr6.eq) goto loc_8257C868;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257c868
	if (cr6.eq) goto loc_8257C868;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8257C868:
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c188
	sub_8257C188(ctx, base);
	// lfs f0,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889820
	sub_82889820(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x828895e8
	sub_828895E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889880
	sub_82889880(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889880
	sub_82889880(ctx, base);
loc_8257C8B4:
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x82889d78
	sub_82889D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3698
	sub_822D3698(ctx, base);
	// stw r27,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r27.u32);
loc_8257C8CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_8257C8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257C8E0"))) PPC_WEAK_FUNC(sub_8257C8E0);
PPC_FUNC_IMPL(__imp__sub_8257C8E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8257C8E4"))) PPC_WEAK_FUNC(sub_8257C8E4);
PPC_FUNC_IMPL(__imp__sub_8257C8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257C8E8"))) PPC_WEAK_FUNC(sub_8257C8E8);
PPC_FUNC_IMPL(__imp__sub_8257C8E8) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x8257cb60
	if (cr6.eq) goto loc_8257CB60;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257cb10
	if (cr6.eq) goto loc_8257CB10;
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8257caa4
	if (!cr6.eq) goto loc_8257CAA4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257ce20
	sub_8257CE20(ctx, base);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bge cr6,0x8257c950
	if (!cr6.lt) goto loc_8257C950;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8257C950:
	// addi r29,r31,220
	r29.s64 = r31.s64 + 220;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82888118
	sub_82888118(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8257c980
	if (cr6.eq) goto loc_8257C980;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822dfc78
	sub_822DFC78(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8257C980:
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x828898e8
	sub_828898E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ca0c
	if (cr6.eq) goto loc_8257CA0C;
	// bl 0x828864f0
	sub_828864F0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r7,r10,-18720
	ctx.r7.s64 = ctx.r10.s64 + -18720;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r8,191
	ctx.r8.s64 = 191;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82887958
	sub_82887958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x828862e8
	sub_828862E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82886628
	sub_82886628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r6,264(r31)
	PPC_STORE_U8(r31.u32 + 264, ctx.r6.u8);
	// bl 0x82886430
	sub_82886430(ctx, base);
loc_8257CA0C:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257ca2c
	if (cr6.eq) goto loc_8257CA2C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ca2c
	if (cr6.eq) goto loc_8257CA2C;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8257CA2C:
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c188
	sub_8257C188(ctx, base);
	// lfs f0,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// bl 0x8257fbe8
	sub_8257FBE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82889820
	sub_82889820(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x828895e8
	sub_828895E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82889880
	sub_82889880(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82889880
	sub_82889880(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// bl 0x822dfc78
	sub_822DFC78(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8257CAA4:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8257cb60
	if (!cr6.eq) goto loc_8257CB60;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257cac8
	if (cr6.eq) goto loc_8257CAC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257cacc
	if (!cr6.eq) goto loc_8257CACC;
loc_8257CAC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257CACC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x8257fc50
	sub_8257FC50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889880
	sub_82889880(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x82889880
	sub_82889880(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8257CB10:
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8257cb60
	if (!cr6.eq) goto loc_8257CB60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82889880
	sub_82889880(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257cb48
	if (cr6.eq) goto loc_8257CB48;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257cb4c
	if (!cr6.eq) goto loc_8257CB4C;
loc_8257CB48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257CB4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x8257fc28
	sub_8257FC28(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
loc_8257CB60:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8257CB6C"))) PPC_WEAK_FUNC(sub_8257CB6C);
PPC_FUNC_IMPL(__imp__sub_8257CB6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257CB70"))) PPC_WEAK_FUNC(sub_8257CB70);
PPC_FUNC_IMPL(__imp__sub_8257CB70) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r9,-18624
	ctx.r3.s64 = ctx.r9.s64 + -18624;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,6240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f31.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8257cc18
	if (cr6.eq) goto loc_8257CC18;
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
	// beq cr6,0x8257cc18
	if (cr6.eq) goto loc_8257CC18;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257cc1c
	if (!cr6.eq) goto loc_8257CC1C;
loc_8257CC18:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8257CC1C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r11,-18652
	ctx.r3.s64 = r11.s64 + -18652;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257ccac
	if (cr6.eq) goto loc_8257CCAC;
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
	// beq cr6,0x8257ccac
	if (cr6.eq) goto loc_8257CCAC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257ccb0
	if (!cr6.eq) goto loc_8257CCB0;
loc_8257CCAC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8257CCB0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// bl 0x828898e0
	sub_828898E0(ctx, base);
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257ce08
	if (!cr6.eq) goto loc_8257CE08;
	// stw r29,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r29.u32);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// bl 0x82889d78
	sub_82889D78(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// li r29,15
	r29.s64 = 15;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8251ea28
	sub_8251EA28(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8257cdb8
	if (cr6.lt) goto loc_8257CDB8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257CDB8:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257cde4
	if (cr6.eq) goto loc_8257CDE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257cde4
	if (cr6.eq) goto loc_8257CDE4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8257CDE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x8257fbf8
	sub_8257FBF8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_8257CE08:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8257CE1C"))) PPC_WEAK_FUNC(sub_8257CE1C);
PPC_FUNC_IMPL(__imp__sub_8257CE1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257CE20"))) PPC_WEAK_FUNC(sub_8257CE20);
PPC_FUNC_IMPL(__imp__sub_8257CE20) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
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

__attribute__((alias("__imp__sub_8257CE6C"))) PPC_WEAK_FUNC(sub_8257CE6C);
PPC_FUNC_IMPL(__imp__sub_8257CE6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CE70"))) PPC_WEAK_FUNC(sub_8257CE70);
PPC_FUNC_IMPL(__imp__sub_8257CE70) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8257ceac
	if (!cr6.eq) goto loc_8257CEAC;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8257cea0
	if (!cr6.lt) goto loc_8257CEA0;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8257CEA0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8257CEAC:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8257cf84
	if (cr6.gt) goto loc_8257CF84;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8257cec4
	if (!cr6.lt) goto loc_8257CEC4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8257CEC4:
	// lwz r26,20(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// blt cr6,0x8257ced8
	if (cr6.lt) goto loc_8257CED8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x8257cedc
	goto loc_8257CEDC;
loc_8257CED8:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8257CEDC:
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// extsb r27,r9
	r27.s64 = ctx.r9.s8;
loc_8257CEE8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x8257cf44
	if (!cr6.eq) goto loc_8257CF44;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8257cf30
	if (cr6.eq) goto loc_8257CF30;
	// add r8,r31,r30
	ctx.r8.u64 = r31.u64 + r30.u64;
loc_8257CF10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8257cf30
	if (!cr0.eq) goto loc_8257CF30;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8257cf10
	if (!cr6.eq) goto loc_8257CF10;
loc_8257CF30:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8257cf44
	if (cr6.lt) goto loc_8257CF44;
	// bgt cr6,0x8257cf44
	if (cr6.gt) goto loc_8257CF44;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8257cf5c
	if (cr6.eq) goto loc_8257CF5C;
loc_8257CF44:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b9180
	sub_822B9180(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x8257cf84
	if (cr6.eq) goto loc_8257CF84;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// b 0x8257cee8
	goto loc_8257CEE8;
loc_8257CF5C:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// blt cr6,0x8257cf74
	if (cr6.lt) goto loc_8257CF74;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r3,r11,r31
	ctx.r3.s64 = r31.s64 - r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8257CF74:
	// mr r11,r28
	r11.u64 = r28.u64;
	// subf r3,r28,r31
	ctx.r3.s64 = r31.s64 - r28.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8257CF84:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8257CF8C"))) PPC_WEAK_FUNC(sub_8257CF8C);
PPC_FUNC_IMPL(__imp__sub_8257CF8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8257CF90"))) PPC_WEAK_FUNC(sub_8257CF90);
PPC_FUNC_IMPL(__imp__sub_8257CF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257cfb8
	if (cr6.eq) goto loc_8257CFB8;
loc_8257CF9C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257cf9c
	if (!cr0.eq) goto loc_8257CF9C;
loc_8257CFB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
}

__attribute__((alias("__imp__sub_8257CFC4"))) PPC_WEAK_FUNC(sub_8257CFC4);
PPC_FUNC_IMPL(__imp__sub_8257CFC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257CFC8"))) PPC_WEAK_FUNC(sub_8257CFC8);
PPC_FUNC_IMPL(__imp__sub_8257CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-18592
	ctx.r9.s64 = ctx.r10.s64 + -18592;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
}

__attribute__((alias("__imp__sub_8257CFFC"))) PPC_WEAK_FUNC(sub_8257CFFC);
PPC_FUNC_IMPL(__imp__sub_8257CFFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D000"))) PPC_WEAK_FUNC(sub_8257D000);
PPC_FUNC_IMPL(__imp__sub_8257D000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,-18592
	ctx.r10.s64 = r11.s64 + -18592;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d044
	if (cr6.eq) goto loc_8257D044;
loc_8257D028:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257d028
	if (!cr0.eq) goto loc_8257D028;
loc_8257D044:
	// li r29,0
	r29.s64 = 0;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257d064
	if (cr6.lt) goto loc_8257D064;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257D064:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// li r28,15
	r28.s64 = 15;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257d08c
	if (cr6.lt) goto loc_8257D08C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257D08C:
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257D09C"))) PPC_WEAK_FUNC(sub_8257D09C);
PPC_FUNC_IMPL(__imp__sub_8257D09C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257D0A0"))) PPC_WEAK_FUNC(sub_8257D0A0);
PPC_FUNC_IMPL(__imp__sub_8257D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
loc_8257D0C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257d0c8
	if (!cr6.eq) goto loc_8257D0C8;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8257D0F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257d0f8
	if (!cr6.eq) goto loc_8257D0F8;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,-1
	r31.s64 = -1;
	// addi r25,r11,-18588
	r25.s64 = r11.s64 + -18588;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257ce70
	sub_8257CE70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257d208
	if (cr6.eq) goto loc_8257D208;
	// li r26,15
	r26.s64 = 15;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251ea28
	sub_8251EA28(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257d198
	if (cr6.lt) goto loc_8257D198;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257D198:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r4,r11,22564
	ctx.r4.s64 = r11.s64 + 22564;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257ce70
	sub_8257CE70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257d1e8
	if (cr6.eq) goto loc_8257D1E8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822def30
	sub_822DEF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
loc_8257D1E8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822def30
	sub_822DEF30(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
loc_8257D208:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8257d21c
	if (cr6.eq) goto loc_8257D21C;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8288a110
	sub_8288A110(ctx, base);
	// stw r23,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r23.u32);
loc_8257D21C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,10608
	ctx.r3.s64 = r11.s64 + 10608;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29820(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29820);
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d26c
	if (cr6.eq) goto loc_8257D26C;
loc_8257D250:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257d250
	if (!cr0.eq) goto loc_8257D250;
loc_8257D26C:
	// stw r10,64(r29)
	PPC_STORE_U32(r29.u32 + 64, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d294
	if (cr6.eq) goto loc_8257D294;
loc_8257D278:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257d278
	if (!cr0.eq) goto loc_8257D278;
loc_8257D294:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d2bc
	if (cr6.eq) goto loc_8257D2BC;
loc_8257D2A0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257d2a0
	if (!cr0.eq) goto loc_8257D2A0;
loc_8257D2BC:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// lwz r3,64(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// bl 0x823996d0
	sub_823996D0(ctx, base);
	// stw r3,68(r29)
	PPC_STORE_U32(r29.u32 + 68, ctx.r3.u32);
	// stw r24,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r24.u32);
	// li r31,1
	r31.s64 = 1;
	// lwz r11,104(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 104);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d2f0
	if (cr6.eq) goto loc_8257D2F0;
	// stw r31,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r31.u32);
	// b 0x8257d390
	goto loc_8257D390;
loc_8257D2F0:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d304
	if (cr6.eq) goto loc_8257D304;
	// stw r30,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r30.u32);
	// b 0x8257d390
	goto loc_8257D390;
loc_8257D304:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d318
	if (cr6.eq) goto loc_8257D318;
	// li r11,3
	r11.s64 = 3;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D318:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d32c
	if (cr6.eq) goto loc_8257D32C;
	// li r11,4
	r11.s64 = 4;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D32C:
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d340
	if (cr6.eq) goto loc_8257D340;
	// li r11,5
	r11.s64 = 5;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D340:
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d354
	if (cr6.eq) goto loc_8257D354;
	// li r11,6
	r11.s64 = 6;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D354:
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d368
	if (cr6.eq) goto loc_8257D368;
	// li r11,7
	r11.s64 = 7;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D368:
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257d37c
	if (cr6.eq) goto loc_8257D37C;
	// li r11,8
	r11.s64 = 8;
	// b 0x8257d38c
	goto loc_8257D38C;
loc_8257D37C:
	// rlwinm r11,r11,0,5,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d390
	if (cr6.eq) goto loc_8257D390;
	// li r11,9
	r11.s64 = 9;
loc_8257D38C:
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
loc_8257D390:
	// stw r24,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r24.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82889c20
	sub_82889C20(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8257d3c0
	if (cr6.lt) goto loc_8257D3C0;
	// beq cr6,0x8257d3b8
	if (cr6.eq) goto loc_8257D3B8;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x8257d3c4
	if (!cr6.lt) goto loc_8257D3C4;
	// stw r30,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r30.u32);
	// b 0x8257d3c4
	goto loc_8257D3C4;
loc_8257D3B8:
	// stw r24,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r24.u32);
	// b 0x8257d3c4
	goto loc_8257D3C4;
loc_8257D3C0:
	// stw r31,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r31.u32);
loc_8257D3C4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82889c20
	sub_82889C20(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8257D3D8"))) PPC_WEAK_FUNC(sub_8257D3D8);
PPC_FUNC_IMPL(__imp__sub_8257D3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8257D3DC"))) PPC_WEAK_FUNC(sub_8257D3DC);
PPC_FUNC_IMPL(__imp__sub_8257D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D3E0"))) PPC_WEAK_FUNC(sub_8257D3E0);
PPC_FUNC_IMPL(__imp__sub_8257D3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// beq cr6,0x8257d5b4
	if (cr6.eq) goto loc_8257D5B4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82889a98
	sub_82889A98(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// ble cr6,0x8257d50c
	if (!cr6.gt) goto loc_8257D50C;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// li r24,15
	r24.s64 = 15;
loc_8257D430:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82889908
	sub_82889908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d500
	if (cr6.eq) goto loc_8257D500;
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8288a008
	sub_8288A008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x8257d500
	if (!cr6.eq) goto loc_8257D500;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8257d628
	sub_8257D628(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8257d490
	if (!cr6.lt) goto loc_8257D490;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8257D490:
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,21540(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 21540);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d4cc
	if (cr6.eq) goto loc_8257D4CC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x82328a98
	sub_82328A98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8257d4d0
	goto loc_8257D4D0;
loc_8257D4CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8257D4D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8288a088
	sub_8288A088(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257d4f4
	if (cr6.lt) goto loc_8257D4F4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257D4F4:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
loc_8257D500:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x8257d430
	if (cr6.lt) goto loc_8257D430;
loc_8257D50C:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d568
	if (cr6.eq) goto loc_8257D568;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82889ab0
	sub_82889AB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8257d568
	if (!cr6.gt) goto loc_8257D568;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828899e0
	sub_828899E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d568
	if (cr6.eq) goto loc_8257D568;
	// bl 0x8288a008
	sub_8288A008(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,64(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823996d8
	sub_823996D8(ctx, base);
	// stw r3,68(r25)
	PPC_STORE_U32(r25.u32 + 68, ctx.r3.u32);
loc_8257D568:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828898e8
	sub_828898E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d5b4
	if (cr6.eq) goto loc_8257D5B4;
	// bl 0x828865b0
	sub_828865B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d5b4
	if (cr6.eq) goto loc_8257D5B4;
loc_8257D590:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8257d3e0
	sub_8257D3E0(ctx, base);
	// bl 0x828865c0
	sub_828865C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257d590
	if (!cr6.eq) goto loc_8257D590;
loc_8257D5B4:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8257D5C0"))) PPC_WEAK_FUNC(sub_8257D5C0);
PPC_FUNC_IMPL(__imp__sub_8257D5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8257D5C4"))) PPC_WEAK_FUNC(sub_8257D5C4);
PPC_FUNC_IMPL(__imp__sub_8257D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D5C8"))) PPC_WEAK_FUNC(sub_8257D5C8);
PPC_FUNC_IMPL(__imp__sub_8257D5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,1
	ctx.r5.s64 = 1;
}

__attribute__((alias("__imp__sub_8257D5D0"))) PPC_WEAK_FUNC(sub_8257D5D0);
PPC_FUNC_IMPL(__imp__sub_8257D5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257d3e0
	sub_8257D3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D5D4"))) PPC_WEAK_FUNC(sub_8257D5D4);
PPC_FUNC_IMPL(__imp__sub_8257D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D5D8"))) PPC_WEAK_FUNC(sub_8257D5D8);
PPC_FUNC_IMPL(__imp__sub_8257D5D8) {
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
	// bl 0x8257d000
	sub_8257D000(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d610
	if (cr6.eq) goto loc_8257D610;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257D610:
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

__attribute__((alias("__imp__sub_8257D624"))) PPC_WEAK_FUNC(sub_8257D624);
PPC_FUNC_IMPL(__imp__sub_8257D624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D628"))) PPC_WEAK_FUNC(sub_8257D628);
PPC_FUNC_IMPL(__imp__sub_8257D628) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_8257D660:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257d660
	if (!cr6.eq) goto loc_8257D660;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r29,32
	ctx.r5.s64 = r29.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250d468
	sub_8250D468(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251ea28
	sub_8251EA28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8257d6cc
	if (cr6.lt) goto loc_8257D6CC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257D6CC:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257D6DC"))) PPC_WEAK_FUNC(sub_8257D6DC);
PPC_FUNC_IMPL(__imp__sub_8257D6DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257D6E0"))) PPC_WEAK_FUNC(sub_8257D6E0);
PPC_FUNC_IMPL(__imp__sub_8257D6E0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82889a98
	sub_82889A98(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r31,r27
	r31.u64 = r27.u64;
	// ble cr6,0x8257d754
	if (!cr6.gt) goto loc_8257D754;
loc_8257D710:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82889908
	sub_82889908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d748
	if (cr6.eq) goto loc_8257D748;
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257d748
	if (!cr6.eq) goto loc_8257D748;
	// lwz r11,100(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r28)
	PPC_STORE_U32(r28.u32 + 100, r11.u32);
loc_8257D748:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8257d710
	if (cr6.lt) goto loc_8257D710;
loc_8257D754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8257D758"))) PPC_WEAK_FUNC(sub_8257D758);
PPC_FUNC_IMPL(__imp__sub_8257D758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8257D75C"))) PPC_WEAK_FUNC(sub_8257D75C);
PPC_FUNC_IMPL(__imp__sub_8257D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D760"))) PPC_WEAK_FUNC(sub_8257D760);
PPC_FUNC_IMPL(__imp__sub_8257D760) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257d834
	if (cr6.eq) goto loc_8257D834;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8257d834
	if (cr6.eq) goto loc_8257D834;
	// bl 0x8257d6e0
	sub_8257D6E0(ctx, base);
	// lwz r11,92(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x828898e8
	sub_828898E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d834
	if (cr6.eq) goto loc_8257D834;
	// bl 0x828865b0
	sub_828865B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d834
	if (cr6.eq) goto loc_8257D834;
	// li r28,0
	r28.s64 = 0;
loc_8257D7C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82889a98
	sub_82889A98(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8257d81c
	if (!cr6.gt) goto loc_8257D81C;
loc_8257D7D8:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82889908
	sub_82889908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d810
	if (cr6.eq) goto loc_8257D810;
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8257d810
	if (!cr6.eq) goto loc_8257D810;
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,100(r27)
	PPC_STORE_U32(r27.u32 + 100, r11.u32);
loc_8257D810:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8257d7d8
	if (cr6.lt) goto loc_8257D7D8;
loc_8257D81C:
	// bl 0x828865c0
	sub_828865C0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257d7c0
	if (!cr6.eq) goto loc_8257D7C0;
loc_8257D834:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8257D838"))) PPC_WEAK_FUNC(sub_8257D838);
PPC_FUNC_IMPL(__imp__sub_8257D838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8257D83C"))) PPC_WEAK_FUNC(sub_8257D83C);
PPC_FUNC_IMPL(__imp__sub_8257D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D840"))) PPC_WEAK_FUNC(sub_8257D840);
PPC_FUNC_IMPL(__imp__sub_8257D840) {
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
	// bl 0x826d8218
	sub_826D8218(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-18580
	ctx.r9.s64 = ctx.r10.s64 + -18580;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257D894"))) PPC_WEAK_FUNC(sub_8257D894);
PPC_FUNC_IMPL(__imp__sub_8257D894) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D898"))) PPC_WEAK_FUNC(sub_8257D898);
PPC_FUNC_IMPL(__imp__sub_8257D898) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8257d924
	if (cr6.eq) goto loc_8257D924;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-18536
	ctx.r7.s64 = ctx.r10.s64 + -18536;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257d90c
	if (cr6.eq) goto loc_8257D90C;
	// bl 0x8257cfc8
	sub_8257CFC8(ctx, base);
	// b 0x8257d910
	goto loc_8257D910;
loc_8257D90C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257D910:
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8257d0a0
	sub_8257D0A0(ctx, base);
loc_8257D924:
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

__attribute__((alias("__imp__sub_8257D938"))) PPC_WEAK_FUNC(sub_8257D938);
PPC_FUNC_IMPL(__imp__sub_8257D938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D93C"))) PPC_WEAK_FUNC(sub_8257D93C);
PPC_FUNC_IMPL(__imp__sub_8257D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D940"))) PPC_WEAK_FUNC(sub_8257D940);
PPC_FUNC_IMPL(__imp__sub_8257D940) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
}

__attribute__((alias("__imp__sub_8257D948"))) PPC_WEAK_FUNC(sub_8257D948);
PPC_FUNC_IMPL(__imp__sub_8257D948) {
	PPC_FUNC_PROLOGUE();
	// b 0x8278eb18
	sub_8278EB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D94C"))) PPC_WEAK_FUNC(sub_8257D94C);
PPC_FUNC_IMPL(__imp__sub_8257D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D950"))) PPC_WEAK_FUNC(sub_8257D950);
PPC_FUNC_IMPL(__imp__sub_8257D950) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, r11.u8);
	// addi r5,r9,13435
	ctx.r5.s64 = ctx.r9.s64 + 13435;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
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

__attribute__((alias("__imp__sub_8257D99C"))) PPC_WEAK_FUNC(sub_8257D99C);
PPC_FUNC_IMPL(__imp__sub_8257D99C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D9A0"))) PPC_WEAK_FUNC(sub_8257D9A0);
PPC_FUNC_IMPL(__imp__sub_8257D9A0) {
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
	// lis r11,-32146
	r11.s64 = -2106720256;
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-29624
	ctx.r9.s64 = r11.s64 + -29624;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,22232(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22232);
	// bl 0x826d97c8
	sub_826D97C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8257D9E0"))) PPC_WEAK_FUNC(sub_8257D9E0);
PPC_FUNC_IMPL(__imp__sub_8257D9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D9E4"))) PPC_WEAK_FUNC(sub_8257D9E4);
PPC_FUNC_IMPL(__imp__sub_8257D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257D9E8"))) PPC_WEAK_FUNC(sub_8257D9E8);
PPC_FUNC_IMPL(__imp__sub_8257D9E8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257da30
	if (cr6.eq) goto loc_8257DA30;
	// bl 0x8257cf90
	sub_8257CF90(ctx, base);
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257da2c
	if (cr6.eq) goto loc_8257DA2C;
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
loc_8257DA2C:
	// stw r29,92(r27)
	PPC_STORE_U32(r27.u32 + 92, r29.u32);
loc_8257DA30:
	// lwz r11,104(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257da94
	if (cr6.eq) goto loc_8257DA94;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r26,r11,-4
	r26.s64 = r11.s64 + -4;
	// mulli r10,r9,156
	ctx.r10.s64 = ctx.r9.s64 * 156;
	// addic. r30,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r30.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// blt 0x8257da88
	if (cr0.lt) goto loc_8257DA88;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// li r28,15
	r28.s64 = 15;
loc_8257DA5C:
	// addi r31,r31,-156
	r31.s64 = r31.s64 + -156;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257da74
	if (cr6.lt) goto loc_8257DA74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257DA74:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// bge 0x8257da5c
	if (!cr0.lt) goto loc_8257DA5C;
loc_8257DA88:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r29,104(r27)
	PPC_STORE_U32(r27.u32 + 104, r29.u32);
loc_8257DA94:
	// stw r29,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d7d78
	sub_826D7D78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8257DAA4"))) PPC_WEAK_FUNC(sub_8257DAA4);
PPC_FUNC_IMPL(__imp__sub_8257DAA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8257DAA8"))) PPC_WEAK_FUNC(sub_8257DAA8);
PPC_FUNC_IMPL(__imp__sub_8257DAA8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257dad0
	if (cr6.eq) goto loc_8257DAD0;
	// bl 0x8257d5c8
	sub_8257D5C8(ctx, base);
	// lwz r11,92(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 92);
	// stw r11,84(r26)
	PPC_STORE_U32(r26.u32 + 84, r11.u32);
loc_8257DAD0:
	// lwz r11,104(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257db38
	if (cr6.eq) goto loc_8257DB38;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r27,r11,-4
	r27.s64 = r11.s64 + -4;
	// li r29,0
	r29.s64 = 0;
	// mulli r10,r9,156
	ctx.r10.s64 = ctx.r9.s64 * 156;
	// addic. r30,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r30.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// blt 0x8257db2c
	if (cr0.lt) goto loc_8257DB2C;
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// li r28,15
	r28.s64 = 15;
loc_8257DB00:
	// addi r31,r31,-156
	r31.s64 = r31.s64 + -156;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257db18
	if (cr6.lt) goto loc_8257DB18;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257DB18:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// bge 0x8257db00
	if (!cr0.lt) goto loc_8257DB00;
loc_8257DB2C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r29,104(r26)
	PPC_STORE_U32(r26.u32 + 104, r29.u32);
loc_8257DB38:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d7d60
	sub_826D7D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8257DB44"))) PPC_WEAK_FUNC(sub_8257DB44);
PPC_FUNC_IMPL(__imp__sub_8257DB44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8257DB48"))) PPC_WEAK_FUNC(sub_8257DB48);
PPC_FUNC_IMPL(__imp__sub_8257DB48) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82889a98
	sub_82889A98(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8257dc4c
	if (!cr6.gt) goto loc_8257DC4C;
	// li r24,15
	r24.s64 = 15;
loc_8257DB8C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82889908
	sub_82889908(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257dc40
	if (cr6.eq) goto loc_8257DC40;
	// bl 0x82889ff8
	sub_82889FF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8288a008
	sub_8288A008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8257dc40
	if (!cr6.eq) goto loc_8257DC40;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mulli r11,r11,156
	r11.s64 = r11.s64 * 156;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8257d628
	sub_8257D628(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8257dc00
	if (cr6.lt) goto loc_8257DC00;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8257dc04
	goto loc_8257DC04;
loc_8257DC00:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8257DC04:
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8257dc24
	if (cr6.lt) goto loc_8257DC24;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8257DC24:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8257DC40:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// blt cr6,0x8257db8c
	if (cr6.lt) goto loc_8257DB8C;
loc_8257DC4C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8257DC58"))) PPC_WEAK_FUNC(sub_8257DC58);
PPC_FUNC_IMPL(__imp__sub_8257DC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8257DC5C"))) PPC_WEAK_FUNC(sub_8257DC5C);
PPC_FUNC_IMPL(__imp__sub_8257DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DC60"))) PPC_WEAK_FUNC(sub_8257DC60);
PPC_FUNC_IMPL(__imp__sub_8257DC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x8257d760
	sub_8257D760(ctx, base);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257dc9c
	if (!cr6.gt) goto loc_8257DC9C;
loc_8257DC84:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8257dc84
	if (cr6.gt) goto loc_8257DC84;
loc_8257DC9C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r4,100(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 100);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8257dcc0
	if (!cr6.gt) goto loc_8257DCC0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257DCC0:
	// lwz r31,100(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 100);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257ddf4
	if (!cr6.gt) goto loc_8257DDF4;
	// lis r11,420
	r11.s64 = 27525120;
	// ori r10,r11,6721
	ctx.r10.u64 = r11.u64 | 6721;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8257dcf0
	if (cr6.gt) goto loc_8257DCF0;
	// mulli r11,r31,156
	r11.s64 = r31.s64 * 156;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8257dcf4
	if (!cr6.gt) goto loc_8257DCF4;
loc_8257DCF0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8257DCF4:
	// li r29,0
	r29.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r7,r10,-18536
	ctx.r7.s64 = ctx.r10.s64 + -18536;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r8,167
	ctx.r8.s64 = 167;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rldicr r6,r29,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257dd7c
	if (cr6.eq) goto loc_8257DD7C;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addic. r30,r31,-1
	xer.ca = r31.u32 > 0;
	r30.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// blt 0x8257dd78
	if (cr0.lt) goto loc_8257DD78;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r27,15
	r27.s64 = 15;
	// addi r28,r11,13435
	r28.s64 = r11.s64 + 13435;
loc_8257DD50:
	// stw r27,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r27.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r29,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
	// bge 0x8257dd50
	if (!cr0.lt) goto loc_8257DD50;
loc_8257DD78:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8257DD7C:
	// lwz r11,92(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 92);
	// stw r29,104(r24)
	PPC_STORE_U32(r24.u32 + 104, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257ddf4
	if (cr6.eq) goto loc_8257DDF4;
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8257ddf4
	if (cr6.eq) goto loc_8257DDF4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257db48
	sub_8257DB48(ctx, base);
	// lwz r11,92(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 92);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x828898e8
	sub_828898E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ddf4
	if (cr6.eq) goto loc_8257DDF4;
	// bl 0x828865b0
	sub_828865B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ddf4
	if (cr6.eq) goto loc_8257DDF4;
loc_8257DDD0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257db48
	sub_8257DB48(ctx, base);
	// bl 0x828865c0
	sub_828865C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828865d8
	sub_828865D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257ddd0
	if (!cr6.eq) goto loc_8257DDD0;
loc_8257DDF4:
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r3,r24,12
	ctx.r3.s64 = r24.s64 + 12;
	// lwz r11,20(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8257de18
	if (!cr6.gt) goto loc_8257DE18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257DE18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8257DE1C"))) PPC_WEAK_FUNC(sub_8257DE1C);
PPC_FUNC_IMPL(__imp__sub_8257DE1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8257DE20"))) PPC_WEAK_FUNC(sub_8257DE20);
PPC_FUNC_IMPL(__imp__sub_8257DE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1416
	ctx.r3.s64 = ctx.r10.s64 + 1416;
	// b 0x828e9620
	sub_828E9620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DE34"))) PPC_WEAK_FUNC(sub_8257DE34);
PPC_FUNC_IMPL(__imp__sub_8257DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DE38"))) PPC_WEAK_FUNC(sub_8257DE38);
PPC_FUNC_IMPL(__imp__sub_8257DE38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8257de58
	if (!cr6.gt) goto loc_8257DE58;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8257DE58:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE6C"))) PPC_WEAK_FUNC(sub_8257DE6C);
PPC_FUNC_IMPL(__imp__sub_8257DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DE70"))) PPC_WEAK_FUNC(sub_8257DE70);
PPC_FUNC_IMPL(__imp__sub_8257DE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE78"))) PPC_WEAK_FUNC(sub_8257DE78);
PPC_FUNC_IMPL(__imp__sub_8257DE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE80"))) PPC_WEAK_FUNC(sub_8257DE80);
PPC_FUNC_IMPL(__imp__sub_8257DE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE88"))) PPC_WEAK_FUNC(sub_8257DE88);
PPC_FUNC_IMPL(__imp__sub_8257DE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE90"))) PPC_WEAK_FUNC(sub_8257DE90);
PPC_FUNC_IMPL(__imp__sub_8257DE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DE98"))) PPC_WEAK_FUNC(sub_8257DE98);
PPC_FUNC_IMPL(__imp__sub_8257DE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DEC0"))) PPC_WEAK_FUNC(sub_8257DEC0);
PPC_FUNC_IMPL(__imp__sub_8257DEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DEEC"))) PPC_WEAK_FUNC(sub_8257DEEC);
PPC_FUNC_IMPL(__imp__sub_8257DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DEF0"))) PPC_WEAK_FUNC(sub_8257DEF0);
PPC_FUNC_IMPL(__imp__sub_8257DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF04"))) PPC_WEAK_FUNC(sub_8257DF04);
PPC_FUNC_IMPL(__imp__sub_8257DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DF08"))) PPC_WEAK_FUNC(sub_8257DF08);
PPC_FUNC_IMPL(__imp__sub_8257DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 1932, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 1924, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 1928, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DF58"))) PPC_WEAK_FUNC(sub_8257DF58);
PPC_FUNC_IMPL(__imp__sub_8257DF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825d7180
	sub_825D7180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DF84"))) PPC_WEAK_FUNC(sub_8257DF84);
PPC_FUNC_IMPL(__imp__sub_8257DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257DF88"))) PPC_WEAK_FUNC(sub_8257DF88);
PPC_FUNC_IMPL(__imp__sub_8257DF88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,2088
	r30.s64 = ctx.r3.s64 + 2088;
	// li r31,3
	r31.s64 = 3;
loc_8257DFA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// bne 0x8257dfa0
	if (!cr0.eq) goto loc_8257DFA0;
	// bl 0x8288b6a8
	sub_8288B6A8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257dfd0
	if (cr6.eq) goto loc_8257DFD0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8257DFD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257DFD4"))) PPC_WEAK_FUNC(sub_8257DFD4);
PPC_FUNC_IMPL(__imp__sub_8257DFD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257DFD8"))) PPC_WEAK_FUNC(sub_8257DFD8);
PPC_FUNC_IMPL(__imp__sub_8257DFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lwz r11,2084(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2084);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// subf r3,r7,r11
	ctx.r3.s64 = r11.s64 - ctx.r7.s64;
	// stw r3,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, ctx.r3.u32);
	// mulli r11,r3,60
	r11.s64 = ctx.r3.s64 * 60;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,2088
	ctx.r3.s64 = r11.s64 + 2088;
	// bl 0x827159a8
	sub_827159A8(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// addi r9,r11,-21300
	ctx.r9.s64 = r11.s64 + -21300;
	// addi r8,r10,-21248
	ctx.r8.s64 = ctx.r10.s64 + -21248;
	// addi r28,r29,-21316
	r28.s64 = r29.s64 + -21316;
	// lfs f0,-21300(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21300);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,-21248(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -21248, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,-21316(r29)
	PPC_STORE_U32(r29.u32 + -21316, r30.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f11,12(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82887b20
	sub_82887B20(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-21316(r29)
	PPC_STORE_U32(r29.u32 + -21316, r11.u32);
	// lwz r6,2084(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 2084);
	// mulli r11,r6,60
	r11.s64 = ctx.r6.s64 * 60;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,2088
	ctx.r3.s64 = r11.s64 + 2088;
	// bl 0x82715a18
	sub_82715A18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8257E0C8"))) PPC_WEAK_FUNC(sub_8257E0C8);
PPC_FUNC_IMPL(__imp__sub_8257E0C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257E0CC"))) PPC_WEAK_FUNC(sub_8257E0CC);
PPC_FUNC_IMPL(__imp__sub_8257E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E0D0"))) PPC_WEAK_FUNC(sub_8257E0D0);
PPC_FUNC_IMPL(__imp__sub_8257E0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r29,r3,2088
	r29.s64 = ctx.r3.s64 + 2088;
	// li r30,2
	r30.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_8257E10C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// bge 0x8257e10c
	if (!cr0.lt) goto loc_8257E10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257E128"))) PPC_WEAK_FUNC(sub_8257E128);
PPC_FUNC_IMPL(__imp__sub_8257E128) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257E12C"))) PPC_WEAK_FUNC(sub_8257E12C);
PPC_FUNC_IMPL(__imp__sub_8257E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E130"))) PPC_WEAK_FUNC(sub_8257E130);
PPC_FUNC_IMPL(__imp__sub_8257E130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r3,2268
	r31.s64 = ctx.r3.s64 + 2268;
	// li r30,2
	r30.s64 = 2;
loc_8257E148:
	// addi r31,r31,-60
	r31.s64 = r31.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8257e148
	if (!cr0.lt) goto loc_8257E148;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8257E16C:
	// lwzu r10,-4(r11)
	ea = -4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e194
	if (cr6.eq) goto loc_8257E194;
loc_8257E178:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8257e178
	if (!cr0.eq) goto loc_8257E178;
loc_8257E194:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bdnz 0x8257e16c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8257E16C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257E1A0"))) PPC_WEAK_FUNC(sub_8257E1A0);
PPC_FUNC_IMPL(__imp__sub_8257E1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257E1A4"))) PPC_WEAK_FUNC(sub_8257E1A4);
PPC_FUNC_IMPL(__imp__sub_8257E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257E1A8"))) PPC_WEAK_FUNC(sub_8257E1A8);
PPC_FUNC_IMPL(__imp__sub_8257E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,22228(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8288b8d0
	sub_8288B8D0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8288b2c8
	sub_8288B2C8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// addi r8,r10,-18304
	ctx.r8.s64 = ctx.r10.s64 + -18304;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r9,121
	ctx.r9.s64 = 121;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8288b4f0
	sub_8288B4F0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// stw r30,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r30.u32);
	// addi r29,r11,-21312
	r29.s64 = r11.s64 + -21312;
	// li r11,5120
	r11.s64 = 5120;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r27,r31,2088
	r27.s64 = r31.s64 + 2088;
	// li r28,3
	r28.s64 = 3;
	// stw r5,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r5.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x8257e274
	goto loc_8257E274;
loc_8257E270:
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_8257E274:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82715730
	sub_82715730(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,60
	r27.s64 = r27.s64 + 60;
	// bne 0x8257e270
	if (!cr0.eq) goto loc_8257E270;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-18324
	ctx.r3.s64 = ctx.r10.s64 + -18324;
	// lwz r29,30236(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e2e8
	if (cr6.eq) goto loc_8257E2E8;
loc_8257E2CC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e2cc
	if (!cr0.eq) goto loc_8257E2CC;
loc_8257E2E8:
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e310
	if (cr6.eq) goto loc_8257E310;
loc_8257E2F4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e2f4
	if (!cr0.eq) goto loc_8257E2F4;
loc_8257E310:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e338
	if (cr6.eq) goto loc_8257E338;
loc_8257E31C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e31c
	if (!cr0.eq) goto loc_8257E31C;
loc_8257E338:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18348
	ctx.r3.s64 = r11.s64 + -18348;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e388
	if (cr6.eq) goto loc_8257E388;
loc_8257E36C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e36c
	if (!cr0.eq) goto loc_8257E36C;
loc_8257E388:
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e3b0
	if (cr6.eq) goto loc_8257E3B0;
loc_8257E394:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e394
	if (!cr0.eq) goto loc_8257E394;
loc_8257E3B0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e3d8
	if (cr6.eq) goto loc_8257E3D8;
loc_8257E3BC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e3bc
	if (!cr0.eq) goto loc_8257E3BC;
loc_8257E3D8:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18368
	ctx.r3.s64 = r11.s64 + -18368;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e428
	if (cr6.eq) goto loc_8257E428;
loc_8257E40C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e40c
	if (!cr0.eq) goto loc_8257E40C;
loc_8257E428:
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e450
	if (cr6.eq) goto loc_8257E450;
loc_8257E434:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e434
	if (!cr0.eq) goto loc_8257E434;
loc_8257E450:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e478
	if (cr6.eq) goto loc_8257E478;
loc_8257E45C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e45c
	if (!cr0.eq) goto loc_8257E45C;
loc_8257E478:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18388
	ctx.r3.s64 = r11.s64 + -18388;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e4c8
	if (cr6.eq) goto loc_8257E4C8;
loc_8257E4AC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e4ac
	if (!cr0.eq) goto loc_8257E4AC;
loc_8257E4C8:
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e4f0
	if (cr6.eq) goto loc_8257E4F0;
loc_8257E4D4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e4d4
	if (!cr0.eq) goto loc_8257E4D4;
loc_8257E4F0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e518
	if (cr6.eq) goto loc_8257E518;
loc_8257E4FC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e4fc
	if (!cr0.eq) goto loc_8257E4FC;
loc_8257E518:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18408
	ctx.r3.s64 = r11.s64 + -18408;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e568
	if (cr6.eq) goto loc_8257E568;
loc_8257E54C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e54c
	if (!cr0.eq) goto loc_8257E54C;
loc_8257E568:
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e590
	if (cr6.eq) goto loc_8257E590;
loc_8257E574:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e574
	if (!cr0.eq) goto loc_8257E574;
loc_8257E590:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e5b8
	if (cr6.eq) goto loc_8257E5B8;
loc_8257E59C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e59c
	if (!cr0.eq) goto loc_8257E59C;
loc_8257E5B8:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18428
	ctx.r3.s64 = r11.s64 + -18428;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e608
	if (cr6.eq) goto loc_8257E608;
loc_8257E5EC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e5ec
	if (!cr0.eq) goto loc_8257E5EC;
loc_8257E608:
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e630
	if (cr6.eq) goto loc_8257E630;
loc_8257E614:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e614
	if (!cr0.eq) goto loc_8257E614;
loc_8257E630:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e658
	if (cr6.eq) goto loc_8257E658;
loc_8257E63C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e63c
	if (!cr0.eq) goto loc_8257E63C;
loc_8257E658:
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18448
	ctx.r3.s64 = r11.s64 + -18448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e6a8
	if (cr6.eq) goto loc_8257E6A8;
loc_8257E68C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8257e68c
	if (!cr0.eq) goto loc_8257E68C;
loc_8257E6A8:
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257e6d0
	if (cr6.eq) goto loc_8257E6D0;
loc_8257E6B4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e6b4
	if (!cr0.eq) goto loc_8257E6B4;
loc_8257E6D0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e6f8
	if (cr6.eq) goto loc_8257E6F8;
loc_8257E6DC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8257e6dc
	if (!cr0.eq) goto loc_8257E6DC;
loc_8257E6F8:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,22228(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8257E70C"))) PPC_WEAK_FUNC(sub_8257E70C);
PPC_FUNC_IMPL(__imp__sub_8257E70C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8257E710"))) PPC_WEAK_FUNC(sub_8257E710);
PPC_FUNC_IMPL(__imp__sub_8257E710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93fc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eaad4
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// beq cr6,0x8257ed64
	if (cr6.eq) goto loc_8257ED64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82388f88
	sub_82388F88(ctx, base);
	// lis r25,-31968
	r25.s64 = -2095054848;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,18224(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257e770
	if (cr6.eq) goto loc_8257E770;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257e774
	if (!cr6.eq) goto loc_8257E774;
loc_8257E770:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8257E774:
	// addi r4,r11,160
	ctx.r4.s64 = r11.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82388f78
	sub_82388F78(ctx, base);
	// stw r27,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r27.u32);
	// lwz r3,18224(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257e7a0
	if (cr6.eq) goto loc_8257E7A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne cr6,0x8257e7a4
	if (!cr6.eq) goto loc_8257E7A4;
loc_8257E7A0:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8257E7A4:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257e83c
	if (!cr6.gt) goto loc_8257E83C;
	// addi r31,r26,52
	r31.s64 = r26.s64 + 52;
loc_8257E7B8:
	// addi r29,r31,-36
	r29.s64 = r31.s64 + -36;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823890f8
	sub_823890F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257e828
	if (cr6.eq) goto loc_8257E828;
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fsubs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + r24.u32, r29.u32);
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,32(r24)
	PPC_STORE_U32(r24.u32 + 32, ctx.r9.u32);
loc_8257E828:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8257e7b8
	if (cr6.lt) goto loc_8257E7B8;
loc_8257E83C:
	// lis r11,-32168
	r11.s64 = -2108162048;
	// lwz r4,32(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// addi r31,r24,36
	r31.s64 = r24.s64 + 36;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-8648
	ctx.r6.s64 = r11.s64 + -8648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ed888
	sub_828ED888(ctx, base);
	// lwz r3,18224(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257e874
	if (cr6.eq) goto loc_8257E874;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257e878
	if (!cr6.eq) goto loc_8257E878;
loc_8257E874:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8257E878:
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82388a08
	sub_82388A08(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r21,3
	r21.s64 = 3;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// bl 0x825d7370
	sub_825D7370(ctx, base);
	// lwz r11,2084(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2084);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// addi r4,r11,2088
	ctx.r4.s64 = r11.s64 + 2088;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8257ed64
	if (!cr6.gt) goto loc_8257ED64;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f27,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f27.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f31,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f31.f64 = double(temp.f32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f30.f64 = double(temp.f32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// lfs f29,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f29.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f26,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f26.f64 = double(temp.f32);
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lfs f25,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f25.f64 = double(temp.f32);
	// lfs f24,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f24.f64 = double(temp.f32);
	// mr r23,r31
	r23.u64 = r31.u64;
	// lfs f23,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f23.f64 = double(temp.f32);
	// rldicr r26,r6,36,63
	r26.u64 = __builtin_rotateleft64(ctx.r6.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// lfs f22,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f22.f64 = double(temp.f32);
	// addi r29,r11,1676
	r29.s64 = r11.s64 + 1676;
	// lfs f21,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f21.f64 = double(temp.f32);
	// addi r28,r10,1692
	r28.s64 = ctx.r10.s64 + 1692;
	// lfs f20,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f20.f64 = double(temp.f32);
	// addi r27,r9,1708
	r27.s64 = ctx.r9.s64 + 1708;
	// lfs f19,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f19.f64 = double(temp.f32);
	// addi r25,r8,1744
	r25.s64 = ctx.r8.s64 + 1744;
	// lfs f28,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f28.f64 = double(temp.f32);
loc_8257E944:
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8257ec28
	if (cr6.gt) goto loc_8257EC28;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8257e9e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257E9E0;
	// bdzf 4*cr6+eq,0x8257ea44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257EA44;
	// bdzf 4*cr6+eq,0x8257eaa8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257EAA8;
	// bdzf 4*cr6+eq,0x8257eb0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257EB0C;
	// bdzf 4*cr6+eq,0x8257eb58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257EB58;
	// bdzf 4*cr6+eq,0x8257eba4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8257EBA4;
	// bne cr6,0x8257ebf0
	if (!cr6.eq) goto loc_8257EBF0;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f11,268(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f7,284(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f6,288(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f4,296(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f3,300(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// b 0x8257ec58
	goto loc_8257EC58;
loc_8257E9E0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f11,268(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f7,284(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f6,288(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f4,296(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f3,300(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// b 0x8257ec58
	goto loc_8257EC58;
loc_8257EA44:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f11,268(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f7,284(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f6,288(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f5,292(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f4,296(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f3,300(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// b 0x8257ec58
	goto loc_8257EC58;
loc_8257EAA8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f28,268(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,272(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f11,276(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f10,280(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f8,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f28,300(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f8,288(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f7,292(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f6,296(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// b 0x8257ec58
	goto loc_8257EC58;
loc_8257EB0C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f9,f30,f11
	ctx.f9.f64 = double(float(f30.f64 * ctx.f11.f64));
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f28,268(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmsubs f8,f29,f11,f12
	ctx.f8.f64 = double(float(f29.f64 * ctx.f11.f64 - ctx.f12.f64));
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmsubs f7,f30,f0,f10
	ctx.f7.f64 = double(float(f30.f64 * f0.f64 - ctx.f10.f64));
	// stfs f7,264(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmsubs f6,f31,f13,f9
	ctx.f6.f64 = double(float(f31.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,256(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// b 0x8257ec48
	goto loc_8257EC48;
loc_8257EB58:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * f0.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f9,f30,f11
	ctx.f9.f64 = double(float(f30.f64 * ctx.f11.f64));
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f28,268(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmsubs f8,f29,f11,f12
	ctx.f8.f64 = double(float(f29.f64 * ctx.f11.f64 - ctx.f12.f64));
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmsubs f7,f30,f0,f10
	ctx.f7.f64 = double(float(f30.f64 * f0.f64 - ctx.f10.f64));
	// stfs f7,264(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmsubs f6,f31,f13,f9
	ctx.f6.f64 = double(float(f31.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,256(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// b 0x8257ec48
	goto loc_8257EC48;
loc_8257EBA4:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f9,f30,f11
	ctx.f9.f64 = double(float(f30.f64 * ctx.f11.f64));
	// stfs f28,284(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f28,268(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmsubs f8,f29,f11,f12
	ctx.f8.f64 = double(float(f29.f64 * ctx.f11.f64 - ctx.f12.f64));
	// stfs f8,260(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmsubs f7,f0,f30,f10
	ctx.f7.f64 = double(float(f0.f64 * f30.f64 - ctx.f10.f64));
	// stfs f7,264(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmsubs f6,f31,f13,f9
	ctx.f6.f64 = double(float(f31.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f6,256(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// b 0x8257ec48
	goto loc_8257EC48;
loc_8257EBF0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,25320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,3648(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3648, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3652(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3652, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3656(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3656, temp.u32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stfs f11,3660(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3660, temp.u32);
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | r26.u64;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
loc_8257EC28:
	// stfs f19,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f20,260(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f21,264(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f22,268(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f23,272(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f24,276(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f25,280(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f26,284(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
loc_8257EC48:
	// stfs f27,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f31,296(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f30,292(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f29,288(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
loc_8257EC58:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r6,3
	ctx.r6.s64 = 3;
	// rldicr r7,r7,38,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-9
	ctx.r10.s64 = r11.s64 + -9;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bne cr6,0x8257eca8
	if (!cr6.eq) goto loc_8257ECA8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x8257ecc4
	if (cr6.eq) goto loc_8257ECC4;
loc_8257ECA8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// bl 0x825d7370
	sub_825D7370(ctx, base);
loc_8257ECC4:
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8257ecf4
	if (cr6.eq) goto loc_8257ECF4;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,37,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// add r5,r10,r25
	ctx.r5.u64 = ctx.r10.u64 + r25.u64;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r21,r11
	r21.u64 = r11.u64;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
loc_8257ECF4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,36(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// bl 0x8270f298
	sub_8270F298(ctx, base);
	// lbz r11,66(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 66);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + r24.u32);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lhz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// lhz r5,70(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rotlwi r3,r5,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// bl 0x82710018
	sub_82710018(ctx, base);
	// lwz r4,32(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r22,r4
	cr6.compare<uint32_t>(r22.u32, ctx.r4.u32, xer);
	// blt cr6,0x8257e944
	if (cr6.lt) goto loc_8257E944;
loc_8257ED64:
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab20
}

__attribute__((alias("__imp__sub_8257ED78"))) PPC_WEAK_FUNC(sub_8257ED78);
PPC_FUNC_IMPL(__imp__sub_8257ED78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8257ED7C"))) PPC_WEAK_FUNC(sub_8257ED7C);
PPC_FUNC_IMPL(__imp__sub_8257ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257ED80"))) PPC_WEAK_FUNC(sub_8257ED80);
PPC_FUNC_IMPL(__imp__sub_8257ED80) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r31,r11,-21312
	r31.s64 = r11.s64 + -21312;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8257ef10
	if (!cr6.lt) goto loc_8257EF10;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r8,r30,56
	ctx.r8.s64 = r30.s64 * 56;
	// lwz r7,356(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,296(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 296);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f9,136(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f6,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f5,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f4,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f0,4492(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4492);
	f0.f64 = double(temp.f32);
	// lfs f3,152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fnmadds f1,f3,f0,f2
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * f0.f64 + ctx.f2.f64)));
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f0,168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	f0.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,-23476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23476);
	f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r3,39(r11)
	PPC_STORE_U8(r11.u32 + 39, ctx.r3.u8);
	// lfs f8,172(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r6,38(r11)
	PPC_STORE_U8(r11.u32 + 38, ctx.r6.u8);
	// lfs f4,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,176(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r3,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r3.u8);
	// lfs f11,180(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,36(r11)
	PPC_STORE_U8(r11.u32 + 36, ctx.r7.u8);
	// lfs f7,264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f6,268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f5,272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f4,276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lbz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257ef10
	if (cr6.eq) goto loc_8257EF10;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r3,r9,-21232
	ctx.r3.s64 = ctx.r9.s64 + -21232;
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fsel f10,f11,f13,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * f0.f64));
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8257EF10:
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

__attribute__((alias("__imp__sub_8257EF24"))) PPC_WEAK_FUNC(sub_8257EF24);
PPC_FUNC_IMPL(__imp__sub_8257EF24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EF28"))) PPC_WEAK_FUNC(sub_8257EF28);
PPC_FUNC_IMPL(__imp__sub_8257EF28) {
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
	// li r28,0
	r28.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82889828
	sub_82889828(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8257ef78
	if (cr6.eq) goto loc_8257EF78;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x828866a0
	sub_828866A0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// bl 0x828866d0
	sub_828866D0(ctx, base);
loc_8257EF78:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r29,r11,-21316
	r29.s64 = r11.s64 + -21316;
	// lwz r11,-21316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21316);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// bge cr6,0x8257f084
	if (!cr6.lt) goto loc_8257F084;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,356(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 356);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82889828
	sub_82889828(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r27,272
	ctx.r8.s64 = r27.s64 + 272;
	// addi r11,r11,-21248
	r11.s64 = r11.s64 + -21248;
	// lfs f13,244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8257efe8
	if (cr6.gt) goto loc_8257EFE8;
	// lfs f0,48(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f13,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// b 0x8257efec
	goto loc_8257EFEC;
loc_8257EFE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
loc_8257EFEC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// stfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 244);
	f0.f64 = double(temp.f32);
	// stw r8,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r8.u32);
	// stfs f0,64(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257bf68
	sub_8257BF68(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828898e0
	sub_828898E0(ctx, base);
	// bl 0x8288a080
	sub_8288A080(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257bf78
	sub_8257BF78(ctx, base);
	// stb r3,64(r31)
	PPC_STORE_U8(r31.u32 + 64, ctx.r3.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257bf88
	sub_8257BF88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stb r5,65(r31)
	PPC_STORE_U8(r31.u32 + 65, ctx.r5.u8);
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// sth r28,70(r31)
	PPC_STORE_U16(r31.u32 + 70, r28.u16);
	// stb r4,66(r31)
	PPC_STORE_U8(r31.u32 + 66, ctx.r4.u8);
	// sth r3,68(r31)
	PPC_STORE_U16(r31.u32 + 68, ctx.r3.u16);
	// b 0x8257f090
	goto loc_8257F090;
loc_8257F084:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_8257F090:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r30,r11,-21232
	r30.s64 = r11.s64 + -21232;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,-18232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18232);
	f0.f64 = double(temp.f32);
	// lfs f12,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-18236(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-21232(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -21232, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f13,24(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// bl 0x8288aa08
	sub_8288AA08(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257f150
	if (cr6.eq) goto loc_8257F150;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lhz r11,68(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x8257f150
	if (!cr6.gt) goto loc_8257F150;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lhz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 68);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r8,70(r31)
	PPC_STORE_U16(r31.u32 + 70, ctx.r8.u16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
loc_8257F150:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_8257F158"))) PPC_WEAK_FUNC(sub_8257F158);
PPC_FUNC_IMPL(__imp__sub_8257F158) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8257F15C"))) PPC_WEAK_FUNC(sub_8257F15C);
PPC_FUNC_IMPL(__imp__sub_8257F15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F160"))) PPC_WEAK_FUNC(sub_8257F160);
PPC_FUNC_IMPL(__imp__sub_8257F160) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8257bf60
	sub_8257BF60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,356(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// bl 0x82889c20
	sub_82889C20(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8257f1a4
	if (cr6.lt) goto loc_8257F1A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8288abd0
	sub_8288ABD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8257f1b8
	goto loc_8257F1B8;
loc_8257F1A4:
	// lis r11,-32168
	r11.s64 = -2108162048;
	// addi r5,r11,-4312
	ctx.r5.s64 = r11.s64 + -4312;
	// bl 0x8288abd0
	sub_8288ABD0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r5,r10,-4736
	ctx.r5.s64 = ctx.r10.s64 + -4736;
loc_8257F1B8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8288abd0
	sub_8288ABD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257F1D4"))) PPC_WEAK_FUNC(sub_8257F1D4);
PPC_FUNC_IMPL(__imp__sub_8257F1D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F1D8"))) PPC_WEAK_FUNC(sub_8257F1D8);
PPC_FUNC_IMPL(__imp__sub_8257F1D8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8257F1D8"))) PPC_WEAK_FUNC(sub_8257F1D8);
PPC_FUNC_IMPL(__imp__sub_8257F1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257fa58
	sub_8257FA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F1DC"))) PPC_WEAK_FUNC(sub_8257F1DC);
PPC_FUNC_IMPL(__imp__sub_8257F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F1E0"))) PPC_WEAK_FUNC(sub_8257F1E0);
PPC_FUNC_IMPL(__imp__sub_8257F1E0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,1416
	ctx.r3.s64 = ctx.r10.s64 + 1416;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_8257F22C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8257f250
	if (cr6.eq) goto loc_8257F250;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8257f22c
	if (cr6.eq) goto loc_8257F22C;
loc_8257F250:
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8257F26C"))) PPC_WEAK_FUNC(sub_8257F26C);
PPC_FUNC_IMPL(__imp__sub_8257F26C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F270"))) PPC_WEAK_FUNC(sub_8257F270);
PPC_FUNC_IMPL(__imp__sub_8257F270) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r7,r10,-18208
	ctx.r7.s64 = ctx.r10.s64 + -18208;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// li r3,272
	ctx.r3.s64 = 272;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257f2d4
	if (cr6.eq) goto loc_8257F2D4;
	// bl 0x8257c478
	sub_8257C478(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8257F2D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257cb70
	sub_8257CB70(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f32c
	if (cr6.eq) goto loc_8257F32C;
	// extsw r11,r27
	r11.s64 = r27.s32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-18216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18216);
	f0.f64 = double(temp.f32);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9464
	return;
loc_8257F32C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257f344
	if (cr6.eq) goto loc_8257F344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c688
	sub_8257C688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8257F344:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8257F348"))) PPC_WEAK_FUNC(sub_8257F348);
PPC_FUNC_IMPL(__imp__sub_8257F348) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8257F34C"))) PPC_WEAK_FUNC(sub_8257F34C);
PPC_FUNC_IMPL(__imp__sub_8257F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F350"))) PPC_WEAK_FUNC(sub_8257F350);
PPC_FUNC_IMPL(__imp__sub_8257F350) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257f388
	if (!cr6.gt) goto loc_8257F388;
	// li r30,0
	r30.s64 = 0;
loc_8257F370:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8257bed0
	sub_8257BED0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f370
	if (!cr0.eq) goto loc_8257F370;
loc_8257F388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257F38C"))) PPC_WEAK_FUNC(sub_8257F38C);
PPC_FUNC_IMPL(__imp__sub_8257F38C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257F390"))) PPC_WEAK_FUNC(sub_8257F390);
PPC_FUNC_IMPL(__imp__sub_8257F390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8257f3c8
	if (!cr6.gt) goto loc_8257F3C8;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
loc_8257F3A8:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwz r6,252(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 252);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x8257f3d0
	if (!cr6.eq) goto loc_8257F3D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8257f3a8
	if (cr6.lt) goto loc_8257F3A8;
loc_8257F3C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8257F3D0:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8257F3D4"))) PPC_WEAK_FUNC(sub_8257F3D4);
PPC_FUNC_IMPL(__imp__sub_8257F3D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F3D8"))) PPC_WEAK_FUNC(sub_8257F3D8);
PPC_FUNC_IMPL(__imp__sub_8257F3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257f418
	if (!cr6.gt) goto loc_8257F418;
	// li r30,0
	r30.s64 = 0;
loc_8257F3FC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8257c8e8
	sub_8257C8E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f3fc
	if (!cr0.eq) goto loc_8257F3FC;
loc_8257F418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257F41C"))) PPC_WEAK_FUNC(sub_8257F41C);
PPC_FUNC_IMPL(__imp__sub_8257F41C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257F420"))) PPC_WEAK_FUNC(sub_8257F420);
PPC_FUNC_IMPL(__imp__sub_8257F420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257f460
	if (!cr6.gt) goto loc_8257F460;
	// li r30,0
	r30.s64 = 0;
loc_8257F444:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8257c188
	sub_8257C188(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f444
	if (!cr0.eq) goto loc_8257F444;
loc_8257F460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257F464"))) PPC_WEAK_FUNC(sub_8257F464);
PPC_FUNC_IMPL(__imp__sub_8257F464) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257F468"))) PPC_WEAK_FUNC(sub_8257F468);
PPC_FUNC_IMPL(__imp__sub_8257F468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257f4b0
	if (!cr6.gt) goto loc_8257F4B0;
	// li r30,0
	r30.s64 = 0;
loc_8257F490:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8257bee8
	sub_8257BEE8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f490
	if (!cr0.eq) goto loc_8257F490;
loc_8257F4B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257F4B4"))) PPC_WEAK_FUNC(sub_8257F4B4);
PPC_FUNC_IMPL(__imp__sub_8257F4B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8257F4B8"))) PPC_WEAK_FUNC(sub_8257F4B8);
PPC_FUNC_IMPL(__imp__sub_8257F4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8257f4fc
	if (!cr6.gt) goto loc_8257F4FC;
	// li r30,0
	r30.s64 = 0;
loc_8257F4E0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8257bf00
	sub_8257BF00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f4e0
	if (!cr0.eq) goto loc_8257F4E0;
loc_8257F4FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8257F504"))) PPC_WEAK_FUNC(sub_8257F504);
PPC_FUNC_IMPL(__imp__sub_8257F504) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257F508"))) PPC_WEAK_FUNC(sub_8257F508);
PPC_FUNC_IMPL(__imp__sub_8257F508) {
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
	// lwz r28,16(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8257f554
	if (!cr6.gt) goto loc_8257F554;
	// li r31,0
	r31.s64 = 0;
loc_8257F52C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8257bf18
	sub_8257BF18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f560
	if (cr6.eq) goto loc_8257F560;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x8257f52c
	if (cr6.lt) goto loc_8257F52C;
loc_8257F554:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8257F560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257F568"))) PPC_WEAK_FUNC(sub_8257F568);
PPC_FUNC_IMPL(__imp__sub_8257F568) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257F56C"))) PPC_WEAK_FUNC(sub_8257F56C);
PPC_FUNC_IMPL(__imp__sub_8257F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F570"))) PPC_WEAK_FUNC(sub_8257F570);
PPC_FUNC_IMPL(__imp__sub_8257F570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8257f5a8
	if (!cr6.gt) goto loc_8257F5A8;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
loc_8257F588:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lbz r6,264(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 264);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8257f5b0
	if (!cr6.eq) goto loc_8257F5B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8257f588
	if (cr6.lt) goto loc_8257F588;
loc_8257F5A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8257F5B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F5B8"))) PPC_WEAK_FUNC(sub_8257F5B8);
PPC_FUNC_IMPL(__imp__sub_8257F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,-18124
	ctx.r10.s64 = r11.s64 + -18124;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8257f610
	if (!cr6.gt) goto loc_8257F610;
	// li r30,0
	r30.s64 = 0;
loc_8257F5E4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257f604
	if (cr6.eq) goto loc_8257F604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c688
	sub_8257C688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8257F604:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8257f5e4
	if (!cr0.eq) goto loc_8257F5E4;
loc_8257F610:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8257f638
	if (!cr6.gt) goto loc_8257F638;
loc_8257F620:
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
	// bgt cr6,0x8257f620
	if (cr6.gt) goto loc_8257F620;
loc_8257F638:
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8257F640"))) PPC_WEAK_FUNC(sub_8257F640);
PPC_FUNC_IMPL(__imp__sub_8257F640) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257F644"))) PPC_WEAK_FUNC(sub_8257F644);
PPC_FUNC_IMPL(__imp__sub_8257F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F648"))) PPC_WEAK_FUNC(sub_8257F648);
PPC_FUNC_IMPL(__imp__sub_8257F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-18124
	ctx.r9.s64 = r11.s64 + -18124;
	// li r23,0
	r23.s64 = 0;
	// addi r8,r10,-18136
	ctx.r8.s64 = ctx.r10.s64 + -18136;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r23.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r23.u32);
	// stw r23,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r23.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r30,r11,-18120
	r30.s64 = r11.s64 + -18120;
	// stw r6,20(r24)
	PPC_STORE_U32(r24.u32 + 20, ctx.r6.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r5,r29,24
	ctx.r5.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8257f890
	if (cr6.eq) goto loc_8257F890;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x8257f738
	if (!cr6.gt) goto loc_8257F738;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8257F738:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x8257f890
	if (!cr6.gt) goto loc_8257F890;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r29,r27,-1
	r29.s64 = r27.s64 + -1;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// addi r28,r11,21336
	r28.s64 = r11.s64 + 21336;
loc_8257F760:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f7bc
	if (cr6.eq) goto loc_8257F7BC;
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
	// beq cr6,0x8257f7bc
	if (cr6.eq) goto loc_8257F7BC;
	// bl 0x822d5720
	sub_822D5720(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257f7bc
	if (cr6.eq) goto loc_8257F7BC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8257f7ec
	goto loc_8257F7EC;
loc_8257F7BC:
	// lwz r11,21344(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21344);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8257f7e8
	if (!cr6.eq) goto loc_8257F7E8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,21344(r26)
	PPC_STORE_U32(r26.u32 + 21344, r11.u32);
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-32248
	ctx.r3.s64 = r11.s64 + -32248;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8257F7E8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8257F7EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca4c8
	sub_826CA4C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f878
	if (cr6.eq) goto loc_8257F878;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257f858
	if (cr6.eq) goto loc_8257F858;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8257f1e0
	sub_8257F1E0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f858
	if (cr6.eq) goto loc_8257F858;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8257f85c
	goto loc_8257F85C;
loc_8257F858:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_8257F85C:
	// lwz r11,60(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257f878
	if (cr6.eq) goto loc_8257F878;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8257f270
	sub_8257F270(ctx, base);
loc_8257F878:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// blt cr6,0x8257f760
	if (cr6.lt) goto loc_8257F760;
loc_8257F890:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8257F898"))) PPC_WEAK_FUNC(sub_8257F898);
PPC_FUNC_IMPL(__imp__sub_8257F898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8257F89C"))) PPC_WEAK_FUNC(sub_8257F89C);
PPC_FUNC_IMPL(__imp__sub_8257F89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F8A0"))) PPC_WEAK_FUNC(sub_8257F8A0);
PPC_FUNC_IMPL(__imp__sub_8257F8A0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-18224
	ctx.r9.s64 = r11.s64 + -18224;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8257f8e4
	if (!cr6.gt) goto loc_8257F8E4;
loc_8257F8CC:
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
	// bgt cr6,0x8257f8cc
	if (cr6.gt) goto loc_8257F8CC;
loc_8257F8E4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257f8fc
	if (cr6.eq) goto loc_8257F8FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257F8FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257F90C"))) PPC_WEAK_FUNC(sub_8257F90C);
PPC_FUNC_IMPL(__imp__sub_8257F90C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F910"))) PPC_WEAK_FUNC(sub_8257F910);
PPC_FUNC_IMPL(__imp__sub_8257F910) {
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
	// addi r9,r10,-18136
	ctx.r9.s64 = ctx.r10.s64 + -18136;
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

__attribute__((alias("__imp__sub_8257F968"))) PPC_WEAK_FUNC(sub_8257F968);
PPC_FUNC_IMPL(__imp__sub_8257F968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F96C"))) PPC_WEAK_FUNC(sub_8257F96C);
PPC_FUNC_IMPL(__imp__sub_8257F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257F970"))) PPC_WEAK_FUNC(sub_8257F970);
PPC_FUNC_IMPL(__imp__sub_8257F970) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-18136
	ctx.r9.s64 = r11.s64 + -18136;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8257f9b4
	if (!cr6.gt) goto loc_8257F9B4;
loc_8257F99C:
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
	// bgt cr6,0x8257f99c
	if (cr6.gt) goto loc_8257F99C;
loc_8257F9B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fa58
	sub_8257FA58(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-18224
	ctx.r10.s64 = r11.s64 + -18224;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8257f9f0
	if (!cr6.gt) goto loc_8257F9F0;
loc_8257F9D8:
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
	// bgt cr6,0x8257f9d8
	if (cr6.gt) goto loc_8257F9D8;
loc_8257F9F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257FA00"))) PPC_WEAK_FUNC(sub_8257FA00);
PPC_FUNC_IMPL(__imp__sub_8257FA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FA04"))) PPC_WEAK_FUNC(sub_8257FA04);
PPC_FUNC_IMPL(__imp__sub_8257FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FA08"))) PPC_WEAK_FUNC(sub_8257FA08);
PPC_FUNC_IMPL(__imp__sub_8257FA08) {
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
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fa40
	if (cr6.eq) goto loc_8257FA40;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257FA40:
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

__attribute__((alias("__imp__sub_8257FA54"))) PPC_WEAK_FUNC(sub_8257FA54);
PPC_FUNC_IMPL(__imp__sub_8257FA54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FA58"))) PPC_WEAK_FUNC(sub_8257FA58);
PPC_FUNC_IMPL(__imp__sub_8257FA58) {
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
	// beq cr6,0x8257fb3c
	if (cr6.eq) goto loc_8257FB3C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8257facc
	if (!cr6.eq) goto loc_8257FACC;
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
	// beq cr6,0x8257fb3c
	if (cr6.eq) goto loc_8257FB3C;
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
	// b 0x8257fb3c
	goto loc_8257FB3C;
loc_8257FACC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257f910
	sub_8257F910(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8257faf8
	if (!cr6.gt) goto loc_8257FAF8;
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
loc_8257FAF8:
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
	// bl 0x8257f970
	sub_8257F970(ctx, base);
loc_8257FB3C:
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

__attribute__((alias("__imp__sub_8257FB50"))) PPC_WEAK_FUNC(sub_8257FB50);
PPC_FUNC_IMPL(__imp__sub_8257FB50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FB54"))) PPC_WEAK_FUNC(sub_8257FB54);
PPC_FUNC_IMPL(__imp__sub_8257FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FB58"))) PPC_WEAK_FUNC(sub_8257FB58);
PPC_FUNC_IMPL(__imp__sub_8257FB58) {
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
	// bl 0x8257f5b8
	sub_8257F5B8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fb90
	if (cr6.eq) goto loc_8257FB90;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257FB90:
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

__attribute__((alias("__imp__sub_8257FBA4"))) PPC_WEAK_FUNC(sub_8257FBA4);
PPC_FUNC_IMPL(__imp__sub_8257FBA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FBA8"))) PPC_WEAK_FUNC(sub_8257FBA8);
PPC_FUNC_IMPL(__imp__sub_8257FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// li r9,12345
	ctx.r9.s64 = 12345;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, r11.u8);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
}

__attribute__((alias("__imp__sub_8257FBDC"))) PPC_WEAK_FUNC(sub_8257FBDC);
PPC_FUNC_IMPL(__imp__sub_8257FBDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FBE0"))) PPC_WEAK_FUNC(sub_8257FBE0);
PPC_FUNC_IMPL(__imp__sub_8257FBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FBE4"))) PPC_WEAK_FUNC(sub_8257FBE4);
PPC_FUNC_IMPL(__imp__sub_8257FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FBE8"))) PPC_WEAK_FUNC(sub_8257FBE8);
PPC_FUNC_IMPL(__imp__sub_8257FBE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_8257FBEC"))) PPC_WEAK_FUNC(sub_8257FBEC);
PPC_FUNC_IMPL(__imp__sub_8257FBEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82580070
	sub_82580070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FBF0"))) PPC_WEAK_FUNC(sub_8257FBF0);
PPC_FUNC_IMPL(__imp__sub_8257FBF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_8257FBF4"))) PPC_WEAK_FUNC(sub_8257FBF4);
PPC_FUNC_IMPL(__imp__sub_8257FBF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257ff60
	sub_8257FF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FBF8"))) PPC_WEAK_FUNC(sub_8257FBF8);
PPC_FUNC_IMPL(__imp__sub_8257FBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257FC04"))) PPC_WEAK_FUNC(sub_8257FC04);
PPC_FUNC_IMPL(__imp__sub_8257FC04) {
	PPC_FUNC_PROLOGUE();
	// b 0x82580a50
	sub_82580A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FC08"))) PPC_WEAK_FUNC(sub_8257FC08);
PPC_FUNC_IMPL(__imp__sub_8257FC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FC0C"))) PPC_WEAK_FUNC(sub_8257FC0C);
PPC_FUNC_IMPL(__imp__sub_8257FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FC10"))) PPC_WEAK_FUNC(sub_8257FC10);
PPC_FUNC_IMPL(__imp__sub_8257FC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8257FC1C"))) PPC_WEAK_FUNC(sub_8257FC1C);
PPC_FUNC_IMPL(__imp__sub_8257FC1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825805b0
	sub_825805B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FC20"))) PPC_WEAK_FUNC(sub_8257FC20);
PPC_FUNC_IMPL(__imp__sub_8257FC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FC24"))) PPC_WEAK_FUNC(sub_8257FC24);
PPC_FUNC_IMPL(__imp__sub_8257FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8257FC28"))) PPC_WEAK_FUNC(sub_8257FC28);
PPC_FUNC_IMPL(__imp__sub_8257FC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,256(r4)
	PPC_STORE_U32(ctx.r4.u32 + 256, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fc40
	if (cr6.eq) goto loc_8257FC40;
	// stw r4,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r4.u32);
loc_8257FC40:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 260, r11.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8257FC4C"))) PPC_WEAK_FUNC(sub_8257FC4C);
PPC_FUNC_IMPL(__imp__sub_8257FC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FC50"))) PPC_WEAK_FUNC(sub_8257FC50);
PPC_FUNC_IMPL(__imp__sub_8257FC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,256(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// lwz r11,260(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257fc68
	if (cr6.eq) goto loc_8257FC68;
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, r11.u32);
	// b 0x8257fc6c
	goto loc_8257FC6C;
loc_8257FC68:
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_8257FC6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fc78
	if (cr6.eq) goto loc_8257FC78;
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
loc_8257FC78:
	// li r11,0
	r11.s64 = 0;
	// stw r11,256(r4)
	PPC_STORE_U32(ctx.r4.u32 + 256, r11.u32);
	// stw r11,260(r4)
	PPC_STORE_U32(ctx.r4.u32 + 260, r11.u32);
}

__attribute__((alias("__imp__sub_8257FC84"))) PPC_WEAK_FUNC(sub_8257FC84);
PPC_FUNC_IMPL(__imp__sub_8257FC84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FC88"))) PPC_WEAK_FUNC(sub_8257FC88);
PPC_FUNC_IMPL(__imp__sub_8257FC88) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r29.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8257fcc0
	if (cr6.eq) goto loc_8257FCC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257ffa8
	sub_8257FFA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_8257FCC0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826e6440
	sub_826E6440(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257FCE4"))) PPC_WEAK_FUNC(sub_8257FCE4);
PPC_FUNC_IMPL(__imp__sub_8257FCE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257FCE8"))) PPC_WEAK_FUNC(sub_8257FCE8);
PPC_FUNC_IMPL(__imp__sub_8257FCE8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257fd1c
	if (cr6.eq) goto loc_8257FD1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257fd20
	if (!cr6.eq) goto loc_8257FD20;
loc_8257FD1C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8257FD20:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fsel f1,f12,f12,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f0.f64;
	// stfs f1,20(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// bl 0x8257ffb0
	sub_8257FFB0(ctx, base);
	// lwz r31,28(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8257fdb0
	if (cr6.eq) goto loc_8257FDB0;
loc_8257FD54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257c3d0
	sub_8257C3D0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fd70
	if (cr6.eq) goto loc_8257FD70;
	// lwz r31,260(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// b 0x8257fda8
	goto loc_8257FDA8;
loc_8257FD70:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// addi r9,r31,260
	ctx.r9.s64 = r31.s64 + 260;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8257fd8c
	if (cr6.eq) goto loc_8257FD8C;
	// stw r11,260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 260, r11.u32);
	// b 0x8257fd90
	goto loc_8257FD90;
loc_8257FD8C:
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_8257FD90:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8257fd9c
	if (cr6.eq) goto loc_8257FD9C;
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
loc_8257FD9C:
	// stw r29,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r29.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
loc_8257FDA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8257fd54
	if (!cr6.eq) goto loc_8257FD54;
loc_8257FDB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8257FDB4"))) PPC_WEAK_FUNC(sub_8257FDB4);
PPC_FUNC_IMPL(__imp__sub_8257FDB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8257FDB8"))) PPC_WEAK_FUNC(sub_8257FDB8);
PPC_FUNC_IMPL(__imp__sub_8257FDB8) {
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
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r31,0
	r31.s64 = 0;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r29,r10,-18072
	r29.s64 = ctx.r10.s64 + -18072;
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// li r28,29
	r28.s64 = 29;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// ori r3,r3,36880
	ctx.r3.u64 = ctx.r3.u64 | 36880;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257fe30
	if (cr6.eq) goto loc_8257FE30;
	// bl 0x82580100
	sub_82580100(ctx, base);
	// b 0x8257fe34
	goto loc_8257FE34;
loc_8257FE30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8257FE34:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,68
	ctx.r8.s64 = 68;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257fe94
	if (cr6.eq) goto loc_8257FE94;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-18088
	ctx.r3.s64 = r11.s64 + -18088;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb420
	sub_826CB420(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8257fe98
	goto loc_8257FE98;
loc_8257FE94:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8257FE98:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r9,-32104
	ctx.r3.s64 = ctx.r9.s64 + -32104;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2a8
	sub_826CB2A8(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8232a060
	sub_8232A060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r5,-18100
	ctx.r4.s64 = ctx.r5.s64 + -18100;
	// li r7,18
	ctx.r7.s64 = 18;
	// lwz r3,18088(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18088);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826e5b38
	sub_826E5B38(ctx, base);
	// lis r4,-31970
	ctx.r4.s64 = -2095185920;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-14368(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -14368);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257ff3c
	if (cr6.eq) goto loc_8257FF3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8257ff3c
	if (cr6.eq) goto loc_8257FF3C;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8257FF3C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826e7338
	sub_826E7338(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e77f0
	sub_826E77F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8257FF5C"))) PPC_WEAK_FUNC(sub_8257FF5C);
PPC_FUNC_IMPL(__imp__sub_8257FF5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8257FF60"))) PPC_WEAK_FUNC(sub_8257FF60);
PPC_FUNC_IMPL(__imp__sub_8257FF60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8257bf60
	sub_8257BF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82888408
	sub_82888408(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8257FFA4"))) PPC_WEAK_FUNC(sub_8257FFA4);
PPC_FUNC_IMPL(__imp__sub_8257FFA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257FFA8"))) PPC_WEAK_FUNC(sub_8257FFA8);
PPC_FUNC_IMPL(__imp__sub_8257FFA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
}

__attribute__((alias("__imp__sub_8257FFAC"))) PPC_WEAK_FUNC(sub_8257FFAC);
PPC_FUNC_IMPL(__imp__sub_8257FFAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82887ab0
	sub_82887AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257FFB0"))) PPC_WEAK_FUNC(sub_8257FFB0);
PPC_FUNC_IMPL(__imp__sub_8257FFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8257ffe8
	if (cr6.eq) goto loc_8257FFE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8257ffec
	if (!cr6.eq) goto loc_8257FFEC;
loc_8257FFE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257FFEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8257dfd8
	sub_8257DFD8(ctx, base);
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

