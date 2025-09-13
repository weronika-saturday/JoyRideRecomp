#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8255B4EC"))) PPC_WEAK_FUNC(sub_8255B4EC);
PPC_FUNC_IMPL(__imp__sub_8255B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B4F0"))) PPC_WEAK_FUNC(sub_8255B4F0);
PPC_FUNC_IMPL(__imp__sub_8255B4F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B4F4"))) PPC_WEAK_FUNC(sub_8255B4F4);
PPC_FUNC_IMPL(__imp__sub_8255B4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B4F8"))) PPC_WEAK_FUNC(sub_8255B4F8);
PPC_FUNC_IMPL(__imp__sub_8255B4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B4FC"))) PPC_WEAK_FUNC(sub_8255B4FC);
PPC_FUNC_IMPL(__imp__sub_8255B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B500"))) PPC_WEAK_FUNC(sub_8255B500);
PPC_FUNC_IMPL(__imp__sub_8255B500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B504"))) PPC_WEAK_FUNC(sub_8255B504);
PPC_FUNC_IMPL(__imp__sub_8255B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B508"))) PPC_WEAK_FUNC(sub_8255B508);
PPC_FUNC_IMPL(__imp__sub_8255B508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,6500
	r11.s64 = r11.s64 * 6500;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
}

__attribute__((alias("__imp__sub_8255B518"))) PPC_WEAK_FUNC(sub_8255B518);
PPC_FUNC_IMPL(__imp__sub_8255B518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B51C"))) PPC_WEAK_FUNC(sub_8255B51C);
PPC_FUNC_IMPL(__imp__sub_8255B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B520"))) PPC_WEAK_FUNC(sub_8255B520);
PPC_FUNC_IMPL(__imp__sub_8255B520) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255b534
	if (cr6.eq) goto loc_8255B534;
	// li r11,0
	r11.s64 = 0;
loc_8255B534:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B53C"))) PPC_WEAK_FUNC(sub_8255B53C);
PPC_FUNC_IMPL(__imp__sub_8255B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B540"))) PPC_WEAK_FUNC(sub_8255B540);
PPC_FUNC_IMPL(__imp__sub_8255B540) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x8255b554
	if (cr6.lt) goto loc_8255B554;
	// li r11,0
	r11.s64 = 0;
loc_8255B554:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B55C"))) PPC_WEAK_FUNC(sub_8255B55C);
PPC_FUNC_IMPL(__imp__sub_8255B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B560"))) PPC_WEAK_FUNC(sub_8255B560);
PPC_FUNC_IMPL(__imp__sub_8255B560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r4,812
	r11.s64 = ctx.r4.s64 * 812;
	// mulli r10,r10,6500
	ctx.r10.s64 = ctx.r10.s64 * 6500;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
}

__attribute__((alias("__imp__sub_8255B578"))) PPC_WEAK_FUNC(sub_8255B578);
PPC_FUNC_IMPL(__imp__sub_8255B578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B57C"))) PPC_WEAK_FUNC(sub_8255B57C);
PPC_FUNC_IMPL(__imp__sub_8255B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B580"))) PPC_WEAK_FUNC(sub_8255B580);
PPC_FUNC_IMPL(__imp__sub_8255B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r4,812
	r11.s64 = ctx.r4.s64 * 812;
	// mulli r10,r10,6500
	ctx.r10.s64 = ctx.r10.s64 * 6500;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
}

__attribute__((alias("__imp__sub_8255B598"))) PPC_WEAK_FUNC(sub_8255B598);
PPC_FUNC_IMPL(__imp__sub_8255B598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B59C"))) PPC_WEAK_FUNC(sub_8255B59C);
PPC_FUNC_IMPL(__imp__sub_8255B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B5A0"))) PPC_WEAK_FUNC(sub_8255B5A0);
PPC_FUNC_IMPL(__imp__sub_8255B5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r4,812
	r11.s64 = ctx.r4.s64 * 812;
	// mulli r10,r10,6500
	ctx.r10.s64 = ctx.r10.s64 * 6500;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bge cr6,0x8255b640
	if (!cr6.lt) goto loc_8255B640;
loc_8255B5D8:
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// srawi r8,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// beq cr6,0x8255b604
	if (cr6.eq) goto loc_8255B604;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255B604:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255b658
	if (!cr6.eq) goto loc_8255B658;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8255b620
	if (cr6.lt) goto loc_8255B620;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255B620:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255b634
	if (cr6.eq) goto loc_8255B634;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x8255b638
	goto loc_8255B638;
loc_8255B634:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
loc_8255B638:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8255b5d8
	if (cr6.lt) goto loc_8255B5D8;
loc_8255B640:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255B644:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255b664
	if (cr6.eq) goto loc_8255B664;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8255B658:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8255b644
	goto loc_8255B644;
loc_8255B664:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8255b678
	if (!cr6.eq) goto loc_8255B678;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8255B678:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8255b6a8
	if (!cr6.gt) goto loc_8255B6A8;
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmadds f1,f7,f8,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// blr 
	return;
loc_8255B6A8:
	// fmr f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f11.f64;
}

__attribute__((alias("__imp__sub_8255B6AC"))) PPC_WEAK_FUNC(sub_8255B6AC);
PPC_FUNC_IMPL(__imp__sub_8255B6AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B6B0"))) PPC_WEAK_FUNC(sub_8255B6B0);
PPC_FUNC_IMPL(__imp__sub_8255B6B0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8255b738
	if (cr6.eq) goto loc_8255B738;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
loc_8255B6E4:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255B6EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r30,0(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// beq cr6,0x8255b710
	if (cr6.eq) goto loc_8255B710;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8255b6ec
	if (cr6.eq) goto loc_8255B6EC;
loc_8255B710:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8255b724
	if (!cr6.eq) goto loc_8255B724;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8255b798
	if (cr6.gt) goto loc_8255B798;
loc_8255B724:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,812
	ctx.r8.s64 = ctx.r8.s64 + 812;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x8255b6e4
	if (cr6.lt) goto loc_8255B6E4;
loc_8255B738:
	// mulli r11,r6,812
	r11.s64 = ctx.r6.s64 * 812;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r10,812
	r11.s64 = ctx.r10.s64 * 812;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// beq cr6,0x8255b774
	if (cr6.eq) goto loc_8255B774;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,804
	ctx.r5.s64 = 804;
	// mulli r11,r11,812
	r11.s64 = r11.s64 * 812;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8255B774:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8255B780:
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
loc_8255B798:
	// mulli r11,r7,812
	r11.s64 = ctx.r7.s64 * 812;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// beq cr6,0x8255b780
	if (cr6.eq) goto loc_8255B780;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// li r5,804
	ctx.r5.s64 = 804;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
}

__attribute__((alias("__imp__sub_8255B7B8"))) PPC_WEAK_FUNC(sub_8255B7B8);
PPC_FUNC_IMPL(__imp__sub_8255B7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255b780
	// ERROR 8255B780
	return;
}

__attribute__((alias("__imp__sub_8255B7BC"))) PPC_WEAK_FUNC(sub_8255B7BC);
PPC_FUNC_IMPL(__imp__sub_8255B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B7C0"))) PPC_WEAK_FUNC(sub_8255B7C0);
PPC_FUNC_IMPL(__imp__sub_8255B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6640(r1)
	ea = -6640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// li r27,2
	r27.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,13435
	r28.s64 = r11.s64 + 13435;
	// stw r10,6580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 6580, ctx.r10.u32);
loc_8255B7F0:
	// li r30,7
	r30.s64 = 7;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
loc_8255B7FC:
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r6,r10,-20320
	ctx.r6.s64 = ctx.r10.s64 + -20320;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x822b0070
	sub_822B0070(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,812
	r31.s64 = r31.s64 + 812;
	// bge 0x8255b7fc
	if (!cr0.lt) goto loc_8255B7FC;
	// li r5,6500
	ctx.r5.s64 = 6500;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r26,r26,6500
	r26.s64 = r26.s64 + 6500;
	// bne 0x8255b7f0
	if (!cr0.eq) goto loc_8255B7F0;
	// lwz r3,6580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 6580);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,6640
	ctx.r1.s64 = ctx.r1.s64 + 6640;
}

__attribute__((alias("__imp__sub_8255B85C"))) PPC_WEAK_FUNC(sub_8255B85C);
PPC_FUNC_IMPL(__imp__sub_8255B85C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255B860"))) PPC_WEAK_FUNC(sub_8255B860);
PPC_FUNC_IMPL(__imp__sub_8255B860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,21636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21636);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r7,6500
	r11.s64 = ctx.r7.s64 * 6500;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x8255b6b0
	sub_8255B6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8255B8BC"))) PPC_WEAK_FUNC(sub_8255B8BC);
PPC_FUNC_IMPL(__imp__sub_8255B8BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255B8C0"))) PPC_WEAK_FUNC(sub_8255B8C0);
PPC_FUNC_IMPL(__imp__sub_8255B8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// li r30,1
	r30.s64 = 1;
loc_8255B8E0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lis r11,-32170
	r11.s64 = -2108293120;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-18144
	ctx.r6.s64 = r11.s64 + -18144;
	// li r4,812
	ctx.r4.s64 = 812;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822b0070
	sub_822B0070(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,6500
	r31.s64 = r31.s64 + 6500;
	// bge 0x8255b8e0
	if (!cr0.lt) goto loc_8255B8E0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255b7c0
	sub_8255B7C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255B918"))) PPC_WEAK_FUNC(sub_8255B918);
PPC_FUNC_IMPL(__imp__sub_8255B918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255B91C"))) PPC_WEAK_FUNC(sub_8255B91C);
PPC_FUNC_IMPL(__imp__sub_8255B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B920"))) PPC_WEAK_FUNC(sub_8255B920);
PPC_FUNC_IMPL(__imp__sub_8255B920) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,13435
	ctx.r10.s64 = r11.s64 + 13435;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_8255B968:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(f0.f64);
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x8255b968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255B968;
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

__attribute__((alias("__imp__sub_8255B988"))) PPC_WEAK_FUNC(sub_8255B988);
PPC_FUNC_IMPL(__imp__sub_8255B988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B98C"))) PPC_WEAK_FUNC(sub_8255B98C);
PPC_FUNC_IMPL(__imp__sub_8255B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B990"))) PPC_WEAK_FUNC(sub_8255B990);
PPC_FUNC_IMPL(__imp__sub_8255B990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B994"))) PPC_WEAK_FUNC(sub_8255B994);
PPC_FUNC_IMPL(__imp__sub_8255B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B998"))) PPC_WEAK_FUNC(sub_8255B998);
PPC_FUNC_IMPL(__imp__sub_8255B998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B99C"))) PPC_WEAK_FUNC(sub_8255B99C);
PPC_FUNC_IMPL(__imp__sub_8255B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B9A0"))) PPC_WEAK_FUNC(sub_8255B9A0);
PPC_FUNC_IMPL(__imp__sub_8255B9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B9A4"))) PPC_WEAK_FUNC(sub_8255B9A4);
PPC_FUNC_IMPL(__imp__sub_8255B9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B9A8"))) PPC_WEAK_FUNC(sub_8255B9A8);
PPC_FUNC_IMPL(__imp__sub_8255B9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// bne cr6,0x8255b9c4
	if (!cr6.eq) goto loc_8255B9C4;
	// addi r10,r11,-11504
	ctx.r10.s64 = r11.s64 + -11504;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
loc_8255B9C4:
	// lwz r3,-11504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -11504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B9CC"))) PPC_WEAK_FUNC(sub_8255B9CC);
PPC_FUNC_IMPL(__imp__sub_8255B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B9D0"))) PPC_WEAK_FUNC(sub_8255B9D0);
PPC_FUNC_IMPL(__imp__sub_8255B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,-11492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -11492);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B9DC"))) PPC_WEAK_FUNC(sub_8255B9DC);
PPC_FUNC_IMPL(__imp__sub_8255B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255B9E0"))) PPC_WEAK_FUNC(sub_8255B9E0);
PPC_FUNC_IMPL(__imp__sub_8255B9E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,200
	ctx.r3.s64 = 200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B9E8"))) PPC_WEAK_FUNC(sub_8255B9E8);
PPC_FUNC_IMPL(__imp__sub_8255B9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255ba18
	if (cr6.eq) goto loc_8255BA18;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8255BA18:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// beq cr6,0x8255bc34
	if (cr6.eq) goto loc_8255BC34;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8255bc34
	if (!cr6.eq) goto loc_8255BC34;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,16944(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// addi r5,r8,-24852
	ctx.r5.s64 = ctx.r8.s64 + -24852;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r8,-24880
	ctx.r5.s64 = ctx.r8.s64 + -24880;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfd f0,27392(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 27392);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r8,-24900
	ctx.r5.s64 = ctx.r8.s64 + -24900;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfd f0,24216(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24216);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r8,-24920
	ctx.r5.s64 = ctx.r8.s64 + -24920;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lfd f0,-28864(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -28864);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r8,-24952
	ctx.r5.s64 = ctx.r8.s64 + -24952;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfd f0,-24928(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -24928);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f0.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_8255BC34:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255bc58
	if (cr6.eq) goto loc_8255BC58;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_8255BC58:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255bc68
	if (cr6.eq) goto loc_8255BC68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8255BC68:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8255BC6C"))) PPC_WEAK_FUNC(sub_8255BC6C);
PPC_FUNC_IMPL(__imp__sub_8255BC6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255BC70"))) PPC_WEAK_FUNC(sub_8255BC70);
PPC_FUNC_IMPL(__imp__sub_8255BC70) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255bca0
	if (cr6.eq) goto loc_8255BCA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255bca4
	if (!cr6.eq) goto loc_8255BCA4;
loc_8255BCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255BCA4:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f9578
	sub_824F9578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255BCC4"))) PPC_WEAK_FUNC(sub_8255BCC4);
PPC_FUNC_IMPL(__imp__sub_8255BCC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BCC8"))) PPC_WEAK_FUNC(sub_8255BCC8);
PPC_FUNC_IMPL(__imp__sub_8255BCC8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255bd00
	if (cr6.eq) goto loc_8255BD00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255bd04
	if (!cr6.eq) goto loc_8255BD04;
loc_8255BD00:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8255BD04:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r31,r11,-11504
	r31.s64 = r11.s64 + -11504;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bne cr6,0x8255bd28
	if (!cr6.eq) goto loc_8255BD28;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8255bd2c
	goto loc_8255BD2C;
loc_8255BD28:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8255BD2C:
	// bl 0x82517c10
	sub_82517C10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r5,-8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8255BD54"))) PPC_WEAK_FUNC(sub_8255BD54);
PPC_FUNC_IMPL(__imp__sub_8255BD54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255BD58"))) PPC_WEAK_FUNC(sub_8255BD58);
PPC_FUNC_IMPL(__imp__sub_8255BD58) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255bd88
	if (cr6.eq) goto loc_8255BD88;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
loc_8255BD88:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-11508(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -11508);
	// bl 0x828eb318
	sub_828EB318(ctx, base);
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

__attribute__((alias("__imp__sub_8255BDB0"))) PPC_WEAK_FUNC(sub_8255BDB0);
PPC_FUNC_IMPL(__imp__sub_8255BDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BDB4"))) PPC_WEAK_FUNC(sub_8255BDB4);
PPC_FUNC_IMPL(__imp__sub_8255BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255BDB8"))) PPC_WEAK_FUNC(sub_8255BDB8);
PPC_FUNC_IMPL(__imp__sub_8255BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r5,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r5.u32);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,1280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1280, ctx.r10.u32);
	// bne cr6,0x8255be10
	if (!cr6.eq) goto loc_8255BE10;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255bdf8
	if (cr6.eq) goto loc_8255BDF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
loc_8255BDF8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,-11508(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -11508);
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// b 0x8255be20
	goto loc_8255BE20;
loc_8255BE10:
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,1444
	ctx.r4.s64 = ctx.r1.s64 + 1444;
	// bl 0x8255bcc8
	sub_8255BCC8(ctx, base);
loc_8255BE20:
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255be40
	if (cr6.eq) goto loc_8255BE40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255be44
	if (!cr6.eq) goto loc_8255BE44;
loc_8255BE40:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8255BE44:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r20,r31
	r20.u64 = r31.u64;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255c148
	if (!cr6.eq) goto loc_8255C148;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r21,3
	r21.s64 = 3;
	// li r30,4
	r30.s64 = 4;
	// addi r27,r11,-24788
	r27.s64 = r11.s64 + -24788;
	// addi r26,r10,-24796
	r26.s64 = ctx.r10.s64 + -24796;
	// addi r25,r9,19996
	r25.s64 = ctx.r9.s64 + 19996;
	// addi r24,r8,20004
	r24.s64 = ctx.r8.s64 + 20004;
	// addi r23,r7,-32496
	r23.s64 = ctx.r7.s64 + -32496;
	// addi r22,r6,20024
	r22.s64 = ctx.r6.s64 + 20024;
	// addi r29,r5,-24812
	r29.s64 = ctx.r5.s64 + -24812;
	// addi r28,r4,-24828
	r28.s64 = ctx.r4.s64 + -24828;
loc_8255BEC0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// std r9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255bf74
	if (cr6.eq) goto loc_8255BF74;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_8255BF74:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8255bff4
	if (cr6.eq) goto loc_8255BFF4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_8255BFF4:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8255c074
	if (cr6.eq) goto loc_8255C074;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
loc_8255C074:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8255c0f4
	if (cr6.eq) goto loc_8255C0F4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_8255C0F4:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r4,8(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255c138
	if (cr6.eq) goto loc_8255C138;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8255C138:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255bec0
	if (cr6.eq) goto loc_8255BEC0;
loc_8255C148:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c168
	if (cr6.eq) goto loc_8255C168;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8255C168:
	// lwz r3,1280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
}

__attribute__((alias("__imp__sub_8255C174"))) PPC_WEAK_FUNC(sub_8255C174);
PPC_FUNC_IMPL(__imp__sub_8255C174) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8255C178"))) PPC_WEAK_FUNC(sub_8255C178);
PPC_FUNC_IMPL(__imp__sub_8255C178) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c298
	if (cr6.eq) goto loc_8255C298;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8255c290
	if (!cr6.eq) goto loc_8255C290;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255bdb8
	sub_8255BDB8(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255c290
	if (cr6.eq) goto loc_8255C290;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x82757f58
	sub_82757F58(ctx, base);
loc_8255C290:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8255C298:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255c2bc
	if (cr6.eq) goto loc_8255C2BC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
loc_8255C2BC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255c2dc
	if (cr6.eq) goto loc_8255C2DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8255C2DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8255C2E0"))) PPC_WEAK_FUNC(sub_8255C2E0);
PPC_FUNC_IMPL(__imp__sub_8255C2E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8255C2E4"))) PPC_WEAK_FUNC(sub_8255C2E4);
PPC_FUNC_IMPL(__imp__sub_8255C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C2E8"))) PPC_WEAK_FUNC(sub_8255C2E8);
PPC_FUNC_IMPL(__imp__sub_8255C2E8) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// beq cr6,0x8255c32c
	if (cr6.eq) goto loc_8255C32C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255c330
	if (!cr6.eq) goto loc_8255C330;
loc_8255C32C:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8255C330:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,-24776
	ctx.r5.s64 = ctx.r9.s64 + -24776;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// li r30,15
	r30.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255c508
	if (!cr6.eq) goto loc_8255C508;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20024
	ctx.r5.s64 = r11.s64 + 20024;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255C3C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255c3c8
	if (!cr6.eq) goto loc_8255C3C8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20004
	ctx.r5.s64 = ctx.r10.s64 + 20004;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255C41C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255c41c
	if (!cr6.eq) goto loc_8255C41C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-24796
	ctx.r5.s64 = ctx.r10.s64 + -24796;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8255C470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255c470
	if (!cr6.eq) goto loc_8255C470;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8255c4b0
	if (!cr6.lt) goto loc_8255C4B0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8255C4B0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-32496
	ctx.r4.s64 = r11.s64 + -32496;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8255c4d4
	if (!cr6.lt) goto loc_8255C4D4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8255C4D4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,19824
	ctx.r4.s64 = r11.s64 + 19824;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8255c4f8
	if (!cr6.lt) goto loc_8255C4F8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8255C4F8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-24788
	ctx.r4.s64 = r11.s64 + -24788;
	// bl 0x82881060
	sub_82881060(ctx, base);
loc_8255C508:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8255c534
	if (cr6.lt) goto loc_8255C534;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255C534:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// blt cr6,0x8255c554
	if (cr6.lt) goto loc_8255C554;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255C554:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// blt cr6,0x8255c574
	if (cr6.lt) goto loc_8255C574;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255C574:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r31.u8);
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_8255C59C"))) PPC_WEAK_FUNC(sub_8255C59C);
PPC_FUNC_IMPL(__imp__sub_8255C59C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255C5A0"))) PPC_WEAK_FUNC(sub_8255C5A0);
PPC_FUNC_IMPL(__imp__sub_8255C5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	r11.s64 = ctx.r1.s64 + 72;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,24192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
loc_8255C5CC:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x8255c5cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255C5CC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-26236
	ctx.r5.s64 = r11.s64 + -26236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-24480
	ctx.r5.s64 = ctx.r10.s64 + -24480;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255C61C"))) PPC_WEAK_FUNC(sub_8255C61C);
PPC_FUNC_IMPL(__imp__sub_8255C61C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C620"))) PPC_WEAK_FUNC(sub_8255C620);
PPC_FUNC_IMPL(__imp__sub_8255C620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_8255C630:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r9,r4
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255c650
	if (cr6.eq) goto loc_8255C650;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x8255c630
	if (cr6.lt) goto loc_8255C630;
	// blr 
	return;
loc_8255C650:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C658"))) PPC_WEAK_FUNC(sub_8255C658);
PPC_FUNC_IMPL(__imp__sub_8255C658) {
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
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r28,r11,r3
	r28.u64 = r11.u64 + ctx.r3.u64;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ld r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 24);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// std r10,672(r3)
	PPC_STORE_U64(ctx.r3.u32 + 672, ctx.r10.u64);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// addi r31,r29,688
	r31.s64 = r29.s64 + 688;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r30,688(r29)
	PPC_STORE_U64(r29.u32 + 688, r30.u64);
	// rlwinm r5,r3,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// std r30,696(r29)
	PPC_STORE_U64(r29.u32 + 696, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,704(r29)
	PPC_STORE_U64(r29.u32 + 704, r30.u64);
	// stw r30,712(r29)
	PPC_STORE_U32(r29.u32 + 712, r30.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,52(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// bl 0x82606698
	sub_82606698(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8255c718
	if (cr6.eq) goto loc_8255C718;
	// stw r30,680(r29)
	PPC_STORE_U32(r29.u32 + 680, r30.u32);
	// std r30,672(r29)
	PPC_STORE_U64(r29.u32 + 672, r30.u64);
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
	// std r30,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r30.u64);
	// std r30,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r30.u64);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c720
	if (cr6.eq) goto loc_8255C720;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r30,716(r29)
	PPC_STORE_U32(r29.u32 + 716, r30.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8255C718:
	// li r11,3
	r11.s64 = 3;
	// stw r11,680(r29)
	PPC_STORE_U32(r29.u32 + 680, r11.u32);
loc_8255C720:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8255C730"))) PPC_WEAK_FUNC(sub_8255C730);
PPC_FUNC_IMPL(__imp__sub_8255C730) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255C734"))) PPC_WEAK_FUNC(sub_8255C734);
PPC_FUNC_IMPL(__imp__sub_8255C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255C738"))) PPC_WEAK_FUNC(sub_8255C738);
PPC_FUNC_IMPL(__imp__sub_8255C738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// li r30,20
	r30.s64 = 20;
loc_8255C754:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c764
	if (cr6.eq) goto loc_8255C764;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_8255C764:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// bne 0x8255c754
	if (!cr0.eq) goto loc_8255C754;
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

__attribute__((alias("__imp__sub_8255C784"))) PPC_WEAK_FUNC(sub_8255C784);
PPC_FUNC_IMPL(__imp__sub_8255C784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C788"))) PPC_WEAK_FUNC(sub_8255C788);
PPC_FUNC_IMPL(__imp__sub_8255C788) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// std r4,672(r3)
	PPC_STORE_U64(ctx.r3.u32 + 672, ctx.r4.u64);
	// li r26,1
	r26.s64 = 1;
	// lwz r4,664(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// addi r28,r3,672
	r28.s64 = ctx.r3.s64 + 672;
	// addi r27,r11,-24400
	r27.s64 = r11.s64 + -24400;
	// stw r26,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, r26.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d10
	sub_82625D10(ctx, base);
	// cmplwi cr6,r3,122
	cr6.compare<uint32_t>(ctx.r3.u32, 122, xer);
	// bne cr6,0x8255c7f4
	if (!cr6.eq) goto loc_8255C7F4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255c8b4
	if (cr6.eq) goto loc_8255C8B4;
loc_8255C7F4:
	// lwz r3,716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c808
	if (cr6.eq) goto loc_8255C808;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r31,716(r30)
	PPC_STORE_U32(r30.u32 + 716, r31.u32);
loc_8255C808:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r7,r10,-24460
	ctx.r7.s64 = ctx.r10.s64 + -24460;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,355
	ctx.r8.s64 = 355;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// stw r3,716(r30)
	PPC_STORE_U32(r30.u32 + 716, ctx.r3.u32);
	// addi r29,r30,688
	r29.s64 = r30.s64 + 688;
	// std r31,688(r30)
	PPC_STORE_U64(r30.u32 + 688, r31.u64);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// std r31,696(r30)
	PPC_STORE_U64(r30.u32 + 696, r31.u64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r31,704(r30)
	PPC_STORE_U64(r30.u32 + 704, r31.u64);
	// stw r31,712(r30)
	PPC_STORE_U32(r30.u32 + 712, r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,716(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 716);
	// lwz r4,664(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 664);
	// bl 0x82625d10
	sub_82625D10(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8255c8c0
	if (cr6.eq) goto loc_8255C8C0;
	// std r31,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r31.u64);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r31,680(r30)
	PPC_STORE_U32(r30.u32 + 680, r31.u32);
	// std r31,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r31.u64);
	// std r31,8(r29)
	PPC_STORE_U64(r29.u32 + 8, r31.u64);
	// std r31,16(r29)
	PPC_STORE_U64(r29.u32 + 16, r31.u64);
	// stw r31,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r31.u32);
	// lwz r3,716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c8b4
	if (cr6.eq) goto loc_8255C8B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r31,716(r30)
	PPC_STORE_U32(r30.u32 + 716, r31.u32);
loc_8255C8B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_8255C8C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r26,680(r30)
	PPC_STORE_U32(r30.u32 + 680, r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8255C8CC"))) PPC_WEAK_FUNC(sub_8255C8CC);
PPC_FUNC_IMPL(__imp__sub_8255C8CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8255C8D0"))) PPC_WEAK_FUNC(sub_8255C8D0);
PPC_FUNC_IMPL(__imp__sub_8255C8D0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r10,5,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r3,r28,r3
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + ctx.r3.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r31,r29,688
	r31.s64 = r29.s64 + 688;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// std r30,688(r29)
	PPC_STORE_U64(r29.u32 + 688, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,696(r29)
	PPC_STORE_U64(r29.u32 + 696, r30.u64);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// std r30,704(r29)
	PPC_STORE_U64(r29.u32 + 704, r30.u64);
	// stw r30,712(r29)
	PPC_STORE_U32(r29.u32 + 712, r30.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 716);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x826066c8
	sub_826066C8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8255c990
	if (cr6.eq) goto loc_8255C990;
	// stw r30,680(r29)
	PPC_STORE_U32(r29.u32 + 680, r30.u32);
	// std r30,672(r29)
	PPC_STORE_U64(r29.u32 + 672, r30.u64);
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
	// std r30,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r30.u64);
	// std r30,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r30.u64);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,716(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255c998
	if (cr6.eq) goto loc_8255C998;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,716(r29)
	PPC_STORE_U32(r29.u32 + 716, r30.u32);
	// b 0x8255c998
	goto loc_8255C998;
loc_8255C990:
	// li r11,3
	r11.s64 = 3;
	// stw r11,680(r29)
	PPC_STORE_U32(r29.u32 + 680, r11.u32);
loc_8255C998:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8255C9B4"))) PPC_WEAK_FUNC(sub_8255C9B4);
PPC_FUNC_IMPL(__imp__sub_8255C9B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255C9B8"))) PPC_WEAK_FUNC(sub_8255C9B8);
PPC_FUNC_IMPL(__imp__sub_8255C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
loc_8255C9C8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255c9e8
	if (cr6.eq) goto loc_8255C9E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255c9c8
	if (cr6.lt) goto loc_8255C9C8;
	// blr 
	return;
loc_8255C9E8:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8255CA08"))) PPC_WEAK_FUNC(sub_8255CA08);
PPC_FUNC_IMPL(__imp__sub_8255CA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CA0C"))) PPC_WEAK_FUNC(sub_8255CA0C);
PPC_FUNC_IMPL(__imp__sub_8255CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CA10"))) PPC_WEAK_FUNC(sub_8255CA10);
PPC_FUNC_IMPL(__imp__sub_8255CA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
loc_8255CA20:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255ca40
	if (cr6.eq) goto loc_8255CA40;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255ca20
	if (cr6.lt) goto loc_8255CA20;
	// blr 
	return;
loc_8255CA40:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8255CA60"))) PPC_WEAK_FUNC(sub_8255CA60);
PPC_FUNC_IMPL(__imp__sub_8255CA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CA64"))) PPC_WEAK_FUNC(sub_8255CA64);
PPC_FUNC_IMPL(__imp__sub_8255CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CA68"))) PPC_WEAK_FUNC(sub_8255CA68);
PPC_FUNC_IMPL(__imp__sub_8255CA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
loc_8255CA78:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255ca98
	if (cr6.eq) goto loc_8255CA98;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255ca78
	if (cr6.lt) goto loc_8255CA78;
	// blr 
	return;
loc_8255CA98:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
}

__attribute__((alias("__imp__sub_8255CAC4"))) PPC_WEAK_FUNC(sub_8255CAC4);
PPC_FUNC_IMPL(__imp__sub_8255CAC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CAC8"))) PPC_WEAK_FUNC(sub_8255CAC8);
PPC_FUNC_IMPL(__imp__sub_8255CAC8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255ca68
	sub_8255CA68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8255CB08"))) PPC_WEAK_FUNC(sub_8255CB08);
PPC_FUNC_IMPL(__imp__sub_8255CB08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255CB0C"))) PPC_WEAK_FUNC(sub_8255CB0C);
PPC_FUNC_IMPL(__imp__sub_8255CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CB10"))) PPC_WEAK_FUNC(sub_8255CB10);
PPC_FUNC_IMPL(__imp__sub_8255CB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CB38"))) PPC_WEAK_FUNC(sub_8255CB38);
PPC_FUNC_IMPL(__imp__sub_8255CB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,684(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// bge cr6,0x8255cb64
	if (!cr6.lt) goto loc_8255CB64;
	// rlwinm r11,r3,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r9,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r9.u64);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
loc_8255CB64:
	// lwz r11,684(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, r11.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// stw r9,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8255CB7C"))) PPC_WEAK_FUNC(sub_8255CB7C);
PPC_FUNC_IMPL(__imp__sub_8255CB7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CB80"))) PPC_WEAK_FUNC(sub_8255CB80);
PPC_FUNC_IMPL(__imp__sub_8255CB80) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827283f8
	sub_827283F8(ctx, base);
	// li r11,20
	r11.s64 = 20;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
loc_8255CBB0:
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// stwu r11,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8255cbb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255CBB0;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r11.u32);
	// std r11,672(r31)
	PPC_STORE_U64(r31.u32 + 672, r11.u64);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8255CBD8:
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// stb r11,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, r11.u8);
	// std r11,12(r10)
	PPC_STORE_U64(ctx.r10.u32 + 12, r11.u64);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// stwu r11,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8255cbd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255CBD8;
	// stw r11,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,688(r31)
	PPC_STORE_U64(r31.u32 + 688, r11.u64);
	// std r11,696(r31)
	PPC_STORE_U64(r31.u32 + 696, r11.u64);
	// std r11,704(r31)
	PPC_STORE_U64(r31.u32 + 704, r11.u64);
	// stw r11,712(r31)
	PPC_STORE_U32(r31.u32 + 712, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255CC20"))) PPC_WEAK_FUNC(sub_8255CC20);
PPC_FUNC_IMPL(__imp__sub_8255CC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CC24"))) PPC_WEAK_FUNC(sub_8255CC24);
PPC_FUNC_IMPL(__imp__sub_8255CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CC28"))) PPC_WEAK_FUNC(sub_8255CC28);
PPC_FUNC_IMPL(__imp__sub_8255CC28) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,716(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255cc58
	if (cr6.eq) goto loc_8255CC58;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r30.u32);
loc_8255CC58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255dc20
	sub_8255DC20(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_8255CC80"))) PPC_WEAK_FUNC(sub_8255CC80);
PPC_FUNC_IMPL(__imp__sub_8255CC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CC84"))) PPC_WEAK_FUNC(sub_8255CC84);
PPC_FUNC_IMPL(__imp__sub_8255CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CC88"))) PPC_WEAK_FUNC(sub_8255CC88);
PPC_FUNC_IMPL(__imp__sub_8255CC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8255cd98
	if (!cr6.eq) goto loc_8255CD98;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8255cf84
	if (cr6.eq) goto loc_8255CF84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// beq cr6,0x8255cccc
	if (cr6.eq) goto loc_8255CCCC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8255CCCC:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bgt cr6,0x8255cce4
	if (cr6.gt) goto loc_8255CCE4;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
loc_8255CCE4:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ldx r4,r3,r7
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r7.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bgt cr6,0x8255cd14
	if (cr6.gt) goto loc_8255CD14;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8255CD14:
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x8255cd24
	if (!cr0.eq) goto loc_8255CD24;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8255CD24:
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
loc_8255CD2C:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r4
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255cd50
	if (cr6.eq) goto loc_8255CD50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255cd2c
	if (cr6.lt) goto loc_8255CD2C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255CD50:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8255cf84
	if (cr6.eq) goto loc_8255CF84;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lbz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255cd7c
	if (!cr6.eq) goto loc_8255CD7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255c788
	sub_8255C788(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255CD7C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8255cf84
	if (!cr6.eq) goto loc_8255CF84;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255c658
	sub_8255C658(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255CD98:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8255ce60
	if (!cr6.eq) goto loc_8255CE60;
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// beq cr6,0x8255ce60
	if (cr6.eq) goto loc_8255CE60;
	// li r30,0
	r30.s64 = 0;
	// ld r9,672(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 672);
	// li r29,-1
	r29.s64 = -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
loc_8255CDC4:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// beq cr6,0x8255cde4
	if (cr6.eq) goto loc_8255CDE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x8255cdc4
	if (cr6.lt) goto loc_8255CDC4;
	// b 0x8255cde8
	goto loc_8255CDE8;
loc_8255CDE4:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8255CDE8:
	// bl 0x826068b8
	sub_826068B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255ce30
	if (!cr6.eq) goto loc_8255CE30;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8255cf7c
	if (cr6.eq) goto loc_8255CF7C;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 672);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// ld r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// bne cr6,0x8255cf7c
	if (!cr6.eq) goto loc_8255CF7C;
	// li r11,2
	r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255c8d0
	sub_8255C8D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255CE30:
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(r29.u32, 20, xer);
	// bge cr6,0x8255cf7c
	if (!cr6.lt) goto loc_8255CF7C;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// stw r30,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r30.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r30.u32);
	// std r30,672(r31)
	PPC_STORE_U64(r31.u32 + 672, r30.u64);
	// stw r30,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8255CE60:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8255cf84
	if (!cr6.eq) goto loc_8255CF84;
	// lwz r11,688(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// addi r28,r31,688
	r28.s64 = r31.s64 + 688;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// beq cr6,0x8255cf84
	if (cr6.eq) goto loc_8255CF84;
	// li r30,0
	r30.s64 = 0;
	// ld r9,672(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 672);
	// li r29,-1
	r29.s64 = -1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
loc_8255CE8C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// beq cr6,0x8255ceac
	if (cr6.eq) goto loc_8255CEAC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x8255ce8c
	if (cr6.lt) goto loc_8255CE8C;
	// b 0x8255ceb0
	goto loc_8255CEB0;
loc_8255CEAC:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8255CEB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82606820
	sub_82606820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255cf38
	if (!cr6.eq) goto loc_8255CF38;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8255cf58
	if (cr6.eq) goto loc_8255CF58;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 672);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// cmpld cr6,r9,r10
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, xer);
	// bne cr6,0x8255cf58
	if (!cr6.eq) goto loc_8255CF58;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255cf0c
	if (!cr6.eq) goto loc_8255CF0C;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8255cf10
	if (cr6.eq) goto loc_8255CF10;
loc_8255CF0C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8255CF10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8255cf58
	if (!cr6.eq) goto loc_8255CF58;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 672);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8255cf58
	goto loc_8255CF58;
loc_8255CF38:
	// cmplwi cr6,r29,20
	cr6.compare<uint32_t>(r29.u32, 20, xer);
	// bge cr6,0x8255cf58
	if (!cr6.lt) goto loc_8255CF58;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// stw r30,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r30.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r30.u32);
loc_8255CF58:
	// std r30,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r30.u64);
	// std r30,8(r28)
	PPC_STORE_U64(r28.u32 + 8, r30.u64);
	// std r30,16(r28)
	PPC_STORE_U64(r28.u32 + 16, r30.u64);
	// stw r30,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r30.u32);
	// lwz r3,716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 716);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255cf7c
	if (cr6.eq) goto loc_8255CF7C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r30.u32);
loc_8255CF7C:
	// std r30,672(r31)
	PPC_STORE_U64(r31.u32 + 672, r30.u64);
	// stw r30,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r30.u32);
loc_8255CF84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255CF88"))) PPC_WEAK_FUNC(sub_8255CF88);
PPC_FUNC_IMPL(__imp__sub_8255CF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255CF8C"))) PPC_WEAK_FUNC(sub_8255CF8C);
PPC_FUNC_IMPL(__imp__sub_8255CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255CF90"))) PPC_WEAK_FUNC(sub_8255CF90);
PPC_FUNC_IMPL(__imp__sub_8255CF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r8,20
	ctx.r8.s64 = 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8255CFA4:
	// cmplwi cr6,r9,20
	cr6.compare<uint32_t>(ctx.r9.u32, 20, xer);
	// bge cr6,0x8255cfbc
	if (!cr6.lt) goto loc_8255CFBC;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_8255CFBC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bdnz 0x8255cfa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255CFA4;
	// stw r10,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CFD0"))) PPC_WEAK_FUNC(sub_8255CFD0);
PPC_FUNC_IMPL(__imp__sub_8255CFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8255CFDC:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r4
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, xer);
	// beq cr6,0x8255cffc
	if (cr6.eq) goto loc_8255CFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255cfdc
	if (cr6.lt) goto loc_8255CFDC;
	// blr 
	return;
loc_8255CFFC:
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// std r9,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r9.u64);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8255D01C"))) PPC_WEAK_FUNC(sub_8255D01C);
PPC_FUNC_IMPL(__imp__sub_8255D01C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D020"))) PPC_WEAK_FUNC(sub_8255D020);
PPC_FUNC_IMPL(__imp__sub_8255D020) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8255D050:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r3
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, xer);
	// beq cr6,0x8255d080
	if (cr6.eq) goto loc_8255D080;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x8255d050
	if (cr6.lt) goto loc_8255D050;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8255D080:
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bge cr6,0x8255d0a0
	if (!cr6.lt) goto loc_8255D0A0;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// std r9,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r9.u64);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
loc_8255D0A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255D0B0"))) PPC_WEAK_FUNC(sub_8255D0B0);
PPC_FUNC_IMPL(__imp__sub_8255D0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D0B4"))) PPC_WEAK_FUNC(sub_8255D0B4);
PPC_FUNC_IMPL(__imp__sub_8255D0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D0B8"))) PPC_WEAK_FUNC(sub_8255D0B8);
PPC_FUNC_IMPL(__imp__sub_8255D0B8) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8255dfd8
	sub_8255DFD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255D0DC"))) PPC_WEAK_FUNC(sub_8255D0DC);
PPC_FUNC_IMPL(__imp__sub_8255D0DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D0E0"))) PPC_WEAK_FUNC(sub_8255D0E0);
PPC_FUNC_IMPL(__imp__sub_8255D0E0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8255d1f8
	if (cr6.lt) goto loc_8255D1F8;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x8255d1f8
	if (cr6.gt) goto loc_8255D1F8;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// lwz r3,21636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x8255d1f8
	if (cr6.eq) goto loc_8255D1F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r28,24
	r11.s64 = r28.s64 + 24;
loc_8255D134:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r9,r26
	cr6.compare<uint64_t>(ctx.r9.u64, r26.u64, xer);
	// beq cr6,0x8255d154
	if (cr6.eq) goto loc_8255D154;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x8255d134
	if (cr6.lt) goto loc_8255D134;
	// b 0x8255d15c
	goto loc_8255D15C;
loc_8255D154:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8255d1ec
	if (!cr6.eq) goto loc_8255D1EC;
loc_8255D15C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255cb38
	sub_8255CB38(ctx, base);
	// rlwinm r11,r3,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r29,1
	r29.s64 = 1;
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r29.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// lwz r3,21636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21636);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255d1b8
	if (cr6.eq) goto loc_8255D1B8;
	// lwz r3,21636(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 21636);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
loc_8255D1B8:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r26.u64);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// bl 0x8255dfd8
	sub_8255DFD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8255D1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8255D1F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8255D200"))) PPC_WEAK_FUNC(sub_8255D200);
PPC_FUNC_IMPL(__imp__sub_8255D200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8255D204"))) PPC_WEAK_FUNC(sub_8255D204);
PPC_FUNC_IMPL(__imp__sub_8255D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D208"))) PPC_WEAK_FUNC(sub_8255D208);
PPC_FUNC_IMPL(__imp__sub_8255D208) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8255d2c0
	if (cr6.lt) goto loc_8255D2C0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x8255d2c0
	if (cr6.gt) goto loc_8255D2C0;
	// stw r4,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r4.u32);
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// beq cr6,0x8255d2c0
	if (cr6.eq) goto loc_8255D2C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8255D240:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// cmpld cr6,r9,r5
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r5.u64, xer);
	// beq cr6,0x8255d260
	if (cr6.eq) goto loc_8255D260;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,20
	cr6.compare<int32_t>(ctx.r10.s32, 20, xer);
	// blt cr6,0x8255d240
	if (cr6.lt) goto loc_8255D240;
	// b 0x8255d268
	goto loc_8255D268;
loc_8255D260:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8255d2ac
	if (!cr6.eq) goto loc_8255D2AC;
loc_8255D268:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8255cb38
	sub_8255CB38(ctx, base);
	// rlwinm r11,r3,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,48(r11)
	PPC_STORE_U8(r11.u32 + 48, ctx.r7.u8);
	// stw r7,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r7.u32);
	// std r5,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r5.u64);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// bl 0x8255dfd8
	sub_8255DFD8(ctx, base);
loc_8255D2AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255D2C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255D2D0"))) PPC_WEAK_FUNC(sub_8255D2D0);
PPC_FUNC_IMPL(__imp__sub_8255D2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D2D4"))) PPC_WEAK_FUNC(sub_8255D2D4);
PPC_FUNC_IMPL(__imp__sub_8255D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D2D8"))) PPC_WEAK_FUNC(sub_8255D2D8);
PPC_FUNC_IMPL(__imp__sub_8255D2D8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8255c9b8
	sub_8255C9B8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8255d38c
	if (!cr6.eq) goto loc_8255D38C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8255D33C:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x8255d33c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255D33C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26236
	ctx.r5.s64 = r11.s64 + -26236;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-24480
	ctx.r5.s64 = ctx.r10.s64 + -24480;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e946c
	return;
loc_8255D38C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255ca10
	sub_8255CA10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255d3e4
	if (!cr6.eq) goto loc_8255D3E4;
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-14944
	ctx.r10.s64 = r11.s64 + -14944;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255d0e0
	sub_8255D0E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255d3e4
	if (!cr6.eq) goto loc_8255D3E4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255cfd0
	sub_8255CFD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
loc_8255D3E4:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8255D3F0"))) PPC_WEAK_FUNC(sub_8255D3F0);
PPC_FUNC_IMPL(__imp__sub_8255D3F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255D3F4"))) PPC_WEAK_FUNC(sub_8255D3F4);
PPC_FUNC_IMPL(__imp__sub_8255D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D3F8"))) PPC_WEAK_FUNC(sub_8255D3F8);
PPC_FUNC_IMPL(__imp__sub_8255D3F8) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x8255c9b8
	sub_8255C9B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8255d48c
	if (!cr6.eq) goto loc_8255D48C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8255D448:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x8255d448
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255D448;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-26236
	ctx.r5.s64 = r11.s64 + -26236;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,-24480
	ctx.r5.s64 = ctx.r10.s64 + -24480;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,16564
	ctx.r3.s64 = ctx.r8.s64 + 16564;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// b 0x8255d4e8
	goto loc_8255D4E8;
loc_8255D48C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255ca10
	sub_8255CA10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255d4e8
	if (!cr6.eq) goto loc_8255D4E8;
	// lis r11,-32170
	r11.s64 = -2108293120;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-14944
	ctx.r10.s64 = r11.s64 + -14944;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255d208
	sub_8255D208(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255d4e8
	if (!cr6.eq) goto loc_8255D4E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255cfd0
	sub_8255CFD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
loc_8255D4E8:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8255D504"))) PPC_WEAK_FUNC(sub_8255D504);
PPC_FUNC_IMPL(__imp__sub_8255D504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D508"))) PPC_WEAK_FUNC(sub_8255D508);
PPC_FUNC_IMPL(__imp__sub_8255D508) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ed070
	sub_828ED070(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255d3f8
	sub_8255D3F8(ctx, base);
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

__attribute__((alias("__imp__sub_8255D558"))) PPC_WEAK_FUNC(sub_8255D558);
PPC_FUNC_IMPL(__imp__sub_8255D558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D55C"))) PPC_WEAK_FUNC(sub_8255D55C);
PPC_FUNC_IMPL(__imp__sub_8255D55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D560"))) PPC_WEAK_FUNC(sub_8255D560);
PPC_FUNC_IMPL(__imp__sub_8255D560) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r11,-24332
	r28.s64 = r11.s64 + -24332;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a9f58
	sub_826A9F58(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x8255e498
	sub_8255E498(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// li r31,0
	r31.s64 = 0;
	// addi r6,r7,-12400
	ctx.r6.s64 = ctx.r7.s64 + -12400;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24344
	ctx.r4.s64 = ctx.r10.s64 + -24344;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8255e640
	sub_8255E640(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lis r7,-32170
	ctx.r7.s64 = -2108293120;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-11560
	ctx.r10.s64 = ctx.r7.s64 + -11560;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r31.u8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r4,r9,-24364
	ctx.r4.s64 = ctx.r9.s64 + -24364;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255e770
	sub_8255E770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1cd0
	sub_826A1CD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a1bd8
	sub_826A1BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a1ce0
	sub_826A1CE0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1bf0
	sub_826A1BF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e93e8
	sub_822E93E8(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// addi r27,r3,1
	r27.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826acae0
	sub_826ACAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac298
	sub_826AC298(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x8255deb8
	sub_8255DEB8(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0a8
	sub_826AD0A8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255d6d8
	if (cr6.eq) goto loc_8255D6D8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
loc_8255D6D8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255d6f4
	if (cr6.eq) goto loc_8255D6F4;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,-2
	cr6.compare<int32_t>(ctx.r4.s32, -2, xer);
	// beq cr6,0x8255d6f4
	if (cr6.eq) goto loc_8255D6F4;
	// bl 0x826a32d8
	sub_826A32D8(ctx, base);
loc_8255D6F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8255D6F8"))) PPC_WEAK_FUNC(sub_8255D6F8);
PPC_FUNC_IMPL(__imp__sub_8255D6F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8255D6FC"))) PPC_WEAK_FUNC(sub_8255D6FC);
PPC_FUNC_IMPL(__imp__sub_8255D6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D700"))) PPC_WEAK_FUNC(sub_8255D700);
PPC_FUNC_IMPL(__imp__sub_8255D700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8255d738
	if (cr6.eq) goto loc_8255D738;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255d73c
	if (!cr6.eq) goto loc_8255D73C;
loc_8255D738:
	// li r11,0
	r11.s64 = 0;
loc_8255D73C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8255d560
	sub_8255D560(ctx, base);
	// li r30,20
	r30.s64 = 20;
loc_8255D750:
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,134
	ctx.r8.u64 = ctx.r8.u64 | 134;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x825d5330
	sub_825D5330(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,32(r31)
	ea = 32 + r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8255d750
	if (!cr0.eq) goto loc_8255D750;
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

__attribute__((alias("__imp__sub_8255D7CC"))) PPC_WEAK_FUNC(sub_8255D7CC);
PPC_FUNC_IMPL(__imp__sub_8255D7CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D7D0"))) PPC_WEAK_FUNC(sub_8255D7D0);
PPC_FUNC_IMPL(__imp__sub_8255D7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8255d808
	if (!cr6.eq) goto loc_8255D808;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d834
	if (cr6.eq) goto loc_8255D834;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8255d834
	goto loc_8255D834;
loc_8255D808:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8255d834
	if (cr6.eq) goto loc_8255D834;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-11448
	ctx.r4.s64 = r11.s64 + -11448;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8255D834:
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

__attribute__((alias("__imp__sub_8255D848"))) PPC_WEAK_FUNC(sub_8255D848);
PPC_FUNC_IMPL(__imp__sub_8255D848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D84C"))) PPC_WEAK_FUNC(sub_8255D84C);
PPC_FUNC_IMPL(__imp__sub_8255D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D850"))) PPC_WEAK_FUNC(sub_8255D850);
PPC_FUNC_IMPL(__imp__sub_8255D850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8255d888
	if (!cr6.eq) goto loc_8255D888;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d8b4
	if (cr6.eq) goto loc_8255D8B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8255d8b4
	goto loc_8255D8B4;
loc_8255D888:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8255d8b4
	if (cr6.eq) goto loc_8255D8B4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-11328
	ctx.r4.s64 = r11.s64 + -11328;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8255D8B4:
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

__attribute__((alias("__imp__sub_8255D8C8"))) PPC_WEAK_FUNC(sub_8255D8C8);
PPC_FUNC_IMPL(__imp__sub_8255D8C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D8CC"))) PPC_WEAK_FUNC(sub_8255D8CC);
PPC_FUNC_IMPL(__imp__sub_8255D8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D8D0"))) PPC_WEAK_FUNC(sub_8255D8D0);
PPC_FUNC_IMPL(__imp__sub_8255D8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8255d908
	if (!cr6.eq) goto loc_8255D908;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d934
	if (cr6.eq) goto loc_8255D934;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8255d934
	goto loc_8255D934;
loc_8255D908:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8255d934
	if (cr6.eq) goto loc_8255D934;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-11208
	ctx.r4.s64 = r11.s64 + -11208;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8255D934:
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

__attribute__((alias("__imp__sub_8255D948"))) PPC_WEAK_FUNC(sub_8255D948);
PPC_FUNC_IMPL(__imp__sub_8255D948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D94C"))) PPC_WEAK_FUNC(sub_8255D94C);
PPC_FUNC_IMPL(__imp__sub_8255D94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D950"))) PPC_WEAK_FUNC(sub_8255D950);
PPC_FUNC_IMPL(__imp__sub_8255D950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8255d988
	if (!cr6.eq) goto loc_8255D988;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8255d9b4
	if (cr6.eq) goto loc_8255D9B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x8255d9b4
	goto loc_8255D9B4;
loc_8255D988:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8255d9b4
	if (cr6.eq) goto loc_8255D9B4;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-11088
	ctx.r4.s64 = r11.s64 + -11088;
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8255D9B4:
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

__attribute__((alias("__imp__sub_8255D9C8"))) PPC_WEAK_FUNC(sub_8255D9C8);
PPC_FUNC_IMPL(__imp__sub_8255D9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D9CC"))) PPC_WEAK_FUNC(sub_8255D9CC);
PPC_FUNC_IMPL(__imp__sub_8255D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255D9D0"))) PPC_WEAK_FUNC(sub_8255D9D0);
PPC_FUNC_IMPL(__imp__sub_8255D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255daa8
	if (cr6.eq) goto loc_8255DAA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8c70
	sub_822E8C70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8255da1c
	if (!cr6.eq) goto loc_8255DA1C;
loc_8255DA14:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8255daa8
	goto loc_8255DAA8;
loc_8255DA1C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8255da14
	if (!cr6.eq) goto loc_8255DA14;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-10972
	r30.s64 = r11.s64 + -10972;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8255da64
	if (cr6.eq) goto loc_8255DA64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8255daa8
	goto loc_8255DAA8;
loc_8255DA64:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x828e9680
	sub_828E9680(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255da94
	if (cr6.eq) goto loc_8255DA94;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8255daa8
	goto loc_8255DAA8;
loc_8255DA94:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826a9428
	sub_826A9428(ctx, base);
loc_8255DAA8:
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

__attribute__((alias("__imp__sub_8255DABC"))) PPC_WEAK_FUNC(sub_8255DABC);
PPC_FUNC_IMPL(__imp__sub_8255DABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DAC0"))) PPC_WEAK_FUNC(sub_8255DAC0);
PPC_FUNC_IMPL(__imp__sub_8255DAC0) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8255daf8
	if (cr6.eq) goto loc_8255DAF8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d7d0
	sub_8255D7D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255DAF8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-11448
	ctx.r10.s64 = r11.s64 + -11448;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255DB10"))) PPC_WEAK_FUNC(sub_8255DB10);
PPC_FUNC_IMPL(__imp__sub_8255DB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DB14"))) PPC_WEAK_FUNC(sub_8255DB14);
PPC_FUNC_IMPL(__imp__sub_8255DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DB18"))) PPC_WEAK_FUNC(sub_8255DB18);
PPC_FUNC_IMPL(__imp__sub_8255DB18) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8255db50
	if (cr6.eq) goto loc_8255DB50;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d850
	sub_8255D850(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255DB50:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-11328
	ctx.r10.s64 = r11.s64 + -11328;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255DB68"))) PPC_WEAK_FUNC(sub_8255DB68);
PPC_FUNC_IMPL(__imp__sub_8255DB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DB6C"))) PPC_WEAK_FUNC(sub_8255DB6C);
PPC_FUNC_IMPL(__imp__sub_8255DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DB70"))) PPC_WEAK_FUNC(sub_8255DB70);
PPC_FUNC_IMPL(__imp__sub_8255DB70) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8255dba8
	if (cr6.eq) goto loc_8255DBA8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d8d0
	sub_8255D8D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255DBA8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-11208
	ctx.r10.s64 = r11.s64 + -11208;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255DBC0"))) PPC_WEAK_FUNC(sub_8255DBC0);
PPC_FUNC_IMPL(__imp__sub_8255DBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DBC4"))) PPC_WEAK_FUNC(sub_8255DBC4);
PPC_FUNC_IMPL(__imp__sub_8255DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DBC8"))) PPC_WEAK_FUNC(sub_8255DBC8);
PPC_FUNC_IMPL(__imp__sub_8255DBC8) {
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
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// beq cr6,0x8255dc00
	if (cr6.eq) goto loc_8255DC00;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d950
	sub_8255D950(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8255DC00:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-11088
	ctx.r10.s64 = r11.s64 + -11088;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255DC18"))) PPC_WEAK_FUNC(sub_8255DC18);
PPC_FUNC_IMPL(__imp__sub_8255DC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DC1C"))) PPC_WEAK_FUNC(sub_8255DC1C);
PPC_FUNC_IMPL(__imp__sub_8255DC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DC20"))) PPC_WEAK_FUNC(sub_8255DC20);
PPC_FUNC_IMPL(__imp__sub_8255DC20) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255dc68
	if (cr6.eq) goto loc_8255DC68;
loc_8255DC40:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255dc5c
	if (cr6.eq) goto loc_8255DC5C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bne 0x8255dc5c
	if (!cr0.eq) goto loc_8255DC5C;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
loc_8255DC5C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255dc40
	if (!cr6.eq) goto loc_8255DC40;
loc_8255DC68:
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255dca0
	if (cr6.eq) goto loc_8255DCA0;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8255DC78:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255dc98
	if (cr6.eq) goto loc_8255DC98;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255DC98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8255dc78
	if (!cr6.eq) goto loc_8255DC78;
loc_8255DCA0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255dcb0
	if (cr6.eq) goto loc_8255DCB0;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255DCB0:
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255DCBC"))) PPC_WEAK_FUNC(sub_8255DCBC);
PPC_FUNC_IMPL(__imp__sub_8255DCBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255DCC0"))) PPC_WEAK_FUNC(sub_8255DCC0);
PPC_FUNC_IMPL(__imp__sub_8255DCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8255dcf8
	if (!cr6.lt) goto loc_8255DCF8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,32456
	ctx.r3.s64 = r11.s64 + 32456;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8255DCF8:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x8255dd08
	if (!cr6.lt) goto loc_8255DD08;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8255DD08:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8255dd20
	if (!cr6.lt) goto loc_8255DD20;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8255dd20
	if (cr6.gt) goto loc_8255DD20;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8255DD20:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// addi r3,r30,21
	ctx.r3.s64 = r30.s64 + 21;
	// rlwinm r31,r10,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255dd80
	if (cr6.eq) goto loc_8255DD80;
loc_8255DD60:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255dd70
	if (cr6.eq) goto loc_8255DD70;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_8255DD70:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255dd60
	if (!cr6.eq) goto loc_8255DD60;
loc_8255DD80:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bgt cr6,0x8255de04
	if (cr6.gt) goto loc_8255DE04;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255ddb8
	if (cr6.eq) goto loc_8255DDB8;
loc_8255DD98:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255dda8
	if (cr6.eq) goto loc_8255DDA8;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8255DDA8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255dd98
	if (!cr6.eq) goto loc_8255DD98;
loc_8255DDB8:
	// subf. r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8255dddc
	if (cr0.eq) goto loc_8255DDDC;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8255DDC8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255ddd4
	if (cr6.eq) goto loc_8255DDD4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8255DDD4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8255ddc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255DDC8;
loc_8255DDDC:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8255de90
	if (cr6.eq) goto loc_8255DE90;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_8255DDEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255ddf8
	if (cr6.eq) goto loc_8255DDF8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_8255DDF8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8255ddec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255DDEC;
	// b 0x8255de90
	goto loc_8255DE90;
loc_8255DE04:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255de34
	if (cr6.eq) goto loc_8255DE34;
loc_8255DE14:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255de24
	if (cr6.eq) goto loc_8255DE24;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_8255DE24:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255de14
	if (!cr6.eq) goto loc_8255DE14;
loc_8255DE34:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8255de6c
	if (cr6.eq) goto loc_8255DE6C;
loc_8255DE4C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255de5c
	if (cr6.eq) goto loc_8255DE5C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8255DE5C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255de4c
	if (!cr6.eq) goto loc_8255DE4C;
loc_8255DE6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8255de90
	if (cr6.eq) goto loc_8255DE90;
	// mtctr r29
	ctr.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8255DE7C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8255de88
	if (cr6.eq) goto loc_8255DE88;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8255DE88:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8255de7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8255DE7C;
loc_8255DE90:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255dea0
	if (cr6.eq) goto loc_8255DEA0;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8255DEA0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255DEB4"))) PPC_WEAK_FUNC(sub_8255DEB4);
PPC_FUNC_IMPL(__imp__sub_8255DEB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255DEB8"))) PPC_WEAK_FUNC(sub_8255DEB8);
PPC_FUNC_IMPL(__imp__sub_8255DEB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x8255dee4
	if (!cr6.eq) goto loc_8255DEE4;
	// bl 0x826aca08
	sub_826ACA08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8255DEE4:
	// bl 0x826a24b0
	sub_826A24B0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r4,r11,-10972
	ctx.r4.s64 = r11.s64 + -10972;
	// bl 0x826a2768
	sub_826A2768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada08
	sub_826ADA08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255df20
	if (cr6.eq) goto loc_8255DF20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826aaca0
	sub_826AACA0(ctx, base);
loc_8255DF20:
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad2b0
	sub_826AD2B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8255DF40"))) PPC_WEAK_FUNC(sub_8255DF40);
PPC_FUNC_IMPL(__imp__sub_8255DF40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255DF44"))) PPC_WEAK_FUNC(sub_8255DF44);
PPC_FUNC_IMPL(__imp__sub_8255DF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255DF48"))) PPC_WEAK_FUNC(sub_8255DF48);
PPC_FUNC_IMPL(__imp__sub_8255DF48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255df9c
	if (cr6.eq) goto loc_8255DF9C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d9d0
	sub_8255D9D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8255dfa4
	if (!cr6.lt) goto loc_8255DFA4;
loc_8255DF9C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8255dfc0
	goto loc_8255DFC0;
loc_8255DFA4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8255dfc0
	if (!cr6.eq) goto loc_8255DFC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8255DFC0:
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

__attribute__((alias("__imp__sub_8255DFD4"))) PPC_WEAK_FUNC(sub_8255DFD4);
PPC_FUNC_IMPL(__imp__sub_8255DFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DFD8"))) PPC_WEAK_FUNC(sub_8255DFD8);
PPC_FUNC_IMPL(__imp__sub_8255DFD8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255e020
	if (!cr6.eq) goto loc_8255E020;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8255e020
	if (cr6.gt) goto loc_8255E020;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8255dcc0
	sub_8255DCC0(ctx, base);
loc_8255E020:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,31,1,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8255e040
	if (cr6.gt) goto loc_8255E040;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8255E040:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8255e06c
	if (!cr6.eq) goto loc_8255E06C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8259c760
	sub_8259C760(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r3.u32);
loc_8255E06C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0x8;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e088
	if (cr0.eq) goto loc_8255E088;
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_8255E088:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8255E098"))) PPC_WEAK_FUNC(sub_8255E098);
PPC_FUNC_IMPL(__imp__sub_8255E098) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255E09C"))) PPC_WEAK_FUNC(sub_8255E09C);
PPC_FUNC_IMPL(__imp__sub_8255E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E0A0"))) PPC_WEAK_FUNC(sub_8255E0A0);
PPC_FUNC_IMPL(__imp__sub_8255E0A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,716(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255e0d0
	if (cr6.eq) goto loc_8255E0D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r30.u32);
loc_8255E0D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255dc20
	sub_8255DC20(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_8255E0F8"))) PPC_WEAK_FUNC(sub_8255E0F8);
PPC_FUNC_IMPL(__imp__sub_8255E0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E0FC"))) PPC_WEAK_FUNC(sub_8255E0FC);
PPC_FUNC_IMPL(__imp__sub_8255E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E100"))) PPC_WEAK_FUNC(sub_8255E100);
PPC_FUNC_IMPL(__imp__sub_8255E100) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255e154
	if (cr6.eq) goto loc_8255E154;
	// lwz r3,716(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255e138
	if (cr6.eq) goto loc_8255E138;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r30.u32);
loc_8255E138:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255dc20
	sub_8255DC20(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8255E154:
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

__attribute__((alias("__imp__sub_8255E168"))) PPC_WEAK_FUNC(sub_8255E168);
PPC_FUNC_IMPL(__imp__sub_8255E168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E16C"))) PPC_WEAK_FUNC(sub_8255E16C);
PPC_FUNC_IMPL(__imp__sub_8255E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E170"))) PPC_WEAK_FUNC(sub_8255E170);
PPC_FUNC_IMPL(__imp__sub_8255E170) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255e1bc
	if (cr6.eq) goto loc_8255E1BC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8255d9d0
	sub_8255D9D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8255e1c0
	if (!cr6.lt) goto loc_8255E1C0;
loc_8255E1BC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8255E1C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255E1D0"))) PPC_WEAK_FUNC(sub_8255E1D0);
PPC_FUNC_IMPL(__imp__sub_8255E1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E1D4"))) PPC_WEAK_FUNC(sub_8255E1D4);
PPC_FUNC_IMPL(__imp__sub_8255E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E1D8"))) PPC_WEAK_FUNC(sub_8255E1D8);
PPC_FUNC_IMPL(__imp__sub_8255E1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_8255E1E4"))) PPC_WEAK_FUNC(sub_8255E1E4);
PPC_FUNC_IMPL(__imp__sub_8255E1E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255df48
	sub_8255DF48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E1E8"))) PPC_WEAK_FUNC(sub_8255E1E8);
PPC_FUNC_IMPL(__imp__sub_8255E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255e230
	if (!cr6.eq) goto loc_8255E230;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e228
	if (cr0.eq) goto loc_8255E228;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8255E228:
	// li r11,1
	r11.s64 = 1;
	// b 0x8255e234
	goto loc_8255E234;
loc_8255E230:
	// li r11,0
	r11.s64 = 0;
loc_8255E234:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-24396
	ctx.r7.s64 = ctx.r10.s64 + -24396;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8255E264"))) PPC_WEAK_FUNC(sub_8255E264);
PPC_FUNC_IMPL(__imp__sub_8255E264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E268"))) PPC_WEAK_FUNC(sub_8255E268);
PPC_FUNC_IMPL(__imp__sub_8255E268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255e2b0
	if (!cr6.eq) goto loc_8255E2B0;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e2a8
	if (cr0.eq) goto loc_8255E2A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8255E2A8:
	// li r11,1
	r11.s64 = 1;
	// b 0x8255e2b4
	goto loc_8255E2B4;
loc_8255E2B0:
	// li r11,0
	r11.s64 = 0;
loc_8255E2B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-24388
	ctx.r7.s64 = ctx.r10.s64 + -24388;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8255E2E4"))) PPC_WEAK_FUNC(sub_8255E2E4);
PPC_FUNC_IMPL(__imp__sub_8255E2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E2E8"))) PPC_WEAK_FUNC(sub_8255E2E8);
PPC_FUNC_IMPL(__imp__sub_8255E2E8) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255e370
	if (cr6.eq) goto loc_8255E370;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-10972
	ctx.r4.s64 = ctx.r10.s64 + -10972;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255e370
	if (!cr6.eq) goto loc_8255E370;
	// lis r11,-32170
	r11.s64 = -2108293120;
	// addi r10,r11,-8032
	ctx.r10.s64 = r11.s64 + -8032;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8255E370:
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e39c
	if (cr6.eq) goto loc_8255E39C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E39C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8255E3AC"))) PPC_WEAK_FUNC(sub_8255E3AC);
PPC_FUNC_IMPL(__imp__sub_8255E3AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8255E3B0"))) PPC_WEAK_FUNC(sub_8255E3B0);
PPC_FUNC_IMPL(__imp__sub_8255E3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255e450
	if (cr6.eq) goto loc_8255E450;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac8d0
	sub_826AC8D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-10972
	ctx.r4.s64 = ctx.r10.s64 + -10972;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a3638
	sub_826A3638(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8255e450
	if (!cr6.eq) goto loc_8255E450;
	// lis r11,-32170
	r11.s64 = -2108293120;
	// addi r10,r11,-8032
	ctx.r10.s64 = r11.s64 + -8032;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8255E450:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac010
	sub_826AC010(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r31,r29,r3
	r31.s64 = ctx.r3.s64 - r29.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e480
	if (cr6.eq) goto loc_8255E480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E480:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8255E490"))) PPC_WEAK_FUNC(sub_8255E490);
PPC_FUNC_IMPL(__imp__sub_8255E490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255E494"))) PPC_WEAK_FUNC(sub_8255E494);
PPC_FUNC_IMPL(__imp__sub_8255E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E498"))) PPC_WEAK_FUNC(sub_8255E498);
PPC_FUNC_IMPL(__imp__sub_8255E498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-7936
	ctx.r10.s64 = ctx.r10.s64 + -7936;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,-29496
	ctx.r6.s64 = ctx.r9.s64 + -29496;
	// addi r5,r8,-28600
	ctx.r5.s64 = ctx.r8.s64 + -28600;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r4,r7,-10972
	ctx.r4.s64 = ctx.r7.s64 + -10972;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826a94d0
	sub_826A94D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8255E50C"))) PPC_WEAK_FUNC(sub_8255E50C);
PPC_FUNC_IMPL(__imp__sub_8255E50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E510"))) PPC_WEAK_FUNC(sub_8255E510);
PPC_FUNC_IMPL(__imp__sub_8255E510) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255e2e8
	sub_8255E2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E524"))) PPC_WEAK_FUNC(sub_8255E524);
PPC_FUNC_IMPL(__imp__sub_8255E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E528"))) PPC_WEAK_FUNC(sub_8255E528);
PPC_FUNC_IMPL(__imp__sub_8255E528) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255e3b0
	sub_8255E3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E53C"))) PPC_WEAK_FUNC(sub_8255E53C);
PPC_FUNC_IMPL(__imp__sub_8255E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E540"))) PPC_WEAK_FUNC(sub_8255E540);
PPC_FUNC_IMPL(__imp__sub_8255E540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255e588
	if (!cr6.eq) goto loc_8255E588;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e580
	if (cr0.eq) goto loc_8255E580;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8255E580:
	// li r11,1
	r11.s64 = 1;
	// b 0x8255e58c
	goto loc_8255E58C;
loc_8255E588:
	// li r11,0
	r11.s64 = 0;
loc_8255E58C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-24380
	ctx.r7.s64 = ctx.r10.s64 + -24380;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8255E5BC"))) PPC_WEAK_FUNC(sub_8255E5BC);
PPC_FUNC_IMPL(__imp__sub_8255E5BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E5C0"))) PPC_WEAK_FUNC(sub_8255E5C0);
PPC_FUNC_IMPL(__imp__sub_8255E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82307b58
	sub_82307B58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8255e608
	if (!cr6.eq) goto loc_8255E608;
	// addic. r11,r30,8
	xer.ca = r30.u32 > 4294967287;
	r11.s64 = r30.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8255e600
	if (cr0.eq) goto loc_8255E600;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8255E600:
	// li r11,1
	r11.s64 = 1;
	// b 0x8255e60c
	goto loc_8255E60C;
loc_8255E608:
	// li r11,0
	r11.s64 = 0;
loc_8255E60C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// addi r7,r10,-24372
	ctx.r7.s64 = ctx.r10.s64 + -24372;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8255E63C"))) PPC_WEAK_FUNC(sub_8255E63C);
PPC_FUNC_IMPL(__imp__sub_8255E63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E640"))) PPC_WEAK_FUNC(sub_8255E640);
PPC_FUNC_IMPL(__imp__sub_8255E640) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r31.u8);
	// bl 0x822e99e8
	sub_822E99E8(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8255e1e8
	sub_8255E1E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e6e8
	if (cr6.eq) goto loc_8255E6E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e6e4
	if (cr6.eq) goto loc_8255E6E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E6E4:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_8255E6E8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8255e540
	sub_8255E540(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e73c
	if (cr6.eq) goto loc_8255E73C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e738
	if (cr6.eq) goto loc_8255E738;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E738:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_8255E73C:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,4376
	ctx.r10.s64 = r11.s64 + 4376;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8255E768"))) PPC_WEAK_FUNC(sub_8255E768);
PPC_FUNC_IMPL(__imp__sub_8255E768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255E76C"))) PPC_WEAK_FUNC(sub_8255E76C);
PPC_FUNC_IMPL(__imp__sub_8255E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E770"))) PPC_WEAK_FUNC(sub_8255E770);
PPC_FUNC_IMPL(__imp__sub_8255E770) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825028b0
	sub_825028B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8255e268
	sub_8255E268(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e7f0
	if (cr6.eq) goto loc_8255E7F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e7ec
	if (cr6.eq) goto loc_8255E7EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E7EC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_8255E7F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8255e5c0
	sub_8255E5C0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826a6a88
	sub_826A6A88(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e844
	if (cr6.eq) goto loc_8255E844;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8255e840
	if (cr6.eq) goto loc_8255E840;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8255E840:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
loc_8255E844:
	// lis r11,-32177
	r11.s64 = -2108751872;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,-19664
	ctx.r10.s64 = r11.s64 + -19664;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9fe0
	sub_826A9FE0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e9b10
	sub_822E9B10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8255E870"))) PPC_WEAK_FUNC(sub_8255E870);
PPC_FUNC_IMPL(__imp__sub_8255E870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8255E874"))) PPC_WEAK_FUNC(sub_8255E874);
PPC_FUNC_IMPL(__imp__sub_8255E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E878"))) PPC_WEAK_FUNC(sub_8255E878);
PPC_FUNC_IMPL(__imp__sub_8255E878) {
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
	// addi r9,r11,-24152
	ctx.r9.s64 = r11.s64 + -24152;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255e8ac
	if (cr6.eq) goto loc_8255E8AC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8255E8AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8255E8BC"))) PPC_WEAK_FUNC(sub_8255E8BC);
PPC_FUNC_IMPL(__imp__sub_8255E8BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E8C0"))) PPC_WEAK_FUNC(sub_8255E8C0);
PPC_FUNC_IMPL(__imp__sub_8255E8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r11,1844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1844, r11.u8);
	// addi r4,r10,-24116
	ctx.r4.s64 = ctx.r10.s64 + -24116;
	// addi r3,r9,-24148
	ctx.r3.s64 = ctx.r9.s64 + -24148;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_8255E8DC"))) PPC_WEAK_FUNC(sub_8255E8DC);
PPC_FUNC_IMPL(__imp__sub_8255E8DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E8E0"))) PPC_WEAK_FUNC(sub_8255E8E0);
PPC_FUNC_IMPL(__imp__sub_8255E8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,1844(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1844, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E8EC"))) PPC_WEAK_FUNC(sub_8255E8EC);
PPC_FUNC_IMPL(__imp__sub_8255E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E8F0"))) PPC_WEAK_FUNC(sub_8255E8F0);
PPC_FUNC_IMPL(__imp__sub_8255E8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8255E8F4"))) PPC_WEAK_FUNC(sub_8255E8F4);
PPC_FUNC_IMPL(__imp__sub_8255E8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E8F8"))) PPC_WEAK_FUNC(sub_8255E8F8);
PPC_FUNC_IMPL(__imp__sub_8255E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// stb r11,1843(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1843, r11.u8);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stb r11,1846(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1846, r11.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r3,540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 540, ctx.r3.u32);
	// addi r5,r8,-24112
	ctx.r5.s64 = ctx.r8.s64 + -24112;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r6,16564
	ctx.r3.s64 = ctx.r6.s64 + 16564;
	// stw r11,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, r11.u32);
	// addi r4,r7,22032
	ctx.r4.s64 = ctx.r7.s64 + 22032;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 548, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8255E93C"))) PPC_WEAK_FUNC(sub_8255E93C);
PPC_FUNC_IMPL(__imp__sub_8255E93C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255E940"))) PPC_WEAK_FUNC(sub_8255E940);
PPC_FUNC_IMPL(__imp__sub_8255E940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,1843(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1843, r11.u8);
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, r11.u32);
	// stw r10,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// stb r11,548(r3)
	PPC_STORE_U8(ctx.r3.u32 + 548, r11.u8);
	// stb r11,549(r3)
	PPC_STORE_U8(ctx.r3.u32 + 549, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E960"))) PPC_WEAK_FUNC(sub_8255E960);
PPC_FUNC_IMPL(__imp__sub_8255E960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 548, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E97C"))) PPC_WEAK_FUNC(sub_8255E97C);
PPC_FUNC_IMPL(__imp__sub_8255E97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E980"))) PPC_WEAK_FUNC(sub_8255E980);
PPC_FUNC_IMPL(__imp__sub_8255E980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E98C"))) PPC_WEAK_FUNC(sub_8255E98C);
PPC_FUNC_IMPL(__imp__sub_8255E98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E990"))) PPC_WEAK_FUNC(sub_8255E990);
PPC_FUNC_IMPL(__imp__sub_8255E990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,2
	r11.s64 = 2;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E99C"))) PPC_WEAK_FUNC(sub_8255E99C);
PPC_FUNC_IMPL(__imp__sub_8255E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9A0"))) PPC_WEAK_FUNC(sub_8255E9A0);
PPC_FUNC_IMPL(__imp__sub_8255E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9AC"))) PPC_WEAK_FUNC(sub_8255E9AC);
PPC_FUNC_IMPL(__imp__sub_8255E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9B0"))) PPC_WEAK_FUNC(sub_8255E9B0);
PPC_FUNC_IMPL(__imp__sub_8255E9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9BC"))) PPC_WEAK_FUNC(sub_8255E9BC);
PPC_FUNC_IMPL(__imp__sub_8255E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9C0"))) PPC_WEAK_FUNC(sub_8255E9C0);
PPC_FUNC_IMPL(__imp__sub_8255E9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9CC"))) PPC_WEAK_FUNC(sub_8255E9CC);
PPC_FUNC_IMPL(__imp__sub_8255E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9D0"))) PPC_WEAK_FUNC(sub_8255E9D0);
PPC_FUNC_IMPL(__imp__sub_8255E9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 552, r11.u32);
	// stb r11,1840(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1840, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9E0"))) PPC_WEAK_FUNC(sub_8255E9E0);
PPC_FUNC_IMPL(__imp__sub_8255E9E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9E8"))) PPC_WEAK_FUNC(sub_8255E9E8);
PPC_FUNC_IMPL(__imp__sub_8255E9E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9EC"))) PPC_WEAK_FUNC(sub_8255E9EC);
PPC_FUNC_IMPL(__imp__sub_8255E9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255E9F0"))) PPC_WEAK_FUNC(sub_8255E9F0);
PPC_FUNC_IMPL(__imp__sub_8255E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,6
	r11.s64 = 6;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255E9FC"))) PPC_WEAK_FUNC(sub_8255E9FC);
PPC_FUNC_IMPL(__imp__sub_8255E9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA00"))) PPC_WEAK_FUNC(sub_8255EA00);
PPC_FUNC_IMPL(__imp__sub_8255EA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA04"))) PPC_WEAK_FUNC(sub_8255EA04);
PPC_FUNC_IMPL(__imp__sub_8255EA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA08"))) PPC_WEAK_FUNC(sub_8255EA08);
PPC_FUNC_IMPL(__imp__sub_8255EA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,12
	r11.s64 = 12;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA14"))) PPC_WEAK_FUNC(sub_8255EA14);
PPC_FUNC_IMPL(__imp__sub_8255EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA18"))) PPC_WEAK_FUNC(sub_8255EA18);
PPC_FUNC_IMPL(__imp__sub_8255EA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,13
	r11.s64 = 13;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA24"))) PPC_WEAK_FUNC(sub_8255EA24);
PPC_FUNC_IMPL(__imp__sub_8255EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA28"))) PPC_WEAK_FUNC(sub_8255EA28);
PPC_FUNC_IMPL(__imp__sub_8255EA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA34"))) PPC_WEAK_FUNC(sub_8255EA34);
PPC_FUNC_IMPL(__imp__sub_8255EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA38"))) PPC_WEAK_FUNC(sub_8255EA38);
PPC_FUNC_IMPL(__imp__sub_8255EA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,4
	r11.s64 = 4;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA44"))) PPC_WEAK_FUNC(sub_8255EA44);
PPC_FUNC_IMPL(__imp__sub_8255EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA48"))) PPC_WEAK_FUNC(sub_8255EA48);
PPC_FUNC_IMPL(__imp__sub_8255EA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA4C"))) PPC_WEAK_FUNC(sub_8255EA4C);
PPC_FUNC_IMPL(__imp__sub_8255EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA50"))) PPC_WEAK_FUNC(sub_8255EA50);
PPC_FUNC_IMPL(__imp__sub_8255EA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,5
	r11.s64 = 5;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA5C"))) PPC_WEAK_FUNC(sub_8255EA5C);
PPC_FUNC_IMPL(__imp__sub_8255EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA60"))) PPC_WEAK_FUNC(sub_8255EA60);
PPC_FUNC_IMPL(__imp__sub_8255EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,19
	r11.s64 = 19;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA6C"))) PPC_WEAK_FUNC(sub_8255EA6C);
PPC_FUNC_IMPL(__imp__sub_8255EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA70"))) PPC_WEAK_FUNC(sub_8255EA70);
PPC_FUNC_IMPL(__imp__sub_8255EA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,13
	r11.s64 = 13;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA7C"))) PPC_WEAK_FUNC(sub_8255EA7C);
PPC_FUNC_IMPL(__imp__sub_8255EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA80"))) PPC_WEAK_FUNC(sub_8255EA80);
PPC_FUNC_IMPL(__imp__sub_8255EA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,20
	r11.s64 = 20;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA8C"))) PPC_WEAK_FUNC(sub_8255EA8C);
PPC_FUNC_IMPL(__imp__sub_8255EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EA90"))) PPC_WEAK_FUNC(sub_8255EA90);
PPC_FUNC_IMPL(__imp__sub_8255EA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EA9C"))) PPC_WEAK_FUNC(sub_8255EA9C);
PPC_FUNC_IMPL(__imp__sub_8255EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAA0"))) PPC_WEAK_FUNC(sub_8255EAA0);
PPC_FUNC_IMPL(__imp__sub_8255EAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,6
	r11.s64 = 6;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
}

__attribute__((alias("__imp__sub_8255EAA8"))) PPC_WEAK_FUNC(sub_8255EAA8);
PPC_FUNC_IMPL(__imp__sub_8255EAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EAAC"))) PPC_WEAK_FUNC(sub_8255EAAC);
PPC_FUNC_IMPL(__imp__sub_8255EAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAB0"))) PPC_WEAK_FUNC(sub_8255EAB0);
PPC_FUNC_IMPL(__imp__sub_8255EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,12
	r11.s64 = 12;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EABC"))) PPC_WEAK_FUNC(sub_8255EABC);
PPC_FUNC_IMPL(__imp__sub_8255EABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8255EAC0"))) PPC_WEAK_FUNC(sub_8255EAC0);
PPC_FUNC_IMPL(__imp__sub_8255EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,13
	r11.s64 = 13;
	// stw r11,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255EACC"))) PPC_WEAK_FUNC(sub_8255EACC);
PPC_FUNC_IMPL(__imp__sub_8255EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

