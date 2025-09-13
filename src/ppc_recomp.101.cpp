#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82495BE8"))) PPC_WEAK_FUNC(sub_82495BE8);
PPC_FUNC_IMPL(__imp__sub_82495BE8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,26628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26628);
	ctx.f12.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f0,8740(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8740);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blt cr6,0x82495c64
	if (cr6.lt) goto loc_82495C64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82495c48
	if (!cr6.gt) goto loc_82495C48;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82495c48
	if (!cr6.lt) goto loc_82495C48;
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82495c64
	goto loc_82495C64;
loc_82495C48:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82495c58
	if (cr6.gt) goto loc_82495C58;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// b 0x82495c64
	goto loc_82495C64;
loc_82495C58:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82495c64
	if (cr6.lt) goto loc_82495C64;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82495C64:
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,8
	r11.s64 = 8;
	// lfs f11,-25500(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25500);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f2,f11
	cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x82495cb4
	if (cr6.gt) goto loc_82495CB4;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82495c98
	if (!cr6.gt) goto loc_82495C98;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82495c98
	if (!cr6.lt) goto loc_82495C98;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// b 0x82495cb4
	goto loc_82495CB4;
loc_82495C98:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82495ca8
	if (cr6.gt) goto loc_82495CA8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x82495cb4
	goto loc_82495CB4;
loc_82495CA8:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x82495cb4
	if (cr6.lt) goto loc_82495CB4;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82495CB4:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82495cf4
	if (cr6.lt) goto loc_82495CF4;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x82495cd8
	if (!cr6.gt) goto loc_82495CD8;
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x82495cd8
	if (!cr6.lt) goto loc_82495CD8;
	// li r11,4
	r11.s64 = 4;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82495cf4
	goto loc_82495CF4;
loc_82495CD8:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x82495ce8
	if (cr6.gt) goto loc_82495CE8;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82495cf4
	goto loc_82495CF4;
loc_82495CE8:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x82495cf4
	if (cr6.lt) goto loc_82495CF4;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82495CF4:
	// fcmpu cr6,f1,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bgt cr6,0x82495d34
	if (cr6.gt) goto loc_82495D34;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x82495d18
	if (!cr6.gt) goto loc_82495D18;
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bge cr6,0x82495d18
	if (!cr6.lt) goto loc_82495D18;
	// li r11,3
	r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82495d34
	goto loc_82495D34;
loc_82495D18:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x82495d28
	if (cr6.gt) goto loc_82495D28;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x82495d34
	goto loc_82495D34;
loc_82495D28:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x82495d34
	if (cr6.lt) goto loc_82495D34;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
