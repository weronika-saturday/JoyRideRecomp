#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8266B0A8"))) PPC_WEAK_FUNC(sub_8266B0A8);
PPC_FUNC_IMPL(__imp__sub_8266B0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266b200
	if (cr6.eq) goto loc_8266B200;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8265e450
	sub_8265E450(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8266b10c
	if (!cr6.gt) goto loc_8266B10C;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
loc_8266B0E4:
	// lwzu r28,4(r29)
	ea = 4 + r29.u32;
	r28.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8266b0e4
	if (!cr0.eq) goto loc_8266B0E4;
loc_8266B10C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266b1e4
	if (!cr6.gt) goto loc_8266B1E4;
	// li r29,0
	r29.s64 = 0;
loc_8266B120:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82bfc898
	sub_82BFC898(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfc898
	sub_82BFC898(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x8266b158
	if (!cr6.gt) goto loc_8266B158;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8266b1d0
	if (cr6.gt) goto loc_8266B1D0;
loc_8266B158:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8266b16c
	if (!cr6.eq) goto loc_8266B16C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_8266B16C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8266b1c8
	if (cr6.eq) goto loc_8266B1C8;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r29,r10
	r11.u64 = r29.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266B1B8:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266b1b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266B1B8;
loc_8266B1C8:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r29,r29,-112
	r29.s64 = r29.s64 + -112;
loc_8266B1D0:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,112
	r29.s64 = r29.s64 + 112;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8266b120
	if (cr6.lt) goto loc_8266B120;
loc_8266B1E4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
loc_8266B200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8266B204"))) PPC_WEAK_FUNC(sub_8266B204);
PPC_FUNC_IMPL(__imp__sub_8266B204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8266B208"))) PPC_WEAK_FUNC(sub_8266B208);
PPC_FUNC_IMPL(__imp__sub_8266B208) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266b2dc
	if (!cr6.gt) goto loc_8266B2DC;
	// li r30,0
	r30.s64 = 0;
loc_8266B230:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x8266b250
	if (cr6.eq) goto loc_8266B250;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bne cr6,0x8266b2c8
	if (!cr6.eq) goto loc_8266B2C8;
loc_8266B250:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8266b264
	if (!cr6.eq) goto loc_8266B264;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8266B264:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// lwz r4,204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x8266b2c0
	if (cr6.eq) goto loc_8266B2C0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266B2B0:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266b2b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266B2B0;
loc_8266B2C0:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-112
	r30.s64 = r30.s64 + -112;
loc_8266B2C8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,112
	r30.s64 = r30.s64 + 112;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8266b230
	if (cr6.lt) goto loc_8266B230;
loc_8266B2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266B2E0"))) PPC_WEAK_FUNC(sub_8266B2E0);
PPC_FUNC_IMPL(__imp__sub_8266B2E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266B2E4"))) PPC_WEAK_FUNC(sub_8266B2E4);
PPC_FUNC_IMPL(__imp__sub_8266B2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266B2E8"))) PPC_WEAK_FUNC(sub_8266B2E8);
PPC_FUNC_IMPL(__imp__sub_8266B2E8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r7,37(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lbz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r26,16(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r11,5472
	r11.s64 = r11.s64 + 5472;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lbz r10,38(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// lfs f13,18244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18244);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfsx f10,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r29,224
	ctx.r6.s64 = r29.s64 + 224;
	// lfs f0,-13388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13388);
	f0.f64 = double(temp.f32);
	// addi r7,r26,224
	ctx.r7.s64 = r26.s64 + 224;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne cr6,0x8266b37c
	if (!cr6.eq) goto loc_8266B37C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// b 0x8266b384
	goto loc_8266B384;
loc_8266B37C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
loc_8266B384:
	// stfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8267b688
	sub_8267B688(ctx, base);
	// lbz r11,136(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266b3f0
	if (cr6.eq) goto loc_8266B3F0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r8,r11,68
	ctx.r8.s64 = r11.s64 + 68;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// addi r7,r30,24
	ctx.r7.s64 = r30.s64 + 24;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8265a3f0
	sub_8265A3F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_8266B3F0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8266b4f4
	if (!cr6.lt) goto loc_8266B4F4;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8266b4a0
	if (!cr6.lt) goto loc_8266B4A0;
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b428
	if (cr6.eq) goto loc_8266B428;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b42c
	if (!cr6.eq) goto loc_8266B42C;
loc_8266B428:
	// li r11,1
	r11.s64 = 1;
loc_8266B42C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266b454
	if (!cr6.eq) goto loc_8266B454;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_8266B454:
	// lbz r11,232(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b46c
	if (cr6.eq) goto loc_8266B46C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b470
	if (!cr6.eq) goto loc_8266B470;
loc_8266B46C:
	// li r11,1
	r11.s64 = 1;
loc_8266B470:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266b498
	if (!cr6.eq) goto loc_8266B498;
loc_8266B47C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8266B488:
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8266B498:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_8266B4A0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8266b4f4
	if (cr6.lt) goto loc_8266B4F4;
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b4c0
	if (cr6.eq) goto loc_8266B4C0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b4c4
	if (!cr6.eq) goto loc_8266B4C4;
loc_8266B4C0:
	// li r11,1
	r11.s64 = 1;
loc_8266B4C4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8266b488
	if (!cr6.eq) goto loc_8266B488;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_8266B4F4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x8266b550
	if (cr6.lt) goto loc_8266B550;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8266b550
	if (!cr6.lt) goto loc_8266B550;
	// lbz r11,232(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b51c
	if (cr6.eq) goto loc_8266B51C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b520
	if (!cr6.eq) goto loc_8266B520;
loc_8266B51C:
	// li r11,1
	r11.s64 = 1;
loc_8266B520:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8266b488
	if (cr6.eq) goto loc_8266B488;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_8266B550:
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b568
	if (cr6.eq) goto loc_8266B568;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b56c
	if (!cr6.eq) goto loc_8266B56C;
loc_8266B568:
	// li r11,1
	r11.s64 = 1;
loc_8266B56C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266b47c
	if (!cr6.eq) goto loc_8266B47C;
	// lbz r11,232(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266b590
	if (cr6.eq) goto loc_8266B590;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8266b594
	if (!cr6.eq) goto loc_8266B594;
loc_8266B590:
	// li r11,1
	r11.s64 = 1;
loc_8266B594:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266b5a8
	if (!cr6.eq) goto loc_8266B5A8;
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8266b47c
	if (cr6.gt) goto loc_8266B47C;
loc_8266B5A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8266B5C8"))) PPC_WEAK_FUNC(sub_8266B5C8);
PPC_FUNC_IMPL(__imp__sub_8266B5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8266B5CC"))) PPC_WEAK_FUNC(sub_8266B5CC);
PPC_FUNC_IMPL(__imp__sub_8266B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266B5D0"))) PPC_WEAK_FUNC(sub_8266B5D0);
PPC_FUNC_IMPL(__imp__sub_8266B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e941c
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bge cr6,0x8266b694
	if (!cr6.lt) {
		sub_8266B694(ctx, base);
		return;
	}
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8266B5F4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r9,168(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 168);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bne cr6,0x8266b680
	if (!cr6.eq) goto loc_8266B680;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 168);
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bne cr6,0x8266b680
	if (!cr6.eq) goto loc_8266B680;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r29,8(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stwx r30,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r30.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r31.u32);
loc_8266B680:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x8266b5f4
	if (cr6.lt) goto loc_8266B5F4;
}

__attribute__((alias("__imp__sub_8266B694"))) PPC_WEAK_FUNC(sub_8266B694);
PPC_FUNC_IMPL(__imp__sub_8266B694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8266B698"))) PPC_WEAK_FUNC(sub_8266B698);
PPC_FUNC_IMPL(__imp__sub_8266B698) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266b7dc
	if (!cr6.gt) goto loc_8266B7DC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r28,0
	r28.s64 = 0;
	// li r30,16
	r30.s64 = 16;
	// li r26,32
	r26.s64 = 32;
	// li r20,48
	r20.s64 = 48;
	// li r21,208
	r21.s64 = 208;
	// li r22,224
	r22.s64 = 224;
	// addi r24,r11,7520
	r24.s64 = r11.s64 + 7520;
loc_8266B6E0:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lbzx r23,r11,r19
	r23.u64 = PPC_LOAD_U8(r11.u32 + r19.u32);
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x8266b6f8
	if (cr6.eq) goto loc_8266B6F8;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// bne cr6,0x8266b74c
	if (!cr6.eq) goto loc_8266B74C;
loc_8266B6F8:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r31,r11,240
	r31.s64 = r11.s64 + 240;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r31,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r29,r30
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r29.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v11,v9,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v7,v8,v0
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v7,r31,r20
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8266B74C:
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(r23.s32, 8, xer);
	// beq cr6,0x8266b75c
	if (cr6.eq) goto loc_8266B75C;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// bne cr6,0x8266b7c8
	if (!cr6.eq) goto loc_8266B7C8;
loc_8266B75C:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r7,24(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r9,r11,224
	ctx.r9.s64 = r11.s64 + 224;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// rlwinm r8,r11,30,2,26
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r10,80
	r11.s64 = ctx.r10.s64 + 80;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lvx128 v0,r10,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r7,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r9,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r26
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r11,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v4,v6,v0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmsum3fp128 v7,v11,v10
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v5,v8,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v3,v5,v4
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v3,r9,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8266B7C8:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(r19.s32, r11.s32, xer);
	// blt cr6,0x8266b6e0
	if (cr6.lt) goto loc_8266B6E0;
loc_8266B7DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8266B7E0"))) PPC_WEAK_FUNC(sub_8266B7E0);
PPC_FUNC_IMPL(__imp__sub_8266B7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8266B7E4"))) PPC_WEAK_FUNC(sub_8266B7E4);
PPC_FUNC_IMPL(__imp__sub_8266B7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266B7E8"))) PPC_WEAK_FUNC(sub_8266B7E8);
PPC_FUNC_IMPL(__imp__sub_8266B7E8) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266b84c
	if (!cr6.eq) goto loc_8266B84C;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r4,r11,112
	ctx.r4.s64 = r11.s64 * 112;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r11,20036
	ctx.r5.s64 = r11.s64 + 20036;
	// mulli r7,r9,112
	ctx.r7.s64 = ctx.r9.s64 * 112;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266B84C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r4,r10,20016
	ctx.r4.s64 = ctx.r10.s64 + 20016;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82bfc760
	sub_82BFC760(ctx, base);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r11,19976
	ctx.r5.s64 = r11.s64 + 19976;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r9,-9036
	ctx.r5.s64 = ctx.r9.s64 + -9036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628308
	sub_82628308(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8266B8D0"))) PPC_WEAK_FUNC(sub_8266B8D0);
PPC_FUNC_IMPL(__imp__sub_8266B8D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8266B8D4"))) PPC_WEAK_FUNC(sub_8266B8D4);
PPC_FUNC_IMPL(__imp__sub_8266B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266B8D8"))) PPC_WEAK_FUNC(sub_8266B8D8);
PPC_FUNC_IMPL(__imp__sub_8266B8D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8265e090
	sub_8265E090(ctx, base);
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266b92c
	if (cr6.eq) goto loc_8266B92C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8266b924
	if (cr6.eq) goto loc_8266B924;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8266b0a8
	sub_8266B0A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8266B924:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8266b208
	sub_8266B208(ctx, base);
loc_8266B92C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266B930"))) PPC_WEAK_FUNC(sub_8266B930);
PPC_FUNC_IMPL(__imp__sub_8266B930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266B934"))) PPC_WEAK_FUNC(sub_8266B934);
PPC_FUNC_IMPL(__imp__sub_8266B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266B938"))) PPC_WEAK_FUNC(sub_8266B938);
PPC_FUNC_IMPL(__imp__sub_8266B938) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12608(r1)
	ea = -12608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266b998
	if (!cr6.lt) goto loc_8266B998;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r7,r9,20048
	ctx.r7.s64 = ctx.r9.s64 + 20048;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8266B998:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8266ba7c
	if (!cr6.gt) goto loc_8266BA7C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// extsb r28,r8
	r28.s64 = ctx.r8.s8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lfs f30,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f30.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_8266B9C0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfs f31,12448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12448, temp.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f31,12452(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12452, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f30,12416(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12416, temp.u32);
	// stw r26,12496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12496, r26.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8266b9f8
	if (cr6.eq) goto loc_8266B9F8;
	// addi r10,r11,7648
	ctx.r10.s64 = r11.s64 + 7648;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// b 0x8266ba10
	goto loc_8266BA10;
loc_8266B9F8:
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r10,7200
	ctx.r8.s64 = ctx.r10.s64 + 7200;
	// stw r8,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r8.u32);
loc_8266BA10:
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,7216(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7216);
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8266ba70
	if (cr6.eq) goto loc_8266BA70;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266BA70:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8266b9c0
	if (!cr0.eq) goto loc_8266B9C0;
loc_8266BA7C:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266baac
	if (!cr6.lt) goto loc_8266BAAC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266BAAC:
	// addi r1,r1,12608
	ctx.r1.s64 = ctx.r1.s64 + 12608;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_8266BAB8"))) PPC_WEAK_FUNC(sub_8266BAB8);
PPC_FUNC_IMPL(__imp__sub_8266BAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8266BABC"))) PPC_WEAK_FUNC(sub_8266BABC);
PPC_FUNC_IMPL(__imp__sub_8266BABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266BAC0"))) PPC_WEAK_FUNC(sub_8266BAC0);
PPC_FUNC_IMPL(__imp__sub_8266BAC0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r19,0(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r19
	ctx.r10.u64 = r11.u64 + r19.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8266bbbc
	if (!cr6.gt) goto loc_8266BBBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r29,64
	r29.s64 = 64;
	// li r31,80
	r31.s64 = 80;
	// li r3,144
	ctx.r3.s64 = 144;
loc_8266BB30:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r6,240
	r11.s64 = ctx.r6.s64 + 240;
	// addi r7,r11,92
	ctx.r7.s64 = r11.s64 + 92;
	// lwz r10,164(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 164);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r23
	_mm_store_si128((__m128i*)(base + ((r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r31.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r11,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvlx v5,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266bb30
	if (cr6.lt) goto loc_8266BB30;
loc_8266BBBC:
	// lwz r23,0(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// bge cr6,0x8266bd78
	if (!cr6.lt) goto loc_8266BD78;
	// rlwinm r11,r23,1,0,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r23,r11
	r11.u64 = r23.u64 + r11.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8266BBD8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r27,r31,r11
	r27.u64 = r31.u64 + r11.u64;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// cmpw cr6,r21,r10
	cr6.compare<int32_t>(r21.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8266bd64
	if (cr6.gt) goto loc_8266BD64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lhz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 168);
	// lbzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,29,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x4;
	// lwzx r29,r4,r11
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// lhz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 168);
	// lbzx r11,r3,r9
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8266bc7c
	if (cr6.eq) goto loc_8266BC7C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	// add r10,r31,r9
	ctx.r10.u64 = r31.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// b 0x8266bd5c
	goto loc_8266BD5C;
loc_8266BC7C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82c4fba0
	sub_82C4FBA0(ctx, base);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8266aad8
	sub_8266AAD8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8266bd64
	if (cr6.eq) goto loc_8266BD64;
	// lhz r10,168(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 168);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r8.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r5,r7,2
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bne cr6,0x8266bcf4
	if (!cr6.eq) goto loc_8266BCF4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266BCF4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r10,r31,r9
	ctx.r10.u64 = r31.u64 + ctx.r9.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_8266BD5C:
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stwx r4,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8266BD64:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x8266bbd8
	if (cr6.lt) goto loc_8266BBD8;
loc_8266BD78:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8266bdd8
	if (!cr6.gt) goto loc_8266BDD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
loc_8266BD98:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r7,12(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,164(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stvx128 v0,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvx128 v13,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x8266bd98
	if (cr6.lt) goto loc_8266BD98;
loc_8266BDD8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r19.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
}

__attribute__((alias("__imp__sub_8266BDE4"))) PPC_WEAK_FUNC(sub_8266BDE4);
PPC_FUNC_IMPL(__imp__sub_8266BDE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8266BDE8"))) PPC_WEAK_FUNC(sub_8266BDE8);
PPC_FUNC_IMPL(__imp__sub_8266BDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266beec
	if (!cr6.gt) goto loc_8266BEEC;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// li r26,0
	r26.s64 = 0;
	// li r20,16
	r20.s64 = 16;
	// li r21,80
	r21.s64 = 80;
	// li r22,112
	r22.s64 = 112;
	// lfs f30,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// li r23,64
	r23.s64 = 64;
	// li r24,96
	r24.s64 = 96;
loc_8266BE3C:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r28,r26,r11
	r28.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// addi r31,r28,240
	r31.s64 = r28.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bf6be8
	sub_82BF6BE8(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// beq cr6,0x8266beb0
	if (cr6.eq) goto loc_8266BEB0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266be8c
	if (!cr6.eq) goto loc_8266BE8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266BE8C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stbx r20,r9,r30
	PPC_STORE_U8(ctx.r9.u32 + r30.u32, r20.u8);
loc_8266BEB0:
	// lvx128 v0,r31,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r24
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// bl 0x8263dee8
	sub_8263DEE8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 / f0.f64));
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8266be3c
	if (cr6.lt) goto loc_8266BE3C;
loc_8266BEEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
}

__attribute__((alias("__imp__sub_8266BEF8"))) PPC_WEAK_FUNC(sub_8266BEF8);
PPC_FUNC_IMPL(__imp__sub_8266BEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8266BEFC"))) PPC_WEAK_FUNC(sub_8266BEFC);
PPC_FUNC_IMPL(__imp__sub_8266BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266BF00"))) PPC_WEAK_FUNC(sub_8266BF00);
PPC_FUNC_IMPL(__imp__sub_8266BF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f8
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r21,0
	r21.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r23,1
	r23.s64 = 1;
	// mr r24,r21
	r24.u64 = r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266c074
	if (!cr6.gt) goto loc_8266C074;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_8266BF3C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r30,r25,r11
	r30.u64 = r25.u64 + r11.u64;
	// lwzx r11,r25,r11
	r11.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8266c060
	if (!cr6.eq) goto loc_8266C060;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82c4fba0
	sub_82C4FBA0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8266aad8
	sub_8266AAD8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8266c060
	if (cr6.lt) goto loc_8266C060;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8266c084
	if (cr6.eq) goto loc_8266C084;
	// mr r23,r21
	r23.u64 = r21.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266bfc8
	if (!cr6.eq) goto loc_8266BFC8;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266BFC8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// stwx r6,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,11
	cr6.compare<int32_t>(ctx.r3.s32, 11, xer);
	// bne cr6,0x8266c058
	if (!cr6.eq) goto loc_8266C058;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// extsh r8,r29
	ctx.r8.s64 = r29.s16;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r11,48
	ctx.r6.s64 = r11.s64 + 48;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r11,40(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rotlwi r9,r5,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// mullw r10,r4,r8
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// b 0x8266c060
	goto loc_8266C060;
loc_8266C058:
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
loc_8266C060:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x8266bf3c
	if (cr6.lt) goto loc_8266BF3C;
loc_8266C074:
	// stb r23,0(r20)
	PPC_STORE_U8(r20.u32 + 0, r23.u8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x828e9448
	return;
loc_8266C084:
	// stb r21,0(r20)
	PPC_STORE_U8(r20.u32 + 0, r21.u8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
}

__attribute__((alias("__imp__sub_8266C090"))) PPC_WEAK_FUNC(sub_8266C090);
PPC_FUNC_IMPL(__imp__sub_8266C090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8266C094"))) PPC_WEAK_FUNC(sub_8266C094);
PPC_FUNC_IMPL(__imp__sub_8266C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266C098"))) PPC_WEAK_FUNC(sub_8266C098);
PPC_FUNC_IMPL(__imp__sub_8266C098) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8265c2d0
	sub_8265C2D0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,20076
	ctx.r10.s64 = r11.s64 + 20076;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r29,r31,60
	r29.s64 = r31.s64 + 60;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r6.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// bl 0x8267c3f0
	sub_8267C3F0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lwz r30,820(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 820);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r9,2
	r11.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8266c170
	if (!cr6.lt) goto loc_8266C170;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r5
	cr6.compare<int32_t>(r30.s32, ctx.r5.s32, xer);
	// blt cr6,0x8266c164
	if (cr6.lt) goto loc_8266C164;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8266C164:
	// li r6,112
	ctx.r6.s64 = 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8266C170:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266C178"))) PPC_WEAK_FUNC(sub_8266C178);
PPC_FUNC_IMPL(__imp__sub_8266C178) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8266C17C"))) PPC_WEAK_FUNC(sub_8266C17C);
PPC_FUNC_IMPL(__imp__sub_8266C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266C180"))) PPC_WEAK_FUNC(sub_8266C180);
PPC_FUNC_IMPL(__imp__sub_8266C180) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,20076
	ctx.r10.s64 = r11.s64 + 20076;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8266c1bc
	if (cr6.eq) goto loc_8266C1BC;
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
loc_8266C1BC:
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266c21c
	if (!cr6.eq) goto loc_8266C21C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,112
	ctx.r6.s64 = 112;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266C21C:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8265c140
	sub_8265C140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8266C234"))) PPC_WEAK_FUNC(sub_8266C234);
PPC_FUNC_IMPL(__imp__sub_8266C234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8266C238"))) PPC_WEAK_FUNC(sub_8266C238);
PPC_FUNC_IMPL(__imp__sub_8266C238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266c2cc
	if (!cr6.eq) goto loc_8266C2CC;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfa7e8
	sub_82BFA7E8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20216
	ctx.r4.s64 = r11.s64 + 20216;
	// bl 0x82bf9ed0
	sub_82BF9ED0(ctx, base);
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r5,-4046
	ctx.r5.s64 = -265158656;
	// li r8,1083
	ctx.r8.s64 = 1083;
	// addi r7,r9,20152
	ctx.r7.s64 = ctx.r9.s64 + 20152;
	// lwz r3,-25248(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25248);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,13396
	ctx.r5.u64 = ctx.r5.u64 | 13396;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bf9cf0
	sub_82BF9CF0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8266C2CC:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mulli r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 * 112;
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// ble 0x8266c318
	if (!cr0.gt) goto loc_8266C318;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_8266C300:
	// addic. r10,r8,-24
	xer.ca = ctx.r8.u32 > 23;
	ctx.r10.s64 = ctx.r8.s64 + -24;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8266c310
	if (cr0.eq) goto loc_8266C310;
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_8266C310:
	// addi r8,r8,112
	ctx.r8.s64 = ctx.r8.s64 + 112;
	// bdnz 0x8266c300
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266C300;
loc_8266C318:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,12336(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12336);
	f0.f64 = double(temp.f32);
	// li r8,5
	ctx.r8.s64 = 5;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r4,12304
	ctx.r10.s64 = ctx.r4.s64 + 12304;
	// addi r9,r11,80
	ctx.r9.s64 = r11.s64 + 80;
	// li r31,16
	r31.s64 = 16;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,128(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 128);
	// lbz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r4,12364
	ctx.r3.s64 = ctx.r4.s64 + 12364;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r7,7220(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7220);
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// stb r7,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r7.u8);
	// lfs f13,12340(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12340);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lbz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
loc_8266C3A4:
	// lwzu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8266c3a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266C3A4;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,12388(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12388);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// lwz r8,12392(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12392);
	// stw r8,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r8.u32);
	// lwz r7,12396(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12396);
	// stw r7,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r7.u32);
	// lwz r6,12400(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12400);
	// stw r6,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r6.u32);
	// lwz r5,12404(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12404);
	// stw r5,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r5.u32);
	// lwz r3,12408(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12408);
	// stw r3,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r3.u32);
	// lwz r10,12412(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12412);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8266C400"))) PPC_WEAK_FUNC(sub_8266C400);
PPC_FUNC_IMPL(__imp__sub_8266C400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266C404"))) PPC_WEAK_FUNC(sub_8266C404);
PPC_FUNC_IMPL(__imp__sub_8266C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266C408"))) PPC_WEAK_FUNC(sub_8266C408);
PPC_FUNC_IMPL(__imp__sub_8266C408) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8266c534
	if (!cr6.gt) goto loc_8266C534;
	// mr r29,r24
	r29.u64 = r24.u64;
	// li r26,1
	r26.s64 = 1;
loc_8266C460:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r29,r11
	r30.u64 = r29.u64 + r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmpw cr6,r25,r9
	cr6.compare<int32_t>(r25.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8266c520
	if (cr6.gt) goto loc_8266C520;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8266c4d8
	if (cr6.eq) goto loc_8266C4D8;
	// lhz r9,168(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bge cr6,0x8266c520
	if (!cr6.lt) goto loc_8266C520;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8266c4d8
	if (cr6.eq) goto loc_8266C4D8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8266c4d8
	if (!cr6.eq) goto loc_8266C4D8;
	// stbx r26,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r26.u8);
	// addi r5,r11,240
	ctx.r5.s64 = r11.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
loc_8266C4D8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266c500
	if (!cr6.eq) goto loc_8266C500;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266C500:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_8266C520:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8266c460
	if (cr6.lt) goto loc_8266C460;
loc_8266C534:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266c56c
	if (!cr6.eq) goto loc_8266C56C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266C56C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8266C574"))) PPC_WEAK_FUNC(sub_8266C574);
PPC_FUNC_IMPL(__imp__sub_8266C574) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8266C578"))) PPC_WEAK_FUNC(sub_8266C578);
PPC_FUNC_IMPL(__imp__sub_8266C578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93e8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8266cad8
	if (cr6.eq) goto loc_8266CAD8;
	// lwz r18,0(r13)
	r18.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r17,12
	r17.s64 = 12;
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c5e0
	if (!cr6.lt) goto loc_8266C5E0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17832
	ctx.r7.s64 = ctx.r9.s64 + 17832;
	// addi r6,r8,19960
	ctx.r6.s64 = ctx.r8.s64 + 19960;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_8266C5E0:
	// li r21,0
	r21.s64 = 0;
	// lwz r31,828(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 828);
	// lis r20,-32768
	r20.s64 = -2147483648;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r31,r20
	ctx.r9.u64 = r31.u64 | r20.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// lwz r31,828(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 828);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r6,r31,r20
	ctx.r6.u64 = r31.u64 | r20.u64;
	// addi r5,r11,127
	ctx.r5.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,5,0,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,0(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r29,r27,-1
	xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// mr r28,r19
	r28.u64 = r19.u64;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// add r8,r11,r25
	ctx.r8.u64 = r11.u64 + r25.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blt 0x8266c780
	if (cr0.lt) goto loc_8266C780;
	// addi r30,r26,-8
	r30.s64 = r26.s64 + -8;
	// subf r24,r19,r25
	r24.s64 = r25.s64 - r19.s64;
	// li r22,16
	r22.s64 = 16;
loc_8266C6B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x8266c6c8
	if (cr6.lt) goto loc_8266C6C8;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// dcbt r10,r22
loc_8266C6C8:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r31,r11,32
	r31.s64 = r11.s64 + 32;
	// stwx r10,r24,r28
	PPC_STORE_U32(r24.u32 + r28.u32, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8266c6f8
	if (!cr6.gt) goto loc_8266C6F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8266C6F8:
	// lbz r6,15(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lbz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// lbz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// slw r11,r5,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// slw r9,r4,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r7,r3,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r11,r7,r5
	r11.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r4,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r4.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// lbz r5,30(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r3,29(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// slw r10,r3,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// slw r8,r4,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stwu r9,32(r30)
	ea = 32 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// bge 0x8266c6b0
	if (!cr0.lt) goto loc_8266C6B0;
loc_8266C780:
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c7b0
	if (!cr6.lt) goto loc_8266C7B0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17792
	ctx.r8.s64 = ctx.r9.s64 + 17792;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C7B0:
	// lwz r3,88(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266c7c4
	if (cr6.eq) goto loc_8266C7C4;
	// bl 0x82c66db0
	sub_82C66DB0(ctx, base);
loc_8266C7C4:
	// lwz r3,88(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 88);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8266c800
	if (cr6.eq) goto loc_8266C800;
	// bl 0x82c66db8
	sub_82C66DB8(ctx, base);
loc_8266C800:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add. r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8266c85c
	if (!cr0.gt) goto loc_8266C85C;
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c850
	if (!cr6.lt) goto loc_8266C850;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17780
	ctx.r8.s64 = ctx.r9.s64 + 17780;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C850:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
loc_8266C85C:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8266c8dc
	if (cr6.eq) goto loc_8266C8DC;
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c894
	if (!cr6.lt) goto loc_8266C894;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,19928
	ctx.r8.s64 = ctx.r9.s64 + 19928;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C894:
	// lbz r11,0(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8266c8ac
	if (cr6.eq) goto loc_8266C8AC;
	// lbz r11,0(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8266c894
	if (!cr6.eq) goto loc_8266C894;
loc_8266C8AC:
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c8dc
	if (!cr6.lt) goto loc_8266C8DC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C8DC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add. r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x8266c9d8
	if (!cr0.gt) goto loc_8266C9D8;
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c91c
	if (!cr6.lt) goto loc_8266C91C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17768
	ctx.r8.s64 = ctx.r9.s64 + 17768;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C91C:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// bl 0x8263e150
	sub_8263E150(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r31,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8266c974
	if (!cr6.eq) goto loc_8266C974;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// b 0x8266c9d0
	goto loc_8266C9D0;
loc_8266C974:
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266c9a4
	if (!cr6.lt) goto loc_8266C9A4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17756
	ctx.r8.s64 = ctx.r9.s64 + 17756;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266C9A4:
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r3,100(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r4,204(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 204);
loc_8266C9D0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8263e180
	sub_8263E180(ctx, base);
loc_8266C9D8:
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266ca08
	if (!cr6.lt) goto loc_8266CA08;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266CA08:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266ca6c
	if (!cr6.eq) goto loc_8266CA6C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266CA6C:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266cad8
	if (!cr6.eq) goto loc_8266CAD8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266CAD8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8266CADC"))) PPC_WEAK_FUNC(sub_8266CADC);
PPC_FUNC_IMPL(__imp__sub_8266CADC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8266CAE0"))) PPC_WEAK_FUNC(sub_8266CAE0);
PPC_FUNC_IMPL(__imp__sub_8266CAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12640(r1)
	ea = -12640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r11,r19,r20
	r11.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266cb3c
	if (!cr6.lt) goto loc_8266CB3C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17620
	ctx.r8.s64 = ctx.r9.s64 + 17620;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266CB3C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r27,0
	r27.s64 = 0;
	// addi r24,r4,88
	r24.s64 = ctx.r4.s64 + 88;
	// mr r23,r27
	r23.u64 = r27.u64;
	// lfs f31,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f31,12416(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12416, temp.u32);
	// stfs f0,12448(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12448, temp.u32);
	// stfs f0,12452(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12452, temp.u32);
	// ble cr6,0x8266cca0
	if (!cr6.gt) goto loc_8266CCA0;
	// mr r22,r27
	r22.u64 = r27.u64;
	// lis r26,-31931
	r26.s64 = -2092630016;
loc_8266CB7C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(r23.s32, ctx.r10.s32, xer);
	// lwzx r31,r11,r22
	r31.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// bne cr6,0x8266cba4
	if (!cr6.eq) goto loc_8266CBA4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r25,r31,r11
	r25.u64 = r31.u64 + r11.u64;
	// b 0x8266cba8
	goto loc_8266CBA8;
loc_8266CBA4:
	// addi r25,r31,512
	r25.s64 = r31.s64 + 512;
loc_8266CBA8:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// bge cr6,0x8266cc94
	if (!cr6.lt) goto loc_8266CC94;
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
loc_8266CBB4:
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// dcbt r0,r10
	// dcbt r0,r11
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r6,7216(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stfs f31,12416(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12416, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r6,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r6.u32);
	// stw r27,12496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12496, r27.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lwz r11,-24484(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266cca0
	if (cr6.eq) goto loc_8266CCA0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8266cc50
	if (cr6.eq) goto loc_8266CC50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266CC50:
	// lfs f0,12416(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 12416);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8266cc64
	if (!cr6.eq) goto loc_8266CC64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8266CC64:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266cc80
	if (cr6.eq) goto loc_8266CC80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8266c238
	sub_8266C238(ctx, base);
loc_8266CC80:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// blt cr6,0x8266cbb4
	if (cr6.lt) goto loc_8266CBB4;
loc_8266CC94:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x8266cb7c
	if (cr6.lt) goto loc_8266CB7C;
loc_8266CCA0:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266ccd0
	if (!cr6.lt) goto loc_8266CCD0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266CCD0:
	// addi r1,r1,12640
	ctx.r1.s64 = ctx.r1.s64 + 12640;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_8266CCD8"))) PPC_WEAK_FUNC(sub_8266CCD8);
PPC_FUNC_IMPL(__imp__sub_8266CCD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8266CCDC"))) PPC_WEAK_FUNC(sub_8266CCDC);
PPC_FUNC_IMPL(__imp__sub_8266CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266CCE0"))) PPC_WEAK_FUNC(sub_8266CCE0);
PPC_FUNC_IMPL(__imp__sub_8266CCE0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r6,16
	r28.s64 = ctx.r6.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,12416(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12416, ctx.r10.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f31,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f31.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f31,12336(r6)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12336, temp.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r7,7216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// lwz r11,-24484(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266cdc4
	if (cr6.eq) goto loc_8266CDC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8266cd94
	if (cr6.eq) goto loc_8266CD94;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266CD94:
	// lfs f0,12336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12336);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8266cda8
	if (!cr6.eq) goto loc_8266CDA8;
	// li r11,0
	r11.s64 = 0;
loc_8266CDA8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266cdc4
	if (cr6.eq) goto loc_8266CDC4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266c238
	sub_8266C238(ctx, base);
loc_8266CDC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_8266CDCC"))) PPC_WEAK_FUNC(sub_8266CDCC);
PPC_FUNC_IMPL(__imp__sub_8266CDCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8266CDD0"))) PPC_WEAK_FUNC(sub_8266CDD0);
PPC_FUNC_IMPL(__imp__sub_8266CDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12704(r1)
	ea = -12704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r24,204(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r31,76(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// addi r9,r31,127
	ctx.r9.s64 = r31.s64 + 127;
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lis r20,-32768
	r20.s64 = -2147483648;
	// add r7,r11,r22
	ctx.r7.u64 = r11.u64 + r22.u64;
	// or r8,r31,r20
	ctx.r8.u64 = r31.u64 | r20.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// lwz r15,0(r13)
	r15.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r14,12
	r14.s64 = 12;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lwzx r11,r14,r15
	r11.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lfs f31,-12728(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12728);
	f31.f64 = double(temp.f32);
	// lfs f0,21036(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f31,12448(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12448, temp.u32);
	// stfs f0,12480(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12480, temp.u32);
	// stfs f0,12484(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12484, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x8266ce9c
	if (!cr6.lt) goto loc_8266CE9C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20048
	ctx.r8.s64 = ctx.r9.s64 + 20048;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266CE9C:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// mr r17,r27
	r17.u64 = r27.u64;
	// ble cr6,0x8266d0f8
	if (!cr6.gt) goto loc_8266D0F8;
	// li r18,1
	r18.s64 = 1;
	// lis r21,-31931
	r21.s64 = -2092630016;
loc_8266CEB4:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lhz r11,168(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 168);
	// stbx r18,r11,r22
	PPC_STORE_U8(r11.u32 + r22.u32, r18.u8);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r27
	r25.u64 = r27.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8266d064
	if (!cr6.gt) goto loc_8266D064;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8266CEEC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r26,r11
	ctx.r10.u64 = r26.u64 + r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r8,204(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplw cr6,r8,r24
	cr6.compare<uint32_t>(ctx.r8.u32, r24.u32, xer);
	// bne cr6,0x8266cf20
	if (!cr6.eq) goto loc_8266CF20;
	// lhz r11,168(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// lbzx r9,r11,r22
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r22.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8266d050
	if (!cr6.eq) goto loc_8266D050;
loc_8266CF20:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,7216(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8266d010
	if (cr6.eq) goto loc_8266D010;
	// lbz r11,7220(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266d010
	if (!cr6.eq) goto loc_8266D010;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stfs f31,12448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12448, temp.u32);
	// stw r27,12528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12528, r27.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// stw r10,96(r29)
	PPC_STORE_U32(r29.u32 + 96, ctx.r10.u32);
	// lwz r8,7216(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r8,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lwz r11,-24484(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266d0b8
	if (cr6.eq) goto loc_8266D0B8;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8266cfdc
	if (cr6.eq) goto loc_8266CFDC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266CFDC:
	// lfs f0,12448(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 12448);
	f0.f64 = double(temp.f32);
	// mr r11,r18
	r11.u64 = r18.u64;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8266cff0
	if (!cr6.eq) goto loc_8266CFF0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8266CFF0:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d050
	if (cr6.eq) goto loc_8266D050;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8266c238
	sub_8266C238(ctx, base);
	// b 0x8266d050
	goto loc_8266D050;
loc_8266D010:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,212(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82bfc8f8
	sub_82BFC8F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8266d050
	if (!cr6.eq) goto loc_8266D050;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r31,212(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_8266D050:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8266ceec
	if (cr6.lt) goto loc_8266CEEC;
loc_8266D064:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d09c
	if (!cr6.eq) goto loc_8266D09C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D09C:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// cmpw cr6,r17,r16
	cr6.compare<int32_t>(r17.s32, r16.s32, xer);
	// blt cr6,0x8266ceb4
	if (cr6.lt) goto loc_8266CEB4;
	// b 0x8266d0f8
	goto loc_8266D0F8;
loc_8266D0B8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d0f0
	if (!cr6.eq) goto loc_8266D0F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D0F0:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
loc_8266D0F8:
	// lwzx r10,r14,r15
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + r15.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266d128
	if (!cr6.lt) goto loc_8266D128;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266D128:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d164
	if (!cr6.eq) goto loc_8266D164;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D164:
	// addi r1,r1,12704
	ctx.r1.s64 = ctx.r1.s64 + 12704;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8266D16C"))) PPC_WEAK_FUNC(sub_8266D16C);
PPC_FUNC_IMPL(__imp__sub_8266D16C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8266D170"))) PPC_WEAK_FUNC(sub_8266D170);
PPC_FUNC_IMPL(__imp__sub_8266D170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12688(r1)
	ea = -12688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwzx r11,r19,r20
	r11.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266d1d4
	if (!cr6.lt) goto loc_8266D1D4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,18128
	ctx.r8.s64 = ctx.r9.s64 + 18128;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266D1D4:
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// li r21,0
	r21.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r8.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// lis r18,-32768
	r18.s64 = -2147483648;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r11,r21
	r11.u64 = r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// blt cr6,0x8266d250
	if (cr6.lt) goto loc_8266D250;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
loc_8266D234:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8266d250
	if (!cr6.eq) goto loc_8266D250;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8266d234
	if (!cr6.gt) goto loc_8266D234;
loc_8266D250:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// bgt cr6,0x8266d404
	if (cr6.gt) goto loc_8266D404;
loc_8266D264:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x82c5a800
	sub_82C5A800(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266d3b8
	if (!cr6.gt) goto loc_8266D3B8;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8266D294:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r11,r28
	r31.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bfc8f8
	sub_82BFC8F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8266d3ac
	if (!cr6.eq) goto loc_8266D3AC;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lfs f0,332(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 332);
	f0.f64 = double(temp.f32);
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,128(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// lbz r11,7220(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7220);
	// beq cr6,0x8266d2ec
	if (cr6.eq) goto loc_8266D2EC;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8266D2EC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8266d30c
	if (cr6.eq) goto loc_8266D30C;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d3ac
	if (cr6.eq) goto loc_8266D3AC;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266d3ac
	if (cr6.eq) goto loc_8266D3AC;
loc_8266D30C:
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// lwz r30,204(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8266d348
	if (!cr6.eq) goto loc_8266D348;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// xor r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 ^ r29.u64;
	// lwz r30,204(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
loc_8266D348:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266d390
	if (!cr6.eq) goto loc_8266D390;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8266D390:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_8266D3AC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x8266d294
	if (!cr0.eq) goto loc_8266D294;
loc_8266D3B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r11,r25,1
	r11.s64 = r25.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8266d3f8
	if (cr6.gt) goto loc_8266D3F8;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8266D3DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x8266d3f8
	if (!cr6.eq) goto loc_8266D3F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8266d3dc
	if (!cr6.gt) goto loc_8266D3DC;
loc_8266D3F8:
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8266d264
	if (!cr6.gt) goto loc_8266D264;
loc_8266D404:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bfcaf8
	sub_82BFCAF8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266d4e4
	if (!cr6.gt) goto loc_8266D4E4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r21
	r30.u64 = r21.u64;
	// lis r29,-31931
	r29.s64 = -2092630016;
	// lfs f30,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f30.f64 = double(temp.f32);
loc_8266D42C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwzx r31,r30,r11
	r31.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f31,12480(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12480, temp.u32);
	// stfs f31,12484(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12484, temp.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stfs f30,12448(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12448, temp.u32);
	// stw r21,12528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12528, r21.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lbz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// stw r10,96(r24)
	PPC_STORE_U32(r24.u32 + 96, ctx.r10.u32);
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r10,20(r24)
	PPC_STORE_U32(r24.u32 + 20, ctx.r10.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lwz r11,-24484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266d4e4
	if (cr6.eq) goto loc_8266D4E4;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8266d4d0
	if (cr6.eq) goto loc_8266D4D0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D4D0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8266d42c
	if (cr6.lt) goto loc_8266D42C;
loc_8266D4E4:
	// lwz r31,12(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266d538
	if (!cr0.eq) goto loc_8266D538;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266d538
	if (!cr6.eq) goto loc_8266D538;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d518
	if (cr6.eq) goto loc_8266D518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266D518:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266d538
	if (!cr6.eq) goto loc_8266D538;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d538
	if (cr6.eq) goto loc_8266D538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266D538:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266d568
	if (!cr6.lt) goto loc_8266D568;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266D568:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d5a0
	if (!cr6.eq) goto loc_8266D5A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D5A0:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r1,r1,12688
	ctx.r1.s64 = ctx.r1.s64 + 12688;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
}

__attribute__((alias("__imp__sub_8266D5D0"))) PPC_WEAK_FUNC(sub_8266D5D0);
PPC_FUNC_IMPL(__imp__sub_8266D5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8266D5D4"))) PPC_WEAK_FUNC(sub_8266D5D4);
PPC_FUNC_IMPL(__imp__sub_8266D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266D5D8"))) PPC_WEAK_FUNC(sub_8266D5D8);
PPC_FUNC_IMPL(__imp__sub_8266D5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93f8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,0(r13)
	r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,12
	r20.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r11,r20,r21
	r11.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266d628
	if (!cr6.lt) goto loc_8266D628;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20348
	ctx.r8.s64 = ctx.r9.s64 + 20348;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266D628:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// ori r30,r9,2
	r30.u64 = ctx.r9.u64 | 2;
	// li r23,0
	r23.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r7.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r24,r27,12
	r24.s64 = r27.s64 + 12;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r25,2
	r25.s64 = 2;
loc_8266D690:
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r11,42(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 42);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x8266d77c
	if (!cr6.eq) goto loc_8266D77C;
	// addi r4,r28,240
	ctx.r4.s64 = r28.s64 + 240;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bf6e08
	sub_82BF6E08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,120(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 120);
	// bl 0x826658e8
	sub_826658E8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8266d760
	if (cr0.lt) goto loc_8266D760;
	// mulli r30,r29,112
	r30.s64 = r29.s64 * 112;
loc_8266D6C8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// beq cr6,0x8266d6e8
	if (cr6.eq) goto loc_8266D6E8;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x8266d754
	if (!cr6.eq) goto loc_8266D754;
loc_8266D6E8:
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8266d6f8
	if (!cr6.eq) goto loc_8266D6F8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8266D6F8:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// lwz r4,204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x8266d754
	if (cr6.eq) goto loc_8266D754;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266D744:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266d744
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266D744;
loc_8266D754:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,-112
	r30.s64 = r30.s64 + -112;
	// bge 0x8266d6c8
	if (!cr0.lt) goto loc_8266D6C8;
loc_8266D760:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_8266D77C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x8266d690
	if (!cr0.eq) goto loc_8266D690;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8266d79c
	if (!cr6.eq) goto loc_8266D79C;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
loc_8266D79C:
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r5,r27,24
	ctx.r5.s64 = r27.s64 + 24;
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8266d7e4
	if (cr6.eq) goto loc_8266D7E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r31,60
	ctx.r7.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,120(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 120);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D7E4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d81c
	if (!cr6.eq) goto loc_8266D81C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D81C:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266d860
	if (!cr6.eq) goto loc_8266D860;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266D860:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266d8bc
	if (!cr0.eq) goto loc_8266D8BC;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266d8bc
	if (!cr6.eq) goto loc_8266D8BC;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d89c
	if (cr6.eq) goto loc_8266D89C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266D89C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266d8bc
	if (!cr6.eq) goto loc_8266D8BC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266d8bc
	if (cr6.eq) goto loc_8266D8BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266D8BC:
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266d8ec
	if (!cr6.lt) goto loc_8266D8EC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266D8EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8266D8F0"))) PPC_WEAK_FUNC(sub_8266D8F0);
PPC_FUNC_IMPL(__imp__sub_8266D8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8266D8F4"))) PPC_WEAK_FUNC(sub_8266D8F4);
PPC_FUNC_IMPL(__imp__sub_8266D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266D8F8"))) PPC_WEAK_FUNC(sub_8266D8F8);
PPC_FUNC_IMPL(__imp__sub_8266D8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	r15.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r25,-32768
	r25.s64 = -2147483648;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r15.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r19,1
	r19.s64 = 1;
	// ori r10,r11,1000
	ctx.r10.u64 = r11.u64 | 1000;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r15
	r28.u64 = r15.u64;
	// addi r9,r11,4096
	ctx.r9.s64 = r11.s64 + 4096;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// ble cr6,0x8266d9e0
	if (!cr6.gt) goto loc_8266D9E0;
	// mr r29,r15
	r29.u64 = r15.u64;
	// li r26,8
	r26.s64 = 8;
loc_8266D978:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r30,r10,r29
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lhz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8266d9a8
	if (!cr6.eq) goto loc_8266D9A8;
	// stbx r19,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r19.u8);
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
loc_8266D9A8:
	// lhz r11,168(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r26,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r26.u8);
	// bl 0x8266c408
	sub_8266C408(ctx, base);
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x8266d978
	if (cr6.lt) goto loc_8266D978;
loc_8266D9E0:
	// lfs f0,80(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 80);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// ld r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 80);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U64(r27.u32 + 88);
	// stfs f31,84(r27)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r27.u32 + 84, temp.u32);
	// addi r30,r27,80
	r30.s64 = r27.s64 + 80;
	// stfs f0,88(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 88, temp.u32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8266da24
	if (!cr6.gt) goto loc_8266DA24;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8266DA24:
	// stfs f13,92(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 92, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r19.u8);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,204(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - r11.s64;
	// subfic r3,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// std r8,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// std r7,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r7.u64);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r15.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8266dadc
	if (!cr6.eq) goto loc_8266DADC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266DADC:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r15.u32);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// ble cr6,0x8266dec4
	if (!cr6.gt) goto loc_8266DEC4;
	// mr r18,r15
	r18.u64 = r15.u64;
	// li r14,16
	r14.s64 = 16;
	// li r16,2
	r16.s64 = 2;
loc_8266DB00:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r26,r15
	r26.u64 = r15.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r21,r18,r11
	r21.u64 = PPC_LOAD_U32(r18.u32 + r11.u32);
	// addi r28,r21,172
	r28.s64 = r21.s64 + 172;
	// lhz r9,168(r21)
	ctx.r9.u64 = PPC_LOAD_U16(r21.u32 + 168);
	// stbx r14,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r14.u8);
	// lhz r8,176(r21)
	ctx.r8.u64 = PPC_LOAD_U16(r21.u32 + 176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8266dca8
	if (cr6.eq) goto loc_8266DCA8;
	// mr r27,r15
	r27.u64 = r15.u64;
loc_8266DB2C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r29,r27,r11
	r29.u64 = r27.u64 + r11.u64;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// cmpw cr6,r17,r10
	cr6.compare<int32_t>(r17.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8266dc94
	if (cr6.gt) goto loc_8266DC94;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// xor r9,r11,r10
	ctx.r9.u64 = r11.u64 ^ ctx.r10.u64;
	// xor r30,r9,r21
	r30.u64 = ctx.r9.u64 ^ r21.u64;
	// lbz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bne cr6,0x8266dbac
	if (!cr6.eq) goto loc_8266DBAC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266db88
	if (!cr6.eq) goto loc_8266DB88;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DB88:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x8266dc94
	goto loc_8266DC94;
loc_8266DBAC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lhz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// beq cr6,0x8266dc94
	if (cr6.eq) goto loc_8266DC94;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266dbe8
	if (!cr6.eq) goto loc_8266DBE8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DBE8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lhz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x8266dc94
	if (!cr6.lt) goto loc_8266DC94;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266dc44
	if (!cr6.eq) goto loc_8266DC44;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DC44:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lhz r11,168(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8266dc88
	if (!cr6.eq) goto loc_8266DC88;
	// stbx r19,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r19.u8);
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
loc_8266DC88:
	// lhz r11,168(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stbx r16,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r16.u8);
loc_8266DC94:
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,48
	r27.s64 = r27.s64 + 48;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8266db2c
	if (cr6.lt) goto loc_8266DB2C;
loc_8266DCA8:
	// lwz r11,184(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 184);
	// addi r28,r21,180
	r28.s64 = r21.s64 + 180;
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r26,r15
	r26.u64 = r15.u64;
	// lwz r22,4(r24)
	r22.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266de48
	if (!cr6.gt) goto loc_8266DE48;
	// mr r27,r15
	r27.u64 = r15.u64;
loc_8266DCC8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// lwz r29,48(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 28);
	// cmpw cr6,r17,r8
	cr6.compare<int32_t>(r17.s32, ctx.r8.s32, xer);
	// bgt cr6,0x8266de34
	if (cr6.gt) goto loc_8266DE34;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// xor r9,r11,r10
	ctx.r9.u64 = r11.u64 ^ ctx.r10.u64;
	// xor r30,r9,r21
	r30.u64 = ctx.r9.u64 ^ r21.u64;
	// lbz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bne cr6,0x8266dd4c
	if (!cr6.eq) goto loc_8266DD4C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266dd28
	if (!cr6.eq) goto loc_8266DD28;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DD28:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x8266de34
	goto loc_8266DE34;
loc_8266DD4C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lhz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// beq cr6,0x8266de34
	if (cr6.eq) goto loc_8266DE34;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266dd88
	if (!cr6.eq) goto loc_8266DD88;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DD88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lhz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lbzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x8266de34
	if (!cr6.lt) goto loc_8266DE34;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8266dde4
	if (!cr6.eq) goto loc_8266DDE4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8266DDE4:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// lhz r11,168(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8266de28
	if (!cr6.eq) goto loc_8266DE28;
	// stbx r19,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r19.u8);
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
loc_8266DE28:
	// lhz r11,168(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 168);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stbx r16,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r16.u8);
loc_8266DE34:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8266dcc8
	if (cr6.lt) goto loc_8266DCC8;
loc_8266DE48:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8266de78
	if (!cr6.gt) goto loc_8266DE78;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r8,-22032
	ctx.r6.s64 = ctx.r8.s64 + -22032;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82c0a658
	sub_82C0A658(ctx, base);
loc_8266DE78:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8266dea8
	if (!cr6.gt) goto loc_8266DEA8;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r8,-22064
	ctx.r6.s64 = ctx.r8.s64 + -22064;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82c0a658
	sub_82C0A658(ctx, base);
loc_8266DEA8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266db00
	if (cr6.lt) goto loc_8266DB00;
loc_8266DEC4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8266DECC"))) PPC_WEAK_FUNC(sub_8266DECC);
PPC_FUNC_IMPL(__imp__sub_8266DECC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8266DED0"))) PPC_WEAK_FUNC(sub_8266DED0);
PPC_FUNC_IMPL(__imp__sub_8266DED0) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r26,-31931
	r26.s64 = -2092630016;
	// lfs f29,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f29.f64 = double(temp.f32);
	// lfs f30,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
loc_8266DF04:
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r27)
	PPC_STORE_U32(r27.u32 + 148, r11.u32);
loc_8266DF14:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// lwz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// li r28,-1
	r28.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ble cr6,0x8266e1cc
	if (!cr6.gt) goto loc_8266E1CC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r8,-112
	ctx.r8.s64 = -112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8266DF50:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8266dfa4
	if (cr6.lt) goto loc_8266DFA4;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8266dfb0
	if (!cr6.eq) goto loc_8266DFB0;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8266dfb0
	if (cr6.eq) goto loc_8266DFB0;
	// add r11,r8,r4
	r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// lwz r7,212(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// lwz r11,212(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8266dfa4
	if (cr6.lt) goto loc_8266DFA4;
	// bne cr6,0x8266dfb0
	if (!cr6.eq) goto loc_8266DFB0;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x8266dfb0
	if (!cr6.lt) goto loc_8266DFB0;
loc_8266DFA4:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8266DFB0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,112
	ctx.r5.s64 = ctx.r5.s64 + 112;
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// bdnz 0x8266df50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266DF50;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x8266e1cc
	if (cr6.lt) goto loc_8266E1CC;
	// mulli r30,r28,112
	r30.s64 = r28.s64 * 112;
	// add r31,r30,r4
	r31.u64 = r30.u64 + ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r11,39(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 39);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,39(r31)
	PPC_STORE_U8(r31.u32 + 39, ctx.r10.u8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,39(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 39);
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8266e054
	if (!cr6.eq) goto loc_8266E054;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8266df14
	if (cr6.eq) goto loc_8266DF14;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266E040:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266e040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266E040;
	// b 0x8266df14
	goto loc_8266DF14;
loc_8266E054:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r11,14
	r11.s64 = 14;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8266E06C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8266e06c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266E06C;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x8266e0b8
	if (cr6.eq) goto loc_8266E0B8;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266E0A8:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266e0a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266E0A8;
loc_8266E0B8:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,20(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x8266e0e4
	if (!cr6.eq) goto loc_8266E0E4;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x8266e0e8
	goto loc_8266E0E8;
loc_8266E0E4:
	// fdivs f0,f29,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 / ctx.f13.f64));
loc_8266E0E8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,464
	ctx.r8.s64 = r11.s64 + 464;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r6.u64);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// std r3,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r3.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r5,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r5.u64);
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8266e15c
	if (!cr6.eq) goto loc_8266E15C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8266e160
	goto loc_8266E160;
loc_8266E15C:
	// bl 0x8266d5d8
	sub_8266D5D8(ctx, base);
loc_8266E160:
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r11.u32);
	// lwz r11,-24484(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r27)
	PPC_STORE_U32(r27.u32 + 148, r11.u32);
	// beq cr6,0x8266e234
	if (cr6.eq) goto loc_8266E234;
	// bne 0x8266df04
	if (!cr0.eq) goto loc_8266DF04;
	// lbz r11,156(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266df04
	if (!cr6.eq) goto loc_8266DF04;
	// lwz r11,140(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e1a8
	if (cr6.eq) goto loc_8266E1A8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E1A8:
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266df04
	if (!cr6.eq) goto loc_8266DF04;
	// lwz r11,144(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266df04
	if (cr6.eq) goto loc_8266DF04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
	// b 0x8266df04
	goto loc_8266DF04;
loc_8266E1CC:
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r27)
	PPC_STORE_U32(r27.u32 + 148, r11.u32);
	// bne 0x8266e21c
	if (!cr0.eq) goto loc_8266E21C;
	// lbz r11,156(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266e21c
	if (!cr6.eq) goto loc_8266E21C;
	// lwz r11,140(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e1fc
	if (cr6.eq) goto loc_8266E1FC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E1FC:
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266e21c
	if (!cr6.eq) goto loc_8266E21C;
	// lwz r11,144(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e21c
	if (cr6.eq) goto loc_8266E21C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266E21C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_8266E234:
	// bne 0x8266e278
	if (!cr0.eq) goto loc_8266E278;
	// lbz r11,156(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266e278
	if (!cr6.eq) goto loc_8266E278;
	// lwz r11,140(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e258
	if (cr6.eq) goto loc_8266E258;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E258:
	// lwz r11,164(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266e278
	if (!cr6.eq) goto loc_8266E278;
	// lwz r11,144(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e278
	if (cr6.eq) goto loc_8266E278;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266E278:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_8266E28C"))) PPC_WEAK_FUNC(sub_8266E28C);
PPC_FUNC_IMPL(__imp__sub_8266E28C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8266E290"))) PPC_WEAK_FUNC(sub_8266E290);
PPC_FUNC_IMPL(__imp__sub_8266E290) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e2dc
	if (!cr6.lt) goto loc_8266E2DC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17648
	ctx.r8.s64 = ctx.r9.s64 + 17648;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266E2DC:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r28,r11,8956
	r28.s64 = r11.s64 + 8956;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8266e3b8
	if (cr6.eq) goto loc_8266E3B8;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e320
	if (!cr6.lt) goto loc_8266E320;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20368
	ctx.r8.s64 = ctx.r9.s64 + 20368;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266E320:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8265c330
	sub_8265C330(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8266e394
	if (cr6.eq) goto loc_8266E394;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r11,8956
	ctx.r9.s64 = r11.s64 + 8956;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8266e360
	if (!cr6.lt) goto loc_8266E360;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8266E360:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8266e4d4
	if (!cr6.lt) goto loc_8266E4D4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_8266E394:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e3b8
	if (!cr6.lt) goto loc_8266E3B8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E3B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8265c1a0
	sub_8265C1A0(ctx, base);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e49c
	if (cr6.eq) goto loc_8266E49C;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e400
	if (!cr6.lt) goto loc_8266E400;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20360
	ctx.r8.s64 = ctx.r9.s64 + 20360;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266E400:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8266ded0
	sub_8266DED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8266e474
	if (cr6.eq) goto loc_8266E474;
	// stw r3,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r3.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e440
	if (!cr6.lt) goto loc_8266E440;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E440:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e4d4
	if (!cr6.lt) goto loc_8266E4D4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x828e9468
	return;
loc_8266E474:
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e49c
	if (!cr6.lt) goto loc_8266E49C;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E49C:
	// stfs f31,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e4d0
	if (!cr6.lt) goto loc_8266E4D0;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E4D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266E4D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8266E4DC"))) PPC_WEAK_FUNC(sub_8266E4DC);
PPC_FUNC_IMPL(__imp__sub_8266E4DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266E4E0"))) PPC_WEAK_FUNC(sub_8266E4E0);
PPC_FUNC_IMPL(__imp__sub_8266E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r21,12
	r21.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e52c
	if (!cr6.lt) goto loc_8266E52C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17872
	ctx.r8.s64 = ctx.r9.s64 + 17872;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266E52C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266e594
	if (cr6.eq) goto loc_8266E594;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8266e590
	if (cr0.lt) goto loc_8266E590;
	// mulli r30,r29,112
	r30.s64 = r29.s64 * 112;
loc_8266E54C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8266e568
	if (!cr6.eq) goto loc_8266E568;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8266E568:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// lwz r4,204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,-112
	r30.s64 = r30.s64 + -112;
	// bge 0x8266e54c
	if (!cr0.lt) goto loc_8266E54C;
loc_8266E590:
	// stw r27,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r27.u32);
loc_8266E594:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r25,-31931
	r25.s64 = -2092630016;
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r9,r11,464
	ctx.r9.s64 = r11.s64 + 464;
	// std r10,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r10.u64);
	// ld r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// std r8,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r8.u64);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,120(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// addi r6,r11,80
	ctx.r6.s64 = r11.s64 + 80;
	// ld r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// std r5,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r5.u64);
	// ld r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// std r4,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r4.u64);
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f13,768(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 756);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,748(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 748, temp.u32);
	// lfs f11,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,752(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 752, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r11,40
	r30.s64 = r11.s64 + 40;
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8266e670
	if (!cr6.gt) goto loc_8266E670;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8266E630:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r5,76(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x8266c578
	sub_8266C578(ctx, base);
	// lwz r11,-24484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266e82c
	if (cr6.eq) goto loc_8266E82C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8266e630
	if (cr6.lt) goto loc_8266E630;
loc_8266E670:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8266e6c4
	if (!cr0.eq) goto loc_8266E6C4;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266e6c4
	if (!cr6.eq) goto loc_8266E6C4;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e6a4
	if (cr6.eq) goto loc_8266E6A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E6A4:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266e6c4
	if (!cr6.eq) goto loc_8266E6C4;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e6c4
	if (cr6.eq) goto loc_8266E6C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266E6C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r23,r11,8956
	r23.s64 = r11.s64 + 8956;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r11,40
	r29.s64 = r11.s64 + 40;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8266e7a8
	if (!cr6.gt) goto loc_8266E7A8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r24,r11,17848
	r24.s64 = r11.s64 + 17848;
loc_8266E6FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8266cae0
	sub_8266CAE0(ctx, base);
	// lwz r11,-24484(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266e7a8
	if (cr6.eq) goto loc_8266E7A8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8266e794
	if (cr6.eq) goto loc_8266E794;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e75c
	if (!cr6.lt) goto loc_8266E75C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E75C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265a310
	sub_8265A310(ctx, base);
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e794
	if (!cr6.lt) goto loc_8266E794;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E794:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8266e6fc
	if (cr6.lt) goto loc_8266E6FC;
loc_8266E7A8:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266e7fc
	if (!cr0.eq) goto loc_8266E7FC;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266e7fc
	if (!cr6.eq) goto loc_8266E7FC;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e7dc
	if (cr6.eq) goto loc_8266E7DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E7DC:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266e7fc
	if (!cr6.eq) goto loc_8266E7FC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e7fc
	if (cr6.eq) goto loc_8266E7FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266E7FC:
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e824
	if (!cr6.lt) goto loc_8266E824;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8266E824:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e944c
	return;
loc_8266E82C:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266e880
	if (!cr0.eq) goto loc_8266E880;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266e880
	if (!cr6.eq) goto loc_8266E880;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e860
	if (cr6.eq) goto loc_8266E860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266E860:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266e880
	if (!cr6.eq) goto loc_8266E880;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266e880
	if (cr6.eq) goto loc_8266E880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266E880:
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266e824
	if (!cr6.lt) goto loc_8266E824;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8266E8B4"))) PPC_WEAK_FUNC(sub_8266E8B4);
PPC_FUNC_IMPL(__imp__sub_8266E8B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8266E8B8"))) PPC_WEAK_FUNC(sub_8266E8B8);
PPC_FUNC_IMPL(__imp__sub_8266E8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32153
	r11.s64 = -2107179008;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-13088
	ctx.r7.s64 = r11.s64 + -13088;
	// b 0x8265d0f0
	sub_8265D0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266E8C8"))) PPC_WEAK_FUNC(sub_8266E8C8);
PPC_FUNC_IMPL(__imp__sub_8266E8C8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-2288(r1)
	ea = -2288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r26,0
	r26.s64 = 0;
	// ori r30,r10,64
	r30.u64 = ctx.r10.u64 | 64;
	// addi r9,r1,1356
	ctx.r9.s64 = ctx.r1.s64 + 1356;
	// stw r26,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, r26.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r30,1352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1352, r30.u32);
	// stw r9,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r9.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lbz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bne cr6,0x8266e92c
	if (!cr6.eq) goto loc_8266E92C;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
loc_8266E92C:
	// lwz r17,204(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lis r16,-32768
	r16.s64 = -2147483648;
	// lwz r31,76(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 76);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r31,r16
	ctx.r8.u64 = r31.u64 | r16.u64;
	// addi r7,r11,127
	ctx.r7.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,2
	r31.s64 = 2;
	// rlwinm r10,r7,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lbz r5,232(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// beq cr6,0x8266e9c8
	if (cr6.eq) goto loc_8266E9C8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r5,r11,240
	ctx.r5.s64 = r11.s64 + 240;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
	// lwz r6,12(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r4,168(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 168);
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, r31.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8266E9C8:
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lbz r11,232(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266ea14
	if (cr6.eq) goto loc_8266EA14;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// addi r5,r11,240
	ctx.r5.s64 = r11.s64 + 240;
	// addi r3,r5,64
	ctx.r3.s64 = ctx.r5.s64 + 64;
	// bl 0x82bf6638
	sub_82BF6638(ctx, base);
	// lwz r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r6,168(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 168);
	// stbx r31,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, r31.u8);
loc_8266EA14:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266ec08
	if (!cr6.eq) goto loc_8266EC08;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// li r30,16
	r30.s64 = 16;
	// li r27,32
	r27.s64 = 32;
	// li r28,48
	r28.s64 = 48;
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8266eab8
	if (cr6.eq) goto loc_8266EAB8;
	// addi r31,r11,240
	r31.s64 = r11.s64 + 240;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// lvx128 v8,r0,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r31,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r29,r30
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r29.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v12,v13,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v10,v13,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vmulfp128 v13,v8,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v6,v7,v0
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v6,r31,r28
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8266EAB8:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8266eb14
	if (cr6.eq) goto loc_8266EB14;
	// addi r31,r11,240
	r31.s64 = r11.s64 + 240;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// lvx128 v8,r0,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r31,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r29,r30
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r29.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v12,v13,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v10,v13,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vmulfp128 v13,v8,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v6,v7,v0
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v6,r31,r28
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8266EB14:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266eb4c
	if (!cr6.eq) goto loc_8266EB4C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266EB4C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266ebb8
	if (!cr6.eq) goto loc_8266EBB8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266EBB8:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,1352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1352);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266ebf8
	if (!cr6.eq) goto loc_8266EBF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,1344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266EBF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_8266EC08:
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// ble cr6,0x8266ec24
	if (!cr6.gt) goto loc_8266EC24;
	// lwz r19,4(r10)
	r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8266ec28
	goto loc_8266EC28;
loc_8266EC24:
	// mr r19,r26
	r19.u64 = r26.u64;
loc_8266EC28:
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// bl 0x82c48898
	sub_82C48898(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82674a58
	sub_82674A58(ctx, base);
	// li r22,1
	r22.s64 = 1;
	// addi r10,r1,412
	ctx.r10.s64 = ctx.r1.s64 + 412;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r30.u32);
	// addi r9,r1,684
	ctx.r9.s64 = ctx.r1.s64 + 684;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r26.u32);
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r26.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// stw r9,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r9.u32);
	// lwz r21,16(r24)
	r21.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x8266efe4
	if (!cr6.gt) goto loc_8266EFE4;
	// li r23,8
	r23.s64 = 8;
loc_8266EC7C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsb r10,r30
	ctx.r10.s64 = r30.s8;
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r26.u32);
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne cr6,0x8266ecd8
	if (!cr6.eq) goto loc_8266ECD8;
	// lwz r10,1348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8266efd0
	if (!cr6.lt) goto loc_8266EFD0;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r4,120(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,1344
	ctx.r5.s64 = ctx.r1.s64 + 1344;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266bac0
	sub_8266BAC0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266efd0
	if (cr6.eq) goto loc_8266EFD0;
loc_8266ECD8:
	// addi r9,r1,672
	ctx.r9.s64 = ctx.r1.s64 + 672;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,120(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// bl 0x8266d8f8
	sub_8266D8F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// mr r30,r26
	r30.u64 = r26.u64;
	// bl 0x82674718
	sub_82674718(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266ef3c
	if (cr6.eq) goto loc_8266EF3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,676(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// lwz r5,672(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82674be8
	sub_82674BE8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266ef3c
	if (cr6.eq) goto loc_8266EF3C;
	// lwz r11,1348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// lwz r10,676(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8266ef3c
	if (cr6.lt) goto loc_8266EF3C;
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8266ef3c
	if (cr6.lt) goto loc_8266EF3C;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8266ef3c
	if (cr6.lt) goto loc_8266EF3C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82674a58
	sub_82674A58(ctx, base);
	// addi r6,r1,1344
	ctx.r6.s64 = ctx.r1.s64 + 1344;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,676(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r4,672(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82674d58
	sub_82674D58(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// ble cr6,0x8266ee20
	if (!cr6.gt) goto loc_8266EE20;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8266EDC8:
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r4,168(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 168);
	// lbzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bne cr6,0x8266ee10
	if (!cr6.eq) goto loc_8266EE10;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// beq cr6,0x8266ee08
	if (cr6.eq) goto loc_8266EE08;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8266EE08:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8266EE10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8266edc8
	if (cr6.lt) goto loc_8266EDC8;
loc_8266EE20:
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r15,132(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r14,128(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82c5a738
	sub_82C5A738(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8266ee94
	if (!cr6.lt) goto loc_8266EE94;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8266ee84
	if (cr6.lt) goto loc_8266EE84;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8266EE84:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8266EE94:
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266eef4
	if (!cr6.gt) goto loc_8266EEF4;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r26
	r11.u64 = r26.u64;
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
loc_8266EEB0:
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lbz r6,232(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// beq cr6,0x8266eee0
	if (cr6.eq) goto loc_8266EEE0;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_8266EEE0:
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266eeb0
	if (cr6.lt) goto loc_8266EEB0;
loc_8266EEF4:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r5,676(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x8266abe0
	sub_8266ABE0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x8266b5d0
	sub_8266B5D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82674758
	sub_82674758(ctx, base);
	// lwz r11,676(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266ec7c
	if (!cr6.eq) goto loc_8266EC7C;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266ec7c
	if (!cr6.eq) goto loc_8266EC7C;
	// b 0x8266efd0
	goto loc_8266EFD0;
loc_8266EF3C:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266ef78
	if (!cr6.gt) goto loc_8266EF78;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8266EF50:
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhz r6,168(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 168);
	// stbx r23,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r23.u8);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x8266ef50
	if (cr6.lt) goto loc_8266EF50;
loc_8266EF78:
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266efb4
	if (!cr6.gt) goto loc_8266EFB4;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8266EF8C:
	// lwz r9,400(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhz r6,168(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 168);
	// stbx r22,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, r22.u8);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x8266ef8c
	if (cr6.lt) goto loc_8266EF8C;
loc_8266EFB4:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8266f168
	if (cr6.eq) goto loc_8266F168;
loc_8266EFD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82674758
	sub_82674758(ctx, base);
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// bgt 0x8266ec7c
	if (cr0.gt) goto loc_8266EC7C;
loc_8266EFE4:
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8266f1fc
	if (cr6.eq) goto loc_8266F1FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266ace0
	sub_8266ACE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,1344
	ctx.r5.s64 = ctx.r1.s64 + 1344;
	// lwz r6,120(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8266bf00
	sub_8266BF00(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266f1fc
	if (!cr6.eq) goto loc_8266F1FC;
	// lwz r31,20(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 20);
loc_8266F02C:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8266f07c
	if (cr0.lt) goto loc_8266F07C;
	// lwz r6,64(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,48(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82c49e78
	sub_82C49E78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266ace0
	sub_8266ACE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,1344
	ctx.r5.s64 = ctx.r1.s64 + 1344;
	// lwz r6,120(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8266bf00
	sub_8266BF00(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266f02c
	if (cr6.eq) goto loc_8266F02C;
loc_8266F07C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266f1fc
	if (!cr6.eq) goto loc_8266F1FC;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r26,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, r26.u32);
	// addi r10,r1,956
	ctx.r10.s64 = ctx.r1.s64 + 956;
	// lwz r6,120(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// stw r10,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r10.u32);
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// stw r9,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r9.u32);
	// addi r5,r1,1344
	ctx.r5.s64 = ctx.r1.s64 + 1344;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8266bf00
	sub_8266BF00(ctx, base);
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r4,r1,944
	ctx.r4.s64 = ctx.r1.s64 + 944;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8266f1bc
	if (!cr6.eq) goto loc_8266F1BC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8266bde8
	sub_8266BDE8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266f120
	if (!cr6.gt) goto loc_8266F120;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8266F0FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,120(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826658e8
	sub_826658E8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266f0fc
	if (cr6.lt) goto loc_8266F0FC;
loc_8266F120:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,952(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f15c
	if (!cr6.eq) goto loc_8266F15C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,944(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F15C:
	// stw r26,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, r26.u32);
	// stw r16,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, r16.u32);
	// b 0x8266f320
	goto loc_8266F320;
loc_8266F168:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8266bde8
	sub_8266BDE8(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266f1b4
	if (!cr6.gt) goto loc_8266F1B4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8266F190:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,120(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826658e8
	sub_826658E8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266f190
	if (cr6.lt) goto loc_8266F190;
loc_8266F1B4:
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// b 0x8266f320
	goto loc_8266F320;
loc_8266F1BC:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,952(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f1f4
	if (!cr6.eq) goto loc_8266F1F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,944(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F1F4:
	// stw r26,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, r26.u32);
	// stw r16,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, r16.u32);
loc_8266F1FC:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266f284
	if (!cr6.eq) goto loc_8266F284;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82c5a738
	sub_82C5A738(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,16
	r30.s64 = 16;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 168);
	// stbx r30,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, r30.u8);
	// beq cr6,0x8266f284
	if (cr6.eq) goto loc_8266F284;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82c5a738
	sub_82C5A738(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 168);
	// stbx r30,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, r30.u8);
loc_8266F284:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266f2c0
	if (!cr6.gt) goto loc_8266F2C0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8266F298:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// bl 0x82bf6be8
	sub_82BF6BE8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266f298
	if (cr6.lt) goto loc_8266F298;
loc_8266F2C0:
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r5,12(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82674930
	sub_82674930(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8266b698
	sub_8266B698(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8266f320
	if (!cr6.gt) goto loc_8266F320;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8266F2FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,120(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 120);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826658e8
	sub_826658E8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8266f2fc
	if (cr6.lt) goto loc_8266F2FC;
loc_8266F320:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,680(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f358
	if (!cr6.eq) goto loc_8266F358;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,672(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F358:
	// stw r26,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, r26.u32);
	// stw r16,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, r16.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,408(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f398
	if (!cr6.eq) goto loc_8266F398;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F398:
	// stw r26,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r26.u32);
	// stw r16,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r16.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f3d8
	if (!cr6.eq) goto loc_8266F3D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F3D8:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f444
	if (!cr6.eq) goto loc_8266F444;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F444:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,1352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1352);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,1348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1348, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266f484
	if (!cr6.eq) goto loc_8266F484;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,1344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F484:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2288
	ctx.r1.s64 = ctx.r1.s64 + 2288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8266F490"))) PPC_WEAK_FUNC(sub_8266F490);
PPC_FUNC_IMPL(__imp__sub_8266F490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8266F494"))) PPC_WEAK_FUNC(sub_8266F494);
PPC_FUNC_IMPL(__imp__sub_8266F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266F498"))) PPC_WEAK_FUNC(sub_8266F498);
PPC_FUNC_IMPL(__imp__sub_8266F498) {
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
	// bl 0x8266e290
	sub_8266E290(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8266f58c
	if (cr6.lt) goto loc_8266F58C;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// clrlwi r10,r11,1
	ctx.r10.u64 = r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8266f4f0
	if (cr6.eq) goto loc_8266F4F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r31,60
	ctx.r5.s64 = r31.s64 + 60;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r4,120(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F4F0:
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lwz r11,-24484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266f50c
	if (!cr6.eq) goto loc_8266F50C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8266F50C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 364);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8266f58c
	if (cr6.eq) goto loc_8266F58C;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266f554
	if (!cr6.lt) goto loc_8266F554;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17608
	ctx.r8.s64 = ctx.r9.s64 + 17608;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266F554:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82659f80
	sub_82659F80(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266f58c
	if (!cr6.lt) goto loc_8266F58C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266F58C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8266F594"))) PPC_WEAK_FUNC(sub_8266F594);
PPC_FUNC_IMPL(__imp__sub_8266F594) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266F598"))) PPC_WEAK_FUNC(sub_8266F598);
PPC_FUNC_IMPL(__imp__sub_8266F598) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r11,120(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r8,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, ctx.r8.u32);
	// lfs f11,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8266f610
	if (!cr6.eq) goto loc_8266F610;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8266f61c
	goto loc_8266F61C;
loc_8266F610:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8266F61C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r24,r25,31
	r24.u64 = r25.u32 & 0x1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
	// beq cr6,0x8266f69c
	if (cr6.eq) goto loc_8266F69C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8266f678
	if (!cr6.gt) goto loc_8266F678;
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_8266F650:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8266f66c
	if (cr6.eq) goto loc_8266F66C;
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bf6be8
	sub_82BF6BE8(ctx, base);
loc_8266F66C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8266f650
	if (!cr0.eq) goto loc_8266F650;
loc_8266F678:
	// li r6,224
	ctx.r6.s64 = 224;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82670290
	sub_82670290(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8266F69C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r9,r25,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8266f6e4
	if (cr6.eq) goto loc_8266F6E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266c578
	sub_8266C578(ctx, base);
loc_8266F6E4:
	// rlwinm r11,r25,0,29,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266f714
	if (cr6.eq) goto loc_8266F714;
	// lis r11,-32153
	r11.s64 = -2107179008;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-13088
	ctx.r7.s64 = r11.s64 + -13088;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265d0f0
	sub_8265D0F0(ctx, base);
	// b 0x8266f740
	goto loc_8266F740;
loc_8266F714:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8266f740
	if (cr6.eq) goto loc_8266F740;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266F740:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266f790
	if (!cr0.eq) goto loc_8266F790;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266f790
	if (!cr6.eq) goto loc_8266F790;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266f770
	if (cr6.eq) goto loc_8266F770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266F770:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266f790
	if (!cr6.eq) goto loc_8266F790;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266f790
	if (cr6.eq) goto loc_8266F790;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266F790:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r9,r11,80
	ctx.r9.s64 = r11.s64 + 80;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r8.u64);
	// std r7,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r7.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8266F7B0"))) PPC_WEAK_FUNC(sub_8266F7B0);
PPC_FUNC_IMPL(__imp__sub_8266F7B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8266F7B4"))) PPC_WEAK_FUNC(sub_8266F7B4);
PPC_FUNC_IMPL(__imp__sub_8266F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266F7B8"))) PPC_WEAK_FUNC(sub_8266F7B8);
PPC_FUNC_IMPL(__imp__sub_8266F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1000
	r11.s64 = 1000;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r10,4
	ctx.r10.s64 = 4;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// li r21,0
	r21.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8266fdcc
	if (cr6.eq) goto loc_8266FDCC;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r8,r1,556
	ctx.r8.s64 = ctx.r1.s64 + 556;
	// ori r7,r9,64
	ctx.r7.u64 = ctx.r9.u64 | 64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r6.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// stw r21,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, r21.u32);
	// stw r7,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r7.u32);
	// bl 0x8263dee8
	sub_8263DEE8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f1,f13
	f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// addi r4,r24,480
	ctx.r4.s64 = r24.s64 + 480;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 / f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8266fde0
	sub_8266FDE0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// fdivs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 / f30.f64));
	// stfs f0,512(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, r11.u32);
	// stfs f31,528(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stw r11,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, r11.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// stfs f30,508(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r31,-32250
	r31.s64 = -2113536000;
	// lfs f11,19956(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19956);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// lfs f13,19952(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 19952);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f8,8892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8892);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f12,880(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 880);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r1,272
	r27.s64 = ctx.r1.s64 + 272;
	// lfs f7,19948(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 19948);
	ctx.f7.f64 = double(temp.f32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f11,304(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r8,r1,816
	ctx.r8.s64 = ctx.r1.s64 + 816;
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f11,320(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f7,328(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lfs f9,19944(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19944);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stfs f9,332(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f12,524(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v12,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// addi r31,r1,288
	r31.s64 = ctx.r1.s64 + 288;
	// addi r28,r1,304
	r28.s64 = ctx.r1.s64 + 304;
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826745f0
	sub_826745F0(ctx, base);
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r22,12
	r22.s64 = 12;
	// lwzx r11,r22,r23
	r11.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8266fa14
	if (!cr6.lt) goto loc_8266FA14;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,20440
	ctx.r7.s64 = ctx.r9.s64 + 20440;
	// addi r6,r8,20428
	ctx.r6.s64 = ctx.r8.s64 + 20428;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_8266FA14:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8266fa28
	if (!cr6.eq) goto loc_8266FA28;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
loc_8266FA28:
	// lwz r26,204(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r31,76(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 76);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// addi r11,r31,127
	r11.s64 = r31.s64 + 127;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// lwz r6,72(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8266e8c8
	sub_8266E8C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x82674710
	sub_82674710(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8266faa0
	if (!cr6.eq) goto loc_8266FAA0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
loc_8266FAA0:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8266fbac
	if (!cr6.eq) goto loc_8266FBAC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x8266fb98
	if (cr0.lt) goto loc_8266FB98;
	// mulli r31,r27,112
	r31.s64 = r27.s64 * 112;
loc_8266FAD4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x8266fafc
	if (!cr6.eq) goto loc_8266FAFC;
	// lhz r10,168(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 168);
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// beq cr6,0x8266fb1c
	if (cr6.eq) goto loc_8266FB1C;
loc_8266FAFC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x8266fb8c
	if (!cr6.eq) goto loc_8266FB8C;
	// lhz r10,168(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 168);
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bne cr6,0x8266fb8c
	if (!cr6.eq) goto loc_8266FB8C;
loc_8266FB1C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8266fb30
	if (!cr6.eq) goto loc_8266FB30;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8266FB30:
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// lwz r4,204(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// beq cr6,0x8266fb8c
	if (cr6.eq) goto loc_8266FB8C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r8,r11,112
	ctx.r8.s64 = r11.s64 * 112;
	// li r9,14
	ctx.r9.s64 = 14;
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FB7C:
	// ldx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8266fb7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FB7C;
loc_8266FB8C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r31,-112
	r31.s64 = r31.s64 + -112;
	// bge 0x8266fad4
	if (!cr0.lt) goto loc_8266FAD4;
loc_8266FB98:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x826286e8
	sub_826286E8(ctx, base);
	// b 0x8266fbb0
	goto loc_8266FBB0;
loc_8266FBAC:
	// stw r21,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, r21.u32);
loc_8266FBB0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r3,72(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r22,r23
	r11.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266fc08
	if (!cr6.lt) goto loc_8266FC08;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20408
	ctx.r8.s64 = ctx.r9.s64 + 20408;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_8266FC08:
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266fc38
	if (!cr6.lt) goto loc_8266FC38;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,20396
	ctx.r8.s64 = ctx.r9.s64 + 20396;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266FC38:
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8266fd10
	if (cr6.eq) goto loc_8266FD10;
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// addic. r31,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r31.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8266fc9c
	if (cr0.lt) goto loc_8266FC9C;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8266FC54:
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// add r11,r30,r9
	r11.u64 = r30.u64 + ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266fc90
	if (!cr6.eq) goto loc_8266FC90;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stw r10,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r10.u32);
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// beq cr6,0x8266fc84
	if (cr6.eq) goto loc_8266FC84;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8266FC84:
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
loc_8266FC90:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x8266fc54
	if (!cr0.lt) goto loc_8266FC54;
loc_8266FC9C:
	// lwz r31,120(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8266fd04
	if (cr6.eq) goto loc_8266FD04;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8266c578
	sub_8266C578(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lwz r11,-24484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8266fcfc
	if (cr6.eq) goto loc_8266FCFC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r7,r25,60
	ctx.r7.s64 = r25.s64 + 60;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266FCFC:
	// lwz r9,544(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r4,548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
loc_8266FD04:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x826287d8
	sub_826287D8(ctx, base);
loc_8266FD10:
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8266fd64
	if (!cr0.eq) goto loc_8266FD64;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8266fd64
	if (!cr6.eq) goto loc_8266FD64;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266fd44
	if (cr6.eq) goto loc_8266FD44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8266FD44:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8266fd64
	if (!cr6.eq) goto loc_8266FD64;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266fd64
	if (cr6.eq) goto loc_8266FD64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8266FD64:
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8266fd94
	if (!cr6.lt) goto loc_8266FD94;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_8266FD94:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,552(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266fdcc
	if (!cr6.eq) goto loc_8266FDCC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266FDCC:
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_8266FDDC"))) PPC_WEAK_FUNC(sub_8266FDDC);
PPC_FUNC_IMPL(__imp__sub_8266FDDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8266FDE0"))) PPC_WEAK_FUNC(sub_8266FDE0);
PPC_FUNC_IMPL(__imp__sub_8266FDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,7
	r11.s64 = 7;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r6,r3,96
	ctx.r6.s64 = ctx.r3.s64 + 96;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lvx128 v0,r4,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r4,96
	ctx.r7.s64 = ctx.r4.s64 + 96;
	// lvx128 v13,r4,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f9,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f8,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f7,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f6,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_8266FE68:
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x8266fe68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FE68;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r4,124
	r11.s64 = ctx.r4.s64 + 124;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FE84:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8266fe84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FE84;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r4,152
	r11.s64 = ctx.r4.s64 + 152;
	// addi r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 + 152;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FEA0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8266fea0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FEA0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r4,180
	r11.s64 = ctx.r4.s64 + 180;
	// addi r10,r3,180
	ctx.r10.s64 = ctx.r3.s64 + 180;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FEBC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8266febc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FEBC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r4,208
	r11.s64 = ctx.r4.s64 + 208;
	// addi r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 + 208;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FED8:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8266fed8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FED8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r4,236
	r11.s64 = ctx.r4.s64 + 236;
	// addi r10,r3,236
	ctx.r10.s64 = ctx.r3.s64 + 236;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8266FEF4:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8266fef4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266FEF4;
	// lfs f0,268(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	f0.f64 = double(temp.f32);
	// stfs f0,268(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lfs f13,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,272(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// lwz r11,276(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, r11.u32);
	// lwz r10,280(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// stw r10,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r10.u32);
	// lfs f12,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,284(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// lfs f11,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,288(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// lbz r9,292(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 292);
	// stb r9,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, ctx.r9.u8);
	// lbz r8,293(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 293);
	// stb r8,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r8.u8);
	// lbz r7,294(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 294);
	// stb r7,294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 294, ctx.r7.u8);
	// lbz r6,295(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 295);
	// stb r6,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, ctx.r6.u8);
}

__attribute__((alias("__imp__sub_8266FF50"))) PPC_WEAK_FUNC(sub_8266FF50);
PPC_FUNC_IMPL(__imp__sub_8266FF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266FF54"))) PPC_WEAK_FUNC(sub_8266FF54);
PPC_FUNC_IMPL(__imp__sub_8266FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266FF58"))) PPC_WEAK_FUNC(sub_8266FF58);
PPC_FUNC_IMPL(__imp__sub_8266FF58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8266c180
	sub_8266C180(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266ffa4
	if (cr6.eq) goto loc_8266FFA4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8266FFA4:
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

__attribute__((alias("__imp__sub_8266FFBC"))) PPC_WEAK_FUNC(sub_8266FFBC);
PPC_FUNC_IMPL(__imp__sub_8266FFBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266FFC0"))) PPC_WEAK_FUNC(sub_8266FFC0);
PPC_FUNC_IMPL(__imp__sub_8266FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,11900
	ctx.r7.s64 = r11.s64 + 11900;
	// addi r6,r10,20468
	ctx.r6.s64 = ctx.r10.s64 + 20468;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// addi r5,r9,20452
	ctx.r5.s64 = ctx.r9.s64 + 20452;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8266FFF0"))) PPC_WEAK_FUNC(sub_8266FFF0);
PPC_FUNC_IMPL(__imp__sub_8266FFF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266FFF4"))) PPC_WEAK_FUNC(sub_8266FFF4);
PPC_FUNC_IMPL(__imp__sub_8266FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8266FFF8"))) PPC_WEAK_FUNC(sub_8266FFF8);
PPC_FUNC_IMPL(__imp__sub_8266FFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// lwz r5,120(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + r11.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r11,26(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lbz r6,7088(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7088);
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// b 0x826659f0
	sub_826659F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267006C"))) PPC_WEAK_FUNC(sub_8267006C);
PPC_FUNC_IMPL(__imp__sub_8267006C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670070"))) PPC_WEAK_FUNC(sub_82670070);
PPC_FUNC_IMPL(__imp__sub_82670070) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82c586e8
	sub_82C586E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826700ac
	if (cr6.eq) goto loc_826700AC;
	// bl 0x82665b98
	sub_82665B98(ctx, base);
loc_826700AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826700B8"))) PPC_WEAK_FUNC(sub_826700B8);
PPC_FUNC_IMPL(__imp__sub_826700B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826700BC"))) PPC_WEAK_FUNC(sub_826700BC);
PPC_FUNC_IMPL(__imp__sub_826700BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826700C0"))) PPC_WEAK_FUNC(sub_826700C0);
PPC_FUNC_IMPL(__imp__sub_826700C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,448
	r11.s64 = ctx.r3.s64 + 448;
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r4,448
	ctx.r10.s64 = ctx.r4.s64 + 448;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v11,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// li r9,432
	ctx.r9.s64 = 432;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v9,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v6,v8,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vpermwi128 v5,v8,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// lvx128 v4,r4,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v9,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// lvx128 v2,r3,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r7,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v10,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v31,v11,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v29,v10,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v28,v11,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmulfp128 v26,v6,v30
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v27,v7,v31
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v31.f32)));
	// vmulfp128 v25,v5,v29
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v24,v3,v28
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v28.f32)));
	// vsubfp v23,v25,v26
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v25.f32), _mm_load_ps(v26.f32)));
	// vsubfp v22,v24,v27
	_mm_store_ps(v22.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v27.f32)));
	// vaddfp v21,v23,v4
	_mm_store_ps(v21.f32, _mm_add_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v4.f32)));
	// vaddfp v20,v22,v2
	_mm_store_ps(v20.f32, _mm_add_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v2.f32)));
	// vsubfp v19,v20,v21
	_mm_store_ps(v19.f32, _mm_sub_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)));
	// vmsum3fp128 v18,v19,v1
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// stvewx v18,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v18.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_8267014C"))) PPC_WEAK_FUNC(sub_8267014C);
PPC_FUNC_IMPL(__imp__sub_8267014C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670150"))) PPC_WEAK_FUNC(sub_82670150);
PPC_FUNC_IMPL(__imp__sub_82670150) {
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
	// bl 0x82656ad8
	sub_82656AD8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r11,11276
	ctx.r9.s64 = r11.s64 + 11276;
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82670190"))) PPC_WEAK_FUNC(sub_82670190);
PPC_FUNC_IMPL(__imp__sub_82670190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670194"))) PPC_WEAK_FUNC(sub_82670194);
PPC_FUNC_IMPL(__imp__sub_82670194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82670198"))) PPC_WEAK_FUNC(sub_82670198);
PPC_FUNC_IMPL(__imp__sub_82670198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f1,f12,f1,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826701D4"))) PPC_WEAK_FUNC(sub_826701D4);
PPC_FUNC_IMPL(__imp__sub_826701D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826701D8"))) PPC_WEAK_FUNC(sub_826701D8);
PPC_FUNC_IMPL(__imp__sub_826701D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addic. r8,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r8.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x82670280
	if (cr0.lt) goto loc_82670280;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,20584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20584);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8892);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
loc_826701F8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// addi r10,r11,208
	ctx.r10.s64 = r11.s64 + 208;
	// addi r9,r11,224
	ctx.r9.s64 = r11.s64 + 224;
	// lfs f13,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// fsel f9,f10,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lfs f8,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lfs f7,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// clrlwi r7,r3,25
	ctx.r7.u64 = ctx.r3.u32 & 0x7F;
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// fmadds f5,f6,f9,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmsubs f13,f5,f12,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f11.f64));
	// ble cr6,0x82670268
	if (!cr6.gt) goto loc_82670268;
	// lfs f10,252(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// b 0x8267026c
	goto loc_8267026C;
loc_82670268:
	// lfs f10,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
loc_8267026C:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82670288
	if (cr6.gt) goto loc_82670288;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bge 0x826701f8
	if (!cr0.lt) goto loc_826701F8;
loc_82670280:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82670288:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8267028C"))) PPC_WEAK_FUNC(sub_8267028C);
PPC_FUNC_IMPL(__imp__sub_8267028C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670290"))) PPC_WEAK_FUNC(sub_82670290);
PPC_FUNC_IMPL(__imp__sub_82670290) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae8
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// addic. r15,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r15.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// blt 0x826706a4
	if (cr0.lt) goto loc_826706A4;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f24,-25596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f24.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f28,20588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20588);
	f28.f64 = double(temp.f32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lfs f29,20592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20592);
	f29.f64 = double(temp.f32);
	// lfs f30,20596(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20596);
	f30.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f27,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	f27.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f25,20600(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20600);
	f25.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f26,3792(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3792);
	f26.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f31,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// li r17,96
	r17.s64 = 96;
	// li r18,144
	r18.s64 = 144;
	// li r24,16
	r24.s64 = 16;
	// li r19,32
	r19.s64 = 32;
	// li r20,48
	r20.s64 = 48;
	// addi r29,r11,9424
	r29.s64 = r11.s64 + 9424;
	// addi r28,r10,15808
	r28.s64 = ctx.r10.s64 + 15808;
	// addi r25,r9,7632
	r25.s64 = ctx.r9.s64 + 7632;
	// addi r26,r8,5472
	r26.s64 = ctx.r8.s64 + 5472;
	// addi r21,r7,-12160
	r21.s64 = ctx.r7.s64 + -12160;
	// addi r23,r6,5456
	r23.s64 = ctx.r6.s64 + 5456;
	// addi r22,r5,-29408
	r22.s64 = ctx.r5.s64 + -29408;
loc_82670344:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// add r10,r11,r14
	ctx.r10.u64 = r11.u64 + r14.u64;
	// lbz r11,8(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82670698
	if (cr6.eq) goto loc_82670698;
	// addi r9,r10,224
	ctx.r9.s64 = ctx.r10.s64 + 224;
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// addi r11,r10,208
	r11.s64 = ctx.r10.s64 + 208;
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vor v5,v10,v10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v3,v12,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vand v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vand v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpeqfp v4,v9,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp v2,v7,v7
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vor v1,v12,v12
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// vor v30,v10,v10
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vcmpgtfp v31,v13,v8
	_mm_store_ps(v31.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)));
	// vor v28,v10,v10
	_mm_store_si128((__m128i*)v28.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vcmpgtfp v29,v13,v6
	_mm_store_ps(v29.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vand v27,v4,v1
	_mm_store_si128((__m128i*)v27.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vand v26,v2,v3
	_mm_store_si128((__m128i*)v26.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vand v25,v31,v12
	_mm_store_si128((__m128i*)v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vand v24,v29,v11
	_mm_store_si128((__m128i*)v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vmsum4fp128 v23,v27,v28
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32), 0xFF));
	// vmsum4fp128 v22,v26,v30
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(v30.f32), 0xFF));
	// vmsum4fp128 v21,v25,v10
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v20,v24,v5
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vctsxs v19,v23,0
	_mm_store_si128((__m128i*)v19.s32, _mm_vctsxs(_mm_load_ps(v23.f32)));
	// vctsxs v18,v22,0
	_mm_store_si128((__m128i*)v18.s32, _mm_vctsxs(_mm_load_ps(v22.f32)));
	// vctsxs v17,v21,0
	_mm_store_si128((__m128i*)v17.s32, _mm_vctsxs(_mm_load_ps(v21.f32)));
	// vctsxs v16,v20,0
	_mm_store_si128((__m128i*)v16.s32, _mm_vctsxs(_mm_load_ps(v20.f32)));
	// stvx128 v19,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stvx128 v18,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stvx128 v17,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stvx128 v16,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// rlwinm r4,r5,0,28,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r4,14
	cr6.compare<int32_t>(ctx.r4.s32, 14, xer);
	// beq cr6,0x82670434
	if (cr6.eq) goto loc_82670434;
	// lvx128 v0,r0,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r21.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r21.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670434:
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f0,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8267049c
	if (!cr6.gt) goto loc_8267049C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8267049C:
	// addi r8,r27,8
	ctx.r8.s64 = r27.s64 + 8;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// ld r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// ld r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r31,r17
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v9,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r7,173(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 173);
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f10,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(f27.f64 - ctx.f9.f64));
	// fmuls f0,f11,f25
	f0.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fsel f12,f8,f9,f27
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : f27.f64;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82670560
	if (cr6.gt) goto loc_82670560;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fnmsubs f12,f0,f30,f31
	ctx.f12.f64 = double(float(-(f0.f64 * f30.f64 - f31.f64)));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f10,f13,f29,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * f29.f64 - ctx.f12.f64)));
	// fnmsubs f9,f11,f28,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * f28.f64 - ctx.f10.f64)));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x826705ac
	goto loc_826705AC;
loc_82670560:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f9,f13,f30,f31
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * f30.f64 - f31.f64)));
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// fmuls f7,f10,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// vmulfp128 v8,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// fnmsubs f6,f10,f29,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * f29.f64 - ctx.f9.f64)));
	// fnmsubs f5,f7,f28,f6
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * f28.f64 - ctx.f6.f64)));
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stvx128 v8,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826705AC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v9,v13,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v7,v13,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v12,r0,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v13,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// vspltisw v6,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vpermwi128 v5,v0,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v4,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v3,v0,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v2,v0,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v1,v0,v0
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v8,v6,v6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vmulfp128 v31,v5,v9
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v30,v3,v7
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v1,r31,r18
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v29,v4,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vsubfp v9,v30,v31
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v30.f32), _mm_load_ps(v31.f32)));
	// vsubfp v28,v2,v29
	_mm_store_ps(v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v29.f32)));
	// vmaddfp v13,v13,v11,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v10,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v0,v28,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v28.f32), 228), 1));
	// vmsum4fp128 v27,v0,v0
	_mm_store_ps(v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v13,v27
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v27.f32))));
	// vmulfp128 v9,v27,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v6,v6,v27
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v27.f32)));
	// fmuls f13,f0,f24
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 * f24.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// vmulfp128 v10,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v8,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v26,v12,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v25,v0,v26
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v26.f32)));
	// stvx128 v25,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// lvx128 v22,r0,r31
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r31,r19
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r30,r24
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((r30.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r0,r11
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v23,v24,0
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0xFF));
	// vspltw v12,v24,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0xAA));
	// vspltw v10,v24,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x55));
	// vmulfp128 v13,v22,v23
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v20,v21,v0
	_mm_store_ps(v20.f32, _mm_sub_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v20,r31,r20
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670698:
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// bge 0x82670344
	if (!cr0.lt) goto loc_82670344;
loc_826706A4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab34
}

__attribute__((alias("__imp__sub_826706B0"))) PPC_WEAK_FUNC(sub_826706B0);
PPC_FUNC_IMPL(__imp__sub_826706B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826706B4"))) PPC_WEAK_FUNC(sub_826706B4);
PPC_FUNC_IMPL(__imp__sub_826706B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826706B8"))) PPC_WEAK_FUNC(sub_826706B8);
PPC_FUNC_IMPL(__imp__sub_826706B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae0
	// li r12,-256
	r12.s64 = -256;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r6,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r6.u32);
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// stw r5,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r5.u32);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// stw r8,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r8.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// blt 0x826713e8
	if (cr0.lt) goto loc_826713E8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f22,20580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20580);
	f22.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f23,-25596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25596);
	f23.f64 = double(temp.f32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f28,20588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20588);
	f28.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f29,20592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20592);
	f29.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f30,20596(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20596);
	f30.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f27,6912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6912);
	f27.f64 = double(temp.f32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f25,20600(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20600);
	f25.f64 = double(temp.f32);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f26,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f26.f64 = double(temp.f32);
	// lfs f24,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f24.f64 = double(temp.f32);
	// addi r23,r10,15808
	r23.s64 = ctx.r10.s64 + 15808;
	// lfs f31,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r27,r7,-12160
	r27.s64 = ctx.r7.s64 + -12160;
	// addi r10,r4,7536
	ctx.r10.s64 = ctx.r4.s64 + 7536;
	// addi r31,r1,100
	r31.s64 = ctx.r1.s64 + 100;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r20,32
	r20.s64 = 32;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// li r21,16
	r21.s64 = 16;
	// li r14,48
	r14.s64 = 48;
	// addi r24,r11,9424
	r24.s64 = r11.s64 + 9424;
	// addi r15,r9,7632
	r15.s64 = ctx.r9.s64 + 7632;
	// addi r22,r8,5472
	r22.s64 = ctx.r8.s64 + 5472;
	// addi r17,r6,5456
	r17.s64 = ctx.r6.s64 + 5456;
	// addi r16,r5,-29408
	r16.s64 = ctx.r5.s64 + -29408;
	// addi r18,r3,7520
	r18.s64 = ctx.r3.s64 + 7520;
	// b 0x826707bc
	goto loc_826707BC;
loc_826707B8:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_826707BC:
	// lwz r11,748(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r9,764(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r30,r11,r9
	r30.u64 = r11.u64 + ctx.r9.u64;
	// lhz r8,286(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 286);
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lvlx v0,0,r31
	temp.u32 = r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x82670d78
	if (cr6.gt) goto loc_82670D78;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82670df0
	if (cr6.eq) goto loc_82670DF0;
	// bdz 0x826713c4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_826713C4;
	// bdnz 0x82670d8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82670D8C;
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r25,r30,192
	r25.s64 = r30.s64 + 192;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r26,r19,8
	r26.s64 = r19.s64 + 8;
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,8(r19)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f13,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * f0.f64 - f31.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f24,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f24.f64 : ctx.f12.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lfs f9,184(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * f0.f64 - f31.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f24,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f24.f64 : ctx.f8.f64;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvx128 v5,r31,r20
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r31.u32 + r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r31
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r31,r21
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r18
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r18.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vrefp v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v2,v3,v6
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vnmsubfp v10,v0,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v1,v5,v6
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vmsum3fp128 v31,v4,v6
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vmaddfp v0,v10,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmrghw v30,v2,v11
	_mm_store_si128((__m128i*)v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v29,v31,v1
	_mm_store_si128((__m128i*)v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)v31.u32)));
	// vmrghw v28,v29,v30
	_mm_store_si128((__m128i*)v28.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)v29.u32)));
	// vmulfp128 v27,v28,v0
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v27,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
	// lvx128 v21,r0,r28
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp v20,v21,v21
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v20.f32, _mm_cmpeq_ps(_mm_load_ps(v21.f32), _mm_load_ps(v21.f32)));
	// vand v19,v21,v0
	_mm_store_si128((__m128i*)v19.u8, _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v26,r0,r16
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r23
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// lvx128 v24,r0,r24
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vor128 v60,v25,v25
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v25.u8));
	// lvx128 v18,r0,r29
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vor128 v57,v25,v25
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v25.u8));
	// vcmpgtfp v15,v26,v19
	_mm_store_ps(v15.f32, _mm_cmpgt_ps(_mm_load_ps(v26.f32), _mm_load_ps(v19.f32)));
	// vand v17,v18,v0
	_mm_store_si128((__m128i*)v17.u8, _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpeqfp v16,v18,v18
	_mm_store_ps(v16.f32, _mm_cmpeq_ps(_mm_load_ps(v18.f32), _mm_load_ps(v18.f32)));
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// vor v23,v25,v25
	_mm_store_si128((__m128i*)v23.u8, _mm_load_si128((__m128i*)v25.u8));
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// vor v22,v24,v24
	_mm_store_si128((__m128i*)v22.u8, _mm_load_si128((__m128i*)v24.u8));
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// vcmpgtfp128 v61,v26,v17
	_mm_store_ps(v61.f32, _mm_cmpgt_ps(_mm_load_ps(v26.f32), _mm_load_ps(v17.f32)));
	// vor128 v58,v24,v24
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)v24.u8));
	// vand128 v59,v20,v60
	_mm_store_si128((__m128i*)v59.u8, _mm_and_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vand v14,v15,v25
	_mm_store_si128((__m128i*)v14.u8, _mm_and_si128(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)v25.u8)));
	// vand128 v56,v16,v57
	_mm_store_si128((__m128i*)v56.u8, _mm_and_si128(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vmsum4fp128 v63,v14,v24
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v14.f32), _mm_load_ps(v24.f32), 0xFF));
	// vcfpsxws128 v62,v63,0
	_mm_store_si128((__m128i*)v62.s32, _mm_vctsxs(_mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand128 v52,v61,v23
	_mm_store_si128((__m128i*)v52.u8, _mm_and_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v23.u8)));
	// vmsum4fp128 v54,v59,v58
	_mm_store_ps(v54.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v58.f32), 0xFF));
	// vor128 v55,v24,v24
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)v24.u8));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// vmsum4fp128 v51,v52,v22
	_mm_store_ps(v51.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(v22.f32), 0xFF));
	// vmsum4fp128 v53,v56,v55
	_mm_store_ps(v53.f32, _mm_dp_ps(_mm_load_ps(v56.f32), _mm_load_ps(v55.f32), 0xFF));
	// vcfpsxws128 v50,v54,0
	_mm_store_si128((__m128i*)v50.s32, _mm_vctsxs(_mm_load_ps(v54.f32)));
	// vcfpsxws128 v48,v51,0
	_mm_store_si128((__m128i*)v48.s32, _mm_vctsxs(_mm_load_ps(v51.f32)));
	// vcfpsxws128 v49,v53,0
	_mm_store_si128((__m128i*)v49.s32, _mm_vctsxs(_mm_load_ps(v53.f32)));
	// stvx128 v50,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stvx128 v49,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,352(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// and r6,r11,r7
	ctx.r6.u64 = r11.u64 & ctx.r7.u64;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// and r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 & ctx.r4.u64;
	// rlwinm r3,r4,0,28,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// beq cr6,0x826709b4
	if (cr6.eq) goto loc_826709B4;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826709B4:
	// addi r9,r31,80
	ctx.r9.s64 = r31.s64 + 80;
	// addi r27,r31,64
	r27.s64 = r31.s64 + 64;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f0,r6,r22
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82670a1c
	if (!cr6.gt) goto loc_82670A1C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670A1C:
	// lvlx v0,0,r26
	temp.u32 = r26.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,12(r19)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// ld r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// ld r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r31,r5
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v9,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r7,173(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 173);
	// lfs f11,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f10,r6,r22
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(f27.f64 - ctx.f9.f64));
	// fmuls f0,f11,f25
	f0.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fsel f12,f8,f9,f27
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : f27.f64;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82670ae0
	if (cr6.gt) goto loc_82670AE0;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fnmsubs f12,f0,f30,f31
	ctx.f12.f64 = double(float(-(f0.f64 * f30.f64 - f31.f64)));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f10,f13,f29,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * f29.f64 - ctx.f12.f64)));
	// fnmsubs f9,f11,f28,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * f28.f64 - ctx.f10.f64)));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// b 0x82670b2c
	goto loc_82670B2C;
loc_82670AE0:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f9,f13,f30,f31
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * f30.f64 - f31.f64)));
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// fmuls f7,f10,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// vmulfp128 v8,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// fnmsubs f6,f10,f29,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * f29.f64 - ctx.f9.f64)));
	// fnmsubs f5,f7,f28,f6
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * f28.f64 - ctx.f6.f64)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f5,188(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670B2C:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v9,v13,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v7,v13,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v12,r0,r15
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r15.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v13,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// li r9,144
	ctx.r9.s64 = 144;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r27,48
	ctx.r4.s64 = r27.s64 + 48;
	// vpermwi128 v6,v0,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v5,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v3,v0,v13
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v2,v0,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v8,v127,v127
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v127.u8));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmulfp128 v1,v6,v9
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v31,v4,v7
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v30,v5,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vsubfp v9,v31,v1
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v1.f32)));
	// vsubfp v29,v3,v30
	_mm_store_ps(v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v30.f32)));
	// vmaddfp v13,v13,v11,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v10,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v0,v29,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v29.f32), 228), 1));
	// vmsum4fp128 v28,v0,v0
	_mm_store_ps(v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v13,v28
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v28.f32))));
	// vmulfp128 v9,v28,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp128 v6,v127,v28
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v28.f32)));
	// fmuls f13,f0,f23
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 * f23.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// vmulfp128 v10,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v8,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v27,v12,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v26,v0,v27
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v27.f32)));
	// stvx128 v26,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r27,64
	r11.s64 = r27.s64 + 64;
	// lvx128 v23,r0,r31
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lvx128 v0,r31,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lvx128 v11,r31,r20
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r20.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lvx128 v22,r27,r21
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r27.u32 + r21.u32) & ~0xF), VectorMaskL));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vspltw v24,v25,0
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0xFF));
	// vspltw v12,v25,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0xAA));
	// vspltw v10,v25,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x55));
	// vmulfp128 v13,v23,v24
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v24.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v21,v22,v0
	_mm_store_ps(v21.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v21,r31,r14
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v19,r0,r31
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v17,r31,r21
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r18
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r18.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r0,r25
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r31,r20
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((r31.u32 + r20.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v15,v20,v0
	_mm_store_ps(v15.f32, _mm_dp_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v16,v17,v0
	_mm_store_ps(v16.f32, _mm_dp_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v63,v19,v0
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v14,v16,v13
	_mm_store_si128((__m128i*)v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)v16.u32)));
	// vmrghw128 v62,v63,v15
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v15.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrghw128 v61,v62,v14
	_mm_store_si128((__m128i*)v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v14.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vmulfp128 v60,v61,v18
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v18.f32)));
	// stvx128 v60,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v59,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r31,172
	ctx.r10.s64 = r31.s64 + 172;
	// addi r9,r31,173
	ctx.r9.s64 = r31.s64 + 173;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stvewx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v58,r0,r29
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v57,v58,v58
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v58.f32), _mm_load_ps(v58.f32), 0xEF));
	// stvewx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r6,173(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 173);
	// lbz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rotlwi r7,r3,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lfsx f12,r7,r22
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r22.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// lfsx f10,r5,r22
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r22.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f10
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// bgt cr6,0x82670cd0
	if (cr6.gt) goto loc_82670CD0;
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x82670d18
	if (cr6.eq) goto loc_82670D18;
loc_82670CD0:
	// fsqrts f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f11,r6,r22
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f12
	ctx.f10.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82670d18
	if (cr6.eq) goto loc_82670D18;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82670d1c
	goto loc_82670D1C;
loc_82670D18:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82670D1C:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82670d30
	if (cr6.gt) goto loc_82670D30;
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x82671140
	if (cr6.eq) goto loc_82671140;
loc_82670D30:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f12,r7,r22
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r22.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82671140
	if (cr6.eq) goto loc_82671140;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82671140
	goto loc_82671140;
loc_82670D78:
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670D8C:
	// lfs f0,8(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// fnmsubs f12,f13,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * f0.f64 - f31.f64)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r30,224
	ctx.r10.s64 = r30.s64 + 224;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f24,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f24.f64 : ctx.f12.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,184(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * f0.f64 - f31.f64)));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f24,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f24.f64 : ctx.f8.f64;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670DF0:
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// lvx128 v0,r0,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// lvx128 v13,r0,r16
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r23
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// vor v4,v12,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvx128 v11,r0,r24
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vor v31,v11,v11
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vor v10,v12,v12
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vand v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vand v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpeqfp v5,v9,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp v3,v7,v7
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vor v29,v12,v12
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor v2,v11,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// vcmpgtfp v30,v13,v6
	_mm_store_ps(v30.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v28,v11,v11
	_mm_store_si128((__m128i*)v28.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vcmpgtfp v1,v13,v8
	_mm_store_ps(ctx.v1.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// vand v27,v5,v10
	_mm_store_si128((__m128i*)v27.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v26,v3,v29
	_mm_store_si128((__m128i*)v26.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)v29.u8)));
	// vand v24,v30,v4
	_mm_store_si128((__m128i*)v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vand v25,v1,v12
	_mm_store_si128((__m128i*)v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vmsum4fp128 v23,v27,v2
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v2.f32), 0xFF));
	// vmsum4fp128 v22,v26,v28
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(v28.f32), 0xFF));
	// vmsum4fp128 v20,v24,v31
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(v31.f32), 0xFF));
	// vmsum4fp128 v21,v25,v11
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vctsxs v19,v23,0
	_mm_store_si128((__m128i*)v19.s32, _mm_vctsxs(_mm_load_ps(v23.f32)));
	// vctsxs v18,v22,0
	_mm_store_si128((__m128i*)v18.s32, _mm_vctsxs(_mm_load_ps(v22.f32)));
	// vctsxs v16,v20,0
	_mm_store_si128((__m128i*)v16.s32, _mm_vctsxs(_mm_load_ps(v20.f32)));
	// vctsxs v17,v21,0
	_mm_store_si128((__m128i*)v17.s32, _mm_vctsxs(_mm_load_ps(v21.f32)));
	// stvx128 v19,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stvx128 v18,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stvx128 v16,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// and r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 & ctx.r3.u64;
	// lwz r9,432(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r5,r6,0,28,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r5,14
	cr6.compare<int32_t>(ctx.r5.s32, 14, xer);
	// beq cr6,0x82670ed4
	if (cr6.eq) goto loc_82670ED4;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670ED4:
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r27,r31,64
	r27.s64 = r31.s64 + 64;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f0,r6,r22
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r22.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82670f3c
	if (!cr6.gt) goto loc_82670F3C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82670F3C:
	// addi r9,r19,8
	ctx.r9.s64 = r19.s64 + 8;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,12(r19)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// ld r26,120(r31)
	r26.u64 = PPC_LOAD_U64(r31.u32 + 120);
	// ld r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 112);
	// std r26,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, r26.u64);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r31,r5
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v9,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f8,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lbz r9,173(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 173);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f11,r7,r22
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r22.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f9,f27,f10
	ctx.f9.f64 = double(float(f27.f64 - ctx.f10.f64));
	// fmuls f0,f8,f25
	f0.f64 = double(float(ctx.f8.f64 * f25.f64));
	// fsel f12,f9,f10,f27
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : f27.f64;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82671004
	if (cr6.gt) goto loc_82671004;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fnmsubs f12,f0,f30,f31
	ctx.f12.f64 = double(float(-(f0.f64 * f30.f64 - f31.f64)));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f10,f13,f29,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * f29.f64 - ctx.f12.f64)));
	// fnmsubs f9,f11,f28,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * f28.f64 - ctx.f10.f64)));
	// stfs f9,204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x82671050
	goto loc_82671050;
loc_82671004:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f9,f13,f30,f31
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * f30.f64 - f31.f64)));
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fnmsubs f6,f10,f29,f9
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * f29.f64 - ctx.f9.f64)));
	// fnmsubs f5,f7,f28,f6
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * f28.f64 - ctx.f6.f64)));
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v8,v12,v10
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f5,204(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671050:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vpermwi128 v9,v13,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v7,v13,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v12,r0,r15
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r15.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v13,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// li r9,144
	ctx.r9.s64 = 144;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r27,48
	ctx.r4.s64 = r27.s64 + 48;
	// vpermwi128 v6,v0,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v5,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v3,v0,v13
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v2,v0,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v8,v127,v127
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v127.u8));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmulfp128 v1,v6,v9
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v31,v4,v7
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v30,v5,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vsubfp v9,v31,v1
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v1.f32)));
	// vsubfp v29,v3,v30
	_mm_store_ps(v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v30.f32)));
	// vmaddfp v13,v13,v11,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v10,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v0,v29,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v29.f32), 228), 1));
	// vmsum4fp128 v28,v0,v0
	_mm_store_ps(v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v13,v28
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v28.f32))));
	// vmulfp128 v9,v28,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp128 v6,v127,v28
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v28.f32)));
	// fmuls f13,f0,f23
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 * f23.f64));
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// vmulfp128 v10,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v8,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v27,v12,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v26,v0,v27
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v27.f32)));
	// stvx128 v26,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r27,64
	r11.s64 = r27.s64 + 64;
	// lvx128 v23,r0,r31
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r31,r21
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r20
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r27,r21
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r27.u32 + r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v24,v25,0
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0xFF));
	// vspltw v12,v25,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0xAA));
	// vspltw v0,v25,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x55));
	// vmulfp128 v11,v23,v24
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v24.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v21,v22,v0
	_mm_store_ps(v21.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v21,r31,r14
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671140:
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	// stb r11,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82671390
	if (!cr6.eq) goto loc_82671390;
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8267116c
	if (cr6.eq) goto loc_8267116C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8267118c
	goto loc_8267118C;
loc_8267116C:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82671180
	if (!cr6.eq) goto loc_82671180;
	// li r11,255
	r11.s64 = 255;
	// stb r11,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r11.u8);
	// b 0x82671390
	goto loc_82671390;
loc_82671180:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stb r10,9(r30)
	PPC_STORE_U8(r30.u32 + 9, ctx.r10.u8);
loc_8267118C:
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	f0.f64 = double(temp.f32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,724(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// addi r3,r11,15
	ctx.r3.s64 = r11.s64 + 15;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,252
	ctx.r9.s64 = ctx.r10.s64 + 252;
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : f31.f64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r28,r1,124
	r28.s64 = ctx.r1.s64 + 124;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx v13,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r11,68
	ctx.r6.s64 = r11.s64 + 68;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r30
	r31.u64 = ctx.r6.u64 + r30.u64;
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f8,f12,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsel f5,f6,f10,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f7.f64;
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v7,v8,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lbz r5,190(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 190);
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// stvewx v7,r0,r28
	ea = (r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f3,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f4,r27,r10
	temp.u32 = PPC_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f3,f4
	cr6.compare(ctx.f3.f64, ctx.f4.f64);
	// bgt cr6,0x82671320
	if (cr6.gt) goto loc_82671320;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// addi r28,r11,12
	r28.s64 = r11.s64 + 12;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r5,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// addi r27,r9,-128
	r27.s64 = ctx.r9.s64 + -128;
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// addi r6,r6,-128
	ctx.r6.s64 = ctx.r6.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// lfd f9,216(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r27,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r27.u64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// lfd f0,224(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// lfd f10,232(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhzx r6,r5,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32);
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// fmuls f0,f5,f22
	f0.f64 = double(float(ctx.f5.f64 * f22.f64));
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fmuls f1,f6,f22
	ctx.f1.f64 = double(float(ctx.f6.f64 * f22.f64));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f13,f3,f22
	ctx.f13.f64 = double(float(ctx.f3.f64 * f22.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f2,f22
	ctx.f12.f64 = double(float(ctx.f2.f64 * f22.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum4fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// lfs f4,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f4
	cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// ble cr6,0x82671358
	if (!cr6.gt) goto loc_82671358;
loc_82671320:
	// addi r10,r11,5
	ctx.r10.s64 = r11.s64 + 5;
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,293(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 293);
	// lhzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// rlwimi r5,r6,7,0,24
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xFFFFFF80) | (ctx.r5.u64 & 0xFFFFFFFF0000007F);
	// rlwinm r4,r5,7,16,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFF80;
	// sthx r4,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r4.u16);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v0,v127,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v127.f32), 228), 1));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82bfb168
	sub_82BFB168(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82671390
	goto loc_82671390;
loc_82671358:
	// addi r10,r11,5
	ctx.r10.s64 = r11.s64 + 5;
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,293(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 293);
	// lhzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// rotlwi r6,r8,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// clrlwi r5,r7,25
	ctx.r5.u64 = ctx.r7.u32 & 0x7F;
	// srawi r4,r5,6
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// rlwinm r9,r3,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthx r7,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r7.u16);
loc_82671390:
	// lhz r11,12(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 12);
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x826713ac
	if (!cr6.gt) goto loc_826713AC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826713AC:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,740(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x826713c4
	if (cr6.lt) goto loc_826713C4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_826713C4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r31,r1,100
	r31.s64 = ctx.r1.s64 + 100;
	// lwz r10,748(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r9,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r9.u32);
	// bge 0x826707b8
	if (!cr0.lt) goto loc_826707B8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826713E8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// li r0,-256
	r0.s64 = -256;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_826713FC"))) PPC_WEAK_FUNC(sub_826713FC);
PPC_FUNC_IMPL(__imp__sub_826713FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82671400"))) PPC_WEAK_FUNC(sub_82671400);
PPC_FUNC_IMPL(__imp__sub_82671400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// li r12,-224
	r12.s64 = -224;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-208
	r12.s64 = -208;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-192
	r12.s64 = -192;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// blt 0x826717ec
	if (cr0.lt) goto loc_826717EC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r31,r7,112
	r31.s64 = ctx.r7.s64 + 112;
	// li r16,192
	r16.s64 = 192;
	// lfs f30,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
	// li r17,-64
	r17.s64 = -64;
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// li r14,0
	r14.s64 = 0;
	// li r23,-96
	r23.s64 = -96;
	// li r18,80
	r18.s64 = 80;
	// li r24,-48
	r24.s64 = -48;
	// li r22,-16
	r22.s64 = -16;
	// li r25,-80
	r25.s64 = -80;
	// li r15,1
	r15.s64 = 1;
	// addi r19,r11,7536
	r19.s64 = r11.s64 + 7536;
	// b 0x82671494
	goto loc_82671494;
loc_8267148C:
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82671494:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// add r30,r11,r6
	r30.u64 = r11.u64 + ctx.r6.u64;
	// ble cr6,0x826714c0
	if (!cr6.gt) goto loc_826714C0;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// dcbt r11,r6
	// li r11,128
	r11.s64 = 128;
	// dcbt r11,r10
	// li r10,144
	ctx.r10.s64 = 144;
	// dcbt r31,r10
loc_826714C0:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x826717d0
	if (cr6.gt) goto loc_826717D0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x826717d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826717D0;
	// bdzf 4*cr6+eq,0x82671614
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671614;
	// bdzf 4*cr6+eq,0x826714f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826714F0;
	// bdzf 4*cr6+eq,0x8267176c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8267176C;
	// bdzf 4*cr6+eq,0x82671718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671718;
	// bdzf 4*cr6+eq,0x826714f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826714F0;
	// bne cr6,0x82671608
	if (!cr6.eq) goto loc_82671608;
loc_826714F0:
	// lfs f0,8(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// fnmsubs f12,f13,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * f0.f64 - f31.f64)));
	// addi r29,r30,224
	r29.s64 = r30.s64 + 224;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// addi r26,r31,-32
	r26.s64 = r31.s64 + -32;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f30,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f12.f64;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lfs f9,184(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * f0.f64 - f31.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f30.f64 : ctx.f8.f64;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a3b8
	sub_8262A3B8(ctx, base);
	// stb r14,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r14.u8);
	// lvx128 v6,r30,r16
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r30.u32 + r16.u32) & ~0xF), VectorMaskL));
	// addi r11,r27,64
	r11.s64 = r27.s64 + 64;
	// stvx128 v6,r31,r17
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lwz r6,364(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stvx128 v5,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lfs f5,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v13,r0,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lfs f4,0(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lvx128 v12,r27,r18
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r27.u32 + r18.u32) & ~0xF), VectorMaskL));
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v3,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v2,v3,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vspltw v0,v2,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// vsubfp v1,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v1,v4
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r31,r24
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r26
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r29
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vspltw v29,v30,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0xFF));
	// vmulfp128 v13,v31,v29
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v29.f32)));
	// vspltw v12,v30,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0xAA));
	// vspltw v10,v30,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0x55));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r31,r25
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r8,190(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 190);
	// stw r8,-108(r31)
	PPC_STORE_U32(r31.u32 + -108, ctx.r8.u32);
	// b 0x826717c4
	goto loc_826717C4;
loc_82671608:
	// li r11,2
	r11.s64 = 2;
	// stb r11,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r11.u8);
	// b 0x82671618
	goto loc_82671618;
loc_82671614:
	// stb r14,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r14.u8);
loc_82671618:
	// lfs f0,8(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r30,208
	ctx.r10.s64 = r30.s64 + 208;
	// fnmsubs f12,f13,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * f0.f64 - f31.f64)));
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// vxor128 v127,v127,v127
	_mm_store_si128((__m128i*)v127.u8, _mm_setzero_si128());
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// addi r28,r1,84
	r28.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// addi r7,r31,-32
	ctx.r7.s64 = r31.s64 + -32;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f30,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f12.f64;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lfs f9,184(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * f0.f64 - f31.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f30.f64 : ctx.f8.f64;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v9,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r30,r16
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r30.u32 + r16.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r31,r17
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,108(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lvx128 v13,r0,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lfs f4,0(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lvx128 v12,r9,r18
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + r18.u32) & ~0xF), VectorMaskL));
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v4,0,r28
	temp.u32 = r28.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v3,v4,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vspltw v0,v3,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vsubfp v2,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v2,v5
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r31,r24
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v1,r31,r25
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r10
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v31,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,-32(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -32, temp.u32);
	// stfs f31,-12(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lbz r11,190(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 190);
	// stw r11,-108(r31)
	PPC_STORE_U32(r31.u32 + -108, r11.u32);
	// lhz r10,286(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 286);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stw r9,-104(r31)
	PPC_STORE_U32(r31.u32 + -104, ctx.r9.u32);
	// b 0x826717d0
	goto loc_826717D0;
loc_82671718:
	// addi r11,r31,-64
	r11.s64 = r31.s64 + -64;
	// stfs f30,-104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + -104, temp.u32);
	// stb r15,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r15.u8);
	// li r10,-32
	ctx.r10.s64 = -32;
	// vxor128 v125,v125,v125
	_mm_store_si128((__m128i*)v125.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r23
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r23.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r31,r25
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r25.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r31,r25
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r31,r24
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vxor v7,v8,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_setzero_si128());
	// stvx128 v7,r31,r24
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x826717d0
	goto loc_826717D0;
loc_8267176C:
	// stb r15,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r15.u8);
	// addi r11,r31,-64
	r11.s64 = r31.s64 + -64;
	// li r10,96
	ctx.r10.s64 = 96;
	// vxor128 v126,v126,v126
	_mm_store_si128((__m128i*)v126.u8, _mm_setzero_si128());
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,208
	ctx.r8.s64 = 208;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r31,-32
	r11.s64 = r31.s64 + -32;
	// lvx128 v12,r30,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r31,r24
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r30,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r31,r25
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r30,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// stfs f31,-32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -32, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_826717C4:
	// lhz r7,286(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 286);
	// rotlwi r3,r7,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// stw r3,-104(r31)
	PPC_STORE_U32(r31.u32 + -104, ctx.r3.u32);
loc_826717D0:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r21,r21,128
	r21.s64 = r21.s64 + 128;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// bge 0x8267148c
	if (!cr0.lt) goto loc_8267148C;
loc_826717EC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-224
	r0.s64 = -224;
	// lvx128 v125,r1,r0
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-208
	r0.s64 = -208;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-192
	r0.s64 = -192;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_82671814"))) PPC_WEAK_FUNC(sub_82671814);
PPC_FUNC_IMPL(__imp__sub_82671814) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82671818"))) PPC_WEAK_FUNC(sub_82671818);
PPC_FUNC_IMPL(__imp__sub_82671818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae4
	// li r12,-240
	r12.s64 = -240;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r4,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r4.u32);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// stw r6,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r6.u32);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r8.u32);
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// blt 0x826721bc
	if (cr0.lt) goto loc_826721BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r27,r5,32
	r27.s64 = ctx.r5.s64 + 32;
	// lfs f24,20580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20580);
	f24.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f23,-25596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25596);
	f23.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f28,20588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20588);
	f28.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,6912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6912);
	f27.f64 = double(temp.f32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f29,20592(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20592);
	f29.f64 = double(temp.f32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lfs f30,20596(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20596);
	f30.f64 = double(temp.f32);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// lfs f25,20600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20600);
	f25.f64 = double(temp.f32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f26,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f26.f64 = double(temp.f32);
	// lfs f31,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r17,r9,7520
	r17.s64 = ctx.r9.s64 + 7520;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r6,r6,-12160
	ctx.r6.s64 = ctx.r6.s64 + -12160;
	// addi r30,r4,-29408
	r30.s64 = ctx.r4.s64 + -29408;
	// addi r9,r3,7536
	ctx.r9.s64 = ctx.r3.s64 + 7536;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r22,224
	r22.s64 = 224;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// li r20,-16
	r20.s64 = -16;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r23,208
	r23.s64 = 208;
	// li r24,16
	r24.s64 = 16;
	// li r25,32
	r25.s64 = 32;
	// li r15,48
	r15.s64 = 48;
	// addi r19,r11,9424
	r19.s64 = r11.s64 + 9424;
	// addi r18,r10,15808
	r18.s64 = ctx.r10.s64 + 15808;
	// addi r16,r8,7632
	r16.s64 = ctx.r8.s64 + 7632;
	// addi r26,r7,5472
	r26.s64 = ctx.r7.s64 + 5472;
	// addi r14,r5,5456
	r14.s64 = ctx.r5.s64 + 5456;
	// b 0x82671924
	goto loc_82671924;
loc_8267191C:
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_82671924:
	// lwz r10,652(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// ble cr6,0x82671954
	if (!cr6.gt) goto loc_82671954;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// dcbt r11,r29
	// li r11,128
	r11.s64 = 128;
	// dcbt r11,r10
	// dcbt r27,r22
loc_82671954:
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82671d90
	if (cr6.gt) goto loc_82671D90;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82671d90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671D90;
	// bdzf 4*cr6+eq,0x82671a24
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671A24;
	// bdzf 4*cr6+eq,0x826719c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826719C0;
	// bdzf 4*cr6+eq,0x82671a14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671A14;
	// bdzf 4*cr6+eq,0x82671d90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671D90;
	// bdzf 4*cr6+eq,0x82671988
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82671988;
	// bne cr6,0x82671a24
	if (!cr6.eq) goto loc_82671A24;
loc_82671988:
	// li r11,192
	r11.s64 = 192;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r31,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vrefp v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v10,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
loc_826719C0:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lvx128 v0,r27,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r27,48
	ctx.r5.s64 = r27.s64 + 48;
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v0,r4,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v13,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// lvx128 v11,r4,r25
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + r25.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v13,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v127,r27,r25
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r27.u32 + r25.u32) & ~0xF), VectorMaskL));
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// b 0x82671a44
	goto loc_82671A44;
loc_82671A14:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v127,r31,r23
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r31.u32 + r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// b 0x82671a40
	goto loc_82671A40;
loc_82671A24:
	// lvx128 v0,r27,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r20.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r15.u32) & ~0xF), VectorMaskL));
	// lvx128 v127,r27,r25
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r27.u32 + r25.u32) & ~0xF), VectorMaskL));
loc_82671A40:
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671A44:
	// lvx128 v13,r0,r14
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r14.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp128 v11,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v127.f32)));
	// vand v7,v0,v13
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vand128 v10,v127,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v9,r0,r18
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r18.u32) & ~0xF), VectorMaskL));
	// vor v1,v9,v9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v8,r0,r19
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r19.u32) & ~0xF), VectorMaskL));
	// vor v29,v8,v8
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vcmpeqfp v6,v0,v0
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpgtfp v2,v12,v7
	_mm_store_ps(ctx.v2.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// vcmpgtfp v4,v12,v10
	_mm_store_ps(ctx.v4.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// vor v3,v9,v9
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// vor v31,v8,v8
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor v30,v8,v8
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// vand v28,v11,v5
	_mm_store_si128((__m128i*)v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v27,v6,v3
	_mm_store_si128((__m128i*)v27.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vmsum4fp128 v26,v28,v31
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(v28.f32), _mm_load_ps(v31.f32), 0xFF));
	// vand v24,v2,v1
	_mm_store_si128((__m128i*)v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vand v25,v4,v9
	_mm_store_si128((__m128i*)v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vmsum4fp128 v23,v27,v30
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v30.f32), 0xFF));
	// vmsum4fp128 v21,v24,v29
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(v29.f32), 0xFF));
	// vmsum4fp128 v22,v25,v8
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vctsxs v20,v26,0
	_mm_store_si128((__m128i*)v20.s32, _mm_vctsxs(_mm_load_ps(v26.f32)));
	// vctsxs v19,v23,0
	_mm_store_si128((__m128i*)v19.s32, _mm_vctsxs(_mm_load_ps(v23.f32)));
	// vctsxs v17,v21,0
	_mm_store_si128((__m128i*)v17.s32, _mm_vctsxs(_mm_load_ps(v21.f32)));
	// vctsxs v18,v22,0
	_mm_store_si128((__m128i*)v18.s32, _mm_vctsxs(_mm_load_ps(v22.f32)));
	// stvx128 v20,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stvx128 v19,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,304(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stvx128 v17,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stvx128 v18,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// and r11,r5,r3
	r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// and r10,r11,r4
	ctx.r10.u64 = r11.u64 & ctx.r4.u64;
	// rlwinm r9,r10,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r9,14
	cr6.compare<int32_t>(ctx.r9.s32, 14, xer);
	// beq cr6,0x82671b10
	if (cr6.eq) goto loc_82671B10;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671B10:
	// vmsum3fp128 v0,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(v127.f32), _mm_load_ps(v127.f32), 0xEF));
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// addi r29,r30,64
	r29.s64 = r30.s64 + 64;
	// lwz r8,636(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 172);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f0,r7,r26
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r26.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82671b74
	if (!cr6.gt) goto loc_82671B74;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v127,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v13.f32)));
