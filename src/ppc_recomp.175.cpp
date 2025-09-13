#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825F1020"))) PPC_WEAK_FUNC(sub_825F1020);
PPC_FUNC_IMPL(__imp__sub_825F1020) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// bl 0x8314d26c
	__imp__VdQueryVideoMode(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r29,104(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// bne cr6,0x825f1088
	if (!cr6.eq) goto loc_825F1088;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825f1088
	if (!cr6.eq) goto loc_825F1088;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_825F1088:
	// lwz r20,404(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r23,r27,16,16,31
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF;
	// lwz r17,21960(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + 21960);
	// rlwinm r18,r31,16,16,31
	r18.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lwz r15,21956(r25)
	r15.u64 = PPC_LOAD_U32(r25.u32 + 21956);
	// clrlwi r16,r31,16
	r16.u64 = r31.u32 & 0xFFFF;
	// rlwinm r28,r30,16,16,31
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// clrlwi r24,r30,16
	r24.u64 = r30.u32 & 0xFFFF;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// clrlwi r27,r27,16
	r27.u64 = r27.u32 & 0xFFFF;
	// rlwinm r22,r26,16,16,31
	r22.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF;
	// clrlwi r21,r26,16
	r21.u64 = r26.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825f10e4
	if (!cr6.eq) goto loc_825F10E4;
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// bne cr6,0x825f10d0
	if (!cr6.eq) goto loc_825F10D0;
	// li r11,7
	r11.s64 = 7;
	// b 0x825f10e0
	goto loc_825F10E0;
loc_825F10D0:
	// subfc r11,r22,r28
	xer.ca = r28.u32 >= r22.u32;
	r11.s64 = r28.s64 - r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
loc_825F10E0:
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_825F10E4:
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825f1128
	if (!cr6.eq) goto loc_825F1128;
	// divwu r11,r21,r9
	r11.u32 = r21.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bne cr6,0x825f1114
	if (!cr6.eq) goto loc_825F1114;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// b 0x825f1124
	goto loc_825F1124;
loc_825F1114:
	// subfc r11,r11,r24
	xer.ca = r24.u32 >= r11.u32;
	r11.s64 = r24.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
loc_825F1124:
	// stw r11,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r11.u32);
loc_825F1128:
	// clrldi r11,r22,32
	r11.u64 = r22.u64 & 0xFFFFFFFF;
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfs f11,15536(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15536);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,11296(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11296);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fcmpu cr6,f29,f11
	cr6.compare(f29.f64, ctx.f11.f64);
	// blt cr6,0x825f1178
	if (cr6.lt) goto loc_825F1178;
	// fcmpu cr6,f29,f10
	cr6.compare(f29.f64, ctx.f10.f64);
	// bgt cr6,0x825f1178
	if (cr6.gt) goto loc_825F1178;
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
loc_825F1178:
	// clrldi r11,r24,32
	r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lwz r10,13992(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 13992);
	// clrldi r8,r21,32
	ctx.r8.u64 = r21.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// clrldi r11,r9,32
	r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f30,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f30.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f12,2992(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2992);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fdivs f31,f9,f13
	f31.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// beq 0x825f1224
	if (cr0.eq) goto loc_825F1224;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,-1136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1136);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f30
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64 + f30.f64));
	// lfs f0,11288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11288);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r24
	ctx.r10.s64 = r24.s64 - r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_825F1224:
	// fcmpu cr6,f31,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f11.f64);
	// blt cr6,0x825f123c
	if (cr6.lt) goto loc_825F123C;
	// fcmpu cr6,f31,f10
	cr6.compare(f31.f64, ctx.f10.f64);
	// bgt cr6,0x825f123c
	if (cr6.gt) goto loc_825F123C;
	// fmr f31,f11
	f31.f64 = ctx.f11.f64;
	// b 0x825f1280
	goto loc_825F1280;
loc_825F123C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x825f1264
	if (cr6.lt) goto loc_825F1264;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,11280(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 11280);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x825f1264
	if (cr6.gt) goto loc_825F1264;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x825f1280
	goto loc_825F1280;
loc_825F1264:
	// fcmpu cr6,f31,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f12.f64);
	// blt cr6,0x825f1280
	if (cr6.lt) goto loc_825F1280;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,11248(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 11248);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x825f1280
	if (cr6.gt) goto loc_825F1280;
	// fmr f31,f12
	f31.f64 = ctx.f12.f64;
loc_825F1280:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// lwz r11,1820(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1820);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// divwu r11,r10,r9
	r11.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r26,r11,1,0,30
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(r26.u32, 10, xer);
	// ble cr6,0x825f12a8
	if (!cr6.gt) goto loc_825F12A8;
	// li r26,10
	r26.s64 = 10;
loc_825F12A8:
	// li r11,7680
	r11.s64 = 7680;
	// twllei r28,0
	if (r28.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r28
	r11.u32 = r11.u32 / r28.u32;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// li r11,6
	r11.s64 = 6;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// bgt cr6,0x825f12c8
	if (cr6.gt) goto loc_825F12C8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825F12C8:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f131c
	if (!cr6.lt) goto loc_825F131C;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// ble cr6,0x825f132c
	if (!cr6.gt) goto loc_825F132C;
	// li r30,6
	r30.s64 = 6;
	// b 0x825f132c
	goto loc_825F132C;
loc_825F131C:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825F132C:
	// lwz r31,420(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,0(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,396(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r30,r31,652
	r30.s64 = r31.s64 + 652;
	// bl 0x825f0d40
	sub_825F0D40(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,412(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x825f0d40
	sub_825F0D40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1348(r31)
	PPC_STORE_U32(r31.u32 + 1348, r11.u32);
	// addi r9,r28,3
	ctx.r9.s64 = r28.s64 + 3;
	// stw r10,1360(r31)
	PPC_STORE_U32(r31.u32 + 1360, ctx.r10.u32);
	// clrlwi r8,r19,16
	ctx.r8.u64 = r19.u32 & 0xFFFF;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r28,16,4,15
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFF0000;
	// clrlwi r4,r24,20
	ctx.r4.u64 = r24.u32 & 0xFFF;
	// clrlwi r30,r16,20
	r30.u64 = r16.u32 & 0xFFF;
	// rlwinm r3,r18,16,4,15
	ctx.r3.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0xFFF0000;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// rlwinm r30,r8,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r4,r10,22
	ctx.r4.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r9,r19,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFFFF;
	// subf r7,r21,r15
	ctx.r7.s64 = r15.s64 - r21.s64;
	// subf r6,r22,r17
	ctx.r6.s64 = r17.s64 - r22.s64;
	// subf r7,r27,r7
	ctx.r7.s64 = ctx.r7.s64 - r27.s64;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r6,r23,r6
	ctx.r6.s64 = ctx.r6.s64 - r23.s64;
	// rlwinm r28,r9,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// clrlwi r7,r7,20
	ctx.r7.u64 = ctx.r7.u32 & 0xFFF;
	// stw r5,1356(r31)
	PPC_STORE_U32(r31.u32 + 1356, ctx.r5.u32);
	// clrlwi r27,r27,20
	r27.u64 = r27.u32 & 0xFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r4,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r4.u32);
	// clrlwi r5,r23,20
	ctx.r5.u64 = r23.u32 & 0xFFF;
	// stw r3,1352(r31)
	PPC_STORE_U32(r31.u32 + 1352, ctx.r3.u32);
	// rlwimi r26,r8,8,20,23
	r26.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xF00) | (r26.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,1332(r31)
	PPC_STORE_U32(r31.u32 + 1332, r11.u32);
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
	// stw r11,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r11.u32);
	// andi. r8,r26,3847
	ctx.r8.u64 = r26.u64 & 3847;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r28,1340(r31)
	PPC_STORE_U32(r31.u32 + 1340, r28.u32);
	// stw r8,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, ctx.r8.u32);
	// cntlzw r4,r29
	ctx.r4.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r30,1344(r31)
	PPC_STORE_U32(r31.u32 + 1344, r30.u32);
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// stw r28,1320(r31)
	PPC_STORE_U32(r31.u32 + 1320, r28.u32);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r27,1304(r31)
	PPC_STORE_U32(r31.u32 + 1304, r27.u32);
	// stw r7,1308(r31)
	PPC_STORE_U32(r31.u32 + 1308, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r5,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, ctx.r5.u32);
	// stw r6,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, ctx.r6.u32);
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// lwz r7,1300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1300);
	// stw r8,1392(r31)
	PPC_STORE_U32(r31.u32 + 1392, ctx.r8.u32);
	// rlwinm r8,r7,5,6,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x3FFFFE0;
	// stw r3,1388(r31)
	PPC_STORE_U32(r31.u32 + 1388, ctx.r3.u32);
	// stw r8,1376(r31)
	PPC_STORE_U32(r31.u32 + 1376, ctx.r8.u32);
	// stw r11,1372(r31)
	PPC_STORE_U32(r31.u32 + 1372, r11.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r8,1300(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1300);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r8,652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lfs f12,11272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11272);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f13,10308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10308);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fmadds f11,f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f30.f64));
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,12,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFE00;
	// stw r11,1380(r31)
	PPC_STORE_U32(r31.u32 + 1380, r11.u32);
	// clrldi r11,r9,32
	r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// beq cr6,0x825f1558
	if (cr6.eq) goto loc_825F1558;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfs f11,-31420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31420);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,11268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11268);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f12,f9,f12,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// fmadds f12,f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f30.f64));
	// fmadds f0,f0,f13,f30
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + f30.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,13,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7FE00;
	// rlwinm r10,r10,9,13,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7FE00;
	// stw r11,1400(r31)
	PPC_STORE_U32(r31.u32 + 1400, r11.u32);
	// stw r10,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, ctx.r10.u32);
	// b 0x825f1598
	goto loc_825F1598;