loc_82495D34:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// beq cr6,0x82495d60
	if (cr6.eq) goto loc_82495D60;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82495f88
	sub_82495F88(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82495D60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82495D70"))) PPC_WEAK_FUNC(sub_82495D70);
PPC_FUNC_IMPL(__imp__sub_82495D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82495D74"))) PPC_WEAK_FUNC(sub_82495D74);
PPC_FUNC_IMPL(__imp__sub_82495D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495D78"))) PPC_WEAK_FUNC(sub_82495D78);
PPC_FUNC_IMPL(__imp__sub_82495D78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// li r27,-1
	r27.s64 = -1;
	// mr r29,r25
	r29.u64 = r25.u64;
	// bl 0x82490420
	sub_82490420(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82495e20
	if (cr6.eq) goto loc_82495E20;
	// addi r26,r30,20
	r26.s64 = r30.s64 + 20;
loc_82495DB0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82490428
	sub_82490428(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82495fe0
	sub_82495FE0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82495dd8
	if (!cr6.eq) goto loc_82495DD8;
	// mr r27,r31
	r27.u64 = r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82495DD8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x82495db0
	if (cr6.lt) goto loc_82495DB0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82495e20
	if (cr6.eq) goto loc_82495E20;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// ble cr6,0x82495dfc
	if (!cr6.gt) goto loc_82495DFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82496040
	sub_82496040(ctx, base);
loc_82495DFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x82490428
	sub_82490428(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82495f60
	sub_82495F60(ctx, base);
	// stw r25,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_82495E20:
	// stw r25,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r25.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82495f60
	sub_82495F60(ctx, base);
	// stw r25,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82495E34"))) PPC_WEAK_FUNC(sub_82495E34);
PPC_FUNC_IMPL(__imp__sub_82495E34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82495E38"))) PPC_WEAK_FUNC(sub_82495E38);
PPC_FUNC_IMPL(__imp__sub_82495E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82495e98
	if (cr6.lt) goto loc_82495E98;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82495e90
	if (!cr6.gt) goto loc_82495E90;
	// bl 0x82495d78
	sub_82495D78(ctx, base);
	// b 0x82495e98
	goto loc_82495E98;
loc_82495E90:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82495E98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82495be8
	sub_82495BE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82495EC0"))) PPC_WEAK_FUNC(sub_82495EC0);
PPC_FUNC_IMPL(__imp__sub_82495EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82495EC4"))) PPC_WEAK_FUNC(sub_82495EC4);
PPC_FUNC_IMPL(__imp__sub_82495EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495EC8"))) PPC_WEAK_FUNC(sub_82495EC8);
PPC_FUNC_IMPL(__imp__sub_82495EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r31,0
	r31.s64 = 0;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	r11.s64 = ctx.r3.s32 >> 2;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x82495f30
	if (cr6.gt) goto loc_82495F30;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82495f1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82495F1C;
	// bdzf 4*cr6+eq,0x82495f24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82495F24;
	// bne cr6,0x82495f2c
	if (!cr6.eq) goto loc_82495F2C;
	// li r31,1
	r31.s64 = 1;
	// b 0x82495f30
	goto loc_82495F30;
loc_82495F1C:
	// li r31,2
	r31.s64 = 2;
	// b 0x82495f30
	goto loc_82495F30;
loc_82495F24:
	// li r31,3
	r31.s64 = 3;
	// b 0x82495f30
	goto loc_82495F30;
loc_82495F2C:
	// li r31,4
	r31.s64 = 4;
loc_82495F30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82495f88
	sub_82495F88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82495d78
	sub_82495D78(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
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

__attribute__((alias("__imp__sub_82495F5C"))) PPC_WEAK_FUNC(sub_82495F5C);
PPC_FUNC_IMPL(__imp__sub_82495F5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82495F60"))) PPC_WEAK_FUNC(sub_82495F60);
PPC_FUNC_IMPL(__imp__sub_82495F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82495F74:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x82495f74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82495F74;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82495F80"))) PPC_WEAK_FUNC(sub_82495F80);
PPC_FUNC_IMPL(__imp__sub_82495F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82495F84"))) PPC_WEAK_FUNC(sub_82495F84);
PPC_FUNC_IMPL(__imp__sub_82495F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495F88"))) PPC_WEAK_FUNC(sub_82495F88);
PPC_FUNC_IMPL(__imp__sub_82495F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// blt cr6,0x82495fc0
	if (cr6.lt) goto loc_82495FC0;
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// ble 0x82495fc0
	if (!cr0.gt) goto loc_82495FC0;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
loc_82495FA8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82495fa8
	if (cr6.lt) goto loc_82495FA8;
loc_82495FC0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82495FDC"))) PPC_WEAK_FUNC(sub_82495FDC);
PPC_FUNC_IMPL(__imp__sub_82495FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82495FE0"))) PPC_WEAK_FUNC(sub_82495FE0);
PPC_FUNC_IMPL(__imp__sub_82495FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_82496010:
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x82496034
	if (!cr6.eq) goto loc_82496034;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82496010
	if (cr6.lt) goto loc_82496010;
	// blr 
	return;
loc_82496034:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82496038"))) PPC_WEAK_FUNC(sub_82496038);
PPC_FUNC_IMPL(__imp__sub_82496038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249603C"))) PPC_WEAK_FUNC(sub_8249603C);
PPC_FUNC_IMPL(__imp__sub_8249603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496040"))) PPC_WEAK_FUNC(sub_82496040);
PPC_FUNC_IMPL(__imp__sub_82496040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496044"))) PPC_WEAK_FUNC(sub_82496044);
PPC_FUNC_IMPL(__imp__sub_82496044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496048"))) PPC_WEAK_FUNC(sub_82496048);
PPC_FUNC_IMPL(__imp__sub_82496048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r11,0
	r11.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82496070:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82496070
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82496070;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_8249607C"))) PPC_WEAK_FUNC(sub_8249607C);
PPC_FUNC_IMPL(__imp__sub_8249607C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496080"))) PPC_WEAK_FUNC(sub_82496080);
PPC_FUNC_IMPL(__imp__sub_82496080) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r6,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r6.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// beq cr6,0x824960c8
	if (cr6.eq) goto loc_824960C8;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824960C8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824960dc
	if (cr6.eq) goto loc_824960DC;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_824960DC:
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_824960F0:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x824960f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824960F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
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

__attribute__((alias("__imp__sub_82496114"))) PPC_WEAK_FUNC(sub_82496114);
PPC_FUNC_IMPL(__imp__sub_82496114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496118"))) PPC_WEAK_FUNC(sub_82496118);
PPC_FUNC_IMPL(__imp__sub_82496118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
}

__attribute__((alias("__imp__sub_82496128"))) PPC_WEAK_FUNC(sub_82496128);
PPC_FUNC_IMPL(__imp__sub_82496128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249612C"))) PPC_WEAK_FUNC(sub_8249612C);
PPC_FUNC_IMPL(__imp__sub_8249612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496130"))) PPC_WEAK_FUNC(sub_82496130);
PPC_FUNC_IMPL(__imp__sub_82496130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496134"))) PPC_WEAK_FUNC(sub_82496134);
PPC_FUNC_IMPL(__imp__sub_82496134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496138"))) PPC_WEAK_FUNC(sub_82496138);
PPC_FUNC_IMPL(__imp__sub_82496138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
}

__attribute__((alias("__imp__sub_82496140"))) PPC_WEAK_FUNC(sub_82496140);
PPC_FUNC_IMPL(__imp__sub_82496140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496144"))) PPC_WEAK_FUNC(sub_82496144);
PPC_FUNC_IMPL(__imp__sub_82496144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496148"))) PPC_WEAK_FUNC(sub_82496148);
PPC_FUNC_IMPL(__imp__sub_82496148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249614C"))) PPC_WEAK_FUNC(sub_8249614C);
PPC_FUNC_IMPL(__imp__sub_8249614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496150"))) PPC_WEAK_FUNC(sub_82496150);
PPC_FUNC_IMPL(__imp__sub_82496150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
}

__attribute__((alias("__imp__sub_82496158"))) PPC_WEAK_FUNC(sub_82496158);
PPC_FUNC_IMPL(__imp__sub_82496158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249615C"))) PPC_WEAK_FUNC(sub_8249615C);
PPC_FUNC_IMPL(__imp__sub_8249615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496160"))) PPC_WEAK_FUNC(sub_82496160);
PPC_FUNC_IMPL(__imp__sub_82496160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lfs f2,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824961B4"))) PPC_WEAK_FUNC(sub_824961B4);
PPC_FUNC_IMPL(__imp__sub_824961B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824961B8"))) PPC_WEAK_FUNC(sub_824961B8);
PPC_FUNC_IMPL(__imp__sub_824961B8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82496204"))) PPC_WEAK_FUNC(sub_82496204);
PPC_FUNC_IMPL(__imp__sub_82496204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496208"))) PPC_WEAK_FUNC(sub_82496208);
PPC_FUNC_IMPL(__imp__sub_82496208) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249624c
	if (!cr6.eq) goto loc_8249624C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r8.u8);
loc_8249624C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249625C"))) PPC_WEAK_FUNC(sub_8249625C);
PPC_FUNC_IMPL(__imp__sub_8249625C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496260"))) PPC_WEAK_FUNC(sub_82496260);
PPC_FUNC_IMPL(__imp__sub_82496260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
}

__attribute__((alias("__imp__sub_82496278"))) PPC_WEAK_FUNC(sub_82496278);
PPC_FUNC_IMPL(__imp__sub_82496278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8249627C"))) PPC_WEAK_FUNC(sub_8249627C);
PPC_FUNC_IMPL(__imp__sub_8249627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496280"))) PPC_WEAK_FUNC(sub_82496280);
PPC_FUNC_IMPL(__imp__sub_82496280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r11,5381
	r11.s64 = 5381;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824962c4
	if (cr6.eq) goto loc_824962C4;
loc_824962A8:
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824962a8
	if (!cr6.eq) goto loc_824962A8;
loc_824962C4:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824962fc
	if (cr6.eq) goto loc_824962FC;
loc_824962E0:
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824962e0
	if (!cr6.eq) goto loc_824962E0;
loc_824962FC:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// li r11,5381
	r11.s64 = 5381;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82496334
	if (cr6.eq) goto loc_82496334;
loc_82496318:
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
	// bne cr6,0x82496318
	if (!cr6.eq) goto loc_82496318;
loc_82496334:
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
}

__attribute__((alias("__imp__sub_82496340"))) PPC_WEAK_FUNC(sub_82496340);
PPC_FUNC_IMPL(__imp__sub_82496340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496344"))) PPC_WEAK_FUNC(sub_82496344);
PPC_FUNC_IMPL(__imp__sub_82496344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496348"))) PPC_WEAK_FUNC(sub_82496348);
PPC_FUNC_IMPL(__imp__sub_82496348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824963c8
	if (!cr6.eq) goto loc_824963C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lfs f1,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r5.u8);
loc_824963C8:
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

__attribute__((alias("__imp__sub_824963E0"))) PPC_WEAK_FUNC(sub_824963E0);
PPC_FUNC_IMPL(__imp__sub_824963E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824963E4"))) PPC_WEAK_FUNC(sub_824963E4);
PPC_FUNC_IMPL(__imp__sub_824963E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824963E8"))) PPC_WEAK_FUNC(sub_824963E8);
PPC_FUNC_IMPL(__imp__sub_824963E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82496414"))) PPC_WEAK_FUNC(sub_82496414);
PPC_FUNC_IMPL(__imp__sub_82496414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496418"))) PPC_WEAK_FUNC(sub_82496418);
PPC_FUNC_IMPL(__imp__sub_82496418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82496498
	if (!cr6.eq) goto loc_82496498;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lfs f1,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,80(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r5,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r5.u8);
loc_82496498:
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

__attribute__((alias("__imp__sub_824964B0"))) PPC_WEAK_FUNC(sub_824964B0);
PPC_FUNC_IMPL(__imp__sub_824964B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824964B4"))) PPC_WEAK_FUNC(sub_824964B4);
PPC_FUNC_IMPL(__imp__sub_824964B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824964B8"))) PPC_WEAK_FUNC(sub_824964B8);
PPC_FUNC_IMPL(__imp__sub_824964B8) {
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
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824964fc
	if (!cr6.eq) goto loc_824964FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r8.u8);
loc_824964FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249650C"))) PPC_WEAK_FUNC(sub_8249650C);
PPC_FUNC_IMPL(__imp__sub_8249650C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496510"))) PPC_WEAK_FUNC(sub_82496510);
PPC_FUNC_IMPL(__imp__sub_82496510) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82496560
	if (!cr6.eq) goto loc_82496560;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lfs f2,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r7.u8);
loc_82496560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82496570"))) PPC_WEAK_FUNC(sub_82496570);
PPC_FUNC_IMPL(__imp__sub_82496570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496574"))) PPC_WEAK_FUNC(sub_82496574);
PPC_FUNC_IMPL(__imp__sub_82496574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496578"))) PPC_WEAK_FUNC(sub_82496578);
PPC_FUNC_IMPL(__imp__sub_82496578) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824965c0
	if (!cr6.eq) goto loc_824965C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r8.u8);
loc_824965C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824965D0"))) PPC_WEAK_FUNC(sub_824965D0);
PPC_FUNC_IMPL(__imp__sub_824965D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824965D4"))) PPC_WEAK_FUNC(sub_824965D4);
PPC_FUNC_IMPL(__imp__sub_824965D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824965D8"))) PPC_WEAK_FUNC(sub_824965D8);
PPC_FUNC_IMPL(__imp__sub_824965D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824965DC"))) PPC_WEAK_FUNC(sub_824965DC);
PPC_FUNC_IMPL(__imp__sub_824965DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82496348
	sub_82496348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824965E0"))) PPC_WEAK_FUNC(sub_824965E0);
PPC_FUNC_IMPL(__imp__sub_824965E0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496618
	if (cr6.eq) goto loc_82496618;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_82496618:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82496628"))) PPC_WEAK_FUNC(sub_82496628);
PPC_FUNC_IMPL(__imp__sub_82496628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249662C"))) PPC_WEAK_FUNC(sub_8249662C);
PPC_FUNC_IMPL(__imp__sub_8249662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496630"))) PPC_WEAK_FUNC(sub_82496630);
PPC_FUNC_IMPL(__imp__sub_82496630) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496668
	if (cr6.eq) goto loc_82496668;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_82496668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82496678"))) PPC_WEAK_FUNC(sub_82496678);
PPC_FUNC_IMPL(__imp__sub_82496678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249667C"))) PPC_WEAK_FUNC(sub_8249667C);
PPC_FUNC_IMPL(__imp__sub_8249667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496680"))) PPC_WEAK_FUNC(sub_82496680);
PPC_FUNC_IMPL(__imp__sub_82496680) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_82496684"))) PPC_WEAK_FUNC(sub_82496684);
PPC_FUNC_IMPL(__imp__sub_82496684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496688"))) PPC_WEAK_FUNC(sub_82496688);
PPC_FUNC_IMPL(__imp__sub_82496688) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
}

__attribute__((alias("__imp__sub_8249668C"))) PPC_WEAK_FUNC(sub_8249668C);
PPC_FUNC_IMPL(__imp__sub_8249668C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496690"))) PPC_WEAK_FUNC(sub_82496690);
PPC_FUNC_IMPL(__imp__sub_82496690) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824966dc
	if (cr6.eq) goto loc_824966DC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824966DC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824966F4"))) PPC_WEAK_FUNC(sub_824966F4);
PPC_FUNC_IMPL(__imp__sub_824966F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824966F8"))) PPC_WEAK_FUNC(sub_824966F8);
PPC_FUNC_IMPL(__imp__sub_824966F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82496718"))) PPC_WEAK_FUNC(sub_82496718);
PPC_FUNC_IMPL(__imp__sub_82496718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249671C"))) PPC_WEAK_FUNC(sub_8249671C);
PPC_FUNC_IMPL(__imp__sub_8249671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496720"))) PPC_WEAK_FUNC(sub_82496720);
PPC_FUNC_IMPL(__imp__sub_82496720) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249674c
	if (cr6.eq) goto loc_8249674C;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_8249674C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8249675C"))) PPC_WEAK_FUNC(sub_8249675C);
PPC_FUNC_IMPL(__imp__sub_8249675C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496760"))) PPC_WEAK_FUNC(sub_82496760);
PPC_FUNC_IMPL(__imp__sub_82496760) {
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
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,20968(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20968);
	// lwz r3,-14368(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824967bc
	if (cr6.eq) goto loc_824967BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824967c0
	if (!cr6.eq) goto loc_824967C0;
loc_824967BC:
	// li r11,0
	r11.s64 = 0;
loc_824967C0:
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
	// beq cr6,0x8249680c
	if (cr6.eq) goto loc_8249680C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249680c
	if (!cr6.eq) goto loc_8249680C;
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
loc_8249680C:
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

__attribute__((alias("__imp__sub_82496820"))) PPC_WEAK_FUNC(sub_82496820);
PPC_FUNC_IMPL(__imp__sub_82496820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496824"))) PPC_WEAK_FUNC(sub_82496824);
PPC_FUNC_IMPL(__imp__sub_82496824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496828"))) PPC_WEAK_FUNC(sub_82496828);
PPC_FUNC_IMPL(__imp__sub_82496828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249685c
	if (cr6.eq) goto loc_8249685C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249685C:
	// lwz r3,140(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x82485618
	sub_82485618(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,19268(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19268);
	// lwz r3,-14368(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824968ac
	if (cr6.eq) goto loc_824968AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824968b0
	if (!cr6.eq) goto loc_824968B0;
loc_824968AC:
	// li r11,0
	r11.s64 = 0;
loc_824968B0:
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
	// beq cr6,0x82496910
	if (cr6.eq) goto loc_82496910;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82496910
	if (!cr6.eq) goto loc_82496910;
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
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_82496910:
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82496920"))) PPC_WEAK_FUNC(sub_82496920);
PPC_FUNC_IMPL(__imp__sub_82496920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82496924"))) PPC_WEAK_FUNC(sub_82496924);
PPC_FUNC_IMPL(__imp__sub_82496924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496928"))) PPC_WEAK_FUNC(sub_82496928);
PPC_FUNC_IMPL(__imp__sub_82496928) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82496964
	if (cr6.eq) goto loc_82496964;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	r11.u64 = ctx.r6.u64 & r11.u64;
loc_82496964:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824969e0
	if (!cr6.eq) goto loc_824969E0;
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824969a8
	if (cr6.eq) goto loc_824969A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_824969A8:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824969e0
	if (cr6.eq) goto loc_824969E0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824969E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824969F0"))) PPC_WEAK_FUNC(sub_824969F0);
PPC_FUNC_IMPL(__imp__sub_824969F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824969F4"))) PPC_WEAK_FUNC(sub_824969F4);
PPC_FUNC_IMPL(__imp__sub_824969F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824969F8"))) PPC_WEAK_FUNC(sub_824969F8);
PPC_FUNC_IMPL(__imp__sub_824969F8) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496a40
	if (cr6.eq) goto loc_82496A40;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82496A40:
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82496a54
	if (cr6.eq) goto loc_82496A54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496928
	sub_82496928(ctx, base);
loc_82496A54:
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

__attribute__((alias("__imp__sub_82496A68"))) PPC_WEAK_FUNC(sub_82496A68);
PPC_FUNC_IMPL(__imp__sub_82496A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496A6C"))) PPC_WEAK_FUNC(sub_82496A6C);
PPC_FUNC_IMPL(__imp__sub_82496A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496A70"))) PPC_WEAK_FUNC(sub_82496A70);
PPC_FUNC_IMPL(__imp__sub_82496A70) {
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
	// bl 0x824969f8
	sub_824969F8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496ab4
	if (cr6.eq) goto loc_82496AB4;
	// bl 0x82498610
	sub_82498610(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82496ab4
	if (!cr6.eq) goto loc_82496AB4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x824987e8
	sub_824987E8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82498620
	sub_82498620(ctx, base);
loc_82496AB4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x824979d0
	sub_824979D0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x824985f8
	sub_824985F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82496AD4"))) PPC_WEAK_FUNC(sub_82496AD4);
PPC_FUNC_IMPL(__imp__sub_82496AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496AD8"))) PPC_WEAK_FUNC(sub_82496AD8);
PPC_FUNC_IMPL(__imp__sub_82496AD8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496b0c
	if (cr0.eq) goto loc_82496B0C;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82496B0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82496B20"))) PPC_WEAK_FUNC(sub_82496B20);
PPC_FUNC_IMPL(__imp__sub_82496B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82496B24"))) PPC_WEAK_FUNC(sub_82496B24);
PPC_FUNC_IMPL(__imp__sub_82496B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496B28"))) PPC_WEAK_FUNC(sub_82496B28);
PPC_FUNC_IMPL(__imp__sub_82496B28) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r29,28(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82496b68
	if (cr6.eq) goto loc_82496B68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_82496B68:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r29,28(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82496b98
	if (cr6.eq) goto loc_82496B98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497638
	sub_82497638(ctx, base);
loc_82496B98:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r29,28(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82496bc8
	if (cr6.eq) goto loc_82496BC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82496BC8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,332
	r30.s64 = r31.s64 + 332;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r29,28(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82496bf8
	if (cr6.eq) goto loc_82496BF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82496BF8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r31,424
	r30.s64 = r31.s64 + 424;
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r29,28(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82496c28
	if (cr6.eq) goto loc_82496C28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824895a0
	sub_824895A0(ctx, base);
loc_82496C28:
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x824979c0
	sub_824979C0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82498188
	sub_82498188(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82496C54"))) PPC_WEAK_FUNC(sub_82496C54);
PPC_FUNC_IMPL(__imp__sub_82496C54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82496C58"))) PPC_WEAK_FUNC(sub_82496C58);
PPC_FUNC_IMPL(__imp__sub_82496C58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82498288
	sub_82498288(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x824979c8
	sub_824979C8(ctx, base);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,424
	r30.s64 = r31.s64 + 424;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82496cb8
	if (cr6.eq) goto loc_82496CB8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824895a0
	sub_824895A0(ctx, base);
loc_82496CB8:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// addi r30,r31,332
	r30.s64 = r31.s64 + 332;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496cdc
	if (cr6.eq) goto loc_82496CDC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0120
	sub_822D0120(ctx, base);
loc_82496CDC:
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496d00
	if (cr6.eq) goto loc_82496D00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d0048
	sub_822D0048(ctx, base);
loc_82496D00:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496d24
	if (cr6.eq) goto loc_82496D24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497638
	sub_82497638(ctx, base);
loc_82496D24:
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496d48
	if (cr6.eq) goto loc_82496D48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354050
	sub_82354050(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824894c8
	sub_824894C8(ctx, base);
loc_82496D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82496D4C"))) PPC_WEAK_FUNC(sub_82496D4C);
PPC_FUNC_IMPL(__imp__sub_82496D4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82496D50"))) PPC_WEAK_FUNC(sub_82496D50);
PPC_FUNC_IMPL(__imp__sub_82496D50) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826fe2e0
	sub_826FE2E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,8696
	ctx.r8.s64 = r11.s64 + 8696;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r10,-8008
	ctx.r7.s64 = ctx.r10.s64 + -8008;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r6,r9,-8028
	ctx.r6.s64 = ctx.r9.s64 + -8028;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// addi r29,r31,240
	r29.s64 = r31.s64 + 240;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// addi r29,r31,332
	r29.s64 = r31.s64 + 332;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// addi r29,r31,424
	r29.s64 = r31.s64 + 424;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,3
	r28.s64 = 3;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r29,r10,-8096
	r29.s64 = ctx.r10.s64 + -8096;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r3,8
	ctx.r3.s64 = 8;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496ec0
	if (cr6.eq) goto loc_82496EC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824979f0
	sub_824979F0(ctx, base);
	// b 0x82496ec4
	goto loc_82496EC4;
loc_82496EC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82496EC4:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496f08
	if (cr6.eq) goto loc_82496F08;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82497fd8
	sub_82497FD8(ctx, base);
	// b 0x82496f0c
	goto loc_82496F0C;
loc_82496F08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82496F0C:
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82497710
	sub_82497710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824977a8
	sub_824977A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82497840
	sub_82497840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824978d8
	sub_824978D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82496F3C"))) PPC_WEAK_FUNC(sub_82496F3C);
PPC_FUNC_IMPL(__imp__sub_82496F3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82496F40"))) PPC_WEAK_FUNC(sub_82496F40);
PPC_FUNC_IMPL(__imp__sub_82496F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-8008
	ctx.r8.s64 = r11.s64 + -8008;
	// addi r7,r9,-8028
	ctx.r7.s64 = ctx.r9.s64 + -8028;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82496fb4
	if (cr6.eq) goto loc_82496FB4;
loc_82496F7C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82496f9c
	if (cr6.eq) goto loc_82496F9C;
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
loc_82496F9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82496f7c
	if (!cr6.eq) goto loc_82496F7C;
loc_82496FB4:
	// lwz r11,44(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// addi r23,r25,40
	r23.s64 = r25.s64 + 40;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// li r24,0
	r24.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,44(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,44(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r24,48(r25)
	PPC_STORE_U32(r25.u32 + 48, r24.u32);
	// lwz r31,32(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82497008
	if (cr6.eq) goto loc_82497008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82497f00
	sub_82497F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r24,32(r25)
	PPC_STORE_U32(r25.u32 + 32, r24.u32);
loc_82497008:
	// lwz r31,28(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82497028
	if (cr6.eq) goto loc_82497028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82497a88
	sub_82497A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r24,28(r25)
	PPC_STORE_U32(r25.u32 + 28, r24.u32);
loc_82497028:
	// lwz r11,424(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 424);
	// addi r31,r25,424
	r31.s64 = r25.s64 + 424;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497134
	if (cr6.eq) goto loc_82497134;
	// lwz r10,17620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497094
	if (!cr6.eq) goto loc_82497094;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497094
	if (!cr6.eq) goto loc_82497094;
	// lwz r11,17620(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497094:
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824970e0
	if (!cr6.eq) goto loc_824970E0;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824970e0
	if (!cr6.eq) goto loc_824970E0;
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824970E0:
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249712c
	if (!cr6.eq) goto loc_8249712C;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249712c
	if (!cr6.eq) goto loc_8249712C;
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8249712C:
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_82497134:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lwz r11,332(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 332);
	// addi r30,r25,332
	r30.s64 = r25.s64 + 332;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249724c
	if (cr6.eq) goto loc_8249724C;
	// lwz r10,17620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824971ac
	if (!cr6.eq) goto loc_824971AC;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824971ac
	if (!cr6.eq) goto loc_824971AC;
	// lwz r11,17620(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824971AC:
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824971f8
	if (!cr6.eq) goto loc_824971F8;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824971f8
	if (!cr6.eq) goto loc_824971F8;
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824971F8:
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497244
	if (!cr6.eq) goto loc_82497244;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497244
	if (!cr6.eq) goto loc_82497244;
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497244:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
loc_8249724C:
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
	// lwz r11,240(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 240);
	// addi r30,r25,240
	r30.s64 = r25.s64 + 240;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497364
	if (cr6.eq) goto loc_82497364;
	// lwz r10,17620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824972c4
	if (!cr6.eq) goto loc_824972C4;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824972c4
	if (!cr6.eq) goto loc_824972C4;
	// lwz r11,17620(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824972C4:
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497310
	if (!cr6.eq) goto loc_82497310;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497310
	if (!cr6.eq) goto loc_82497310;
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497310:
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249735c
	if (!cr6.eq) goto loc_8249735C;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249735c
	if (!cr6.eq) goto loc_8249735C;
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8249735C:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
loc_82497364:
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
	// lwz r11,148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 148);
	// addi r30,r25,148
	r30.s64 = r25.s64 + 148;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249747c
	if (cr6.eq) goto loc_8249747C;
	// lwz r10,17620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824973dc
	if (!cr6.eq) goto loc_824973DC;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824973dc
	if (!cr6.eq) goto loc_824973DC;
	// lwz r11,17620(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824973DC:
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497428
	if (!cr6.eq) goto loc_82497428;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497428
	if (!cr6.eq) goto loc_82497428;
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497428:
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497474
	if (!cr6.eq) goto loc_82497474;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497474
	if (!cr6.eq) goto loc_82497474;
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497474:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
loc_8249747C:
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
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497594
	if (cr6.eq) goto loc_82497594;
	// lwz r10,17620(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824974f4
	if (!cr6.eq) goto loc_824974F4;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824974f4
	if (!cr6.eq) goto loc_824974F4;
	// lwz r11,17620(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17620);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824974F4:
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497540
	if (!cr6.eq) goto loc_82497540;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82497540
	if (!cr6.eq) goto loc_82497540;
	// lwz r11,17628(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82497540:
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249758c
	if (!cr6.eq) goto loc_8249758C;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249758c
	if (!cr6.eq) goto loc_8249758C;
	// lwz r11,17632(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 17632);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8249758C:
	// stw r24,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
loc_82497594:
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
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826fe2d0
	sub_826FE2D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_824975D4"))) PPC_WEAK_FUNC(sub_824975D4);
PPC_FUNC_IMPL(__imp__sub_824975D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_824975D8"))) PPC_WEAK_FUNC(sub_824975D8);
PPC_FUNC_IMPL(__imp__sub_824975D8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x82497620
	if (cr6.eq) goto loc_82497620;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,23540
	ctx.r4.s64 = ctx.r9.s64 + 23540;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82497620:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82497630"))) PPC_WEAK_FUNC(sub_82497630);
PPC_FUNC_IMPL(__imp__sub_82497630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497634"))) PPC_WEAK_FUNC(sub_82497634);
PPC_FUNC_IMPL(__imp__sub_82497634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497638"))) PPC_WEAK_FUNC(sub_82497638);
PPC_FUNC_IMPL(__imp__sub_82497638) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824976f8
	if (cr6.eq) goto loc_824976F8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23540
	ctx.r4.s64 = ctx.r8.s64 + 23540;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lis r7,-32211
	ctx.r7.s64 = -2110980096;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r7,-920
	ctx.r5.s64 = ctx.r7.s64 + -920;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x822cfee0
	sub_822CFEE0(ctx, base);
	// lis r4,-32183
	ctx.r4.s64 = -2109145088;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,30168
	r11.s64 = ctx.r4.s64 + 30168;
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x822cff58
	sub_822CFF58(ctx, base);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r9,r10,16576
	ctx.r9.s64 = ctx.r10.s64 + 16576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cffd0
	sub_822CFFD0(ctx, base);
loc_824976F8:
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

__attribute__((alias("__imp__sub_8249770C"))) PPC_WEAK_FUNC(sub_8249770C);
PPC_FUNC_IMPL(__imp__sub_8249770C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497710"))) PPC_WEAK_FUNC(sub_82497710);
PPC_FUNC_IMPL(__imp__sub_82497710) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r7,r10,-8216
	ctx.r7.s64 = ctx.r10.s64 + -8216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249776c
	if (cr6.eq) goto loc_8249776C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82498918
	sub_82498918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8249776C:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497790
	if (cr0.eq) goto loc_82497790;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82497790:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824977A4"))) PPC_WEAK_FUNC(sub_824977A4);
PPC_FUNC_IMPL(__imp__sub_824977A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824977A8"))) PPC_WEAK_FUNC(sub_824977A8);
PPC_FUNC_IMPL(__imp__sub_824977A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r7,r10,-8216
	ctx.r7.s64 = ctx.r10.s64 + -8216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497804
	if (cr6.eq) goto loc_82497804;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82498e38
	sub_82498E38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82497804:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497828
	if (cr0.eq) goto loc_82497828;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82497828:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249783C"))) PPC_WEAK_FUNC(sub_8249783C);
PPC_FUNC_IMPL(__imp__sub_8249783C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82497840"))) PPC_WEAK_FUNC(sub_82497840);
PPC_FUNC_IMPL(__imp__sub_82497840) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r7,r10,-8216
	ctx.r7.s64 = ctx.r10.s64 + -8216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249789c
	if (cr6.eq) goto loc_8249789C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824991a0
	sub_824991A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8249789C:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824978c0
	if (cr0.eq) goto loc_824978C0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_824978C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824978D4"))) PPC_WEAK_FUNC(sub_824978D4);
PPC_FUNC_IMPL(__imp__sub_824978D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824978D8"))) PPC_WEAK_FUNC(sub_824978D8);
PPC_FUNC_IMPL(__imp__sub_824978D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r7,r10,-8216
	ctx.r7.s64 = ctx.r10.s64 + -8216;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,536
	ctx.r3.s64 = 536;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497934
	if (cr6.eq) goto loc_82497934;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82499d48
	sub_82499D48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82497934:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497958
	if (cr0.eq) goto loc_82497958;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82497958:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8249796C"))) PPC_WEAK_FUNC(sub_8249796C);
PPC_FUNC_IMPL(__imp__sub_8249796C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82497970"))) PPC_WEAK_FUNC(sub_82497970);
PPC_FUNC_IMPL(__imp__sub_82497970) {
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
	// bl 0x82496f40
	sub_82496F40(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824979a8
	if (cr6.eq) goto loc_824979A8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824979A8:
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

__attribute__((alias("__imp__sub_824979BC"))) PPC_WEAK_FUNC(sub_824979BC);
PPC_FUNC_IMPL(__imp__sub_824979BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824979C0"))) PPC_WEAK_FUNC(sub_824979C0);
PPC_FUNC_IMPL(__imp__sub_824979C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824979C4"))) PPC_WEAK_FUNC(sub_824979C4);
PPC_FUNC_IMPL(__imp__sub_824979C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824979C8"))) PPC_WEAK_FUNC(sub_824979C8);
PPC_FUNC_IMPL(__imp__sub_824979C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824979CC"))) PPC_WEAK_FUNC(sub_824979CC);
PPC_FUNC_IMPL(__imp__sub_824979CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824979D0"))) PPC_WEAK_FUNC(sub_824979D0);
PPC_FUNC_IMPL(__imp__sub_824979D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824979D4"))) PPC_WEAK_FUNC(sub_824979D4);
PPC_FUNC_IMPL(__imp__sub_824979D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826fe4a0
	sub_826FE4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824979D8"))) PPC_WEAK_FUNC(sub_824979D8);
PPC_FUNC_IMPL(__imp__sub_824979D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,3792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f2.f64 = double(temp.f32);
	// b 0x826fe450
	sub_826FE450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824979EC"))) PPC_WEAK_FUNC(sub_824979EC);
PPC_FUNC_IMPL(__imp__sub_824979EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824979F0"))) PPC_WEAK_FUNC(sub_824979F0);
PPC_FUNC_IMPL(__imp__sub_824979F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-7968
	ctx.r7.s64 = ctx.r10.s64 + -7968;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x82497a64
	if (cr6.eq) goto loc_82497A64;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826fe3f0
	sub_826FE3F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x82497a68
	goto loc_82497A68;
loc_82497A64:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82497A68:
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

__attribute__((alias("__imp__sub_82497A80"))) PPC_WEAK_FUNC(sub_82497A80);
PPC_FUNC_IMPL(__imp__sub_82497A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497A84"))) PPC_WEAK_FUNC(sub_82497A84);
PPC_FUNC_IMPL(__imp__sub_82497A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497A88"))) PPC_WEAK_FUNC(sub_82497A88);
PPC_FUNC_IMPL(__imp__sub_82497A88) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497ab4
	if (cr6.eq) goto loc_82497AB4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82497AB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82497AC4"))) PPC_WEAK_FUNC(sub_82497AC4);
PPC_FUNC_IMPL(__imp__sub_82497AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497AC8"))) PPC_WEAK_FUNC(sub_82497AC8);
PPC_FUNC_IMPL(__imp__sub_82497AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-7880
	ctx.r4.s64 = ctx.r9.s64 + -7880;
	// lwz r3,336(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r4,-7896
	ctx.r4.s64 = ctx.r4.s64 + -7896;
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f31,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82497b58
	if (!cr6.lt) goto loc_82497B58;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82497B58:
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82497B78"))) PPC_WEAK_FUNC(sub_82497B78);
PPC_FUNC_IMPL(__imp__sub_82497B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497B7C"))) PPC_WEAK_FUNC(sub_82497B7C);
PPC_FUNC_IMPL(__imp__sub_82497B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497B80"))) PPC_WEAK_FUNC(sub_82497B80);
PPC_FUNC_IMPL(__imp__sub_82497B80) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,12(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497dd8
	if (cr6.eq) goto loc_82497DD8;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82497dd8
	if (!cr6.eq) goto loc_82497DD8;
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r4,r7,18232
	ctx.r4.s64 = ctx.r7.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cfc78
	sub_822CFC78(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82700280
	sub_82700280(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,60(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f0,-7980(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -7980);
	f0.f64 = double(temp.f32);
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmsubs f0,f1,f0,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 - f0.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmsubs f13,f30,f0,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64 - f0.f64));
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,20(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f30,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f29,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f29.f64 = double(temp.f32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// lfs f28,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f28.f64 = double(temp.f32);
	// lfs f27,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f27.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 - f30.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f29
	ctx.f6.f64 = double(float(ctx.f9.f64 - f29.f64));
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f28
	ctx.f4.f64 = double(float(ctx.f7.f64 - f28.f64));
	// fsubs f3,f5,f27
	ctx.f3.f64 = double(float(ctx.f5.f64 - f27.f64));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// fsubs f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f11,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 - f0.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,244(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 244);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82497DD8:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_82497DEC"))) PPC_WEAK_FUNC(sub_82497DEC);
PPC_FUNC_IMPL(__imp__sub_82497DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82497DF0"))) PPC_WEAK_FUNC(sub_82497DF0);
PPC_FUNC_IMPL(__imp__sub_82497DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e941c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eaaf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,336(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 336);
	// lfs f31,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f31.f64 = double(temp.f32);
	// lfs f30,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	f30.f64 = double(temp.f32);
	// lfs f29,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f29.f64 = double(temp.f32);
	// lfs f28,172(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	f28.f64 = double(temp.f32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,108(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82700720
	sub_82700720(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,60(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,244(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f28,92(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82497EF8"))) PPC_WEAK_FUNC(sub_82497EF8);
PPC_FUNC_IMPL(__imp__sub_82497EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82497EFC"))) PPC_WEAK_FUNC(sub_82497EFC);
PPC_FUNC_IMPL(__imp__sub_82497EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497F00"))) PPC_WEAK_FUNC(sub_82497F00);
PPC_FUNC_IMPL(__imp__sub_82497F00) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497f40
	if (cr6.eq) goto loc_82497F40;
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
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_82497F40:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497f64
	if (cr6.eq) goto loc_82497F64;
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
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_82497F64:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497f88
	if (cr6.eq) goto loc_82497F88;
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
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82497F88:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82497fac
	if (cr6.eq) goto loc_82497FAC;
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
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82497FAC:
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

__attribute__((alias("__imp__sub_82497FC0"))) PPC_WEAK_FUNC(sub_82497FC0);
PPC_FUNC_IMPL(__imp__sub_82497FC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497FC4"))) PPC_WEAK_FUNC(sub_82497FC4);
PPC_FUNC_IMPL(__imp__sub_82497FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497FC8"))) PPC_WEAK_FUNC(sub_82497FC8);
PPC_FUNC_IMPL(__imp__sub_82497FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497FCC"))) PPC_WEAK_FUNC(sub_82497FCC);
PPC_FUNC_IMPL(__imp__sub_82497FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497FD0"))) PPC_WEAK_FUNC(sub_82497FD0);
PPC_FUNC_IMPL(__imp__sub_82497FD0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_82497FD4"))) PPC_WEAK_FUNC(sub_82497FD4);
PPC_FUNC_IMPL(__imp__sub_82497FD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497FD8"))) PPC_WEAK_FUNC(sub_82497FD8);
PPC_FUNC_IMPL(__imp__sub_82497FD8) {
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
	// li r31,0
	r31.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r31.u8);
	// li r28,3
	r28.s64 = 3;
	// addi r29,r10,-7680
	r29.s64 = ctx.r10.s64 + -7680;
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
	// li r8,30
	ctx.r8.s64 = 30;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,240
	ctx.r3.s64 = 240;
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
	// beq cr6,0x82498054
	if (cr6.eq) goto loc_82498054;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r6,r11,-7700
	ctx.r6.s64 = r11.s64 + -7700;
	// addi r5,r10,-7716
	ctx.r5.s64 = ctx.r10.s64 + -7716;
	// addi r4,r9,-7724
	ctx.r4.s64 = ctx.r9.s64 + -7724;
	// bl 0x82706838
	sub_82706838(ctx, base);
	// b 0x82498058
	goto loc_82498058;
loc_82498054:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82498058:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824980b8
	if (cr6.eq) goto loc_824980B8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r11,-7740
	ctx.r7.s64 = r11.s64 + -7740;
	// addi r6,r10,-7756
	ctx.r6.s64 = ctx.r10.s64 + -7756;
	// addi r5,r9,-7772
	ctx.r5.s64 = ctx.r9.s64 + -7772;
	// addi r4,r8,-7784
	ctx.r4.s64 = ctx.r8.s64 + -7784;
	// bl 0x82706128
	sub_82706128(ctx, base);
	// b 0x824980bc
	goto loc_824980BC;
loc_824980B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824980BC:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8249811c
	if (cr6.eq) goto loc_8249811C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r11,-7800
	ctx.r7.s64 = r11.s64 + -7800;
	// addi r6,r10,-7816
	ctx.r6.s64 = ctx.r10.s64 + -7816;
	// addi r5,r9,-7832
	ctx.r5.s64 = ctx.r9.s64 + -7832;
	// addi r4,r8,-7844
	ctx.r4.s64 = ctx.r8.s64 + -7844;
	// bl 0x82706128
	sub_82706128(ctx, base);
	// b 0x82498120
	goto loc_82498120;
loc_8249811C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82498120:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,33
	ctx.r8.s64 = 33;
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82498178
	if (cr6.eq) goto loc_82498178;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,-7860
	ctx.r4.s64 = r11.s64 + -7860;
	// bl 0x82705db0
	sub_82705DB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_82498178:
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82498184"))) PPC_WEAK_FUNC(sub_82498184);
PPC_FUNC_IMPL(__imp__sub_82498184) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82498188"))) PPC_WEAK_FUNC(sub_82498188);
PPC_FUNC_IMPL(__imp__sub_82498188) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,336(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,336(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,336(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r4,r5,-7548
	ctx.r4.s64 = ctx.r5.s64 + -7548;
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82705ef0
	sub_82705EF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,-7568
	ctx.r4.s64 = r11.s64 + -7568;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82705f50
	sub_82705F50(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r10,-7592
	ctx.r4.s64 = ctx.r10.s64 + -7592;
	// bl 0x82705ef0
	sub_82705EF0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r9,-7612
	ctx.r4.s64 = ctx.r9.s64 + -7612;
	// bl 0x82705f50
	sub_82705F50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82706fd8
	sub_82706FD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82706fd8
	sub_82706FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82498280"))) PPC_WEAK_FUNC(sub_82498280);
PPC_FUNC_IMPL(__imp__sub_82498280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498284"))) PPC_WEAK_FUNC(sub_82498284);
PPC_FUNC_IMPL(__imp__sub_82498284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498288"))) PPC_WEAK_FUNC(sub_82498288);
PPC_FUNC_IMPL(__imp__sub_82498288) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,336(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 336);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,100(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,336(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 336);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,336(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
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

__attribute__((alias("__imp__sub_8249831C"))) PPC_WEAK_FUNC(sub_8249831C);
PPC_FUNC_IMPL(__imp__sub_8249831C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498320"))) PPC_WEAK_FUNC(sub_82498320);
PPC_FUNC_IMPL(__imp__sub_82498320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,288(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82498374
	if (cr6.eq) goto loc_82498374;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
loc_82498374:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lfs f30,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x827071a0
	sub_827071A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x827071a0
	sub_827071A0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824983CC"))) PPC_WEAK_FUNC(sub_824983CC);
PPC_FUNC_IMPL(__imp__sub_824983CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824983D0"))) PPC_WEAK_FUNC(sub_824983D0);
PPC_FUNC_IMPL(__imp__sub_824983D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
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
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaaf8
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r9,-7524
	ctx.r4.s64 = ctx.r9.s64 + -7524;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,22256(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22256);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// bl 0x826fe4f0
	sub_826FE4F0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,12(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82498490
	if (cr6.eq) goto loc_82498490;
	// bl 0x825ca0c8
	sub_825CA0C8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82498490
	if (!cr6.eq) goto loc_82498490;
	// lwz r3,288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// bl 0x825ca170
	sub_825CA170(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822cfc78
	sub_822CFC78(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82498490:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82700720
	sub_82700720(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82700720
	sub_82700720(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f30,f9,f13
	f30.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f28,f7,f11
	f28.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// bl 0x82700538
	sub_82700538(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,136(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f6,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// fsubs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f8,f3,f31
	ctx.f8.f64 = double(float(ctx.f3.f64 - f31.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f7,f1,f30
	ctx.f7.f64 = double(float(ctx.f1.f64 - f30.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 - f29.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 - f28.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82705b08
	sub_82705B08(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_824985F0"))) PPC_WEAK_FUNC(sub_824985F0);
PPC_FUNC_IMPL(__imp__sub_824985F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824985F4"))) PPC_WEAK_FUNC(sub_824985F4);
PPC_FUNC_IMPL(__imp__sub_824985F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824985F8"))) PPC_WEAK_FUNC(sub_824985F8);
PPC_FUNC_IMPL(__imp__sub_824985F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
}

__attribute__((alias("__imp__sub_82498604"))) PPC_WEAK_FUNC(sub_82498604);
PPC_FUNC_IMPL(__imp__sub_82498604) {
	PPC_FUNC_PROLOGUE();
	// b 0x82498320
	sub_82498320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82498608"))) PPC_WEAK_FUNC(sub_82498608);
PPC_FUNC_IMPL(__imp__sub_82498608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249860C"))) PPC_WEAK_FUNC(sub_8249860C);
PPC_FUNC_IMPL(__imp__sub_8249860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498610"))) PPC_WEAK_FUNC(sub_82498610);
PPC_FUNC_IMPL(__imp__sub_82498610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8249861C"))) PPC_WEAK_FUNC(sub_8249861C);
PPC_FUNC_IMPL(__imp__sub_8249861C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82498620"))) PPC_WEAK_FUNC(sub_82498620);
PPC_FUNC_IMPL(__imp__sub_82498620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8249862C"))) PPC_WEAK_FUNC(sub_8249862C);
PPC_FUNC_IMPL(__imp__sub_8249862C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82498630"))) PPC_WEAK_FUNC(sub_82498630);
PPC_FUNC_IMPL(__imp__sub_82498630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,-7516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7516);
	ctx.f2.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_82498640"))) PPC_WEAK_FUNC(sub_82498640);
PPC_FUNC_IMPL(__imp__sub_82498640) {
	PPC_FUNC_PROLOGUE();
	// b 0x826fe450
	sub_826FE450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82498644"))) PPC_WEAK_FUNC(sub_82498644);
PPC_FUNC_IMPL(__imp__sub_82498644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498648"))) PPC_WEAK_FUNC(sub_82498648);
PPC_FUNC_IMPL(__imp__sub_82498648) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r11,-7440
	ctx.r10.s64 = r11.s64 + -7440;
	// li r30,0
	r30.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r9,-7512
	ctx.r7.s64 = ctx.r9.s64 + -7512;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// beq cr6,0x824986cc
	if (cr6.eq) goto loc_824986CC;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826fe3f0
	sub_826FE3F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x824986d0
	goto loc_824986D0;
loc_824986CC:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_824986D0:
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

__attribute__((alias("__imp__sub_824986E8"))) PPC_WEAK_FUNC(sub_824986E8);
PPC_FUNC_IMPL(__imp__sub_824986E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824986EC"))) PPC_WEAK_FUNC(sub_824986EC);
PPC_FUNC_IMPL(__imp__sub_824986EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824986F0"))) PPC_WEAK_FUNC(sub_824986F0);
PPC_FUNC_IMPL(__imp__sub_824986F0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-7440
	ctx.r10.s64 = r11.s64 + -7440;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82498728
	if (cr6.eq) goto loc_82498728;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82498728:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82498738"))) PPC_WEAK_FUNC(sub_82498738);
PPC_FUNC_IMPL(__imp__sub_82498738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249873C"))) PPC_WEAK_FUNC(sub_8249873C);
PPC_FUNC_IMPL(__imp__sub_8249873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498740"))) PPC_WEAK_FUNC(sub_82498740);
PPC_FUNC_IMPL(__imp__sub_82498740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826fe398
	sub_826FE398(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82498794"))) PPC_WEAK_FUNC(sub_82498794);
PPC_FUNC_IMPL(__imp__sub_82498794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498798"))) PPC_WEAK_FUNC(sub_82498798);
PPC_FUNC_IMPL(__imp__sub_82498798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826fe4a0
	sub_826FE4A0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_824987E4"))) PPC_WEAK_FUNC(sub_824987E4);
PPC_FUNC_IMPL(__imp__sub_824987E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824987E8"))) PPC_WEAK_FUNC(sub_824987E8);
PPC_FUNC_IMPL(__imp__sub_824987E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826fe4a0
	sub_826FE4A0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,336(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// lfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
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

__attribute__((alias("__imp__sub_82498858"))) PPC_WEAK_FUNC(sub_82498858);
PPC_FUNC_IMPL(__imp__sub_82498858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249885C"))) PPC_WEAK_FUNC(sub_8249885C);
PPC_FUNC_IMPL(__imp__sub_8249885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498860"))) PPC_WEAK_FUNC(sub_82498860);
PPC_FUNC_IMPL(__imp__sub_82498860) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-7440
	ctx.r10.s64 = r11.s64 + -7440;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x824988a0
	if (cr6.eq) goto loc_824988A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_824988A0:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824988b8
	if (cr6.eq) goto loc_824988B8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824988B8:
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

__attribute__((alias("__imp__sub_824988CC"))) PPC_WEAK_FUNC(sub_824988CC);
PPC_FUNC_IMPL(__imp__sub_824988CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824988D0"))) PPC_WEAK_FUNC(sub_824988D0);
PPC_FUNC_IMPL(__imp__sub_824988D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-7396
	ctx.r10.s64 = r11.s64 + -7396;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_824988DC"))) PPC_WEAK_FUNC(sub_824988DC);
PPC_FUNC_IMPL(__imp__sub_824988DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824986f0
	sub_824986F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824988E0"))) PPC_WEAK_FUNC(sub_824988E0);
PPC_FUNC_IMPL(__imp__sub_824988E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824988E4"))) PPC_WEAK_FUNC(sub_824988E4);
PPC_FUNC_IMPL(__imp__sub_824988E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824988E8"))) PPC_WEAK_FUNC(sub_824988E8);
PPC_FUNC_IMPL(__imp__sub_824988E8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82496680
	sub_82496680(ctx, base);
	// bl 0x82497df0
	sub_82497DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8249890C"))) PPC_WEAK_FUNC(sub_8249890C);
PPC_FUNC_IMPL(__imp__sub_8249890C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498910"))) PPC_WEAK_FUNC(sub_82498910);
PPC_FUNC_IMPL(__imp__sub_82498910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498914"))) PPC_WEAK_FUNC(sub_82498914);
PPC_FUNC_IMPL(__imp__sub_82498914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498918"))) PPC_WEAK_FUNC(sub_82498918);
PPC_FUNC_IMPL(__imp__sub_82498918) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7356
	ctx.r10.s64 = r11.s64 + -7356;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// li r11,102
	r11.s64 = 102;
loc_8249893C:
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8249893c
	if (!cr6.eq) goto loc_8249893C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498648
	sub_82498648(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-7396
	ctx.r9.s64 = ctx.r10.s64 + -7396;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8249898C"))) PPC_WEAK_FUNC(sub_8249898C);
PPC_FUNC_IMPL(__imp__sub_8249898C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498990"))) PPC_WEAK_FUNC(sub_82498990);
PPC_FUNC_IMPL(__imp__sub_82498990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7348
	ctx.r4.s64 = ctx.r10.s64 + -7348;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f4,-12676(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12676);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4560(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4560);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82706710
	sub_82706710(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
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

__attribute__((alias("__imp__sub_82498A24"))) PPC_WEAK_FUNC(sub_82498A24);
PPC_FUNC_IMPL(__imp__sub_82498A24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498A28"))) PPC_WEAK_FUNC(sub_82498A28);
PPC_FUNC_IMPL(__imp__sub_82498A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82498a54
	if (cr6.eq) goto loc_82498A54;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82498a54
	if (cr6.eq) goto loc_82498A54;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82498A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498A5C"))) PPC_WEAK_FUNC(sub_82498A5C);
PPC_FUNC_IMPL(__imp__sub_82498A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498A60"))) PPC_WEAK_FUNC(sub_82498A60);
PPC_FUNC_IMPL(__imp__sub_82498A60) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r29,32(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// lfs f30,21036(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f30.f64 = double(temp.f32);
	// lfs f31,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82498b78
	if (!cr6.eq) goto loc_82498B78;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// bge cr6,0x82498af0
	if (!cr6.lt) goto loc_82498AF0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82498AF0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// addi r5,r11,-7328
	ctx.r5.s64 = r11.s64 + -7328;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r10,-7340
	ctx.r5.s64 = ctx.r10.s64 + -7340;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
loc_82498B78:
	// lbz r11,1(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82498bbc
	if (!cr6.eq) goto loc_82498BBC;
	// lbz r11,16(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82498bb0
	if (!cr6.eq) goto loc_82498BB0;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82498ba0
	if (cr6.eq) goto loc_82498BA0;
	// li r11,0
	r11.s64 = 0;
loc_82498BA0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82498bb0
	if (!cr6.eq) goto loc_82498BB0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82498BB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
loc_82498BBC:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82498BD0"))) PPC_WEAK_FUNC(sub_82498BD0);
PPC_FUNC_IMPL(__imp__sub_82498BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82498BD4"))) PPC_WEAK_FUNC(sub_82498BD4);
PPC_FUNC_IMPL(__imp__sub_82498BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498BD8"))) PPC_WEAK_FUNC(sub_82498BD8);
PPC_FUNC_IMPL(__imp__sub_82498BD8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bne cr6,0x82498d00
	if (!cr6.eq) goto loc_82498D00;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r31,336(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// ble cr6,0x82498c3c
	if (!cr6.gt) goto loc_82498C3C;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
loc_82498C3C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// extsb r27,r3
	r27.s64 = ctx.r3.s8;
	// addi r26,r11,-7340
	r26.s64 = r11.s64 + -7340;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lfs f1,-13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r7,-7312
	ctx.r5.s64 = ctx.r7.s64 + -7312;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r28.u8);
loc_82498D00:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82498D10"))) PPC_WEAK_FUNC(sub_82498D10);
PPC_FUNC_IMPL(__imp__sub_82498D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82498D14"))) PPC_WEAK_FUNC(sub_82498D14);
PPC_FUNC_IMPL(__imp__sub_82498D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498D18"))) PPC_WEAK_FUNC(sub_82498D18);
PPC_FUNC_IMPL(__imp__sub_82498D18) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82498d74
	if (!cr6.eq) goto loc_82498D74;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498a60
	sub_82498A60(ctx, base);
loc_82498D74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82498D84"))) PPC_WEAK_FUNC(sub_82498D84);
PPC_FUNC_IMPL(__imp__sub_82498D84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498D88"))) PPC_WEAK_FUNC(sub_82498D88);
PPC_FUNC_IMPL(__imp__sub_82498D88) {
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
	// addi r10,r11,-7396
	ctx.r10.s64 = r11.s64 + -7396;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824986f0
	sub_824986F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82498dcc
	if (cr6.eq) goto loc_82498DCC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82498DCC:
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

__attribute__((alias("__imp__sub_82498DE0"))) PPC_WEAK_FUNC(sub_82498DE0);
PPC_FUNC_IMPL(__imp__sub_82498DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498DE4"))) PPC_WEAK_FUNC(sub_82498DE4);
PPC_FUNC_IMPL(__imp__sub_82498DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498DE8"))) PPC_WEAK_FUNC(sub_82498DE8);
PPC_FUNC_IMPL(__imp__sub_82498DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-7284
	ctx.r10.s64 = r11.s64 + -7284;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82498DF4"))) PPC_WEAK_FUNC(sub_82498DF4);
PPC_FUNC_IMPL(__imp__sub_82498DF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x824986f0
	sub_824986F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82498DF8"))) PPC_WEAK_FUNC(sub_82498DF8);
PPC_FUNC_IMPL(__imp__sub_82498DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498DFC"))) PPC_WEAK_FUNC(sub_82498DFC);
PPC_FUNC_IMPL(__imp__sub_82498DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498E00"))) PPC_WEAK_FUNC(sub_82498E00);
PPC_FUNC_IMPL(__imp__sub_82498E00) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82496680
	sub_82496680(ctx, base);
	// bl 0x82497df0
	sub_82497DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82498E24"))) PPC_WEAK_FUNC(sub_82498E24);
PPC_FUNC_IMPL(__imp__sub_82498E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498E28"))) PPC_WEAK_FUNC(sub_82498E28);
PPC_FUNC_IMPL(__imp__sub_82498E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498E2C"))) PPC_WEAK_FUNC(sub_82498E2C);
PPC_FUNC_IMPL(__imp__sub_82498E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498E30"))) PPC_WEAK_FUNC(sub_82498E30);
PPC_FUNC_IMPL(__imp__sub_82498E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498E34"))) PPC_WEAK_FUNC(sub_82498E34);
PPC_FUNC_IMPL(__imp__sub_82498E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498E38"))) PPC_WEAK_FUNC(sub_82498E38);
PPC_FUNC_IMPL(__imp__sub_82498E38) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7244
	ctx.r10.s64 = r11.s64 + -7244;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// li r11,112
	r11.s64 = 112;
loc_82498E5C:
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82498e5c
	if (!cr6.eq) goto loc_82498E5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498648
	sub_82498648(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-7284
	ctx.r9.s64 = r11.s64 + -7284;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82498EA8"))) PPC_WEAK_FUNC(sub_82498EA8);
PPC_FUNC_IMPL(__imp__sub_82498EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498EAC"))) PPC_WEAK_FUNC(sub_82498EAC);
PPC_FUNC_IMPL(__imp__sub_82498EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498EB0"))) PPC_WEAK_FUNC(sub_82498EB0);
PPC_FUNC_IMPL(__imp__sub_82498EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r9,-7348
	ctx.r4.s64 = ctx.r9.s64 + -7348;
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,60(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// srawi r9,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// addi r5,r10,-7224
	ctx.r5.s64 = ctx.r10.s64 + -7224;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// subf r7,r7,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r7.s64;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lfs f2,-25600(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f4,-12676(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12676);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4560);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82706710
	sub_82706710(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82498FC4"))) PPC_WEAK_FUNC(sub_82498FC4);
PPC_FUNC_IMPL(__imp__sub_82498FC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82498FC8"))) PPC_WEAK_FUNC(sub_82498FC8);
PPC_FUNC_IMPL(__imp__sub_82498FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x824990f0
	if (!cr6.eq) goto loc_824990F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r30,336(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,28(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,60(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x824990f0
	if (!cr6.eq) goto loc_824990F0;
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
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// addi r5,r9,-7208
	ctx.r5.s64 = ctx.r9.s64 + -7208;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,336(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 336);
	// lfs f31,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r9,-7224
	ctx.r5.s64 = ctx.r9.s64 + -7224;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824990F0:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82499100"))) PPC_WEAK_FUNC(sub_82499100);
PPC_FUNC_IMPL(__imp__sub_82499100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82499104"))) PPC_WEAK_FUNC(sub_82499104);
PPC_FUNC_IMPL(__imp__sub_82499104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499108"))) PPC_WEAK_FUNC(sub_82499108);
PPC_FUNC_IMPL(__imp__sub_82499108) {
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
	// addi r10,r11,-7284
	ctx.r10.s64 = r11.s64 + -7284;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824986f0
	sub_824986F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249914c
	if (cr6.eq) goto loc_8249914C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249914C:
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

__attribute__((alias("__imp__sub_82499160"))) PPC_WEAK_FUNC(sub_82499160);
PPC_FUNC_IMPL(__imp__sub_82499160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499164"))) PPC_WEAK_FUNC(sub_82499164);
PPC_FUNC_IMPL(__imp__sub_82499164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499168"))) PPC_WEAK_FUNC(sub_82499168);
PPC_FUNC_IMPL(__imp__sub_82499168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-7180
	ctx.r10.s64 = r11.s64 + -7180;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82499174"))) PPC_WEAK_FUNC(sub_82499174);
PPC_FUNC_IMPL(__imp__sub_82499174) {
	PPC_FUNC_PROLOGUE();
	// b 0x824986f0
	sub_824986F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82499178"))) PPC_WEAK_FUNC(sub_82499178);
PPC_FUNC_IMPL(__imp__sub_82499178) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82496680
	sub_82496680(ctx, base);
	// bl 0x82497b80
	sub_82497B80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8249919C"))) PPC_WEAK_FUNC(sub_8249919C);
PPC_FUNC_IMPL(__imp__sub_8249919C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824991A0"))) PPC_WEAK_FUNC(sub_824991A0);
PPC_FUNC_IMPL(__imp__sub_824991A0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12196
	ctx.r10.s64 = r11.s64 + -12196;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// li r11,103
	r11.s64 = 103;
loc_824991C4:
	// rlwinm r8,r5,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824991c4
	if (!cr6.eq) goto loc_824991C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498648
	sub_82498648(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-7180
	ctx.r10.s64 = r11.s64 + -7180;
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

__attribute__((alias("__imp__sub_82499208"))) PPC_WEAK_FUNC(sub_82499208);
PPC_FUNC_IMPL(__imp__sub_82499208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249920C"))) PPC_WEAK_FUNC(sub_8249920C);
PPC_FUNC_IMPL(__imp__sub_8249920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499210"))) PPC_WEAK_FUNC(sub_82499210);
PPC_FUNC_IMPL(__imp__sub_82499210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7140
	ctx.r4.s64 = ctx.r10.s64 + -7140;
	// lwz r3,336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-25600(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82498630
	sub_82498630(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82496688
	sub_82496688(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f2,-11748(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -11748);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-24324(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24324);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f3,6664(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6664);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82706710
	sub_82706710(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_824992AC"))) PPC_WEAK_FUNC(sub_824992AC);
PPC_FUNC_IMPL(__imp__sub_824992AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824992B0"))) PPC_WEAK_FUNC(sub_824992B0);
PPC_FUNC_IMPL(__imp__sub_824992B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r31,336(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r7,-7124
	ctx.r4.s64 = ctx.r7.s64 + -7124;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82499318"))) PPC_WEAK_FUNC(sub_82499318);
PPC_FUNC_IMPL(__imp__sub_82499318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249931C"))) PPC_WEAK_FUNC(sub_8249931C);
PPC_FUNC_IMPL(__imp__sub_8249931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499320"))) PPC_WEAK_FUNC(sub_82499320);
PPC_FUNC_IMPL(__imp__sub_82499320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8249934c
	if (cr6.eq) goto loc_8249934C;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8249934c
	if (cr6.eq) goto loc_8249934C;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8249934C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499354"))) PPC_WEAK_FUNC(sub_82499354);
PPC_FUNC_IMPL(__imp__sub_82499354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499358"))) PPC_WEAK_FUNC(sub_82499358);
PPC_FUNC_IMPL(__imp__sub_82499358) {
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
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x8249947c
	if (!cr6.eq) goto loc_8249947C;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82499470
	if (!cr6.eq) goto loc_82499470;
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x824993ac
	if (cr6.eq) goto loc_824993AC;
	// li r11,0
	r11.s64 = 0;
loc_824993AC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82499470
	if (!cr6.eq) goto loc_82499470;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,336(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// mulhw r11,r3,r9
	r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r3
	r11.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x82499470
	if (cr6.gt) goto loc_82499470;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82499418
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82499418;
	// bdzf 4*cr6+eq,0x82499424
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82499424;
	// bdzf 4*cr6+eq,0x82499430
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82499430;
	// bdzf 4*cr6+eq,0x8249943c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8249943C;
	// bne cr6,0x82499448
	if (!cr6.eq) goto loc_82499448;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7044
	ctx.r4.s64 = ctx.r10.s64 + -7044;
	// b 0x82499450
	goto loc_82499450;
loc_82499418:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7060
	ctx.r4.s64 = ctx.r10.s64 + -7060;
	// b 0x82499450
	goto loc_82499450;
loc_82499424:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7076
	ctx.r4.s64 = ctx.r10.s64 + -7076;
	// b 0x82499450
	goto loc_82499450;
loc_82499430:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7088
	ctx.r4.s64 = ctx.r10.s64 + -7088;
	// b 0x82499450
	goto loc_82499450;
loc_8249943C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7100
	ctx.r4.s64 = ctx.r10.s64 + -7100;
	// b 0x82499450
	goto loc_82499450;
loc_82499448:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-7112
	ctx.r4.s64 = ctx.r10.s64 + -7112;
loc_82499450:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82499470:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82498630
	sub_82498630(ctx, base);
loc_8249947C:
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

__attribute__((alias("__imp__sub_82499494"))) PPC_WEAK_FUNC(sub_82499494);
PPC_FUNC_IMPL(__imp__sub_82499494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499498"))) PPC_WEAK_FUNC(sub_82499498);
PPC_FUNC_IMPL(__imp__sub_82499498) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x824994f4
	if (!cr6.eq) goto loc_824994F4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82499358
	sub_82499358(ctx, base);
loc_824994F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82499504"))) PPC_WEAK_FUNC(sub_82499504);
PPC_FUNC_IMPL(__imp__sub_82499504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82499508"))) PPC_WEAK_FUNC(sub_82499508);
PPC_FUNC_IMPL(__imp__sub_82499508) {
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
	// addi r10,r11,-7180
	ctx.r10.s64 = r11.s64 + -7180;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824986f0
	sub_824986F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8249954c
	if (cr6.eq) goto loc_8249954C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249954C:
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

__attribute__((alias("__imp__sub_82499560"))) PPC_WEAK_FUNC(sub_82499560);
PPC_FUNC_IMPL(__imp__sub_82499560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