loc_82671B74:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,120
	r11.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r30,112
	r11.s64 = r30.s64 + 112;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, r11.u64);
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// vmaddfp128 v0,v127,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// ld r11,120(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 120);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, r11.u64);
	// ld r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 112);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r30,r5
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,200(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stvewx v9,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r8,173(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 173);
	// lfs f11,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfsx f10,r7,r26
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(f27.f64 - ctx.f9.f64));
	// fmuls f0,f11,f25
	f0.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fsel f12,f8,f9,f27
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : f27.f64;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82671c4c
	if (cr6.gt) goto loc_82671C4C;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fnmsubs f12,f0,f30,f31
	ctx.f12.f64 = double(float(-(f0.f64 * f30.f64 - f31.f64)));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fnmsubs f10,f13,f29,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * f29.f64 - ctx.f12.f64)));
	// fnmsubs f9,f11,f28,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * f28.f64 - ctx.f10.f64)));
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x82671c9c
	goto loc_82671C9C;
loc_82671C4C:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fdivs f11,f31,f0
	ctx.f11.f64 = double(float(f31.f64 / f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fnmsubs f9,f13,f30,f31
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * f30.f64 - f31.f64)));
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// fmuls f7,f10,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// vmulfp128 v8,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// fnmsubs f6,f10,f29,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * f29.f64 - ctx.f9.f64)));
	// fnmsubs f5,f7,f28,f6
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * f28.f64 - ctx.f6.f64)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f5,172(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671C9C:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vpermwi128 v8,v13,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v7,v13,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v12,r0,r16
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r16.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v13,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(sqrt(f0.f64)));
	// vspltisw v6,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0x0)));
	// li r9,144
	ctx.r9.s64 = 144;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// vpermwi128 v5,v0,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v4,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v3,v0,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v2,v0,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v10,v0,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v1,v0,v0
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v11,v6,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vmulfp128 v31,v5,v8
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v30,v3,v7
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v1,r30,r9
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v29,v4,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vsubfp v8,v30,v31
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(v30.f32), _mm_load_ps(v31.f32)));
	// vsubfp v28,v2,v29
	_mm_store_ps(v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v29.f32)));
	// vmaddfp v13,v13,v10,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v0,v9,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v0,v28,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v28.f32), 228), 1));
	// vmsum4fp128 v27,v0,v0
	_mm_store_ps(v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v13,v27
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v27.f32))));
	// vmulfp128 v8,v27,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v7,v6,v27
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v27.f32)));
	// fmuls f13,f0,f23
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64 * f23.f64));
	// stfs f13,156(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 156, temp.u32);
	// vmulfp128 v9,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v8,v9,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v8,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v11,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw v26,v12,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v25,v0,v26
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v26.f32)));
	// stvx128 v25,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// lvx128 v22,r0,r30
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r30,r24
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r30.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r30,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r29,r24
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((r29.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lwz r29,668(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lvx128 v24,r0,r11
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v23,v24,0
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0xFF));
	// vspltw v12,v24,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0xAA));
	// vspltw v0,v24,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x55));
	// vmulfp128 v11,v22,v23
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v20,v21,v0
	_mm_store_ps(v20.f32, _mm_sub_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v20,r30,r15
	_mm_store_si128((__m128i*)(base + ((r30.u32 + r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671D90:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82671df8
	if (!cr6.eq) goto loc_82671DF8;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lvx128 v0,r27,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,320
	r11.s64 = ctx.r1.s64 + 320;
	// lvx128 v13,r0,r17
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lvx128 v12,r4,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + r25.u32) & ~0xF), VectorMaskL));
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// lvx128 v10,r0,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r31,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r24
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v9,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v5,v7,v13
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmsum3fp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v6,v12,v0
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v4,v8,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmulfp128 v2,v3,v11
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v2,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
loc_82671DF8:
	// addi r10,r31,208
	ctx.r10.s64 = r31.s64 + 208;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r8,r11,172
	ctx.r8.s64 = r11.s64 + 172;
	// addi r11,r11,173
	r11.s64 = r11.s64 + 173;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lfsx f13,r3,r26
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// lfsx f11,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// bgt cr6,0x82671e64
	if (cr6.gt) goto loc_82671E64;
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x82671eac
	if (cr6.eq) goto loc_82671EAC;
loc_82671E64:
	// fsqrts f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lfsx f11,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f31,f12
	ctx.f10.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82671eac
	if (cr6.eq) goto loc_82671EAC;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82671eb0
	goto loc_82671EB0;
loc_82671EAC:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82671EB0:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82671ec4
	if (cr6.gt) goto loc_82671EC4;
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x82671f08
	if (cr6.eq) goto loc_82671F08;
loc_82671EC4:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lfsx f12,r6,r26
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82671f08
	if (cr6.eq) goto loc_82671F08;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82671F08:
	// lbz r11,9(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r11,30
	ctx.r8.u64 = r11.u32 & 0x3;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8267216c
	if (!cr6.eq) goto loc_8267216C;
	// clrlwi r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82671f34
	if (cr6.eq) goto loc_82671F34;
	// li r11,0
	r11.s64 = 0;
	// b 0x82671f54
	goto loc_82671F54;
loc_82671F34:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82671f48
	if (!cr6.eq) goto loc_82671F48;
	// li r11,255
	r11.s64 = 255;
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
	// b 0x8267216c
	goto loc_8267216C;
loc_82671F48:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stb r9,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r9.u8);
loc_82671F54:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,15
	ctx.r3.s64 = r11.s64 + 15;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r7,r3,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,252
	ctx.r9.s64 = ctx.r10.s64 + 252;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : f31.f64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r28,r1,104
	r28.s64 = ctx.r1.s64 + 104;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx v13,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r11,68
	ctx.r6.s64 = r11.s64 + 68;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f8,f9,f12,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// add r30,r6,r31
	r30.u64 = ctx.r6.u64 + r31.u64;
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsel f5,f6,f7,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lbz r5,190(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 190);
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// vsubfp v8,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// vmsum3fp128 v7,v8,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// stvewx v7,r0,r28
	ea = (r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f4,r4,r10
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f3,f4
	cr6.compare(ctx.f3.f64, ctx.f4.f64);
	// bgt cr6,0x826720f8
	if (cr6.gt) goto loc_826720F8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r11,12
	r28.s64 = r11.s64 + 12;
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r6,r4,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// addi r6,r6,-128
	ctx.r6.s64 = ctx.r6.s64 + -128;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwinm r5,r4,16,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// rlwinm r9,r4,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// addi r4,r9,-128
	ctx.r4.s64 = ctx.r9.s64 + -128;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// lfd f13,208(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// extsw r5,r4
	ctx.r5.s64 = ctx.r4.s32;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lfd f10,224(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f8,192(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// lfd f11,216(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lhzx r6,r4,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// frsp f5,f12
	ctx.f5.f64 = double(float(ctx.f12.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f24
	ctx.f1.f64 = double(float(ctx.f5.f64 * f24.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f13,f4,f24
	ctx.f13.f64 = double(float(ctx.f4.f64 * f24.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f12,f3,f24
	ctx.f12.f64 = double(float(ctx.f3.f64 * f24.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f11,f2,f24
	ctx.f11.f64 = double(float(ctx.f2.f64 * f24.f64));
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum4fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// lwz r29,668(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x82672134
	if (!cr6.gt) goto loc_82672134;
loc_826720F8:
	// addi r10,r11,5
	ctx.r10.s64 = r11.s64 + 5;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// add r9,r11,r21
	ctx.r9.u64 = r11.u64 + r21.u64;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,293(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 293);
	// lhzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// rlwimi r5,r6,7,0,24
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xFFFFFF80) | (ctx.r5.u64 & 0xFFFFFFFF0000007F);
	// rlwinm r4,r5,7,16,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFF80;
	// sthx r4,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r4.u16);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v13,v0,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82bfb168
	sub_82BFB168(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x8267216c
	goto loc_8267216C;
loc_82672134:
	// addi r10,r11,5
	ctx.r10.s64 = r11.s64 + 5;
	// add r9,r11,r21
	ctx.r9.u64 = r11.u64 + r21.u64;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,293(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 293);
	// lhzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// rotlwi r6,r8,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// clrlwi r5,r7,25
	ctx.r5.u64 = ctx.r7.u32 & 0x7F;
	// srawi r4,r5,6
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 6;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// rlwinm r9,r3,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthx r7,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r7.u16);
loc_8267216C:
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82672188
	if (!cr6.gt) goto loc_82672188;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82672188:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82672198
	if (cr6.lt) goto loc_82672198;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82672198:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// lwz r10,652(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r9,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r9.u32);
	// bge 0x8267191c
	if (!cr0.lt) goto loc_8267191C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_826721BC:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// li r0,-240
	r0.s64 = -240;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_826721D0"))) PPC_WEAK_FUNC(sub_826721D0);
PPC_FUNC_IMPL(__imp__sub_826721D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826721D4"))) PPC_WEAK_FUNC(sub_826721D4);
PPC_FUNC_IMPL(__imp__sub_826721D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826721D8"))) PPC_WEAK_FUNC(sub_826721D8);
PPC_FUNC_IMPL(__imp__sub_826721D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82672204
	if (cr6.eq) goto loc_82672204;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82672204:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82672214
	if (cr6.eq) goto loc_82672214;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82672214:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
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

__attribute__((alias("__imp__sub_8267222C"))) PPC_WEAK_FUNC(sub_8267222C);
PPC_FUNC_IMPL(__imp__sub_8267222C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672230"))) PPC_WEAK_FUNC(sub_82672230);
PPC_FUNC_IMPL(__imp__sub_82672230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,7
	r11.s64 = 7;
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672244"))) PPC_WEAK_FUNC(sub_82672244);
PPC_FUNC_IMPL(__imp__sub_82672244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672248"))) PPC_WEAK_FUNC(sub_82672248);
PPC_FUNC_IMPL(__imp__sub_82672248) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672250"))) PPC_WEAK_FUNC(sub_82672250);
PPC_FUNC_IMPL(__imp__sub_82672250) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// li r8,1
	ctx.r8.s64 = 1;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r9,20612
	ctx.r4.s64 = ctx.r9.s64 + 20612;
	// li r10,0
	ctx.r10.s64 = 0;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r30,-32229
	r30.s64 = -2112159744;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// lfs f0,21036(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stb r8,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r8.u8);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// lfs f0,-25600(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25600);
	f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vxor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826584f8
	sub_826584F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82672328"))) PPC_WEAK_FUNC(sub_82672328);
PPC_FUNC_IMPL(__imp__sub_82672328) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267232C"))) PPC_WEAK_FUNC(sub_8267232C);
PPC_FUNC_IMPL(__imp__sub_8267232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672330"))) PPC_WEAK_FUNC(sub_82672330);
PPC_FUNC_IMPL(__imp__sub_82672330) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,20612
	ctx.r10.s64 = r11.s64 + 20612;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82672360
	if (cr6.eq) goto loc_82672360;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82672360:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
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

__attribute__((alias("__imp__sub_8267237C"))) PPC_WEAK_FUNC(sub_8267237C);
PPC_FUNC_IMPL(__imp__sub_8267237C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672380"))) PPC_WEAK_FUNC(sub_82672380);
PPC_FUNC_IMPL(__imp__sub_82672380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// li r8,384
	ctx.r8.s64 = 384;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826723B4"))) PPC_WEAK_FUNC(sub_826723B4);
PPC_FUNC_IMPL(__imp__sub_826723B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826723B8"))) PPC_WEAK_FUNC(sub_826723B8);
PPC_FUNC_IMPL(__imp__sub_826723B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r5,r11,96
	ctx.r5.s64 = r11.s64 + 96;
	// b 0x826280e0
	sub_826280E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826723C8"))) PPC_WEAK_FUNC(sub_826723C8);
PPC_FUNC_IMPL(__imp__sub_826723C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826723e4
	if (cr6.eq) goto loc_826723E4;
	// lbz r11,32(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826723e8
	if (!cr6.eq) goto loc_826723E8;
loc_826723E4:
	// li r11,0
	r11.s64 = 0;
loc_826723E8:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826723F0"))) PPC_WEAK_FUNC(sub_826723F0);
PPC_FUNC_IMPL(__imp__sub_826723F0) {
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
	PPCRegister f31{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82672428
	if (cr6.eq) goto loc_82672428;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82672428:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82672438
	if (cr6.eq) goto loc_82672438;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82672438:
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r27,16
	r27.s64 = 16;
	// li r28,32
	r28.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lvx128 v13,r30,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + r27.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stvx128 v13,r11,r27
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r30,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r30,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r29
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630648
	sub_82630648(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,36(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v9,v13,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// vpermwi128 v8,v0,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v13,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v6,v9,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v4,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vmulfp128 v5,v7,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// vsubfp v3,v5,v6
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630648
	sub_82630648(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82630648
	sub_82630648(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82630700
	sub_82630700(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// lvx128 v2,r0,r5
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r3
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r10
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r11,r27
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v31,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v30,r11,r29
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_826725A8"))) PPC_WEAK_FUNC(sub_826725A8);
PPC_FUNC_IMPL(__imp__sub_826725A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826725AC"))) PPC_WEAK_FUNC(sub_826725AC);
PPC_FUNC_IMPL(__imp__sub_826725AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826725B0"))) PPC_WEAK_FUNC(sub_826725B0);
PPC_FUNC_IMPL(__imp__sub_826725B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826725ec
	if (cr6.eq) goto loc_826725EC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_826725EC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826725fc
	if (cr6.eq) goto loc_826725FC;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_826725FC:
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// vxor128 v0,v126,v126
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// vxor128 v13,v127,v127
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r4,160
	ctx.r4.s64 = 160;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,112(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r29
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r31,r5
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r31,r4
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_8267269C"))) PPC_WEAK_FUNC(sub_8267269C);
PPC_FUNC_IMPL(__imp__sub_8267269C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826726A0"))) PPC_WEAK_FUNC(sub_826726A0);
PPC_FUNC_IMPL(__imp__sub_826726A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c458c8
	sub_82C458C8(ctx, base);
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x82630648
	sub_82630648(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82630648
	sub_82630648(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,76(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x82628128
	sub_82628128(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 56, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r11,1
	r11.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826727b0
	if (!cr6.lt) goto loc_826727B0;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_826727B0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x826727bc
	if (!cr6.lt) goto loc_826727BC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_826727BC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfsx f12,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfsx f13,r7,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// addi r5,r8,7632
	ctx.r5.s64 = ctx.r8.s64 + 7632;
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp v6,v13,v12
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v5,v0,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vrsqrtefp v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// vmulfp128 v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lwz r4,32(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v3,v13,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v127,v8,v3
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v3.f32)));
	// vpermwi128 v2,v127,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x9C));
	// vpermwi128 v1,v127,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x78));
	// vmulfp128 v31,v5,v2
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v30,v4,v1
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v1.f32)));
	// vsubfp128 v126,v30,v31
	_mm_store_ps(v126.f32, _mm_sub_ps(_mm_load_ps(v30.f32), _mm_load_ps(v31.f32)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fneg f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lvlx v29,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v29,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v29.u32), 0xFF));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v125,r0,r10
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lfs f13,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// vmaddfp128 v125,v13,v0,v125
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v125.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v125.f32)));
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826728e4
	if (!cr6.gt) goto loc_826728E4;
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r28,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r28.u32);
	// stfs f0,368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// bl 0x82c503f0
	sub_82C503F0(ctx, base);
loc_826728E4:
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50568
	sub_82C50568(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v126,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50568
	sub_82C50568(ctx, base);
	// lbz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x82672a44
	if (!cr6.gt) goto loc_82672A44;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50170
	sub_82C50170(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r27,r11,8976
	r27.s64 = r11.s64 + 8976;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vxor v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50170
	sub_82C50170(ctx, base);
	// lbz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bne cr6,0x82672a44
	if (!cr6.eq) goto loc_82672A44;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50170
	sub_82C50170(ctx, base);
loc_82672A44:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82672b00
	if (!cr6.eq) goto loc_82672B00;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f1,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c50c88
	sub_82C50C88(ctx, base);
loc_82672B00:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v125,r1,r0
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_82672B1C"))) PPC_WEAK_FUNC(sub_82672B1C);
PPC_FUNC_IMPL(__imp__sub_82672B1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82672B20"))) PPC_WEAK_FUNC(sub_82672B20);
PPC_FUNC_IMPL(__imp__sub_82672B20) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,20612
	ctx.r10.s64 = r11.s64 + 20612;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82672b58
	if (cr6.eq) goto loc_82672B58;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82672B58:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82672b90
	if (cr6.eq) goto loc_82672B90;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82672B90:
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

__attribute__((alias("__imp__sub_82672BA8"))) PPC_WEAK_FUNC(sub_82672BA8);
PPC_FUNC_IMPL(__imp__sub_82672BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672BAC"))) PPC_WEAK_FUNC(sub_82672BAC);
PPC_FUNC_IMPL(__imp__sub_82672BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672BB0"))) PPC_WEAK_FUNC(sub_82672BB0);
PPC_FUNC_IMPL(__imp__sub_82672BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672BC0"))) PPC_WEAK_FUNC(sub_82672BC0);
PPC_FUNC_IMPL(__imp__sub_82672BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82672be0
	if (cr6.eq) goto loc_82672BE0;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82672BE0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672BF0"))) PPC_WEAK_FUNC(sub_82672BF0);
PPC_FUNC_IMPL(__imp__sub_82672BF0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82672c0c
	if (cr6.gt) goto loc_82672C0C;
	// li r11,0
	r11.s64 = 0;
loc_82672C0C:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C14"))) PPC_WEAK_FUNC(sub_82672C14);
PPC_FUNC_IMPL(__imp__sub_82672C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672C18"))) PPC_WEAK_FUNC(sub_82672C18);
PPC_FUNC_IMPL(__imp__sub_82672C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C20"))) PPC_WEAK_FUNC(sub_82672C20);
PPC_FUNC_IMPL(__imp__sub_82672C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r10,20684
	ctx.r9.s64 = ctx.r10.s64 + 20684;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r6,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r6.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r5,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r5.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// lfs f0,21036(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
}

__attribute__((alias("__imp__sub_82672C78"))) PPC_WEAK_FUNC(sub_82672C78);
PPC_FUNC_IMPL(__imp__sub_82672C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C7C"))) PPC_WEAK_FUNC(sub_82672C7C);
PPC_FUNC_IMPL(__imp__sub_82672C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672C80"))) PPC_WEAK_FUNC(sub_82672C80);
PPC_FUNC_IMPL(__imp__sub_82672C80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672C90"))) PPC_WEAK_FUNC(sub_82672C90);
PPC_FUNC_IMPL(__imp__sub_82672C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82672cb0
	if (cr6.eq) goto loc_82672CB0;
	// li r11,1
	r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82672CB0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672CC0"))) PPC_WEAK_FUNC(sub_82672CC0);
PPC_FUNC_IMPL(__imp__sub_82672CC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82672ce4
	if (!cr6.gt) goto loc_82672CE4;
	// lfs f13,116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82672ce8
	if (cr6.gt) goto loc_82672CE8;
loc_82672CE4:
	// li r11,0
	r11.s64 = 0;
loc_82672CE8:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672CF0"))) PPC_WEAK_FUNC(sub_82672CF0);
PPC_FUNC_IMPL(__imp__sub_82672CF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672CF8"))) PPC_WEAK_FUNC(sub_82672CF8);
PPC_FUNC_IMPL(__imp__sub_82672CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r10,20756
	ctx.r9.s64 = ctx.r10.s64 + 20756;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r6,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r6.u16);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// sth r5,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r5.u16);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v7,v8,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_setzero_si128());
	// lfs f0,21036(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v7,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,112(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
}

__attribute__((alias("__imp__sub_82672D7C"))) PPC_WEAK_FUNC(sub_82672D7C);
PPC_FUNC_IMPL(__imp__sub_82672D7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672D80"))) PPC_WEAK_FUNC(sub_82672D80);
PPC_FUNC_IMPL(__imp__sub_82672D80) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672D90"))) PPC_WEAK_FUNC(sub_82672D90);
PPC_FUNC_IMPL(__imp__sub_82672D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672DA4"))) PPC_WEAK_FUNC(sub_82672DA4);
PPC_FUNC_IMPL(__imp__sub_82672DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672DA8"))) PPC_WEAK_FUNC(sub_82672DA8);
PPC_FUNC_IMPL(__imp__sub_82672DA8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82672e0c
	if (cr6.eq) goto loc_82672E0C;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82672e10
	if (!cr6.eq) goto loc_82672E10;
loc_82672E0C:
	// li r11,0
	r11.s64 = 0;
loc_82672E10:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82672E30"))) PPC_WEAK_FUNC(sub_82672E30);
PPC_FUNC_IMPL(__imp__sub_82672E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672E34"))) PPC_WEAK_FUNC(sub_82672E34);
PPC_FUNC_IMPL(__imp__sub_82672E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672E38"))) PPC_WEAK_FUNC(sub_82672E38);
PPC_FUNC_IMPL(__imp__sub_82672E38) {
	PPC_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672E40"))) PPC_WEAK_FUNC(sub_82672E40);
PPC_FUNC_IMPL(__imp__sub_82672E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r5,r8,20828
	ctx.r5.s64 = ctx.r8.s64 + 20828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r31,14
	r31.s64 = 14;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// sth r31,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, r31.u16);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stb r6,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r6.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lis r31,-32255
	r31.s64 = -2113863680;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// sth r4,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r4.u16);
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,-25600(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r9,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, ctx.r9.u8);
	// lfs f13,15388(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 15388);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, ctx.r9.u8);
	// lfs f12,-25596(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25596);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82672F08"))) PPC_WEAK_FUNC(sub_82672F08);
PPC_FUNC_IMPL(__imp__sub_82672F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672F0C"))) PPC_WEAK_FUNC(sub_82672F0C);
PPC_FUNC_IMPL(__imp__sub_82672F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82672F10"))) PPC_WEAK_FUNC(sub_82672F10);
PPC_FUNC_IMPL(__imp__sub_82672F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vor v4,v0,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vspltisw v5,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0x0)));
	// li r31,64
	r31.s64 = 64;
	// addi r8,r10,7632
	ctx.r8.s64 = ctx.r10.s64 + 7632;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// li r30,112
	r30.s64 = 112;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v10,v3,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v5,v3
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v2,v13,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lvx128 v31,r0,r6
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vor v30,v31,v31
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v31.u8));
	// vmsum3fp128 v29,v30,v30
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v30.f32), 0xEF));
	// stvx128 v31,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v29
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// vmulfp128 v10,v29,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v5,v29
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v29.f32)));
	// vnmsubfp v9,v10,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v28,v13,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v27,v30,v28
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v28.f32)));
	// stvx128 v27,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r6
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v23,v26,99
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x9C));
	// vpermwi128 v24,v25,135
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v22,v26,135
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x78));
	// vpermwi128 v21,v25,99
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// vmulfp128 v20,v24,v23
	_mm_store_ps(v20.f32, _mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v23.f32)));
	// vmulfp128 v19,v21,v22
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(v22.f32)));
	// vsubfp v18,v19,v20
	_mm_store_ps(v18.f32, _mm_sub_ps(_mm_load_ps(v19.f32), _mm_load_ps(v20.f32)));
	// stvx128 v18,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v17,r0,r5
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor v16,v17,v17
	_mm_store_si128((__m128i*)v16.u8, _mm_load_si128((__m128i*)v17.u8));
	// vmsum3fp128 v15,v16,v16
	_mm_store_ps(v15.f32, _mm_dp_ps(_mm_load_ps(v16.f32), _mm_load_ps(v16.f32), 0xEF));
	// stvx128 v17,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v15
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v15.f32))));
	// vmulfp128 v9,v15,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v8,v5,v15
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v15.f32)));
	// vnmsubfp v10,v9,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v14,v13,0
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v63,v16,v14
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(v14.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r7
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v61,v62,v62
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v62.u8));
	// vmsum3fp128 v60,v61,v61
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v61.f32), 0xEF));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v60.f32))));
	// vmulfp128 v10,v60,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v8,v5,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v60.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v59,v13,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v58,v61,v59
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v59.f32)));
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r7
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v54,v57,99
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x9C));
	// lvx128 v56,r0,r5
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v53,v57,135
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x78));
	// vpermwi128 v55,v56,135
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x78));
	// vpermwi128 v52,v56,99
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x9C));
	// vmulfp128 v51,v55,v54
	_mm_store_ps(v51.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v50,v52,v53
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v53.f32)));
	// vsubfp128 v49,v50,v51
	_mm_store_ps(v49.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v51.f32)));
	// stvx128 v49,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_826730B4"))) PPC_WEAK_FUNC(sub_826730B4);
PPC_FUNC_IMPL(__imp__sub_826730B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826730B8"))) PPC_WEAK_FUNC(sub_826730B8);
PPC_FUNC_IMPL(__imp__sub_826730B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826730f8
	if (!cr6.lt) goto loc_826730F8;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826730F8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82673104
	if (!cr6.lt) goto loc_82673104;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82673104:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// vmsum3fp128 v7,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// vpermwi128 v2,v12,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// addi r31,r1,-48
	r31.s64 = ctx.r1.s64 + -48;
	// lfsx f0,r9,r6
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	f0.f64 = double(temp.f32);
	// addi r30,r1,-48
	r30.s64 = ctx.r1.s64 + -48;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f13,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// vmsum3fp128 v5,v6,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stfsx f12,r7,r31
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, temp.u32);
	// addi r7,r8,7520
	ctx.r7.s64 = ctx.r8.s64 + 7520;
	// lvx128 v8,r0,r30
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v4,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vmrghw v3,v5,v0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vrsqrtefp v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// addi r9,r10,7632
	ctx.r9.s64 = ctx.r10.s64 + 7632;
	// vpermwi128 v1,v12,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// li r31,32
	r31.s64 = 32;
	// li r30,48
	r30.s64 = 48;
	// li r29,64
	r29.s64 = 64;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp v5,v9,v4
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v10,v4,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v31,r0,r10
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v30,v31,v12
	_mm_store_ps(v30.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v6,v10,v11,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw v29,v7,v30
	_mm_store_si128((__m128i*)v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v28,v29,v3
	_mm_store_si128((__m128i*)v28.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)v29.u32)));
	// stvx128 v28,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v26,r0,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r0,r10
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v24,v13,0
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v23,v8,v24
	_mm_store_ps(v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v24.f32)));
	// vmsum3fp128 v22,v25,v23
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(v23.f32), 0xEF));
	// vpermwi128 v21,v23,99
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v23.u32), 0x9C));
	// vmsum3fp128 v20,v27,v23
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v23.f32), 0xEF));
	// vmrghw v19,v22,v7
	_mm_store_si128((__m128i*)v19.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)v22.u32)));
	// vmsum3fp128 v18,v26,v23
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(v23.f32), 0xEF));
	// vpermwi128 v17,v23,135
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v23.u32), 0x78));
	// vmulfp128 v16,v2,v21
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v21.f32)));
	// vmulfp128 v15,v1,v17
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v17.f32)));
	// vmrghw v14,v18,v20
	_mm_store_si128((__m128i*)v14.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v20.u32), _mm_load_si128((__m128i*)v18.u32)));
	// vsubfp128 v63,v15,v16
	_mm_store_ps(v63.f32, _mm_sub_ps(_mm_load_ps(v15.f32), _mm_load_ps(v16.f32)));
	// vmrghw128 v62,v14,v19
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v19.u32), _mm_load_si128((__m128i*)v14.u32)));
	// stvx128 v62,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r11
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,96
	r11.s64 = 96;
	// lvx128 v61,r0,r10
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v55,v60,v63
	_mm_store_ps(v55.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v63.f32), 0xEF));
	// vmsum3fp128 v58,v59,v63
	_mm_store_ps(v58.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32), 0xEF));
	// li r4,80
	ctx.r4.s64 = 80;
	// vmsum3fp128 v57,v61,v63
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32), 0xEF));
	// vmrghw128 v56,v58,v0
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrghw128 v54,v55,v57
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vmrghw128 v53,v54,v56
	_mm_store_si128((__m128i*)v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v56.u32), _mm_load_si128((__m128i*)v54.u32)));
	// li r10,112
	ctx.r10.s64 = 112;
	// stvx128 v53,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v51,r0,r9
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v49,r0,r8
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r0,r6
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r0,r5
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v46,v52,v50
	_mm_store_ps(v46.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(v50.f32), 0xEF));
	// vmsum3fp128 v48,v49,v50
	_mm_store_ps(v48.f32, _mm_dp_ps(_mm_load_ps(v49.f32), _mm_load_ps(v50.f32), 0xEF));
	// vmsum3fp128 v47,v51,v50
	_mm_store_ps(v47.f32, _mm_dp_ps(_mm_load_ps(v51.f32), _mm_load_ps(v50.f32), 0xEF));
	// vmrghw128 v44,v46,v48
	_mm_store_si128((__m128i*)v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v46.u32)));
	// vmrghw128 v45,v47,v0
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v47.u32)));
	// vmrghw128 v43,v44,v45
	_mm_store_si128((__m128i*)v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v44.u32)));
	// stvx128 v43,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r8
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r0,r5
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r0,r9
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v37,v42,v23
	_mm_store_ps(v37.f32, _mm_dp_ps(_mm_load_ps(v42.f32), _mm_load_ps(v23.f32), 0xEF));
	// vmsum3fp128 v39,v40,v23
	_mm_store_ps(v39.f32, _mm_dp_ps(_mm_load_ps(v40.f32), _mm_load_ps(v23.f32), 0xEF));
	// vmrghw128 v35,v37,v0
	_mm_store_si128((__m128i*)v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v37.u32)));
	// vmsum3fp128 v38,v41,v23
	_mm_store_ps(v38.f32, _mm_dp_ps(_mm_load_ps(v41.f32), _mm_load_ps(v23.f32), 0xEF));
	// vmrghw128 v36,v39,v38
	_mm_store_si128((__m128i*)v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v38.u32), _mm_load_si128((__m128i*)v39.u32)));
	// vmrghw128 v34,v36,v35
	_mm_store_si128((__m128i*)v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v35.u32), _mm_load_si128((__m128i*)v36.u32)));
	// stvx128 v34,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v32,r0,r8
	simd::store_shuffled(v32, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v33,r0,r9
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v33,v63
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(v33.f32), _mm_load_ps(v63.f32), 0xEF));
	// vmsum3fp128 v12,v13,v63
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v63.f32), 0xEF));
	// vmrghw v8,v10,v0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmsum3fp128 v11,v32,v63
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v32.f32), _mm_load_ps(v63.f32), 0xEF));
	// vmrghw v9,v12,v11
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v7,v9,v8
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// stvx128 v7,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826732DC"))) PPC_WEAK_FUNC(sub_826732DC);
PPC_FUNC_IMPL(__imp__sub_826732DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826732E0"))) PPC_WEAK_FUNC(sub_826732E0);
PPC_FUNC_IMPL(__imp__sub_826732E0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,172
	ctx.r4.s64 = 172;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826732F0"))) PPC_WEAK_FUNC(sub_826732F0);
PPC_FUNC_IMPL(__imp__sub_826732F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673304"))) PPC_WEAK_FUNC(sub_82673304);
PPC_FUNC_IMPL(__imp__sub_82673304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673308"))) PPC_WEAK_FUNC(sub_82673308);
PPC_FUNC_IMPL(__imp__sub_82673308) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsb r7,r11
	ctx.r7.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82673384
	if (cr6.eq) goto loc_82673384;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82673388
	if (!cr6.eq) goto loc_82673388;
loc_82673384:
	// li r11,0
	r11.s64 = 0;
loc_82673388:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826733b0
	if (cr6.eq) goto loc_826733B0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f13,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19328);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x826733b4
	if (cr6.eq) goto loc_826733B4;
loc_826733B0:
	// li r11,0
	r11.s64 = 0;
loc_826733B4:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826733dc
	if (cr6.eq) goto loc_826733DC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x826733e0
	if (!cr6.lt) goto loc_826733E0;
loc_826733DC:
	// li r11,0
	r11.s64 = 0;
loc_826733E0:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82673408
	if (cr6.eq) goto loc_82673408;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8267340c
	if (cr6.lt) goto loc_8267340C;
loc_82673408:
	// li r11,0
	r11.s64 = 0;
loc_8267340C:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82673430
	if (cr6.eq) goto loc_82673430;
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82673434
	if (!cr6.gt) goto loc_82673434;
loc_82673430:
	// li r11,0
	r11.s64 = 0;
loc_82673434:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82673458
	if (cr6.eq) goto loc_82673458;
	// lfs f0,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 136);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,140(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8267345c
	if (!cr6.gt) goto loc_8267345C;
loc_82673458:
	// li r11,0
	r11.s64 = 0;
loc_8267345C:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8267347C"))) PPC_WEAK_FUNC(sub_8267347C);
PPC_FUNC_IMPL(__imp__sub_8267347C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673480"))) PPC_WEAK_FUNC(sub_82673480);
PPC_FUNC_IMPL(__imp__sub_82673480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r8,r9,4,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF0;
	// stb r8,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r8.u8);
}

__attribute__((alias("__imp__sub_82673494"))) PPC_WEAK_FUNC(sub_82673494);
PPC_FUNC_IMPL(__imp__sub_82673494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673498"))) PPC_WEAK_FUNC(sub_82673498);
PPC_FUNC_IMPL(__imp__sub_82673498) {
	PPC_FUNC_PROLOGUE();
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826734A0"))) PPC_WEAK_FUNC(sub_826734A0);
PPC_FUNC_IMPL(__imp__sub_826734A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9414
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r5,r6,20900
	ctx.r5.s64 = ctx.r6.s64 + 20900;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// sth r5,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r5.u16);
	// stb r10,130(r3)
	PPC_STORE_U8(ctx.r3.u32 + 130, ctx.r10.u8);
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// sth r9,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r9.u16);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r10,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r10.u8);
	// stb r11,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, r11.u8);
	// lis r31,-32250
	r31.s64 = -2113536000;
	// sth r9,168(r3)
	PPC_STORE_U16(ctx.r3.u32 + 168, ctx.r9.u16);
	// lis r30,-32250
	r30.s64 = -2113536000;
	// stb r10,170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 170, ctx.r10.u8);
	// lis r29,-32251
	r29.s64 = -2113601536;
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, r11.u8);
	// lis r28,-32250
	r28.s64 = -2113536000;
	// lis r27,-32250
	r27.s64 = -2113536000;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r8,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// lfs f0,-25600(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r11,131(r3)
	PPC_STORE_U8(ctx.r3.u32 + 131, r11.u8);
	// lfs f13,-23368(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23368);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, ctx.r10.u8);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r11,151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 151, r11.u8);
	// stfs f0,160(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r11,152(r3)
	PPC_STORE_U8(ctx.r3.u32 + 152, r11.u8);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stb r11,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, r11.u8);
	// stfs f13,184(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stb r9,154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 154, ctx.r9.u8);
	// lfs f12,10680(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 10680);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, r11.u8);
	// lfs f11,10676(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 10676);
	ctx.f11.f64 = double(temp.f32);
	// stb r10,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r10.u8);
	// lfs f10,-19328(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -19328);
	ctx.f10.f64 = double(temp.f32);
	// stb r10,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r10.u8);
	// lfs f0,10672(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 10672);
	f0.f64 = double(temp.f32);
	// lfs f13,10668(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 10668);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f11,140(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f10,156(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,176(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stfs f13,180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
}

__attribute__((alias("__imp__sub_826735CC"))) PPC_WEAK_FUNC(sub_826735CC);
PPC_FUNC_IMPL(__imp__sub_826735CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826735D0"))) PPC_WEAK_FUNC(sub_826735D0);
PPC_FUNC_IMPL(__imp__sub_826735D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lvx128 v4,r0,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// addi r6,r10,7632
	ctx.r6.s64 = ctx.r10.s64 + 7632;
	// vspltisw v2,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r9,r3,80
	ctx.r9.s64 = ctx.r3.s64 + 80;
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v9,v3,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v5,v2,v3
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v6,v9,v10,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v2,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw v1,v13,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v31,v4,v1
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r4
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vor v29,v30,v30
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)v30.u8));
	// vmsum3fp128 v28,v29,v29
	_mm_store_ps(v28.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(v29.f32), 0xEF));
	// stvx128 v30,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v28
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v28.f32))));
	// vmulfp128 v9,v28,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v2,v28
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v28.f32)));
	// vnmsubfp v8,v9,v10,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v2,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw v27,v13,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v26,v29,v27
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v27.f32)));
	// vor v25,v26,v26
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)v26.u8));
	// stvx128 v26,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r0,r11
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v23,v24,135
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x78));
	// vpermwi128 v22,v25,99
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// vpermwi128 v21,v25,135
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v20,v24,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v24.u32), 0x9C));
	// vmulfp128 v19,v23,v22
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v22.f32)));
	// vmulfp128 v18,v20,v21
	_mm_store_ps(v18.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)));
	// vsubfp v17,v18,v19
	_mm_store_ps(v17.f32, _mm_sub_ps(_mm_load_ps(v18.f32), _mm_load_ps(v19.f32)));
	// stvx128 v17,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r9,16
	r11.s64 = ctx.r9.s64 + 16;
	// lvx128 v16,r0,r7
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v15,v16,v16
	_mm_store_ps(v15.f32, _mm_dp_ps(_mm_load_ps(v16.f32), _mm_load_ps(v16.f32), 0xEF));
	// vrsqrtefp v0,v15
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v15.f32))));
	// stvx128 v16,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v14,v15,v13
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v8,v2,v15
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v15.f32)));
	// vnmsubfp v9,v14,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v14,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v2,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw128 v63,v13,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v62,v16,v63
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r5
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v60,v61,v61
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v61.u8));
	// vmsum3fp128 v59,v60,v60
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v60.f32), 0xEF));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v59
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v59.f32))));
	// vmulfp128 v10,v59,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v8,v2,v59
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v59.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v2,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw128 v58,v13,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v57,v60,v58
	_mm_store_ps(v57.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v58.f32)));
	// vor128 v55,v57,v57
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)v57.u8));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r9
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v53,v56,135
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x78));
	// vpermwi128 v54,v55,99
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x9C));
	// vpermwi128 v52,v55,135
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x78));
	// vpermwi128 v51,v56,99
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x9C));
	// vmulfp128 v50,v53,v54
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v54.f32)));
	// vmulfp128 v49,v51,v52
	_mm_store_ps(v49.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v52.f32)));
	// vsubfp128 v48,v49,v50
	_mm_store_ps(v48.f32, _mm_sub_ps(_mm_load_ps(v49.f32), _mm_load_ps(v50.f32)));
	// stvx128 v48,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267375C"))) PPC_WEAK_FUNC(sub_8267375C);