loc_825F1558:
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f12,f11,f12,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// fmadds f0,f0,f13,f30
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,9,13,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, r11.u32);
loc_825F1598:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_825F15AC"))) PPC_WEAK_FUNC(sub_825F15AC);
PPC_FUNC_IMPL(__imp__sub_825F15AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825F15B0"))) PPC_WEAK_FUNC(sub_825F15B0);
PPC_FUNC_IMPL(__imp__sub_825F15B0) {
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
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825efa70
	sub_825EFA70(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,21960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21960);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r8,21952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 21952);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// beq cr6,0x825f1634
	if (cr6.eq) goto loc_825F1634;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x825f1618
	if (cr6.lt) goto loc_825F1618;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825f1618
	if (cr6.gt) goto loc_825F1618;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F1618:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x825f1634
	if (cr6.lt) goto loc_825F1634;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825f1634
	if (cr6.gt) goto loc_825F1634;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_825F1634:
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r6,21956(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 21956);
	// rlwimi r30,r29,16,0,15
	r30.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r28,r10,16,0,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r29,r8,16
	r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,992
	r11.s64 = ctx.r1.s64 + 992;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// or r7,r29,r28
	ctx.r7.u64 = r29.u64 | r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// bl 0x825f1020
	sub_825F1020(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8314d30c
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,200
	ctx.r7.s64 = 200;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwimi r25,r11,16,0,15
	r25.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r25.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// or r6,r29,r28
	ctx.r6.u64 = r29.u64 | r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8314d2fc
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
}

__attribute__((alias("__imp__sub_825F175C"))) PPC_WEAK_FUNC(sub_825F175C);
PPC_FUNC_IMPL(__imp__sub_825F175C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F1760"))) PPC_WEAK_FUNC(sub_825F1760);
PPC_FUNC_IMPL(__imp__sub_825F1760) {
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
	// lwz r11,15232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f17a0
	if (cr6.eq) goto loc_825F17A0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r11,r10,2,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// clrlwi r9,r8,19
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r8,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x1FFF;
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + r11.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// b 0x825f17a8
	goto loc_825F17A8;
loc_825F17A0:
	// lwz r29,13948(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 13948);
	// lwz r28,13952(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 13952);
loc_825F17A8:
	// addi r30,r31,14128
	r30.s64 = r31.s64 + 14128;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825efc10
	sub_825EFC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F17DC"))) PPC_WEAK_FUNC(sub_825F17DC);
PPC_FUNC_IMPL(__imp__sub_825F17DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F17E0"))) PPC_WEAK_FUNC(sub_825F17E0);
PPC_FUNC_IMPL(__imp__sub_825F17E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x825efb98
	sub_825EFB98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825f1760
	sub_825F1760(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F180C"))) PPC_WEAK_FUNC(sub_825F180C);
PPC_FUNC_IMPL(__imp__sub_825F180C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1810"))) PPC_WEAK_FUNC(sub_825F1810);
PPC_FUNC_IMPL(__imp__sub_825F1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,13916(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_825F1820"))) PPC_WEAK_FUNC(sub_825F1820);
PPC_FUNC_IMPL(__imp__sub_825F1820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825F1824"))) PPC_WEAK_FUNC(sub_825F1824);
PPC_FUNC_IMPL(__imp__sub_825F1824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1828"))) PPC_WEAK_FUNC(sub_825F1828);
PPC_FUNC_IMPL(__imp__sub_825F1828) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8314d34c
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lwz r3,1796(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1796);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825f1860
	if (cr6.eq) goto loc_825F1860;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d33c
	__imp__VdRetrainEDRAMWorker(ctx, base);
loc_825F1860:
	// li r11,0
	r11.s64 = 0;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d32c
	__imp__VdRetrainEDRAM(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f18f4
	if (cr0.eq) goto loc_825F18F4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x825f18a0
	if (!cr6.eq) goto loc_825F18A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
loc_825F18A0:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d32c
	__imp__VdRetrainEDRAM(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x825f18a0
	if (!cr6.eq) goto loc_825F18A0;
loc_825F18F4:
	// lwz r3,1796(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1796);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x8314d31c
	__imp__KeLeaveCriticalRegion(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
}

__attribute__((alias("__imp__sub_825F1908"))) PPC_WEAK_FUNC(sub_825F1908);
PPC_FUNC_IMPL(__imp__sub_825F1908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F190C"))) PPC_WEAK_FUNC(sub_825F190C);
PPC_FUNC_IMPL(__imp__sub_825F190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1910"))) PPC_WEAK_FUNC(sub_825F1910);
PPC_FUNC_IMPL(__imp__sub_825F1910) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x825f19e4
	if (cr6.lt) goto loc_825F19E4;
	// cmplwi cr6,r5,112
	cr6.compare<uint32_t>(ctx.r5.u32, 112, xer);
	// bgt cr6,0x825f19e4
	if (cr6.gt) goto loc_825F19E4;
	// addi r11,r5,1775
	r11.s64 = ctx.r5.s64 + 1775;
	// lwz r6,14192(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14192);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,14188(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 14188);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,15220(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15220);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r5,15224(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15224);
	// lwz r4,392(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r11,-16383
	r11.s64 = -1073676288;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r28,1
	r28.s64 = 65536;
	// lwzx r27,r9,r31
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// ori r11,r11,16128
	r11.u64 = r11.u64 | 16128;
	// lwz r10,14196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14196);
	// li r9,1406
	ctx.r9.s64 = 1406;
	// ori r3,r3,25
	ctx.r3.u64 = ctx.r3.u64 | 25;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// clrlwi r8,r8,8
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ori r6,r28,26
	ctx.r6.u64 = r28.u64 | 26;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// beq cr6,0x825f19e4
	if (cr6.eq) goto loc_825F19E4;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,392(r29)
	PPC_STORE_U32(r29.u32 + 392, r30.u32);
	// stw r11,11504(r31)
	PPC_STORE_U32(r31.u32 + 11504, r11.u32);
loc_825F19E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825F19E8"))) PPC_WEAK_FUNC(sub_825F19E8);
PPC_FUNC_IMPL(__imp__sub_825F19E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F19EC"))) PPC_WEAK_FUNC(sub_825F19EC);
PPC_FUNC_IMPL(__imp__sub_825F19EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F19F0"))) PPC_WEAK_FUNC(sub_825F19F0);
PPC_FUNC_IMPL(__imp__sub_825F19F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1406
	ctx.r10.s64 = 1406;
	// lis r11,1
	r11.s64 = 65536;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r9,1403
	ctx.r9.s64 = 1403;
	// ori r11,r11,78
	r11.u64 = r11.u64 | 78;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// mulli r11,r30,36
	r11.s64 = r30.s64 * 36;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,24488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24488);
	// stw r10,24484(r11)
	PPC_STORE_U32(r11.u32 + 24484, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825F1A64"))) PPC_WEAK_FUNC(sub_825F1A64);
PPC_FUNC_IMPL(__imp__sub_825F1A64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1A68"))) PPC_WEAK_FUNC(sub_825F1A68);
PPC_FUNC_IMPL(__imp__sub_825F1A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// ori r9,r9,15872
	ctx.r9.u64 = ctx.r9.u64 | 15872;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F1AB8"))) PPC_WEAK_FUNC(sub_825F1AB8);
PPC_FUNC_IMPL(__imp__sub_825F1AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1ABC"))) PPC_WEAK_FUNC(sub_825F1ABC);
PPC_FUNC_IMPL(__imp__sub_825F1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1AC0"))) PPC_WEAK_FUNC(sub_825F1AC0);
PPC_FUNC_IMPL(__imp__sub_825F1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,56
	r11.s64 = ctx.r3.s64 + 56;
loc_825F1AC4:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_825F1AE0:
	// mfmsr r7
	// mtmsrd r13,1
	// ldarx r8,0,r11
	reserved.u64 = *(uint64_t*)(base + r11.u32);
	ctx.r8.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r8,r6
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, xer);
	// bne cr6,0x825f1b04
	if (!cr6.eq) goto loc_825F1B04;
	// stdcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + r11.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x825f1ae0
	if (!cr0.eq) goto loc_825F1AE0;
	// b 0x825f1b0c
	goto loc_825F1B0C;
loc_825F1B04:
	// stdcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + r11.u32), reserved.s64, __builtin_bswap64(ctx.r8.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
loc_825F1B0C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r6
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r6.s64, xer);
	// bne cr6,0x825f1ac4
	if (!cr6.eq) goto loc_825F1AC4;
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_825F1B28"))) PPC_WEAK_FUNC(sub_825F1B28);
PPC_FUNC_IMPL(__imp__sub_825F1B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1B2C"))) PPC_WEAK_FUNC(sub_825F1B2C);
PPC_FUNC_IMPL(__imp__sub_825F1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1B30"))) PPC_WEAK_FUNC(sub_825F1B30);
PPC_FUNC_IMPL(__imp__sub_825F1B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,56
	r11.s64 = ctx.r3.s64 + 56;
loc_825F1B34:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_825F1B48:
	// mfmsr r8
	// mtmsrd r13,1
	// ldarx r9,0,r11
	reserved.u64 = *(uint64_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r9,r7
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, xer);
	// bne cr6,0x825f1b6c
	if (!cr6.eq) goto loc_825F1B6C;
	// stdcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + r11.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825f1b48
	if (!cr0.eq) goto loc_825F1B48;
	// b 0x825f1b74
	goto loc_825F1B74;
loc_825F1B6C:
	// stdcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + r11.u32), reserved.s64, __builtin_bswap64(ctx.r9.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
loc_825F1B74:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpd cr6,r9,r7
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, xer);
	// bne cr6,0x825f1b34
	if (!cr6.eq) goto loc_825F1B34;
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_825F1B90"))) PPC_WEAK_FUNC(sub_825F1B90);
PPC_FUNC_IMPL(__imp__sub_825F1B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1B94"))) PPC_WEAK_FUNC(sub_825F1B94);
PPC_FUNC_IMPL(__imp__sub_825F1B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1B98"))) PPC_WEAK_FUNC(sub_825F1B98);
PPC_FUNC_IMPL(__imp__sub_825F1B98) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f1bc8
	if (!cr6.gt) goto loc_825F1BC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F1BC8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r11,-1
	r11.s64 = -1;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r9,25344
	ctx.r9.u64 = ctx.r9.u64 | 25344;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r11,15332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15332);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825f1c34
	if (cr6.eq) goto loc_825F1C34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F1C34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6898
	sub_825E6898(ctx, base);
	// addi r11,r31,24592
	r11.s64 = r31.s64 + 24592;
loc_825F1C40:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825f1c40
	if (!cr0.eq) goto loc_825F1C40;
	// lwz r11,24492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24492);
	// clrlwi r10,r30,25
	ctx.r10.u64 = r30.u32 & 0x7F;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r29,31
	ctx.r8.u64 = r29.u32 & 0x1;
	// rlwinm r11,r11,16,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFE0000;
	// lbz r7,11072(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// andi. r9,r9,2049
	ctx.r9.u64 = ctx.r9.u64 & 2049;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// ori r10,r7,8
	ctx.r10.u64 = ctx.r7.u64 | 8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-28672
	ctx.r7.s64 = -1879048192;
	// stb r10,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// ori r11,r11,4608
	r11.u64 = r11.u64 | 4608;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq 0x825f1cc0
	if (cr0.eq) goto loc_825F1CC0;
	// lwz r10,16952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16952);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825f1cc0
	if (!cr6.gt) goto loc_825F1CC0;
	// lwz r10,16968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825F1CC0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4548
	sub_825E4548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F1CE4"))) PPC_WEAK_FUNC(sub_825F1CE4);
PPC_FUNC_IMPL(__imp__sub_825F1CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825F1CE8"))) PPC_WEAK_FUNC(sub_825F1CE8);
PPC_FUNC_IMPL(__imp__sub_825F1CE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825f1d10
	if (!cr6.eq) goto loc_825F1D10;
	// li r25,1024
	r25.s64 = 1024;
loc_825F1D10:
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825f1d34
	if (!cr6.eq) goto loc_825F1D34;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825f1e00
	if (cr6.eq) goto loc_825F1E00;
	// lwz r11,24492(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24492);
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f1e00
	if (cr6.eq) goto loc_825F1E00;
loc_825F1D34:
	// lwz r11,24592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24592);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825f1d48
	if (cr6.eq) goto loc_825F1D48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
loc_825F1D48:
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// li r31,0
	r31.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825f1d98
	if (!cr6.gt) goto loc_825F1D98;
	// addi r30,r29,24464
	r30.s64 = r29.s64 + 24464;
loc_825F1D60:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// stwu r31,36(r30)
	ea = 36 + r30.u32;
	PPC_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825f1d60
	if (cr6.lt) goto loc_825F1D60;
loc_825F1D98:
	// stw r26,24584(r29)
	PPC_STORE_U32(r29.u32 + 24584, r26.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r24,24588(r29)
	PPC_STORE_U32(r29.u32 + 24588, r24.u32);
	// beq cr6,0x825f1e00
	if (cr6.eq) goto loc_825F1E00;
	// mulli r26,r25,28
	r26.s64 = r25.s64 * 28;
	// li r28,2
	r28.s64 = 2;
	// addi r30,r29,24460
	r30.s64 = r29.s64 + 24460;
loc_825F1DB8:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f1e0c
	if (cr0.eq) goto loc_825F1E0C;
	// addi r11,r25,-1
	r11.s64 = r25.s64 + -1;
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// stwu r28,36(r30)
	ea = 36 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x825f1db8
	if (cr6.lt) goto loc_825F1DB8;
loc_825F1E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_825F1E0C:
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825f1e58
	if (!cr6.gt) goto loc_825F1E58;
	// addi r30,r29,24464
	r30.s64 = r29.s64 + 24464;
loc_825F1E20:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// stwu r31,36(r30)
	ea = 36 + r30.u32;
	PPC_STORE_U32(ea, r31.u32);
	r30.u32 = ea;
	// lwz r11,24584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24584);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825f1e20
	if (cr6.lt) goto loc_825F1E20;
loc_825F1E58:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r31,24584(r29)
	PPC_STORE_U32(r29.u32 + 24584, r31.u32);
	// stw r31,24588(r29)
	PPC_STORE_U32(r29.u32 + 24588, r31.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
}

__attribute__((alias("__imp__sub_825F1E68"))) PPC_WEAK_FUNC(sub_825F1E68);
PPC_FUNC_IMPL(__imp__sub_825F1E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x825f1e04
	// ERROR 825F1E04
	return;
}

__attribute__((alias("__imp__sub_825F1E6C"))) PPC_WEAK_FUNC(sub_825F1E6C);
PPC_FUNC_IMPL(__imp__sub_825F1E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1E70"))) PPC_WEAK_FUNC(sub_825F1E70);
PPC_FUNC_IMPL(__imp__sub_825F1E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// addi r11,r3,11512
	r11.s64 = ctx.r3.s64 + 11512;
	// lwz r9,4396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4396);
	// stw r9,11520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11520, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,11524(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11524);
	// lwz r7,11520(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11520);
	// stw r9,11516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11516, ctx.r9.u32);
	// lwz r6,11024(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r5,11548(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11548);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r6,112(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r8,11528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11528, ctx.r8.u32);
	// lwz r8,11024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,112(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r8,11532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11532, ctx.r8.u32);
	// lwz r8,16964(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16964);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// stw r7,11524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11524, ctx.r7.u32);
	// stw r8,11512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11512, ctx.r8.u32);
	// stw r9,11536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11536, ctx.r9.u32);
	// lwz r9,11024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// lwz r9,112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,11560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11560, ctx.r9.u32);
	// beq cr6,0x825f1f44
	if (cr6.eq) goto loc_825F1F44;
	// lbz r9,11070(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11070);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f1f44
	if (cr0.eq) goto loc_825F1F44;
	// lwz r9,11024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,3676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3676);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// beq cr6,0x825f1f2c
	if (cr6.eq) goto loc_825F1F2C;
	// lwz r9,11024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// b 0x825f1f30
	goto loc_825F1F30;
loc_825F1F2C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825F1F30:
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// blr 
	return;
loc_825F1F44:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,11024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825F1F60"))) PPC_WEAK_FUNC(sub_825F1F60);
PPC_FUNC_IMPL(__imp__sub_825F1F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1F64"))) PPC_WEAK_FUNC(sub_825F1F64);
PPC_FUNC_IMPL(__imp__sub_825F1F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F1F68"))) PPC_WEAK_FUNC(sub_825F1F68);
PPC_FUNC_IMPL(__imp__sub_825F1F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r3,r3,11512
	ctx.r3.s64 = ctx.r3.s64 + 11512;
	// bl 0x825f1ac0
	sub_825F1AC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f1f94
	if (cr0.eq) goto loc_825F1F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1e70
	sub_825F1E70(ctx, base);
loc_825F1F94:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24460
	ctx.r3.s64 = r31.s64 + 24460;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F1FB4"))) PPC_WEAK_FUNC(sub_825F1FB4);
PPC_FUNC_IMPL(__imp__sub_825F1FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F1FB8"))) PPC_WEAK_FUNC(sub_825F1FB8);
PPC_FUNC_IMPL(__imp__sub_825F1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,36
	r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,24476
	r11.s64 = r11.s64 + 24476;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825f2020
	if (cr6.eq) goto loc_825F2020;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825F1FDC:
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f2020
	if (cr0.eq) goto loc_825F2020;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825f2010
	if (!cr6.eq) goto loc_825F2010;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_825F2010:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x825f1fdc
	if (!cr6.eq) goto loc_825F1FDC;
loc_825F2020:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825F2024"))) PPC_WEAK_FUNC(sub_825F2024);
PPC_FUNC_IMPL(__imp__sub_825F2024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2028"))) PPC_WEAK_FUNC(sub_825F2028);
PPC_FUNC_IMPL(__imp__sub_825F2028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// ori r10,r10,48879
	ctx.r10.u64 = ctx.r10.u64 | 48879;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F208C"))) PPC_WEAK_FUNC(sub_825F208C);
PPC_FUNC_IMPL(__imp__sub_825F208C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2090"))) PPC_WEAK_FUNC(sub_825F2090);
PPC_FUNC_IMPL(__imp__sub_825F2090) {
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
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,9,25,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7F;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x825f20c8
	if (cr6.lt) goto loc_825F20C8;
	// cmplwi cr6,r5,126
	cr6.compare<uint32_t>(ctx.r5.u32, 126, xer);
	// bgt cr6,0x825f20c8
	if (cr6.gt) goto loc_825F20C8;
	// bl 0x825f1910
	sub_825F1910(ctx, base);
loc_825F20C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,1403
	ctx.r8.s64 = 1403;
	// ori r10,r10,25344
	ctx.r10.u64 = ctx.r10.u64 | 25344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f2110
	if (cr6.eq) goto loc_825F2110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f2028
	sub_825F2028(ctx, base);
loc_825F2110:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r29,116(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r10,11504(r31)
	PPC_STORE_U32(r31.u32 + 11504, ctx.r10.u32);
loc_825F2120:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3790
	sub_825E3790(ctx, base);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825f2120
	if (!cr6.eq) goto loc_825F2120;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f215c
	if (cr6.eq) goto loc_825F215C;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f2028
	sub_825F2028(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,11504(r31)
	PPC_STORE_U32(r31.u32 + 11504, r11.u32);
loc_825F215C:
	// addi r11,r27,100
	r11.s64 = r27.s64 + 100;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// stw r27,396(r28)
	PPC_STORE_U32(r28.u32 + 396, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F2178"))) PPC_WEAK_FUNC(sub_825F2178);
PPC_FUNC_IMPL(__imp__sub_825F2178) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F217C"))) PPC_WEAK_FUNC(sub_825F217C);
PPC_FUNC_IMPL(__imp__sub_825F217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2180"))) PPC_WEAK_FUNC(sub_825F2180);
PPC_FUNC_IMPL(__imp__sub_825F2180) {
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
	// lwz r29,416(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(r29.u32, ctx.r5.u32, xer);
	// beq cr6,0x825f21f4
	if (cr6.eq) goto loc_825F21F4;
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// lwz r28,420(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r27,r11,24476
	r27.s64 = r11.s64 + 24476;
loc_825F21B0:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825f21e4
	if (cr6.eq) goto loc_825F21E4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f2090
	sub_825F2090(ctx, base);
loc_825F21E4:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f21b0
	if (cr0.eq) goto loc_825F21B0;
loc_825F21F4:
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r10,412(r31)
	PPC_STORE_U32(r31.u32 + 412, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f19f0
	sub_825F19F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F221C"))) PPC_WEAK_FUNC(sub_825F221C);
PPC_FUNC_IMPL(__imp__sub_825F221C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F2220"))) PPC_WEAK_FUNC(sub_825F2220);
PPC_FUNC_IMPL(__imp__sub_825F2220) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825f224c
	if (cr6.eq) goto loc_825F224C;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r26.u32);
loc_825F224C:
	// lwz r11,412(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825f2268
	if (cr6.eq) goto loc_825F2268;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f2180
	sub_825F2180(ctx, base);
loc_825F2268:
	// mulli r11,r27,36
	r11.s64 = r27.s64 * 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,34174
	ctx.r10.u64 = ctx.r10.u64 | 34174;
	// ori r9,r9,77
	ctx.r9.u64 = ctx.r9.u64 | 77;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r30,r11,24476
	r30.s64 = r11.s64 + 24476;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,24476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24476);
	// li r25,1
	r25.s64 = 1;
	// lwz r11,24488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24488);
	// li r9,1480
	ctx.r9.s64 = 1480;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,3584
	ctx.r6.s64 = 3584;
	// li r24,3648
	r24.s64 = 3648;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r26
	r23.u64 = r26.u64;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// lwz r11,396(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 396);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe. r24,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r24.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x825f230c
	if (cr0.eq) goto loc_825F230C;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_825F230C:
	// mr r22,r26
	r22.u64 = r26.u64;
loc_825F2310:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and r9,r11,r9
	ctx.r9.u64 = r11.u64 & ctx.r9.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// mulli r11,r9,28
	r11.s64 = ctx.r9.s64 * 28;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f2340
	if (cr0.eq) goto loc_825F2340;
	// stw r25,428(r29)
	PPC_STORE_U32(r29.u32 + 428, r25.u32);
loc_825F2340:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x825f24a0
	if (!cr6.eq) goto loc_825F24A0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f23a0
	if (cr6.eq) goto loc_825F23A0;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f2378
	if (cr0.eq) goto loc_825F2378;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r22,r25
	r22.u64 = r25.u64;
	// stw r27,416(r29)
	PPC_STORE_U32(r29.u32 + 416, r27.u32);
	// stw r25,412(r29)
	PPC_STORE_U32(r29.u32 + 412, r25.u32);
	// stw r11,420(r29)
	PPC_STORE_U32(r29.u32 + 420, r11.u32);
	// b 0x825f24a0
	goto loc_825F24A0;
loc_825F2378:
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f2388
	if (cr0.eq) goto loc_825F2388;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x825f24a0
	if (cr6.eq) goto loc_825F24A0;
loc_825F2388:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f2090
	sub_825F2090(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_825F23A0:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f24a0
	if (cr0.eq) goto loc_825F24A0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r11,r27,25
	r11.s64 = r27.s64 + 25;
	// li r8,1403
	ctx.r8.s64 = 1403;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r7,-16383
	ctx.r7.s64 = -1073676288;
	// lis r6,-16382
	ctx.r6.s64 = -1073610752;
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lis r4,-8531
	ctx.r4.s64 = -559087616;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// addi r20,r9,512
	r20.s64 = ctx.r9.s64 + 512;
	// clrlwi r8,r11,3
	ctx.r8.u64 = r11.u32 & 0x1FFFFFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r20,0,19,19
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ori r10,r7,15616
	ctx.r10.u64 = ctx.r7.u64 | 15616;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// ori r7,r5,3
	ctx.r7.u64 = ctx.r5.u64 | 3;
	// ori r10,r4,48879
	ctx.r10.u64 = ctx.r4.u64 | 48879;
	// ori r8,r6,22528
	ctx.r8.u64 = ctx.r6.u64 | 22528;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// oris r9,r9,33024
	ctx.r9.u64 = ctx.r9.u64 | 2164260864;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3790
	sub_825E3790(ctx, base);
	// lwz r11,11564(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11564);
	// stw r26,11504(r31)
	PPC_STORE_U32(r31.u32 + 11504, r26.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,11564(r31)
	PPC_STORE_U32(r31.u32 + 11564, r11.u32);
loc_825F24A0:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f2310
	if (cr0.eq) goto loc_825F2310;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x825f24c4
	if (!cr6.eq) goto loc_825F24C4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f19f0
	sub_825F19F0(ctx, base);
loc_825F24C4:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x825f24d0
	if (cr6.eq) goto loc_825F24D0;
	// stw r23,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r23.u32);
loc_825F24D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_825F24D4"))) PPC_WEAK_FUNC(sub_825F24D4);
PPC_FUNC_IMPL(__imp__sub_825F24D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825F24D8"))) PPC_WEAK_FUNC(sub_825F24D8);
PPC_FUNC_IMPL(__imp__sub_825F24D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// addi r24,r3,400
	r24.s64 = ctx.r3.s64 + 400;
	// addi r23,r4,24488
	r23.s64 = ctx.r4.s64 + 24488;
loc_825F24F8:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_825F250C:
	// lwz r11,428(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825f2530
	if (!cr6.eq) goto loc_825F2530;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f1fb8
	sub_825F1FB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x825f2534
	if (cr0.eq) goto loc_825F2534;
loc_825F2530:
	// li r11,1
	r11.s64 = 1;
loc_825F2534:
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f25a4
	if (cr0.eq) goto loc_825F25A4;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825f2568
	if (cr6.gt) goto loc_825F2568;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f25a4
	if (!cr6.lt) goto loc_825F25A4;
loc_825F2568:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825f25a8
	if (!cr0.eq) goto loc_825F25A8;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825f2220
	sub_825F2220(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// b 0x825f250c
	goto loc_825F250C;
loc_825F25A4:
	// li r11,0
	r11.s64 = 0;
loc_825F25A8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r27,r11,r10
	r27.u64 = r11.u64 | ctx.r10.u64;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// blt cr6,0x825f250c
	if (cr6.lt) goto loc_825F250C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f25d8
	if (cr0.eq) goto loc_825F25D8;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f24f8
	if (!cr0.eq) goto loc_825F24F8;
loc_825F25D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F25DC"))) PPC_WEAK_FUNC(sub_825F25DC);
PPC_FUNC_IMPL(__imp__sub_825F25DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825F25E0"))) PPC_WEAK_FUNC(sub_825F25E0);
PPC_FUNC_IMPL(__imp__sub_825F25E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f260c
	if (!cr6.eq) goto loc_825F260C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f2614
	goto loc_825F2614;
loc_825F260C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F2614:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r10,24584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f2638
	if (cr6.eq) goto loc_825F2638;
loc_825F262C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825f262c
	if (cr6.lt) goto loc_825F262C;
loc_825F2638:
	// li r27,-1
	r27.s64 = -1;
	// stw r28,412(r30)
	PPC_STORE_U32(r30.u32 + 412, r28.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r27,396(r30)
	PPC_STORE_U32(r30.u32 + 396, r27.u32);
	// stw r27,416(r30)
	PPC_STORE_U32(r30.u32 + 416, r27.u32);
	// stw r27,420(r30)
	PPC_STORE_U32(r30.u32 + 420, r27.u32);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm. r24,r11,21,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r28,392(r30)
	PPC_STORE_U32(r30.u32 + 392, r28.u32);
	// beq 0x825f2668
	if (cr0.eq) goto loc_825F2668;
	// li r11,64
	r11.s64 = 64;
	// stw r11,392(r30)
	PPC_STORE_U32(r30.u32 + 392, r11.u32);
loc_825F2668:
	// lwz r22,392(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 392);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r28,400(r30)
	PPC_STORE_U64(r30.u32 + 400, r28.u64);
	// stw r28,408(r30)
	PPC_STORE_U32(r30.u32 + 408, r28.u32);
	// addi r21,r30,400
	r21.s64 = r30.s64 + 400;
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r4,r11,112
	ctx.r4.s64 = r11.s64 + 112;
	// bl 0x825f2028
	sub_825F2028(ctx, base);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,116
	ctx.r4.s64 = r11.s64 + 116;
	// bl 0x825f2028
	sub_825F2028(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f26c4
	if (cr0.eq) goto loc_825F26C4;
	// li r11,1
	r11.s64 = 1;
	// li r5,919
	ctx.r5.s64 = 919;
	// stw r11,468(r30)
	PPC_STORE_U32(r30.u32 + 468, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x825f1a68
	sub_825F1A68(ctx, base);
	// b 0x825f26d0
	goto loc_825F26D0;
loc_825F26C4:
	// stw r28,468(r30)
	PPC_STORE_U32(r30.u32 + 468, r28.u32);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// stw r28,120(r11)
	PPC_STORE_U32(r11.u32 + 120, r28.u32);
loc_825F26D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,11088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 11088);
	// bl 0x825e2f18
	sub_825E2F18(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f24d8
	sub_825F24D8(ctx, base);
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
loc_825F2700:
	// lwz r11,16976(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16976);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r11,r24
	r24.u64 = r11.u64 & r24.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x825f2724
	if (!cr6.eq) goto loc_825F2724;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x825f2858
	if (cr6.eq) goto loc_825F2858;
loc_825F2724:
	// lwz r7,24584(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825f276c
	if (cr6.eq) goto loc_825F276C;
	// lwz r5,11024(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// li r11,100
	r11.s64 = 100;
	// addi r9,r31,24464
	ctx.r9.s64 = r31.s64 + 24464;
loc_825F2748:
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzu r6,36(r9)
	ea = 36 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// subf r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	// rlwinm r6,r6,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// blt cr6,0x825f2748
	if (cr6.lt) goto loc_825F2748;
loc_825F276C:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,24,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x825f27ec
	if (!cr6.lt) goto loc_825F27EC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825f27ec
	if (cr6.eq) goto loc_825F27EC;
	// addi r29,r31,24488
	r29.s64 = r31.s64 + 24488;
loc_825F278C:
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825f27b0
	if (!cr6.eq) goto loc_825F27B0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1fb8
	sub_825F1FB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq 0x825f27b4
	if (cr0.eq) goto loc_825F27B4;
loc_825F27B0:
	// li r11,1
	r11.s64 = 1;
loc_825F27B4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f27cc
	if (!cr0.eq) goto loc_825F27CC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x825f27e4
	if (cr0.gt) goto loc_825F27E4;
loc_825F27CC:
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x825f278c
	if (cr6.lt) goto loc_825F278C;
	// b 0x825f27ec
	goto loc_825F27EC;
loc_825F27E4:
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x825f2834
	if (!cr6.eq) goto loc_825F2834;
loc_825F27EC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// addi r29,r31,24460
	r29.s64 = r31.s64 + 24460;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8314d36c
	__imp__KeWaitForSingleObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d35c
	__imp__KeResetEvent(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r25,r11,r25
	r25.u64 = r11.u64 + r25.u64;
	// b 0x825f2850
	goto loc_825F2850;
loc_825F2834:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f2220
	sub_825F2220(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r26,r11,r26
	r26.u64 = r11.u64 + r26.u64;
loc_825F2850:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x825f2700
	if (!cr6.eq) goto loc_825F2700;
loc_825F2858:
	// lwz r11,412(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 412);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825f2874
	if (cr6.eq) goto loc_825F2874;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f2180
	sub_825F2180(ctx, base);
loc_825F2874:
	// addi r3,r30,432
	ctx.r3.s64 = r30.s64 + 432;
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// bl 0x825f1b30
	sub_825F1B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f2890
	if (cr0.eq) goto loc_825F2890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1e70
	sub_825F1E70(ctx, base);
loc_825F2890:
	// stw r28,428(r30)
	PPC_STORE_U32(r30.u32 + 428, r28.u32);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm r5,r11,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7F;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x825f28b4
	if (cr6.lt) goto loc_825F28B4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r11,r11,0,24,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFE;
	// cmplwi cr6,r11,224
	cr6.compare<uint32_t>(r11.u32, 224, xer);
	// ble cr6,0x825f28cc
	if (!cr6.gt) goto loc_825F28CC;
loc_825F28B4:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(r22.u32, 16, xer);
	// blt cr6,0x825f28c8
	if (cr6.lt) goto loc_825F28C8;
	// cmplwi cr6,r22,112
	cr6.compare<uint32_t>(r22.u32, 112, xer);
	// ble cr6,0x825f28cc
	if (!cr6.gt) goto loc_825F28CC;
loc_825F28C8:
	// li r5,64
	ctx.r5.s64 = 64;
loc_825F28CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f1910
	sub_825F1910(ctx, base);
	// lwz r11,424(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825f28f4
	if (cr6.eq) goto loc_825F28F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,11088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 11088);
	// bl 0x825e2f18
	sub_825E2F18(ctx, base);
	// stw r28,424(r30)
	PPC_STORE_U32(r30.u32 + 424, r28.u32);
loc_825F28F4:
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825f2938
	if (!cr6.gt) goto loc_825F2938;
	// addi r11,r31,24508
	r11.s64 = r31.s64 + 24508;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_825F290C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825f2920
	if (cr6.eq) goto loc_825F2920;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_825F2920:
	// lwz r8,24584(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x825f290c
	if (cr6.lt) goto loc_825F290C;
loc_825F2938:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwsync 
	// addi r11,r31,24592
	r11.s64 = r31.s64 + 24592;
loc_825F2948:
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
	// bne 0x825f2948
	if (!cr0.eq) goto loc_825F2948;
	// addi r3,r20,16
	ctx.r3.s64 = r20.s64 + 16;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825F296C"))) PPC_WEAK_FUNC(sub_825F296C);
PPC_FUNC_IMPL(__imp__sub_825F296C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825F2970"))) PPC_WEAK_FUNC(sub_825F2970);
PPC_FUNC_IMPL(__imp__sub_825F2970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-13721(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13721, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2984"))) PPC_WEAK_FUNC(sub_825F2984);
PPC_FUNC_IMPL(__imp__sub_825F2984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2988"))) PPC_WEAK_FUNC(sub_825F2988);
PPC_FUNC_IMPL(__imp__sub_825F2988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-13721(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13721, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F299C"))) PPC_WEAK_FUNC(sub_825F299C);
PPC_FUNC_IMPL(__imp__sub_825F299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F29A0"))) PPC_WEAK_FUNC(sub_825F29A0);
PPC_FUNC_IMPL(__imp__sub_825F29A0) {
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
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F29D0"))) PPC_WEAK_FUNC(sub_825F29D0);
PPC_FUNC_IMPL(__imp__sub_825F29D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F29D4"))) PPC_WEAK_FUNC(sub_825F29D4);
PPC_FUNC_IMPL(__imp__sub_825F29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F29D8"))) PPC_WEAK_FUNC(sub_825F29D8);
PPC_FUNC_IMPL(__imp__sub_825F29D8) {
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
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32728
	r11.u64 = r11.u64 | 32728;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x825f2a0c
	if (!cr6.lt) goto loc_825F2A0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eba50
	sub_828EBA50(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
loc_825F2A0C:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,27676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27676, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F2A28"))) PPC_WEAK_FUNC(sub_825F2A28);
PPC_FUNC_IMPL(__imp__sub_825F2A28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2A2C"))) PPC_WEAK_FUNC(sub_825F2A2C);
PPC_FUNC_IMPL(__imp__sub_825F2A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2A30"))) PPC_WEAK_FUNC(sub_825F2A30);
PPC_FUNC_IMPL(__imp__sub_825F2A30) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-13984
	r31.s64 = r11.s64 + -13984;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,262(r31)
	PPC_STORE_U8(r31.u32 + 262, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F2A74"))) PPC_WEAK_FUNC(sub_825F2A74);
PPC_FUNC_IMPL(__imp__sub_825F2A74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2A78"))) PPC_WEAK_FUNC(sub_825F2A78);
PPC_FUNC_IMPL(__imp__sub_825F2A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-13723(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13723, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2A8C"))) PPC_WEAK_FUNC(sub_825F2A8C);
PPC_FUNC_IMPL(__imp__sub_825F2A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2A90"))) PPC_WEAK_FUNC(sub_825F2A90);
PPC_FUNC_IMPL(__imp__sub_825F2A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-13724(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13724, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2AA4"))) PPC_WEAK_FUNC(sub_825F2AA4);
PPC_FUNC_IMPL(__imp__sub_825F2AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2AA8"))) PPC_WEAK_FUNC(sub_825F2AA8);
PPC_FUNC_IMPL(__imp__sub_825F2AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r11,41
	r11.s64 = 41;
	// addi r10,r3,23792
	ctx.r10.s64 = ctx.r3.s64 + 23792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F2ABC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825f2abc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F2ABC;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_825F2AC8"))) PPC_WEAK_FUNC(sub_825F2AC8);
PPC_FUNC_IMPL(__imp__sub_825F2AC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2ACC"))) PPC_WEAK_FUNC(sub_825F2ACC);
PPC_FUNC_IMPL(__imp__sub_825F2ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2AD0"))) PPC_WEAK_FUNC(sub_825F2AD0);
PPC_FUNC_IMPL(__imp__sub_825F2AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r10,18944
	ctx.r9.s64 = ctx.r10.s64 + 18944;
	// addi r29,r11,6
	r29.s64 = r11.s64 + 6;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r10,18944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18944);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lis r27,-32038
	r27.s64 = -2099642368;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r5,54
	ctx.r5.s64 = 54;
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// ori r27,r27,7
	r27.u64 = r27.u64 | 7;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r9,r11,18928
	ctx.r9.s64 = r11.s64 + 18928;
	// addi r10,r10,10608
	ctx.r10.s64 = ctx.r10.s64 + 10608;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18928(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18928);
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// stb r9,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r9.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r9,r11,18916
	ctx.r9.s64 = r11.s64 + 18916;
	// addi r10,r10,10632
	ctx.r10.s64 = ctx.r10.s64 + 10632;
	// li r5,54
	ctx.r5.s64 = 54;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18916(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18916);
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// sth r9,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r9.u16);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,19
	r11.s64 = 19;
	// addi r8,r9,10656
	ctx.r8.s64 = ctx.r9.s64 + 10656;
	// addi r10,r10,18896
	ctx.r10.s64 = ctx.r10.s64 + 18896;
	// addi r9,r1,283
	ctx.r9.s64 = ctx.r1.s64 + 283;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F2BC8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x825f2bc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F2BC8;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,303
	ctx.r3.s64 = ctx.r1.s64 + 303;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r4,r11,18868
	ctx.r4.s64 = r11.s64 + 18868;
	// addi r11,r10,10712
	r11.s64 = ctx.r10.s64 + 10712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,379
	ctx.r3.s64 = ctx.r1.s64 + 379;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r4,r11,18840
	ctx.r4.s64 = r11.s64 + 18840;
	// addi r11,r10,10800
	r11.s64 = ctx.r10.s64 + 10800;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,445
	ctx.r3.s64 = ctx.r1.s64 + 445;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r9,r11,18824
	ctx.r9.s64 = r11.s64 + 18824;
	// addi r10,r10,10896
	ctx.r10.s64 = ctx.r10.s64 + 10896;
	// li r5,49
	ctx.r5.s64 = 49;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18824);
	// addi r3,r1,503
	ctx.r3.s64 = ctx.r1.s64 + 503;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// lbz r9,14(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 14);
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, r11.u32);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// stw r8,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r8.u32);
	// sth r7,500(r1)
	PPC_STORE_U16(ctx.r1.u32 + 500, ctx.r7.u16);
	// stb r9,502(r1)
	PPC_STORE_U8(ctx.r1.u32 + 502, ctx.r9.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r9,r11,18808
	ctx.r9.s64 = r11.s64 + 18808;
	// addi r10,r10,10872
	ctx.r10.s64 = ctx.r10.s64 + 10872;
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r10,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18808(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18808);
	// addi r3,r1,569
	ctx.r3.s64 = ctx.r1.s64 + 569;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r11.u32);
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// stw r8,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r8.u32);
	// stb r9,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, ctx.r9.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,10896
	r11.s64 = r11.s64 + 10896;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, r11.u32);
loc_825F2CE8:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825F2CEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f2cec
	if (!cr6.eq) goto loc_825F2CEC;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f2d50
	if (cr0.eq) goto loc_825F2D50;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// blt cr6,0x825f2ce8
	if (cr6.lt) goto loc_825F2CE8;
loc_825F2D30:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,10928
	ctx.r4.s64 = r11.s64 + 10928;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x828e945c
	return;
loc_825F2D50:
	// mulli r10,r28,68
	ctx.r10.s64 = r28.s64 * 68;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r27,730
	r27.s64 = 47841280;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f2d30
	if (cr0.eq) goto loc_825F2D30;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,18800
	ctx.r4.s64 = r11.s64 + 18800;
}

__attribute__((alias("__imp__sub_825F2D80"))) PPC_WEAK_FUNC(sub_825F2D80);
PPC_FUNC_IMPL(__imp__sub_825F2D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x825f2d38
	// ERROR 825F2D38
	return;
}

__attribute__((alias("__imp__sub_825F2D84"))) PPC_WEAK_FUNC(sub_825F2D84);
PPC_FUNC_IMPL(__imp__sub_825F2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F2D88"))) PPC_WEAK_FUNC(sub_825F2D88);
PPC_FUNC_IMPL(__imp__sub_825F2D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8314d37c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825f2df8
	if (!cr0.eq) goto loc_825F2DF8;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f2de8
	if (cr0.eq) goto loc_825F2DE8;
	// li r30,1
	r30.s64 = 1;
	// b 0x825f2df8
	goto loc_825F2DF8;
loc_825F2DE8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825f2df8
	if (cr6.eq) goto loc_825F2DF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,2
	r30.s64 = 2;
loc_825F2DF8:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F2E04"))) PPC_WEAK_FUNC(sub_825F2E04);
PPC_FUNC_IMPL(__imp__sub_825F2E04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F2E08"))) PPC_WEAK_FUNC(sub_825F2E08);
PPC_FUNC_IMPL(__imp__sub_825F2E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r3,23772
	r31.s64 = ctx.r3.s64 + 23772;
	// lwz r3,24364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f2e50
	if (cr6.eq) goto loc_825F2E50;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f2e48
	if (!cr0.eq) goto loc_825F2E48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8314d11c
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x825f2e50
	goto loc_825F2E50;
loc_825F2E48:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825F2E50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f2e88
	if (cr6.eq) goto loc_825F2E88;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825f2e7c
	if (cr6.lt) goto loc_825F2E7C;
	// bne cr6,0x825f2e88
	if (!cr6.eq) goto loc_825F2E88;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825f2e88
	goto loc_825F2E88;
loc_825F2E7C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8314d11c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_825F2E88:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f2ec4
	if (cr6.eq) goto loc_825F2EC4;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825f2eb8
	if (cr6.lt) goto loc_825F2EB8;
	// bne cr6,0x825f2ec4
	if (!cr6.eq) goto loc_825F2EC4;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825f2ec4
	goto loc_825F2EC4;
loc_825F2EB8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8314d11c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_825F2EC4:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,41
	r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r30,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F2EF0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825f2ef0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F2EF0;
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

__attribute__((alias("__imp__sub_825F2F0C"))) PPC_WEAK_FUNC(sub_825F2F0C);
PPC_FUNC_IMPL(__imp__sub_825F2F0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F2F10"))) PPC_WEAK_FUNC(sub_825F2F10);
PPC_FUNC_IMPL(__imp__sub_825F2F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24376(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24376);
	// addi r31,r3,23772
	r31.s64 = ctx.r3.s64 + 23772;
	// stw r5,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r5.u32);
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// stw r11,24376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24376, r11.u32);
	// srawi. r7,r11,29
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 29;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r9,r31,368
	ctx.r9.s64 = r31.s64 + 368;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r11,r11,2,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x2;
	// clrlwi r8,r6,19
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r6,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// addi r6,r8,31
	ctx.r6.s64 = ctx.r8.s64 + 31;
	// sth r8,24140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24140, ctx.r8.u16);
	// addi r5,r11,31
	ctx.r5.s64 = r11.s64 + 31;
	// sth r11,24142(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24142, r11.u16);
	// rlwinm r6,r6,0,16,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFE0;
	// rlwinm r8,r5,0,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFE0;
	// sth r6,24144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24144, ctx.r6.u16);
	// sth r8,24146(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24146, ctx.r8.u16);
	// bne 0x825f3104
	if (!cr0.eq) goto loc_825F3104;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f10,f0
	ctx.f10.f64 = double(float(f0.f64));
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,-364(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -364);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r31,408
	ctx.r8.s64 = r31.s64 + 408;
	// lfs f12,-372(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -372);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r9,18752
	ctx.r9.s64 = ctx.r9.s64 + 18752;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r29,32
	r29.s64 = 32;
	// lfs f12,2992(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2992);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,424
	ctx.r6.s64 = r31.s64 + 424;
	// lfs f11,-380(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -380);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r31,440
	ctx.r5.s64 = r31.s64 + 440;
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r28,r9,32
	r28.s64 = ctx.r9.s64 + 32;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r31,456
	ctx.r4.s64 = r31.s64 + 456;
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r27,r3,19120
	r27.s64 = ctx.r3.s64 + 19120;
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// lvrx128 v63,r11,r9
	temp.u32 = r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r26,r8,19104
	r26.s64 = ctx.r8.s64 + 19104;
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvrx128 v62,r11,r7
	temp.u32 = r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r30,r31,488
	r30.s64 = r31.s64 + 488;
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r5,r8,19088
	ctx.r5.s64 = ctx.r8.s64 + 19088;
	// lvlx128 v63,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r31,504
	r29.s64 = r31.s64 + 504;
	// lvrx128 v62,r11,r28
	temp.u32 = r11.u32 + r28.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// lis r28,-32253
	r28.s64 = -2113732608;
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// li r8,12
	ctx.r8.s64 = 12;
	// lvx128 v63,r0,r27
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r9,r31,520
	ctx.r9.s64 = r31.s64 + 520;
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r4,r28,19072
	ctx.r4.s64 = r28.s64 + 19072;
	// lvx128 v63,r0,r26
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stvlx128 v63,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = r30.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r6
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r5
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvlx128 v62,r0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r29,r11
	ea = r29.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// addi r6,r31,536
	ctx.r6.s64 = r31.s64 + 536;
	// lvx128 v62,r0,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r3,19056
	ctx.r4.s64 = ctx.r3.s64 + 19056;
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// addi r5,r31,552
	ctx.r5.s64 = r31.s64 + 552;
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,27,5,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFE0;
	// b 0x825f3294
	goto loc_825F3294;
loc_825F3104:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x825f329c
	if (!cr6.eq) goto loc_825F329C;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lfs f10,-372(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -372);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r24,r1,112
	r24.s64 = ctx.r1.s64 + 112;
	// lfs f12,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r9,27752
	ctx.r9.s64 = ctx.r9.s64 + 27752;
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r31,424
	ctx.r5.s64 = r31.s64 + 424;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfs f11,-380(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r28,r9,16
	r28.s64 = ctx.r9.s64 + 16;
	// lfs f13,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,440
	ctx.r4.s64 = r31.s64 + 440;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r27,r9,32
	r27.s64 = ctx.r9.s64 + 32;
	// li r26,32
	r26.s64 = 32;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// addi r25,r8,19120
	r25.s64 = ctx.r8.s64 + 19120;
	// addi r30,r31,472
	r30.s64 = r31.s64 + 472;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lis r22,-32253
	r22.s64 = -2113732608;
	// addi r23,r8,19104
	r23.s64 = ctx.r8.s64 + 19104;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r21,r8,19088
	r21.s64 = ctx.r8.s64 + 19088;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r22,r22,19072
	r22.s64 = r22.s64 + 19072;
	// lis r20,-32253
	r20.s64 = -2113732608;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r6,r31,520
	ctx.r6.s64 = r31.s64 + 520;
	// lvrx128 v62,r11,r9
	temp.u32 = r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvlx128 v62,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r11,r28
	temp.u32 = r11.u32 + r28.u32;
	_mm_store_si128((__m128i*)v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvlx128 v62,r9,r26
	temp.u32 = ctx.r9.u32 + r26.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r31,488
	ctx.r9.s64 = r31.s64 + 488;
	// lvrx128 v63,r11,r27
	temp.u32 = r11.u32 + r27.u32;
	_mm_store_si128((__m128i*)v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r25
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = r30.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r24
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r23
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// addi r9,r31,504
	ctx.r9.s64 = r31.s64 + 504;
	// lvx128 v62,r0,r21
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r21.u32) & ~0xF), VectorMaskL));
	// stvlx128 v62,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// stvrx128 v62,r9,r11
	ea = ctx.r9.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// addi r3,r20,19056
	ctx.r3.s64 = r20.s64 + 19056;
	// addi r4,r31,552
	ctx.r4.s64 = r31.s64 + 552;
	// lvx128 v62,r0,r22
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// stvlx128 v62,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r6,r11
	ea = ctx.r6.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r3
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r4,r11
	ea = ctx.r4.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,23,9,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7FFFFE;
loc_825F3294:
	// stw r11,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r11.u32);
	// b 0x825f33ec
	goto loc_825F33EC;
loc_825F329C:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x825f33e4
	if (!cr6.eq) goto loc_825F33E4;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,16
	r11.s64 = 16;
	// addi r10,r10,27848
	ctx.r10.s64 = ctx.r10.s64 + 27848;
	// addi r8,r31,424
	ctx.r8.s64 = r31.s64 + 424;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r6,r31,440
	ctx.r6.s64 = r31.s64 + 440;
	// addi r27,r10,32
	r27.s64 = ctx.r10.s64 + 32;
	// lvrx128 v63,r11,r10
	temp.u32 = r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r26,32
	r26.s64 = 32;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// addi r5,r31,456
	ctx.r5.s64 = r31.s64 + 456;
	// addi r25,r7,19120
	r25.s64 = ctx.r7.s64 + 19120;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r24,r7,19040
	r24.s64 = ctx.r7.s64 + 19040;
	// stvrx128 v63,r8,r11
	ea = ctx.r8.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lis r29,-32253
	r29.s64 = -2113732608;
	// lvrx128 v62,r11,r4
	temp.u32 = r11.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r30,r31,488
	r30.s64 = r31.s64 + 488;
	// addi r23,r29,19024
	r23.s64 = r29.s64 + 19024;
	// addi r29,r31,504
	r29.s64 = r31.s64 + 504;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r22,r8,19008
	r22.s64 = ctx.r8.s64 + 19008;
	// addi r28,r31,520
	r28.s64 = r31.s64 + 520;
	// addi r21,r7,18992
	r21.s64 = ctx.r7.s64 + 18992;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// mr r19,r11
	r19.u64 = r11.u64;
	// mr r20,r11
	r20.u64 = r11.u64;
	// addi r18,r8,18976
	r18.s64 = ctx.r8.s64 + 18976;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r17,r7,18960
	r17.s64 = ctx.r7.s64 + 18960;
	// li r7,6
	ctx.r7.s64 = 6;
	// lvlx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r6,r11
	ea = ctx.r6.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvrx128 v63,r11,r27
	temp.u32 = r11.u32 + r27.u32;
	_mm_store_si128((__m128i*)v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r10,r26
	temp.u32 = ctx.r10.u32 + r26.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8)));
	// stvlx128 v63,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r10,r31,552
	ctx.r10.s64 = r31.s64 + 552;
	// stvrx128 v63,r5,r11
	ea = ctx.r5.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r25
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r3,r11
	ea = ctx.r3.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r24
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r30,r11
	ea = r30.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r23
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r29
	ea = r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r29,r11
	ea = r29.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r22
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r28,r11
	ea = r28.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lvx128 v63,r0,r21
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r21.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r11,r31,408
	r11.s64 = r31.s64 + 408;
	// lvx128 v63,r0,r18
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r18.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvlx128 v63,r0,r11
	ea = r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r11,r19
	ea = r11.u32 + r19.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r11,r31,536
	r11.s64 = r31.s64 + 536;
	// lvx128 v63,r0,r17
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// stvlx128 v63,r0,r11
	ea = r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r11,r19
	ea = r11.u32 + r19.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r6,r11,-80
	ctx.r6.s64 = r11.s64 + -80;
	// lhz r11,2(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// divwu r9,r6,r10
	ctx.r9.u32 = ctx.r6.u32 / ctx.r10.u32;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x825f3294
	goto loc_825F3294;
loc_825F33E4:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825F33EC:
	// lwz r9,376(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r5,260
	ctx.r5.s64 = 260;
	// lwz r4,564(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// mullw r11,r9,r7
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r10,27676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27676);
	// addi r11,r11,511
	r11.s64 = r11.s64 + 511;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r9,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r9.u32);
	// rlwinm r11,r11,23,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// addi r11,r11,172
	r11.s64 = r11.s64 + 172;
	// rldicr r30,r10,20,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r28,r11,9,0,22
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stb r27,387(r1)
	PPC_STORE_U8(ctx.r1.u32 + 387, r27.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F343C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825f343c
	if (!cr6.eq) goto loc_825F343C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f348c
	if (cr6.lt) goto loc_825F348C;
loc_825F3470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// beq cr6,0x825f348c
	if (cr6.eq) goto loc_825F348C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f3470
	if (!cr6.lt) goto loc_825F3470;
loc_825F348C:
	// stb r27,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r27.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82607088
	sub_82607088(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f34d8
	if (cr0.eq) goto loc_825F34D8;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// bge cr6,0x825f34d8
	if (!cr6.lt) goto loc_825F34D8;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x825f34d4
	if (!cr6.gt) goto loc_825F34D4;
	// lis r10,-640
	ctx.r10.s64 = -41943040;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825f34d8
	goto loc_825F34D8;
loc_825F34D4:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_825F34D8:
	// addi r11,r28,2048
	r11.s64 = r28.s64 + 2048;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(r11.u64, r30.u64, xer);
	// ble cr6,0x825f34f4
	if (!cr6.gt) goto loc_825F34F4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x825f3620
	goto loc_825F3620;
loc_825F34F4:
	// lis r11,-17
	r11.s64 = -1114112;
	// lwz r9,596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// oris r8,r10,65520
	ctx.r8.u64 = ctx.r10.u64 | 4293918720;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// divdu r11,r11,r8
	r11.u64 = r11.u64 / ctx.r8.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwimi r9,r11,14,12,17
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 14) & 0xFC000) | (ctx.r9.u64 & 0xFFFFFFFFFFF03FFF);
	// rlwinm r11,r9,18,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F;
	// stw r9,596(r31)
	PPC_STORE_U32(r31.u32 + 596, ctx.r9.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,20,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFF00000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
loc_825F353C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825f3558
	if (cr6.eq) goto loc_825F3558;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825f355c
	if (cr6.eq) goto loc_825F355C;
loc_825F3558:
	// lwz r4,616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 616);
loc_825F355C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825f2d88
	sub_825F2D88(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f3618
	if (cr6.eq) goto loc_825F3618;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x825f3598
	if (!cr6.eq) goto loc_825F3598;
	// rlwimi r11,r10,30,0,1
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x825f359c
	goto loc_825F359C;
loc_825F3598:
	// rlwimi r11,r10,28,2,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
loc_825F359C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r11.u32);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// blt cr6,0x825f353c
	if (cr6.lt) goto loc_825F353C;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1536
	ctx.r4.s64 = 1536;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8314d37c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// beq 0x825f35e0
	if (cr0.eq) goto loc_825F35E0;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x825f3600
	goto loc_825F3600;
loc_825F35E0:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f3618
	if (cr0.eq) goto loc_825F3618;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
loc_825F3600:
	// stw r11,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,608(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 608);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,608(r31)
	PPC_STORE_U8(r31.u32 + 608, r11.u8);
	// b 0x825f3620
	goto loc_825F3620;
loc_825F3618:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_825F3620:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
}

__attribute__((alias("__imp__sub_825F3624"))) PPC_WEAK_FUNC(sub_825F3624);
PPC_FUNC_IMPL(__imp__sub_825F3624) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825F3628"))) PPC_WEAK_FUNC(sub_825F3628);
PPC_FUNC_IMPL(__imp__sub_825F3628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r8,596(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r10,r11,172
	ctx.r10.s64 = r11.s64 + 172;
	// lwz r11,380(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r9,r8,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3F;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r8,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x825f3664
	if (!cr6.eq) goto loc_825F3664;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x825f3668
	goto loc_825F3668;
loc_825F3664:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_825F3668:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x825f3680
	if (cr6.lt) goto loc_825F3680;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_825F3680:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r11,r10,12,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r10,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r11,r9
	ctx.r8.u32 = r11.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwimi r10,r11,20,6,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0x3F00000) | (ctx.r10.u64 & 0xFFFFFFFFFC0FFFFF);
	// rlwinm. r11,r10,0,6,11
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F00000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// bne 0x825f36d4
	if (!cr0.eq) goto loc_825F36D4;
	// lbz r11,608(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 608);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,608(r3)
	PPC_STORE_U8(ctx.r3.u32 + 608, r11.u8);
	// blr 
	return;
loc_825F36D4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
}

__attribute__((alias("__imp__sub_825F36DC"))) PPC_WEAK_FUNC(sub_825F36DC);
PPC_FUNC_IMPL(__imp__sub_825F36DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F36E0"))) PPC_WEAK_FUNC(sub_825F36E0);
PPC_FUNC_IMPL(__imp__sub_825F36E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r3,23772
	r31.s64 = ctx.r3.s64 + 23772;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f3a68
	if (cr0.eq) goto loc_825F3A68;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f3a40
	if (cr6.eq) goto loc_825F3A40;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r28,-1
	r28.s64 = -1;
	// beq 0x825f3830
	if (cr0.eq) goto loc_825F3830;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f372c
	if (cr0.eq) goto loc_825F372C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82605590
	sub_82605590(ctx, base);
loc_825F372C:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// bl 0x825e3390
	sub_825E3390(ctx, base);
	// lis r8,-31901
	ctx.r8.s64 = -2090663936;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r8,r8,6656
	ctx.r8.s64 = ctx.r8.s64 + 6656;
	// addi r29,r11,27672
	r29.s64 = r11.s64 + 27672;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_825F3750:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825f3750
	if (!cr0.eq) goto loc_825F3750;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// blt cr6,0x825f3788
	if (cr6.lt) goto loc_825F3788;
	// li r10,14
	ctx.r10.s64 = 14;
loc_825F3788:
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwz r6,596(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lwz r5,380(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// rlwinm r11,r6,12,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// rlwinm r4,r4,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-25768
	ctx.r7.s64 = -1688731648;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r31.u32);
	// rlwinm r24,r6,4,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3;
	// ori r25,r7,59162
	r25.u64 = ctx.r7.u64 | 59162;
	// stw r5,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// addi r11,r4,-4
	r11.s64 = ctx.r4.s64 + -4;
	// stw r27,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r27.u32);
	// rlwinm r23,r9,9,0,22
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bl 0x826073b0
	sub_826073B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f3628
	sub_825F3628(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// lis r30,-31901
	r30.s64 = -2090663936;
	// b 0x825f3820
	goto loc_825F3820;
loc_825F3818:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
loc_825F3820:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,6664(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6664);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825f3818
	if (!cr6.eq) goto loc_825F3818;
loc_825F3830:
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rlwinm. r11,r11,0,12,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f38a8
	if (cr0.eq) goto loc_825F38A8;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_825F3848:
	// lbz r11,608(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f3878
	if (!cr0.eq) goto loc_825F3878;
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x825f3878
	if (cr6.lt) goto loc_825F3878;
	// ble cr6,0x825f3870
	if (!cr6.gt) goto loc_825F3870;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x825f387c
	goto loc_825F387C;
loc_825F3870:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// b 0x825f387c
	goto loc_825F387C;
loc_825F3878:
	// lwz r4,168(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 168);
loc_825F387C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x82607240
	sub_82607240(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x82607198
	sub_82607198(ctx, base);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x825f3848
	if (cr6.lt) goto loc_825F3848;
loc_825F38A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d24c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// srawi. r11,r11,29
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 29;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f38c8
	if (!cr0.eq) goto loc_825F38C8;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8884
	ctx.r10.u64 = ctx.r10.u64 | 8884;
	// b 0x825f38ec
	goto loc_825F38EC;
loc_825F38C8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x825f38dc
	if (!cr6.eq) goto loc_825F38DC;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8885
	ctx.r10.u64 = ctx.r10.u64 | 8885;
	// b 0x825f38ec
	goto loc_825F38EC;
loc_825F38DC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825f38f0
	if (!cr6.eq) goto loc_825F38F0;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8886
	ctx.r10.u64 = ctx.r10.u64 | 8886;
loc_825F38EC:
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_825F38F0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x825f3930
	if (cr6.eq) goto loc_825F3930;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825f3930
	if (cr6.eq) goto loc_825F3930;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825f3950
	if (!cr6.eq) goto loc_825F3950;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r11,224
	r11.s64 = 224;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// b 0x825f3950
	goto loc_825F3950;
loc_825F3930:
	// lhz r11,368(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 368);
	// lhz r10,370(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 370);
	// lhz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// lhz r8,170(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_825F3950:
	// bl 0x8314d0fc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// beq 0x825f3978
	if (cr0.eq) goto loc_825F3978;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_825F3978:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f3988
	if (cr0.eq) goto loc_825F3988;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_825F3988:
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f3998
	if (cr0.eq) goto loc_825F3998;
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// b 0x825f399c
	goto loc_825F399C;
loc_825F3998:
	// addi r4,r26,15408
	ctx.r4.s64 = r26.s64 + 15408;
loc_825F399C:
	// lbz r11,101(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825f39c0
	if (!cr6.eq) goto loc_825F39C0;
	// ori r11,r9,4
	r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// bl 0x825ec088
	sub_825EC088(ctx, base);
	// b 0x825f39c4
	goto loc_825F39C4;
loc_825F39C0:
	// bl 0x825ebff0
	sub_825EBFF0(ctx, base);
loc_825F39C4:
	// lwz r30,596(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm. r11,r30,0,5,5
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r26,14128
	ctx.r4.s64 = r26.s64 + 14128;
	// bne 0x825f39e0
	if (!cr0.eq) goto loc_825F39E0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_825F39E0:
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,608(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f3a00
	if (cr0.eq) goto loc_825F3A00;
	// rlwinm r10,r30,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x3F;
	// lwz r11,380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// b 0x825f3a08
	goto loc_825F3A08;
loc_825F3A00:
	// li r11,2048
	r11.s64 = 2048;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r27.u32);
loc_825F3A08:
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// stw r27,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x826073b0
	sub_826073B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x82605300
	sub_82605300(ctx, base);
loc_825F3A40:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_825F3A48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825f3a68
	if (cr6.eq) goto loc_825F3A68;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,41
	cr6.compare<uint32_t>(r30.u32, 41, xer);
	// blt cr6,0x825f3a48
	if (cr6.lt) goto loc_825F3A48;
loc_825F3A68:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f3a98
	if (cr6.eq) goto loc_825F3A98;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f3ac4
	if (cr6.eq) goto loc_825F3AC4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f3ac4
	if (cr6.eq) goto loc_825F3AC4;
	// b 0x825f3ab0
	goto loc_825F3AB0;
loc_825F3A98:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f3ac4
	if (cr6.eq) goto loc_825F3AC4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_825F3AB0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,19136
	ctx.r4.s64 = ctx.r10.s64 + 19136;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825F3AC4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f2e08
	sub_825F2E08(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r11,27696
	ctx.r3.s64 = r11.s64 + 27696;
	// bl 0x8314d38c
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r11,r27
	r11.u64 = r27.u64;
	// addi r7,r8,-13722
	ctx.r7.s64 = ctx.r8.s64 + -13722;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stb r27,-13722(r8)
	PPC_STORE_U8(ctx.r8.u32 + -13722, r27.u8);
	// stb r27,-2(r7)
	PPC_STORE_U8(ctx.r7.u32 + -2, r27.u8);
	// stb r27,-1(r7)
	PPC_STORE_U8(ctx.r7.u32 + -1, r27.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
}

__attribute__((alias("__imp__sub_825F3AFC"))) PPC_WEAK_FUNC(sub_825F3AFC);
PPC_FUNC_IMPL(__imp__sub_825F3AFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825F3B00"))) PPC_WEAK_FUNC(sub_825F3B00);
PPC_FUNC_IMPL(__imp__sub_825F3B00) {
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
	// bl 0x825f36e0
	sub_825F36E0(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stb r11,-13721(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13721, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F3B28"))) PPC_WEAK_FUNC(sub_825F3B28);
PPC_FUNC_IMPL(__imp__sub_825F3B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F3B2C"))) PPC_WEAK_FUNC(sub_825F3B2C);
PPC_FUNC_IMPL(__imp__sub_825F3B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F3B30"))) PPC_WEAK_FUNC(sub_825F3B30);
PPC_FUNC_IMPL(__imp__sub_825F3B30) {
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
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r3,23772
	r30.s64 = ctx.r3.s64 + 23772;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f3b68
	if (cr0.eq) goto loc_825F3B68;
loc_825F3B58:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825f36e0
	sub_825F36E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f3e90
	goto loc_825F3E90;
loc_825F3B68:
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, r25.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F3B84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825f3b84
	if (!cr6.eq) goto loc_825F3B84;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f3bd4
	if (cr6.lt) goto loc_825F3BD4;
loc_825F3BB8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x825f3bd4
	if (cr6.eq) goto loc_825F3BD4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825f3bb8
	if (!cr6.lt) goto loc_825F3BB8;
loc_825F3BD4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x825f3b58
	if (!cr6.eq) goto loc_825F3B58;
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,27696
	ctx.r3.s64 = r11.s64 + 27696;
	// bl 0x8314d39c
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825f3b58
	if (cr0.lt) goto loc_825F3B58;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,19172
	ctx.r5.s64 = r11.s64 + 19172;
	// addi r4,r10,19164
	ctx.r4.s64 = ctx.r10.s64 + 19164;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825f2f10
	sub_825F2F10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825f3b58
	if (cr0.lt) goto loc_825F3B58;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, r25.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F3C58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825f3c58
	if (!cr6.eq) goto loc_825F3C58;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f3cb8
	if (cr6.lt) goto loc_825F3CB8;
loc_825F3C90:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	cr6.compare<int32_t>(ctx.r10.s32, 46, xer);
	// beq cr6,0x825f3cb8
	if (cr6.eq) goto loc_825F3CB8;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x825f3cb8
	if (cr6.eq) goto loc_825F3CB8;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f3c90
	if (!cr6.lt) goto loc_825F3C90;
loc_825F3CB8:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// beq cr6,0x825f3cc8
	if (cr6.eq) goto loc_825F3CC8;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_825F3CC8:
	// lwz r10,596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm. r10,r10,0,12,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r27,r11,19156
	r27.s64 = r11.s64 + 19156;
	// beq 0x825f3dac
	if (cr0.eq) goto loc_825F3DAC;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lis r26,-31933
	r26.s64 = -2092761088;
loc_825F3CE8:
	// lbz r11,-13724(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + -13724);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825f3b58
	if (!cr0.eq) goto loc_825F3B58;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82607590
	sub_82607590(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825f3b58
	if (cr6.eq) goto loc_825F3B58;
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825f3d74
	if (!cr6.eq) goto loc_825F3D74;
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f3d68
	if (cr6.eq) goto loc_825F3D68;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// b 0x825f3d7c
	goto loc_825F3D7C;
loc_825F3D68:
	// li r11,1
	r11.s64 = 1;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x825f3d7c
	goto loc_825F3D7C;
loc_825F3D74:
	// li r11,0
	r11.s64 = 0;
	// oris r11,r11,65520
	r11.u64 = r11.u64 | 4293918720;
loc_825F3D7C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82607240
	sub_82607240(ctx, base);
	// lwzu r3,4(r28)
	ea = 4 + r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// bl 0x82607198
	sub_82607198(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825f3ce8
	if (cr6.lt) goto loc_825F3CE8;
loc_825F3DAC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_825F3DBC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x826074d8
	sub_826074D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825f3dbc
	if (!cr0.eq) goto loc_825F3DBC;
	// stw r25,348(r30)
	PPC_STORE_U32(r30.u32 + 348, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,352(r30)
	PPC_STORE_U32(r30.u32 + 352, r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r25.u32);
	// addi r31,r30,348
	r31.s64 = r30.s64 + 348;
	// stw r25,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r25.u32);
	// bl 0x82605260
	sub_82605260(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,364(r30)
	PPC_STORE_U32(r30.u32 + 364, ctx.r3.u32);
	// beq 0x825f3b58
	if (cr0.eq) goto loc_825F3B58;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r25.u32);
	// stw r25,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r25.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x826073b0
	sub_826073B0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8314d24c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// li r11,2048
	r11.s64 = 2048;
	// lbz r10,600(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,380(r30)
	PPC_STORE_U32(r30.u32 + 380, r11.u32);
	// lwz r9,596(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// stw r25,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r25.u32);
	// rlwinm r9,r9,0,12,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r9,596(r30)
	PPC_STORE_U32(r30.u32 + 596, ctx.r9.u32);
	// lbz r11,389(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 389);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwimi r10,r11,2,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r10,600(r30)
	PPC_STORE_U8(r30.u32 + 600, ctx.r10.u8);
loc_825F3E90:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
}

__attribute__((alias("__imp__sub_825F3E94"))) PPC_WEAK_FUNC(sub_825F3E94);
PPC_FUNC_IMPL(__imp__sub_825F3E94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825F3E98"))) PPC_WEAK_FUNC(sub_825F3E98);
PPC_FUNC_IMPL(__imp__sub_825F3E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,23772
	r30.s64 = ctx.r3.s64 + 23772;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825f3fe0
	if (cr6.eq) goto loc_825F3FE0;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f3eec
	if (cr6.eq) goto loc_825F3EEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_825F3EEC:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f3f1c
	if (cr6.eq) goto loc_825F3F1C;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825F3F1C:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f3f54
	if (cr6.eq) goto loc_825F3F54;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-2
	r12.s64 = -131072;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,4095
	r12.u64 = r12.u64 | 4095;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825F3F54:
	// lis r12,0
	r12.s64 = 0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f3f9c
	if (cr6.eq) goto loc_825F3F9C;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-1
	r12.s64 = -65536;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825F3F9C:
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f3fe0
	if (cr6.eq) goto loc_825F3FE0;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,21,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825F3FE0:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f4030
	if (cr6.eq) goto loc_825F4030;
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f4030
	if (cr6.eq) goto loc_825F4030;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_825F4030:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f4068
	if (cr6.eq) goto loc_825F4068;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f4068
	if (cr6.eq) goto loc_825F4068;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
loc_825F4068:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// addi r24,r11,11968
	r24.s64 = r11.s64 + 11968;
	// srawi. r11,r10,29
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 29;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f4090
	if (!cr0.eq) goto loc_825F4090;
	// lis r25,1792
	r25.s64 = 117440512;
	// mr r26,r24
	r26.u64 = r24.u64;
	// li r29,525
	r29.s64 = 525;
	// ori r25,r25,21
	r25.u64 = r25.u64 | 21;
	// b 0x825f40d4
	goto loc_825F40D4;
loc_825F4090:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x825f40ac
	if (!cr6.eq) goto loc_825F40AC;
	// lis r25,1792
	r25.s64 = 117440512;
	// addi r26,r24,2160
	r26.s64 = r24.s64 + 2160;
	// li r29,933
	r29.s64 = 933;
	// ori r25,r25,19
	r25.u64 = r25.u64 | 19;
	// b 0x825f40d4
	goto loc_825F40D4;
loc_825F40AC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825f40c8
	if (!cr6.eq) goto loc_825F40C8;
	// lis r25,1792
	r25.s64 = 117440512;
	// addi r26,r24,5896
	r26.s64 = r24.s64 + 5896;
	// li r29,210
	r29.s64 = 210;
	// ori r25,r25,15
	r25.u64 = r25.u64 | 15;
	// b 0x825f40d4
	goto loc_825F40D4;
loc_825F40C8:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825F40D4:
	// addi r4,r29,5
	ctx.r4.s64 = r29.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r9,r11,15104
	ctx.r9.u64 = r11.u64 | 15104;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r22,0
	r22.s64 = 0;
	// rlwimi r9,r11,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r29,18
	ctx.r10.u64 = r29.u32 & 0x3FFF;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stwu r10,4(r29)
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f4154
	if (!cr6.gt) goto loc_825F4154;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F4154:
	// lis r11,-16368
	r11.s64 = -1072693248;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r24,2100
	ctx.r4.s64 = r24.s64 + 2100;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stwu r9,4(r29)
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r29.u32 = ea;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r29,60
	r11.s64 = r29.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// oris r9,r25,4096
	ctx.r9.u64 = r25.u64 | 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f41c0
	if (!cr6.gt) goto loc_825F41C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F41C0:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r29,8978
	r29.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r27,0
	r27.s64 = 0;
	// mr r11,r22
	r11.u64 = r22.u64;
	// ori r11,r27,65535
	r11.u64 = r27.u64 | 65535;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	r26.s64 = 8205;
	// li r25,8704
	r25.s64 = 8704;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// mr r24,r22
	r24.u64 = r22.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x825f4268
	if (!cr6.gt) goto loc_825F4268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F4268:
	// lis r11,5
	r11.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,18432
	r11.u64 = r11.u64 | 18432;
	// addi r29,r30,392
	r29.s64 = r30.s64 + 392;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lhz r10,372(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 372);
	// rlwinm r11,r11,0,22,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FC;
	// rlwinm r10,r10,17,0,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFC00000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// ori r11,r11,18434
	r11.u64 = r11.u64 | 18434;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// rlwimi r11,r9,24,1,12
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x7FF80000) | (r11.u64 & 0xFFFFFFFF8007FFFF);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// lwz r8,604(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 604);
	// lwz r10,584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r26,r11,2,30,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// lwzx r25,r10,r30
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// clrlwi r23,r26,31
	r23.u64 = r26.u32 & 0x1;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// mulli r11,r23,56
	r11.s64 = r23.s64 * 56;
	// addi r11,r11,527
	r11.s64 = r11.s64 + 527;
	// mulli r9,r10,1536
	ctx.r9.s64 = ctx.r10.s64 * 1536;
	// rlwinm r10,r11,0,0,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// srawi. r11,r8,29
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFFF) != 0);
	r11.s64 = ctx.r8.s32 >> 29;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r25
	r28.u64 = ctx.r10.u64 + r25.u64;
	// bne 0x825f4334
	if (!cr0.eq) goto loc_825F4334;
loc_825F4320:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,1536
	ctx.r9.u64 = ctx.r9.u64 | 1536;
	// b 0x825f4354
	goto loc_825F4354;
loc_825F4334:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825f4320
	if (cr6.eq) goto loc_825F4320;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825f4390
	if (!cr6.eq) goto loc_825F4390;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// andi. r9,r9,49400
	ctx.r9.u64 = ctx.r9.u64 & 49400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// oris r9,r9,19200
	ctx.r9.u64 = ctx.r9.u64 | 1258291200;
	// ori r9,r9,2560
	ctx.r9.u64 = ctx.r9.u64 | 2560;
loc_825F4354:
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// lwz r8,388(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// rlwinm r10,r28,0,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1FFFFFFC;
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,75
	ctx.r10.s64 = 75;
	// rlwimi r7,r11,30,2,31
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0x3FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFC0000000);
	// lis r11,19200
	r11.s64 = 1258291200;
	// rlwimi r8,r10,24,0,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF800000) | (ctx.r8.u64 & 0xFFFFFFFF007FFFFF);
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
loc_825F4390:
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lis r11,47
	r11.s64 = 3080192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// li r5,192
	ctx.r5.s64 = 192;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r29,192
	r11.s64 = r29.s64 + 192;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lbz r11,608(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 608);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f43dc
	if (cr0.eq) goto loc_825F43DC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// bl 0x82605590
	sub_82605590(ctx, base);
loc_825F43DC:
	// lhz r11,14(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// rotlwi r11,r11,9
	r11.u64 = __builtin_rotateleft32(r11.u32, 9);
	// addi r7,r10,27672
	ctx.r7.s64 = ctx.r10.s64 + 27672;
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
loc_825F43F0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825f43f0
	if (!cr0.eq) goto loc_825F43F0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r8,6144
	ctx.r8.s64 = 6144;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divwu r11,r11,r8
	r11.u32 = r11.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// mr r24,r11
	r24.u64 = r11.u64;
	// blt cr6,0x825f442c
	if (cr6.lt) goto loc_825F442C;
	// li r24,14
	r24.s64 = 14;
loc_825F442C:
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// lis r9,-25768
	ctx.r9.s64 = -1688731648;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r28,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,596(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// ori r7,r9,59162
	ctx.r7.u64 = ctx.r9.u64 | 59162;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r11,r11,2,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r8,r8,4,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r28,3
	ctx.r10.u64 = r28.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,10392(r31)
	PPC_STORE_U32(r31.u32 + 10392, ctx.r10.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// ble cr6,0x825f4498
	if (!cr6.gt) goto loc_825F4498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F4498:
	// li r11,8198
	r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r28,r22
	r28.u64 = r22.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stw r11,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, r11.u32);
	// lwz r29,376(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 376);
loc_825F44C0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f44d8
	if (!cr6.gt) goto loc_825F44D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F44D8:
	// li r11,8450
	r11.s64 = 8450;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(r29.u32, 65535, xer);
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ble cr6,0x825f44fc
	if (!cr6.gt) goto loc_825F44FC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
loc_825F44FC:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,129
	ctx.r8.s64 = 129;
	// ori r9,r9,13825
	ctx.r9.u64 = ctx.r9.u64 | 13825;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// subf. r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x825f452c
	if (cr0.eq) goto loc_825F452C;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// b 0x825f44c0
	goto loc_825F44C0;
loc_825F452C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r22,10392(r31)
	PPC_STORE_U32(r31.u32 + 10392, r22.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f4544
	if (!cr6.gt) goto loc_825F4544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F4544:
	// li r11,8198
	r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stw r10,13904(r31)
	PPC_STORE_U32(r31.u32 + 13904, ctx.r10.u32);
	// ble cr6,0x825f4580
	if (!cr6.gt) goto loc_825F4580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F4580:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,6
	ctx.r9.s64 = 6;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,65024
	r11.u64 = r11.u64 | 4261412864;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r27,588(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// bl 0x825e4850
	sub_825E4850(ctx, base);
	// stw r3,588(r30)
	PPC_STORE_U32(r30.u32 + 588, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// rlwimi r11,r26,28,2,3
	r11.u64 = (__builtin_rotateleft32(r26.u32, 28) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// addi r29,r25,16
	r29.s64 = r25.s64 + 16;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// beq cr6,0x825f463c
	if (cr6.eq) goto loc_825F463C;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r31,14128
	ctx.r4.s64 = r31.s64 + 14128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r29,r29,56
	r29.s64 = r29.s64 + 56;
loc_825F463C:
	// subf r11,r25,r29
	r11.s64 = r29.s64 - r25.s64;
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,511
	r11.s64 = r11.s64 + 511;
	// rlwinm r11,r11,0,0,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// beq 0x825f468c
	if (cr0.eq) goto loc_825F468C;
	// lbz r11,600(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 592);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x825f4674
	if (cr0.eq) goto loc_825F4674;
	// bl 0x825ec088
	sub_825EC088(ctx, base);
	// b 0x825f4678
	goto loc_825F4678;
loc_825F4674:
	// bl 0x825ebff0
	sub_825EBFF0(ctx, base);
loc_825F4678:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// lwz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 592);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r29,r29,1536
	r29.s64 = r29.s64 + 1536;
loc_825F468C:
	// lwz r8,584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// mulli r10,r24,12
	ctx.r10.s64 = r24.s64 * 12;
	// lhz r11,12(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 12);
	// lwz r7,596(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// lbz r6,608(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 608);
	// rlwinm r8,r8,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r28,26,0,5
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 26) & 0xFC000000;
	// rlwinm r31,r11,9,0,22
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// subf r10,r8,r29
	ctx.r10.s64 = r29.s64 - ctx.r8.s64;
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// rlwinm r11,r10,23,9,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r11.u16);
	// beq 0x825f473c
	if (cr0.eq) goto loc_825F473C;
	// lwz r11,380(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r22,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r22.u32);
	// stw r11,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r11.u32);
	// bl 0x825e3390
	sub_825E3390(ctx, base);
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// addi r7,r30,348
	ctx.r7.s64 = r30.s64 + 348;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// addi r11,r10,5
	r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826073b0
	sub_826073B0(ctx, base);
	// lbz r11,608(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 608);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,608(r30)
	PPC_STORE_U8(r30.u32 + 608, r11.u8);
	// bl 0x825f3628
	sub_825F3628(ctx, base);
loc_825F473C:
	// lbz r10,608(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 608);
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,608(r30)
	PPC_STORE_U8(r30.u32 + 608, ctx.r10.u8);
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F4758"))) PPC_WEAK_FUNC(sub_825F4758);
PPC_FUNC_IMPL(__imp__sub_825F4758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825F475C"))) PPC_WEAK_FUNC(sub_825F475C);
PPC_FUNC_IMPL(__imp__sub_825F475C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4760"))) PPC_WEAK_FUNC(sub_825F4760);
PPC_FUNC_IMPL(__imp__sub_825F4760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r11,-13984
	ctx.r5.s64 = r11.s64 + -13984;
	// lbz r11,262(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 262);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825f483c
	if (cr0.eq) goto loc_825F483C;
	// lbz r11,24380(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24380);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f4818
	if (!cr0.eq) goto loc_825F4818;
	// bl 0x825f3b30
	sub_825F3B30(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r5,r9,19192
	ctx.r5.s64 = ctx.r9.s64 + 19192;
	// and r6,r11,r10
	ctx.r6.u64 = r11.u64 & ctx.r10.u64;
	// addi r4,r8,19180
	ctx.r4.s64 = ctx.r8.s64 + 19180;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f47ec
	if (cr6.eq) goto loc_825F47EC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f483c
	if (cr6.eq) goto loc_825F483C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f483c
	if (cr6.eq) goto loc_825F483C;
	// b 0x825f4804
	goto loc_825F4804;
loc_825F47EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f483c
	if (cr6.eq) goto loc_825F483C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_825F4804:
	// li r3,27
	ctx.r3.s64 = 27;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825f483c
	goto loc_825F483C;
loc_825F4818:
	// lbz r11,260(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 260);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825f482c
	if (cr0.eq) goto loc_825F482C;
	// bl 0x825f36e0
	sub_825F36E0(ctx, base);
	// b 0x825f483c
	goto loc_825F483C;
loc_825F482C:
	// lbz r11,261(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 261);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825f483c
	if (cr0.eq) goto loc_825F483C;
	// bl 0x825f3e98
	sub_825F3E98(ctx, base);
loc_825F483C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825F4848"))) PPC_WEAK_FUNC(sub_825F4848);
PPC_FUNC_IMPL(__imp__sub_825F4848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F484C"))) PPC_WEAK_FUNC(sub_825F484C);
PPC_FUNC_IMPL(__imp__sub_825F484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4850"))) PPC_WEAK_FUNC(sub_825F4850);
PPC_FUNC_IMPL(__imp__sub_825F4850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825f4884
	if (!cr0.eq) goto loc_825F4884;
loc_825F487C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f48e8
	goto loc_825F48E8;
loc_825F4884:
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lis r4,-31360
	ctx.r4.s64 = -2055208960;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825f48c0
	if (!cr0.eq) goto loc_825F48C0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825f487c
	goto loc_825F487C;
loc_825F48C0:
	// lis r11,80
	r11.s64 = 5242880;
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// ori r11,r11,9
	r11.u64 = r11.u64 | 9;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
loc_825F48E8:
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

__attribute__((alias("__imp__sub_825F48FC"))) PPC_WEAK_FUNC(sub_825F48FC);
PPC_FUNC_IMPL(__imp__sub_825F48FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4900"))) PPC_WEAK_FUNC(sub_825F4900);
PPC_FUNC_IMPL(__imp__sub_825F4900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,24440(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24440);
	// addi r5,r3,24440
	ctx.r5.s64 = ctx.r3.s64 + 24440;
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// bne cr6,0x825f498c
	if (!cr6.eq) goto loc_825F498C;
	// lwz r8,11024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825F492C:
	// lwz r8,24452(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24452);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f4950
	if (cr6.eq) goto loc_825F4950;
	// lwz r4,11036(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x825f4964
	if (cr6.lt) goto loc_825F4964;
loc_825F4950:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// sld r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r7.u8 & 0x7F));
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r4.u32);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_825F4964:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x825f492c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F492C;
loc_825F4970:
	// mfmsr r8
	// mtmsrd r13,1
	// ldarx r11,0,r5
	reserved.u64 = *(uint64_t*)(base + ctx.r5.u32);
	r11.u64 = __builtin_bswap64(reserved.u64);
	// and r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 & r11.u64;
	// stdcx. r10,0,r5
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825f4970
	if (!cr0.eq) goto loc_825F4970;
loc_825F498C:
	// ld r11,0(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cntlzd r11,r11
	r11.u64 = r11.u64 == 0 ? 64 : __builtin_clzll(r11.u64);
	// subfic r3,r11,63
	xer.ca = r11.u32 <= 63;
	ctx.r3.s64 = 63 - r11.s64;
}

__attribute__((alias("__imp__sub_825F499C"))) PPC_WEAK_FUNC(sub_825F499C);
PPC_FUNC_IMPL(__imp__sub_825F499C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F49A0"))) PPC_WEAK_FUNC(sub_825F49A0);
PPC_FUNC_IMPL(__imp__sub_825F49A0) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f49cc
	if (cr6.eq) goto loc_825F49CC;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825F49CC:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r30,0
	r30.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f49e8
	if (cr6.eq) goto loc_825F49E8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825F49E8:
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
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

__attribute__((alias("__imp__sub_825F4A00"))) PPC_WEAK_FUNC(sub_825F4A00);
PPC_FUNC_IMPL(__imp__sub_825F4A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4A04"))) PPC_WEAK_FUNC(sub_825F4A04);
PPC_FUNC_IMPL(__imp__sub_825F4A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4A08"))) PPC_WEAK_FUNC(sub_825F4A08);
PPC_FUNC_IMPL(__imp__sub_825F4A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,13920(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13920);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f4a90
	if (cr0.eq) goto loc_825F4A90;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,15320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15320);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f4a3c
	if (!cr6.eq) goto loc_825F4A3C;
	// lwz r7,156(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r10,152(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// rlwinm r9,r7,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825F4A3C:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r9,r9,164
	ctx.r9.s64 = ctx.r9.s64 + 164;
	// andc r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bge cr6,0x825f4a64
	if (!cr6.lt) goto loc_825F4A64;
loc_825F4A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825F4A64:
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r3,15320(r11)
	PPC_STORE_U32(r11.u32 + 15320, ctx.r3.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
loc_825F4A90:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f4a5c
	if (!cr6.eq) goto loc_825F4A5C;
	// lwz r10,152(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// stw r10,15332(r11)
	PPC_STORE_U32(r11.u32 + 15332, ctx.r10.u32);
	// lwz r11,156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,152(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
}

__attribute__((alias("__imp__sub_825F4AB0"))) PPC_WEAK_FUNC(sub_825F4AB0);
PPC_FUNC_IMPL(__imp__sub_825F4AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4AB4"))) PPC_WEAK_FUNC(sub_825F4AB4);
PPC_FUNC_IMPL(__imp__sub_825F4AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4AB8"))) PPC_WEAK_FUNC(sub_825F4AB8);
PPC_FUNC_IMPL(__imp__sub_825F4AB8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825f4adc
	if (!cr6.eq) goto loc_825F4ADC;
	// li r29,-1
	r29.s64 = -1;
loc_825F4ADC:
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825f4b4c
	if (cr6.eq) goto loc_825F4B4C;
loc_825F4AEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f4b40
	if (cr0.eq) goto loc_825F4B40;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// and. r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f4b08
	if (cr0.eq) goto loc_825F4B08;
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_825F4B08:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f4b18
	if (cr0.eq) goto loc_825F4B18;
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
loc_825F4B18:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bne cr6,0x825f4b40
	if (!cr6.eq) goto loc_825F4B40;
	// lwz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f4b40
	if (cr6.eq) goto loc_825F4B40;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f4ab8
	sub_825F4AB8(ctx, base);
loc_825F4B40:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x825f4aec
	if (!cr0.eq) goto loc_825F4AEC;
loc_825F4B4C:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x825f4adc
	if (!cr6.eq) goto loc_825F4ADC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F4B5C"))) PPC_WEAK_FUNC(sub_825F4B5C);
PPC_FUNC_IMPL(__imp__sub_825F4B5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F4B60"))) PPC_WEAK_FUNC(sub_825F4B60);
PPC_FUNC_IMPL(__imp__sub_825F4B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,512
	ctx.r4.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r10,r4,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r6,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = r11.s64 - ctx.r6.s64;
}

__attribute__((alias("__imp__sub_825F4BB8"))) PPC_WEAK_FUNC(sub_825F4BB8);
PPC_FUNC_IMPL(__imp__sub_825F4BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825f9198
	sub_825F9198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F4BBC"))) PPC_WEAK_FUNC(sub_825F4BBC);
PPC_FUNC_IMPL(__imp__sub_825F4BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4BC0"))) PPC_WEAK_FUNC(sub_825F4BC0);
PPC_FUNC_IMPL(__imp__sub_825F4BC0) {
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
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r29,13924(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13924);
	// li r4,502
	ctx.r4.s64 = 502;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// lbz r11,11069(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f4bf8
	if (cr0.eq) goto loc_825F4BF8;
	// lwz r31,17136(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 17136);
	// b 0x825f4c54
	goto loc_825F4C54;
loc_825F4BF8:
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13924(r30)
	PPC_STORE_U32(r30.u32 + 13924, r31.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -1073741824;
	// bne cr6,0x825f4c30
	if (!cr6.eq) goto loc_825F4C30;
	// lwz r11,13920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13920);
	// stw r3,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r3.u32);
	// b 0x825f4c48
	goto loc_825F4C48;
loc_825F4C30:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13928(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13928);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_825F4C48:
	// addi r4,r3,2008
	ctx.r4.s64 = ctx.r3.s64 + 2008;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825F4C54:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,2008
	r11.s64 = r31.s64 + 2008;
	// stw r3,13928(r30)
	PPC_STORE_U32(r30.u32 + 13928, ctx.r3.u32);
	// stw r11,13932(r30)
	PPC_STORE_U32(r30.u32 + 13932, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825F4C68"))) PPC_WEAK_FUNC(sub_825F4C68);
PPC_FUNC_IMPL(__imp__sub_825F4C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825F4C6C"))) PPC_WEAK_FUNC(sub_825F4C6C);
PPC_FUNC_IMPL(__imp__sub_825F4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4C70"))) PPC_WEAK_FUNC(sub_825F4C70);
PPC_FUNC_IMPL(__imp__sub_825F4C70) {
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
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r29,13936(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13936);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// lbz r11,11069(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f4ca8
	if (cr0.eq) goto loc_825F4CA8;
	// lwz r31,17136(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 17136);
	// b 0x825f4d04
	goto loc_825F4D04;
loc_825F4CA8:
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13936(r30)
	PPC_STORE_U32(r30.u32 + 13936, r31.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -1073741824;
	// bne cr6,0x825f4ce0
	if (!cr6.eq) goto loc_825F4CE0;
	// lwz r11,13920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13920);
	// stw r3,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r3.u32);
	// b 0x825f4cf8
	goto loc_825F4CF8;
loc_825F4CE0:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13940(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13940);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_825F4CF8:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825F4D04:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r3,13940(r30)
	PPC_STORE_U32(r30.u32 + 13940, ctx.r3.u32);
	// stw r11,13944(r30)
	PPC_STORE_U32(r30.u32 + 13944, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825F4D18"))) PPC_WEAK_FUNC(sub_825F4D18);
PPC_FUNC_IMPL(__imp__sub_825F4D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825F4D1C"))) PPC_WEAK_FUNC(sub_825F4D1C);
PPC_FUNC_IMPL(__imp__sub_825F4D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F4D20"))) PPC_WEAK_FUNC(sub_825F4D20);
PPC_FUNC_IMPL(__imp__sub_825F4D20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f4d54
	if (!cr6.eq) goto loc_825F4D54;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f4d5c
	goto loc_825F4D5C;
loc_825F4D54:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F4D5C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,15376
	r31.s64 = r11.s64 + 15376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F4D9C"))) PPC_WEAK_FUNC(sub_825F4D9C);
PPC_FUNC_IMPL(__imp__sub_825F4D9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F4DA0"))) PPC_WEAK_FUNC(sub_825F4DA0);
PPC_FUNC_IMPL(__imp__sub_825F4DA0) {
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
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f4dd0
	if (!cr6.eq) goto loc_825F4DD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f4dd8
	goto loc_825F4DD8;
loc_825F4DD0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F4DD8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,15376
	r31.s64 = r11.s64 + 15376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_825F4E14"))) PPC_WEAK_FUNC(sub_825F4E14);
PPC_FUNC_IMPL(__imp__sub_825F4E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4E18"))) PPC_WEAK_FUNC(sub_825F4E18);
PPC_FUNC_IMPL(__imp__sub_825F4E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f4e40
	if (!cr6.eq) goto loc_825F4E40;
	// bl 0x825f4da0
	sub_825F4DA0(ctx, base);
	// b 0x825f4e5c
	goto loc_825F4E5C;
loc_825F4E40:
	// bl 0x825f4b60
	sub_825F4B60(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f4e5c
	if (!cr0.eq) goto loc_825F4E5C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825F4E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F4E6C"))) PPC_WEAK_FUNC(sub_825F4E6C);
PPC_FUNC_IMPL(__imp__sub_825F4E6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F4E70"))) PPC_WEAK_FUNC(sub_825F4E70);
PPC_FUNC_IMPL(__imp__sub_825F4E70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r11,r10,1,28,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xF) | (r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, r11.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825f4ef4
	if (cr6.eq) goto loc_825F4EF4;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f4ed0
	if (!cr6.eq) goto loc_825F4ED0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f4ed8
	goto loc_825F4ED8;
loc_825F4ED0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F4ED8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x825e32c0
	sub_825E32C0(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_825F4EF4:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f4f08
	if (!cr6.eq) goto loc_825F4F08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f4da0
	sub_825F4DA0(ctx, base);
loc_825F4F08:
	// stw r30,13920(r31)
	PPC_STORE_U32(r31.u32 + 13920, r30.u32);
	// li r11,4
	r11.s64 = 4;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r10,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r9,15332(r31)
	PPC_STORE_U32(r31.u32 + 15332, ctx.r9.u32);
	// lbz r10,11069(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,15320(r31)
	PPC_STORE_U32(r31.u32 + 15320, r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,15316(r31)
	PPC_STORE_U32(r31.u32 + 15316, r11.u32);
	// stw r29,13924(r31)
	PPC_STORE_U32(r31.u32 + 13924, r29.u32);
	// stw r29,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, r29.u32);
	// stw r29,13932(r31)
	PPC_STORE_U32(r31.u32 + 13932, r29.u32);
	// stw r29,13936(r31)
	PPC_STORE_U32(r31.u32 + 13936, r29.u32);
	// stw r29,13940(r31)
	PPC_STORE_U32(r31.u32 + 13940, r29.u32);
	// stw r29,13944(r31)
	PPC_STORE_U32(r31.u32 + 13944, r29.u32);
	// stb r10,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, ctx.r10.u8);
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r24,r30,24
	r24.s64 = r30.s64 + 24;
	// beq cr6,0x825f4fb0
	if (cr6.eq) goto loc_825F4FB0;
	// li r11,5
	r11.s64 = 5;
	// addi r10,r28,-8
	ctx.r10.s64 = r28.s64 + -8;
	// addi r9,r24,-8
	ctx.r9.s64 = r24.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F4FA0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x825f4fa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F4FA0;
	// b 0x825f4fc4
	goto loc_825F4FC4;
loc_825F4FB0:
	// std r29,24(r30)
	PPC_STORE_U64(r30.u32 + 24, r29.u64);
	// std r29,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r29.u64);
	// std r29,40(r30)
	PPC_STORE_U64(r30.u32 + 40, r29.u64);
	// std r29,48(r30)
	PPC_STORE_U64(r30.u32 + 48, r29.u64);
	// std r29,56(r30)
	PPC_STORE_U64(r30.u32 + 56, r29.u64);
loc_825F4FC4:
	// li r11,5
	r11.s64 = 5;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r9,r30,56
	ctx.r9.s64 = r30.s64 + 56;
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq cr6,0x825f4fec
	if (cr6.eq) goto loc_825F4FEC;
	// addi r10,r27,-8
	ctx.r10.s64 = r27.s64 + -8;
loc_825F4FDC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x825f4fdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F4FDC;
	// b 0x825f4ffc
	goto loc_825F4FFC;
loc_825F4FEC:
	// addi r10,r24,-8
	ctx.r10.s64 = r24.s64 + -8;
loc_825F4FF0:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x825f4ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F4FF0;
loc_825F4FFC:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// rlwinm r9,r26,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 28) & 0x1;
	// rlwinm r11,r26,3,23,23
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0x100;
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm. r9,r26,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// li r28,-1
	r28.s64 = -1;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// beq 0x825f503c
	if (cr0.eq) goto loc_825F503C;
	// stw r28,11040(r31)
	PPC_STORE_U32(r31.u32 + 11040, r28.u32);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// b 0x825f504c
	goto loc_825F504C;
loc_825F503C:
	// lis r11,64
	r11.s64 = 4194304;
	// stw r11,11040(r31)
	PPC_STORE_U32(r31.u32 + 11040, r11.u32);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// rlwinm r11,r11,0,22,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
loc_825F504C:
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// clrlwi. r10,r26,30
	ctx.r10.u64 = r26.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,21,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// rlwinm r11,r11,0,15,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r29,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r29.u64);
	// rlwinm r11,r11,0,29,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF87;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
	// stb r10,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// beq 0x825f5190
	if (cr0.eq) goto loc_825F5190;
	// rlwinm. r11,r26,0,30,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// beq 0x825f50b4
	if (cr0.eq) goto loc_825F50B4;
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
	// b 0x825f50cc
	goto loc_825F50CC;
loc_825F50B4:
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// li r5,4224
	ctx.r5.s64 = 4224;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
loc_825F50CC:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r25,13124(r31)
	PPC_STORE_U32(r31.u32 + 13124, r25.u32);
	// ori r11,r11,48
	r11.u64 = r11.u64 | 48;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
	// beq cr6,0x825f5158
	if (cr6.eq) goto loc_825F5158;
	// addi r8,r31,13364
	ctx.r8.s64 = r31.s64 + 13364;
	// mtctr r25
	ctr.u64 = r25.u64;
	// addi r11,r23,-12
	r11.s64 = r23.s64 + -12;
	// addi r10,r31,13124
	ctx.r10.s64 = r31.s64 + 13124;
loc_825F50FC:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825f510c
	if (cr6.gt) goto loc_825F510C;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_825F510C:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825f511c
	if (cr6.gt) goto loc_825F511C;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_825F511C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stwu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825f50fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F50FC;
loc_825F5158:
	// li r11,2
	r11.s64 = 2;
	// stw r6,13556(r31)
	PPC_STORE_U32(r31.u32 + 13556, ctx.r6.u32);
	// rlwinm. r10,r26,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r7,13560(r31)
	PPC_STORE_U32(r31.u32 + 13560, ctx.r7.u32);
	// stw r29,13564(r31)
	PPC_STORE_U32(r31.u32 + 13564, r29.u32);
	// stw r11,13096(r31)
	PPC_STORE_U32(r31.u32 + 13096, r11.u32);
	// beq 0x825f5190
	if (cr0.eq) goto loc_825F5190;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm r4,r26,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 25) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9238
	sub_825E9238(ctx, base);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
loc_825F5190:
	// rlwinm. r11,r26,0,29,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f51a0
	if (cr0.eq) goto loc_825F51A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e91d8
	sub_825E91D8(ctx, base);
loc_825F51A0:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// stw r29,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r29.u32);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f527c
	if (!cr0.eq) goto loc_825F527C;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f527c
	if (!cr0.eq) goto loc_825F527C;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825f527c
	if (!cr0.eq) goto loc_825F527C;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f51dc
	if (cr0.eq) goto loc_825F51DC;
	// li r11,1
	r11.s64 = 1;
	// b 0x825f5270
	goto loc_825F5270;
loc_825F51DC:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5268
	if (cr0.eq) goto loc_825F5268;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5200
	if (cr6.eq) goto loc_825F5200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5268
	if (!cr6.eq) goto loc_825F5268;
loc_825F5200:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5218
	if (cr6.eq) goto loc_825F5218;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5268
	if (!cr6.eq) goto loc_825F5268;
loc_825F5218:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5230
	if (cr6.eq) goto loc_825F5230;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5268
	if (!cr6.eq) goto loc_825F5268;
loc_825F5230:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5248
	if (cr6.eq) goto loc_825F5248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5268
	if (!cr6.eq) goto loc_825F5268;
loc_825F5248:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5260
	if (cr6.eq) goto loc_825F5260;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5268
	if (!cr6.eq) goto loc_825F5268;
loc_825F5260:
	// li r11,1
	r11.s64 = 1;
	// b 0x825f526c
	goto loc_825F526C;
loc_825F5268:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825F526C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825F5270:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825f5280
	if (!cr0.eq) goto loc_825F5280;
loc_825F527C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825F5280:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// li r5,768
	ctx.r5.s64 = 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, r28.u32);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r29,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, r29.u32);
	// addi r3,r31,1152
	ctx.r3.s64 = r31.s64 + 1152;
	// stw r29,11060(r31)
	PPC_STORE_U32(r31.u32 + 11060, r29.u32);
	// stw r29,11064(r31)
	PPC_STORE_U32(r31.u32 + 11064, r29.u32);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r12,7
	r12.s64 = 7;
	// ld r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U64(r24.u32 + 32);
	// li r11,7
	r11.s64 = 7;
	// rldicr r12,r12,46,17
	r12.u64 = __builtin_rotateleft64(r12.u64, 46) & 0xFFFFC00000000000;
	// rldicr r11,r11,46,17
	r11.u64 = __builtin_rotateleft64(r11.u64, 46) & 0xFFFFC00000000000;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// beq cr6,0x825f52fc
	if (cr6.eq) goto loc_825F52FC;
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
loc_825F52FC:
	// ld r11,0(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 0);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// ld r11,16(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 16);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 24);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,32(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 32);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825F533C"))) PPC_WEAK_FUNC(sub_825F533C);
PPC_FUNC_IMPL(__imp__sub_825F533C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825F5340"))) PPC_WEAK_FUNC(sub_825F5340);
PPC_FUNC_IMPL(__imp__sub_825F5340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825f5350
	if (!cr6.eq) goto loc_825F5350;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_825F5350:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq cr6,0x825f5470
	if (cr6.eq) goto loc_825F5470;
loc_825F5364:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825f5468
	if (cr0.eq) goto loc_825F5468;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// and. r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f53ec
	if (cr0.eq) goto loc_825F53EC;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
loc_825F5380:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5394
	if (!cr6.eq) goto loc_825F5394;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x825f53ac
	goto loc_825F53AC;
loc_825F5394:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f53ec
	if (cr6.eq) goto loc_825F53EC;
	// subf. r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bgt 0x825f53ac
	if (cr0.gt) goto loc_825F53AC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F53AC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f53ec
	if (cr6.eq) goto loc_825F53EC;
loc_825F53B4:
	// mfmsr r31
	// mtmsrd r13,1
	// lwarx r6,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bne cr6,0x825f53d8
	if (!cr6.eq) goto loc_825F53D8;
	// stwcx. r10,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r31,1
	// bne 0x825f53b4
	if (!cr0.eq) goto loc_825F53B4;
	// b 0x825f53e0
	goto loc_825F53E0;
loc_825F53D8:
	// stwcx. r6,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r31,1
loc_825F53E0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x825f5380
	if (!cr6.eq) goto loc_825F5380;
loc_825F53EC:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5468
	if (cr0.eq) goto loc_825F5468;
	// addi r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 + 12;
loc_825F53FC:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5410
	if (!cr6.eq) goto loc_825F5410;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x825f5428
	goto loc_825F5428;
loc_825F5410:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f5468
	if (cr6.eq) goto loc_825F5468;
	// subf. r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bgt 0x825f5428
	if (cr0.gt) goto loc_825F5428;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F5428:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5468
	if (cr6.eq) goto loc_825F5468;
loc_825F5430:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bne cr6,0x825f5454
	if (!cr6.eq) goto loc_825F5454;
	// stwcx. r10,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x825f5430
	if (!cr0.eq) goto loc_825F5430;
	// b 0x825f545c
	goto loc_825F545C;
loc_825F5454:
	// stwcx. r8,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
loc_825F545C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x825f53fc
	if (!cr6.eq) goto loc_825F53FC;
loc_825F5468:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x825f5364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F5364;
loc_825F5470:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825f5350
	if (!cr6.eq) goto loc_825F5350;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825F5480"))) PPC_WEAK_FUNC(sub_825F5480);
PPC_FUNC_IMPL(__imp__sub_825F5480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F5484"))) PPC_WEAK_FUNC(sub_825F5484);
PPC_FUNC_IMPL(__imp__sub_825F5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F5488"))) PPC_WEAK_FUNC(sub_825F5488);
PPC_FUNC_IMPL(__imp__sub_825F5488) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x825f4900
	sub_825F4900(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x825f54f0
	if (!cr6.eq) goto loc_825F54F0;
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f54c0
	if (cr0.eq) goto loc_825F54C0;
loc_825F54B8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825f5674
	goto loc_825F5674;
loc_825F54C0:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
	// b 0x825f5544
	goto loc_825F5544;
loc_825F54DC:
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f552c
	if (cr0.eq) goto loc_825F552C;
loc_825F54E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825F54F0:
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5568
	if (cr0.eq) goto loc_825F5568;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f5674
	goto loc_825F5674;
loc_825F5504:
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f553c
	if (!cr0.eq) goto loc_825F553C;
	// ld r11,24440(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24440);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// bne cr6,0x825f553c
	if (!cr6.eq) goto loc_825F553C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f555c
	if (cr0.eq) goto loc_825F555C;
loc_825F552C:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x825f5504
	if (cr6.eq) goto loc_825F5504;
loc_825F553C:
	// lwz r11,11024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825F5544:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4900
	sub_825F4900(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825f54dc
	if (cr6.eq) goto loc_825F54DC;
	// b 0x825f54e8
	goto loc_825F54E8;
loc_825F555C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
	// b 0x825f54b8
	goto loc_825F54B8;
loc_825F5568:
	// lwz r11,24448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24448);
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwsync 
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r31,24440
	ctx.r6.s64 = r31.s64 + 24440;
	// sld r11,r9,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (r11.u8 & 0x7F));
loc_825F5594:
	// mfmsr r7
	// mtmsrd r13,1
	// ldarx r10,0,r6
	reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap64(reserved.u64);
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// stdcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), reserved.s64, __builtin_bswap64(ctx.r8.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x825f5594
	if (!cr0.eq) goto loc_825F5594;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f55c8
	if (!cr6.gt) goto loc_825F55C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F55C8:
	// lwz r11,136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1402
	r11.s64 = 1402;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// bne 0x825f55e4
	if (!cr0.eq) goto loc_825F55E4;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_825F55E4:
	// rlwimi r10,r29,30,2,31
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 30) & 0x3FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFC0000000);
	// li r7,19
	ctx.r7.s64 = 19;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,-16380
	ctx.r10.s64 = -1073479680;
	// lwz r9,128(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// li r4,1403
	ctx.r4.s64 = 1403;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r8,r10,15360
	ctx.r8.u64 = ctx.r10.u64 | 15360;
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,512
	ctx.r6.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// li r10,256
	ctx.r10.s64 = 256;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// li r9,1402
	ctx.r9.s64 = 1402;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// ori r11,r29,2
	r11.u64 = r29.u64 | 2;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// lwz r11,24452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24452);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
loc_825F5674:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F5678"))) PPC_WEAK_FUNC(sub_825F5678);
PPC_FUNC_IMPL(__imp__sub_825F5678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F567C"))) PPC_WEAK_FUNC(sub_825F567C);
PPC_FUNC_IMPL(__imp__sub_825F567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F5680"))) PPC_WEAK_FUNC(sub_825F5680);
PPC_FUNC_IMPL(__imp__sub_825F5680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lwz r11,11016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x825f56c0
	if (!cr6.eq) goto loc_825F56C0;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x825f56c4
	if (cr6.eq) goto loc_825F56C4;
loc_825F56C0:
	// li r27,1
	r27.s64 = 1;
loc_825F56C4:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825f57bc
	if (!cr6.gt) goto loc_825F57BC;
	// li r31,0
	r31.s64 = 0;
loc_825F56D8:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825f57a8
	if (cr6.eq) goto loc_825F57A8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x825f5718
	if (cr6.eq) goto loc_825F5718;
	// lwz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r29,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f57a8
	if (cr6.eq) goto loc_825F57A8;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825f4ab8
	sub_825F4AB8(ctx, base);
	// b 0x825f57a8
	goto loc_825F57A8;
loc_825F5718:
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
loc_825F571C:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f5730
	if (!cr6.eq) goto loc_825F5730;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x825f5748
	goto loc_825F5748;
loc_825F5730:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825f5788
	if (cr6.eq) goto loc_825F5788;
	// subf. r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bgt 0x825f5748
	if (cr0.gt) goto loc_825F5748;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F5748:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5788
	if (cr6.eq) goto loc_825F5788;
loc_825F5750:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// bne cr6,0x825f5774
	if (!cr6.eq) goto loc_825F5774;
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x825f5750
	if (!cr0.eq) goto loc_825F5750;
	// b 0x825f577c
	goto loc_825F577C;
loc_825F5774:
	// stwcx. r7,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
loc_825F577C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x825f571c
	if (!cr6.eq) goto loc_825F571C;
loc_825F5788:
	// lwz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f57a8
	if (cr6.eq) goto loc_825F57A8;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825f5340
	sub_825F5340(ctx, base);
loc_825F57A8:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825f56d8
	if (cr6.lt) goto loc_825F56D8;
loc_825F57BC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x825f57cc
	if (!cr6.eq) goto loc_825F57CC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825f57f0
	if (cr6.eq) goto loc_825F57F0;
loc_825F57CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// sync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f57f0
	if (cr6.eq) goto loc_825F57F0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// sync 
loc_825F57F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F57F4"))) PPC_WEAK_FUNC(sub_825F57F4);
PPC_FUNC_IMPL(__imp__sub_825F57F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F57F8"))) PPC_WEAK_FUNC(sub_825F57F8);
PPC_FUNC_IMPL(__imp__sub_825F57F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,24(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// li r23,0
	r23.s64 = 0;
	// ld r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// and r4,r11,r10
	ctx.r4.u64 = r11.u64 & ctx.r10.u64;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r11,40(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 40);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// and r26,r9,r10
	r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// ld r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r22,r23
	r22.u64 = r23.u64;
	// ld r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 32);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// and r27,r8,r7
	r27.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r30,r11,r6
	r30.u64 = r11.u64 & ctx.r6.u64;
	// and r29,r10,r9
	r29.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x825f5870
	if (cr6.eq) goto loc_825F5870;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r23,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r23.u64);
loc_825F5870:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825f5890
	if (cr6.eq) goto loc_825F5890;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r23,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r23.u64);
loc_825F5890:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825f5970
	if (cr6.eq) goto loc_825F5970;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f58b4
	if (cr6.eq) goto loc_825F58B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F58B4:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f58d8
	if (cr6.eq) goto loc_825F58D8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F58D8:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f58f8
	if (cr6.eq) goto loc_825F58F8;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F58F8:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5918
	if (cr6.eq) goto loc_825F5918;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5918:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5944
	if (cr6.eq) goto loc_825F5944;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5944:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f596c
	if (cr6.eq) goto loc_825F596C;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F596C:
	// std r23,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r23.u64);
loc_825F5970:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825f59c0
	if (cr6.eq) goto loc_825F59C0;
	// clrldi r11,r27,32
	r11.u64 = r27.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5990
	if (cr6.eq) goto loc_825F5990;
	// rldicr r4,r27,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825F5990:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f59bc
	if (cr6.eq) goto loc_825F59BC;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r27,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F59BC:
	// std r23,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r23.u64);
loc_825F59C0:
	// cmpldi cr6,r26,0
	cr6.compare<uint64_t>(r26.u64, 0, xer);
	// beq cr6,0x825f5a84
	if (cr6.eq) goto loc_825F5A84;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r26,r12
	r11.u64 = r26.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f59f0
	if (cr6.eq) goto loc_825F59F0;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r26,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r26.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F59F0:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r26,r12
	r11.u64 = r26.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5a10
	if (cr6.eq) goto loc_825F5A10;
	// rldicr r4,r26,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r26.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825F5A10:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r26,r12
	r11.u64 = r26.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5a38
	if (cr6.eq) goto loc_825F5A38;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5A38:
	// clrldi r11,r26,26
	r11.u64 = r26.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5a58
	if (cr6.eq) goto loc_825F5A58;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r26,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r26.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5A58:
	// rldicr r11,r26,0,1
	r11.u64 = __builtin_rotateleft64(r26.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5a80
	if (cr6.eq) goto loc_825F5A80;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f5a78
	if (!cr0.eq) goto loc_825F5A78;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5a80
	if (cr0.eq) goto loc_825F5A80;
loc_825F5A78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825F5A80:
	// std r23,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r23.u64);
loc_825F5A84:
	// lwz r11,136(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// rlwimi r11,r25,5,29,29
	r11.u64 = (__builtin_rotateleft32(r25.u32, 5) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,136(r28)
	PPC_STORE_U32(r28.u32 + 136, r11.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f5aa8
	if (!cr6.gt) goto loc_825F5AA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F5AA8:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r27,r28,104
	r27.s64 = r28.s64 + 104;
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// not r11,r10
	r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// beq 0x825f5b14
	if (cr0.eq) goto loc_825F5B14;
	// rlwinm. r11,r10,26,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f5b14
	if (!cr0.eq) goto loc_825F5B14;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f5488
	sub_825F5488(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f5b0c
	if (!cr6.eq) goto loc_825F5B0C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f5afc
	if (!cr6.gt) goto loc_825F5AFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F5AFC:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x825f5e9c
	goto loc_825F5E9C;
loc_825F5B0C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825f5b6c
	if (!cr6.eq) goto loc_825F5B6C;
loc_825F5B14:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f5b30
	if (!cr6.gt) goto loc_825F5B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F5B30:
	// li r10,1402
	ctx.r10.s64 = 1402;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// bne 0x825f5b4c
	if (!cr0.eq) goto loc_825F5B4C;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
loc_825F5B4C:
	// rlwinm r9,r28,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// li r8,1402
	ctx.r8.s64 = 1402;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825F5B6C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f5b84
	if (!cr6.gt) goto loc_825F5B84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F5B84:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,25344
	r11.u64 = r11.u64 | 25344;
	// ori r29,r10,24576
	r29.u64 = ctx.r10.u64 | 24576;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r30,r23
	r30.u64 = r23.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq 0x825f5c24
	if (cr0.eq) goto loc_825F5C24;
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f5c24
	if (cr0.eq) goto loc_825F5C24;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f5bdc
	if (!cr6.gt) goto loc_825F5BDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F5BDC:
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f5bfc
	if (!cr6.gt) goto loc_825F5BFC;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F5BFC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r9,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_825F5C24:
	// lwz r11,15332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15332);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825f5c40
	if (cr6.eq) goto loc_825F5C40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F5C40:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x825f5c8c
	if (cr0.eq) goto loc_825F5C8C;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,13760
	ctx.r8.s64 = r31.s64 + 13760;
	// lwz r6,120(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
	// b 0x825f5c90
	goto loc_825F5C90;
loc_825F5C8C:
	// li r22,1
	r22.s64 = 1;
loc_825F5C90:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5ce8
	if (cr0.eq) goto loc_825F5CE8;
	// lwz r11,136(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f5ce8
	if (!cr0.eq) goto loc_825F5CE8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f5ce8
	if (cr6.eq) goto loc_825F5CE8;
	// lwz r11,13748(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13748);
	// addi r3,r31,13736
	ctx.r3.s64 = r31.s64 + 13736;
	// lwz r10,13752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13752);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f5cd8
	if (!cr6.gt) goto loc_825F5CD8;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F5CD8:
	// ori r10,r28,1
	ctx.r10.u64 = r28.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,13748(r31)
	PPC_STORE_U32(r31.u32 + 13748, ctx.r9.u32);
loc_825F5CE8:
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwsync 
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825f5d28
	if (cr6.eq) goto loc_825F5D28;
	// li r11,32
	r11.s64 = 32;
loc_825F5D00:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r27
	reserved.u32 = *(uint32_t*)(base + r27.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// or r9,r11,r10
	ctx.r9.u64 = r11.u64 | ctx.r10.u64;
	// stwcx. r9,0,r27
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r27.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825f5d00
	if (!cr0.eq) goto loc_825F5D00;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x825f5d2c
	goto loc_825F5D2C;
loc_825F5D28:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_825F5D2C:
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f5d48
	if (cr0.eq) goto loc_825F5D48;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f5680
	sub_825F5680(ctx, base);
loc_825F5D48:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f5d60
	if (!cr6.gt) goto loc_825F5D60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F5D60:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825f5dc8
	if (cr6.eq) goto loc_825F5DC8;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// ori r8,r10,23041
	ctx.r8.u64 = ctx.r10.u64 | 23041;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r7,26
	ctx.r7.s64 = 26;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r9,25
	ctx.r9.s64 = 25;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// ori r10,r10,17921
	ctx.r10.u64 = ctx.r10.u64 | 17921;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825F5DC8:
	// li r10,1403
	ctx.r10.s64 = 1403;
	// li r12,7
	r12.s64 = 7;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,7
	ctx.r9.s64 = 7;
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// rldicr r12,r12,46,17
	r12.u64 = __builtin_rotateleft64(r12.u64, 46) & 0xFFFFC00000000000;
	// rldicr r9,r9,46,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 46) & 0xFFFFC00000000000;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// addi r30,r28,64
	r30.s64 = r28.s64 + 64;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// lwz r8,13084(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,96(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 96);
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// beq cr6,0x825f5e4c
	if (cr6.eq) goto loc_825F5E4C;
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
loc_825F5E4C:
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// subfic r10,r22,0
	xer.ca = r22.u32 <= 0;
	ctx.r10.s64 = 0 - r22.s64;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// and r3,r11,r9
	ctx.r3.u64 = r11.u64 & ctx.r9.u64;
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,32(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
loc_825F5E9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F5EA0"))) PPC_WEAK_FUNC(sub_825F5EA0);
PPC_FUNC_IMPL(__imp__sub_825F5EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825F5EA4"))) PPC_WEAK_FUNC(sub_825F5EA4);
PPC_FUNC_IMPL(__imp__sub_825F5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F5EA8"))) PPC_WEAK_FUNC(sub_825F5EA8);
PPC_FUNC_IMPL(__imp__sub_825F5EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,13920(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13920);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,108(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6110
	if (cr0.eq) goto loc_825F6110;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// ld r28,24(r3)
	r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r3)
	r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r29,8(r3)
	r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// beq cr6,0x825f5ef8
	if (cr6.eq) goto loc_825F5EF8;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r25,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r25.u64);
loc_825F5EF8:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825f5f18
	if (cr6.eq) goto loc_825F5F18;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r25,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r25.u64);
loc_825F5F18:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825f5ff8
	if (cr6.eq) goto loc_825F5FF8;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5f3c
	if (cr6.eq) goto loc_825F5F3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F5F3C:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5f60
	if (cr6.eq) goto loc_825F5F60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F5F60:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5f80
	if (cr6.eq) goto loc_825F5F80;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5F80:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5fa0
	if (cr6.eq) goto loc_825F5FA0;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5FA0:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5fcc
	if (cr6.eq) goto loc_825F5FCC;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5FCC:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f5ff4
	if (cr6.eq) goto loc_825F5FF4;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F5FF4:
	// std r25,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r25.u64);
loc_825F5FF8:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825f6048
	if (cr6.eq) goto loc_825F6048;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6018
	if (cr6.eq) goto loc_825F6018;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825F6018:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6044
	if (cr6.eq) goto loc_825F6044;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F6044:
	// std r25,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r25.u64);
loc_825F6048:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825f612c
	if (cr6.eq) goto loc_825F612C;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6078
	if (cr6.eq) goto loc_825F6078;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F6078:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6098
	if (cr6.eq) goto loc_825F6098;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825F6098:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f60c0
	if (cr6.eq) goto loc_825F60C0;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F60C0:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f60e0
	if (cr6.eq) goto loc_825F60E0;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F60E0:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6108
	if (cr6.eq) goto loc_825F6108;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f6100
	if (!cr0.eq) goto loc_825F6100;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6108
	if (cr0.eq) goto loc_825F6108;
loc_825F6100:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825F6108:
	// std r25,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r25.u64);
	// b 0x825f612c
	goto loc_825F612C;
loc_825F6110:
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f6124
	if (!cr0.eq) goto loc_825F6124;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f612c
	if (cr0.eq) goto loc_825F612C;
loc_825F6124:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825F612C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1658
	sub_825D1658(ctx, base);
	// lwz r11,152(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f61b4
	if (cr6.eq) goto loc_825F61B4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r9,15332(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 15332);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// srawi r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f616c
	if (!cr6.gt) goto loc_825F616C;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
loc_825F616C:
	// lwz r11,13944(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13944);
	// lwz r3,13940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13940);
	// lwz r30,152(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 152);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825f6188
	if (cr6.lt) goto loc_825F6188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4c70
	sub_825F4C70(ctx, base);
loc_825F6188:
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r8,13940(r31)
	PPC_STORE_U32(r31.u32 + 13940, ctx.r8.u32);
	// b 0x825f61bc
	goto loc_825F61BC;
loc_825F61B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e43c0
	sub_825E43C0(ctx, base);
loc_825F61BC:
	// lwz r11,13924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13924);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f61dc
	if (cr6.eq) goto loc_825F61DC;
	// lwz r10,13928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_825F61DC:
	// lwz r11,13936(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13936);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f61fc
	if (cr6.eq) goto loc_825F61FC;
	// lwz r10,13940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13940);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_825F61FC:
	// lwz r11,108(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// lis r30,16384
	r30.s64 = 1073741824;
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6244
	if (cr0.eq) goto loc_825F6244;
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// lwz r11,13616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f6228
	if (!cr6.eq) goto loc_825F6228;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x825f6240
	goto loc_825F6240;
loc_825F6228:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_825F6240:
	// stw r11,120(r26)
	PPC_STORE_U32(r26.u32 + 120, r11.u32);
loc_825F6244:
	// stw r25,13920(r31)
	PPC_STORE_U32(r31.u32 + 13920, r25.u32);
	// sync 
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,136(r26)
	PPC_STORE_U32(r26.u32 + 136, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r11,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r11.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,144(r26)
	PPC_STORE_U32(r26.u32 + 144, r11.u32);
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,108(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// beq 0x825f62a4
	if (cr0.eq) goto loc_825F62A4;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// li r10,7
	ctx.r10.s64 = 7;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x825f62ac
	goto loc_825F62AC;
loc_825F62A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_825F62AC:
	// rlwimi r11,r10,0,28,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF) | (r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,108(r26)
	PPC_STORE_U32(r26.u32 + 108, r11.u32);
	// bl 0x825e2c18
	sub_825E2C18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F62C4"))) PPC_WEAK_FUNC(sub_825F62C4);
PPC_FUNC_IMPL(__imp__sub_825F62C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F62C8"))) PPC_WEAK_FUNC(sub_825F62C8);
PPC_FUNC_IMPL(__imp__sub_825F62C8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f6304
	if (cr6.eq) goto loc_825F6304;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x825f6304
	if (!cr6.eq) goto loc_825F6304;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825f57f8
	sub_825F57F8(ctx, base);
	// b 0x825f691c
	goto loc_825F691C;
loc_825F6304:
	// ld r11,24(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 24);
	// li r20,0
	r20.s64 = 0;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r9,56(r24)
	ctx.r9.u64 = PPC_LOAD_U64(r24.u32 + 56);
	// and r4,r11,r10
	ctx.r4.u64 = r11.u64 & ctx.r10.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U64(r24.u32 + 48);
	// and r27,r9,r10
	r27.u64 = ctx.r9.u64 & ctx.r10.u64;
	// ld r11,40(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 40);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U64(r24.u32 + 32);
	// and r28,r8,r7
	r28.u64 = ctx.r8.u64 & ctx.r7.u64;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// and r30,r11,r6
	r30.u64 = r11.u64 & ctx.r6.u64;
	// lwz r19,13920(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 13920);
	// and r29,r10,r9
	r29.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x825f6364
	if (cr6.eq) goto loc_825F6364;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r20,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r20.u64);
loc_825F6364:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x825f6384
	if (cr6.eq) goto loc_825F6384;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7908
	sub_825F7908(ctx, base);
	// std r20,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r20.u64);
loc_825F6384:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825f6464
	if (cr6.eq) goto loc_825F6464;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f63a8
	if (cr6.eq) goto loc_825F63A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f86a0
	sub_825F86A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F63A8:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f63cc
	if (cr6.eq) goto loc_825F63CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F63CC:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f63ec
	if (cr6.eq) goto loc_825F63EC;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F63EC:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f640c
	if (cr6.eq) goto loc_825F640C;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F640C:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6438
	if (cr6.eq) goto loc_825F6438;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F6438:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6460
	if (cr6.eq) goto loc_825F6460;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F6460:
	// std r20,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r20.u64);
loc_825F6464:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x825f64b4
	if (cr6.eq) goto loc_825F64B4;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6484
	if (cr6.eq) goto loc_825F6484;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f77b0
	sub_825F77B0(ctx, base);
loc_825F6484:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f64b0
	if (cr6.eq) goto loc_825F64B0;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F64B0:
	// std r20,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r20.u64);
loc_825F64B4:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x825f6578
	if (cr6.eq) goto loc_825F6578;
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f64e4
	if (cr6.eq) goto loc_825F64E4;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F64E4:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6504
	if (cr6.eq) goto loc_825F6504;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7630
	sub_825F7630(ctx, base);
loc_825F6504:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f652c
	if (cr6.eq) goto loc_825F652C;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F652C:
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f654c
	if (cr6.eq) goto loc_825F654C;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7570
	sub_825F7570(ctx, base);
loc_825F654C:
	// rldicr r11,r27,0,1
	r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f6574
	if (cr6.eq) goto loc_825F6574;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f656c
	if (!cr0.eq) goto loc_825F656C;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6574
	if (cr0.eq) goto loc_825F6574;
loc_825F656C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825F6574:
	// std r20,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r20.u64);
loc_825F6578:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f6590
	if (!cr6.gt) goto loc_825F6590;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F6590:
	// lwz r22,108(r24)
	r22.u64 = PPC_LOAD_U32(r24.u32 + 108);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r22,25,0,6
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 25) & 0xFE000000;
	// srawi. r21,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r21.s64 = r11.s32 >> 31;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x825f65c4
	if (cr0.eq) goto loc_825F65C4;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f65c4
	if (!cr0.eq) goto loc_825F65C4;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,25344
	r11.u64 = r11.u64 | 25344;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r18,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r18.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825F65C4:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r27,13092(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 13092);
	// li r23,-1
	r23.s64 = -1;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r25,r10,24576
	r25.u64 = ctx.r10.u64 | 24576;
	// mr r26,r20
	r26.u64 = r20.u64;
	// beq 0x825f6638
	if (cr0.eq) goto loc_825F6638;
	// rlwinm. r11,r22,0,20,20
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6638
	if (cr0.eq) goto loc_825F6638;
	// lwz r11,13628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13632);
	// li r27,1
	r27.s64 = 1;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f6610
	if (!cr6.gt) goto loc_825F6610;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F6610:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r9,13628(r31)
	PPC_STORE_U32(r31.u32 + 13628, ctx.r9.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// stwu r25,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r10.u32 = ea;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// stwu r23,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r23.u32);
	r30.u32 = ea;
loc_825F6638:
	// rlwinm. r11,r22,0,26,26
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f67a8
	if (cr0.eq) goto loc_825F67A8;
	// lwz r11,15332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15332);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x825f665c
	if (cr6.eq) goto loc_825F665C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F665C:
	// lwz r30,116(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 116);
loc_825F6660:
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4700
	sub_825E4700(ctx, base);
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825f6660
	if (!cr6.eq) goto loc_825F6660;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f6698
	if (!cr6.gt) goto loc_825F6698;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F6698:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825f6700
	if (cr6.eq) goto loc_825F6700;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// lis r7,-16383
	ctx.r7.s64 = -1073676288;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r25,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r9.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r7,23041
	ctx.r7.u64 = ctx.r7.u64 | 23041;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// li r6,26
	ctx.r6.s64 = 26;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// ori r10,r8,17921
	ctx.r10.u64 = ctx.r8.u64 | 17921;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// li r8,25
	ctx.r8.s64 = 25;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
loc_825F6700:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x825f6728
	if (cr6.eq) goto loc_825F6728;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F6728:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// rlwinm. r11,r10,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6828
	if (cr0.eq) goto loc_825F6828;
	// lwz r11,108(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 108);
	// rlwinm r10,r22,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x40;
	// lwz r9,11040(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11040);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// and. r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,108(r19)
	PPC_STORE_U32(r19.u32 + 108, r11.u32);
	// bne 0x825f6768
	if (!cr0.eq) goto loc_825F6768;
	// lwz r11,112(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f6894
	if (cr6.eq) goto loc_825F6894;
loc_825F6768:
	// lwz r11,13932(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13932);
	// lwz r3,13928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13928);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825f6780
	if (cr6.lt) goto loc_825F6780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f4bc0
	sub_825F4BC0(ctx, base);
loc_825F6780:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// rlwimi r11,r24,30,2,31
	r11.u64 = (__builtin_rotateleft32(r24.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r10,13928(r31)
	PPC_STORE_U32(r31.u32 + 13928, ctx.r10.u32);
	// b 0x825f6894
	goto loc_825F6894;
loc_825F67A8:
	// oris r27,r27,49153
	r27.u64 = r27.u64 | 3221291008;
	// lwz r28,116(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// mr r29,r20
	r29.u64 = r20.u64;
	// ori r27,r27,16128
	r27.u64 = r27.u64 | 16128;
loc_825F67B8:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r27,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r27.u32);
	r30.u32 = ea;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r11,8
	r11.u64 = r11.u32 & 0xFFFFFF;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne cr6,0x825f6804
	if (!cr6.eq) goto loc_825F6804;
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825f6698
	if (cr6.eq) goto loc_825F6698;
loc_825F6804:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f6820
	if (!cr6.gt) goto loc_825F6820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F6820:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825f67b8
	goto loc_825F67B8;
loc_825F6828:
	// lwz r30,120(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825f6878
	if (cr6.eq) goto loc_825F6878;
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f6878
	if (cr0.eq) goto loc_825F6878;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f6878
	if (cr6.eq) goto loc_825F6878;
	// lwz r11,13748(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13748);
	// addi r3,r31,13736
	ctx.r3.s64 = r31.s64 + 13736;
	// lwz r10,13752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13752);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f686c
	if (!cr6.gt) goto loc_825F686C;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F686C:
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r10,13748(r31)
	PPC_STORE_U32(r31.u32 + 13748, ctx.r10.u32);
loc_825F6878:
	// lwz r3,11036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// lwz r4,112(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r3,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r3.u32);
	// beq cr6,0x825f6894
	if (cr6.eq) goto loc_825F6894;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x825f4ab8
	sub_825F4AB8(ctx, base);
loc_825F6894:
	// li r12,7
	r12.s64 = 7;
	// ld r30,96(r24)
	r30.u64 = PPC_LOAD_U64(r24.u32 + 96);
	// li r11,7
	r11.s64 = 7;
	// rldicr r12,r12,46,17
	r12.u64 = __builtin_rotateleft64(r12.u64, 46) & 0xFFFFC00000000000;
	// rldicr r11,r11,46,17
	r11.u64 = __builtin_rotateleft64(r11.u64, 46) & 0xFFFFC00000000000;
	// and r10,r30,r12
	ctx.r10.u64 = r30.u64 & r12.u64;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// beq cr6,0x825f68e4
	if (cr6.eq) goto loc_825F68E4;
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x825dc610
	sub_825DC610(ctx, base);
loc_825F68E4:
	// ld r11,64(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 64);
	// not r10,r30
	ctx.r10.u64 = ~r30.u64;
	// ld r9,72(r24)
	ctx.r9.u64 = PPC_LOAD_U64(r24.u32 + 72);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// ld r8,80(r24)
	ctx.r8.u64 = PPC_LOAD_U64(r24.u32 + 80);
	// ld r7,88(r24)
	ctx.r7.u64 = PPC_LOAD_U64(r24.u32 + 88);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// not r11,r7
	r11.u64 = ~ctx.r7.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// std r8,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r10,32(r31)
	PPC_STORE_U64(r31.u32 + 32, ctx.r10.u64);
loc_825F691C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825F6920"))) PPC_WEAK_FUNC(sub_825F6920);
PPC_FUNC_IMPL(__imp__sub_825F6920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825F6924"))) PPC_WEAK_FUNC(sub_825F6924);
PPC_FUNC_IMPL(__imp__sub_825F6924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6928"))) PPC_WEAK_FUNC(sub_825F6928);
PPC_FUNC_IMPL(__imp__sub_825F6928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r6,r3,800
	ctx.r6.s64 = ctx.r3.s64 + 800;
	// rlwinm r11,r10,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x825f694c
	if (!cr6.eq) goto loc_825F694C;
loc_825F6944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825F694C:
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bne cr6,0x825f6988
	if (!cr6.eq) goto loc_825F6988;
loc_825F696C:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825f696c
	if (cr6.eq) goto loc_825F696C;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x825f6944
	if (cr6.eq) goto loc_825F6944;
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
loc_825F6988:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// srw r5,r5,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x825f69d0
	if (!cr6.eq) goto loc_825F69D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// b 0x825f69b4
	goto loc_825F69B4;
loc_825F69B0:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
loc_825F69B4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f69b0
	if (cr6.eq) goto loc_825F69B0;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x825f69cc
	if (!cr6.eq) goto loc_825F69CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825f69d0
	goto loc_825F69D0;
loc_825F69CC:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
loc_825F69D0:
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825F69F8"))) PPC_WEAK_FUNC(sub_825F69F8);
PPC_FUNC_IMPL(__imp__sub_825F69F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F69FC"))) PPC_WEAK_FUNC(sub_825F69FC);
PPC_FUNC_IMPL(__imp__sub_825F69FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6A00"))) PPC_WEAK_FUNC(sub_825F6A00);
PPC_FUNC_IMPL(__imp__sub_825F6A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r7,r5,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r7,8
	ctx.r10.s64 = ctx.r7.s64 + 8;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r4,r31,27
	ctx.r4.u64 = r31.u32 & 0x1F;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x825f6ab4
	if (cr6.eq) goto loc_825F6AB4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// li r11,-1
	r11.s64 = -1;
	// bne cr6,0x825f6a5c
	if (!cr6.eq) goto loc_825F6A5C;
	// srw r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r11,r11,r7
	r11.u64 = r11.u64 & ~ctx.r7.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// b 0x825f6b30
	goto loc_825F6B30;
loc_825F6A5C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x825f6aa4
	if (!cr6.lt) goto loc_825F6AA4;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f6a9c
	if (cr0.eq) goto loc_825F6A9C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825F6A94:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825f6a94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F6A94;
loc_825F6A9C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825F6AA4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r4
	r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// orc r11,r9,r11
	r11.u64 = ctx.r9.u64 | ~r11.u64;
	// b 0x825f6b30
	goto loc_825F6B30;
loc_825F6AB4:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// li r11,-1
	r11.s64 = -1;
	// bne cr6,0x825f6ad8
	if (!cr6.eq) goto loc_825F6AD8;
	// srw r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r11,r11,r7
	r11.u64 = r11.u64 & ~ctx.r7.u64;
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// b 0x825f6b30
	goto loc_825F6B30;
loc_825F6AD8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x825f6b24
	if (!cr6.lt) goto loc_825F6B24;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f6b1c
	if (cr0.eq) goto loc_825F6B1C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825F6B14:
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825f6b14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F6B14;
loc_825F6B1C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825F6B24:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r11,r4
	r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r4.u8 & 0x3F));
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
loc_825F6B30:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825F6B38"))) PPC_WEAK_FUNC(sub_825F6B38);
PPC_FUNC_IMPL(__imp__sub_825F6B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F6B3C"))) PPC_WEAK_FUNC(sub_825F6B3C);
PPC_FUNC_IMPL(__imp__sub_825F6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6B40"))) PPC_WEAK_FUNC(sub_825F6B40);
PPC_FUNC_IMPL(__imp__sub_825F6B40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-13720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13720);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// add r5,r30,r31
	ctx.r5.u64 = r30.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f6a00
	sub_825F6A00(ctx, base);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825F6B8C"))) PPC_WEAK_FUNC(sub_825F6B8C);
PPC_FUNC_IMPL(__imp__sub_825F6B8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825F6B90"))) PPC_WEAK_FUNC(sub_825F6B90);
PPC_FUNC_IMPL(__imp__sub_825F6B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r27,-1
	r27.s64 = -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,-13720(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13720);
	// mr r26,r27
	r26.u64 = r27.u64;
	// addi r30,r11,-13720
	r30.s64 = r11.s64 + -13720;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x825f6c48
	if (!cr0.eq) goto loc_825F6C48;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825f6be0
	if (!cr0.eq) goto loc_825F6BE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f6cf8
	goto loc_825F6CF8;
loc_825F6BE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,21845
	r11.s64 = 1431633920;
	// li r8,6144
	ctx.r8.s64 = 6144;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,800(r31)
	PPC_STORE_U32(r31.u32 + 800, r11.u32);
loc_825F6C00:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// bne cr6,0x825f6c24
	if (!cr6.eq) goto loc_825F6C24;
	// stwcx. r31,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825f6c00
	if (!cr0.eq) goto loc_825F6C00;
	// b 0x825f6c2c
	goto loc_825F6C2C;
loc_825F6C24:
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
loc_825F6C2C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f6c48
	if (cr6.eq) goto loc_825F6C48;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_825F6C48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x825f6ce0
	if (cr6.gt) goto loc_825F6CE0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x825f6928
	sub_825F6928(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f6ce0
	if (cr0.eq) goto loc_825F6CE0;
loc_825F6C7C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// blt cr6,0x825f6c98
	if (cr6.lt) goto loc_825F6C98;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bge cr6,0x825f6c98
	if (!cr6.lt) goto loc_825F6C98;
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825F6C98:
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6928
	sub_825F6928(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825f6c7c
	if (!cr0.eq) goto loc_825F6C7C;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x825f6ce0
	if (cr6.eq) goto loc_825F6CE0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6a00
	sub_825F6A00(ctx, base);
	// mr r26,r30
	r26.u64 = r30.u64;
loc_825F6CE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf r11,r26,r27
	r11.s64 = r27.s64 - r26.s64;
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825F6CF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825F6CFC"))) PPC_WEAK_FUNC(sub_825F6CFC);
PPC_FUNC_IMPL(__imp__sub_825F6CFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F6D00"))) PPC_WEAK_FUNC(sub_825F6D00);
PPC_FUNC_IMPL(__imp__sub_825F6D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825f6e14
	if (cr6.eq) goto loc_825F6E14;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f6e14
	if (!cr0.eq) goto loc_825F6E14;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f6d38
	if (cr6.eq) goto loc_825F6D38;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm. r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f6e14
	if (!cr0.eq) goto loc_825F6E14;
loc_825F6D38:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r11,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	r11.s64 = 0;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm. r9,r6,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq 0x825f6df0
	if (cr0.eq) goto loc_825F6DF0;
loc_825F6D70:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// bge cr6,0x825f6e0c
	if (!cr6.lt) goto loc_825F6E0C;
loc_825F6D80:
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bge cr6,0x825f6d9c
	if (!cr6.lt) goto loc_825F6D9C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x825f6d80
	if (cr6.lt) goto loc_825F6D80;
loc_825F6D9C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x825f6e0c
	if (!cr6.lt) goto loc_825F6E0C;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r30,r5,24
	r30.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bgt cr6,0x825f6e0c
	if (cr6.gt) goto loc_825F6E0C;
	// rlwinm r4,r5,20,12,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r30,r3,20,12,31
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// andc r4,r30,r4
	ctx.r4.u64 = r30.u64 & ~ctx.r4.u64;
	// clrlwi. r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x825f6e0c
	if (!cr0.eq) goto loc_825F6E0C;
	// xor r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// rlwinm. r5,r5,0,20,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF00;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825f6dd8
	if (cr0.eq) goto loc_825F6DD8;
	// li r31,1
	r31.s64 = 1;
loc_825F6DD8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f6d70
	if (cr6.lt) goto loc_825F6D70;
loc_825F6DF0:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x825f6dfc
	if (!cr6.lt) goto loc_825F6DFC;
	// li r31,1
	r31.s64 = 1;
loc_825F6DFC:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x825f6e18
	goto loc_825F6E18;
loc_825F6E0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f6e18
	goto loc_825F6E18;
loc_825F6E14:
	// li r3,2
	ctx.r3.s64 = 2;
loc_825F6E18:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825F6E20"))) PPC_WEAK_FUNC(sub_825F6E20);
PPC_FUNC_IMPL(__imp__sub_825F6E20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F6E24"))) PPC_WEAK_FUNC(sub_825F6E24);
PPC_FUNC_IMPL(__imp__sub_825F6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6E28"))) PPC_WEAK_FUNC(sub_825F6E28);
PPC_FUNC_IMPL(__imp__sub_825F6E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825f6f20
	if (cr6.eq) goto loc_825F6F20;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r9,0,13,13
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f6f20
	if (!cr0.eq) goto loc_825F6F20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f6e60
	if (cr6.eq) goto loc_825F6E60;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f6f20
	if (!cr0.eq) goto loc_825F6F20;
loc_825F6E60:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r6,r9,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r8,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// beq 0x825f6ee4
	if (cr0.eq) goto loc_825F6EE4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_825F6EA0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// b 0x825f6ec0
	goto loc_825F6EC0;
loc_825F6EAC:
	// lbz r30,3(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x825f6ec8
	if (!cr6.lt) goto loc_825F6EC8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825F6EC0:
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x825f6eac
	if (cr6.lt) goto loc_825F6EAC;
loc_825F6EC8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x825f6ea0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F6EA0;
loc_825F6EE4:
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x825f6f08
	if (!cr6.lt) goto loc_825F6F08;
	// subf. r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x825f6f08
	if (cr0.eq) goto loc_825F6F08;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F6F00:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825f6f00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F6F00;
loc_825F6F08:
	// li r11,0
	r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r10,r11,0,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
loc_825F6F20:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825F6F28"))) PPC_WEAK_FUNC(sub_825F6F28);
PPC_FUNC_IMPL(__imp__sub_825F6F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F6F2C"))) PPC_WEAK_FUNC(sub_825F6F2C);
PPC_FUNC_IMPL(__imp__sub_825F6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6F30"))) PPC_WEAK_FUNC(sub_825F6F30);
PPC_FUNC_IMPL(__imp__sub_825F6F30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_825F6F50:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// twllei r30,0
	if (r30.u32 <= 0) __builtin_debugtrap();
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// divw. r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// ble 0x825f6fbc
	if (!cr0.gt) goto loc_825F6FBC;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x825f6f8c
	if (cr6.lt) goto loc_825F6F8C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825F6F8C:
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x825f6fb8
	if (cr6.eq) goto loc_825F6FB8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F6FAC:
	// lwzu r10,4(r27)
	ea = 4 + r27.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r27.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x825f6fac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F6FAC;
loc_825F6FB8:
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
loc_825F6FBC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f6fd8
	if (cr6.eq) goto loc_825F6FD8;
	// stw r4,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// b 0x825f6f50
	goto loc_825F6F50;
loc_825F6FD8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F6FE0"))) PPC_WEAK_FUNC(sub_825F6FE0);
PPC_FUNC_IMPL(__imp__sub_825F6FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825F6FE4"))) PPC_WEAK_FUNC(sub_825F6FE4);
PPC_FUNC_IMPL(__imp__sub_825F6FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F6FE8"))) PPC_WEAK_FUNC(sub_825F6FE8);
PPC_FUNC_IMPL(__imp__sub_825F6FE8) {
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
	// lwz r11,13068(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13068);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f7024
	if (cr6.eq) goto loc_825F7024;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm r8,r11,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1;
loc_825F7024:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10548);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,10560(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,12284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwimi r11,r6,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm. r5,r9,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, r11.u32);
	// bne 0x825f705c
	if (!cr0.eq) goto loc_825F705C;
	// clrlwi r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x825f70f8
	goto loc_825F70F8;
loc_825F705C:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r9,r10,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// bne 0x825f7078
	if (!cr0.eq) goto loc_825F7078;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x825f7094
	if (cr6.eq) goto loc_825F7094;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// b 0x825f7084
	goto loc_825F7084;
loc_825F7078:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x825f7094
	if (cr6.eq) goto loc_825F7094;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
loc_825F7084:
	// beq cr6,0x825f7094
	if (cr6.eq) goto loc_825F7094;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x825f7098
	if (!cr6.eq) goto loc_825F7098;
loc_825F7094:
	// li r9,1
	ctx.r9.s64 = 1;
loc_825F7098:
	// andc r11,r11,r8
	r11.u64 = r11.u64 & ~ctx.r8.u64;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// beq 0x825f70f8
	if (cr0.eq) goto loc_825F70F8;
	// rlwinm r9,r10,0,18,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800;
	// rlwinm r8,r10,0,12,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm. r6,r10,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// beq 0x825f70f8
	if (cr0.eq) goto loc_825F70F8;
	// rlwinm r9,r10,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000000;
	// rlwinm r8,r10,0,6,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
loc_825F70F8:
	// lwz r9,10560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm. r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, ctx.r9.u32);
	// beq 0x825f716c
	if (cr0.eq) goto loc_825F716C;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f71c4
	if (cr0.eq) goto loc_825F71C4;
	// lwz r10,13904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f7130
	if (cr6.eq) goto loc_825F7130;
	// lwz r10,13912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13912);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825f71c4
	if (!cr6.eq) goto loc_825F71C4;
loc_825F7130:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f7150
	if (!cr6.gt) goto loc_825F7150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F7150:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x825f71c4
	goto loc_825F71C4;
loc_825F716C:
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f71c4
	if (cr0.eq) goto loc_825F71C4;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f71c4
	if (cr0.eq) goto loc_825F71C4;
	// rlwinm r11,r10,28,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825f71b8
	if (cr6.eq) goto loc_825F71B8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825f71b8
	if (cr6.eq) goto loc_825F71B8;
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f71a8
	if (!cr0.eq) goto loc_825F71A8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825f71b8
	if (cr6.eq) goto loc_825F71B8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// b 0x825f71b4
	goto loc_825F71B4;
loc_825F71A8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825f71b8
	if (cr6.eq) goto loc_825F71B8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
loc_825F71B4:
	// bne cr6,0x825f71c4
	if (!cr6.eq) goto loc_825F71C4;
loc_825F71B8:
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
loc_825F71C4:
	// ori r3,r30,256
	ctx.r3.u64 = r30.u64 | 256;
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

__attribute__((alias("__imp__sub_825F71DC"))) PPC_WEAK_FUNC(sub_825F71DC);
PPC_FUNC_IMPL(__imp__sub_825F71DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F71E0"))) PPC_WEAK_FUNC(sub_825F71E0);
PPC_FUNC_IMPL(__imp__sub_825F71E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f7210
	if (!cr6.gt) goto loc_825F7210;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F7210:
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r26,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x100;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// ori r21,r8,24832
	r21.u64 = ctx.r8.u64 | 24832;
	// ori r27,r7,24576
	r27.u64 = ctx.r7.u64 | 24576;
	// ori r25,r6,21761
	r25.u64 = ctx.r6.u64 | 21761;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x825f744c
	if (cr6.eq) goto loc_825F744C;
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f740c
	if (cr0.eq) goto loc_825F740C;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f7264
	if (cr0.eq) goto loc_825F7264;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x825f72f4
	goto loc_825F72F4;
loc_825F7264:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f72ec
	if (cr0.eq) goto loc_825F72EC;
	// lwz r10,12816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r9,13104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f7284
	if (cr6.eq) goto loc_825F7284;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f72ec
	if (!cr6.eq) goto loc_825F72EC;
loc_825F7284:
	// lwz r10,12820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r9,13108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f729c
	if (cr6.eq) goto loc_825F729C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f72ec
	if (!cr6.eq) goto loc_825F72EC;
loc_825F729C:
	// lwz r10,12824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r9,13112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f72b4
	if (cr6.eq) goto loc_825F72B4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f72ec
	if (!cr6.eq) goto loc_825F72EC;
loc_825F72B4:
	// lwz r10,12828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r9,13116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f72cc
	if (cr6.eq) goto loc_825F72CC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f72ec
	if (!cr6.eq) goto loc_825F72EC;
loc_825F72CC:
	// lwz r10,12832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r9,13120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f72e4
	if (cr6.eq) goto loc_825F72E4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825f72ec
	if (!cr6.eq) goto loc_825F72EC;
loc_825F72E4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x825f72f0
	goto loc_825F72F0;
loc_825F72EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825F72F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_825F72F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f740c
	if (cr0.eq) goto loc_825F740C;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,13124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// addic. r30,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x825f73ac
	if (cr0.lt) goto loc_825F73AC;
loc_825F7318:
	// addi r10,r30,3372
	ctx.r10.s64 = r30.s64 + 3372;
	// lwz r9,12284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r10,r9,15,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// rlwimi r28,r9,17,0,14
	r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0xFFFE0000) | (r28.u64 & 0xFFFFFFFF0001FFFF);
	// mr r29,r28
	r29.u64 = r28.u64;
	// beq 0x825f7354
	if (cr0.eq) goto loc_825F7354;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x825f7358
	if (!cr6.eq) goto loc_825F7358;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825f7354
	if (!cr6.eq) goto loc_825F7354;
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f7358
	if (!cr0.eq) goto loc_825F7358;
loc_825F7354:
	// rlwinm r29,r28,0,0,30
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_825F7358:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8707
	ctx.r10.s64 = 8707;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x825f73a0
	if (!cr6.gt) goto loc_825F73A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F73A0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x825f7318
	if (!cr0.lt) goto loc_825F7318;
	// b 0x825f73b0
	goto loc_825F73B0;
loc_825F73AC:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825F73B0:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x825f73e8
	if (cr6.eq) goto loc_825F73E8;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f73e8
	if (cr0.eq) goto loc_825F73E8;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,8707
	ctx.r7.s64 = 8707;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
loc_825F73E8:
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// b 0x825f7444
	goto loc_825F7444;
loc_825F740C:
	// lwz r9,12284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm. r9,r9,0,12,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825f7420
	if (!cr0.eq) goto loc_825F7420;
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_825F7420:
	// li r9,8707
	ctx.r9.s64 = 8707;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// beq cr6,0x825f7444
	if (cr6.eq) goto loc_825F7444;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f7444
	if (cr0.eq) goto loc_825F7444;
	// mr r23,r28
	r23.u64 = r28.u64;
loc_825F7444:
	// li r12,-257
	r12.s64 = -257;
	// and r26,r26,r12
	r26.u64 = r26.u64 & r12.u64;
loc_825F744C:
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// li r12,1
	r12.s64 = 1;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & r12.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x825f748c
	if (cr6.eq) goto loc_825F748C;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// lwz r9,10368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10368);
	// li r12,-2
	r12.s64 = -2;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r12
	r26.u64 = r26.u64 & r12.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r24,13552(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 13552);
	// rlwimi r24,r9,0,0,17
	r24.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFC000) | (r24.u64 & 0xFFFFFFFF00003FFF);
loc_825F748C:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f74c0
	if (cr6.eq) goto loc_825F74C0;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// li r12,-2
	r12.s64 = -2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r12
	r26.u64 = r26.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F74C0:
	// and r10,r22,r24
	ctx.r10.u64 = r22.u64 & r24.u64;
	// and r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 & r23.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825f755c
	if (cr6.eq) goto loc_825F755C;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// beq cr6,0x825f7510
	if (cr6.eq) goto loc_825F7510;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
loc_825F7510:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x825f752c
	if (cr6.eq) goto loc_825F752C;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
loc_825F752C:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x825f7544
	if (cr6.eq) goto loc_825F7544;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
loc_825F7544:
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F755C:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825F7568"))) PPC_WEAK_FUNC(sub_825F7568);
PPC_FUNC_IMPL(__imp__sub_825F7568) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825F756C"))) PPC_WEAK_FUNC(sub_825F756C);
PPC_FUNC_IMPL(__imp__sub_825F756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F7570"))) PPC_WEAK_FUNC(sub_825F7570);
PPC_FUNC_IMPL(__imp__sub_825F7570) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r6,-4
	r29.s64 = ctx.r6.s64 + -4;
loc_825F758C:
	// cntlzd r11,r31
	r11.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r31,r31,r8
	r31.u64 = ctx.r8.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r31
	ctx.r8.u64 = ~r31.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// cntlzd r30,r8
	r30.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// add r28,r11,r5
	r28.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	r11.u64 = r30.u64;
	// add r10,r27,r4
	ctx.r10.u64 = r27.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f75f4
	if (cr6.lt) goto loc_825F75F4;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f6f30
	sub_825F6F30(ctx, base);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// sld r31,r31,r11
	r31.u64 = r11.u8 & 0x40 ? 0 : (r31.u64 << (r11.u8 & 0x7F));
	// b 0x825f761c
	goto loc_825F761C;
loc_825F75F4:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
loc_825F7608:
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bne 0x825f7608
	if (!cr0.eq) goto loc_825F7608;
loc_825F761C:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x825f758c
	if (!cr6.eq) goto loc_825F758C;
	// stw r4,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F762C"))) PPC_WEAK_FUNC(sub_825F762C);
PPC_FUNC_IMPL(__imp__sub_825F762C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F7630"))) PPC_WEAK_FUNC(sub_825F7630);
PPC_FUNC_IMPL(__imp__sub_825F7630) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,9096
	r27.s64 = 9096;
	// addi r31,r29,10272
	r31.s64 = r29.s64 + 10272;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f7664
	if (!cr6.gt) goto loc_825F7664;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F7664:
	// li r11,8199
	r11.s64 = 8199;
	// li r10,2609
	ctx.r10.s64 = 2609;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// lwz r9,10396(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 10396);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,2607
	ctx.r8.u64 = ctx.r8.u64 | 2607;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,-16380
	ctx.r5.s64 = -1073479680;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r5,r5,15360
	ctx.r5.u64 = ctx.r5.u64 | 15360;
	// li r4,2609
	ctx.r4.s64 = 2609;
	// li r28,0
	r28.s64 = 0;
	// lis r26,-32768
	r26.s64 = -2147483648;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r25,8
	r25.s64 = 8;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stwu r25,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r4.u32 = ea;
	// stw r4,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r4.u32);
loc_825F76E0:
	// cntlzd r10,r30
	ctx.r10.u64 = r30.u64 == 0 ? 64 : __builtin_clzll(r30.u64);
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sld r30,r30,r8
	r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r30
	ctx.r8.u64 = ~r30.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cntlzd r28,r8
	r28.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r28,4,0,27
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r27
	r27.u64 = ctx.r10.u64 + r27.u64;
	// add r11,r25,r4
	r11.u64 = r25.u64 + ctx.r4.u64;
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f7750
	if (cr6.lt) goto loc_825F7750;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f6f30
	sub_825F6F30(ctx, base);
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r25,r31
	r31.u64 = r25.u64 + r31.u64;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// sld r30,r30,r11
	r30.u64 = r11.u8 & 0x40 ? 0 : (r30.u64 << (r11.u8 & 0x7F));
	// b 0x825f7798
	goto loc_825F7798;
loc_825F7750:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,16,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
loc_825F7774:
	// ld r11,4(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// ld r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 12);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// rldicr r30,r30,1,62
	r30.u64 = __builtin_rotateleft64(r30.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, r11.u64);
	// std r10,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, ctx.r10.u64);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x825f7774
	if (!cr0.eq) goto loc_825F7774;
loc_825F7798:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// bne cr6,0x825f76e0
	if (!cr6.eq) goto loc_825F76E0;
	// stw r4,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F77A8"))) PPC_WEAK_FUNC(sub_825F77A8);
PPC_FUNC_IMPL(__imp__sub_825F77A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F77AC"))) PPC_WEAK_FUNC(sub_825F77AC);
PPC_FUNC_IMPL(__imp__sub_825F77AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F77B0"))) PPC_WEAK_FUNC(sub_825F77B0);
PPC_FUNC_IMPL(__imp__sub_825F77B0) {
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
	// addi r10,r3,1152
	ctx.r10.s64 = ctx.r3.s64 + 1152;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r11,18432
	r11.s64 = 18432;
	// addi r30,r10,-4
	r30.s64 = ctx.r10.s64 + -4;
loc_825F77D4:
	// cntlzd r10,r31
	ctx.r10.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r8,52(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulli r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 * 6;
	// sld r31,r31,r7
	r31.u64 = ctx.r7.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r7.u8 & 0x7F));
	// not r7,r31
	ctx.r7.u64 = ~r31.u64;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + r11.u64;
	// cntlzd r26,r7
	r26.u64 = ctx.r7.u64 == 0 ? 64 : __builtin_clzll(ctx.r7.u64);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// mulli r29,r26,6
	r29.s64 = r26.s64 * 6;
	// addi r11,r29,5
	r11.s64 = r29.s64 + 5;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x825f7890
	if (cr6.lt) goto loc_825F7890;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f6f30
	sub_825F6F30(ctx, base);
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r31,r31,r10
	r31.u64 = ctx.r10.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r10.u8 & 0x7F));
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x825f77d4
	if (!cr6.eq) goto loc_825F77D4;
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// stw r3,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f7864
	if (!cr6.gt) goto loc_825F7864;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F7864:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,20480
	r11.u64 = r11.u64 | 20480;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r3.u32);
	// b 0x825f7900
	goto loc_825F7900;
loc_825F7890:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
loc_825F78B4:
	// ld r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 4);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ld r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 12);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// ld r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 20);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// std r10,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, ctx.r10.u64);
	// std r9,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, ctx.r9.u64);
	// std r8,20(r4)
	PPC_STORE_U64(ctx.r4.u32 + 20, ctx.r8.u64);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bne 0x825f78b4
	if (!cr0.eq) goto loc_825F78B4;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x825f77d4
	if (!cr6.eq) goto loc_825F77D4;
	// li r11,37
	r11.s64 = 37;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// rldicr r11,r11,44,19
	r11.u64 = __builtin_rotateleft64(r11.u64, 44) & 0xFFFFF00000000000;
	// stw r10,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r10.u32);
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, r11.u64);
	// std r11,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, r11.u64);
loc_825F7900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F7904"))) PPC_WEAK_FUNC(sub_825F7904);
PPC_FUNC_IMPL(__imp__sub_825F7904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F7908"))) PPC_WEAK_FUNC(sub_825F7908);
PPC_FUNC_IMPL(__imp__sub_825F7908) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r6,-4
	r31.s64 = ctx.r6.s64 + -4;
	// li r22,4
	r22.s64 = 4;
	// li r23,20
	r23.s64 = 20;
	// li r24,36
	r24.s64 = 36;
	// li r25,52
	r25.s64 = 52;
loc_825F7934:
	// cntlzd r10,r30
	ctx.r10.u64 = r30.u64 == 0 ? 64 : __builtin_clzll(r30.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r10,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sld r30,r30,r8
	r30.u64 = ctx.r8.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r8.u8 & 0x7F));
	// not r8,r30
	ctx.r8.u64 = ~r30.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cntlzd r28,r8
	r28.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r29,r28,4,0,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r5
	r27.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f79a8
	if (cr6.lt) goto loc_825F79A8;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f6f30
	sub_825F6F30(ctx, base);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// sld r30,r30,r10
	r30.u64 = ctx.r10.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r10.u8 & 0x7F));
	// b 0x825f7a44
	goto loc_825F7A44;
loc_825F79A8:
	// clrlwi r11,r4,28
	r11.u64 = ctx.r4.u32 & 0xF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x825f79c0
	if (!cr6.eq) goto loc_825F79C0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// b 0x825f79fc
	goto loc_825F79FC;
loc_825F79C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f79dc
	if (!cr6.eq) goto loc_825F79DC;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// b 0x825f79fc
	goto loc_825F79FC;
loc_825F79DC:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x825f79fc
	if (!cr6.eq) goto loc_825F79FC;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// stwu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r4.u32 = ea;
loc_825F79FC:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
loc_825F7A10:
	// lvx128 v63,r31,r22
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lvx128 v62,r31,r23
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r31.u32 + r23.u32) & ~0xF), VectorMaskL));
	// rldicr r30,r30,1,62
	r30.u64 = __builtin_rotateleft64(r30.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lvx128 v61,r31,r24
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r31.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r31,r25
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r31.u32 + r25.u32) & ~0xF), VectorMaskL));
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// stvx128 v63,r4,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r4,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r4,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// bne 0x825f7a10
	if (!cr0.eq) goto loc_825F7A10;
loc_825F7A44:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// bne cr6,0x825f7934
	if (!cr6.eq) goto loc_825F7934;
	// stw r4,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F7A54"))) PPC_WEAK_FUNC(sub_825F7A54);
PPC_FUNC_IMPL(__imp__sub_825F7A54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825F7A58"))) PPC_WEAK_FUNC(sub_825F7A58);
PPC_FUNC_IMPL(__imp__sub_825F7A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,112
	r11.s64 = ctx.r7.s64 + 112;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,872
	r11.s64 = r11.s64 + 872;
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825f8074
	if (cr6.eq) goto loc_825F8074;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mulli r9,r7,416
	ctx.r9.s64 = ctx.r7.s64 * 416;
	// lwz r25,24(r5)
	r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// addi r8,r10,9
	ctx.r8.s64 = ctx.r10.s64 + 9;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// beq cr6,0x825f7d94
	if (cr6.eq) goto loc_825F7D94;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r24,r5,52
	r24.s64 = ctx.r5.s64 + 52;
	// subf r26,r11,r10
	r26.s64 = ctx.r10.s64 - r11.s64;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r31,r11,19244
	r31.s64 = r11.s64 + 19244;
loc_825F7AD4:
	// add r5,r26,r7
	ctx.r5.u64 = r26.u64 + ctx.r7.u64;
	// lwzx r11,r26,r7
	r11.u64 = PPC_LOAD_U32(r26.u32 + ctx.r7.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// beq cr6,0x825f7b30
	if (cr6.eq) goto loc_825F7B30;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_825F7AF8:
	// lbz r22,9(r8)
	r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// rlwinm r21,r5,20,28,31
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xF;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// bne cr6,0x825f7b18
	if (!cr6.eq) goto loc_825F7B18;
	// lbz r22,10(r8)
	r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// rlwinm r21,r5,16,28,31
	r21.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xF;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// beq cr6,0x825f7b28
	if (cr6.eq) goto loc_825F7B28;
loc_825F7B18:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, xer);
	// blt cr6,0x825f7af8
	if (cr6.lt) goto loc_825F7AF8;
loc_825F7B28:
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, xer);
	// blt cr6,0x825f7b64
	if (cr6.lt) goto loc_825F7B64;
loc_825F7B30:
	// lis r12,-16442
	r12.s64 = -1077542912;
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r9,95
	ctx.r9.s64 = 95;
	// ori r12,r12,53247
	r12.u64 = r12.u64 | 53247;
	// rlwimi r11,r9,20,2,11
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x3FF00000) | (r11.u64 & 0xFFFFFFFFC00FFFFF);
	// and r5,r4,r12
	ctx.r5.u64 = ctx.r4.u64 & r12.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r3,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// ori r10,r10,37456
	ctx.r10.u64 = ctx.r10.u64 | 37456;
	// oris r11,r5,6
	r11.u64 = ctx.r5.u64 | 393216;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// b 0x825f7c84
	goto loc_825F7C84;
loc_825F7B64:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r22,r9,16,29,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// rlwinm r5,r9,22,26,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x38;
	// rlwinm r21,r9,13,29,31
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// or r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 | r22.u64;
	// rlwinm r22,r9,0,16,21
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC00;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r9,0,24,25
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// or r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 | r21.u64;
	// cmplwi cr6,r20,64
	cr6.compare<uint32_t>(r20.u32, 64, xer);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 | r22.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x825f7c28
	if (!cr6.eq) goto loc_825F7C28;
	// rlwinm r22,r10,0,16,18
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,24576
	cr6.compare<uint32_t>(r22.u32, 24576, xer);
	// bgt cr6,0x825f7bc8
	if (cr6.gt) goto loc_825F7BC8;
	// rlwinm r10,r5,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE000;
	// clrlwi r5,r5,19
	ctx.r5.u64 = ctx.r5.u32 & 0x1FFF;
	// xori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 ^ 8192;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_825F7BC8:
	// rlwinm r22,r10,0,19,21
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C00;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,3072
	cr6.compare<uint32_t>(r22.u32, 3072, xer);
	// bgt cr6,0x825f7be8
	if (cr6.gt) goto loc_825F7BE8;
	// rlwinm r10,r5,0,19,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1C00;
	// andi. r5,r5,58367
	ctx.r5.u64 = ctx.r5.u64 & 58367;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// xori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 ^ 1024;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_825F7BE8:
	// rlwinm r22,r10,0,22,24
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,384
	cr6.compare<uint32_t>(r22.u32, 384, xer);
	// bgt cr6,0x825f7c08
	if (cr6.gt) goto loc_825F7C08;
	// rlwinm r10,r5,0,22,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x380;
	// andi. r5,r5,64639
	ctx.r5.u64 = ctx.r5.u64 & 64639;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// xori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 ^ 128;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_825F7C08:
	// rlwinm r22,r10,0,25,27
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r22,48
	cr6.compare<uint32_t>(r22.u32, 48, xer);
	// bgt cr6,0x825f7c28
	if (cr6.gt) goto loc_825F7C28;
	// rlwinm r10,r5,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x70;
	// andi. r5,r5,65423
	ctx.r5.u64 = ctx.r5.u64 & 65423;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_825F7C28:
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lis r22,342
	r22.s64 = 22413312;
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// rlwinm r21,r9,12,14,19
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F000;
	// subfic r20,r5,95
	xer.ca = ctx.r5.u32 <= 95;
	r20.s64 = 95 - ctx.r5.s64;
	// ori r22,r22,86
	r22.u64 = r22.u64 | 86;
	// rlwinm r9,r9,0,22,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	// mullw r22,r20,r22
	r22.s64 = int64_t(r20.s32) * int64_t(r22.s32);
	// lbzx r5,r5,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// mr r20,r22
	r20.u64 = r22.u64;
	// lis r12,-16448
	r12.s64 = -1077936128;
	// rlwimi r20,r22,11,8,12
	r20.u64 = (__builtin_rotateleft32(r22.u32, 11) & 0xF80000) | (r20.u64 & 0xFFFFFFFFFF07FFFF);
	// rlwinm r8,r8,6,1,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x7FFFFF00;
	// or r9,r21,r9
	ctx.r9.u64 = r21.u64 | ctx.r9.u64;
	// ori r12,r12,53247
	r12.u64 = r12.u64 | 53247;
	// rlwimi r11,r20,1,5,11
	r11.u64 = (__builtin_rotateleft32(r20.u32, 1) & 0x7F00000) | (r11.u64 & 0xFFFFFFFFF80FFFFF);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r22,r9,4,0,27
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & r12.u64;
	// rlwinm r5,r3,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000000;
	// rlwinm r9,r11,0,5,1
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFC7FFFFFF;
	// or r11,r22,r4
	r11.u64 = r22.u64 | ctx.r4.u64;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
loc_825F7C84:
	// rlwinm r5,r11,1,28,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lhzx r9,r5,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + r31.u32);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r9,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwimi r11,r9,31,29,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0x7) | (r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// rlwinm r9,r11,30,28,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r4,r9,29,19,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// rlwinm r9,r9,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFC;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,29,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFFFFC7) | (ctx.r9.u64 & 0x38);
	// rlwinm r11,r9,27,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
	// rlwinm r5,r11,29,19,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFF;
	// rlwinm r11,r11,3,13,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7FFF8;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r5,r5,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// rlwimi r11,r9,0,26,22
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFE3F) | (r11.u64 & 0x1C0);
	// rlwinm r9,r11,24,28,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r5,r9,3,13,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7FFF8;
	// rlwinm r9,r9,29,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// or r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r9,r11,0,23,19
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFFF1FF) | (ctx.r9.u64 & 0xE00);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// bne 0x825f7ad4
	if (!cr0.eq) goto loc_825F7AD4;
loc_825F7D94:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r30
	r27.u64 = r30.u64;
	// add r26,r11,r30
	r26.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bge cr6,0x825f8038
	if (!cr6.lt) goto loc_825F8038;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,19264
	r25.s64 = r11.s64 + 19264;
loc_825F7DB0:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bge cr6,0x825f8038
	if (!cr6.lt) goto loc_825F8038;
loc_825F7DB8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,10,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f7dd0
	if (!cr0.eq) goto loc_825F7DD0;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x825f7db8
	if (cr6.lt) goto loc_825F7DB8;
loc_825F7DD0:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bge cr6,0x825f8038
	if (!cr6.lt) goto loc_825F8038;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x825f8038
	if (!cr6.lt) goto loc_825F8038;
loc_825F7DE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r9,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825f7e00
	if (!cr0.eq) goto loc_825F7E00;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// blt cr6,0x825f7de8
	if (cr6.lt) goto loc_825F7DE8;
loc_825F7E00:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x825f8038
	if (!cr6.lt) goto loc_825F8038;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - r30.s64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r7,r7,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x300000;
	// lis r6,48
	ctx.r6.s64 = 3145728;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x825f7e78
	if (!cr6.eq) goto loc_825F7E78;
	// subf r8,r30,r11
	ctx.r8.s64 = r11.s64 - r30.s64;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r11,14,25,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x7C;
	// rlwinm r11,r11,7,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x3;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | r11.u64;
loc_825F7E78:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825f7f68
	if (cr6.eq) goto loc_825F7F68;
	// li r31,1
	r31.s64 = 1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825F7E88:
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// bge cr6,0x825f7f58
	if (!cr6.lt) goto loc_825F7F58;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// subf r28,r31,r4
	r28.s64 = ctx.r4.s64 - r31.s64;
loc_825F7E98:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r8,14,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7C;
	// rlwinm r8,r8,7,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x3;
	// rlwinm r24,r7,14,25,29
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x7C;
	// rlwinm r22,r7,7,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x3;
	// or r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r6,r24,r22
	ctx.r6.u64 = r24.u64 | r22.u64;
	// subf. r8,r7,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825f7ed8
	if (cr0.eq) goto loc_825F7ED8;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// beq cr6,0x825f7f1c
	if (cr6.eq) goto loc_825F7F1C;
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(r29.s32, ctx.r6.s32, xer);
	// bne cr6,0x825f7f14
	if (!cr6.eq) goto loc_825F7F14;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x825f7f14
	goto loc_825F7F14;
loc_825F7ED8:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,9
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 9;
	// srawi r7,r7,9
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 9;
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825f7f14
	if (!cr0.eq) goto loc_825F7F14;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// lhz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// lbzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r25.u32);
	// lbzx r7,r7,r25
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + r25.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_825F7F14:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x825f7f4c
	if (!cr6.gt) goto loc_825F7F4C;
loc_825F7F1C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r24,8(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r24.u32);
loc_825F7F4C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x825f7e98
	if (!cr0.eq) goto loc_825F7E98;
loc_825F7F58:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x825f7e88
	if (!cr0.eq) goto loc_825F7E88;
loc_825F7F68:
	// mulli r11,r5,12
	r11.s64 = ctx.r5.s64 * 12;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f7db0
	if (!cr6.lt) goto loc_825F7DB0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825F7F98:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r9,r10,25,12,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xC0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwimi r6,r8,25,12,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 25) & 0xC0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwinm r10,r9,0,7,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FC0000;
	// rlwinm r9,r6,0,7,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FC0000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825f8028
	if (!cr6.eq) goto loc_825F8028;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,9
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// srawi r9,r9,9
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825f8028
	if (cr6.gt) goto loc_825F8028;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r6,r6,26
	ctx.r6.u64 = ctx.r6.u32 & 0x3F;
	// lbzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + r25.u32);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x825f8028
	if (cr6.gt) goto loc_825F8028;
	// rlwinm r9,r8,5,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f8010
	if (!cr6.gt) goto loc_825F8010;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_825F8010:
	// rlwimi r8,r10,27,2,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x38000000) | (ctx.r8.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x825f802c
	goto loc_825F802C;
loc_825F8028:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_825F802C:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bdnz 0x825f7f98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F7F98;
	// b 0x825f7db0
	goto loc_825F7DB0;
loc_825F8038:
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// b 0x825f806c
	goto loc_825F806C;
loc_825F8040:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r23
	ctx.r3.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x825f8064
	if (cr6.eq) goto loc_825F8064;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825F8064:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_825F806C:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x825f8040
	if (cr6.lt) goto loc_825F8040;
loc_825F8074:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
}

__attribute__((alias("__imp__sub_825F8078"))) PPC_WEAK_FUNC(sub_825F8078);
PPC_FUNC_IMPL(__imp__sub_825F8078) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825F807C"))) PPC_WEAK_FUNC(sub_825F807C);
PPC_FUNC_IMPL(__imp__sub_825F807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F8080"))) PPC_WEAK_FUNC(sub_825F8080);
PPC_FUNC_IMPL(__imp__sub_825F8080) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r8,20
	r11.u64 = ctx.r8.u32 & 0xFFF;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r7,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	r31.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r5,25,3,7
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 25) & 0x1F000000) | (r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825F80F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x825f8120
	if (cr6.eq) goto loc_825F8120;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825F8120:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8134
	if (!cr0.eq) goto loc_825F8134;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825f80f8
	goto loc_825F80F8;
loc_825F8134:
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

__attribute__((alias("__imp__sub_825F8148"))) PPC_WEAK_FUNC(sub_825F8148);
PPC_FUNC_IMPL(__imp__sub_825F8148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F814C"))) PPC_WEAK_FUNC(sub_825F814C);
PPC_FUNC_IMPL(__imp__sub_825F814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F8150"))) PPC_WEAK_FUNC(sub_825F8150);
PPC_FUNC_IMPL(__imp__sub_825F8150) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r9,r11,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r10,20
	r11.u64 = ctx.r10.u32 & 0xFFF;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
loc_825F8194:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x825f81c0
	if (cr6.eq) goto loc_825F81C0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825F81C0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// rlwimi r11,r9,24,28,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xF) | (r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825f81ec
	if (cr6.eq) goto loc_825F81EC;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825F81EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8200
	if (!cr0.eq) goto loc_825F8200;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x825f8194
	goto loc_825F8194;
loc_825F8200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F8204"))) PPC_WEAK_FUNC(sub_825F8204);
PPC_FUNC_IMPL(__imp__sub_825F8204) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F8208"))) PPC_WEAK_FUNC(sub_825F8208);
PPC_FUNC_IMPL(__imp__sub_825F8208) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825f8350
	if (cr6.eq) goto loc_825F8350;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r10,0,13,13
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8350
	if (!cr0.eq) goto loc_825F8350;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825f8250
	if (cr6.eq) goto loc_825F8250;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8350
	if (!cr0.eq) goto loc_825F8350;
loc_825F8250:
	// rlwinm r26,r10,27,27,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// beq cr6,0x825f8294
	if (cr6.eq) goto loc_825F8294;
	// lwz r11,20(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// addi r28,r6,32
	r28.s64 = ctx.r6.s64 + 32;
	// clrlwi. r24,r11,27
	r24.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// rlwinm r11,r11,27,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// beq 0x825f82a0
	if (cr0.eq) goto loc_825F82A0;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// b 0x825f82a0
	goto loc_825F82A0;
loc_825F8294:
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_825F82A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f831c
	if (cr6.eq) goto loc_825F831C;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_825F82AC:
	// lbz r27,3(r28)
	r27.u64 = PPC_LOAD_U8(r28.u32 + 3);
	// b 0x825f82d8
	goto loc_825F82D8;
loc_825F82B4:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x825f82e0
	if (!cr6.lt) goto loc_825F82E0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f8080
	sub_825F8080(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825F82D8:
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x825f82b4
	if (cr6.lt) goto loc_825F82B4;
loc_825F82E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,20,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8308
	if (cr0.eq) goto loc_825F8308;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f8150
	sub_825F8150(ctx, base);
loc_825F8308:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x825f82ac
	if (!cr0.eq) goto loc_825F82AC;
loc_825F831C:
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bge cr6,0x825f8344
	if (!cr6.lt) goto loc_825F8344;
	// subf r29,r29,r26
	r29.s64 = r26.s64 - r29.s64;
loc_825F8328:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f8080
	sub_825F8080(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825f8328
	if (!cr0.eq) goto loc_825F8328;
loc_825F8344:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwimi r11,r24,20,8,11
	r11.u64 = (__builtin_rotateleft32(r24.u32, 20) & 0xF00000) | (r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_825F8350:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F8354"))) PPC_WEAK_FUNC(sub_825F8354);
PPC_FUNC_IMPL(__imp__sub_825F8354) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825F8358"))) PPC_WEAK_FUNC(sub_825F8358);
PPC_FUNC_IMPL(__imp__sub_825F8358) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r10,112
	r11.s64 = ctx.r10.s64 + 112;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwzx r11,r29,r5
	r11.u64 = PPC_LOAD_U32(r29.u32 + ctx.r5.u32);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lwz r27,876(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r28,r27,30,2,31
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r4,r28,5
	ctx.r4.s64 = r28.s64 + 5;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f84a4
	if (cr0.eq) goto loc_825F84A4;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,256
	ctx.r10.s64 = 256;
	// ori r9,r11,15104
	ctx.r9.u64 = r11.u64 | 15104;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r11,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r28,18
	r11.u64 = r28.u32 & 0x3FFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stwu r11,4(r24)
	ea = 4 + r24.u32;
	PPC_STORE_U32(ea, r11.u32);
	r24.u32 = ea;
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r26,r24,4
	r26.s64 = r24.s64 + 4;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r29,r11,-16384
	r29.s64 = r11.s64 + -1073741824;
	// sync 
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r4,r29,r27
	ctx.r4.u64 = r29.u64 + r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825f845c
	if (cr6.eq) goto loc_825F845C;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825f8208
	sub_825F8208(ctx, base);
loc_825F845C:
	// addic r11,r25,-1
	xer.ca = r25.u32 > 0;
	r11.s64 = r25.s64 + -1;
	// lbz r10,11070(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 11070);
	// addi r6,r30,12904
	ctx.r6.s64 = r30.s64 + 12904;
	// subfe r11,r11,r25
	temp.u8 = (~r11.u32 + r25.u32 < ~r11.u32) | (~r11.u32 + r25.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stb r10,11070(r30)
	PPC_STORE_U8(r30.u32 + 11070, ctx.r10.u8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7a58
	sub_825F7A58(ctx, base);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r10,12912(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 12912);
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// std r10,12272(r30)
	PPC_STORE_U64(r30.u32 + 12272, ctx.r10.u64);
	// ld r11,12904(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 12904);
	// std r11,12264(r30)
	PPC_STORE_U64(r30.u32 + 12264, r11.u64);
loc_825F84A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825F84A8"))) PPC_WEAK_FUNC(sub_825F84A8);
PPC_FUNC_IMPL(__imp__sub_825F84A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825F84AC"))) PPC_WEAK_FUNC(sub_825F84AC);
PPC_FUNC_IMPL(__imp__sub_825F84AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F84B0"))) PPC_WEAK_FUNC(sub_825F84B0);
PPC_FUNC_IMPL(__imp__sub_825F84B0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f8558
	if (cr6.eq) goto loc_825F8558;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// add r27,r11,r31
	r27.u64 = r11.u64 + r31.u64;
	// b 0x825f8550
	goto loc_825F8550;
loc_825F84E4:
	// lhz r28,2(r31)
	r28.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lhz r26,0(r31)
	r26.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x825f8558
	if (cr0.eq) goto loc_825F8558;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f851c
	if (!cr6.gt) goto loc_825F851C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F851C:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// ori r10,r10,12032
	ctx.r10.u64 = ctx.r10.u64 | 12032;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_825F8550:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x825f84e4
	if (cr6.lt) goto loc_825F84E4;
loc_825F8558:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F855C"))) PPC_WEAK_FUNC(sub_825F855C);
PPC_FUNC_IMPL(__imp__sub_825F855C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F8560"))) PPC_WEAK_FUNC(sub_825F8560);
PPC_FUNC_IMPL(__imp__sub_825F8560) {
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
	// mulli r11,r6,416
	r11.s64 = ctx.r6.s64 * 416;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,48(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825f85c8
	if (!cr6.eq) goto loc_825F85C8;
	// ld r9,12912(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12912);
	// addi r29,r3,12904
	r29.s64 = ctx.r3.s64 + 12904;
	// ld r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 56);
	// ld r11,48(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 48);
	// ld r8,12904(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12904);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// ld r6,32(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32);
	// ld r9,40(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 40);
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f8684
	if (cr6.eq) goto loc_825F8684;
loc_825F85C8:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f85f8
	if (cr6.eq) goto loc_825F85F8;
	// lwz r10,11024(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 11024);
	// lwz r9,11036(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 11036);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f85f8
	if (!cr6.lt) goto loc_825F85F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f8698
	goto loc_825F8698;
loc_825F85F8:
	// addi r11,r7,112
	r11.s64 = ctx.r7.s64 + 112;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r29,r30,12904
	r29.s64 = r30.s64 + 12904;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825f7a58
	sub_825F7A58(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f866c
	if (!cr6.eq) goto loc_825F866C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,-13708
	ctx.r10.s64 = r11.s64 + -13708;
loc_825F863C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825F8640:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825f8640
	if (!cr0.eq) goto loc_825F8640;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x825f863c
	if (cr6.lt) goto loc_825F863C;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825F866C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r11,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r11.u32);
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r11,48(r28)
	PPC_STORE_U64(r28.u32 + 48, r11.u64);
	// ld r11,12912(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 12912);
	// std r11,56(r28)
	PPC_STORE_U64(r28.u32 + 56, r11.u64);
loc_825F8684:
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,12912(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 12912);
	// std r11,12264(r30)
	PPC_STORE_U64(r30.u32 + 12264, r11.u64);
	// std r10,12272(r30)
	PPC_STORE_U64(r30.u32 + 12272, ctx.r10.u64);
loc_825F8698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F869C"))) PPC_WEAK_FUNC(sub_825F869C);
PPC_FUNC_IMPL(__imp__sub_825F869C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F86A0"))) PPC_WEAK_FUNC(sub_825F86A0);
PPC_FUNC_IMPL(__imp__sub_825F86A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// rlwinm r10,r4,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	// li r16,0
	r16.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r15,r11
	r15.u64 = r11.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// beq cr6,0x825f86ec
	if (cr6.eq) goto loc_825F86EC;
	// bl 0x825f6fe8
	sub_825F6FE8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_825F86EC:
	// lwz r30,13072(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 13072);
	// lwz r20,12240(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 12240);
	// lwz r29,13068(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 13068);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825f9014
	if (cr6.eq) goto loc_825F9014;
	// lwz r11,896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 896);
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// mr r23,r16
	r23.u64 = r16.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// li r22,5
	r22.s64 = 5;
	// lis r21,4096
	r21.s64 = 268435456;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// ori r14,r10,9984
	r14.u64 = ctx.r10.u64 | 9984;
	// addi r25,r11,872
	r25.s64 = r11.s64 + 872;
	// bne cr6,0x825f8808
	if (!cr6.eq) goto loc_825F8808;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f876c
	if (cr0.eq) goto loc_825F876C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f874c
	if (!cr6.gt) goto loc_825F874C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F874C:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
loc_825F876C:
	// lwz r11,872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 872);
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r18,r16
	r18.u64 = r16.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r19,r16
	r19.u64 = r16.u64;
	// beq 0x825f8794
	if (cr0.eq) goto loc_825F8794;
	// lwz r11,904(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 904);
	// li r23,1
	r23.s64 = 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r25,r11,872
	r25.s64 = r11.s64 + 872;
loc_825F8794:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f87b8
	if (cr0.eq) goto loc_825F87B8;
	// lwz r11,10372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10372);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r17,r17,r12
	r17.u64 = r17.u64 | r12.u64;
	// stw r11,10372(r31)
	PPC_STORE_U32(r31.u32 + 10372, r11.u32);
loc_825F87B8:
	// lwz r11,10580(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10580);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x825f87d8
	if (cr6.eq) goto loc_825F87D8;
	// rlwimi r11,r22,0,29,31
	r11.u64 = (__builtin_rotateleft32(r22.u32, 0) & 0x7) | (r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// oris r17,r17,8
	r17.u64 = r17.u64 | 524288;
	// stw r11,10580(r31)
	PPC_STORE_U32(r31.u32 + 10580, r11.u32);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
loc_825F87D8:
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825F87E8:
	// lwz r11,13904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f899c
	if (!cr6.eq) goto loc_825F899C;
	// lwz r11,872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 872);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f899c
	if (cr0.eq) goto loc_825F899C;
	// li r3,245
	ctx.r3.s64 = 245;
	// bl 0x8314d3cc
	__imp__KeBugCheck(ctx, base);
loc_825F8808:
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// rlwinm r10,r17,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x100000;
	// lbz r9,11070(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r8,11071(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// addi r27,r11,40
	r27.s64 = r11.s64 + 40;
	// lwz r18,48(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r16,52(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// rlwinm r11,r18,0,1,3
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x70000000;
	// mr r19,r18
	r19.u64 = r18.u64;
	// subfc r11,r11,r21
	xer.ca = r21.u32 >= r11.u32;
	r11.s64 = r21.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7F8;
	// rlwinm r11,r11,1,23,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1FE;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwimi r9,r10,0,28,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwimi r8,r11,0,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r9.u8);
	// stb r8,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r8.u8);
	// beq cr6,0x825f8930
	if (cr6.eq) goto loc_825F8930;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f84b0
	sub_825F84B0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f888c
	if (!cr6.gt) goto loc_825F888C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F888C:
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// mr r11,r14
	r11.u64 = r14.u64;
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// ori r17,r17,16384
	r17.u64 = r17.u64 | 16384;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// stw r11,10536(r31)
	PPC_STORE_U32(r31.u32 + 10536, r11.u32);
	// beq 0x825f890c
	if (cr0.eq) goto loc_825F890C;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r17,r17,r12
	r17.u64 = r17.u64 | r12.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,10372(r31)
	PPC_STORE_U32(r31.u32 + 10372, r11.u32);
loc_825F890C:
	// lwz r11,10580(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10580);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x825f8930
	if (cr6.eq) goto loc_825F8930;
	// li r10,1
	ctx.r10.s64 = 1;
	// oris r17,r17,8
	r17.u64 = r17.u64 | 524288;
	// rlwimi r11,r10,2,29,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0x7) | (r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
	// stw r11,10580(r31)
	PPC_STORE_U32(r31.u32 + 10580, r11.u32);
loc_825F8930:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// lwz r6,20(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r11,-13712(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13712);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825f8964
	if (!cr0.eq) goto loc_825F8964;
	// ori r8,r11,1
	ctx.r8.u64 = r11.u64 | 1;
	// lis r11,6
	r11.s64 = 393216;
	// stw r8,-13712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13712, ctx.r8.u32);
	// ori r11,r11,1023
	r11.u64 = r11.u64 | 1023;
	// stw r11,-13716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13716, r11.u32);
	// b 0x825f8968
	goto loc_825F8968;
loc_825F8964:
	// lwz r11,-13716(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13716);
loc_825F8968:
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & r11.u64;
	// lwz r9,13904(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13904);
	// and r11,r6,r11
	r11.u64 = ctx.r6.u64 & r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bne cr6,0x825f87e8
	if (!cr6.eq) goto loc_825F87E8;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f87e8
	if (cr0.eq) goto loc_825F87E8;
	// li r3,245
	ctx.r3.s64 = 245;
	// bl 0x8314d3cc
	__imp__KeBugCheck(ctx, base);
loc_825F899C:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// lwz r26,10580(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 10580);
	// lwz r24,12(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x825f8a68
	if (cr0.eq) goto loc_825F8A68;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825f8a00
	if (cr6.eq) goto loc_825F8A00;
	// lwz r11,10556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10556);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8a04
	if (!cr0.eq) goto loc_825F8A04;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825f8a04
	if (!cr0.eq) goto loc_825F8A04;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8a04
	if (!cr0.eq) goto loc_825F8A04;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// li r19,0
	r19.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_825F8A00:
	// rlwimi r29,r22,0,29,31
	r29.u64 = (__builtin_rotateleft32(r22.u32, 0) & 0x7) | (r29.u64 & 0xFFFFFFFFFFFFFFF8);
loc_825F8A04:
	// rlwinm r11,r17,0,13,13
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f8a20
	if (cr6.eq) goto loc_825F8A20;
	// or r11,r10,r19
	r11.u64 = ctx.r10.u64 | r19.u64;
	// or r10,r24,r16
	ctx.r10.u64 = r24.u64 | r16.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825F8A20:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8a44
	if (cr0.eq) goto loc_825F8A44;
	// clrlwi r10,r29,29
	ctx.r10.u64 = r29.u32 & 0x7;
	// lwz r11,10372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10372);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x825f8a40
	if (!cr6.eq) goto loc_825F8A40;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
loc_825F8A40:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_825F8A44:
	// lwz r11,13076(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13076);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x825f8a5c
	if (!cr6.eq) goto loc_825F8A5C;
	// rlwinm r11,r17,0,28,28
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f8a68
	if (cr6.eq) goto loc_825F8A68;
loc_825F8A5C:
	// stw r29,13076(r31)
	PPC_STORE_U32(r31.u32 + 13076, r29.u32);
	// ori r17,r17,8
	r17.u64 = r17.u64 | 8;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
loc_825F8A68:
	// rlwinm r10,r19,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x70000000;
	// lbz r9,11071(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// subfc r10,r10,r21
	xer.ca = r21.u32 >= ctx.r10.u32;
	ctx.r10.s64 = r21.s64 - ctx.r10.s64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm. r7,r11,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r9,0,24,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF01);
	// stb r10,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, ctx.r10.u8);
	// bne 0x825f8bc4
	if (!cr0.eq) goto loc_825F8BC4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x825f8bc4
	if (!cr6.eq) goto loc_825F8BC4;
	// rlwinm r11,r17,0,12,12
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x80000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f8c0c
	if (cr6.eq) goto loc_825F8C0C;
	// addi r28,r30,872
	r28.s64 = r30.s64 + 872;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825f84b0
	sub_825F84B0(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// andi. r10,r11,191
	ctx.r10.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// beq cr6,0x825f8b88
	if (cr6.eq) goto loc_825F8B88;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f8b88
	if (!cr0.eq) goto loc_825F8B88;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8af8
	if (cr0.eq) goto loc_825F8AF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825f8bf0
	goto loc_825F8BF0;
loc_825F8AF8:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8560
	sub_825F8560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f8b18
	if (cr0.eq) goto loc_825F8B18;
	// mr r15,r23
	r15.u64 = r23.u64;
	// b 0x825f8b3c
	goto loc_825F8B3C;
loc_825F8B18:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f8358
	sub_825F8358(ctx, base);
loc_825F8B3C:
	// xor r11,r29,r26
	r11.u64 = r29.u64 ^ r26.u64;
	// clrlwi. r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8c0c
	if (cr0.eq) goto loc_825F8C0C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8c0c
	if (cr0.eq) goto loc_825F8C0C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f8560
	sub_825F8560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f8c0c
	if (cr0.eq) goto loc_825F8C0C;
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
loc_825F8B74:
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// b 0x825f8c0c
	goto loc_825F8C0C;
loc_825F8B88:
	// mulli r11,r23,416
	r11.s64 = r23.s64 * 416;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// xor r9,r29,r26
	ctx.r9.u64 = r29.u64 ^ r26.u64;
	// mr r15,r23
	r15.u64 = r23.u64;
	// clrlwi. r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// std r8,12264(r31)
	PPC_STORE_U64(r31.u32 + 12264, ctx.r8.u64);
	// ld r11,56(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// std r11,12272(r31)
	PPC_STORE_U64(r31.u32 + 12272, r11.u64);
	// beq 0x825f8c0c
	if (cr0.eq) goto loc_825F8C0C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8c0c
	if (cr0.eq) goto loc_825F8C0C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x825f8b74
	goto loc_825F8B74;
loc_825F8BC4:
	// rlwinm r10,r17,0,11,12
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f8c0c
	if (cr6.eq) goto loc_825F8C0C;
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// addi r4,r30,872
	ctx.r4.s64 = r30.s64 + 872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x825f84b0
	sub_825F84B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825F8BF0:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825f8358
	sub_825F8358(ctx, base);
loc_825F8C0C:
	// rlwinm r11,r17,0,11,12
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825f8c80
	if (cr6.eq) goto loc_825F8C80;
	// or r9,r24,r16
	ctx.r9.u64 = r24.u64 | r16.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// oris r17,r17,1
	r17.u64 = r17.u64 | 65536;
	// stw r9,10532(r31)
	PPC_STORE_U32(r31.u32 + 10532, ctx.r9.u32);
	// or r9,r11,r18
	ctx.r9.u64 = r11.u64 | r18.u64;
	// ori r17,r17,32768
	r17.u64 = r17.u64 | 32768;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,10528(r31)
	PPC_STORE_U32(r31.u32 + 10528, ctx.r9.u32);
	// beq 0x825f8c68
	if (cr0.eq) goto loc_825F8C68;
	// lwz r11,904(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 904);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,872
	ctx.r10.s64 = r11.s64 + 872;
	// lwz r10,880(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 880);
	// lwz r11,884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 884);
	// or r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 | r19.u64;
	// or r11,r11,r16
	r11.u64 = r11.u64 | r16.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x825f8c80
	goto loc_825F8C80;
loc_825F8C68:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x825f8c80
	if (!cr6.eq) goto loc_825F8C80;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x825f8c80
	if (cr6.eq) goto loc_825F8C80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
loc_825F8C80:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f8f94
	if (cr0.eq) goto loc_825F8F94;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f8ca4
	if (!cr6.gt) goto loc_825F8CA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F8CA4:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// ori r7,r11,24576
	ctx.r7.u64 = r11.u64 | 24576;
	// ori r11,r10,21845
	r11.u64 = ctx.r10.u64 | 21845;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r17,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmpldi cr6,r8,0
	cr6.compare<uint64_t>(ctx.r8.u64, 0, xer);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// beq cr6,0x825f8cfc
	if (cr6.eq) goto loc_825F8CFC;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r12,-9
	r12.s64 = -9;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10580);
	// and r17,r17,r12
	r17.u64 = r17.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F8CFC:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825f8d1c
	if (cr6.eq) goto loc_825F8D1C;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,9729
	ctx.r10.u64 = ctx.r10.u64 | 9729;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825F8D1C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825f8d40
	if (cr6.eq) goto loc_825F8D40;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// ori r9,r9,21761
	ctx.r9.u64 = ctx.r9.u64 | 21761;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F8D40:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r17,r12
	ctx.r10.u64 = r17.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f8d70
	if (cr6.eq) goto loc_825F8D70;
	// li r10,8193
	ctx.r10.s64 = 8193;
	// li r12,-2
	r12.s64 = -2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10372);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r17,r17,r12
	r17.u64 = r17.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F8D70:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825f8d94
	if (cr6.eq) goto loc_825F8D94;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// li r8,8193
	ctx.r8.s64 = 8193;
	// ori r9,r9,21761
	ctx.r9.u64 = ctx.r9.u64 | 21761;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F8D94:
	// rlwinm r10,r17,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825f8dc8
	if (cr6.eq) goto loc_825F8DC8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r12,-2
	r12.s64 = -131072;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r12,r12,32767
	r12.u64 = r12.u64 | 32767;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10528);
	// and r17,r17,r12
	r17.u64 = r17.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10532);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825F8DC8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825f8df4
	if (cr6.eq) goto loc_825F8DF4;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,8576
	ctx.r6.s64 = 8576;
	// ori r8,r8,21761
	ctx.r8.u64 = ctx.r8.u64 | 21761;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825F8DF4:
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x825f8efc
	if (cr6.eq) goto loc_825F8EFC;
	// addi r10,r9,112
	ctx.r10.s64 = ctx.r9.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,9985
	r11.u64 = r11.u64 | 9985;
	// mulli r9,r9,416
	ctx.r9.s64 = ctx.r9.s64 * 416;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// cmpwi cr6,r15,-1
	cr6.compare<int32_t>(r15.s32, -1, xer);
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r9,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r9.u32);
	// beq cr6,0x825f8f6c
	if (cr6.eq) goto loc_825F8F6C;
	// addi r8,r15,112
	ctx.r8.s64 = r15.s64 + 112;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// ori r9,r9,43690
	ctx.r9.u64 = ctx.r9.u64 | 43690;
	// mulli r11,r15,416
	r11.s64 = r15.s64 * 416;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// ori r9,r6,9985
	ctx.r9.u64 = ctx.r6.u64 | 9985;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r9,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r9.u32);
	// b 0x825f8f68
	goto loc_825F8F68;
loc_825F8EFC:
	// cmpwi cr6,r15,-1
	cr6.compare<int32_t>(r15.s32, -1, xer);
	// beq cr6,0x825f8f6c
	if (cr6.eq) goto loc_825F8F6C;
	// addi r10,r15,112
	ctx.r10.s64 = r15.s64 + 112;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r9,r15,416
	ctx.r9.s64 = r15.s64 * 416;
	// stwu r14,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r14.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,11036(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r9,64(r5)
	PPC_STORE_U32(ctx.r5.u32 + 64, ctx.r9.u32);
loc_825F8F68:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825F8F6C:
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x825f9014
	goto loc_825F9014;
loc_825F8F94:
	// cmpwi cr6,r15,-1
	cr6.compare<int32_t>(r15.s32, -1, xer);
	// beq cr6,0x825f9014
	if (cr6.eq) goto loc_825F9014;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825f8fb4
	if (!cr6.gt) goto loc_825F8FB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825F8FB4:
	// addi r11,r15,112
	r11.s64 = r15.s64 + 112;
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mulli r9,r15,416
	ctx.r9.s64 = r15.s64 * 416;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r11,876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// stw r11,64(r7)
	PPC_STORE_U32(ctx.r7.u32 + 64, r11.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825F9014:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825F901C"))) PPC_WEAK_FUNC(sub_825F901C);
PPC_FUNC_IMPL(__imp__sub_825F901C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825F9020"))) PPC_WEAK_FUNC(sub_825F9020);
PPC_FUNC_IMPL(__imp__sub_825F9020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_825F9040:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r8,30,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFF;
	// stbx r8,r11,r6
	PPC_STORE_U8(r11.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x825f9040
	if (!cr6.gt) goto loc_825F9040;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825f90c0
	if (cr6.eq) goto loc_825F90C0;
	// lwz r10,64(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// lwz r11,896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 896);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r29,r10,40
	r29.s64 = ctx.r10.s64 + 40;
	// addi r30,r11,872
	r30.s64 = r11.s64 + 872;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f6d00
	sub_825F6D00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825f90c0
	if (cr0.eq) goto loc_825F90C0;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825f90c0
	if (!cr6.eq) goto loc_825F90C0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825f8208
	sub_825F8208(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f6e28
	sub_825F6E28(ctx, base);
loc_825F90C0:
	// lwz r11,872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 872);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addic. r26,r11,1
	xer.ca = r11.u32 > 4294967294;
	r26.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x825f9180
	if (cr0.eq) goto loc_825F9180;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r28,r31,896
	r28.s64 = r31.s64 + 896;
	// addi r25,r11,-13708
	r25.s64 = r11.s64 + -13708;
loc_825F90F0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825f7a58
	sub_825F7A58(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f9164
	if (!cr6.eq) goto loc_825F9164;
loc_825F9134:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_825F9138:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825f9138
	if (!cr0.eq) goto loc_825F9138;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x825f9134
	if (cr6.lt) goto loc_825F9134;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
loc_825F9164:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,416
	r30.s64 = r30.s64 + 416;
	// blt cr6,0x825f90f0
	if (cr6.lt) goto loc_825F90F0;
loc_825F9180:
	// lwz r11,872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 872);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,872(r31)
	PPC_STORE_U32(r31.u32 + 872, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825F9190"))) PPC_WEAK_FUNC(sub_825F9190);
PPC_FUNC_IMPL(__imp__sub_825F9190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F9194"))) PPC_WEAK_FUNC(sub_825F9194);
PPC_FUNC_IMPL(__imp__sub_825F9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9198"))) PPC_WEAK_FUNC(sub_825F9198);
PPC_FUNC_IMPL(__imp__sub_825F9198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,32528
	r11.s64 = 2131755008;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x825f91b0
	if (cr6.lt) goto loc_825F91B0;
	// lis r11,-30976
	r11.s64 = -2030043136;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_825F91B0:
	// addi r10,r4,127
	ctx.r10.s64 = ctx.r4.s64 + 127;
	// rlwinm r11,r3,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm. r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// beq 0x825f9220
	if (cr0.eq) goto loc_825F9220;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825F91DC:
	// dcbf r0,r10
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbf r9,r10
	// li r9,256
	ctx.r9.s64 = 256;
	// dcbf r9,r10
	// li r9,384
	ctx.r9.s64 = 384;
	// dcbf r9,r10
	// li r9,512
	ctx.r9.s64 = 512;
	// dcbf r9,r10
	// li r9,640
	ctx.r9.s64 = 640;
	// dcbf r9,r10
	// li r9,768
	ctx.r9.s64 = 768;
	// dcbf r9,r10
	// li r9,896
	ctx.r9.s64 = 896;
	// dcbf r9,r10
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bdnz 0x825f91dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F91DC;
loc_825F9220:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f9238
	if (cr6.eq) goto loc_825F9238;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F922C:
	// dcbf r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x825f922c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F922C;
loc_825F9238:
	// sync 
}

__attribute__((alias("__imp__sub_825F923C"))) PPC_WEAK_FUNC(sub_825F923C);
PPC_FUNC_IMPL(__imp__sub_825F923C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F9240"))) PPC_WEAK_FUNC(sub_825F9240);
PPC_FUNC_IMPL(__imp__sub_825F9240) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lis r30,4
	r30.s64 = 262144;
	// bne 0x825f926c
	if (!cr0.eq) goto loc_825F926C;
	// lis r30,2
	r30.s64 = 131072;
loc_825F926C:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ori r6,r11,1
	ctx.r6.u64 = r11.u64 | 1;
	// lis r4,32528
	ctx.r4.s64 = 2131755008;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r31,32528
	r31.s64 = 2131755008;
	// bl 0x8314d3dc
	__imp__KeLockL2(ctx, base);
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
loc_825F9290:
	// dcbzl r0,r31
	memset(base + ((r31.u32) & ~127), 0, 128);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,384
	ctx.r10.s64 = 384;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,512
	ctx.r10.s64 = 512;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,640
	ctx.r10.s64 = 640;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,768
	ctx.r10.s64 = 768;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// li r10,896
	ctx.r10.s64 = 896;
	// dcbzl r10,r31
	memset(base + ((ctx.r10.u32 + r31.u32) & ~127), 0, 128);
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825f9290
	if (cr6.lt) goto loc_825F9290;
	// sync 
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

__attribute__((alias("__imp__sub_825F92F0"))) PPC_WEAK_FUNC(sub_825F92F0);
PPC_FUNC_IMPL(__imp__sub_825F92F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F92F4"))) PPC_WEAK_FUNC(sub_825F92F4);
PPC_FUNC_IMPL(__imp__sub_825F92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F92F8"))) PPC_WEAK_FUNC(sub_825F92F8);
PPC_FUNC_IMPL(__imp__sub_825F92F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// srawi. r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f9310
	if (cr0.eq) goto loc_825F9310;
	// lis r11,10922
	r11.s64 = 715784192;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// b 0x825f9328
	goto loc_825F9328;
loc_825F9310:
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f9324
	if (cr0.eq) goto loc_825F9324;
	// lis r11,5461
	r11.s64 = 357892096;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// b 0x825f9328
	goto loc_825F9328;
loc_825F9324:
	// li r11,-1
	r11.s64 = -1;
loc_825F9328:
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f9358
	if (cr0.eq) goto loc_825F9358;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// bne cr6,0x825f9358
	if (!cr6.eq) goto loc_825F9358;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825f9358
	if (!cr6.eq) goto loc_825F9358;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_825F9358:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_825F935C"))) PPC_WEAK_FUNC(sub_825F935C);
PPC_FUNC_IMPL(__imp__sub_825F935C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F9360"))) PPC_WEAK_FUNC(sub_825F9360);
PPC_FUNC_IMPL(__imp__sub_825F9360) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f92f8
	sub_825F92F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f9398
	if (!cr6.eq) goto loc_825F9398;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f93a0
	goto loc_825F93A0;
loc_825F9398:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F93A0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x825f93d0
	if (cr6.eq) goto loc_825F93D0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// stw r31,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r11,r11,25088
	r11.u64 = r11.u64 | 25088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825e2e00
	sub_825E2E00(ctx, base);
loc_825F93D0:
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

__attribute__((alias("__imp__sub_825F93E4"))) PPC_WEAK_FUNC(sub_825F93E4);
PPC_FUNC_IMPL(__imp__sub_825F93E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F93E8"))) PPC_WEAK_FUNC(sub_825F93E8);
PPC_FUNC_IMPL(__imp__sub_825F93E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f940c
	if (!cr6.eq) goto loc_825F940C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f9414
	goto loc_825F9414;
loc_825F940C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F9414:
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r28,6
	r28.s64 = 6;
	// addi r31,r29,11588
	r31.s64 = r29.s64 + 11588;
loc_825F9420:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f9470
	if (cr6.eq) goto loc_825F9470;
	// lwz r30,-4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwimi r30,r11,0,30,31
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x3) | (r30.u64 & 0xFFFFFFFFFFFFFFFC);
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
loc_825F9448:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f9468
	if (cr0.eq) goto loc_825F9468;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x825f9448
	if (!cr6.eq) goto loc_825F9448;
loc_825F9468:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825F9470:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// bne 0x825f9420
	if (!cr0.eq) goto loc_825F9420;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F9480"))) PPC_WEAK_FUNC(sub_825F9480);
PPC_FUNC_IMPL(__imp__sub_825F9480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F9484"))) PPC_WEAK_FUNC(sub_825F9484);
PPC_FUNC_IMPL(__imp__sub_825F9484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9488"))) PPC_WEAK_FUNC(sub_825F9488);
PPC_FUNC_IMPL(__imp__sub_825F9488) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_825F94A8:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x825f9560
	if (!cr6.lt) goto loc_825F9560;
	// addi r5,r26,-1
	ctx.r5.s64 = r26.s64 + -1;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_825F94C0:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// lhz r30,-4(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r29,0(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r9,r7,r27
	ctx.r9.u64 = ctx.r7.u64 + r27.u64;
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r28,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r30,3
	r30.u64 = __builtin_rotateleft32(r30.u32, 3);
	// rotlwi r29,r29,3
	r29.u64 = __builtin_rotateleft32(r29.u32, 3);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_825F9500:
	// lwz r24,-4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r7
	cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, xer);
	// bge cr6,0x825f9538
	if (!cr6.lt) goto loc_825F9538;
	// lwz r24,4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(r24.u32, r30.u32, xer);
	// ble cr6,0x825f9538
	if (!cr6.gt) goto loc_825F9538;
	// lwz r24,0(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r24,r28
	cr6.compare<uint32_t>(r24.u32, r28.u32, xer);
	// bge cr6,0x825f9538
	if (!cr6.lt) goto loc_825F9538;
	// lwz r24,8(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(r24.u32, r29.u32, xer);
	// ble cr6,0x825f9538
	if (!cr6.gt) goto loc_825F9538;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
loc_825F9538:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x825f9500
	if (!cr6.eq) goto loc_825F9500;
	// oris r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 2147483648;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x825f94c0
	if (cr6.lt) goto loc_825F94C0;
loc_825F9560:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825f9574
	if (cr6.eq) goto loc_825F9574;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825F9574:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825f94a8
	if (!cr6.eq) goto loc_825F94A8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825F9588"))) PPC_WEAK_FUNC(sub_825F9588);
PPC_FUNC_IMPL(__imp__sub_825F9588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825F958C"))) PPC_WEAK_FUNC(sub_825F958C);
PPC_FUNC_IMPL(__imp__sub_825F958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9590"))) PPC_WEAK_FUNC(sub_825F9590);
PPC_FUNC_IMPL(__imp__sub_825F9590) {
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
	// addi r27,r3,76
	r27.s64 = ctx.r3.s64 + 76;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8314d0ec
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x825f96b0
	if (!cr6.eq) goto loc_825F96B0;
	// lis r29,256
	r29.s64 = 16777216;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// slw r11,r29,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 << (r11.u8 & 0x3F));
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bne 0x825f9674
	if (!cr0.eq) goto loc_825F9674;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f960c
	if (!cr6.eq) goto loc_825F960C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f9614
	goto loc_825F9614;
loc_825F960C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F9614:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11664
	r11.s64 = r11.s64 + 11664;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825F9628:
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// slw r10,r29,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r8.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825f9650
	if (cr0.eq) goto loc_825F9650;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_825F9650:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,108
	r11.s64 = r11.s64 + 108;
	// bdnz 0x825f9628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F9628;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825f9674
	if (!cr6.eq) goto loc_825F9674;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_825F9674:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f93e8
	sub_825F93E8(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825f969c
	if (cr6.eq) goto loc_825F969C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d3ec
	__imp__KeUnlockL2(ctx, base);
loc_825F969C:
	// lwsync 
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x825f96c0
	goto loc_825F96C0;
loc_825F96B0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0cc
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
loc_825F96C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825F96C4"))) PPC_WEAK_FUNC(sub_825F96C4);
PPC_FUNC_IMPL(__imp__sub_825F96C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F96C8"))) PPC_WEAK_FUNC(sub_825F96C8);
PPC_FUNC_IMPL(__imp__sub_825F96C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,60
	ctx.r3.s64 = r11.s64 + 60;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// b 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825F9700"))) PPC_WEAK_FUNC(sub_825F9700);
PPC_FUNC_IMPL(__imp__sub_825F9700) {
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
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f972c
	if (!cr6.eq) goto loc_825F972C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f9734
	goto loc_825F9734;
loc_825F972C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F9734:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,11576
	ctx.r10.s64 = r11.s64 + 11576;
	// addi r3,r10,60
	ctx.r3.s64 = ctx.r10.s64 + 60;
	// lwz r9,11660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 11660);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,23
	ctx.r9.s64 = ctx.r9.s64 + 23;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r10,11660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 11660);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11660(r11)
	PPC_STORE_U32(r11.u32 + 11660, ctx.r10.u32);
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F9788"))) PPC_WEAK_FUNC(sub_825F9788);
PPC_FUNC_IMPL(__imp__sub_825F9788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F978C"))) PPC_WEAK_FUNC(sub_825F978C);
PPC_FUNC_IMPL(__imp__sub_825F978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9790"))) PPC_WEAK_FUNC(sub_825F9790);
PPC_FUNC_IMPL(__imp__sub_825F9790) {
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
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2c40
	sub_825E2C40(ctx, base);
	// lwz r11,13612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13612);
	// addi r30,r31,13760
	r30.s64 = r31.s64 + 13760;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r31,13784
	ctx.r3.s64 = r31.s64 + 13784;
	// stw r11,13604(r31)
	PPC_STORE_U32(r31.u32 + 13604, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,13608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13608);
	// stw r11,13600(r31)
	PPC_STORE_U32(r31.u32 + 13600, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13736
	ctx.r3.s64 = r31.s64 + 13736;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13640
	ctx.r3.s64 = r31.s64 + 13640;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13664
	ctx.r3.s64 = r31.s64 + 13664;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13688
	ctx.r3.s64 = r31.s64 + 13688;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// li r5,4224
	ctx.r5.s64 = 4224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13712
	ctx.r3.s64 = r31.s64 + 13712;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// lwz r3,13772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13772);
	// lwz r10,13776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13776);
	// addi r11,r3,252
	r11.s64 = ctx.r3.s64 + 252;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825f9868
	if (!cr6.gt) goto loc_825F9868;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
loc_825F9868:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,13564(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13564);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r8,13368(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13368);
	// lwz r7,13372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13372);
	// ble cr6,0x825f98e0
	if (!cr6.gt) goto loc_825F98E0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r11,r31,13124
	r11.s64 = r31.s64 + 13124;
loc_825F98A0:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwzu r6,16(r11)
	ea = 16 + r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stwu r6,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r6,13124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x825f98a0
	if (cr6.lt) goto loc_825F98A0;
loc_825F98E0:
	// addi r11,r3,252
	r11.s64 = ctx.r3.s64 + 252;
	// stw r11,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, r11.u32);
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

__attribute__((alias("__imp__sub_825F98FC"))) PPC_WEAK_FUNC(sub_825F98FC);
PPC_FUNC_IMPL(__imp__sub_825F98FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F9900"))) PPC_WEAK_FUNC(sub_825F9900);
PPC_FUNC_IMPL(__imp__sub_825F9900) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12224);
	// li r28,0
	r28.s64 = 0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r28,11084(r31)
	PPC_STORE_U32(r31.u32 + 11084, r28.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11128);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// addi r30,r31,11636
	r30.s64 = r31.s64 + 11636;
	// li r29,6
	r29.s64 = 6;
loc_825F9938:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825f9954
	if (cr6.eq) goto loc_825F9954;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
loc_825F9954:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// bne 0x825f9938
	if (!cr0.eq) goto loc_825F9938;
	// addi r30,r31,11652
	r30.s64 = r31.s64 + 11652;
	// li r29,6
	r29.s64 = 6;
loc_825F9968:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825f9984
	if (cr6.eq) goto loc_825F9984;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82605300
	sub_82605300(ctx, base);
loc_825F9984:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// bne 0x825f9968
	if (!cr0.eq) goto loc_825F9968;
	// stw r28,11120(r31)
	PPC_STORE_U32(r31.u32 + 11120, r28.u32);
	// stw r28,11124(r31)
	PPC_STORE_U32(r31.u32 + 11124, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825F999C"))) PPC_WEAK_FUNC(sub_825F999C);
PPC_FUNC_IMPL(__imp__sub_825F999C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825F99A0"))) PPC_WEAK_FUNC(sub_825F99A0);
PPC_FUNC_IMPL(__imp__sub_825F99A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x825f9240
	sub_825F9240(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// lis r26,256
	r26.s64 = 16777216;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F99DC:
	// slw r11,r26,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f99ec
	if (cr0.eq) goto loc_825F99EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_825F99EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x825f99dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F99DC;
	// rlwinm r11,r27,0,2,7
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F000000;
	// clrlwi. r9,r27,31
	ctx.r9.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lis r11,4
	r11.s64 = 262144;
	// bne 0x825f9a0c
	if (!cr0.eq) goto loc_825F9A0C;
	// lis r11,2
	r11.s64 = 131072;
loc_825F9A0C:
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lwz r10,12224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12224);
	// rlwinm r6,r11,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lis r9,32528
	ctx.r9.s64 = 2131755008;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r11,r31,11592
	r11.s64 = r31.s64 + 11592;
loc_825F9A30:
	// slw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// and. r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825f9a84
	if (cr0.eq) goto loc_825F9A84;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r5.u32);
	// ori r8,r8,22528
	ctx.r8.u64 = ctx.r8.u64 | 22528;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// rlwimi r8,r5,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_825F9A84:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,108
	r11.s64 = r11.s64 + 108;
	// bdnz 0x825f9a30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F9A30;
	// lwz r9,12224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12224);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// srawi r7,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r29.u32);
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r7,8
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// oris r10,r9,33024
	ctx.r10.u64 = ctx.r9.u64 | 2164260864;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3790
	sub_825E3790(ctx, base);
	// addi r30,r31,11584
	r30.s64 = r31.s64 + 11584;
loc_825F9ADC:
	// slw r11,r26,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r26.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f9b2c
	if (cr0.eq) goto loc_825F9B2C;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r28,r11,0,0,29
	r28.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (r28.u64 & 0xFFFFFFFF00000003);
	// bl 0x825d0f50
	sub_825D0F50(ctx, base);
loc_825F9B04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d1048
	sub_825D1048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825f9b24
	if (cr0.eq) goto loc_825F9B24;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x825f9b04
	if (!cr6.eq) goto loc_825F9B04;
loc_825F9B24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825d0f80
	sub_825D0F80(ctx, base);
loc_825F9B2C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(r29.u32, 6, xer);
	// blt cr6,0x825f9adc
	if (cr6.lt) goto loc_825F9ADC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825F9B40"))) PPC_WEAK_FUNC(sub_825F9B40);
PPC_FUNC_IMPL(__imp__sub_825F9B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F9B44"))) PPC_WEAK_FUNC(sub_825F9B44);
PPC_FUNC_IMPL(__imp__sub_825F9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9B48"))) PPC_WEAK_FUNC(sub_825F9B48);
PPC_FUNC_IMPL(__imp__sub_825F9B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_825F9B50:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x825f9c14
	if (!cr6.lt) goto loc_825F9C14;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825F9B74:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// subf r11,r5,r8
	r11.s64 = ctx.r8.s64 - ctx.r5.s64;
	// beq 0x825f9ba8
	if (cr0.eq) goto loc_825F9BA8;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subfc r8,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// subf r8,r4,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r4.s64;
	// b 0x825f9bdc
	goto loc_825F9BDC;
loc_825F9BA8:
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lwbrx r4,0,r4
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwbrx r7,0,r3
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r3.u32));
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_825F9BDC:
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// dcbf r0,r9
	// dcbf r0,r11
	// li r9,24
	ctx.r9.s64 = 24;
	// dcbf r9,r11
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x825f9b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F9B74;
loc_825F9C14:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x825f9b50
	if (!cr6.eq) goto loc_825F9B50;
}

__attribute__((alias("__imp__sub_825F9C24"))) PPC_WEAK_FUNC(sub_825F9C24);
PPC_FUNC_IMPL(__imp__sub_825F9C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F9C28"))) PPC_WEAK_FUNC(sub_825F9C28);
PPC_FUNC_IMPL(__imp__sub_825F9C28) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9410
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// lis r28,16384
	r28.s64 = 1073741824;
loc_825F9C3C:
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// b 0x825f9d4c
	goto loc_825F9D4C;
loc_825F9C48:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// dcbf r0,r11
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825f9cec
	if (!cr0.eq) goto loc_825F9CEC;
	// addi r6,r31,-1
	ctx.r6.s64 = r31.s64 + -1;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r27,4(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// add r11,r8,r30
	r11.u64 = ctx.r8.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r8,r27,3
	ctx.r8.u64 = __builtin_rotateleft32(r27.u32, 3);
	// rlwinm r4,r26,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825F9CA0:
	// lwz r27,-4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f9cd8
	if (!cr6.lt) goto loc_825F9CD8;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// ble cr6,0x825f9cd8
	if (!cr6.gt) goto loc_825F9CD8;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(r27.u32, ctx.r4.u32, xer);
	// bge cr6,0x825f9cd8
	if (!cr6.lt) goto loc_825F9CD8;
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, xer);
	// ble cr6,0x825f9cd8
	if (!cr6.gt) goto loc_825F9CD8;
	// ori r7,r7,3
	ctx.r7.u64 = ctx.r7.u64 | 3;
loc_825F9CD8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x825f9ca0
	if (!cr6.eq) goto loc_825F9CA0;
	// b 0x825f9d28
	goto loc_825F9D28;
loc_825F9CEC:
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,52
	ctx.r8.s64 = r11.s64 + 52;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r11,r7
	ctx.r7.u64 = r11.u64 & ctx.r7.u64;
loc_825F9D28:
	// rlwinm r11,r3,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// dcbf r0,r11
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
loc_825F9D4C:
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, xer);
	// blt cr6,0x825f9c48
	if (cr6.lt) goto loc_825F9C48;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x825f9c3c
	if (!cr6.eq) goto loc_825F9C3C;
}

__attribute__((alias("__imp__sub_825F9D64"))) PPC_WEAK_FUNC(sub_825F9D64);
PPC_FUNC_IMPL(__imp__sub_825F9D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F9D68"))) PPC_WEAK_FUNC(sub_825F9D68);
PPC_FUNC_IMPL(__imp__sub_825F9D68) {
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
	// mflr r12
	// bl 0x828e9410
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_825F9D78:
	// lwz r28,0(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x825f9e48
	if (!cr6.lt) goto loc_825F9E48;
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_825F9D90:
	// lhz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// lhz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r3,r3,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r31,r31,3
	r31.u64 = __builtin_rotateleft32(r31.u32, 3);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_825F9DD0:
	// lwz r26,-4(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, xer);
	// bge cr6,0x825f9e08
	if (!cr6.lt) goto loc_825F9E08;
	// lwz r26,4(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, xer);
	// ble cr6,0x825f9e08
	if (!cr6.gt) goto loc_825F9E08;
	// lwz r26,0(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x825f9e08
	if (!cr6.lt) goto loc_825F9E08;
	// lwz r26,8(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// ble cr6,0x825f9e08
	if (!cr6.gt) goto loc_825F9E08;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
loc_825F9E08:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x825f9dd0
	if (!cr6.eq) goto loc_825F9DD0;
	// rlwinm r9,r6,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// clrlwi r8,r6,3
	ctx.r8.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// dcbf r9,r7
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// blt cr6,0x825f9d90
	if (cr6.lt) goto loc_825F9D90;
loc_825F9E48:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x825f9d78
	if (!cr6.eq) goto loc_825F9D78;
}

__attribute__((alias("__imp__sub_825F9E58"))) PPC_WEAK_FUNC(sub_825F9E58);
PPC_FUNC_IMPL(__imp__sub_825F9E58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F9E5C"))) PPC_WEAK_FUNC(sub_825F9E5C);
PPC_FUNC_IMPL(__imp__sub_825F9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F9E60"))) PPC_WEAK_FUNC(sub_825F9E60);
PPC_FUNC_IMPL(__imp__sub_825F9E60) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9488
	sub_825F9488(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825F9E80:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// b 0x825f9ef8
	goto loc_825F9EF8;
loc_825F9E8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f9edc
	if (cr0.eq) goto loc_825F9EDC;
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825f9ef4
	if (cr0.eq) goto loc_825F9EF4;
	// lwz r7,124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825f9ef4
	if (cr6.eq) goto loc_825F9EF4;
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// li r11,0
	r11.s64 = 0;
loc_825F9EB8:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825f9ec8
	if (cr6.eq) goto loc_825F9EC8;
	// lwz r4,120(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
loc_825F9EC8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x825f9eb8
	if (cr6.lt) goto loc_825F9EB8;
	// b 0x825f9ee0
	goto loc_825F9EE0;
loc_825F9EDC:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_825F9EE0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825f9ef4
	if (cr6.eq) goto loc_825F9EF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9488
	sub_825F9488(ctx, base);
loc_825F9EF4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825F9EF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x825f9e8c
	if (cr6.lt) goto loc_825F9E8C;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825f9e80
	if (!cr6.eq) goto loc_825F9E80;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825F9F14"))) PPC_WEAK_FUNC(sub_825F9F14);
PPC_FUNC_IMPL(__imp__sub_825F9F14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825F9F18"))) PPC_WEAK_FUNC(sub_825F9F18);
PPC_FUNC_IMPL(__imp__sub_825F9F18) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825f9f44
	if (!cr6.eq) goto loc_825F9F44;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825f9f4c
	goto loc_825F9F4C;
loc_825F9F44:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825F9F4C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa27c
	if (cr0.eq) goto loc_825FA27C;
	// lis r26,-30720
	r26.s64 = -2013265920;
	// lis r24,-31744
	r24.s64 = -2080374784;
	// lis r25,-29440
	r25.s64 = -1929379840;
loc_825F9F68:
	// rlwinm r11,r10,0,0,7
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bgt cr6,0x825fa0fc
	if (cr6.gt) goto loc_825FA0FC;
	// beq cr6,0x825fa0dc
	if (cr6.eq) goto loc_825FA0DC;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bgt cr6,0x825fa048
	if (cr6.gt) goto loc_825FA048;
	// beq cr6,0x825fa028
	if (cr6.eq) goto loc_825FA028;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825f9ff4
	if (cr6.eq) goto loc_825F9FF4;
	// lis r9,-32512
	ctx.r9.s64 = -2130706432;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa214
	if (cr6.eq) goto loc_825FA214;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa270
	if (cr6.eq) goto loc_825FA270;
	// lis r9,-32000
	ctx.r9.s64 = -2097152000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825fa1ec
	if (!cr6.eq) goto loc_825FA1EC;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r31,372(r30)
	PPC_STORE_U32(r30.u32 + 372, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// ble cr6,0x825f9fe8
	if (!cr6.gt) goto loc_825F9FE8;
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825f9fe8
	if (cr0.eq) goto loc_825F9FE8;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_825F9FE4:
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
loc_825F9FE8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9360
	sub_825F9360(ctx, base);
	// b 0x825fa270
	goto loc_825FA270;
loc_825F9FF4:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// li r5,248
	ctx.r5.s64 = 248;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
	// stw r11,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r11.u32);
	// stw r9,368(r30)
	PPC_STORE_U32(r30.u32 + 368, ctx.r9.u32);
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA028:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// beq 0x825f9fe8
	if (cr0.eq) goto loc_825F9FE8;
	// lwz r31,376(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 376);
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA048:
	// lis r9,-31488
	ctx.r9.s64 = -2063597568;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa0b0
	if (cr6.eq) goto loc_825FA0B0;
	// lis r9,-31232
	ctx.r9.s64 = -2046820352;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa09c
	if (cr6.eq) goto loc_825FA09C;
	// lis r9,-30976
	ctx.r9.s64 = -2030043136;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825fa1ec
	if (!cr6.eq) goto loc_825FA1EC;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bge cr6,0x825f9fe8
	if (!cr6.lt) goto loc_825F9FE8;
	// lwz r31,380(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA09C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r31,380(r30)
	PPC_STORE_U32(r30.u32 + 380, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// b 0x825f9fe4
	goto loc_825F9FE4;
loc_825FA0B0:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r31,376(r30)
	PPC_STORE_U32(r30.u32 + 376, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r11,r10,26,0,0
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// beq 0x825f9fe8
	if (cr0.eq) goto loc_825F9FE8;
	// lwz r31,372(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 372);
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA0DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa270
	if (cr0.eq) goto loc_825FA270;
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// addi r31,r30,92
	r31.s64 = r30.s64 + 92;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA0FC:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bgt cr6,0x825fa1c8
	if (cr6.gt) goto loc_825FA1C8;
	// beq cr6,0x825fa27c
	if (cr6.eq) goto loc_825FA27C;
	// lis r9,-30464
	ctx.r9.s64 = -1996488704;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa1a4
	if (cr6.eq) goto loc_825FA1A4;
	// lis r9,-30208
	ctx.r9.s64 = -1979711488;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa144
	if (cr6.eq) goto loc_825FA144;
	// lis r9,-29952
	ctx.r9.s64 = -1962934272;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa13c
	if (cr6.eq) goto loc_825FA13C;
	// lis r9,-29696
	ctx.r9.s64 = -1946157056;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa27c
	if (cr6.eq) goto loc_825FA27C;
	// b 0x825fa1ec
	goto loc_825FA1EC;
loc_825FA13C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA144:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r23,4(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r28,12(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825f99a0
	sub_825F99A0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825f9b48
	sub_825F9B48(ctx, base);
	// lwz r11,364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa184
	if (cr0.eq) goto loc_825FA184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x825f9c28
	sub_825F9C28(ctx, base);
	// b 0x825fa19c
	goto loc_825FA19C;
loc_825FA184:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825fa19c
	if (!cr6.eq) goto loc_825FA19C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// bl 0x825f9d68
	sub_825F9D68(ctx, base);
loc_825FA19C:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA1A4:
	// lwz r11,364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa1c0
	if (cr0.eq) goto loc_825FA1C0;
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825f9e60
	sub_825F9E60(ctx, base);
loc_825FA1C0:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA1C8:
	// lis r9,-29184
	ctx.r9.s64 = -1912602624;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa238
	if (cr6.eq) goto loc_825FA238;
	// lis r9,-28928
	ctx.r9.s64 = -1895825408;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa214
	if (cr6.eq) goto loc_825FA214;
	// lis r9,-28672
	ctx.r9.s64 = -1879048192;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fa200
	if (cr6.eq) goto loc_825FA200;
loc_825FA1EC:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825fa27c
	if (cr6.eq) goto loc_825FA27C;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA200:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f25e0
	sub_825F25E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA214:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825e3790
	sub_825E3790(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x825fa270
	goto loc_825FA270;
loc_825FA238:
	// lwz r11,364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa264
	if (cr0.eq) goto loc_825FA264;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x825e3790
	sub_825E3790(ctx, base);
loc_825FA264:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r11,368(r30)
	PPC_STORE_U32(r30.u32 + 368, r11.u32);
loc_825FA270:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825f9f68
	if (!cr0.eq) goto loc_825F9F68;
loc_825FA27C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825FA284"))) PPC_WEAK_FUNC(sub_825FA284);
PPC_FUNC_IMPL(__imp__sub_825FA284) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FA288"))) PPC_WEAK_FUNC(sub_825FA288);
PPC_FUNC_IMPL(__imp__sub_825FA288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// b 0x825fa2bc
	goto loc_825FA2BC;
loc_825FA2A4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fa2c8
	if (!cr0.eq) goto loc_825FA2C8;
	// db16cyc 
loc_825FA2BC:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825fa2a4
	if (!cr6.eq) goto loc_825FA2A4;
loc_825FA2C8:
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
loc_825FA2D0:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x825fa2f4
	if (!cr6.eq) goto loc_825FA2F4;
	// stwcx. r28,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r28.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa2d0
	if (!cr0.eq) goto loc_825FA2D0;
	// b 0x825fa2fc
	goto loc_825FA2FC;
loc_825FA2F4:
	// stwcx. r11,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
loc_825FA2FC:
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825fa2d0
	if (!cr6.eq) goto loc_825FA2D0;
	// lwsync 
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825fa32c
	if (!cr6.eq) goto loc_825FA32C;
	// lwsync 
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825FA324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_825FA32C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r8,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r8.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// ble cr6,0x825fa36c
	if (!cr6.gt) goto loc_825FA36C;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x825fa398
	goto loc_825FA398;
loc_825FA36C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fa390
	if (cr6.eq) goto loc_825FA390;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x825fa398
	goto loc_825FA398;
loc_825FA390:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_825FA398:
	// lis r27,-16384
	r27.s64 = -1073741824;
loc_825FA39C:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bge cr6,0x825fa3c4
	if (!cr6.lt) goto loc_825FA3C4;
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwsync 
	// b 0x825fa414
	goto loc_825FA414;
loc_825FA3C4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825fa430
	if (!cr0.eq) goto loc_825FA430;
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// rlwinm r10,r11,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825fa3f0
	if (!cr0.eq) goto loc_825FA3F0;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x825fa39c
	goto loc_825FA39C;
loc_825FA3F0:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r5,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwsync 
	// li r6,0
	ctx.r6.s64 = 0;
loc_825FA414:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x825fa39c
	goto loc_825FA39C;
loc_825FA430:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825fa44c
	if (!cr6.eq) goto loc_825FA44C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// b 0x825fa39c
	goto loc_825FA39C;
loc_825FA44C:
	// lis r10,-29696
	ctx.r10.s64 = -1946157056;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825fa470
	if (!cr6.eq) goto loc_825FA470;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x825fa39c
	goto loc_825FA39C;
loc_825FA470:
	// rlwinm r10,r11,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x825fa4a8
	if (!cr6.eq) goto loc_825FA4A8;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x825fa4a0
	if (!cr6.eq) goto loc_825FA4A0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9590
	sub_825F9590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fa39c
	if (!cr0.eq) goto loc_825FA39C;
	// b 0x825fa324
	goto loc_825FA324;
loc_825FA4A0:
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// b 0x825fa39c
	goto loc_825FA39C;
loc_825FA4A8:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fa528
	if (cr6.eq) goto loc_825FA528;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwsync 
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x825fa4d8
	goto loc_825FA4D8;
loc_825FA4D4:
	// db16cyc 
loc_825FA4D8:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825fa4d4
	if (!cr6.eq) goto loc_825FA4D4;
loc_825FA4E4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x825fa508
	if (!cr6.eq) goto loc_825FA508;
	// stwcx. r28,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r28.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa4e4
	if (!cr0.eq) goto loc_825FA4E4;
	// b 0x825fa510
	goto loc_825FA510;
loc_825FA508:
	// stwcx. r11,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
loc_825FA510:
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825fa4e4
	if (!cr6.eq) goto loc_825FA4E4;
	// lwsync 
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x825fa534
	goto loc_825FA534;
loc_825FA528:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f9f18
	sub_825F9F18(ctx, base);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
loc_825FA534:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
}

__attribute__((alias("__imp__sub_825FA540"))) PPC_WEAK_FUNC(sub_825FA540);
PPC_FUNC_IMPL(__imp__sub_825FA540) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fa39c
	// ERROR 825FA39C
	return;
}

__attribute__((alias("__imp__sub_825FA544"))) PPC_WEAK_FUNC(sub_825FA544);
PPC_FUNC_IMPL(__imp__sub_825FA544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA548"))) PPC_WEAK_FUNC(sub_825FA548);
PPC_FUNC_IMPL(__imp__sub_825FA548) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82605e48
	sub_82605E48(ctx, base);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r23,-32256
	r23.s64 = -2113929216;
loc_825FA56C:
	// lis r11,-5
	r11.s64 = -327680;
	// lwz r25,0(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27680
	r11.u64 = r11.u64 | 27680;
	// lwz r8,88(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// lwz r7,84(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,384(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 384);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r11,r9
	r26.u64 = r11.u64 & ctx.r9.u64;
	// bne cr6,0x825fa6bc
	if (!cr6.eq) goto loc_825FA6BC;
	// addi r30,r25,44
	r30.s64 = r25.s64 + 44;
loc_825FA5AC:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa5ac
	if (!cr0.eq) goto loc_825FA5AC;
	// addi r27,r28,60
	r27.s64 = r28.s64 + 60;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d36c
	__imp__KeWaitForSingleObject(ctx, base);
loc_825FA5E4:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa5e4
	if (!cr0.eq) goto loc_825FA5E4;
	// b 0x825fa6b4
	goto loc_825FA6B4;
loc_825FA604:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825fa618
	if (!cr6.eq) goto loc_825FA618;
	// lwz r11,2088(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 2088);
	// b 0x825fa61c
	goto loc_825FA61C;
loc_825FA618:
	// lwz r11,2092(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 2092);
loc_825FA61C:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r29,r31,15348
	r29.s64 = r31.s64 + 15348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fa65c
	if (cr0.eq) goto loc_825FA65C;
	// lwz r11,24584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fa64c
	if (!cr6.eq) goto loc_825FA64C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2e50
	sub_825D2E50(ctx, base);
loc_825FA64C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,15248
	ctx.r4.s64 = r31.s64 + 15248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2e58
	sub_825D2E58(ctx, base);
loc_825FA65C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_825FA664:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa664
	if (!cr0.eq) goto loc_825FA664;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d36c
	__imp__KeWaitForSingleObject(ctx, base);
loc_825FA698:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r30
	reserved.u32 = *(uint32_t*)(base + r30.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r30
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r30.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x825fa698
	if (!cr0.eq) goto loc_825FA698;
loc_825FA6B4:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// beq cr6,0x825fa604
	if (cr6.eq) goto loc_825FA604;
loc_825FA6BC:
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
	// bl 0x8314d35c
	__imp__KeResetEvent(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825fa6dc
	if (cr6.eq) goto loc_825FA6DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fa288
	sub_825FA288(ctx, base);
	// b 0x825fa56c
	goto loc_825FA56C;
loc_825FA6DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825FA6E4"))) PPC_WEAK_FUNC(sub_825FA6E4);
PPC_FUNC_IMPL(__imp__sub_825FA6E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FA6E8"))) PPC_WEAK_FUNC(sub_825FA6E8);
PPC_FUNC_IMPL(__imp__sub_825FA6E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11069(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fa714
	if (!cr0.eq) goto loc_825FA714;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825e3a60
	sub_825E3A60(ctx, base);
loc_825FA714:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,148
	ctx.r4.s64 = 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r27,13600(r31)
	PPC_STORE_U32(r31.u32 + 13600, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r27,13604(r31)
	PPC_STORE_U32(r31.u32 + 13604, r27.u32);
	// beq 0x825fa780
	if (cr0.eq) goto loc_825FA780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2c78
	sub_825E2C78(ctx, base);
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// andi. r11,r11,223
	r11.u64 = r11.u64 & 223;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
	// b 0x825fa8c4
	goto loc_825FA8C4;
loc_825FA780:
	// addi r25,r31,13760
	r25.s64 = r31.s64 + 13760;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13736
	ctx.r3.s64 = r31.s64 + 13736;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13640
	ctx.r3.s64 = r31.s64 + 13640;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13664
	ctx.r3.s64 = r31.s64 + 13664;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13688
	ctx.r3.s64 = r31.s64 + 13688;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// addi r3,r31,13712
	ctx.r3.s64 = r31.s64 + 13712;
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// lwz r11,13760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13760);
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fa7d4
	if (!cr6.eq) goto loc_825FA7D4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// b 0x825fa7ec
	goto loc_825FA7EC;
loc_825FA7D4:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r7,r11,-16384
	ctx.r7.s64 = r11.s64 + -1073741824;
loc_825FA7EC:
	// lis r11,-32160
	r11.s64 = -2107637760;
	// ori r5,r26,1
	ctx.r5.u64 = r26.u64 | 1;
	// addi r6,r11,-26880
	ctx.r6.s64 = r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3db0
	sub_825E3DB0(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3c70
	sub_825E3C70(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825fa840
	if (cr6.eq) goto loc_825FA840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,13784
	ctx.r8.s64 = r31.s64 + 13784;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825FA840:
	// lwz r11,21940(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fa858
	if (!cr6.eq) goto loc_825FA858;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fa890
	if (!cr0.eq) goto loc_825FA890;
loc_825FA858:
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r28,3
	ctx.r10.u64 = r28.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// subf r6,r28,r27
	ctx.r6.s64 = r27.s64 - r28.s64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,13784
	ctx.r8.s64 = r31.s64 + 13784;
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r6,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825FA890:
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// subf r6,r30,r26
	ctx.r6.s64 = r26.s64 - r30.s64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e41c0
	sub_825E41C0(ctx, base);
loc_825FA8C4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825FA8CC"))) PPC_WEAK_FUNC(sub_825FA8CC);
PPC_FUNC_IMPL(__imp__sub_825FA8CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825FA8D0"))) PPC_WEAK_FUNC(sub_825FA8D0);
PPC_FUNC_IMPL(__imp__sub_825FA8D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x825e43a0
	sub_825E43A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fa91c
	if (!cr6.gt) goto loc_825FA91C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
loc_825FA91C:
	// or r11,r29,r28
	r11.u64 = r29.u64 | r28.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x825e3450
	sub_825E3450(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fa94c
	if (!cr6.eq) goto loc_825FA94C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825fa964
	goto loc_825FA964;
loc_825FA94C:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r4,r11,-16384
	ctx.r4.s64 = r11.s64 + -1073741824;
loc_825FA964:
	// lwz r11,11464(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 11464);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,11608
	ctx.r3.s64 = r11.s64 + 11608;
	// bl 0x8314d17c
	__imp__KeInsertQueueDpc(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FA980"))) PPC_WEAK_FUNC(sub_825FA980);
PPC_FUNC_IMPL(__imp__sub_825FA980) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825FA984"))) PPC_WEAK_FUNC(sub_825FA984);
PPC_FUNC_IMPL(__imp__sub_825FA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FA988"))) PPC_WEAK_FUNC(sub_825FA988);
PPC_FUNC_IMPL(__imp__sub_825FA988) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24392(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fab70
	if (!cr0.eq) goto loc_825FAB70;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,12224(r31)
	PPC_STORE_U32(r31.u32 + 12224, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fa9c4
	if (!cr0.eq) goto loc_825FA9C4;
loc_825FA9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fab74
	goto loc_825FAB74;
loc_825FA9C4:
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,11128(r31)
	PPC_STORE_U32(r31.u32 + 11128, ctx.r3.u32);
	// beq 0x825fa9bc
	if (cr0.eq) goto loc_825FA9BC;
	// lis r11,-32161
	r11.s64 = -2107703296;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,8040
	ctx.r6.s64 = r11.s64 + 8040;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3db0
	sub_825E3DB0(ctx, base);
	// lwz r11,11128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11128);
	// lis r7,32712
	ctx.r7.s64 = 2143813632;
	// lwz r9,24392(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r26,0
	r26.s64 = 0;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r10,11132(r31)
	PPC_STORE_U32(r31.u32 + 11132, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r7,4396(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4396);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r7,11524(r31)
	PPC_STORE_U32(r31.u32 + 11524, ctx.r7.u32);
	// lis r23,256
	r23.s64 = 16777216;
	// stw r26,11156(r31)
	PPC_STORE_U32(r31.u32 + 11156, r26.u32);
loc_825FAA38:
	// slw r11,r23,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825faa48
	if (cr0.eq) goto loc_825FAA48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_825FAA48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825faa38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FAA38;
	// lwz r11,15300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 15300);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r7,15304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 15304);
	// rlwinm. r9,r9,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11172(r31)
	PPC_STORE_U32(r31.u32 + 11172, ctx.r10.u32);
	// li r25,-1
	r25.s64 = -1;
	// stw r8,11120(r31)
	PPC_STORE_U32(r31.u32 + 11120, ctx.r8.u32);
	// stw r26,11124(r31)
	PPC_STORE_U32(r31.u32 + 11124, r26.u32);
	// stw r11,11084(r31)
	PPC_STORE_U32(r31.u32 + 11084, r11.u32);
	// stw r7,11092(r31)
	PPC_STORE_U32(r31.u32 + 11092, ctx.r7.u32);
	// beq 0x825faa84
	if (cr0.eq) goto loc_825FAA84;
	// li r25,2
	r25.s64 = 2;
	// stw r25,11464(r31)
	PPC_STORE_U32(r31.u32 + 11464, r25.u32);
loc_825FAA84:
	// mr r29,r26
	r29.u64 = r26.u64;
	// lis r27,32512
	r27.s64 = 2130706432;
	// addi r30,r31,11644
	r30.s64 = r31.s64 + 11644;
	// lis r24,-32256
	r24.s64 = -2113929216;
loc_825FAA94:
	// lwz r11,24392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fab54
	if (cr0.eq) goto loc_825FAB54;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x825faab4
	if (!cr6.lt) goto loc_825FAAB4;
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r29,11464(r31)
	PPC_STORE_U32(r31.u32 + 11464, r29.u32);
loc_825FAAB4:
	// addis r11,r27,16640
	r11.s64 = r27.s64 + 1090519040;
	// stw r29,-64(r30)
	PPC_STORE_U32(r30.u32 + -64, r29.u32);
	// addi r10,r31,11080
	ctx.r10.s64 = r31.s64 + 11080;
	// stw r27,-40(r30)
	PPC_STORE_U32(r30.u32 + -40, r27.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r10,-68(r30)
	PPC_STORE_U32(r30.u32 + -68, ctx.r10.u32);
	// addi r28,r30,-68
	r28.s64 = r30.s64 + -68;
	// stw r11,-44(r30)
	PPC_STORE_U32(r30.u32 + -44, r11.u32);
	// lis r11,-32160
	r11.s64 = -2107637760;
	// stb r26,-8(r30)
	PPC_STORE_U8(r30.u32 + -8, r26.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r26,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, r26.u32);
	// addi r4,r11,-26936
	ctx.r4.s64 = r11.s64 + -26936;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// addi r3,r30,-36
	ctx.r3.s64 = r30.s64 + -36;
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
	// bl 0x8314d42c
	__imp__KeInitializeDpc(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// stb r11,-33(r30)
	PPC_STORE_U8(r30.u32 + -33, r11.u8);
	// addi r8,r30,12
	ctx.r8.s64 = r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r10,-23224
	ctx.r5.s64 = ctx.r10.s64 + -23224;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82607788
	sub_82607788(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825fa9bc
	if (cr0.eq) goto loc_825FA9BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1732(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825fab54
	if (cr0.lt) goto loc_825FAB54;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d40c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
loc_825FAB54:
	// lis r11,32512
	r11.s64 = 2130706432;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x825faa94
	if (cr6.lt) goto loc_825FAA94;
loc_825FAB70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825FAB74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825FAB78"))) PPC_WEAK_FUNC(sub_825FAB78);
PPC_FUNC_IMPL(__imp__sub_825FAB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FAB7C"))) PPC_WEAK_FUNC(sub_825FAB7C);
PPC_FUNC_IMPL(__imp__sub_825FAB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FAB80"))) PPC_WEAK_FUNC(sub_825FAB80);
PPC_FUNC_IMPL(__imp__sub_825FAB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fabb0
	if (!cr6.gt) goto loc_825FABB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FABB0:
	// li r11,8712
	r11.s64 = 8712;
	// li r10,6
	ctx.r10.s64 = 6;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x825fac24
	if (cr6.gt) goto loc_825FAC24;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,8997
	ctx.r8.s64 = 8997;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x825facfc
	goto loc_825FACFC;
loc_825FAC24:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// beq cr6,0x825facd4
	if (cr6.eq) goto loc_825FACD4;
	// rlwinm r28,r29,5,0,26
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_825FAC50:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// slw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// ori r9,r9,21761
	ctx.r9.u64 = ctx.r9.u64 | 21761;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// li r6,8997
	ctx.r6.s64 = 8997;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x825facc4
	if (!cr6.gt) goto loc_825FACC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825FACC4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x825fac50
	if (!cr0.eq) goto loc_825FAC50;
loc_825FACD4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825FACFC:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,21
	ctx.r9.s64 = 21;
	// ori r10,r10,23296
	ctx.r10.u64 = ctx.r10.u64 | 23296;
	// li r12,1
	r12.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FAD44"))) PPC_WEAK_FUNC(sub_825FAD44);
PPC_FUNC_IMPL(__imp__sub_825FAD44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825FAD48"))) PPC_WEAK_FUNC(sub_825FAD48);
PPC_FUNC_IMPL(__imp__sub_825FAD48) {
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
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r11,r3,1128
	r11.s64 = ctx.r3.s64 + 1128;
	// std r9,12248(r3)
	PPC_STORE_U64(ctx.r3.u32 + 12248, ctx.r9.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825FAD70:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwu r10,24(r11)
	ea = 24 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825fad70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FAD70;
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,1768
	r11.s64 = r31.s64 + 1768;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825FAD8C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r10,r9,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// stwu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825fad8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FAD8C;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// lwz r11,10564(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10564);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// lwz r7,10568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 10568);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// ori r6,r6,61440
	ctx.r6.u64 = ctx.r6.u64 | 61440;
	// stw r8,10428(r31)
	PPC_STORE_U32(r31.u32 + 10428, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r6,10708(r31)
	PPC_STORE_U32(r31.u32 + 10708, ctx.r6.u32);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// stw r8,10772(r31)
	PPC_STORE_U32(r31.u32 + 10772, ctx.r8.u32);
	// lis r4,255
	ctx.r4.s64 = 16711680;
	// stw r11,10564(r31)
	PPC_STORE_U32(r31.u32 + 10564, r11.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,10628(r31)
	PPC_STORE_U32(r31.u32 + 10628, ctx.r10.u32);
	// ori r5,r5,61696
	ctx.r5.u64 = ctx.r5.u64 | 61696;
	// stw r10,10768(r31)
	PPC_STORE_U32(r31.u32 + 10768, ctx.r10.u32);
	// oris r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 65536;
	// stw r3,10604(r31)
	PPC_STORE_U32(r31.u32 + 10604, ctx.r3.u32);
	// ori r8,r4,65535
	ctx.r8.u64 = ctx.r4.u64 | 65535;
	// stw r5,10712(r31)
	PPC_STORE_U32(r31.u32 + 10712, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,10580(r31)
	PPC_STORE_U32(r31.u32 + 10580, ctx.r9.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r7,10568(r31)
	PPC_STORE_U32(r31.u32 + 10568, ctx.r7.u32);
	// stw r8,10444(r31)
	PPC_STORE_U32(r31.u32 + 10444, ctx.r8.u32);
	// stw r9,10688(r31)
	PPC_STORE_U32(r31.u32 + 10688, ctx.r9.u32);
	// stw r6,10824(r31)
	PPC_STORE_U32(r31.u32 + 10824, ctx.r6.u32);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// stw r10,11044(r31)
	PPC_STORE_U32(r31.u32 + 11044, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fae4c
	if (!cr6.gt) goto loc_825FAE4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FAE4C:
	// li r11,3329
	r11.s64 = 3329;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r9,129
	ctx.r9.s64 = 129;
	// ori r8,r11,8448
	ctx.r8.u64 = r11.u64 | 8448;
	// li r11,-1
	r11.s64 = -1;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r4,130
	ctx.r4.s64 = 130;
	// ori r5,r11,8448
	ctx.r5.u64 = r11.u64 | 8448;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lis r30,-31933
	r30.s64 = -2092761088;
	// li r29,3650
	r29.s64 = 3650;
	// li r8,8032
	ctx.r8.s64 = 8032;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,-13696(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -13696);
	// oris r11,r11,32769
	r11.u64 = r11.u64 | 2147549184;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,-13692(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13692);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,24392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24392);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,3205
	ctx.r10.s64 = 3205;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bne 0x825faee4
	if (!cr0.eq) goto loc_825FAEE4;
	// li r9,3
	ctx.r9.s64 = 3;
loc_825FAEE4:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,1400
	ctx.r10.u64 = ctx.r10.u64 | 1400;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,2989
	ctx.r6.s64 = 195887104;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,61453
	ctx.r6.u64 = ctx.r6.u64 | 61453;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825FAF3C"))) PPC_WEAK_FUNC(sub_825FAF3C);
PPC_FUNC_IMPL(__imp__sub_825FAF3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825FAF40"))) PPC_WEAK_FUNC(sub_825FAF40);
PPC_FUNC_IMPL(__imp__sub_825FAF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// addi r23,r3,48
	r23.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825faf8c
	if (!cr6.gt) goto loc_825FAF8C;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825FAF8C:
	// mulli r26,r27,21
	r26.s64 = r27.s64 * 21;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3538
	sub_825E3538(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fafb0
	if (!cr0.eq) goto loc_825FAFB0;
	// stw r30,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r30.u32);
	// b 0x825fb1ec
	goto loc_825FB1EC;
loc_825FAFB0:
	// rlwinm r11,r3,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x825fafdc
	if (!cr0.eq) goto loc_825FAFDC;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v63,v63,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// b 0x825fafe0
	goto loc_825FAFE0;
loc_825FAFDC:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
loc_825FAFE0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x825fb0a4
	if (cr6.eq) goto loc_825FB0A4;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// mtctr r27
	ctr.u64 = r27.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_825FB004:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,-12
	ctx.r10.s64 = r11.s64 + -12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvrx128 v61,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r7,56
	ctx.r7.s64 = 56;
	// vor128 v62,v62,v61
	_mm_store_si128((__m128i*)v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v62.u32)));
	// vsubfp128 v62,v62,v63
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v61,v62,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v60,v62,1
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v59,v62,2
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// stvewx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stvewx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stvewx128 v59,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 68, temp.u32);
	// addi r11,r11,84
	r11.s64 = r11.s64 + 84;
	// bdnz 0x825fb004
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FB004;
loc_825FB0A4:
	// lis r11,5
	r11.s64 = 327680;
	// ori r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 3;
	// ori r11,r11,18432
	r11.u64 = r11.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r26,2,6,29
	ctx.r9.u64 = (__builtin_rotateleft32(r26.u32, 2) & 0x3FFFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFC000003);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r10,20480
	ctx.r4.u64 = ctx.r10.u64 | 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,8961
	ctx.r9.s64 = 8961;
	// ori r26,r10,8192
	r26.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r10,r28,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r24.u32);
	r30.u32 = ea;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bne 0x825fb13c
	if (!cr0.eq) goto loc_825FB13C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825fb154
	goto loc_825FB154;
loc_825FB13C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x825fb150
	if (!cr6.eq) goto loc_825FB150;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x825fb154
	goto loc_825FB154;
loc_825FB150:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_825FB154:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r7,13825
	ctx.r7.u64 = ctx.r7.u64 | 13825;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r10,r27,r6
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// rlwimi r10,r5,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
loc_825FB1EC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_825FB1F4"))) PPC_WEAK_FUNC(sub_825FB1F4);
PPC_FUNC_IMPL(__imp__sub_825FB1F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825FB1F8"))) PPC_WEAK_FUNC(sub_825FB1F8);
PPC_FUNC_IMPL(__imp__sub_825FB1F8) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r10,16,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r27,1
	r27.s64 = 1;
	// bne 0x825fb238
	if (!cr0.eq) goto loc_825FB238;
	// li r26,1
	r26.s64 = 1;
	// b 0x825fb248
	goto loc_825FB248;
loc_825FB238:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x825fb248
	if (cr6.eq) goto loc_825FB248;
	// li r27,0
	r27.s64 = 0;
loc_825FB248:
	// li r11,40
	r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 << (r27.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r30,r8,-1
	r30.s64 = ctx.r8.s64 + -1;
	// rotlwi r6,r4,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(r29.u32, 1);
	// divw r4,r4,r11
	ctx.r4.s32 = ctx.r4.s32 / r11.s32;
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(r30.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r25,r29,r11
	r25.s32 = r29.s32 / r11.s32;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r31,r4,r11
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(r11.s32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r4,r30,r10
	ctx.r4.s32 = r30.s32 / ctx.r10.s32;
	// mullw r30,r25,r11
	r30.s64 = int64_t(r25.s32) * int64_t(r11.s32);
	// andc r6,r11,r6
	ctx.r6.u64 = r11.u64 & ~ctx.r6.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// divw r11,r7,r10
	r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// mullw r25,r4,r10
	r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// mullw r24,r11,r10
	r24.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bge cr6,0x825fb418
	if (!cr6.lt) goto loc_825FB418;
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(r25.s32, r24.s32, xer);
	// bge cr6,0x825fb418
	if (!cr6.lt) goto loc_825FB418;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,27896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825fb418
	if (cr6.eq) goto loc_825FB418;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// ble cr6,0x825fb318
	if (!cr6.gt) goto loc_825FB318;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_825FB318:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bge cr6,0x825fb334
	if (!cr6.lt) goto loc_825FB334;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_825FB334:
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(r25.s32, r28.s32, xer);
	// ble cr6,0x825fb350
	if (!cr6.gt) goto loc_825FB350;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_825FB350:
	// cmpw cr6,r24,r7
	cr6.compare<int32_t>(r24.s32, ctx.r7.s32, xer);
	// bge cr6,0x825fb36c
	if (!cr6.lt) goto loc_825FB36C;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_825FB36C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r29,372(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x825fb3a8
	if (cr0.eq) goto loc_825FB3A8;
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825faf40
	sub_825FAF40(ctx, base);
loc_825FB3A8:
	// li r11,1
	r11.s64 = 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r8,r31,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// rlwimi r23,r11,17,14,15
	r23.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x30000) | (r23.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// sraw r11,r25,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	r11.s64 = r25.s32 >> temp.u32;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// sraw r11,r30,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r30.s32 < 0) & (((r30.s32 >> temp.u32) << temp.u32) != r30.s32);
	r11.s64 = r30.s32 >> temp.u32;
	// sraw r9,r24,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r24.s32 < 0) & (((r24.s32 >> temp.u32) << temp.u32) != r24.s32);
	ctx.r9.s64 = r24.s32 >> temp.u32;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r11,r23,18
	r11.u64 = r23.u32 & 0x3FFF;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// srw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r11,r23,0,0,17
	r11.u64 = (__builtin_rotateleft32(r23.u32, 0) & 0xFFFFC000) | (r11.u64 & 0xFFFFFFFF00003FFF);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rlwinm r11,r11,14,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825faf40
	sub_825FAF40(ctx, base);
	// b 0x825fb454
	goto loc_825FB454;
loc_825FB418:
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x825faf40
	sub_825FAF40(ctx, base);
loc_825FB454:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_825FB45C"))) PPC_WEAK_FUNC(sub_825FB45C);
PPC_FUNC_IMPL(__imp__sub_825FB45C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