PPC_FUNC_IMPL(__imp__sub_8267375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673760"))) PPC_WEAK_FUNC(sub_82673760);
PPC_FUNC_IMPL(__imp__sub_82673760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673788"))) PPC_WEAK_FUNC(sub_82673788);
PPC_FUNC_IMPL(__imp__sub_82673788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826737B0"))) PPC_WEAK_FUNC(sub_826737B0);
PPC_FUNC_IMPL(__imp__sub_826737B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lvx128 v28,r0,r6
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v27,r0,r7
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v26,v28,v28
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(v28.f32), _mm_load_ps(v28.f32), 0xEF));
	// vmsum3fp128 v25,v27,v27
	_mm_store_ps(v25.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v27.f32), 0xEF));
	// addi r10,r11,7632
	ctx.r10.s64 = r11.s64 + 7632;
	// vspltisw v24,0
	_mm_store_si128((__m128i*)v24.u32, _mm_set1_epi32(int(0x0)));
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lvx128 v31,r0,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// addi r30,r1,-48
	r30.s64 = ctx.r1.s64 + -48;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r6,16
	ctx.r6.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// lvx128 v30,r4,r6
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r4,r8
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v13,v26
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v26.f32))));
	// vrsqrtefp v12,v25
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v25.f32))));
	// vmulfp128 v5,v26,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v4,v25,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v2,v24,v26
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(v24.f32), _mm_load_ps(v26.f32)));
	// vcmpeqfp v3,v24,v25
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v12,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v1,v5,v8,v0
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v9,v4,v6,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v1,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v7,v5,v8,v0
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v4,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v12,v13,v24,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)v24.u8))));
	// vsel v13,v0,v24,v3
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)v24.u8))));
	// vspltw v23,v12,0
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v22,v13,0
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v28,v23
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v23.f32)));
	// vmulfp128 v13,v27,v22
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v22.f32)));
	// vpermwi128 v21,v0,135
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v20,v13,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// stvx128 v13,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v19,v13,135
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v18,v0,99
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v17,v21,v20
	_mm_store_ps(v17.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(v20.f32)));
	// vmulfp128 v16,v18,v19
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v19.f32)));
	// vsubfp v15,v16,v17
	_mm_store_ps(v15.f32, _mm_sub_ps(_mm_load_ps(v16.f32), _mm_load_ps(v17.f32)));
	// stvx128 v15,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r9,7520
	ctx.r7.s64 = ctx.r9.s64 + 7520;
loc_82673898:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v12,v30,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v29,v13
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v10,v31,v13
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmrghw v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v8,v10,v11
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v7,v8,v9
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82673898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82673898;
	// li r9,3
	ctx.r9.s64 = 3;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r5,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v11,r5,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826738E4:
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v11,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v7,v13,v10
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x826738e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826738E4;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8267391C"))) PPC_WEAK_FUNC(sub_8267391C);
PPC_FUNC_IMPL(__imp__sub_8267391C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673920"))) PPC_WEAK_FUNC(sub_82673920);
PPC_FUNC_IMPL(__imp__sub_82673920) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673924"))) PPC_WEAK_FUNC(sub_82673924);
PPC_FUNC_IMPL(__imp__sub_82673924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673928"))) PPC_WEAK_FUNC(sub_82673928);
PPC_FUNC_IMPL(__imp__sub_82673928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10924
	ctx.r3.s64 = r11.s64 + -10924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673934"))) PPC_WEAK_FUNC(sub_82673934);
PPC_FUNC_IMPL(__imp__sub_82673934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673938"))) PPC_WEAK_FUNC(sub_82673938);
PPC_FUNC_IMPL(__imp__sub_82673938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267393C"))) PPC_WEAK_FUNC(sub_8267393C);
PPC_FUNC_IMPL(__imp__sub_8267393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673940"))) PPC_WEAK_FUNC(sub_82673940);
PPC_FUNC_IMPL(__imp__sub_82673940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10876
	ctx.r3.s64 = r11.s64 + -10876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267394C"))) PPC_WEAK_FUNC(sub_8267394C);
PPC_FUNC_IMPL(__imp__sub_8267394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673950"))) PPC_WEAK_FUNC(sub_82673950);
PPC_FUNC_IMPL(__imp__sub_82673950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673954"))) PPC_WEAK_FUNC(sub_82673954);
PPC_FUNC_IMPL(__imp__sub_82673954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673958"))) PPC_WEAK_FUNC(sub_82673958);
PPC_FUNC_IMPL(__imp__sub_82673958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8267396C"))) PPC_WEAK_FUNC(sub_8267396C);
PPC_FUNC_IMPL(__imp__sub_8267396C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673970"))) PPC_WEAK_FUNC(sub_82673970);
PPC_FUNC_IMPL(__imp__sub_82673970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10828
	ctx.r3.s64 = r11.s64 + -10828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267397C"))) PPC_WEAK_FUNC(sub_8267397C);
PPC_FUNC_IMPL(__imp__sub_8267397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673980"))) PPC_WEAK_FUNC(sub_82673980);
PPC_FUNC_IMPL(__imp__sub_82673980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82673994"))) PPC_WEAK_FUNC(sub_82673994);
PPC_FUNC_IMPL(__imp__sub_82673994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673998"))) PPC_WEAK_FUNC(sub_82673998);
PPC_FUNC_IMPL(__imp__sub_82673998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10780
	ctx.r3.s64 = r11.s64 + -10780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826739A4"))) PPC_WEAK_FUNC(sub_826739A4);
PPC_FUNC_IMPL(__imp__sub_826739A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826739A8"))) PPC_WEAK_FUNC(sub_826739A8);
PPC_FUNC_IMPL(__imp__sub_826739A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r10,r11,10460
	ctx.r10.s64 = r11.s64 + 10460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826739dc
	if (cr6.eq) goto loc_826739DC;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_826739DC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,10692
	ctx.r10.s64 = r11.s64 + 10692;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826739EC"))) PPC_WEAK_FUNC(sub_826739EC);
PPC_FUNC_IMPL(__imp__sub_826739EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826739F0"))) PPC_WEAK_FUNC(sub_826739F0);
PPC_FUNC_IMPL(__imp__sub_826739F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,10692
	ctx.r3.s64 = r11.s64 + 10692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826739FC"))) PPC_WEAK_FUNC(sub_826739FC);
PPC_FUNC_IMPL(__imp__sub_826739FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A00"))) PPC_WEAK_FUNC(sub_82673A00);
PPC_FUNC_IMPL(__imp__sub_82673A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r10,r11,10460
	ctx.r10.s64 = r11.s64 + 10460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82673a34
	if (cr6.eq) goto loc_82673A34;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82673A34:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,10812
	ctx.r10.s64 = r11.s64 + 10812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A44"))) PPC_WEAK_FUNC(sub_82673A44);
PPC_FUNC_IMPL(__imp__sub_82673A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A48"))) PPC_WEAK_FUNC(sub_82673A48);
PPC_FUNC_IMPL(__imp__sub_82673A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,10812
	ctx.r3.s64 = r11.s64 + 10812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A54"))) PPC_WEAK_FUNC(sub_82673A54);
PPC_FUNC_IMPL(__imp__sub_82673A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A58"))) PPC_WEAK_FUNC(sub_82673A58);
PPC_FUNC_IMPL(__imp__sub_82673A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A5C"))) PPC_WEAK_FUNC(sub_82673A5C);
PPC_FUNC_IMPL(__imp__sub_82673A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A60"))) PPC_WEAK_FUNC(sub_82673A60);
PPC_FUNC_IMPL(__imp__sub_82673A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10732
	ctx.r3.s64 = r11.s64 + -10732;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A6C"))) PPC_WEAK_FUNC(sub_82673A6C);
PPC_FUNC_IMPL(__imp__sub_82673A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A70"))) PPC_WEAK_FUNC(sub_82673A70);
PPC_FUNC_IMPL(__imp__sub_82673A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82673A84"))) PPC_WEAK_FUNC(sub_82673A84);
PPC_FUNC_IMPL(__imp__sub_82673A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A88"))) PPC_WEAK_FUNC(sub_82673A88);
PPC_FUNC_IMPL(__imp__sub_82673A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10684
	ctx.r3.s64 = r11.s64 + -10684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673A94"))) PPC_WEAK_FUNC(sub_82673A94);
PPC_FUNC_IMPL(__imp__sub_82673A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673A98"))) PPC_WEAK_FUNC(sub_82673A98);
PPC_FUNC_IMPL(__imp__sub_82673A98) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82673ae4
	if (cr6.eq) goto loc_82673AE4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,10568
	ctx.r9.s64 = ctx.r10.s64 + 10568;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// sth r8,38(r31)
	PPC_STORE_U16(r31.u32 + 38, ctx.r8.u16);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r7,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r7.u32);
loc_82673AE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82673AF4"))) PPC_WEAK_FUNC(sub_82673AF4);
PPC_FUNC_IMPL(__imp__sub_82673AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673AF8"))) PPC_WEAK_FUNC(sub_82673AF8);
PPC_FUNC_IMPL(__imp__sub_82673AF8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,10568
	ctx.r10.s64 = r11.s64 + 10568;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// sth r4,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r4.u16);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// sth r9,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r9.u16);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82673B3C"))) PPC_WEAK_FUNC(sub_82673B3C);
PPC_FUNC_IMPL(__imp__sub_82673B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B40"))) PPC_WEAK_FUNC(sub_82673B40);
PPC_FUNC_IMPL(__imp__sub_82673B40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B44"))) PPC_WEAK_FUNC(sub_82673B44);
PPC_FUNC_IMPL(__imp__sub_82673B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B48"))) PPC_WEAK_FUNC(sub_82673B48);
PPC_FUNC_IMPL(__imp__sub_82673B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10620
	ctx.r3.s64 = r11.s64 + -10620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B54"))) PPC_WEAK_FUNC(sub_82673B54);
PPC_FUNC_IMPL(__imp__sub_82673B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B58"))) PPC_WEAK_FUNC(sub_82673B58);
PPC_FUNC_IMPL(__imp__sub_82673B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B5C"))) PPC_WEAK_FUNC(sub_82673B5C);
PPC_FUNC_IMPL(__imp__sub_82673B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B60"))) PPC_WEAK_FUNC(sub_82673B60);
PPC_FUNC_IMPL(__imp__sub_82673B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B64"))) PPC_WEAK_FUNC(sub_82673B64);
PPC_FUNC_IMPL(__imp__sub_82673B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B68"))) PPC_WEAK_FUNC(sub_82673B68);
PPC_FUNC_IMPL(__imp__sub_82673B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10524
	ctx.r3.s64 = r11.s64 + -10524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B74"))) PPC_WEAK_FUNC(sub_82673B74);
PPC_FUNC_IMPL(__imp__sub_82673B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B78"))) PPC_WEAK_FUNC(sub_82673B78);
PPC_FUNC_IMPL(__imp__sub_82673B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B7C"))) PPC_WEAK_FUNC(sub_82673B7C);
PPC_FUNC_IMPL(__imp__sub_82673B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B80"))) PPC_WEAK_FUNC(sub_82673B80);
PPC_FUNC_IMPL(__imp__sub_82673B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10476
	ctx.r3.s64 = r11.s64 + -10476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B8C"))) PPC_WEAK_FUNC(sub_82673B8C);
PPC_FUNC_IMPL(__imp__sub_82673B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B90"))) PPC_WEAK_FUNC(sub_82673B90);
PPC_FUNC_IMPL(__imp__sub_82673B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B94"))) PPC_WEAK_FUNC(sub_82673B94);
PPC_FUNC_IMPL(__imp__sub_82673B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673B98"))) PPC_WEAK_FUNC(sub_82673B98);
PPC_FUNC_IMPL(__imp__sub_82673B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10428
	ctx.r3.s64 = r11.s64 + -10428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BA4"))) PPC_WEAK_FUNC(sub_82673BA4);
PPC_FUNC_IMPL(__imp__sub_82673BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BA8"))) PPC_WEAK_FUNC(sub_82673BA8);
PPC_FUNC_IMPL(__imp__sub_82673BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82658518
	sub_82658518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673BB4"))) PPC_WEAK_FUNC(sub_82673BB4);
PPC_FUNC_IMPL(__imp__sub_82673BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BB8"))) PPC_WEAK_FUNC(sub_82673BB8);
PPC_FUNC_IMPL(__imp__sub_82673BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BBC"))) PPC_WEAK_FUNC(sub_82673BBC);
PPC_FUNC_IMPL(__imp__sub_82673BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BC0"))) PPC_WEAK_FUNC(sub_82673BC0);
PPC_FUNC_IMPL(__imp__sub_82673BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10380
	ctx.r3.s64 = r11.s64 + -10380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BCC"))) PPC_WEAK_FUNC(sub_82673BCC);
PPC_FUNC_IMPL(__imp__sub_82673BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BD0"))) PPC_WEAK_FUNC(sub_82673BD0);
PPC_FUNC_IMPL(__imp__sub_82673BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BD4"))) PPC_WEAK_FUNC(sub_82673BD4);
PPC_FUNC_IMPL(__imp__sub_82673BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BD8"))) PPC_WEAK_FUNC(sub_82673BD8);
PPC_FUNC_IMPL(__imp__sub_82673BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10332
	ctx.r3.s64 = r11.s64 + -10332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BE4"))) PPC_WEAK_FUNC(sub_82673BE4);
PPC_FUNC_IMPL(__imp__sub_82673BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BE8"))) PPC_WEAK_FUNC(sub_82673BE8);
PPC_FUNC_IMPL(__imp__sub_82673BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BEC"))) PPC_WEAK_FUNC(sub_82673BEC);
PPC_FUNC_IMPL(__imp__sub_82673BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673BF0"))) PPC_WEAK_FUNC(sub_82673BF0);
PPC_FUNC_IMPL(__imp__sub_82673BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10284
	ctx.r3.s64 = r11.s64 + -10284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673BFC"))) PPC_WEAK_FUNC(sub_82673BFC);
PPC_FUNC_IMPL(__imp__sub_82673BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C00"))) PPC_WEAK_FUNC(sub_82673C00);
PPC_FUNC_IMPL(__imp__sub_82673C00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C04"))) PPC_WEAK_FUNC(sub_82673C04);
PPC_FUNC_IMPL(__imp__sub_82673C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C08"))) PPC_WEAK_FUNC(sub_82673C08);
PPC_FUNC_IMPL(__imp__sub_82673C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10236
	ctx.r3.s64 = r11.s64 + -10236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C14"))) PPC_WEAK_FUNC(sub_82673C14);
PPC_FUNC_IMPL(__imp__sub_82673C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C18"))) PPC_WEAK_FUNC(sub_82673C18);
PPC_FUNC_IMPL(__imp__sub_82673C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C1C"))) PPC_WEAK_FUNC(sub_82673C1C);
PPC_FUNC_IMPL(__imp__sub_82673C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C20"))) PPC_WEAK_FUNC(sub_82673C20);
PPC_FUNC_IMPL(__imp__sub_82673C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10188
	ctx.r3.s64 = r11.s64 + -10188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C2C"))) PPC_WEAK_FUNC(sub_82673C2C);
PPC_FUNC_IMPL(__imp__sub_82673C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C30"))) PPC_WEAK_FUNC(sub_82673C30);
PPC_FUNC_IMPL(__imp__sub_82673C30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C34"))) PPC_WEAK_FUNC(sub_82673C34);
PPC_FUNC_IMPL(__imp__sub_82673C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82673C38"))) PPC_WEAK_FUNC(sub_82673C38);
PPC_FUNC_IMPL(__imp__sub_82673C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-10140
	ctx.r3.s64 = r11.s64 + -10140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673C44"))) PPC_WEAK_FUNC(sub_82673C44);
PPC_FUNC_IMPL(__imp__sub_82673C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

