#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825FB460"))) PPC_WEAK_FUNC(sub_825FB460);
PPC_FUNC_IMPL(__imp__sub_825FB460) {
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
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,5
	r27.s64 = 5;
	// lwz r15,10368(r3)
	r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// li r21,0
	r21.s64 = 0;
	// mr r14,r27
	r14.u64 = r27.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x825fb4fc
	if (cr6.eq) goto loc_825FB4FC;
	// addi r11,r5,3204
	r11.s64 = ctx.r5.s64 + 3204;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r14,4
	r14.s64 = 4;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// lwz r21,28(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// rlwinm r11,r21,0,12,15
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825fb4e4
	if (!cr6.eq) goto loc_825FB4E4;
	// li r11,1
	r11.s64 = 1;
	// rlwimi r21,r11,17,12,15
	r21.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0xF0000) | (r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_825FB4E4:
	// rlwinm r11,r21,0,12,15
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xF0000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825fb4fc
	if (!cr6.eq) goto loc_825FB4FC;
	// li r11,3
	r11.s64 = 3;
	// rlwimi r21,r11,16,12,15
	r21.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xF0000) | (r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_825FB4FC:
	// lwz r11,10560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r19,0
	r19.s64 = 0;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x825fb518
	if (cr0.eq) goto loc_825FB518;
	// li r19,118
	r19.s64 = 118;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_825FB518:
	// rlwinm. r11,r28,0,26,26
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb58c
	if (cr0.eq) goto loc_825FB58C;
	// lwz r29,396(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm. r11,r28,0,25,25
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r19,r19,34561
	r19.u64 = r19.u64 | 34561;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// beq 0x825fb540
	if (cr0.eq) goto loc_825FB540;
	// rlwimi r30,r29,8,16,23
	r30.u64 = (__builtin_rotateleft32(r29.u32, 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x825fb550
	goto loc_825FB550;
loc_825FB540:
	// rlwinm. r11,r28,0,24,24
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb550
	if (cr0.eq) goto loc_825FB550;
	// rlwimi r30,r29,8,16,23
	r30.u64 = (__builtin_rotateleft32(r29.u32, 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
loc_825FB550:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fb568
	if (!cr6.gt) goto loc_825FB568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FB568:
	// li r11,8461
	r11.s64 = 8461;
	// li r10,255
	ctx.r10.s64 = 255;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r29,r10,16,0,23
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825FB58C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fb5b4
	if (!cr6.gt) goto loc_825FB5B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FB5B4:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8320
	r11.u64 = r11.u64 | 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,8192
	r11.s64 = 536870912;
	// rlwinm. r29,r28,0,26,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// mr r17,r19
	r17.u64 = r19.u64;
	// mr r18,r14
	r18.u64 = r14.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// bne 0x825fb700
	if (!cr0.eq) goto loc_825FB700;
	// rlwinm r3,r21,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// beq cr6,0x825fb700
	if (cr6.eq) goto loc_825FB700;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x825fb700
	if (cr6.eq) goto loc_825FB700;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x825fb700
	if (cr6.eq) goto loc_825FB700;
	// rlwinm. r11,r15,16,30,31
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,16
	ctx.r9.s64 = 16;
	// bne 0x825fb624
	if (!cr0.eq) goto loc_825FB624;
	// li r11,80
	r11.s64 = 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x825fb638
	goto loc_825FB638;
loc_825FB624:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,80
	r11.s64 = 80;
	// beq cr6,0x825fb638
	if (cr6.eq) goto loc_825FB638;
	// li r11,40
	r11.s64 = 40;
loc_825FB638:
	// subf r8,r25,r24
	ctx.r8.s64 = r24.s64 - r25.s64;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x825fb700
	if (cr6.lt) goto loc_825FB700;
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825fb700
	if (cr6.lt) goto loc_825FB700;
	// lvlx128 v63,r0,r16
	temp.u32 = r16.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lvrx128 v62,r9,r16
	temp.u32 = ctx.r9.u32 + r16.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vor128 v1,v63,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// rlwinm r4,r21,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 12) & 0x3F;
	// bl 0x825e12c0
	sub_825E12C0(ctx, base);
	// li r10,8707
	ctx.r10.s64 = 8707;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// li r7,8194
	ctx.r7.s64 = 8194;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lfd f0,19528(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 19528);
	// clrlwi r6,r21,20
	ctx.r6.u64 = r21.u32 & 0xFFF;
	// fsub f0,f12,f0
	f0.f64 = ctx.f12.f64 - f0.f64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// lfd f13,19520(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19520);
	// li r4,8461
	ctx.r4.s64 = 8461;
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// li r12,1
	r12.s64 = 1;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// oris r11,r11,255
	r11.u64 = r11.u64 | 16711680;
	// rldicr r12,r12,55,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// lis r17,0
	r17.s64 = 0;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// mr r18,r27
	r18.u64 = r27.u64;
	// ori r17,r17,34679
	r17.u64 = r17.u64 | 34679;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825FB700:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fb724
	if (!cr0.eq) goto loc_825FB724;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825fb724
	if (!cr0.eq) goto loc_825FB724;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb72c
	if (cr0.eq) goto loc_825FB72C;
loc_825FB724:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825FB72C:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb740
	if (cr0.eq) goto loc_825FB740;
	// li r11,1
	r11.s64 = 1;
	// b 0x825fb7d0
	goto loc_825FB7D0;
loc_825FB740:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb7c8
	if (cr0.eq) goto loc_825FB7C8;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r9,13104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825fb760
	if (cr6.eq) goto loc_825FB760;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fb7c8
	if (!cr6.eq) goto loc_825FB7C8;
loc_825FB760:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r9,13108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825fb778
	if (cr6.eq) goto loc_825FB778;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fb7c8
	if (!cr6.eq) goto loc_825FB7C8;
loc_825FB778:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r9,13112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825fb790
	if (cr6.eq) goto loc_825FB790;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fb7c8
	if (!cr6.eq) goto loc_825FB7C8;
loc_825FB790:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r9,13116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825fb7a8
	if (cr6.eq) goto loc_825FB7A8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fb7c8
	if (!cr6.eq) goto loc_825FB7C8;
loc_825FB7A8:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r9,13120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825fb7c0
	if (cr6.eq) goto loc_825FB7C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fb7c8
	if (!cr6.eq) goto loc_825FB7C8;
loc_825FB7C0:
	// li r11,1
	r11.s64 = 1;
	// b 0x825fb7cc
	goto loc_825FB7CC;
loc_825FB7C8:
	// li r11,0
	r11.s64 = 0;
loc_825FB7CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825FB7D0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fb814
	if (!cr0.eq) goto loc_825FB814;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fb1f8
	sub_825FB1F8(ctx, base);
	// b 0x825fb9f0
	goto loc_825FB9F0;
loc_825FB814:
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// lwz r20,13084(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb8d4
	if (cr0.eq) goto loc_825FB8D4;
	// rlwinm. r11,r10,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fb8d4
	if (cr0.eq) goto loc_825FB8D4;
	// lis r12,5461
	r12.s64 = 357892096;
	// ori r12,r12,21845
	r12.u64 = r12.u64 | 21845;
	// and. r30,r20,r12
	r30.u64 = r20.u64 & r12.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x825fb8d4
	if (cr0.eq) goto loc_825FB8D4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825fb8c8
	if (cr6.eq) goto loc_825FB8C8;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fb860
	if (!cr6.gt) goto loc_825FB860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825FB860:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// lwz r10,13548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13548);
	// lwz r6,13552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 13552);
	// rlwimi r9,r10,18,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r4,13368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 13368);
	// lwz r5,13372(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 13372);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// rlwinm r10,r9,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000;
	// subf r7,r5,r23
	ctx.r7.s64 = r23.s64 - ctx.r5.s64;
	// rlwimi r10,r6,0,18,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf r6,r4,r24
	ctx.r6.s64 = r24.s64 - ctx.r4.s64;
	// subf r5,r5,r26
	ctx.r5.s64 = r26.s64 - ctx.r5.s64;
	// subf r4,r4,r25
	ctx.r4.s64 = r25.s64 - ctx.r4.s64;
	// bl 0x825fb1f8
	sub_825FB1F8(ctx, base);
loc_825FB8C8:
	// lis r12,-5462
	r12.s64 = -357957632;
	// ori r12,r12,43690
	r12.u64 = r12.u64 | 43690;
	// and r20,r20,r12
	r20.u64 = r20.u64 & r12.u64;
loc_825FB8D4:
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825fb9f0
	if (!cr6.gt) goto loc_825FB9F0;
	// li r23,0
	r23.s64 = 0;
	// addi r28,r31,13372
	r28.s64 = r31.s64 + 13372;
	// addi r24,r31,13132
	r24.s64 = r31.s64 + 13132;
	// b 0x825fb8fc
	goto loc_825FB8FC;
loc_825FB8F4:
	// lwz r25,348(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,356(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_825FB8FC:
	// lwz r11,-4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -4);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x825fb90c
	if (cr6.gt) goto loc_825FB90C;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_825FB90C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// bgt cr6,0x825fb91c
	if (cr6.gt) goto loc_825FB91C;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_825FB91C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r27,364(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x825fb930
	if (cr6.lt) goto loc_825FB930;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_825FB930:
	// lwz r29,8(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x825fb944
	if (!cr6.lt) goto loc_825FB944;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_825FB944:
	// cmpw cr6,r25,r27
	cr6.compare<int32_t>(r25.s32, r27.s32, xer);
	// bge cr6,0x825fb9d4
	if (!cr6.lt) goto loc_825FB9D4;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// bge cr6,0x825fb9d4
	if (!cr6.lt) goto loc_825FB9D4;
	// li r11,3
	r11.s64 = 3;
	// slw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
	// and. r30,r11,r20
	r30.u64 = r11.u64 & r20.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x825fb9d4
	if (cr0.eq) goto loc_825FB9D4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fb980
	if (!cr6.gt) goto loc_825FB980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825FB980:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r7,r9,r29
	ctx.r7.s64 = r29.s64 - ctx.r9.s64;
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// subf r5,r9,r26
	ctx.r5.s64 = r26.s64 - ctx.r9.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = r27.s64 - r11.s64;
	// subf r4,r11,r25
	ctx.r4.s64 = r25.s64 - r11.s64;
	// bl 0x825fb1f8
	sub_825FB1F8(ctx, base);
loc_825FB9D4:
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x825fb8f4
	if (cr6.lt) goto loc_825FB8F4;
loc_825FB9F0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_825FB9F8"))) PPC_WEAK_FUNC(sub_825FB9F8);
PPC_FUNC_IMPL(__imp__sub_825FB9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825FB9FC"))) PPC_WEAK_FUNC(sub_825FB9FC);
PPC_FUNC_IMPL(__imp__sub_825FB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FBA00"))) PPC_WEAK_FUNC(sub_825FBA00);
PPC_FUNC_IMPL(__imp__sub_825FBA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825fba44
	if (!cr6.eq) goto loc_825FBA44;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,21424
	r11.s64 = r11.s64 + 21424;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825FBA44:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fba58
	if (!cr6.eq) goto loc_825FBA58;
	// rlwinm. r27,r27,0,28,23
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x825fc074
	if (cr0.eq) goto loc_825FC074;
loc_825FBA58:
	// lfs f0,13024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13024);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,13028(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13028);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,13032(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13032);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lfs f11,13036(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13036);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f11
	f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r24,r11
	r24.u64 = r11.u64;
	// bgt cr6,0x825fbaac
	if (cr6.gt) goto loc_825FBAAC;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
loc_825FBAAC:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r25,r11
	r25.u64 = r11.u64;
	// bgt cr6,0x825fbac0
	if (cr6.gt) goto loc_825FBAC0;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_825FBAC0:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// blt cr6,0x825fbad8
	if (cr6.lt) goto loc_825FBAD8;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_825FBAD8:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// blt cr6,0x825fbaf0
	if (cr6.lt) goto loc_825FBAF0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_825FBAF0:
	// lwz r11,12288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825fbb3c
	if (cr6.eq) goto loc_825FBB3C;
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// bgt cr6,0x825fbb0c
	if (cr6.gt) goto loc_825FBB0C;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_825FBB0C:
	// lwz r11,13056(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13056);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x825fbb1c
	if (cr6.gt) goto loc_825FBB1C;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_825FBB1C:
	// lwz r11,13060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13060);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x825fbb2c
	if (cr6.lt) goto loc_825FBB2C;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_825FBB2C:
	// lwz r11,13064(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13064);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x825fbb3c
	if (cr6.lt) goto loc_825FBB3C;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_825FBB3C:
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// ble cr6,0x825fc074
	if (!cr6.gt) goto loc_825FC074;
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// ble cr6,0x825fc074
	if (!cr6.gt) goto loc_825FC074;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825fbc6c
	if (cr6.eq) goto loc_825FBC6C;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825fbb78
	if (cr6.eq) goto loc_825FBB78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_825FBB78:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825fbba8
	if (cr6.eq) goto loc_825FBBA8;
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
loc_825FBBA8:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825fbbe0
	if (cr6.eq) goto loc_825FBBE0;
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
loc_825FBBE0:
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
	// beq cr6,0x825fbc28
	if (cr6.eq) goto loc_825FBC28;
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
loc_825FBC28:
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
	// beq cr6,0x825fbc6c
	if (cr6.eq) goto loc_825FBC6C;
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
loc_825FBC6C:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825fbcbc
	if (cr6.eq) goto loc_825FBCBC;
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
	// beq cr6,0x825fbcbc
	if (cr6.eq) goto loc_825FBCBC;
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
loc_825FBCBC:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825fbcf4
	if (cr6.eq) goto loc_825FBCF4;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825fbcf4
	if (cr6.eq) goto loc_825FBCF4;
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
loc_825FBCF4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fbd10
	if (!cr6.gt) goto loc_825FBD10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825FBD10:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825fbd30
	if (cr0.eq) goto loc_825FBD30;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
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
loc_825FBD30:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16356
	ctx.r8.s64 = -1071906816;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r6,27
	ctx.r6.s64 = 27;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,108
	ctx.r5.s64 = 108;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addi r29,r10,19328
	r29.s64 = ctx.r10.s64 + 19328;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fbd98
	if (!cr6.gt) goto loc_825FBD98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FBD98:
	// lis r11,-16374
	r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fbe08
	if (!cr6.gt) goto loc_825FBE08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FBE08:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	r29.s64 = 8978;
	// li r11,8205
	r11.s64 = 8205;
	// li r20,0
	r20.s64 = 0;
	// li r12,1
	r12.s64 = 1;
	// mr r21,r30
	r21.u64 = r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// clrlwi. r19,r27,28
	r19.u64 = r27.u32 & 0xF;
	cr0.compare<int32_t>(r19.s32, 0, xer);
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
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
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
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne 0x825fbf58
	if (!cr0.eq) goto loc_825FBF58;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fb460
	sub_825FB460(ctx, base);
	// b 0x825fc02c
	goto loc_825FC02C;
loc_825FBF58:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825fbf6c
	if (!cr6.gt) goto loc_825FBF6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825FBF6C:
	// li r11,8452
	r11.s64 = 8452;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	r11.s64 = 8706;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8705
	ctx.r8.s64 = 8705;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r12,1
	r12.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,12816
	r29.s64 = r31.s64 + 12816;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825FBFD0:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fc01c
	if (cr0.eq) goto loc_825FC01C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825fc01c
	if (cr6.eq) goto loc_825FC01C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fb460
	sub_825FB460(ctx, base);
	// rlwinm r27,r27,0,28,23
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
loc_825FC01C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825fbfd0
	if (cr6.lt) goto loc_825FBFD0;
loc_825FC02C:
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
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, r11.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_825FC074:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_825FC07C"))) PPC_WEAK_FUNC(sub_825FC07C);
PPC_FUNC_IMPL(__imp__sub_825FC07C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825FC080"))) PPC_WEAK_FUNC(sub_825FC080);
PPC_FUNC_IMPL(__imp__sub_825FC080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825fc190
	if (!cr6.eq) goto loc_825FC190;
	// lwz r7,12816(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12816);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x825fc0ac
	if (!cr0.eq) goto loc_825FC0AC;
	// lwz r11,12832(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
loc_825FC0AC:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,11068(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r9,r9,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r31,r11,0,27,27
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x825fc0e8
	if (cr0.eq) goto loc_825FC0E8;
	// li r11,1
	r11.s64 = 1;
	// b 0x825fc174
	goto loc_825FC174;
loc_825FC0E8:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fc16c
	if (cr0.eq) goto loc_825FC16C;
	// lwz r11,13104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13104);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x825fc104
	if (cr6.eq) goto loc_825FC104;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825fc16c
	if (!cr6.eq) goto loc_825FC16C;
loc_825FC104:
	// lwz r11,12820(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12820);
	// lwz r10,13108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825fc11c
	if (cr6.eq) goto loc_825FC11C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc16c
	if (!cr6.eq) goto loc_825FC16C;
loc_825FC11C:
	// lwz r11,12824(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12824);
	// lwz r10,13112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825fc134
	if (cr6.eq) goto loc_825FC134;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc16c
	if (!cr6.eq) goto loc_825FC16C;
loc_825FC134:
	// lwz r11,12828(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12828);
	// lwz r10,13116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825fc14c
	if (cr6.eq) goto loc_825FC14C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc16c
	if (!cr6.eq) goto loc_825FC16C;
loc_825FC14C:
	// lwz r11,12832(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,13120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825fc164
	if (cr6.eq) goto loc_825FC164;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc16c
	if (!cr6.eq) goto loc_825FC16C;
loc_825FC164:
	// li r11,1
	r11.s64 = 1;
	// b 0x825fc170
	goto loc_825FC170;
loc_825FC16C:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_825FC170:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825FC174:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fc18c
	if (cr0.eq) goto loc_825FC18C;
	// lwz r11,13556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13556);
	// lwz r10,13560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13560);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_825FC18C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_825FC190:
	// rlwinm. r11,r4,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fc1a0
	if (!cr0.eq) goto loc_825FC1A0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
loc_825FC1A0:
	// bl 0x825fba00
	sub_825FBA00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825FC1B4"))) PPC_WEAK_FUNC(sub_825FC1B4);
PPC_FUNC_IMPL(__imp__sub_825FC1B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC1B8"))) PPC_WEAK_FUNC(sub_825FC1B8);
PPC_FUNC_IMPL(__imp__sub_825FC1B8) {
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,212
	r11.s64 = ctx.r1.s64 + 212;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,19504
	ctx.r10.s64 = ctx.r10.s64 + 19504;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v63,4
	_mm_store_si128((__m128i*)v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), 12));
	// addi r9,r9,19488
	ctx.r9.s64 = ctx.r9.s64 + 19488;
	// vupkd3d128 v12,v63,0
	vTemp.u32[0] = v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = v63.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x825fc230
	if (!cr6.eq) goto loc_825FC230;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825fc080
	sub_825FC080(ctx, base);
	// b 0x825fc268
	goto loc_825FC268;
loc_825FC230:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825fc268
	if (cr6.eq) goto loc_825FC268;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_825FC240:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fc080
	sub_825FC080(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x825fc240
	if (!cr0.eq) goto loc_825FC240;
loc_825FC268:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825FC270"))) PPC_WEAK_FUNC(sub_825FC270);
PPC_FUNC_IMPL(__imp__sub_825FC270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825FC274"))) PPC_WEAK_FUNC(sub_825FC274);
PPC_FUNC_IMPL(__imp__sub_825FC274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC278"))) PPC_WEAK_FUNC(sub_825FC278);
PPC_FUNC_IMPL(__imp__sub_825FC278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x8314d43c
	__imp__KeSetCurrentProcessType(ctx, base);
	// lwz r11,848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// lwz r3,852(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d43c
	__imp__KeSetCurrentProcessType(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// not r8,r30
	ctx.r8.u64 = ~r30.u64;
	// addi r6,r11,-13684
	ctx.r6.s64 = r11.s64 + -13684;
loc_825FC2D8:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x825fc2d8
	if (!cr0.eq) goto loc_825FC2D8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bne cr6,0x825fc314
	if (!cr6.eq) goto loc_825FC314;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,27904
	ctx.r3.s64 = r11.s64 + 27904;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d0dc
	__imp__KeSetEvent(ctx, base);
loc_825FC314:
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

__attribute__((alias("__imp__sub_825FC328"))) PPC_WEAK_FUNC(sub_825FC328);
PPC_FUNC_IMPL(__imp__sub_825FC328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC32C"))) PPC_WEAK_FUNC(sub_825FC32C);
PPC_FUNC_IMPL(__imp__sub_825FC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC330"))) PPC_WEAK_FUNC(sub_825FC330);
PPC_FUNC_IMPL(__imp__sub_825FC330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// divwu r11,r3,r7
	r11.u32 = ctx.r3.u32 / ctx.r7.u32;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r6
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// b 0x825fc37c
	goto loc_825FC37C;
loc_825FC350:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x825fc374
	if (!cr6.eq) goto loc_825FC374;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x825fc374
	if (!cr6.eq) goto loc_825FC374;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x825fc388
	if (cr6.eq) goto loc_825FC388;
loc_825FC374:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_825FC37C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc350
	if (!cr6.eq) goto loc_825FC350;
	// blr 
	return;
loc_825FC388:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825fc39c
	if (cr6.eq) goto loc_825FC39C;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r11.u32);
	// blr 
	return;
loc_825FC39C:
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r11.u32);
}

__attribute__((alias("__imp__sub_825FC3A0"))) PPC_WEAK_FUNC(sub_825FC3A0);
PPC_FUNC_IMPL(__imp__sub_825FC3A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC3A4"))) PPC_WEAK_FUNC(sub_825FC3A4);
PPC_FUNC_IMPL(__imp__sub_825FC3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC3A8"))) PPC_WEAK_FUNC(sub_825FC3A8);
PPC_FUNC_IMPL(__imp__sub_825FC3A8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc400
	if (!cr6.eq) goto loc_825FC400;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fc3e4
	if (!cr6.gt) goto loc_825FC3E4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825FC3E4:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fc400
	if (!cr0.eq) goto loc_825FC400;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825fc448
	goto loc_825FC448;
loc_825FC400:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825fc438
	if (!cr6.gt) goto loc_825FC438;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825FC418:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r7,r11,r8
	PPC_STORE_U16(r11.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825fc418
	if (cr6.lt) goto loc_825FC418;
loc_825FC438:
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_825FC448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825FC458"))) PPC_WEAK_FUNC(sub_825FC458);
PPC_FUNC_IMPL(__imp__sub_825FC458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC45C"))) PPC_WEAK_FUNC(sub_825FC45C);
PPC_FUNC_IMPL(__imp__sub_825FC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC460"))) PPC_WEAK_FUNC(sub_825FC460);
PPC_FUNC_IMPL(__imp__sub_825FC460) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fc4c0
	if (!cr6.eq) goto loc_825FC4C0;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fc4a4
	if (!cr6.gt) goto loc_825FC4A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FC4A4:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fc4c0
	if (!cr0.eq) goto loc_825FC4C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825fc504
	goto loc_825FC504;
loc_825FC4C0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825fc4f4
	if (!cr6.gt) goto loc_825FC4F4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825FC4D8:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825fc4d8
	if (cr6.lt) goto loc_825FC4D8;
loc_825FC4F4:
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_825FC504:
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

__attribute__((alias("__imp__sub_825FC518"))) PPC_WEAK_FUNC(sub_825FC518);
PPC_FUNC_IMPL(__imp__sub_825FC518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC51C"))) PPC_WEAK_FUNC(sub_825FC51C);
PPC_FUNC_IMPL(__imp__sub_825FC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC520"))) PPC_WEAK_FUNC(sub_825FC520);
PPC_FUNC_IMPL(__imp__sub_825FC520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = r11.s64 + 2;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// mulli r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 * 3;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// bne cr6,0x825fc568
	if (!cr6.eq) goto loc_825FC568;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// b 0x825fc594
	goto loc_825FC594;
loc_825FC568:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 * 3;
loc_825FC574:
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + r11.u32);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fc594
	if (cr6.eq) goto loc_825FC594;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x825fc574
	if (cr6.lt) goto loc_825FC574;
loc_825FC594:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825FC59C"))) PPC_WEAK_FUNC(sub_825FC59C);
PPC_FUNC_IMPL(__imp__sub_825FC59C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC5A0"))) PPC_WEAK_FUNC(sub_825FC5A0);
PPC_FUNC_IMPL(__imp__sub_825FC5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mulli r8,r11,3
	ctx.r8.s64 = r11.s64 * 3;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x825fc5e0
	if (!cr6.eq) goto loc_825FC5E0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x825fc608
	goto loc_825FC608;
loc_825FC5E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r7,r8,3
	ctx.r7.s64 = ctx.r8.s64 * 3;
loc_825FC5E8:
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// beq cr6,0x825fc608
	if (cr6.eq) goto loc_825FC608;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// blt cr6,0x825fc5e8
	if (cr6.lt) goto loc_825FC5E8;
loc_825FC608:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825FC610"))) PPC_WEAK_FUNC(sub_825FC610);
PPC_FUNC_IMPL(__imp__sub_825FC610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC614"))) PPC_WEAK_FUNC(sub_825FC614);
PPC_FUNC_IMPL(__imp__sub_825FC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC618"))) PPC_WEAK_FUNC(sub_825FC618);
PPC_FUNC_IMPL(__imp__sub_825FC618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ori r6,r9,65535
	ctx.r6.u64 = ctx.r9.u64 | 65535;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x825fc67c
	if (cr6.eq) goto loc_825FC67C;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mulli r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 * 6;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// sth r5,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r5.u16);
	// beq cr6,0x825fc6b4
	if (cr6.eq) goto loc_825FC6B4;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r8.u16);
	// b 0x825fc6b4
	goto loc_825FC6B4;
loc_825FC67C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// sthx r8,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u16);
	// beq cr6,0x825fc6b4
	if (cr6.eq) goto loc_825FC6B4;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r6,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r6.u16);
loc_825FC6B4:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r6,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r6.u16);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// sth r6,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r6.u16);
}

__attribute__((alias("__imp__sub_825FC6CC"))) PPC_WEAK_FUNC(sub_825FC6CC);
PPC_FUNC_IMPL(__imp__sub_825FC6CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC6D0"))) PPC_WEAK_FUNC(sub_825FC6D0);
PPC_FUNC_IMPL(__imp__sub_825FC6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 * 6;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// sth r7,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r7.u16);
	// beq cr6,0x825fc710
	if (cr6.eq) goto loc_825FC710;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mulli r11,r10,6
	r11.s64 = ctx.r10.s64 * 6;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
loc_825FC710:
	// sthx r4,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
}

__attribute__((alias("__imp__sub_825FC724"))) PPC_WEAK_FUNC(sub_825FC724);
PPC_FUNC_IMPL(__imp__sub_825FC724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC728"))) PPC_WEAK_FUNC(sub_825FC728);
PPC_FUNC_IMPL(__imp__sub_825FC728) {
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
	// lhz r11,20(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fc618
	sub_825FC618(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r10,r30,6
	ctx.r10.s64 = r30.s64 * 6;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// bl 0x825fc6d0
	sub_825FC6D0(ctx, base);
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

__attribute__((alias("__imp__sub_825FC794"))) PPC_WEAK_FUNC(sub_825FC794);
PPC_FUNC_IMPL(__imp__sub_825FC794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC798"))) PPC_WEAK_FUNC(sub_825FC798);
PPC_FUNC_IMPL(__imp__sub_825FC798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fc7ec
	if (cr6.eq) goto loc_825FC7EC;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mulli r7,r8,12
	ctx.r7.s64 = ctx.r8.s64 * 12;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// beq cr6,0x825fc820
	if (cr6.eq) goto loc_825FC820;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// b 0x825fc820
	goto loc_825FC820;
loc_825FC7EC:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// beq cr6,0x825fc820
	if (cr6.eq) goto loc_825FC820;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
loc_825FC820:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_825FC838"))) PPC_WEAK_FUNC(sub_825FC838);
PPC_FUNC_IMPL(__imp__sub_825FC838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC83C"))) PPC_WEAK_FUNC(sub_825FC83C);
PPC_FUNC_IMPL(__imp__sub_825FC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC840"))) PPC_WEAK_FUNC(sub_825FC840);
PPC_FUNC_IMPL(__imp__sub_825FC840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 * 12;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r3
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// beq cr6,0x825fc878
	if (cr6.eq) goto loc_825FC878;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_825FC878:
	// stwx r4,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825FC88C"))) PPC_WEAK_FUNC(sub_825FC88C);
PPC_FUNC_IMPL(__imp__sub_825FC88C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC890"))) PPC_WEAK_FUNC(sub_825FC890);
PPC_FUNC_IMPL(__imp__sub_825FC890) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fc798
	sub_825FC798(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r10,r30,12
	ctx.r10.s64 = r30.s64 * 12;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// bl 0x825fc840
	sub_825FC840(ctx, base);
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

__attribute__((alias("__imp__sub_825FC8F4"))) PPC_WEAK_FUNC(sub_825FC8F4);
PPC_FUNC_IMPL(__imp__sub_825FC8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FC8F8"))) PPC_WEAK_FUNC(sub_825FC8F8);
PPC_FUNC_IMPL(__imp__sub_825FC8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r29,r28
	r29.u64 = r28.u64;
	// bne cr6,0x825fc924
	if (!cr6.eq) goto loc_825FC924;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x825fc958
	goto loc_825FC958;
loc_825FC924:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ee088
	sub_828EE088(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825fc94c
	if (cr0.lt) goto loc_825FC94C;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bgt cr6,0x825fc94c
	if (cr6.gt) goto loc_825FC94C;
	// bne cr6,0x825fc958
	if (!cr6.eq) goto loc_825FC958;
	// b 0x825fc954
	goto loc_825FC954;
loc_825FC94C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,122
	r29.u64 = r29.u64 | 122;
loc_825FC954:
	// stbx r28,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r28.u8);
loc_825FC958:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FC960"))) PPC_WEAK_FUNC(sub_825FC960);
PPC_FUNC_IMPL(__imp__sub_825FC960) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825FC964"))) PPC_WEAK_FUNC(sub_825FC964);
PPC_FUNC_IMPL(__imp__sub_825FC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FC968"))) PPC_WEAK_FUNC(sub_825FC968);
PPC_FUNC_IMPL(__imp__sub_825FC968) {
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
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825fcba8
	if (cr6.eq) goto loc_825FCBA8;
	// mullw r11,r3,r10
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lfsx f0,r3,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r30,r1,91
	r30.s64 = ctx.r1.s64 + 91;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,107
	r29.s64 = ctx.r1.s64 + 107;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r27,4
	r27.s64 = 4;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r28,8
	r28.s64 = 8;
	// lvsl v0,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r24,r1,128
	r24.s64 = ctx.r1.s64 + 128;
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mullw r11,r6,r10
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r7,r10
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lvx128 v63,r0,r3
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r31
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r29
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// vperm128 v62,v61,v62,v7
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vpermwi128 v61,v63,99
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x9C));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x78));
	// vpermwi128 v63,v62,135
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x78));
	// vpermwi128 v13,v62,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x9C));
	// vmulfp128 v12,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vnmsubfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v61,v12,2
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v63,r0,r26
	ea = (r26.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r25,r27
	ea = (r25.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r24,r28
	ea = (r24.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x825fe760
	sub_825FE760(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,107
	r11.s64 = ctx.r1.s64 + 107;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,91
	ctx.r8.s64 = ctx.r1.s64 + 91;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f9
	f0.f64 = double(float(f0.f64 - ctx.f9.f64));
	// lvx128 v62,r0,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r10
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v61,v60,v61,v7
	_mm_store_si128((__m128i*)v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vpermwi128 v62,v61,135
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x78));
	// vpermwi128 v13,v61,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x9C));
	// vpermwi128 v61,v63,99
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x9C));
	// vpermwi128 v0,v63,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x78));
	// vmulfp128 v12,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// vnmsubfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v61,v12,2
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r8,r27
	ea = (ctx.r8.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x825fe760
	sub_825FE760(ctx, base);
	// addi r11,r1,123
	r11.s64 = ctx.r1.s64 + 123;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,139
	ctx.r9.s64 = ctx.r1.s64 + 139;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v62,v63,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v62,v60,v61,v7
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825fcbb0
	goto loc_825FCBB0;
loc_825FCBA8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
loc_825FCBB0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825FCBB4"))) PPC_WEAK_FUNC(sub_825FCBB4);
PPC_FUNC_IMPL(__imp__sub_825FCBB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825FCBB8"))) PPC_WEAK_FUNC(sub_825FCBB8);
PPC_FUNC_IMPL(__imp__sub_825FCBB8) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// divwu r11,r3,r7
	r11.u32 = ctx.r3.u32 / ctx.r7.u32;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r19,r11,2,0,29
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwzx r11,r19,r6
	r11.u64 = PPC_LOAD_U32(r19.u32 + ctx.r6.u32);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// b 0x825fcc28
	goto loc_825FCC28;
loc_825FCC08:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x825fcc20
	if (!cr6.eq) goto loc_825FCC20;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x825fcc34
	if (cr6.eq) goto loc_825FCC34;
loc_825FCC20:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_825FCC28:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fcc08
	if (!cr6.eq) goto loc_825FCC08;
	// b 0x825fcc38
	goto loc_825FCC38;
loc_825FCC34:
	// lwz r21,12(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_825FCC38:
	// mr r29,r11
	r29.u64 = r11.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825fccdc
	if (cr6.eq) goto loc_825FCCDC;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r27,r11
	r27.u64 = r11.u64;
	// b 0x825fccd4
	goto loc_825FCCD4;
loc_825FCC54:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x825fcccc
	if (!cr6.eq) goto loc_825FCCCC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x825fcccc
	if (!cr6.eq) goto loc_825FCCCC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x825fc968
	sub_825FC968(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x825fc968
	sub_825FC968(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x825fcccc
	if (!cr6.gt) goto loc_825FCCCC;
	// lwz r21,12(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_825FCCCC:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_825FCCD4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825fcc54
	if (!cr6.eq) goto loc_825FCC54;
loc_825FCCDC:
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// beq cr6,0x825fccfc
	if (cr6.eq) goto loc_825FCCFC;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x825fccf8
	if (cr6.eq) goto loc_825FCCF8;
	// stw r11,16(r23)
	PPC_STORE_U32(r23.u32 + 16, r11.u32);
	// b 0x825fccfc
	goto loc_825FCCFC;
loc_825FCCF8:
	// stwx r11,r19,r20
	PPC_STORE_U32(r19.u32 + r20.u32, r11.u32);
loc_825FCCFC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_825FCD08"))) PPC_WEAK_FUNC(sub_825FCD08);
PPC_FUNC_IMPL(__imp__sub_825FCD08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825FCD0C"))) PPC_WEAK_FUNC(sub_825FCD0C);
PPC_FUNC_IMPL(__imp__sub_825FCD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FCD10"))) PPC_WEAK_FUNC(sub_825FCD10);
PPC_FUNC_IMPL(__imp__sub_825FCD10) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,3
	r17.s64 = 3;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// divwu r19,r5,r17
	r19.u32 = ctx.r5.u32 / r17.u32;
	// li r14,0
	r14.s64 = 0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mulli r24,r6,3
	r24.s64 = ctx.r6.s64 * 3;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(r19.u32, r11.u32, xer);
	// rlwinm r3,r19,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x825fcd70
	if (!cr6.gt) goto loc_825FCD70;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825FCD70:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// lis r11,3276
	r11.s64 = 214695936;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// ori r11,r11,52428
	r11.u64 = r11.u64 | 52428;
	// mulli r3,r24,20
	ctx.r3.s64 = r24.s64 * 20;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// ble cr6,0x825fcd90
	if (!cr6.gt) goto loc_825FCD90;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825FCD90:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x825fd130
	if (cr6.eq) goto loc_825FD130;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fd130
	if (cr6.eq) goto loc_825FD130;
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825fcde4
	if (!cr6.eq) goto loc_825FCDE4;
	// li r30,1
	r30.s64 = 1;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r14.u32);
	// beq cr6,0x825fcf2c
	if (cr6.eq) goto loc_825FCF2C;
loc_825FCDE4:
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_825FCDEC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x825fcf20
	if (!cr6.lt) goto loc_825FCF20;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// mulli r10,r14,20
	ctx.r10.s64 = r14.s64 * 20;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + r26.u64;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
loc_825FCE18:
	// lhz r11,-4(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + -4);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fcf10
	if (cr6.eq) goto loc_825FCF10;
	// lhz r10,-2(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + -2);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// beq cr6,0x825fce50
	if (cr6.eq) goto loc_825FCE50;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r11,r16
	r11.u64 = PPC_LOAD_U32(r11.u32 + r16.u32);
	// lwzx r10,r10,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r16.u32);
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r16.u32);
loc_825FCE50:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825fcf10
	if (cr6.eq) goto loc_825FCF10;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fcf10
	if (cr6.eq) goto loc_825FCF10;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fcf10
	if (cr6.eq) goto loc_825FCF10;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mtctr r17
	ctr.u64 = r17.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// li r11,2
	r11.s64 = 2;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// addi r14,r14,3
	r14.s64 = r14.s64 + 3;
	// addi r4,r4,60
	ctx.r4.s64 = ctx.r4.s64 + 60;
loc_825FCE94:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// divwu r24,r11,r17
	r24.u32 = r11.u32 / r17.u32;
	// divwu r23,r8,r17
	r23.u32 = ctx.r8.u32 / r17.u32;
	// mulli r24,r24,3
	r24.s64 = r24.s64 * 3;
	// mulli r23,r23,3
	r23.s64 = r23.s64 * 3;
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - r23.s64;
	// subf r24,r24,r11
	r24.s64 = r11.s64 - r24.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// divwu r23,r10,r19
	r23.u32 = ctx.r10.u32 / r19.u32;
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,96
	r21.s64 = ctx.r1.s64 + 96;
	// mullw r23,r23,r19
	r23.s64 = int64_t(r23.s32) * int64_t(r19.s32);
	// lwzx r22,r8,r22
	r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + r22.u32);
	// lwzx r24,r24,r21
	r24.u64 = PPC_LOAD_U32(r24.u32 + r21.u32);
	// subf r8,r23,r10
	ctx.r8.s64 = ctx.r10.s64 - r23.s64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r19,0
	if (r19.u32 <= 0) __builtin_debugtrap();
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r5,12(r23)
	PPC_STORE_U32(r23.u32 + 12, ctx.r5.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// stw r22,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r22.u32);
	// stw r24,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r24.u32);
	// lwzx r10,r8,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r18.u32);
	// stw r10,16(r23)
	PPC_STORE_U32(r23.u32 + 16, ctx.r10.u32);
	// stwx r23,r8,r18
	PPC_STORE_U32(ctx.r8.u32 + r18.u32, r23.u32);
	// bdnz 0x825fce94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FCE94;
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825FCF10:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,6
	ctx.r6.s64 = ctx.r6.s64 + 6;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// blt cr6,0x825fce18
	if (cr6.lt) goto loc_825FCE18;
loc_825FCF20:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bne 0x825fcdec
	if (!cr0.eq) goto loc_825FCDEC;
loc_825FCF2C:
	// mulli r5,r27,12
	ctx.r5.s64 = r27.s64 * 12;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825fd11c
	if (cr6.eq) goto loc_825FD11C;
	// addi r21,r29,4
	r21.s64 = r29.s64 + 4;
	// mr r20,r30
	r20.u64 = r30.u64;
loc_825FCF4C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bge cr6,0x825fd110
	if (!cr6.lt) goto loc_825FD110;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// mulli r10,r27,6
	ctx.r10.s64 = r27.s64 * 6;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// add r23,r11,r25
	r23.u64 = r11.u64 + r25.u64;
	// addi r26,r10,4
	r26.s64 = ctx.r10.s64 + 4;
	// subf r24,r25,r9
	r24.s64 = ctx.r9.s64 - r25.s64;
loc_825FCF84:
	// lhz r11,-4(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + -4);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fd0f0
	if (cr6.eq) goto loc_825FD0F0;
	// lhz r10,-2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + -2);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// beq cr6,0x825fcfbc
	if (cr6.eq) goto loc_825FCFBC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r11,r16
	r11.u64 = PPC_LOAD_U32(r11.u32 + r16.u32);
	// lwzx r10,r10,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r16.u32);
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r16.u32);
loc_825FCFBC:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x825fd0e0
	if (cr6.eq) goto loc_825FD0E0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd0e0
	if (cr6.eq) goto loc_825FD0E0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd0e0
	if (cr6.eq) goto loc_825FD0E0;
	// li r28,1
	r28.s64 = 1;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r25,r17
	r25.u64 = r17.u64;
loc_825FCFEC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825fd0c8
	if (!cr6.eq) goto loc_825FD0C8;
	// divwu r11,r28,r17
	r11.u32 = r28.u32 / r17.u32;
	// lwzx r31,r24,r30
	r31.u64 = PPC_LOAD_U32(r24.u32 + r30.u32);
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// divwu r7,r8,r17
	ctx.r7.u32 = ctx.r8.u32 / r17.u32;
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// mulli r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 * 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// lwzx r29,r11,r6
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// bl 0x825fcbb8
	sub_825FCBB8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825fd0c8
	if (cr6.eq) goto loc_825FD0C8;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc330
	sub_825FC330(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
loc_825FD088:
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r15
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r15.u32);
	// beq cr6,0x825fd0a4
	if (cr6.eq) goto loc_825FD0A4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r16.u32);
loc_825FD0A4:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x825fd0b8
	if (cr6.eq) goto loc_825FD0B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x825fd088
	if (cr6.lt) goto loc_825FD088;
loc_825FD0B8:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r27.u32);
loc_825FD0C8:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825fcfec
	if (!cr0.eq) goto loc_825FCFEC;
	// lwz r25,364(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// b 0x825fd0f0
	goto loc_825FD0F0;
loc_825FD0E0:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// stw r11,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r11.u32);
loc_825FD0F0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,6
	r26.s64 = r26.s64 + 6;
	// addi r23,r23,12
	r23.s64 = r23.s64 + 12;
	// addi r24,r24,-12
	r24.s64 = r24.s64 + -12;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(r27.u32, r22.u32, xer);
	// blt cr6,0x825fcf84
	if (cr6.lt) goto loc_825FCF84;
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825FD110:
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r21,r21,20
	r21.s64 = r21.s64 + 20;
	// bne 0x825fcf4c
	if (!cr0.eq) goto loc_825FCF4C;
loc_825FD11C:
	// cmpw cr6,r14,r24
	cr6.compare<int32_t>(r14.s32, r24.s32, xer);
	// ble cr6,0x825fd13c
	if (!cr6.gt) goto loc_825FD13C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x825fd138
	goto loc_825FD138;
loc_825FD130:
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
loc_825FD138:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_825FD13C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_825FD154"))) PPC_WEAK_FUNC(sub_825FD154);
PPC_FUNC_IMPL(__imp__sub_825FD154) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825FD158"))) PPC_WEAK_FUNC(sub_825FD158);
PPC_FUNC_IMPL(__imp__sub_825FD158) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,3
	r16.s64 = 3;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// lis r11,16383
	r11.s64 = 1073676288;
	// stw r10,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// li r28,0
	r28.s64 = 0;
	// divwu r18,r5,r16
	r18.u32 = ctx.r5.u32 / r16.u32;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mulli r23,r6,3
	r23.s64 = ctx.r6.s64 * 3;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// rlwinm r3,r18,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x825fd1c0
	if (!cr6.gt) goto loc_825FD1C0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825FD1C0:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// lis r11,3276
	r11.s64 = 214695936;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// ori r11,r11,52428
	r11.u64 = r11.u64 | 52428;
	// mulli r3,r23,20
	ctx.r3.s64 = r23.s64 * 20;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x825fd1e0
	if (!cr6.gt) goto loc_825FD1E0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825FD1E0:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// beq cr6,0x825fd588
	if (cr6.eq) goto loc_825FD588;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fd588
	if (cr6.eq) goto loc_825FD588;
	// rlwinm r5,r18,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825fd234
	if (!cr6.eq) goto loc_825FD234;
	// li r30,1
	r30.s64 = 1;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// beq cr6,0x825fd380
	if (cr6.eq) goto loc_825FD380;
loc_825FD234:
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_825FD23C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x825fd374
	if (!cr6.lt) goto loc_825FD374;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// mulli r10,r25,20
	ctx.r10.s64 = r25.s64 * 20;
	// add r11,r11,r14
	r11.u64 = r11.u64 + r14.u64;
	// add r4,r10,r24
	ctx.r4.u64 = ctx.r10.u64 + r24.u64;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
loc_825FD268:
	// lwz r11,-8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fd364
	if (cr6.eq) goto loc_825FD364;
	// lwz r10,-4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// beq cr6,0x825fd2a0
	if (cr6.eq) goto loc_825FD2A0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	r11.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// lwzx r10,r10,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r15.u32);
	// lwzx r9,r9,r15
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r15.u32);
loc_825FD2A0:
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x825fd364
	if (cr6.eq) goto loc_825FD364;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd364
	if (cr6.eq) goto loc_825FD364;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd364
	if (cr6.eq) goto loc_825FD364;
	// addi r7,r25,3
	ctx.r7.s64 = r25.s64 + 3;
	// mtctr r16
	ctr.u64 = r16.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// li r11,2
	r11.s64 = 2;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// addi r4,r4,60
	ctx.r4.s64 = ctx.r4.s64 + 60;
loc_825FD2E8:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// divwu r26,r11,r16
	r26.u32 = r11.u32 / r16.u32;
	// divwu r25,r8,r16
	r25.u32 = ctx.r8.u32 / r16.u32;
	// mulli r26,r26,3
	r26.s64 = r26.s64 * 3;
	// mulli r25,r25,3
	r25.s64 = r25.s64 * 3;
	// subf r8,r25,r8
	ctx.r8.s64 = ctx.r8.s64 - r25.s64;
	// subf r26,r26,r11
	r26.s64 = r11.s64 - r26.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,104
	r21.s64 = ctx.r1.s64 + 104;
	// divwu r25,r10,r18
	r25.u32 = ctx.r10.u32 / r18.u32;
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// mullw r25,r25,r18
	r25.s64 = int64_t(r25.s32) * int64_t(r18.s32);
	// lwzx r21,r8,r21
	r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + r21.u32);
	// lwzx r26,r26,r20
	r26.u64 = PPC_LOAD_U32(r26.u32 + r20.u32);
	// subf r8,r25,r10
	ctx.r8.s64 = ctx.r10.s64 - r25.s64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r18,0
	if (r18.u32 <= 0) __builtin_debugtrap();
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r5,12(r25)
	PPC_STORE_U32(r25.u32 + 12, ctx.r5.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r21,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r21.u32);
	// stw r26,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r26.u32);
	// lwzx r10,r8,r17
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r17.u32);
	// stw r10,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r10.u32);
	// stwx r25,r8,r17
	PPC_STORE_U32(ctx.r8.u32 + r17.u32, r25.u32);
	// bdnz 0x825fd2e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FD2E8;
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825FD364:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// blt cr6,0x825fd268
	if (cr6.lt) goto loc_825FD268;
loc_825FD374:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bne 0x825fd23c
	if (!cr0.eq) goto loc_825FD23C;
loc_825FD380:
	// mulli r5,r27,12
	ctx.r5.s64 = r27.s64 * 12;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825fd574
	if (cr6.eq) goto loc_825FD574;
	// addi r20,r29,4
	r20.s64 = r29.s64 + 4;
	// mr r19,r30
	r19.u64 = r30.u64;
loc_825FD3A0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r26,r11
	r26.u64 = r11.u64;
	// add r21,r10,r11
	r21.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// bge cr6,0x825fd568
	if (!cr6.lt) goto loc_825FD568;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r10,r11,r14
	ctx.r10.u64 = r11.u64 + r14.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// add r24,r11,r22
	r24.u64 = r11.u64 + r22.u64;
	// subf r23,r22,r9
	r23.s64 = ctx.r9.s64 - r22.s64;
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// subf r22,r14,r22
	r22.s64 = r22.s64 - r14.s64;
loc_825FD3D8:
	// lwz r11,-8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -8);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825fd544
	if (cr6.eq) goto loc_825FD544;
	// lwz r10,-4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -4);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// beq cr6,0x825fd410
	if (cr6.eq) goto loc_825FD410;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	r11.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// lwzx r10,r10,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r15.u32);
	// lwzx r9,r9,r15
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r15.u32);
loc_825FD410:
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x825fd534
	if (cr6.eq) goto loc_825FD534;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd534
	if (cr6.eq) goto loc_825FD534;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd534
	if (cr6.eq) goto loc_825FD534;
	// li r28,1
	r28.s64 = 1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r25,r16
	r25.u64 = r16.u64;
loc_825FD440:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825fd51c
	if (!cr6.eq) goto loc_825FD51C;
	// divwu r11,r28,r16
	r11.u32 = r28.u32 / r16.u32;
	// lwzx r31,r30,r23
	r31.u64 = PPC_LOAD_U32(r30.u32 + r23.u32);
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// divwu r7,r8,r16
	ctx.r7.u32 = ctx.r8.u32 / r16.u32;
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// mulli r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 * 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwzx r29,r11,r6
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// bl 0x825fcbb8
	sub_825FCBB8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825fd51c
	if (cr6.eq) goto loc_825FD51C;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc330
	sub_825FC330(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
loc_825FD4DC:
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r14.u32);
	// beq cr6,0x825fd4f8
	if (cr6.eq) goto loc_825FD4F8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r15
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r15.u32);
loc_825FD4F8:
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x825fd50c
	if (cr6.eq) goto loc_825FD50C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x825fd4dc
	if (cr6.lt) goto loc_825FD4DC;
loc_825FD50C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
loc_825FD51C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825fd440
	if (!cr0.eq) goto loc_825FD440;
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825fd544
	goto loc_825FD544;
loc_825FD534:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// stwx r11,r22,r27
	PPC_STORE_U32(r22.u32 + r27.u32, r11.u32);
loc_825FD544:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// addi r23,r23,-12
	r23.s64 = r23.s64 + -12;
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(r26.u32, r21.u32, xer);
	// blt cr6,0x825fd3d8
	if (cr6.lt) goto loc_825FD3D8;
	// lwz r24,92(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r23,96(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,380(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_825FD568:
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r20,r20,20
	r20.s64 = r20.s64 + 20;
	// bne 0x825fd3a0
	if (!cr0.eq) goto loc_825FD3A0;
loc_825FD574:
	// cmpw cr6,r25,r23
	cr6.compare<int32_t>(r25.s32, r23.s32, xer);
	// ble cr6,0x825fd594
	if (!cr6.gt) goto loc_825FD594;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x825fd590
	goto loc_825FD590;
loc_825FD588:
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
loc_825FD590:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_825FD594:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_825FD5AC"))) PPC_WEAK_FUNC(sub_825FD5AC);
PPC_FUNC_IMPL(__imp__sub_825FD5AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825FD5B0"))) PPC_WEAK_FUNC(sub_825FD5B0);
PPC_FUNC_IMPL(__imp__sub_825FD5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825fd5ec
	if (!cr6.gt) goto loc_825FD5EC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,0
	r11.s64 = 0;
loc_825FD5CC:
	// lhzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x825fd63c
	if (cr6.eq) goto loc_825FD63C;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x825fd5cc
	if (cr6.lt) goto loc_825FD5CC;
loc_825FD5EC:
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
loc_825FD63C:
	// li r11,1
	r11.s64 = 1;
}

__attribute__((alias("__imp__sub_825FD640"))) PPC_WEAK_FUNC(sub_825FD640);
PPC_FUNC_IMPL(__imp__sub_825FD640) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fd5f0
	// ERROR 825FD5F0
	return;
}

__attribute__((alias("__imp__sub_825FD644"))) PPC_WEAK_FUNC(sub_825FD644);
PPC_FUNC_IMPL(__imp__sub_825FD644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FD648"))) PPC_WEAK_FUNC(sub_825FD648);
PPC_FUNC_IMPL(__imp__sub_825FD648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825fd680
	if (!cr6.gt) goto loc_825FD680;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	r11.s64 = 0;
loc_825FD660:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x825fd6d0
	if (cr6.eq) goto loc_825FD6D0;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825fd660
	if (cr6.lt) goto loc_825FD660;
loc_825FD680:
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
loc_825FD6D0:
	// li r11,1
	r11.s64 = 1;
}

__attribute__((alias("__imp__sub_825FD6D4"))) PPC_WEAK_FUNC(sub_825FD6D4);
PPC_FUNC_IMPL(__imp__sub_825FD6D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fd684
	// ERROR 825FD684
	return;
}

__attribute__((alias("__imp__sub_825FD6D8"))) PPC_WEAK_FUNC(sub_825FD6D8);
PPC_FUNC_IMPL(__imp__sub_825FD6D8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fd758
	if (!cr6.eq) goto loc_825FD758;
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// mulli r3,r11,6
	ctx.r3.s64 = r11.s64 * 6;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fd738
	if (!cr0.eq) goto loc_825FD738;
loc_825FD71C:
	// lis r27,-32761
	r27.s64 = -2147024896;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ori r27,r27,14
	r27.u64 = r27.u64 | 14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_825FD72C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_825FD738:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fd758
	if (cr0.eq) goto loc_825FD758;
	// lhz r11,24(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 2);
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825fd71c
	if (cr0.eq) goto loc_825FD71C;
loc_825FD758:
	// sth r28,22(r31)
	PPC_STORE_U16(r31.u32 + 22, r28.u16);
	// clrlwi r29,r30,16
	r29.u64 = r30.u32 & 0xFFFF;
	// lis r11,0
	r11.s64 = 0;
	// sth r30,20(r31)
	PPC_STORE_U16(r31.u32 + 20, r30.u16);
	// clrlwi r28,r28,16
	r28.u64 = r28.u32 & 0xFFFF;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
	// mr r30,r29
	r30.u64 = r29.u64;
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// sth r11,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r11.u16);
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// bge cr6,0x825fd810
	if (!cr6.lt) goto loc_825FD810;
loc_825FD790:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r30,6
	ctx.r10.s64 = r30.s64 * 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825FD7A4:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x825fd7c0
	if (cr6.eq) goto loc_825FD7C0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_825FD7C0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x825fd7a4
	if (cr6.lt) goto loc_825FD7A4;
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = r11.u32 & 0xFFFF;
	// mulli r11,r4,6
	r11.s64 = ctx.r4.s64 * 6;
	// stbx r27,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r27.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// bl 0x825fc6d0
	sub_825FC6D0(ctx, base);
	// lhz r11,20(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// clrlwi r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x825fd790
	if (cr6.lt) goto loc_825FD790;
loc_825FD810:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fd72c
	if (cr6.eq) goto loc_825FD72C;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
}

__attribute__((alias("__imp__sub_825FD82C"))) PPC_WEAK_FUNC(sub_825FD82C);
PPC_FUNC_IMPL(__imp__sub_825FD82C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fd72c
	// ERROR 825FD72C
	return;
}

__attribute__((alias("__imp__sub_825FD830"))) PPC_WEAK_FUNC(sub_825FD830);
PPC_FUNC_IMPL(__imp__sub_825FD830) {
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
	// lhz r11,20(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// clrlwi r30,r4,16
	r30.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = r11.u32 & 0xFFFF;
	// mulli r11,r4,6
	r11.s64 = ctx.r4.s64 * 6;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x825fc618
	sub_825FC618(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r30,6
	ctx.r10.s64 = r30.s64 * 6;
	// li r30,0
	r30.s64 = 0;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
loc_825FD878:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + r29.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x825fd8b0
	if (cr6.eq) goto loc_825FD8B0;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fd8b0
	if (!cr0.eq) goto loc_825FD8B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc728
	sub_825FC728(ctx, base);
loc_825FD8B0:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x825fd878
	if (cr6.lt) goto loc_825FD878;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825fd8d8
	if (cr6.eq) goto loc_825FD8D8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_825FD8D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FD8DC"))) PPC_WEAK_FUNC(sub_825FD8DC);
PPC_FUNC_IMPL(__imp__sub_825FD8DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825FD8E0"))) PPC_WEAK_FUNC(sub_825FD8E0);
PPC_FUNC_IMPL(__imp__sub_825FD8E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825fd98c
	if (!cr6.eq) goto loc_825FD98C;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fd92c
	if (!cr6.gt) goto loc_825FD92C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FD92C:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825fd958
	if (!cr0.eq) goto loc_825FD958;
loc_825FD93C:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_825FD94C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_825FD958:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fd98c
	if (cr0.eq) goto loc_825FD98C;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825fd97c
	if (!cr6.gt) goto loc_825FD97C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FD97C:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825fd93c
	if (cr0.eq) goto loc_825FD93C;
loc_825FD98C:
	// add r11,r27,r26
	r11.u64 = r27.u64 + r26.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bge cr6,0x825fda30
	if (!cr6.lt) goto loc_825FDA30;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mulli r29,r27,12
	r29.s64 = r27.s64 * 12;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_825FD9BC:
	// li r11,3
	r11.s64 = 3;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825FD9D0:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fd9e8
	if (cr6.eq) goto loc_825FD9E8;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
loc_825FD9E8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825fd9d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FD9D0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r25,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r25.u8);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// bl 0x825fc840
	sub_825FC840(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x825fd9bc
	if (cr6.lt) goto loc_825FD9BC;
loc_825FDA30:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fd94c
	if (cr6.eq) goto loc_825FD94C;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r25,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r25.u32);
}

__attribute__((alias("__imp__sub_825FDA4C"))) PPC_WEAK_FUNC(sub_825FDA4C);
PPC_FUNC_IMPL(__imp__sub_825FDA4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fd94c
	// ERROR 825FD94C
	return;
}

__attribute__((alias("__imp__sub_825FDA50"))) PPC_WEAK_FUNC(sub_825FDA50);
PPC_FUNC_IMPL(__imp__sub_825FDA50) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subf r30,r11,r4
	r30.s64 = ctx.r4.s64 - r11.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fc798
	sub_825FC798(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// li r28,3
	r28.s64 = 3;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
loc_825FDA94:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x825fdac4
	if (cr6.eq) goto loc_825FDAC4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fdac4
	if (!cr0.eq) goto loc_825FDAC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc890
	sub_825FC890(ctx, base);
loc_825FDAC4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x825fda94
	if (!cr0.eq) goto loc_825FDA94;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825fdae8
	if (cr6.eq) goto loc_825FDAE8;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_825FDAE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FDAEC"))) PPC_WEAK_FUNC(sub_825FDAEC);
PPC_FUNC_IMPL(__imp__sub_825FDAEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825FDAF0"))) PPC_WEAK_FUNC(sub_825FDAF0);
PPC_FUNC_IMPL(__imp__sub_825FDAF0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// ori r22,r10,65535
	r22.u64 = ctx.r10.u64 | 65535;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// li r25,0
	r25.s64 = 0;
	// subf r17,r7,r6
	r17.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bl 0x825fc3a8
	sub_825FC3A8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// blt 0x825fde9c
	if (cr0.lt) goto loc_825FDE9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r5,r31,16
	ctx.r5.u64 = r31.u32 & 0xFFFF;
	// clrlwi r4,r24,16
	ctx.r4.u64 = r24.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fd6d8
	sub_825FD6D8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// blt 0x825fde9c
	if (cr0.lt) goto loc_825FDE9C;
	// li r23,0
	r23.s64 = 0;
loc_825FDB68:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825FDB6C:
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r29
	r11.u64 = PPC_LOAD_U16(r11.u32 + r29.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x825fdbe4
	if (!cr6.eq) goto loc_825FDBE4;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x825fdb6c
	if (cr6.lt) goto loc_825FDB6C;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825FDB94:
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(r28.u32, 65535, xer);
	// beq cr6,0x825fde9c
	if (cr6.eq) goto loc_825FDE9C;
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x825fdbf4
	if (cr6.eq) goto loc_825FDBF4;
	// lhz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r8
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fdbf4
	if (!cr0.eq) goto loc_825FDBF4;
	// li r11,1
	r11.s64 = 1;
	// b 0x825fdc24
	goto loc_825FDC24;
loc_825FDBE4:
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x825fdb94
	goto loc_825FDB94;
loc_825FDBF4:
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x825fdc20
	if (cr6.eq) goto loc_825FDC20;
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// beq 0x825fdc24
	if (cr0.eq) goto loc_825FDC24;
loc_825FDC20:
	// li r11,0
	r11.s64 = 0;
loc_825FDC24:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_825FDC28:
	// cmplwi cr6,r26,65535
	cr6.compare<uint32_t>(r26.u32, 65535, xer);
	// beq cr6,0x825fdcf0
	if (cr6.eq) goto loc_825FDCF0;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r31,1
	r31.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// bl 0x825fc520
	sub_825FC520(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x825fdcac
	if (cr6.eq) goto loc_825FDCAC;
	// lhz r30,20(r29)
	r30.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// lwz r27,16(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 16);
loc_825FDC68:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r27
	r11.u64 = PPC_LOAD_U8(r11.u32 + r27.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fdcac
	if (!cr0.eq) goto loc_825FDCAC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x825fc520
	sub_825FC520(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x825fdc68
	if (!cr6.eq) goto loc_825FDC68;
loc_825FDCAC:
	// add r11,r31,r25
	r11.u64 = r31.u64 + r25.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(r11.s32, r17.s32, xer);
	// ble cr6,0x825fdcf0
	if (!cr6.gt) goto loc_825FDCF0;
	// lhz r11,20(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// clrlwi r10,r26,16
	ctx.r10.u64 = r26.u32 & 0xFFFF;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r26,r22
	r26.u64 = r22.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fdcec
	if (!cr0.eq) goto loc_825FDCEC;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_825FDCEC:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_825FDCF0:
	// clrlwi r4,r28,16
	ctx.r4.u64 = r28.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fd830
	sub_825FD830(ctx, base);
	// clrlwi r11,r23,16
	r11.u64 = r23.u32 & 0xFFFF;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r28,6
	ctx.r10.s64 = r28.s64 * 6;
	// add r8,r11,r24
	ctx.r8.u64 = r11.u64 + r24.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r11,r10,r18
	r11.u64 = ctx.r10.u64 + r18.u64;
	// stwx r8,r9,r19
	PPC_STORE_U32(ctx.r9.u32 + r19.u32, ctx.r8.u32);
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r30,r11,-2
	r30.s64 = r11.s64 + -2;
	// li r31,3
	r31.s64 = 3;
loc_825FDD24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzu r4,2(r30)
	ea = 2 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825fd5b0
	sub_825FD5B0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// subf r11,r11,r25
	r11.s64 = r25.s64 - r11.s64;
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// bne 0x825fdd24
	if (!cr0.eq) goto loc_825FDD24;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fc520
	sub_825FC520(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825fc520
	sub_825FC520(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// beq cr6,0x825fddcc
	if (cr6.eq) goto loc_825FDDCC;
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x825fddd0
	if (cr0.eq) goto loc_825FDDD0;
loc_825FDDCC:
	// li r11,0
	r11.s64 = 0;
loc_825FDDD0:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x825fde04
	if (cr6.eq) goto loc_825FDE04;
	// lhz r11,20(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r8
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x825fde08
	if (cr0.eq) goto loc_825FDE08;
loc_825FDE04:
	// li r11,0
	r11.s64 = 0;
loc_825FDE08:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// beq 0x825fde44
	if (cr0.eq) goto loc_825FDE44;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fde34
	if (cr0.eq) goto loc_825FDE34;
	// cmplwi cr6,r26,65535
	cr6.compare<uint32_t>(r26.u32, 65535, xer);
	// bne cr6,0x825fde34
	if (!cr6.eq) goto loc_825FDE34;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lwz r26,96(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825FDE34:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825fdcf0
	goto loc_825FDCF0;
loc_825FDE44:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fde8c
	if (!cr0.eq) goto loc_825FDE8C;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r26,r22
	r26.u64 = r22.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(r28.u32, 65535, xer);
	// beq cr6,0x825fdb68
	if (cr6.eq) goto loc_825FDB68;
	// lhz r11,20(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 20);
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825fdcf0
	if (cr0.eq) goto loc_825FDCF0;
	// b 0x825fdb68
	goto loc_825FDB68;
loc_825FDE8C:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825fdc28
	goto loc_825FDC28;
loc_825FDE9C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825FDEA4"))) PPC_WEAK_FUNC(sub_825FDEA4);
PPC_FUNC_IMPL(__imp__sub_825FDEA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825FDEA8"))) PPC_WEAK_FUNC(sub_825FDEA8);
PPC_FUNC_IMPL(__imp__sub_825FDEA8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,-1
	r26.s64 = -1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// li r23,0
	r23.s64 = 0;
	// subf r16,r7,r6
	r16.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bl 0x825fc460
	sub_825FC460(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// blt 0x825fe234
	if (cr0.lt) goto loc_825FE234;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fd8e0
	sub_825FD8E0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// blt 0x825fe234
	if (cr0.lt) goto loc_825FE234;
	// li r25,0
	r25.s64 = 0;
	// addi r17,r29,8
	r17.s64 = r29.s64 + 8;
loc_825FDF1C:
	// li r11,0
	r11.s64 = 0;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_825FDF24:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x825fdf90
	if (!cr6.eq) goto loc_825FDF90;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x825fdf24
	if (cr6.lt) goto loc_825FDF24;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825FDF44:
	// mr r27,r11
	r27.u64 = r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fe234
	if (cr6.eq) goto loc_825FE234;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fdfa8
	if (cr6.eq) goto loc_825FDFA8;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r8
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fdfa8
	if (!cr0.eq) goto loc_825FDFA8;
	// li r11,1
	r11.s64 = 1;
	// b 0x825fdfd8
	goto loc_825FDFD8;
loc_825FDF90:
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x825fdf44
	goto loc_825FDF44;
loc_825FDFA8:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fdfd4
	if (cr6.eq) goto loc_825FDFD4;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,2
	r11.s64 = 2;
	// beq 0x825fdfd8
	if (cr0.eq) goto loc_825FDFD8;
loc_825FDFD4:
	// li r11,0
	r11.s64 = 0;
loc_825FDFD8:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_825FDFDC:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x825fe09c
	if (cr6.eq) goto loc_825FE09C;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r31,1
	r31.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// bl 0x825fc5a0
	sub_825FC5A0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fe05c
	if (cr6.eq) goto loc_825FE05C;
	// lwz r30,28(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r28,24(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 24);
loc_825FE01C:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fe05c
	if (!cr0.eq) goto loc_825FE05C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x825fc5a0
	sub_825FC5A0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825fe01c
	if (!cr6.eq) goto loc_825FE01C;
loc_825FE05C:
	// add r11,r31,r23
	r11.u64 = r31.u64 + r23.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(r11.s32, r16.s32, xer);
	// ble cr6,0x825fe09c
	if (!cr6.gt) goto loc_825FE09C;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r11,r24
	r11.s64 = r24.s64 - r11.s64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825fe098
	if (!cr0.eq) goto loc_825FE098;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_825FE098:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
loc_825FE09C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fda50
	sub_825FDA50(ctx, base);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r27,12
	r11.s64 = r27.s64 * 12;
	// add r9,r25,r22
	ctx.r9.u64 = r25.u64 + r22.u64;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// stwx r9,r10,r19
	PPC_STORE_U32(ctx.r10.u32 + r19.u32, ctx.r9.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// li r31,3
	r31.s64 = 3;
loc_825FE0C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825fd648
	sub_825FD648(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// subf r11,r11,r23
	r11.s64 = r23.s64 - r11.s64;
	// addi r23,r11,1
	r23.s64 = r11.s64 + 1;
	// bne 0x825fe0c8
	if (!cr0.eq) goto loc_825FE0C8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fc5a0
	sub_825FC5A0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825fc5a0
	sub_825FC5A0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// beq cr6,0x825fe16c
	if (cr6.eq) goto loc_825FE16C;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x825fe170
	if (cr0.eq) goto loc_825FE170;
loc_825FE16C:
	// li r11,0
	r11.s64 = 0;
loc_825FE170:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825fe1a0
	if (cr6.eq) goto loc_825FE1A0;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r8
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x825fe1a4
	if (cr0.eq) goto loc_825FE1A4;
loc_825FE1A0:
	// li r11,0
	r11.s64 = 0;
loc_825FE1A4:
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// beq 0x825fe1e0
	if (cr0.eq) goto loc_825FE1E0;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fe1d0
	if (cr0.eq) goto loc_825FE1D0;
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// bne cr6,0x825fe1d0
	if (!cr6.eq) goto loc_825FE1D0;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lwz r24,96(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825FE1D0:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825fe09c
	goto loc_825FE09C;
loc_825FE1E0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825fe224
	if (!cr0.eq) goto loc_825FE224;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r24,r26
	r24.u64 = r26.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x825fdf1c
	if (cr6.eq) goto loc_825FDF1C;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825fe09c
	if (cr0.eq) goto loc_825FE09C;
	// b 0x825fdf1c
	goto loc_825FDF1C;
loc_825FE224:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x825fdfdc
	goto loc_825FDFDC;
loc_825FE234:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_825FE23C"))) PPC_WEAK_FUNC(sub_825FE23C);
PPC_FUNC_IMPL(__imp__sub_825FE23C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_825FE240"))) PPC_WEAK_FUNC(sub_825FE240);
PPC_FUNC_IMPL(__imp__sub_825FE240) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r11,12
	r11.s64 = 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r27.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r27.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r24,r27
	r24.u64 = r27.u64;
	// beq cr6,0x825fe448
	if (cr6.eq) goto loc_825FE448;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825fe448
	if (cr6.eq) goto loc_825FE448;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825fe448
	if (cr6.eq) goto loc_825FE448;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825fe448
	if (cr6.eq) goto loc_825FE448;
	// lis r11,16383
	r11.s64 = 1073676288;
	// mulli r25,r4,3
	r25.s64 = ctx.r4.s64 * 3;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x825fe2b8
	if (!cr6.gt) goto loc_825FE2B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825FE2B8:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x825fe2d0
	if (!cr0.eq) goto loc_825FE2D0;
loc_825FE2C4:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x825fe418
	goto loc_825FE418;
loc_825FE2D0:
	// lis r11,10922
	r11.s64 = 715784192;
	// mulli r3,r31,6
	ctx.r3.s64 = r31.s64 * 6;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x825fe2e8
	if (!cr6.gt) goto loc_825FE2E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825FE2E8:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fe2c4
	if (cr6.eq) goto loc_825FE2C4;
	// lis r11,0
	r11.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// ori r29,r11,65535
	r29.u64 = r11.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fcd10
	sub_825FCD10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x825fe418
	if (cr0.lt) goto loc_825FE418;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825fe374
	if (cr6.eq) goto loc_825FE374;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_825FE348:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x825fe35c
	if (!cr6.eq) goto loc_825FE35C;
	// sth r29,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r29.u16);
	// b 0x825fe360
	goto loc_825FE360;
loc_825FE35C:
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
loc_825FE360:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, xer);
	// blt cr6,0x825fe348
	if (cr6.lt) goto loc_825FE348;
loc_825FE374:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r31.u16);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fdaf0
	sub_825FDAF0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x825fe418
	if (cr0.lt) goto loc_825FE418;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825fe418
	if (cr6.eq) goto loc_825FE418;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_825FE3F8:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fe40c
	if (cr6.eq) goto loc_825FE40C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, ctx.r10.u32);
loc_825FE40C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825fe3f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FE3F8;
loc_825FE418:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x825fe468
	goto loc_825FE468;
loc_825FE448:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_825FE468:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_825FE46C"))) PPC_WEAK_FUNC(sub_825FE46C);
PPC_FUNC_IMPL(__imp__sub_825FE46C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FE470"))) PPC_WEAK_FUNC(sub_825FE470);
PPC_FUNC_IMPL(__imp__sub_825FE470) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r11,12
	r11.s64 = 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r27.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r27.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r24,r27
	r24.u64 = r27.u64;
	// beq cr6,0x825fe66c
	if (cr6.eq) goto loc_825FE66C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825fe66c
	if (cr6.eq) goto loc_825FE66C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825fe66c
	if (cr6.eq) goto loc_825FE66C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825fe66c
	if (cr6.eq) goto loc_825FE66C;
	// lis r11,16383
	r11.s64 = 1073676288;
	// mulli r25,r4,3
	r25.s64 = ctx.r4.s64 * 3;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// rlwinm r3,r25,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x825fe4e8
	if (!cr6.gt) goto loc_825FE4E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825FE4E8:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x825fe500
	if (!cr0.eq) goto loc_825FE500;
loc_825FE4F4:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x825fe63c
	goto loc_825FE63C;
loc_825FE500:
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x825fe518
	if (!cr6.gt) goto loc_825FE518;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825FE518:
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fe4f4
	if (cr6.eq) goto loc_825FE4F4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fd158
	sub_825FD158(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x825fe63c
	if (cr0.lt) goto loc_825FE63C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825fe598
	if (cr6.eq) goto loc_825FE598;
	// mr r11,r24
	r11.u64 = r24.u64;
	// subf r8,r24,r26
	ctx.r8.s64 = r26.s64 - r24.s64;
loc_825FE570:
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x825fe584
	if (!cr6.eq) goto loc_825FE584;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x825fe588
	goto loc_825FE588;
loc_825FE584:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825FE588:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, xer);
	// blt cr6,0x825fe570
	if (cr6.lt) goto loc_825FE570;
loc_825FE598:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r27.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825fdea8
	sub_825FDEA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x825fe63c
	if (cr0.lt) goto loc_825FE63C;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825fe63c
	if (cr6.eq) goto loc_825FE63C;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_825FE61C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825fe630
	if (cr6.eq) goto loc_825FE630;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, ctx.r10.u32);
loc_825FE630:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x825fe61c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FE61C;
loc_825FE63C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x825fe68c
	goto loc_825FE68C;
loc_825FE66C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_825FE68C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_825FE690"))) PPC_WEAK_FUNC(sub_825FE690);
PPC_FUNC_IMPL(__imp__sub_825FE690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FE694"))) PPC_WEAK_FUNC(sub_825FE694);
PPC_FUNC_IMPL(__imp__sub_825FE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE698"))) PPC_WEAK_FUNC(sub_825FE698);
PPC_FUNC_IMPL(__imp__sub_825FE698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bne cr6,0x825fe6a8
	if (!cr6.eq) {
		sub_825FE6A8(ctx, base);
		return;
	}
	// b 0x825fe240
	sub_825FE240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE6A8"))) PPC_WEAK_FUNC(sub_825FE6A8);
PPC_FUNC_IMPL(__imp__sub_825FE6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fe470
	sub_825FE470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE6AC"))) PPC_WEAK_FUNC(sub_825FE6AC);
PPC_FUNC_IMPL(__imp__sub_825FE6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE6B0"))) PPC_WEAK_FUNC(sub_825FE6B0);
PPC_FUNC_IMPL(__imp__sub_825FE6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r4,-4
	r11.s64 = ctx.r4.s64 + -4;
loc_825FE6C4:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	f0.f64 = double(temp.f32);
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[4] |= ((v63.u32[0]&0x80000000)>>16);
	temp.u32 = (v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[5] |= ((v63.u32[1]&0x80000000)>>16);
	temp.u32 = (v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[6] |= ((v63.u32[2]&0x80000000)>>16);
	temp.u32 = (v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v0.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v0.u16[7] |= ((v63.u32[3]&0x80000000)>>16);
	// vsplth v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x825fe6c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FE6C4;
}

__attribute__((alias("__imp__sub_825FE700"))) PPC_WEAK_FUNC(sub_825FE700);
PPC_FUNC_IMPL(__imp__sub_825FE700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FE704"))) PPC_WEAK_FUNC(sub_825FE704);
PPC_FUNC_IMPL(__imp__sub_825FE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE708"))) PPC_WEAK_FUNC(sub_825FE708);
PPC_FUNC_IMPL(__imp__sub_825FE708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r4,-2
	r11.s64 = ctx.r4.s64 + -2;
loc_825FE71C:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lhzu r8,2(r11)
	ea = 2 + r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r1,-12
	ctx.r6.s64 = ctx.r1.s64 + -12;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vupkd3d128 v63,v63,12
	__builtin_trap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// stvewx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825fe71c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FE71C;
}

__attribute__((alias("__imp__sub_825FE758"))) PPC_WEAK_FUNC(sub_825FE758);
PPC_FUNC_IMPL(__imp__sub_825FE758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FE75C"))) PPC_WEAK_FUNC(sub_825FE75C);
PPC_FUNC_IMPL(__imp__sub_825FE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE760"))) PPC_WEAK_FUNC(sub_825FE760);
PPC_FUNC_IMPL(__imp__sub_825FE760) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,11
	r11.s64 = 11;
	// lvx128 v63,r0,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,30176
	ctx.r10.s64 = ctx.r10.s64 + 30176;
	// lvx128 v62,r4,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v62,v63,v62,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r10
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v63,v62,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v62.f32), 0xEF));
	// vcmpgefp128. v61,v61,v63
	_mm_store_ps(v61.f32, _mm_cmpge_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	cr6.setFromMask(_mm_load_ps(v61.f32), 0xF);
	// bge cr6,0x825fe794
	if (!cr6.lt) goto loc_825FE794;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// b 0x825fe7b4
	goto loc_825FE7B4;
loc_825FE794:
	// vspltisw128 v61,1
	_mm_store_si128((__m128i*)v61.u32, _mm_set1_epi32(int(0x1)));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v63.f32))));
	// vcsxwfp128 v11,v61,1
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v61.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v63,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v11,v13,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v63,v62,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v0.f32)));
loc_825FE7B4:
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// li r11,4
	r11.s64 = 4;
	// vspltw128 v61,v63,1
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// li r10,8
	ctx.r10.s64 = 8;
	// vspltw128 v63,v63,2
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
}

__attribute__((alias("__imp__sub_825FE7D4"))) PPC_WEAK_FUNC(sub_825FE7D4);
PPC_FUNC_IMPL(__imp__sub_825FE7D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FE7D8"))) PPC_WEAK_FUNC(sub_825FE7D8);
PPC_FUNC_IMPL(__imp__sub_825FE7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltisw128 v62,1
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lvx128 v63,r0,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r7,11
	ctx.r7.s64 = 11;
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)v58.u32, _mm_set1_epi32(int(0x0)));
	// vcsxwfp128 v10,v62,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v62.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,3792(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25596);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// fmadds f10,f1,f13,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + f0.f64));
	// lfs f12,11152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11152);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v62,r4,r7
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vupkd3d128 v57,v58,4
	temp.f32 = 3.0f;
	temp.s32 += v58.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v58.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v57 = vTemp;
	// lfs f11,15384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15384);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r9,r9,2560
	ctx.r9.s64 = ctx.r9.s64 + 2560;
	// addi r11,r11,2512
	r11.s64 = r11.s64 + 2512;
	// vmsum3fp128 v56,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v56.f32, _mm_dp_ps(_mm_load_ps(v63.f32), _mm_load_ps(v63.f32), 0xEF));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fabs f13,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// addi r8,r8,2528
	ctx.r8.s64 = ctx.r8.s64 + 2528;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r7,2576
	ctx.r8.s64 = ctx.r7.s64 + 2576;
	// li r7,16
	ctx.r7.s64 = 16;
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v56
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v56.f32))));
	// vor128 v11,v56,v56
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v56.u8));
	// vmulfp128 v13,v56,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v56,v58
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(v56.f32), _mm_load_ps(v58.f32)));
	// fctidz f12,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// vmulfp128 v12,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// fcfid f12,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(ctx.f12.s64);
	// vnmsubfp v10,v13,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// frsp f12,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// vmaddfp v0,v0,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// fnmsubs f13,f12,f11,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// fneg f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vrlimi128 v57,v13,14,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 14));
	// fsel f0,f10,f0,f13
	f0.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f0,-44(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-36(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v58,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v56,v63,1
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vmsum4fp128 v62,v58,v62
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v58.f32), _mm_load_ps(v62.f32), 0xFF));
	// vspltw128 v55,v58,3
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vspltw128 v63,v63,2
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vmulfp128 v56,v58,v56
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v63,v55,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v62,v56,v61
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v56.f32), _mm_load_ps(v61.f32), 0xFF));
	// vmulfp128 v61,v56,v63
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v58,v58,v63
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v63.f32)));
	// vmsum4fp128 v60,v61,v60
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v60.f32), 0xFF));
	// stvx128 v62,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v61,v63
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v61,v58,v63
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v63.f32)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r5,2592
	ctx.r10.s64 = ctx.r5.s64 + 2592;
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// vmsum4fp128 v60,v58,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v58.f32), _mm_load_ps(v59.f32), 0xFF));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f0,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	f0.f64 = double(temp.f32);
	// addi r11,r11,2544
	r11.s64 = r11.s64 + 2544;
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vmsum4fp128 v61,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v61.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32), 0xFF));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v63,v62,v63
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32), 0xFF));
	// stvx128 v60,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,-40(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-36(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f0,-44(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-48(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v57,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(v63.f32)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r3,r7
	ea = ctx.r3.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
}

__attribute__((alias("__imp__sub_825FE9A0"))) PPC_WEAK_FUNC(sub_825FE9A0);
PPC_FUNC_IMPL(__imp__sub_825FE9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FE9A4"))) PPC_WEAK_FUNC(sub_825FE9A4);
PPC_FUNC_IMPL(__imp__sub_825FE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FE9A8"))) PPC_WEAK_FUNC(sub_825FE9A8);
PPC_FUNC_IMPL(__imp__sub_825FE9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,9345
	ctx.r4.s64 = 612433920;
}

__attribute__((alias("__imp__sub_825FE9AC"))) PPC_WEAK_FUNC(sub_825FE9AC);
PPC_FUNC_IMPL(__imp__sub_825FE9AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241a3f0
	sub_8241A3F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FE9B0"))) PPC_WEAK_FUNC(sub_825FE9B0);
PPC_FUNC_IMPL(__imp__sub_825FE9B0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-13660(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825fea88
	if (!cr6.eq) goto loc_825FEA88;
	// li r11,1
	r11.s64 = 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,-13660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13660, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825fea10
	if (cr6.eq) goto loc_825FEA10;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825fea10
	if (cr6.eq) goto loc_825FEA10;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x825fea14
	if (!cr6.eq) goto loc_825FEA14;
loc_825FEA10:
	// li r29,1
	r29.s64 = 1;
loc_825FEA14:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825fea28
	if (cr6.eq) goto loc_825FEA28;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825FEA28:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825fea44
	if (cr6.eq) goto loc_825FEA44;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x825fea44
	if (cr6.eq) goto loc_825FEA44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825FEA44:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x825fea88
	if (cr6.eq) goto loc_825FEA88;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,30608
	ctx.r3.s64 = r11.s64 + 30608;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,30512
	ctx.r3.s64 = r11.s64 + 30512;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,30424
	ctx.r3.s64 = r11.s64 + 30424;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,30372
	ctx.r3.s64 = r11.s64 + 30372;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_825FEA88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825FEA8C"))) PPC_WEAK_FUNC(sub_825FEA8C);
PPC_FUNC_IMPL(__imp__sub_825FEA8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825FEA90"))) PPC_WEAK_FUNC(sub_825FEA90);
PPC_FUNC_IMPL(__imp__sub_825FEA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEAA4"))) PPC_WEAK_FUNC(sub_825FEAA4);
PPC_FUNC_IMPL(__imp__sub_825FEAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FEAA8"))) PPC_WEAK_FUNC(sub_825FEAA8);
PPC_FUNC_IMPL(__imp__sub_825FEAA8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// bne cr6,0x825feae0
	if (!cr6.eq) goto loc_825FEAE0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825FEAE0:
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

__attribute__((alias("__imp__sub_825FEAF4"))) PPC_WEAK_FUNC(sub_825FEAF4);
PPC_FUNC_IMPL(__imp__sub_825FEAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEAF8"))) PPC_WEAK_FUNC(sub_825FEAF8);
PPC_FUNC_IMPL(__imp__sub_825FEAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825feb38
	if (!cr0.eq) goto loc_825FEB38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825feb40
	goto loc_825FEB40;
loc_825FEB38:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FEB40:
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

__attribute__((alias("__imp__sub_825FEB54"))) PPC_WEAK_FUNC(sub_825FEB54);
PPC_FUNC_IMPL(__imp__sub_825FEB54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEB58"))) PPC_WEAK_FUNC(sub_825FEB58);
PPC_FUNC_IMPL(__imp__sub_825FEB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,30332
	ctx.r10.s64 = ctx.r10.s64 + 30332;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_825FEB7C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825feb9c
	if (!cr0.eq) goto loc_825FEB9C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825feb7c
	if (!cr6.eq) goto loc_825FEB7C;
loc_825FEB9C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825febdc
	if (cr0.eq) goto loc_825FEBDC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r10,30300
	ctx.r10.s64 = ctx.r10.s64 + 30300;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_825FEBB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825febd4
	if (!cr0.eq) goto loc_825FEBD4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825febb4
	if (!cr6.eq) goto loc_825FEBB4;
loc_825FEBD4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825febf8
	if (!cr0.eq) goto loc_825FEBF8;
loc_825FEBDC:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fec00
	goto loc_825FEC00;
loc_825FEBF8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_825FEC00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825FEC0C"))) PPC_WEAK_FUNC(sub_825FEC0C);
PPC_FUNC_IMPL(__imp__sub_825FEC0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEC10"))) PPC_WEAK_FUNC(sub_825FEC10);
PPC_FUNC_IMPL(__imp__sub_825FEC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,30696
	r11.s64 = r11.s64 + 30696;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fec58
	if (cr0.eq) goto loc_825FEC58;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825FEC58:
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

__attribute__((alias("__imp__sub_825FEC70"))) PPC_WEAK_FUNC(sub_825FEC70);
PPC_FUNC_IMPL(__imp__sub_825FEC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEC74"))) PPC_WEAK_FUNC(sub_825FEC74);
PPC_FUNC_IMPL(__imp__sub_825FEC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FEC78"))) PPC_WEAK_FUNC(sub_825FEC78);
PPC_FUNC_IMPL(__imp__sub_825FEC78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825feca0
	if (!cr6.eq) goto loc_825FECA0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x825fed3c
	goto loc_825FED3C;
loc_825FECA0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825fecdc
	if (cr0.eq) goto loc_825FECDC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,30696
	ctx.r10.s64 = ctx.r10.s64 + 30696;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x825fece0
	goto loc_825FECE0;
loc_825FECDC:
	// li r31,0
	r31.s64 = 0;
loc_825FECE0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825fecf4
	if (!cr6.eq) goto loc_825FECF4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825fed3c
	goto loc_825FED3C;
loc_825FECF4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x825fed34
	if (!cr0.lt) goto loc_825FED34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x825fed3c
	goto loc_825FED3C;
loc_825FED34:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FED3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825FED40"))) PPC_WEAK_FUNC(sub_825FED40);
PPC_FUNC_IMPL(__imp__sub_825FED40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825FED44"))) PPC_WEAK_FUNC(sub_825FED44);
PPC_FUNC_IMPL(__imp__sub_825FED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FED48"))) PPC_WEAK_FUNC(sub_825FED48);
PPC_FUNC_IMPL(__imp__sub_825FED48) {
	PPC_FUNC_PROLOGUE();
	// b 0x825fec78
	sub_825FEC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FED48"))) PPC_WEAK_FUNC(sub_825FED48);
PPC_FUNC_IMPL(__imp__sub_825FED48) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825FED4C"))) PPC_WEAK_FUNC(sub_825FED4C);
PPC_FUNC_IMPL(__imp__sub_825FED4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FED50"))) PPC_WEAK_FUNC(sub_825FED50);
PPC_FUNC_IMPL(__imp__sub_825FED50) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// rlwinm. r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x825fed98
	if (cr0.eq) goto loc_825FED98;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825FED98:
	// rlwinm. r10,r30,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825fedac
	if (cr0.eq) goto loc_825FEDAC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_825FEDAC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r29,0,6,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3FFFFFC;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// rlwinm r11,r10,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// ori r10,r28,3
	ctx.r10.u64 = r28.u64 | 3;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FEDE0"))) PPC_WEAK_FUNC(sub_825FEDE0);
PPC_FUNC_IMPL(__imp__sub_825FEDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825FEDE4"))) PPC_WEAK_FUNC(sub_825FEDE4);
PPC_FUNC_IMPL(__imp__sub_825FEDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FEDE8"))) PPC_WEAK_FUNC(sub_825FEDE8);
PPC_FUNC_IMPL(__imp__sub_825FEDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm. r9,r30,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x825fee40
	if (cr0.eq) goto loc_825FEE40;
	// lis r11,32
	r11.s64 = 2097152;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_825FEE40:
	// rlwinm. r11,r30,0,22,22
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fee54
	if (cr0.eq) goto loc_825FEE54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_825FEE54:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r29,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0xE0000000;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825FEE74"))) PPC_WEAK_FUNC(sub_825FEE74);
PPC_FUNC_IMPL(__imp__sub_825FEE74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825FEE78"))) PPC_WEAK_FUNC(sub_825FEE78);
PPC_FUNC_IMPL(__imp__sub_825FEE78) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825FEEA4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825feea4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FEEA4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// bl 0x825d4fa0
	sub_825D4FA0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825feed4
	if (cr6.eq) goto loc_825FEED4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825FEED4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825feee4
	if (cr6.eq) goto loc_825FEEE4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825FEEE4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_825FEEFC"))) PPC_WEAK_FUNC(sub_825FEEFC);
PPC_FUNC_IMPL(__imp__sub_825FEEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FEF00"))) PPC_WEAK_FUNC(sub_825FEF00);
PPC_FUNC_IMPL(__imp__sub_825FEF00) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// clrlwi r3,r8,26
	ctx.r3.u64 = ctx.r8.u32 & 0x3F;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x825fef90
	if (cr6.eq) goto loc_825FEF90;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x825fef70
	if (!cr6.eq) goto loc_825FEF70;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825fef90
	if (cr6.eq) goto loc_825FEF90;
loc_825FEF70:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825fefac
	if (cr6.eq) goto loc_825FEFAC;
loc_825FEF90:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825fefac
	if (!cr6.eq) goto loc_825FEFAC;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,380(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r9,r11,r10
	ctx.r9.u32 = r11.u32 / ctx.r10.u32;
	// b 0x825fefb0
	goto loc_825FEFB0;
loc_825FEFAC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825FEFB0:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_825FEFC0:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x825fefc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825FEFC0;
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// lis r11,-1
	r11.s64 = -65536;
	// rlwinm. r9,r31,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r11,3
	r11.s64 = 3;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// rlwimi r9,r10,0,0,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFF000) | (ctx.r9.u64 & 0xFFFFFFFF00000FFF);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// beq 0x825ff05c
	if (cr0.eq) goto loc_825FF05C;
	// lis r11,32
	r11.s64 = 2097152;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
loc_825FF05C:
	// rlwinm. r9,r31,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825ff06c
	if (cr0.eq) goto loc_825FF06C;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
loc_825FF06C:
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825ff0b4
	if (cr6.eq) goto loc_825FF0B4;
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825ff0a0
	if (!cr6.eq) goto loc_825FF0A0;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r31,r11,0,0,19
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// rlwimi r11,r9,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// b 0x825ff0c0
	goto loc_825FF0C0;
loc_825FF0A0:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// b 0x825ff0c4
	goto loc_825FF0C4;
loc_825FF0B4:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
loc_825FF0C0:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
loc_825FF0C4:
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ff0d4
	if (cr6.eq) goto loc_825FF0D4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_825FF0D4:
	// lwz r11,412(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ff0e4
	if (cr6.eq) goto loc_825FF0E4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825FF0E4:
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ff0fc
	if (cr6.eq) goto loc_825FF0FC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825FF0FC:
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825FF104"))) PPC_WEAK_FUNC(sub_825FF104);
PPC_FUNC_IMPL(__imp__sub_825FF104) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825FF108"))) PPC_WEAK_FUNC(sub_825FF108);
PPC_FUNC_IMPL(__imp__sub_825FF108) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r31,292(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r30,284(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r29,276(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r28,3
	r28.s64 = 3;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r27,0
	r27.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825FF170"))) PPC_WEAK_FUNC(sub_825FF170);
PPC_FUNC_IMPL(__imp__sub_825FF170) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825FF174"))) PPC_WEAK_FUNC(sub_825FF174);
PPC_FUNC_IMPL(__imp__sub_825FF174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF178"))) PPC_WEAK_FUNC(sub_825FF178);
PPC_FUNC_IMPL(__imp__sub_825FF178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lwz r30,268(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r29,260(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825FF1DC"))) PPC_WEAK_FUNC(sub_825FF1DC);
PPC_FUNC_IMPL(__imp__sub_825FF1DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825FF1E0"))) PPC_WEAK_FUNC(sub_825FF1E0);
PPC_FUNC_IMPL(__imp__sub_825FF1E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r29,284(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r28,276(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825FF248"))) PPC_WEAK_FUNC(sub_825FF248);
PPC_FUNC_IMPL(__imp__sub_825FF248) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825FF24C"))) PPC_WEAK_FUNC(sub_825FF24C);
PPC_FUNC_IMPL(__imp__sub_825FF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF250"))) PPC_WEAK_FUNC(sub_825FF250);
PPC_FUNC_IMPL(__imp__sub_825FF250) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r29,316(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r30,19
	r30.s64 = 19;
	// lwz r27,308(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r28,0
	r28.s64 = 0;
	// lwz r26,300(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r25,292(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825FF2AC"))) PPC_WEAK_FUNC(sub_825FF2AC);
PPC_FUNC_IMPL(__imp__sub_825FF2AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825FF2B0"))) PPC_WEAK_FUNC(sub_825FF2B0);
PPC_FUNC_IMPL(__imp__sub_825FF2B0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,316(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lwz r29,308(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r11,0
	r11.s64 = 0;
	// lwz r27,300(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r28,17
	r28.s64 = 17;
	// lwz r26,292(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825FF308"))) PPC_WEAK_FUNC(sub_825FF308);
PPC_FUNC_IMPL(__imp__sub_825FF308) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825FF30C"))) PPC_WEAK_FUNC(sub_825FF30C);
PPC_FUNC_IMPL(__imp__sub_825FF30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF310"))) PPC_WEAK_FUNC(sub_825FF310);
PPC_FUNC_IMPL(__imp__sub_825FF310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x825ff360
	if (cr6.eq) goto loc_825FF360;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// beq cr6,0x825ff360
	if (cr6.eq) goto loc_825FF360;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwimi r11,r10,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwimi r8,r9,17,0,14
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0xFFFE0000) | (ctx.r8.u64 & 0xFFFFFFFF0001FFFF);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
loc_825FF360:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r10,15,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
}

__attribute__((alias("__imp__sub_825FF36C"))) PPC_WEAK_FUNC(sub_825FF36C);
PPC_FUNC_IMPL(__imp__sub_825FF36C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ff330
	// ERROR 825FF330
	return;
}

__attribute__((alias("__imp__sub_825FF370"))) PPC_WEAK_FUNC(sub_825FF370);
PPC_FUNC_IMPL(__imp__sub_825FF370) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r11,r10,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// rlwimi r11,r10,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x825ff3c0
	if (!cr6.gt) goto loc_825FF3C0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r10,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// rlwimi r11,r10,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_825FF3C0:
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

__attribute__((alias("__imp__sub_825FF3D4"))) PPC_WEAK_FUNC(sub_825FF3D4);
PPC_FUNC_IMPL(__imp__sub_825FF3D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FF3D8"))) PPC_WEAK_FUNC(sub_825FF3D8);
PPC_FUNC_IMPL(__imp__sub_825FF3D8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bgt cr6,0x825ff444
	if (cr6.gt) goto loc_825FF444;
	// beq cr6,0x825ff434
	if (cr6.eq) goto loc_825FF434;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825ff420
	if (cr6.eq) goto loc_825FF420;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825ff488
	if (cr6.eq) goto loc_825FF488;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825ff464
	if (cr6.eq) goto loc_825FF464;
	// b 0x825ff494
	goto loc_825FF494;
loc_825FF420:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// rlwimi r11,r10,0,30,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x825ff490
	goto loc_825FF490;
loc_825FF434:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x825ff494
	goto loc_825FF494;
loc_825FF444:
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x825ff488
	if (cr6.eq) goto loc_825FF488;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x825ff488
	if (cr6.eq) goto loc_825FF488;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// ble cr6,0x825ff494
	if (!cr6.gt) goto loc_825FF494;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bgt cr6,0x825ff494
	if (cr6.gt) goto loc_825FF494;
loc_825FF464:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r11,r30
	ctx.r5.u64 = r11.u64 & r30.u64;
	// bl 0x825ff370
	sub_825FF370(ctx, base);
	// b 0x825ff494
	goto loc_825FF494;
loc_825FF488:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
loc_825FF490:
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_825FF494:
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

__attribute__((alias("__imp__sub_825FF4A8"))) PPC_WEAK_FUNC(sub_825FF4A8);
PPC_FUNC_IMPL(__imp__sub_825FF4A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FF4AC"))) PPC_WEAK_FUNC(sub_825FF4AC);
PPC_FUNC_IMPL(__imp__sub_825FF4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF4B0"))) PPC_WEAK_FUNC(sub_825FF4B0);
PPC_FUNC_IMPL(__imp__sub_825FF4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bne cr6,0x825ff510
	if (!cr6.eq) goto loc_825FF510;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,21,21,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7FF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,22,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3FF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,21,21,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7FF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,10,22,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3FF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
loc_825FF510:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825ff550
	if (!cr6.eq) goto loc_825FF550;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
loc_825FF550:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,19,19,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1FFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,19,19,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_825FF598"))) PPC_WEAK_FUNC(sub_825FF598);
PPC_FUNC_IMPL(__imp__sub_825FF598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FF59C"))) PPC_WEAK_FUNC(sub_825FF59C);
PPC_FUNC_IMPL(__imp__sub_825FF59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF5A0"))) PPC_WEAK_FUNC(sub_825FF5A0);
PPC_FUNC_IMPL(__imp__sub_825FF5A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ff628
	if (!cr6.eq) goto loc_825FF628;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x825d3770
	sub_825D3770(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// clrlwi r6,r11,26
	ctx.r6.u64 = r11.u32 & 0x3F;
	// bl 0x82600b20
	sub_82600B20(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825ff618
	if (!cr0.eq) goto loc_825FF618;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825ff65c
	goto loc_825FF65C;
loc_825FF618:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x82600a80
	sub_82600A80(ctx, base);
loc_825FF628:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826035d8
	sub_826035D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825ff658
	if (cr6.eq) goto loc_825FF658;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825FF658:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FF65C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825FF660"))) PPC_WEAK_FUNC(sub_825FF660);
PPC_FUNC_IMPL(__imp__sub_825FF660) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825FF664"))) PPC_WEAK_FUNC(sub_825FF664);
PPC_FUNC_IMPL(__imp__sub_825FF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FF668"))) PPC_WEAK_FUNC(sub_825FF668);
PPC_FUNC_IMPL(__imp__sub_825FF668) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r11.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(r29.u32, 24, xer);
	// li r5,24
	ctx.r5.s64 = 24;
	// bgt cr6,0x825ff6bc
	if (cr6.gt) goto loc_825FF6BC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_825FF6BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// not r9,r30
	ctx.r9.u64 = ~r30.u64;
	// rlwinm r8,r11,17,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x7;
	// rlwinm r10,r11,17,26,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x38;
	// rlwinm r6,r11,20,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r11,23,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r6,r11,25,30,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x3;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r3,r11,31,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x3;
	// rlwimi r5,r10,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwinm r8,r11,29,30,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,22,10,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r31,r7,23,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	r29.u64 = r30.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,11,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xF;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r8,r7,29,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x3F;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	// or r6,r11,r3
	ctx.r6.u64 = r11.u64 | ctx.r3.u64;
	// rlwinm r11,r7,13,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x2;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// or r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 | r31.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwimi r29,r10,2,0,29
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r7,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// srawi r29,r4,26
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFFFF) != 0);
	r29.s64 = ctx.r4.s32 >> 26;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x825ff7a4
	if (!cr6.eq) goto loc_825FF7A4;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r3,r7,2,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x10;
	// rlwinm r4,r5,19,19,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x1FFF;
	// clrlwi r7,r5,19
	ctx.r7.u64 = ctx.r5.u32 & 0x1FFF;
	// rlwinm r5,r5,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3F;
	// ori r31,r3,3
	r31.u64 = ctx.r3.u64 | 3;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x825ff808
	goto loc_825FF808;
loc_825FF7A4:
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bne cr6,0x825ff7d0
	if (!cr6.eq) goto loc_825FF7D0;
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// rlwinm r5,r7,19,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 19) & 0x1FFF;
	// rlwinm r7,r7,6,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x3F;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + r11.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + r11.u64;
	// li r31,18
	r31.s64 = 18;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// b 0x825ff80c
	goto loc_825FF80C;
loc_825FF7D0:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bne cr6,0x825ff7f8
	if (!cr6.eq) goto loc_825FF7F8;
	// clrlwi r4,r7,21
	ctx.r4.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r5,r7,21,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x7FF;
	// rlwinm r7,r7,10,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0x3FF;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + r11.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + r11.u64;
	// li r31,17
	r31.s64 = 17;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + r11.u64;
	// b 0x825ff80c
	goto loc_825FF80C;
loc_825FF7F8:
	// li r31,20
	r31.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
loc_825FF808:
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + r11.u64;
loc_825FF80C:
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r23,340(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x825fef00
	sub_825FEF00(ctx, base);
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// rlwimi r30,r11,0,30,21
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFFFC03) | (r30.u64 & 0x3FC);
	// stw r30,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r30.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825FF84C"))) PPC_WEAK_FUNC(sub_825FF84C);
PPC_FUNC_IMPL(__imp__sub_825FF84C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825FF850"))) PPC_WEAK_FUNC(sub_825FF850);
PPC_FUNC_IMPL(__imp__sub_825FF850) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r31,192(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// clrlwi r31,r31,20
	r31.u64 = r31.u32 & 0xFFF;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825FF8EC"))) PPC_WEAK_FUNC(sub_825FF8EC);
PPC_FUNC_IMPL(__imp__sub_825FF8EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825FF8F0"))) PPC_WEAK_FUNC(sub_825FF8F0);
PPC_FUNC_IMPL(__imp__sub_825FF8F0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi r27,r10,26
	r27.u64 = ctx.r10.u32 & 0x3F;
	// lwz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r7,r27,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// rlwinm r30,r9,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lbzx r25,r7,r11
	r25.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,23,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x3;
	// rlwinm r24,r10,1,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r11,r29,r9
	r11.s64 = ctx.r9.s64 - r29.s64;
	// subf r10,r29,r8
	ctx.r10.s64 = ctx.r8.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r7,r11,32
	ctx.r7.s64 = r11.s64 + 32;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// bne cr6,0x825ffa10
	if (!cr6.eq) goto loc_825FFA10;
	// li r11,1
	r11.s64 = 1;
	// slw r10,r11,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// slw r7,r11,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// ble cr6,0x825ff9c0
	if (!cr6.gt) goto loc_825FF9C0;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bgt cr6,0x825ff9d4
	if (cr6.gt) goto loc_825FF9D4;
loc_825FF9C0:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825ff9d4
	if (cr0.eq) goto loc_825FF9D4;
	// mr r23,r11
	r23.u64 = r11.u64;
	// b 0x825ff9e4
	goto loc_825FF9E4;
loc_825FF9D4:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_825FF9E4:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r11,15,18,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x3FE0;
	// b 0x825ffb30
	goto loc_825FFB30;
loc_825FFA10:
	// subf r11,r29,r9
	r11.s64 = ctx.r9.s64 - r29.s64;
	// subf r10,r29,r8
	ctx.r10.s64 = ctx.r8.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825ffa44
	if (cr6.lt) goto loc_825FFA44;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_825FFA44:
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// li r11,1
	r11.s64 = 1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addme r9,r9
	temp.u64 = ctx.r9.u64 + xer.ca - 1;
	xer.ca = (ctx.r9.u64 > temp.u64) || (ctx.r9.u64 == temp.u64 && xer.ca);
	ctx.r9.u64 = temp.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x825ffa9c
	if (cr6.lt) goto loc_825FFA9C;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825ffa9c
	if (cr0.eq) goto loc_825FFA9C;
	// mr r23,r11
	r23.u64 = r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_825FFA78:
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// bne cr6,0x825ffaa4
	if (!cr6.eq) goto loc_825FFAA4;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// b 0x825ffaa8
	goto loc_825FFAA8;
loc_825FFA9C:
	// li r23,0
	r23.s64 = 0;
	// b 0x825ffa78
	goto loc_825FFA78;
loc_825FFAA4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825FFAA8:
	// subf r8,r28,r7
	ctx.r8.s64 = ctx.r7.s64 - r28.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r28,r6
	ctx.r7.s64 = ctx.r6.s64 - r28.s64;
	// subf r5,r10,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r4,r10,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addc r6,r5,r6
	xer.ca = (ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32);
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// xoris r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 ^ 2147483648;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - r28.s64;
	// addc r5,r4,r5
	xer.ca = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32);
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// xoris r4,r10,32768
	ctx.r4.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addc r10,r10,r4
	xer.ca = (ctx.r10.u32 + ctx.r4.u32 < ctx.r10.u32);
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// slw r9,r11,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r11,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825FFB30:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825ffb3c
	if (cr6.eq) goto loc_825FFB3C;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_825FFB3C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x825ffb4c
	if (cr6.eq) goto loc_825FFB4C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
loc_825FFB4C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825ffb58
	if (cr6.eq) goto loc_825FFB58;
	// stw r24,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r24.u32);
loc_825FFB58:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x825ffb64
	if (cr6.eq) goto loc_825FFB64;
	// stw r23,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r23.u32);
loc_825FFB64:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825FFB68"))) PPC_WEAK_FUNC(sub_825FFB68);
PPC_FUNC_IMPL(__imp__sub_825FFB68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825FFB6C"))) PPC_WEAK_FUNC(sub_825FFB6C);
PPC_FUNC_IMPL(__imp__sub_825FFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFB70"))) PPC_WEAK_FUNC(sub_825FFB70);
PPC_FUNC_IMPL(__imp__sub_825FFB70) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825ffd88
	if (cr6.eq) goto loc_825FFD88;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x825ffce8
	if (cr6.eq) goto loc_825FFCE8;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// beq cr6,0x825ffca8
	if (cr6.eq) goto loc_825FFCA8;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x825ffc78
	if (cr6.eq) goto loc_825FFC78;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x825ffc38
	if (cr6.eq) goto loc_825FFC38;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x825ffc0c
	if (cr6.eq) goto loc_825FFC0C;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bne cr6,0x825fff94
	if (!cr6.eq) goto loc_825FFF94;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lwz r11,328(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// b 0x825ffdbc
	goto loc_825FFDBC;
loc_825FFC0C:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r9,272(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r11,296(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// b 0x825ffdb0
	goto loc_825FFDB0;
loc_825FFC38:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// b 0x825ffdc0
	goto loc_825FFDC0;
loc_825FFC78:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5320
	sub_825D5320(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// b 0x825ffdb8
	goto loc_825FFDB8;
loc_825FFCA8:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5648
	sub_825D5648(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r27,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r28,r11,4,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// b 0x825ffdc0
	goto loc_825FFDC0;
loc_825FFCE8:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5588
	sub_825D5588(ctx, base);
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// li r11,1
	r11.s64 = 1;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r7,r7,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825ffd38
	if (cr0.eq) goto loc_825FFD38;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r28,r11,4,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// b 0x825ffdc0
	goto loc_825FFDC0;
loc_825FFD38:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// addi r7,r7,2624
	ctx.r7.s64 = ctx.r7.s64 + 2624;
	// lbzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x825fff94
	goto loc_825FFF94;
loc_825FFD88:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r9,240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
loc_825FFDB0:
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
loc_825FFDB8:
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_825FFDBC:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_825FFDC0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// addi r11,r10,2624
	r11.s64 = ctx.r10.s64 + 2624;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r11,r3,r11
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r27.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825ff8f0
	sub_825FF8F0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825ffe80
	if (!cr6.eq) goto loc_825FFE80;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x825ffe80
	if (!cr6.eq) goto loc_825FFE80;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825ffe80
	if (!cr0.eq) goto loc_825FFE80;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825ffe80
	if (!cr0.eq) goto loc_825FFE80;
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825ffe80
	if (!cr0.eq) goto loc_825FFE80;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825ffe80
	if (!cr0.eq) goto loc_825FFE80;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825ffe80
	if (!cr0.eq) goto loc_825FFE80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// b 0x825ffe84
	goto loc_825FFE84;
loc_825FFE80:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825FFE84:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne cr6,0x825ffec4
	if (!cr6.eq) goto loc_825FFEC4;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bgt cr6,0x825ffec4
	if (cr6.gt) goto loc_825FFEC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825ffee4
	if (cr6.eq) goto loc_825FFEE4;
loc_825FFEC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x825ffee4
	if (cr6.eq) goto loc_825FFEE4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_825FFEE4:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// rlwinm r11,r11,13,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r11,26
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFF) != 0);
	r11.s64 = r11.s32 >> 26;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq cr6,0x825fff08
	if (cr6.eq) goto loc_825FFF08;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_825FFF08:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825fff20
	if (cr6.eq) goto loc_825FFF20;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_825FFF20:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825fff38
	if (cr0.eq) goto loc_825FFF38;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_825FFF38:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// twllei r30,0
	if (r30.u32 <= 0) __builtin_debugtrap();
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + r30.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// divwu r11,r9,r11
	r11.u32 = ctx.r9.u32 / r11.u32;
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / r30.u32;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_825FFF94:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_825FFF98"))) PPC_WEAK_FUNC(sub_825FFF98);
PPC_FUNC_IMPL(__imp__sub_825FFF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825FFF9C"))) PPC_WEAK_FUNC(sub_825FFF9C);
PPC_FUNC_IMPL(__imp__sub_825FFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFFA0"))) PPC_WEAK_FUNC(sub_825FFFA0);
PPC_FUNC_IMPL(__imp__sub_825FFFA0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825FFFA0"))) PPC_WEAK_FUNC(sub_825FFFA0);
PPC_FUNC_IMPL(__imp__sub_825FFFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ffb70
	sub_825FFB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825FFFA4"))) PPC_WEAK_FUNC(sub_825FFFA4);
PPC_FUNC_IMPL(__imp__sub_825FFFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825FFFA8"))) PPC_WEAK_FUNC(sub_825FFFA8);
PPC_FUNC_IMPL(__imp__sub_825FFFA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r29,r11,1,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r28,r29,1,0,30
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r28,r9
	r11.s64 = ctx.r9.s64 - r28.s64;
	// subf r10,r28,r8
	ctx.r10.s64 = ctx.r8.s64 - r28.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82600014
	if (cr6.lt) goto loc_82600014;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82600014:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - r28.s64;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// subf r9,r28,r8
	ctx.r9.s64 = ctx.r8.s64 - r28.s64;
	// addme r8,r7
	temp.u64 = ctx.r7.u64 + xer.ca - 1;
	xer.ca = (ctx.r7.u64 > temp.u64) || (ctx.r7.u64 == temp.u64 && xer.ca);
	ctx.r8.u64 = temp.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// rlwinm r7,r8,0,21,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x600;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// subf r9,r9,r29
	ctx.r9.s64 = r29.s64 - ctx.r9.s64;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r7,1024
	cr6.compare<uint32_t>(ctx.r7.u32, 1024, xer);
	// bne cr6,0x82600080
	if (!cr6.eq) goto loc_82600080;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// b 0x82600084
	goto loc_82600084;
loc_82600080:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82600084:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - r11.s64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// addme r8,r8
	temp.u64 = ctx.r8.u64 + xer.ca - 1;
	xer.ca = (ctx.r8.u64 > temp.u64) || (ctx.r8.u64 == temp.u64 && xer.ca);
	ctx.r8.u64 = temp.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// clrlwi r7,r9,26
	ctx.r7.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mullw r11,r25,r26
	r11.s64 = int64_t(r25.s32) * int64_t(r26.s32);
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r27,r11,29,3,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// rlwinm r11,r11,0,21,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// mullw r11,r29,r27
	r11.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// beq cr6,0x82600154
	if (cr6.eq) goto loc_82600154;
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// b 0x82600168
	goto loc_82600168;
loc_82600154:
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_82600168:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mullw r6,r26,r10
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// add r9,r25,r10
	ctx.r9.u64 = r25.u64 + ctx.r10.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r29,r11
	ctx.r8.u64 = r29.u64 + r11.u64;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r8,r11
	ctx.r8.u32 = ctx.r8.u32 / r11.u32;
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// divwu r11,r9,r10
	r11.u32 = ctx.r9.u32 / ctx.r10.u32;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x826001ec
	if (cr6.gt) goto loc_826001EC;
	// li r11,2
	r11.s64 = 2;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_826001EC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82600204
	if (cr0.eq) goto loc_82600204;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82600204:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r8,r10,25,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7;
	// rlwinm r9,r10,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x38;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm r6,r10,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r8,r10,31,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r11,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r11,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r8,r11,28,30,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// rlwimi r10,r9,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r11,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r6,r7,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwimi r7,r11,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r11,r11,13,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r11,26
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFF) != 0);
	r11.s64 = r11.s32 >> 26;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826002A8"))) PPC_WEAK_FUNC(sub_826002A8);
PPC_FUNC_IMPL(__imp__sub_826002A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826002AC"))) PPC_WEAK_FUNC(sub_826002AC);
PPC_FUNC_IMPL(__imp__sub_826002AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826002B0"))) PPC_WEAK_FUNC(sub_826002B0);
PPC_FUNC_IMPL(__imp__sub_826002B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// xori r9,r11,1
	ctx.r9.u64 = r11.u64 ^ 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x826002f4
	if (cr6.lt) goto loc_826002F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826002F4:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & r11.u64;
}

__attribute__((alias("__imp__sub_82600308"))) PPC_WEAK_FUNC(sub_82600308);
PPC_FUNC_IMPL(__imp__sub_82600308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260030C"))) PPC_WEAK_FUNC(sub_8260030C);
PPC_FUNC_IMPL(__imp__sub_8260030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600310"))) PPC_WEAK_FUNC(sub_82600310);
PPC_FUNC_IMPL(__imp__sub_82600310) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x82600370
	if (cr6.lt) goto loc_82600370;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82600370:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addme r7,r7
	temp.u64 = ctx.r7.u64 + xer.ca - 1;
	xer.ca = (ctx.r7.u64 > temp.u64) || (ctx.r7.u64 == temp.u64 && xer.ca);
	ctx.r7.u64 = temp.u64;
	// and r31,r7,r9
	r31.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(r24.u32, r31.u32, xer);
	// bge cr6,0x826003a0
	if (!cr6.lt) goto loc_826003A0;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// b 0x826004bc
	goto loc_826004BC;
loc_826003A0:
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// ble cr6,0x826003e8
	if (!cr6.gt) goto loc_826003E8;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// b 0x826003ec
	goto loc_826003EC;
loc_826003E8:
	// li r11,0
	r11.s64 = 0;
loc_826003EC:
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// li r11,1
	r11.s64 = 1;
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - r31.s64;
	// addme r6,r6
	temp.u64 = ctx.r6.u64 + xer.ca - 1;
	xer.ca = (ctx.r6.u64 > temp.u64) || (ctx.r6.u64 == temp.u64 && xer.ca);
	ctx.r6.u64 = temp.u64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// slw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r11,r7
	r28.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// slw r27,r11,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1104
	r11.s64 = r11.s64 + -1104;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r23,r10,r11
	r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x825d39e0
	sub_825D39E0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// mullw r11,r11,r23
	r11.s64 = int64_t(r11.s32) * int64_t(r23.s32);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r8,r7,r10
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// bgt cr6,0x8260047c
	if (cr6.gt) goto loc_8260047C;
	// addi r11,r8,4095
	r11.s64 = ctx.r8.s64 + 4095;
	// rlwinm r8,r11,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_8260047C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r31,r24
	ctx.r3.s64 = r24.s64 - r31.s64;
	// bl 0x825d3e80
	sub_825D3E80(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r9.u32);
loc_826004BC:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826004C4"))) PPC_WEAK_FUNC(sub_826004C4);
PPC_FUNC_IMPL(__imp__sub_826004C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826004C8"))) PPC_WEAK_FUNC(sub_826004C8);
PPC_FUNC_IMPL(__imp__sub_826004C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826004E8"))) PPC_WEAK_FUNC(sub_826004E8);
PPC_FUNC_IMPL(__imp__sub_826004E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826004EC"))) PPC_WEAK_FUNC(sub_826004EC);
PPC_FUNC_IMPL(__imp__sub_826004EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826004F0"))) PPC_WEAK_FUNC(sub_826004F0);
PPC_FUNC_IMPL(__imp__sub_826004F0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d38c0
	sub_825D38C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82600528
	if (cr6.eq) goto loc_82600528;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82600528:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82600538
	if (cr6.eq) goto loc_82600538;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82600538:
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

__attribute__((alias("__imp__sub_8260054C"))) PPC_WEAK_FUNC(sub_8260054C);
PPC_FUNC_IMPL(__imp__sub_8260054C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82600550"))) PPC_WEAK_FUNC(sub_82600550);
PPC_FUNC_IMPL(__imp__sub_82600550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r7,31
	r11.s64 = ctx.r7.s64 + 31;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,28,4,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFE;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// cntlzw r30,r8
	r30.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r6,31
	r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r7,r4,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r8,r4,2,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfic r11,r30,31
	xer.ca = r30.u32 <= 31;
	r11.s64 = 31 - r30.s64;
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// slw r6,r5,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r4,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r30,r11,6
	r30.s64 = r11.s64 + 6;
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sld r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// clrldi r7,r30,32
	ctx.r7.u64 = r30.u64 & 0xFFFFFFFF;
	// clrldi r5,r31,62
	ctx.r5.u64 = r31.u64 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sld r8,r5,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r7.u8 & 0x7F));
	// rlwinm r7,r4,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrldi r8,r6,60
	ctx.r8.u64 = ctx.r6.u64 & 0xF;
	// clrldi r5,r10,63
	ctx.r5.u64 = ctx.r10.u64 & 0x1;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r9,r10,0,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFE00;
	// rlwinm r6,r10,0,23,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r3,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0x7FFFFFFFF;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r9,r9,0,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// mulli r8,r5,-128
	ctx.r8.s64 = ctx.r5.s64 * -128;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// rldicr r8,r8,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// clrldi r9,r10,58
	ctx.r9.u64 = ctx.r10.u64 & 0x3F;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8260063C"))) PPC_WEAK_FUNC(sub_8260063C);
PPC_FUNC_IMPL(__imp__sub_8260063C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82600640"))) PPC_WEAK_FUNC(sub_82600640);
PPC_FUNC_IMPL(__imp__sub_82600640) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r30,268(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// rlwinm r22,r30,1,0,30
	r22.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// and r21,r11,r30
	r21.u64 = r11.u64 & r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r25
	r11.s64 = r25.s64 - r11.s64;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r21
	r11.u64 = r11.u64 & r21.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r24
	r11.s64 = r24.s64 - r11.s64;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r21
	r11.u64 = r11.u64 & r21.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - r30.s64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// subf r10,r21,r6
	ctx.r10.s64 = ctx.r6.s64 - r21.s64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq cr6,0x826007d8
	if (cr6.eq) goto loc_826007D8;
	// lwz r11,284(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_826007D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r22,r26
	ctx.r10.s64 = r26.s64 - r22.s64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r8,r22,r25
	ctx.r8.s64 = r25.s64 - r22.s64;
	// subf r7,r22,r24
	ctx.r7.s64 = r24.s64 - r22.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8260083C"))) PPC_WEAK_FUNC(sub_8260083C);
PPC_FUNC_IMPL(__imp__sub_8260083C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82600840"))) PPC_WEAK_FUNC(sub_82600840);
PPC_FUNC_IMPL(__imp__sub_82600840) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9404
	// lwz r31,0(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r30,r10,-2
	r30.s64 = ctx.r10.s64 + -2;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srw r31,r31,r4
	r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addic r31,r30,-1
	xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	// lwz r30,4(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// subfe r31,r31,r31
	temp.u8 = (~r31.u32 + r31.u32 < ~r31.u32) | (~r31.u32 + r31.u32 + xer.ca < xer.ca);
	r31.u64 = ~r31.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r30,16(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// and r31,r31,r11
	r31.u64 = r31.u64 & r11.u64;
	// lwz r30,0(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,8(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// srw r29,r29,r4
	r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// mr r26,r29
	r26.u64 = r29.u64;
	// bgt cr6,0x8260089c
	if (cr6.gt) goto loc_8260089C;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8260089C:
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// lwz r27,4(r7)
	r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,12(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// srw r30,r30,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// ble cr6,0x826008b8
	if (!cr6.gt) goto loc_826008B8;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_826008B8:
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// srw r30,r5,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// bgt cr6,0x826008d4
	if (cr6.gt) goto loc_826008D4;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
loc_826008D4:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// cmplw cr6,r26,r5
	cr6.compare<uint32_t>(r26.u32, ctx.r5.u32, xer);
	// beq cr6,0x82600a74
	if (cr6.eq) goto loc_82600A74;
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// beq cr6,0x82600a74
	if (cr6.eq) goto loc_82600A74;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82600a74
	if (cr6.eq) goto loc_82600A74;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// subfic r10,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r7.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82600924
	if (!cr6.eq) goto loc_82600924;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r7,4
	ctx.r7.s64 = 4;
	// bne cr6,0x82600928
	if (!cr6.eq) goto loc_82600928;
loc_82600924:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82600928:
	// lwz r25,0(r8)
	r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// addi r23,r7,-1
	r23.s64 = ctx.r7.s64 + -1;
	// subf r5,r25,r5
	ctx.r5.s64 = ctx.r5.s64 - r25.s64;
	// not r25,r24
	r25.u64 = ~r24.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// not r24,r23
	r24.u64 = ~r23.u64;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r5,r5,r28
	ctx.r5.s64 = r28.s64 - ctx.r5.s64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r5,r5,r29
	ctx.r5.s64 = r29.s64 - ctx.r5.s64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// and r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 & r24.u64;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + r27.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r25
	ctx.r5.u64 = ctx.r5.u64 & r25.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 & r24.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// beq cr6,0x82600a6c
	if (cr6.eq) goto loc_82600A6C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sraw r9,r9,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// lwz r30,0(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// sraw r29,r10,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r29.s64 = ctx.r10.s32 >> temp.u32;
	// lwz r28,8(r8)
	r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// sraw r6,r6,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// subf r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - r30.s64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r9,r28,r6
	ctx.r9.s64 = ctx.r6.s64 - r28.s64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwz r28,12(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r8,r29
	ctx.r10.s64 = r29.s64 - ctx.r8.s64;
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r31,r30,r5
	r31.u64 = r30.u64 & ctx.r5.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// subf r10,r27,r28
	ctx.r10.s64 = r28.s64 - r27.s64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// subf r7,r4,r31
	ctx.r7.s64 = r31.s64 - ctx.r4.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - r29.s64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_82600A6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82600a78
	sub_82600A78(ctx, base);
	return;
loc_82600A74:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82600A78"))) PPC_WEAK_FUNC(sub_82600A78);
PPC_FUNC_IMPL(__imp__sub_82600A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82600A7C"))) PPC_WEAK_FUNC(sub_82600A7C);
PPC_FUNC_IMPL(__imp__sub_82600A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82600A80"))) PPC_WEAK_FUNC(sub_82600A80);
PPC_FUNC_IMPL(__imp__sub_82600A80) {
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
	// lis r10,15017
	ctx.r10.s64 = 984154112;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ori r10,r10,4396
	ctx.r10.u64 = ctx.r10.u64 | 4396;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// bl 0x8260aa50
	sub_8260AA50(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260aad0
	sub_8260AAD0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1880
	r11.s64 = r11.s64 + -1880;
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82600B1C"))) PPC_WEAK_FUNC(sub_82600B1C);
PPC_FUNC_IMPL(__imp__sub_82600B1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82600B20"))) PPC_WEAK_FUNC(sub_82600B20);
PPC_FUNC_IMPL(__imp__sub_82600B20) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82600b6c
	if (cr6.eq) goto loc_82600B6C;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r31,r11,30,2,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82600b7c
	goto loc_82600B7C;
loc_82600B6C:
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r31,r11,0,0,26
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
loc_82600B7C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,2624
	r11.s64 = r11.s64 + 2624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r11,r11,r6
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r6.u32);
	// rotlwi r30,r11,1
	r30.u64 = __builtin_rotateleft32(r11.u32, 1);
	// bl 0x8260aa50
	sub_8260AA50(ctx, base);
	// mullw r11,r31,r30
	r11.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r3,r11,1880
	ctx.r3.s64 = r11.s64 + 1880;
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

__attribute__((alias("__imp__sub_82600BBC"))) PPC_WEAK_FUNC(sub_82600BBC);
PPC_FUNC_IMPL(__imp__sub_82600BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82600BC0"))) PPC_WEAK_FUNC(sub_82600BC0);
PPC_FUNC_IMPL(__imp__sub_82600BC0) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r18,r11,26
	r18.u64 = r11.u32 & 0x3F;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,-1104
	r11.s64 = ctx.r8.s64 + -1104;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(r11.u32, 1);
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	cr6.compare<uint32_t>(ctx.r9.u32, 1536, xer);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x82600cdc
	if (cr6.eq) goto loc_82600CDC;
	// lwz r9,32(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82600cdc
	if (!cr0.eq) goto loc_82600CDC;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82600ce8
	goto loc_82600CE8;
loc_82600CDC:
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82600CE8:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x82600d70
	if (cr6.eq) goto loc_82600D70;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82600d10
	if (cr6.lt) goto loc_82600D10;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82600D10:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82600d30
	if (!cr0.gt) goto loc_82600D30;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82600d28
	if (cr6.lt) goto loc_82600D28;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82600D28:
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// b 0x82600d34
	goto loc_82600D34;
loc_82600D30:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_82600D34:
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// bge cr6,0x82600d78
	if (!cr6.lt) goto loc_82600D78;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82600d4c
	if (cr6.lt) goto loc_82600D4C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82600D4C:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82600d68
	if (!cr0.gt) goto loc_82600D68;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82600d60
	if (cr6.lt) goto loc_82600D60;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82600D60:
	// subf r21,r30,r11
	r21.s64 = r11.s64 - r30.s64;
	// b 0x82600d74
	goto loc_82600D74;
loc_82600D68:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x82600d74
	goto loc_82600D74;
loc_82600D70:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82600D74:
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_82600D78:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82600e20
	if (cr6.eq) goto loc_82600E20;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82600db8
	if (cr6.lt) goto loc_82600DB8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82600DB8:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82600e20
	if (!cr6.lt) goto loc_82600E20;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82600e08
	if (cr6.lt) goto loc_82600E08;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82600E08:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_82600E20:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82600640
	sub_82600640(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bgt cr6,0x82601410
	if (cr6.gt) goto loc_82601410;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x82600e8c
	goto loc_82600E8C;
loc_82600E70:
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r19,0
	r19.s64 = 0;
	// lwz r21,124(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r16,224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_82600E8C:
	// subfc r11,r21,r31
	xer.ca = r31.u32 >= r21.u32;
	r11.s64 = r31.s64 - r21.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82600840
	sub_82600840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826013f0
	if (cr0.eq) goto loc_826013F0;
	// lwz r22,240(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lwz r21,248(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r22,r21
	r11.s64 = r21.s64 - r22.s64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// rlwinm r16,r11,0,0,29
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82600f14
	if (cr6.eq) goto loc_82600F14;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82600F14:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826013d8
	if (cr6.eq) goto loc_826013D8;
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r15,256(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
loc_82600F34:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r28,r9,r7
	r28.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82600fa4
	if (cr6.gt) goto loc_82600FA4;
	// li r11,1
	r11.s64 = 1;
loc_82600FA4:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82600fbc
	if (cr6.gt) goto loc_82600FBC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82600FBC:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82600fe0
	if (cr6.gt) goto loc_82600FE0;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82600FE0:
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x8260100c
	if (cr6.eq) goto loc_8260100C;
	// rlwinm r11,r18,30,2,31
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r6,r11,31
	ctx.r6.s64 = r11.s64 + 31;
	// mullw r11,r10,r8
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r6,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x82601020
	goto loc_82601020;
loc_8260100C:
	// addi r11,r25,3
	r11.s64 = r25.s64 + 3;
	// rlwinm r10,r15,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r11,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r10,r9
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
loc_82601020:
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82601038
	if (!cr6.lt) goto loc_82601038;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_82601038:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82601048
	if (!cr6.gt) goto loc_82601048;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_82601048:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826012d8
	if (cr6.eq) goto loc_826012D8;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82601164
	if (!cr6.lt) goto loc_82601164;
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r28
	r26.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r15,r25
	cr6.compare<uint32_t>(r15.u32, r25.u32, xer);
	// bge cr6,0x826013b8
	if (!cr6.lt) goto loc_826013B8;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.s64 = r11.s64 - r15.s64;
loc_8260107C:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x8260114c
	if (!cr6.lt) goto loc_8260114C;
	// rlwinm r10,r22,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826010A0:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82601134
	if (!cr6.lt) goto loc_82601134;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r14,r10
	r30.s64 = ctx.r10.s64 - r14.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_826010C4:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82601128
	if (!cr6.lt) goto loc_82601128;
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260111C:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwux r10,r30,r14
	ea = r30.u32 + r14.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// bdnz 0x8260111c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260111C;
loc_82601128:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x826010c4
	if (!cr0.eq) goto loc_826010C4;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82601134:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(r31.u32, r18.u32, xer);
	// blt cr6,0x826010a0
	if (cr6.lt) goto loc_826010A0;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8260114C:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x8260107c
	if (!cr0.eq) goto loc_8260107C;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x826013b8
	goto loc_826013B8;
loc_82601164:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x82601210
	if (cr6.eq) goto loc_82601210;
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x826013b8
	if (!cr6.lt) goto loc_826013B8;
loc_82601178:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82601200
	if (!cr6.lt) goto loc_82601200;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r30,r27,30,2,31
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r29,r22,r11
	r29.s64 = r11.s64 - r22.s64;
loc_826011C4:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r30,r9
	ctx.r4.u64 = r30.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823d2360
	sub_823D2360(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(r31.u32, r21.u32, xer);
	// stwx r10,r11,r24
	PPC_STORE_U32(r11.u32 + r24.u32, ctx.r10.u32);
	// blt cr6,0x826011c4
	if (cr6.lt) goto loc_826011C4;
loc_82601200:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// blt cr6,0x82601178
	if (cr6.lt) goto loc_82601178;
	// b 0x826013b8
	goto loc_826013B8;
loc_82601210:
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmplw cr6,r15,r25
	cr6.compare<uint32_t>(r15.u32, r25.u32, xer);
	// bge cr6,0x826013b8
	if (!cr6.lt) goto loc_826013B8;
loc_8260121C:
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x826012c8
	if (!cr6.lt) goto loc_826012C8;
loc_82601228:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x826012bc
	if (!cr6.lt) goto loc_826012BC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r30,r26,30,2,31
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r29,r22,r11
	r29.s64 = r11.s64 - r22.s64;
loc_82601274:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r30,r9
	ctx.r4.u64 = r30.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + r27.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82600550
	sub_82600550(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(r31.u32, r21.u32, xer);
	// stwx r10,r11,r24
	PPC_STORE_U32(r11.u32 + r24.u32, ctx.r10.u32);
	// blt cr6,0x82601274
	if (cr6.lt) goto loc_82601274;
loc_826012BC:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// blt cr6,0x82601228
	if (cr6.lt) goto loc_82601228;
loc_826012C8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// blt cr6,0x8260121c
	if (cr6.lt) goto loc_8260121C;
	// b 0x826013b8
	goto loc_826013B8;
loc_826012D8:
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r15,r25
	cr6.compare<uint32_t>(r15.u32, r25.u32, xer);
	// bge cr6,0x826013b8
	if (!cr6.lt) goto loc_826013B8;
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r25
	r26.s64 = r25.s64 - r15.s64;
loc_826012F0:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bge cr6,0x826013ac
	if (!cr6.lt) goto loc_826013AC;
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// rlwinm r30,r22,30,2,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_8260131C:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// mullw r11,r10,r14
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// bge cr6,0x82601398
	if (!cr6.lt) goto loc_82601398;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// subf r11,r14,r11
	r11.s64 = r11.s64 - r14.s64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8260138C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwux r9,r11,r14
	ea = r11.u32 + r14.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8260138c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260138C;
loc_82601398:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x8260131c
	if (!cr0.eq) goto loc_8260131C;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_826013AC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x826012f0
	if (!cr0.eq) goto loc_826012F0;
loc_826013B8:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82600f34
	if (cr6.lt) goto loc_82600F34;
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_826013D8:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82600e70
	if (!cr6.gt) goto loc_82600E70;
loc_826013F0:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82601410
	if (!cr6.lt) goto loc_82601410;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_82601410:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
}

__attribute__((alias("__imp__sub_82601418"))) PPC_WEAK_FUNC(sub_82601418);
PPC_FUNC_IMPL(__imp__sub_82601418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8260141C"))) PPC_WEAK_FUNC(sub_8260141C);
PPC_FUNC_IMPL(__imp__sub_8260141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82601420"))) PPC_WEAK_FUNC(sub_82601420);
PPC_FUNC_IMPL(__imp__sub_82601420) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r18,r11,26
	r18.u64 = r11.u32 & 0x3F;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,-1104
	r11.s64 = ctx.r8.s64 + -1104;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(r11.u32, 1);
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	cr6.compare<uint32_t>(ctx.r9.u32, 1536, xer);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x8260153c
	if (cr6.eq) goto loc_8260153C;
	// lwz r9,32(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8260153c
	if (!cr0.eq) goto loc_8260153C;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82601548
	goto loc_82601548;
loc_8260153C:
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82601548:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x826015d0
	if (cr6.eq) goto loc_826015D0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82601570
	if (cr6.lt) goto loc_82601570;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82601570:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82601590
	if (!cr0.gt) goto loc_82601590;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82601588
	if (cr6.lt) goto loc_82601588;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82601588:
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// b 0x82601594
	goto loc_82601594;
loc_82601590:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_82601594:
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// bge cr6,0x826015d8
	if (!cr6.lt) goto loc_826015D8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x826015ac
	if (cr6.lt) goto loc_826015AC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_826015AC:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x826015c8
	if (!cr0.gt) goto loc_826015C8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x826015c0
	if (cr6.lt) goto loc_826015C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826015C0:
	// subf r21,r30,r11
	r21.s64 = r11.s64 - r30.s64;
	// b 0x826015d4
	goto loc_826015D4;
loc_826015C8:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x826015d4
	goto loc_826015D4;
loc_826015D0:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_826015D4:
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_826015D8:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82601680
	if (cr6.eq) goto loc_82601680;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82601618
	if (cr6.lt) goto loc_82601618;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82601618:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82601680
	if (!cr6.lt) goto loc_82601680;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82601668
	if (cr6.lt) goto loc_82601668;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82601668:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_82601680:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82600640
	sub_82600640(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bgt cr6,0x82601c74
	if (cr6.gt) goto loc_82601C74;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x826016ec
	goto loc_826016EC;
loc_826016D0:
	// lwz r21,124(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r19,0
	r19.s64 = 0;
	// lwz r16,224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_826016EC:
	// subfc r11,r21,r31
	xer.ca = r31.u32 >= r21.u32;
	r11.s64 = r31.s64 - r21.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82600840
	sub_82600840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82601c54
	if (cr0.eq) goto loc_82601C54;
	// lwz r21,240(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lwz r22,248(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// rlwinm r16,r11,31,1,30
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFE;
	// beq cr6,0x82601774
	if (cr6.eq) goto loc_82601774;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82601774:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82601c3c
	if (cr6.eq) goto loc_82601C3C;
	// lwz r15,256(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82601794:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r27,r9,r7
	r27.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82601804
	if (cr6.gt) goto loc_82601804;
	// li r11,1
	r11.s64 = 1;
loc_82601804:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x8260181c
	if (cr6.gt) goto loc_8260181C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8260181C:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82601840
	if (cr6.gt) goto loc_82601840;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82601840:
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x82601870
	if (cr6.eq) goto loc_82601870;
	// rlwinm r11,r18,30,2,31
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r5,r11,31
	ctx.r5.s64 = r11.s64 + 31;
	// mullw r11,r10,r8
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x82601884
	goto loc_82601884;
loc_82601870:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r15,0,0,29
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_82601884:
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x8260189c
	if (!cr6.lt) goto loc_8260189C;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_8260189C:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x826018ac
	if (!cr6.gt) goto loc_826018AC;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_826018AC:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82601b3c
	if (cr6.eq) goto loc_82601B3C;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x826019c4
	if (!cr6.lt) goto loc_826019C4;
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82601c1c
	if (!cr6.lt) goto loc_82601C1C;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.s64 = r11.s64 - r15.s64;
loc_826018E0:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x826019b0
	if (!cr6.lt) goto loc_826019B0;
	// rlwinm r10,r21,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82601904:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82601998
	if (!cr6.lt) goto loc_82601998;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r14,r10
	r30.s64 = ctx.r10.s64 - r14.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82601928:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x8260198c
	if (!cr6.lt) goto loc_8260198C;
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,-2
	r11.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82601980:
	// lhzu r10,2(r11)
	ea = 2 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// sthux r10,r30,r14
	ea = r30.u32 + r14.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	r30.u32 = ea;
	// bdnz 0x82601980
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82601980;
loc_8260198C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82601928
	if (!cr0.eq) goto loc_82601928;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82601998:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(r31.u32, r18.u32, xer);
	// blt cr6,0x82601904
	if (cr6.lt) goto loc_82601904;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_826019B0:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x826018e0
	if (!cr0.eq) goto loc_826018E0;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x82601b34
	goto loc_82601B34;
loc_826019C4:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x82601a6c
	if (cr6.eq) goto loc_82601A6C;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82601c1c
	if (!cr6.lt) goto loc_82601C1C;
loc_826019D8:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82601a5c
	if (!cr6.lt) goto loc_82601A5C;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r25,-2
	r30.s64 = r25.s64 + -2;
loc_82601A20:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lhzu r29,2(r30)
	ea = 2 + r30.u32;
	r29.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// bl 0x823d2360
	sub_823D2360(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// sthx r29,r11,r24
	PPC_STORE_U16(r11.u32 + r24.u32, r29.u16);
	// blt cr6,0x82601a20
	if (cr6.lt) goto loc_82601A20;
loc_82601A5C:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// blt cr6,0x826019d8
	if (cr6.lt) goto loc_826019D8;
	// b 0x82601c1c
	goto loc_82601C1C;
loc_82601A6C:
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82601c1c
	if (!cr6.lt) goto loc_82601C1C;
loc_82601A78:
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82601b24
	if (!cr6.lt) goto loc_82601B24;
loc_82601A84:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82601b18
	if (!cr6.lt) goto loc_82601B18;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r25,30,2,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-2
	r30.s64 = r11.s64 + -2;
loc_82601AD0:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lhzu r29,2(r30)
	ea = 2 + r30.u32;
	r29.u64 = PPC_LOAD_U16(ea);
	r30.u32 = ea;
	// bl 0x82600550
	sub_82600550(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// sthx r29,r11,r24
	PPC_STORE_U16(r11.u32 + r24.u32, r29.u16);
	// blt cr6,0x82601ad0
	if (cr6.lt) goto loc_82601AD0;
loc_82601B18:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(r25.u32, r18.u32, xer);
	// blt cr6,0x82601a84
	if (cr6.lt) goto loc_82601A84;
loc_82601B24:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82601a78
	if (cr6.lt) goto loc_82601A78;
loc_82601B34:
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82601c1c
	goto loc_82601C1C;
loc_82601B3C:
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82601c1c
	if (!cr6.lt) goto loc_82601C1C;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r11
	r26.s64 = r11.s64 - r15.s64;
loc_82601B58:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bge cr6,0x82601c10
	if (!cr6.lt) goto loc_82601C10;
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82601B84:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// mullw r11,r10,r14
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// bge cr6,0x82601bfc
	if (!cr6.lt) goto loc_82601BFC;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r10,r25,-2
	ctx.r10.s64 = r25.s64 + -2;
	// subf r11,r14,r11
	r11.s64 = r11.s64 - r14.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82601BF0:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthux r9,r11,r14
	ea = r11.u32 + r14.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	r11.u32 = ea;
	// bdnz 0x82601bf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82601BF0;
loc_82601BFC:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x82601b84
	if (!cr0.eq) goto loc_82601B84;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82601C10:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x82601b58
	if (!cr0.eq) goto loc_82601B58;
loc_82601C1C:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82601794
	if (cr6.lt) goto loc_82601794;
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82601C3C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826016d0
	if (!cr6.gt) goto loc_826016D0;
loc_82601C54:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82601c74
	if (!cr6.lt) goto loc_82601C74;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_82601C74:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
}

__attribute__((alias("__imp__sub_82601C7C"))) PPC_WEAK_FUNC(sub_82601C7C);
PPC_FUNC_IMPL(__imp__sub_82601C7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82601C80"))) PPC_WEAK_FUNC(sub_82601C80);
PPC_FUNC_IMPL(__imp__sub_82601C80) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r18,r11,26
	r18.u64 = r11.u32 & 0x3F;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,-1104
	r11.s64 = ctx.r8.s64 + -1104;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// rlwinm r14,r8,1,31,31
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r14,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r14.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// rotlwi r11,r11,1
	r11.u64 = __builtin_rotateleft32(r11.u32, 1);
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	cr6.compare<uint32_t>(ctx.r9.u32, 1536, xer);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r29,148(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x82601da0
	if (cr6.eq) goto loc_82601DA0;
	// lwz r9,32(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82601da0
	if (!cr0.eq) goto loc_82601DA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82601dac
	goto loc_82601DAC;
loc_82601DA0:
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82601DAC:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// beq cr6,0x82601e34
	if (cr6.eq) goto loc_82601E34;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82601dd4
	if (cr6.lt) goto loc_82601DD4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82601DD4:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82601df4
	if (!cr0.gt) goto loc_82601DF4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82601dec
	if (cr6.lt) goto loc_82601DEC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82601DEC:
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// b 0x82601df8
	goto loc_82601DF8;
loc_82601DF4:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_82601DF8:
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// bge cr6,0x82601e3c
	if (!cr6.lt) goto loc_82601E3C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82601e10
	if (cr6.lt) goto loc_82601E10;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82601E10:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82601e2c
	if (!cr0.gt) goto loc_82601E2C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82601e24
	if (cr6.lt) goto loc_82601E24;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82601E24:
	// subf r21,r30,r11
	r21.s64 = r11.s64 - r30.s64;
	// b 0x82601e38
	goto loc_82601E38;
loc_82601E2C:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x82601e38
	goto loc_82601E38;
loc_82601E34:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82601E38:
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
loc_82601E3C:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82601ee4
	if (cr6.eq) goto loc_82601EE4;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82601e7c
	if (cr6.lt) goto loc_82601E7C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82601E7C:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82601ee4
	if (!cr6.lt) goto loc_82601EE4;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82601ecc
	if (cr6.lt) goto loc_82601ECC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82601ECC:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_82601EE4:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82600640
	sub_82600640(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bgt cr6,0x8260250c
	if (cr6.gt) goto loc_8260250C;
	// lwz r15,612(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r24,596(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// b 0x82601f54
	goto loc_82601F54;
loc_82601F38:
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r19,0
	r19.s64 = 0;
	// lwz r21,128(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r14,204(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_82601F54:
	// subfc r11,r21,r31
	xer.ca = r31.u32 >= r21.u32;
	r11.s64 = r31.s64 - r21.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82600840
	sub_82600840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826024ec
	if (cr0.eq) goto loc_826024EC;
	// lwz r21,240(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lwz r22,248(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// mulli r16,r10,6
	r16.s64 = ctx.r10.s64 * 6;
	// beq cr6,0x82601fe0
	if (cr6.eq) goto loc_82601FE0;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r29,148(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_82601FE0:
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826024d4
	if (cr6.eq) goto loc_826024D4;
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r14,256(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
loc_82602000:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// subf r28,r9,r7
	r28.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82602070
	if (cr6.gt) goto loc_82602070;
	// li r11,1
	r11.s64 = 1;
loc_82602070:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82602088
	if (cr6.gt) goto loc_82602088;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82602088:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826020ac
	if (cr6.gt) goto loc_826020AC;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_826020AC:
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x826020d8
	if (cr6.eq) goto loc_826020D8;
	// rlwinm r11,r18,30,2,31
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r6,r11,31
	ctx.r6.s64 = r11.s64 + 31;
	// mullw r11,r10,r8
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r6,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x826020ec
	goto loc_826020EC;
loc_826020D8:
	// addi r11,r25,3
	r11.s64 = r25.s64 + 3;
	// rlwinm r10,r14,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r11,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r10,r9
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
loc_826020EC:
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82602104
	if (!cr6.lt) goto loc_82602104;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
loc_82602104:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82602114
	if (!cr6.gt) goto loc_82602114;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
loc_82602114:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826023c8
	if (cr6.eq) goto loc_826023C8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8260223c
	if (!cr6.lt) goto loc_8260223C;
	// mullw r11,r14,r9
	r11.s64 = int64_t(r14.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r28
	r26.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r14,r25
	cr6.compare<uint32_t>(r14.u32, r25.u32, xer);
	// bge cr6,0x826024b4
	if (!cr6.lt) goto loc_826024B4;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r14,r11
	r24.s64 = r11.s64 - r14.s64;
loc_82602148:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	r11.u64 = r19.u64;
	// add r29,r10,r26
	r29.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82602224
	if (!cr6.lt) goto loc_82602224;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r9,r21,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r10,r15
	r27.u64 = ctx.r10.u64 + r15.u64;
loc_8260216C:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// add r30,r27,r29
	r30.u64 = r27.u64 + r29.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x8260220c
	if (!cr6.lt) goto loc_8260220C;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_8260218C:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82602200
	if (!cr6.lt) goto loc_82602200;
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826021E4:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// sth r10,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r11)
	ea = 6 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stw r10,2(r30)
	PPC_STORE_U32(r30.u32 + 2, ctx.r10.u32);
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// bdnz 0x826021e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826021E4;
loc_82602200:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8260218c
	if (!cr0.eq) goto loc_8260218C;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8260220C:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(r31.u32, r18.u32, xer);
	// blt cr6,0x8260216c
	if (cr6.lt) goto loc_8260216C;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82602224:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x82602148
	if (!cr0.eq) goto loc_82602148;
	// lwz r24,596(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x826024b4
	goto loc_826024B4;
loc_8260223C:
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x826022f4
	if (cr6.eq) goto loc_826022F4;
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x826024b4
	if (!cr6.lt) goto loc_826024B4;
loc_82602250:
	// subf r11,r23,r24
	r11.s64 = r24.s64 - r23.s64;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x826022e4
	if (!cr6.lt) goto loc_826022E4;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r29,r27,30,2,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r26,120(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_8260229C:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r4,r29,r9
	ctx.r4.u64 = r29.u64 + ctx.r9.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823d2360
	sub_823D2360(ctx, base);
	// mullw r11,r3,r26
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r30)
	ea = 6 + r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// stw r10,2(r11)
	PPC_STORE_U32(r11.u32 + 2, ctx.r10.u32);
	// blt cr6,0x8260229c
	if (cr6.lt) goto loc_8260229C;
loc_826022E4:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// blt cr6,0x82602250
	if (cr6.lt) goto loc_82602250;
	// b 0x826024b4
	goto loc_826024B4;
loc_826022F4:
	// mr r27,r14
	r27.u64 = r14.u64;
	// cmplw cr6,r14,r25
	cr6.compare<uint32_t>(r14.u32, r25.u32, xer);
	// bge cr6,0x826024b4
	if (!cr6.lt) goto loc_826024B4;
loc_82602300:
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x826023b8
	if (!cr6.lt) goto loc_826023B8;
loc_8260230C:
	// subf r11,r23,r24
	r11.s64 = r24.s64 - r23.s64;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x826023ac
	if (!cr6.lt) goto loc_826023AC;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r29,r26,30,2,31
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_82602354:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r29,r9
	ctx.r4.u64 = r29.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r5,r5,r27
	ctx.r5.u64 = ctx.r5.u64 + r27.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82600550
	sub_82600550(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// mullw r11,r3,r11
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwzu r10,6(r30)
	ea = 6 + r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// stw r10,2(r11)
	PPC_STORE_U32(r11.u32 + 2, ctx.r10.u32);
	// blt cr6,0x82602354
	if (cr6.lt) goto loc_82602354;
loc_826023AC:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// blt cr6,0x8260230c
	if (cr6.lt) goto loc_8260230C;
loc_826023B8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// blt cr6,0x82602300
	if (cr6.lt) goto loc_82602300;
	// b 0x826024b4
	goto loc_826024B4;
loc_826023C8:
	// mullw r11,r14,r9
	r11.s64 = int64_t(r14.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r14,r25
	cr6.compare<uint32_t>(r14.u32, r25.u32, xer);
	// bge cr6,0x826024b4
	if (!cr6.lt) goto loc_826024B4;
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r14,r25
	r26.s64 = r25.s64 - r14.s64;
loc_826023E0:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bge cr6,0x826024a8
	if (!cr6.lt) goto loc_826024A8;
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_8260240C:
	// subf r11,r23,r24
	r11.s64 = r24.s64 - r23.s64;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// mullw r11,r10,r9
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r15
	r11.u64 = r11.u64 + r15.u64;
	// bge cr6,0x82602494
	if (!cr6.lt) goto loc_82602494;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// rlwinm r9,r8,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82602478:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// lwzu r9,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,2(r11)
	PPC_STORE_U32(r11.u32 + 2, ctx.r9.u32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// bdnz 0x82602478
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602478;
loc_82602494:
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x8260240c
	if (!cr0.eq) goto loc_8260240C;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_826024A8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x826023e0
	if (!cr0.eq) goto loc_826023E0;
loc_826024B4:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82602000
	if (cr6.lt) goto loc_82602000;
	// lwz r29,148(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_826024D4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82601f38
	if (!cr6.gt) goto loc_82601F38;
loc_826024EC:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8260250c
	if (!cr6.lt) goto loc_8260250C;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_8260250C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
}

__attribute__((alias("__imp__sub_82602514"))) PPC_WEAK_FUNC(sub_82602514);
PPC_FUNC_IMPL(__imp__sub_82602514) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82602518"))) PPC_WEAK_FUNC(sub_82602518);
PPC_FUNC_IMPL(__imp__sub_82602518) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r18,r11,26
	r18.u64 = r11.u32 & 0x3F;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,-1104
	r11.s64 = ctx.r8.s64 + -1104;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(r11.u32, 1);
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	cr6.compare<uint32_t>(ctx.r9.u32, 1536, xer);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x82602634
	if (cr6.eq) goto loc_82602634;
	// lwz r9,32(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82602634
	if (!cr0.eq) goto loc_82602634;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82602640
	goto loc_82602640;
loc_82602634:
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82602640:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x826026c8
	if (cr6.eq) goto loc_826026C8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82602668
	if (cr6.lt) goto loc_82602668;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82602668:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82602688
	if (!cr0.gt) goto loc_82602688;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82602680
	if (cr6.lt) goto loc_82602680;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82602680:
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// b 0x8260268c
	goto loc_8260268C;
loc_82602688:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8260268C:
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// bge cr6,0x826026d0
	if (!cr6.lt) goto loc_826026D0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x826026a4
	if (cr6.lt) goto loc_826026A4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_826026A4:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x826026c0
	if (!cr0.gt) goto loc_826026C0;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x826026b8
	if (cr6.lt) goto loc_826026B8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826026B8:
	// subf r21,r30,r11
	r21.s64 = r11.s64 - r30.s64;
	// b 0x826026cc
	goto loc_826026CC;
loc_826026C0:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x826026cc
	goto loc_826026CC;
loc_826026C8:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_826026CC:
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_826026D0:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82602778
	if (cr6.eq) goto loc_82602778;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82602710
	if (cr6.lt) goto loc_82602710;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82602710:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82602778
	if (!cr6.lt) goto loc_82602778;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82602760
	if (cr6.lt) goto loc_82602760;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82602760:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_82602778:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82600640
	sub_82600640(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bgt cr6,0x82602d6c
	if (cr6.gt) goto loc_82602D6C;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x826027e4
	goto loc_826027E4;
loc_826027C8:
	// lwz r21,124(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r19,0
	r19.s64 = 0;
	// lwz r16,224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_826027E4:
	// subfc r11,r21,r31
	xer.ca = r31.u32 >= r21.u32;
	r11.s64 = r31.s64 - r21.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82600840
	sub_82600840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82602d4c
	if (cr0.eq) goto loc_82602D4C;
	// lwz r21,240(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lwz r22,248(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// rlwinm r16,r11,1,0,28
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFF8;
	// beq cr6,0x8260286c
	if (cr6.eq) goto loc_8260286C;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_8260286C:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82602d34
	if (cr6.eq) goto loc_82602D34;
	// lwz r15,256(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8260288C:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r27,r9,r7
	r27.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x826028fc
	if (cr6.gt) goto loc_826028FC;
	// li r11,1
	r11.s64 = 1;
loc_826028FC:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82602914
	if (cr6.gt) goto loc_82602914;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82602914:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82602938
	if (cr6.gt) goto loc_82602938;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82602938:
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x82602968
	if (cr6.eq) goto loc_82602968;
	// rlwinm r11,r18,30,2,31
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r5,r11,31
	ctx.r5.s64 = r11.s64 + 31;
	// mullw r11,r10,r8
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x8260297c
	goto loc_8260297C;
loc_82602968:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r15,0,0,29
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_8260297C:
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82602994
	if (!cr6.lt) goto loc_82602994;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_82602994:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x826029a4
	if (!cr6.gt) goto loc_826029A4;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_826029A4:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82602c34
	if (cr6.eq) goto loc_82602C34;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82602abc
	if (!cr6.lt) goto loc_82602ABC;
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82602d14
	if (!cr6.lt) goto loc_82602D14;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.s64 = r11.s64 - r15.s64;
loc_826029D8:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82602aa8
	if (!cr6.lt) goto loc_82602AA8;
	// rlwinm r10,r21,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826029FC:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82602a90
	if (!cr6.lt) goto loc_82602A90;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r14,r10
	r30.s64 = ctx.r10.s64 - r14.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82602A20:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82602a84
	if (!cr6.lt) goto loc_82602A84;
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82602A78:
	// ldu r10,8(r11)
	ea = 8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdux r10,r30,r14
	ea = r30.u32 + r14.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r30.u32 = ea;
	// bdnz 0x82602a78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602A78;
loc_82602A84:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82602a20
	if (!cr0.eq) goto loc_82602A20;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82602A90:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(r31.u32, r18.u32, xer);
	// blt cr6,0x826029fc
	if (cr6.lt) goto loc_826029FC;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82602AA8:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x826029d8
	if (!cr0.eq) goto loc_826029D8;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x82602c2c
	goto loc_82602C2C;
loc_82602ABC:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x82602b64
	if (cr6.eq) goto loc_82602B64;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82602d14
	if (!cr6.lt) goto loc_82602D14;
loc_82602AD0:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82602b54
	if (!cr6.lt) goto loc_82602B54;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r25,-8
	r30.s64 = r25.s64 + -8;
loc_82602B18:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// ldu r29,8(r30)
	ea = 8 + r30.u32;
	r29.u64 = PPC_LOAD_U64(ea);
	r30.u32 = ea;
	// bl 0x823d2360
	sub_823D2360(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// stdx r29,r11,r24
	PPC_STORE_U64(r11.u32 + r24.u32, r29.u64);
	// blt cr6,0x82602b18
	if (cr6.lt) goto loc_82602B18;
loc_82602B54:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// blt cr6,0x82602ad0
	if (cr6.lt) goto loc_82602AD0;
	// b 0x82602d14
	goto loc_82602D14;
loc_82602B64:
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82602d14
	if (!cr6.lt) goto loc_82602D14;
loc_82602B70:
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82602c1c
	if (!cr6.lt) goto loc_82602C1C;
loc_82602B7C:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82602c10
	if (!cr6.lt) goto loc_82602C10;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r25,30,2,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-8
	r30.s64 = r11.s64 + -8;
loc_82602BC8:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ldu r29,8(r30)
	ea = 8 + r30.u32;
	r29.u64 = PPC_LOAD_U64(ea);
	r30.u32 = ea;
	// bl 0x82600550
	sub_82600550(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// stdx r29,r11,r24
	PPC_STORE_U64(r11.u32 + r24.u32, r29.u64);
	// blt cr6,0x82602bc8
	if (cr6.lt) goto loc_82602BC8;
loc_82602C10:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(r25.u32, r18.u32, xer);
	// blt cr6,0x82602b7c
	if (cr6.lt) goto loc_82602B7C;
loc_82602C1C:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82602b70
	if (cr6.lt) goto loc_82602B70;
loc_82602C2C:
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82602d14
	goto loc_82602D14;
loc_82602C34:
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82602d14
	if (!cr6.lt) goto loc_82602D14;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r11
	r26.s64 = r11.s64 - r15.s64;
loc_82602C50:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bge cr6,0x82602d08
	if (!cr6.lt) goto loc_82602D08;
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82602C7C:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// mullw r11,r10,r14
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// bge cr6,0x82602cf4
	if (!cr6.lt) goto loc_82602CF4;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r10,r25,-8
	ctx.r10.s64 = r25.s64 + -8;
	// subf r11,r14,r11
	r11.s64 = r11.s64 - r14.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82602CE8:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdux r9,r11,r14
	ea = r11.u32 + r14.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x82602ce8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82602CE8;
loc_82602CF4:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x82602c7c
	if (!cr0.eq) goto loc_82602C7C;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82602D08:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x82602c50
	if (!cr0.eq) goto loc_82602C50;
loc_82602D14:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8260288c
	if (cr6.lt) goto loc_8260288C;
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82602D34:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826027c8
	if (!cr6.gt) goto loc_826027C8;
loc_82602D4C:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82602d6c
	if (!cr6.lt) goto loc_82602D6C;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_82602D6C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
}

__attribute__((alias("__imp__sub_82602D74"))) PPC_WEAK_FUNC(sub_82602D74);
PPC_FUNC_IMPL(__imp__sub_82602D74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82602D78"))) PPC_WEAK_FUNC(sub_82602D78);
PPC_FUNC_IMPL(__imp__sub_82602D78) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r10,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r10.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// clrlwi r18,r11,26
	r18.u64 = r11.u32 & 0x3F;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// addi r11,r8,-1104
	r11.s64 = ctx.r8.s64 + -1104;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r18,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// rlwinm r17,r9,1,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r19,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r19.u32);
	// rlwinm r15,r8,1,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r22,r7,23,30,31
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x3;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// rlwinm r16,r7,21,31,31
	r16.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 21) & 0x1;
	// stw r15,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r15.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r16.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r31,r17,1,0,30
	r31.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r14,r11,1
	r14.u64 = __builtin_rotateleft32(r11.u32, 1);
	// bl 0x825d36d8
	sub_825D36D8(ctx, base);
	// lwz r9,48(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1536
	cr6.compare<uint32_t>(ctx.r9.u32, 1536, xer);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// beq cr6,0x82602e94
	if (cr6.eq) goto loc_82602E94;
	// lwz r9,32(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 32);
	// rlwinm. r9,r9,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82602e94
	if (!cr0.eq) goto loc_82602E94;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82602ea0
	goto loc_82602EA0;
loc_82602E94:
	// lwz r9,36(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82602EA0:
	// addi r8,r24,1
	ctx.r8.s64 = r24.s64 + 1;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// beq cr6,0x82602f28
	if (cr6.eq) goto loc_82602F28;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82602ec8
	if (cr6.lt) goto loc_82602EC8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82602EC8:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82602ee8
	if (!cr0.gt) goto loc_82602EE8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82602ee0
	if (cr6.lt) goto loc_82602EE0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82602EE0:
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// b 0x82602eec
	goto loc_82602EEC;
loc_82602EE8:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_82602EEC:
	// cmplw cr6,r9,r21
	cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, xer);
	// bge cr6,0x82602f30
	if (!cr6.lt) goto loc_82602F30;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x82602f04
	if (cr6.lt) goto loc_82602F04;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82602F04:
	// subf. r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82602f20
	if (!cr0.gt) goto loc_82602F20;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82602f18
	if (cr6.lt) goto loc_82602F18;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82602F18:
	// subf r21,r30,r11
	r21.s64 = r11.s64 - r30.s64;
	// b 0x82602f2c
	goto loc_82602F2C;
loc_82602F20:
	// mr r21,r19
	r21.u64 = r19.u64;
	// b 0x82602f2c
	goto loc_82602F2C;
loc_82602F28:
	// mr r21,r27
	r21.u64 = r27.u64;
loc_82602F2C:
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
loc_82602F30:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// beq cr6,0x82602fd8
	if (cr6.eq) goto loc_82602FD8;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82602f70
	if (cr6.lt) goto loc_82602F70;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82602F70:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82602fd8
	if (!cr6.lt) goto loc_82602FD8;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r17
	r11.s64 = r17.s64 - r11.s64;
	// subf r10,r10,r17
	ctx.r10.s64 = r17.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82602fc0
	if (cr6.lt) goto loc_82602FC0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82602FC0:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_82602FD8:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82600640
	sub_82600640(ctx, base);
	// lwz r23,604(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bgt cr6,0x826035cc
	if (cr6.gt) goto loc_826035CC;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x82603044
	goto loc_82603044;
loc_82603028:
	// lwz r21,124(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r19,0
	r19.s64 = 0;
	// lwz r16,224(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r15,204(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r22,188(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r18,216(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82603044:
	// subfc r11,r21,r31
	xer.ca = r31.u32 >= r21.u32;
	r11.s64 = r31.s64 - r21.s64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82600840
	sub_82600840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826035ac
	if (cr0.eq) goto loc_826035AC;
	// lwz r21,240(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// lwz r22,248(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// subf r11,r21,r22
	r11.s64 = r22.s64 - r21.s64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// rlwinm r16,r11,30,2,31
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq cr6,0x826030cc
	if (cr6.eq) goto loc_826030CC;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_826030CC:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82603594
	if (cr6.eq) goto loc_82603594;
	// lwz r15,256(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,252(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r19,244(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_826030EC:
	// addi r9,r1,264
	ctx.r9.s64 = ctx.r1.s64 + 264;
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r8,r1,212
	ctx.r8.s64 = ctx.r1.s64 + 212;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,232
	r11.s64 = ctx.r1.s64 + 232;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r8,r1,268
	ctx.r8.s64 = ctx.r1.s64 + 268;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825d45a8
	sub_825D45A8(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// subf r27,r9,r7
	r27.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8260315c
	if (cr6.gt) goto loc_8260315C;
	// li r11,1
	r11.s64 = 1;
loc_8260315C:
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82603174
	if (cr6.gt) goto loc_82603174;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82603174:
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82603198
	if (cr6.gt) goto loc_82603198;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82603198:
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x826031c8
	if (cr6.eq) goto loc_826031C8;
	// rlwinm r11,r18,30,2,31
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r19,30,2,26
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFE0;
	// addi r5,r11,31
	ctx.r5.s64 = r11.s64 + 31;
	// mullw r11,r10,r8
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r5,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// b 0x826031dc
	goto loc_826031DC;
loc_826031C8:
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r11,r15,0,0,29
	r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
loc_826031DC:
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x826031f4
	if (!cr6.lt) goto loc_826031F4;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_826031F4:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82603204
	if (!cr6.gt) goto loc_82603204;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_82603204:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82603494
	if (cr6.eq) goto loc_82603494;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8260331c
	if (!cr6.lt) goto loc_8260331C;
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82603574
	if (!cr6.lt) goto loc_82603574;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r25,r19,30,2,31
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r24,r15,r11
	r24.s64 = r11.s64 - r15.s64;
loc_82603238:
	// mullw r10,r25,r8
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(ctx.r8.s32);
	// mr r11,r19
	r11.u64 = r19.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82603308
	if (!cr6.lt) goto loc_82603308;
	// rlwinm r10,r21,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mullw r10,r10,r14
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8260325C:
	// addi r31,r11,128
	r31.s64 = r11.s64 + 128;
	// add r10,r27,r28
	ctx.r10.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x826032f0
	if (!cr6.lt) goto loc_826032F0;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// subf r30,r14,r10
	r30.s64 = ctx.r10.s64 - r14.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82603280:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x826032e4
	if (!cr6.lt) goto loc_826032E4;
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826032D8:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// stbux r10,r30,r14
	ea = r30.u32 + r14.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	r30.u32 = ea;
	// bdnz 0x826032d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826032D8;
loc_826032E4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82603280
	if (!cr0.eq) goto loc_82603280;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_826032F0:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r31,r18
	cr6.compare<uint32_t>(r31.u32, r18.u32, xer);
	// blt cr6,0x8260325c
	if (cr6.lt) goto loc_8260325C;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82603308:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// add r26,r26,r9
	r26.u64 = r26.u64 + ctx.r9.u64;
	// bne 0x82603238
	if (!cr0.eq) goto loc_82603238;
	// lwz r24,612(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// b 0x8260348c
	goto loc_8260348C;
loc_8260331C:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// beq cr6,0x826033c4
	if (cr6.eq) goto loc_826033C4;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x82603574
	if (!cr6.lt) goto loc_82603574;
loc_82603330:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x826033b4
	if (!cr6.lt) goto loc_826033B4;
	// rlwinm r28,r26,30,2,31
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r25,-1
	r30.s64 = r25.s64 + -1;
loc_82603378:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lbzu r29,1(r30)
	ea = 1 + r30.u32;
	r29.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
	// bl 0x823d2360
	sub_823D2360(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// stbx r29,r11,r24
	PPC_STORE_U8(r11.u32 + r24.u32, r29.u8);
	// blt cr6,0x82603378
	if (cr6.lt) goto loc_82603378;
loc_826033B4:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// blt cr6,0x82603330
	if (cr6.lt) goto loc_82603330;
	// b 0x82603574
	goto loc_82603574;
loc_826033C4:
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82603574
	if (!cr6.lt) goto loc_82603574;
loc_826033D0:
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// bge cr6,0x8260347c
	if (!cr6.lt) goto loc_8260347C;
loc_826033DC:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// bge cr6,0x82603470
	if (!cr6.lt) goto loc_82603470;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r28,r25,30,2,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
loc_82603428:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r4,r28,r9
	ctx.r4.u64 = r28.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lbzu r29,1(r30)
	ea = 1 + r30.u32;
	r29.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
	// bl 0x82600550
	sub_82600550(ctx, base);
	// mullw r11,r3,r14
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r14.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r22
	cr6.compare<uint32_t>(r31.u32, r22.u32, xer);
	// stbx r29,r11,r24
	PPC_STORE_U8(r11.u32 + r24.u32, r29.u8);
	// blt cr6,0x82603428
	if (cr6.lt) goto loc_82603428;
loc_82603470:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(r25.u32, r18.u32, xer);
	// blt cr6,0x826033dc
	if (cr6.lt) goto loc_826033DC;
loc_8260347C:
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x826033d0
	if (cr6.lt) goto loc_826033D0;
loc_8260348C:
	// lwz r25,116(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82603574
	goto loc_82603574;
loc_82603494:
	// mullw r11,r15,r9
	r11.s64 = int64_t(r15.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r27
	r28.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r15,r7
	cr6.compare<uint32_t>(r15.u32, ctx.r7.u32, xer);
	// bge cr6,0x82603574
	if (!cr6.lt) goto loc_82603574;
	// lwz r11,260(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r27,r19,30,2,31
	r27.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r26,r15,r11
	r26.s64 = r11.s64 - r15.s64;
loc_826034B0:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r19,r18
	cr6.compare<uint32_t>(r19.u32, r18.u32, xer);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// bge cr6,0x82603568
	if (!cr6.lt) goto loc_82603568;
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// rlwinm r30,r21,30,2,31
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_826034DC:
	// lwz r11,596(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// lwz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r6,r10,r23
	ctx.r6.u64 = ctx.r10.u64 + r23.u64;
	// bl 0x8260aaa0
	sub_8260AAA0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(r21.u32, r22.u32, xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// mullw r11,r10,r14
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r14.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// bge cr6,0x82603554
	if (!cr6.lt) goto loc_82603554;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// subf r11,r14,r11
	r11.s64 = r11.s64 - r14.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82603548:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbux r9,r11,r14
	ea = r11.u32 + r14.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// bdnz 0x82603548
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82603548;
loc_82603554:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// bne 0x826034dc
	if (!cr0.eq) goto loc_826034DC;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82603568:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// bne 0x826034b0
	if (!cr0.eq) goto loc_826034B0;
loc_82603574:
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826030ec
	if (cr6.lt) goto loc_826030EC;
	// lwz r29,144(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,148(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82603594:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82603028
	if (!cr6.gt) goto loc_82603028;
loc_826035AC:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x826035cc
	if (!cr6.lt) goto loc_826035CC;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825e60c0
	sub_825E60C0(ctx, base);
loc_826035CC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
}

__attribute__((alias("__imp__sub_826035D4"))) PPC_WEAK_FUNC(sub_826035D4);
PPC_FUNC_IMPL(__imp__sub_826035D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826035D8"))) PPC_WEAK_FUNC(sub_826035D8);
PPC_FUNC_IMPL(__imp__sub_826035D8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r21,0
	r21.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r21,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r21.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(r30.u32, 24, xer);
	// li r5,24
	ctx.r5.s64 = 24;
	// bgt cr6,0x82603620
	if (cr6.gt) goto loc_82603620;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82603620:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,24
	r30.s64 = 24;
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r26,r27,20,28,31
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 20) & 0xF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r6,r11,23,30,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	// clrlwi r22,r10,26
	r22.u64 = ctx.r10.u32 & 0x3F;
	// bl 0x825ff4b0
	sub_825FF4B0(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8260368c
	if (!cr6.eq) goto loc_8260368C;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r23,r1,128
	r23.s64 = ctx.r1.s64 + 128;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_8260368C:
	// rlwinm r11,r27,3,29,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x7;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// rlwinm r24,r27,16,28,31
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xF;
	// slw r25,r9,r11
	r25.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// rlwinm r27,r27,7,28,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xF;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// beq cr6,0x826036e4
	if (cr6.eq) goto loc_826036E4;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x8260ab00
	sub_8260AB00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8260aad0
	sub_8260AAD0(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// stw r25,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r25.u32);
loc_826036E4:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r19,20(r29)
	r19.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x825d3770
	sub_825D3770(ctx, base);
	// cmplwi cr6,r22,18
	cr6.compare<uint32_t>(r22.u32, 18, xer);
	// beq cr6,0x8260374c
	if (cr6.eq) goto loc_8260374C;
	// cmplwi cr6,r22,51
	cr6.compare<uint32_t>(r22.u32, 51, xer);
	// beq cr6,0x8260374c
	if (cr6.eq) goto loc_8260374C;
	// cmplwi cr6,r22,60
	cr6.compare<uint32_t>(r22.u32, 60, xer);
	// beq cr6,0x8260374c
	if (cr6.eq) goto loc_8260374C;
	// cmplwi cr6,r22,19
	cr6.compare<uint32_t>(r22.u32, 19, xer);
	// beq cr6,0x82603744
	if (cr6.eq) goto loc_82603744;
	// cmplwi cr6,r22,52
	cr6.compare<uint32_t>(r22.u32, 52, xer);
	// beq cr6,0x82603744
	if (cr6.eq) goto loc_82603744;
	// cmplwi cr6,r22,20
	cr6.compare<uint32_t>(r22.u32, 20, xer);
	// beq cr6,0x8260373c
	if (cr6.eq) goto loc_8260373C;
	// cmplwi cr6,r22,53
	cr6.compare<uint32_t>(r22.u32, 53, xer);
	// beq cr6,0x8260373c
	if (cr6.eq) goto loc_8260373C;
	// li r11,3
	r11.s64 = 3;
	// b 0x82603750
	goto loc_82603750;
loc_8260373C:
	// li r11,2
	r11.s64 = 2;
	// b 0x82603750
	goto loc_82603750;
loc_82603744:
	// li r11,1
	r11.s64 = 1;
	// b 0x82603750
	goto loc_82603750;
loc_8260374C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82603750:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r10,31800
	r25.s64 = ctx.r10.s64 + 31800;
	// addi r10,r25,192
	ctx.r10.s64 = r25.s64 + 192;
	// lwzx r20,r9,r10
	r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82603880
	if (cr6.eq) goto loc_82603880;
	// mulli r22,r11,6
	r22.s64 = r11.s64 * 6;
loc_82603770:
	// add r11,r22,r21
	r11.u64 = r22.u64 + r21.u64;
	// lwzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r28.u32);
	// addi r9,r25,96
	ctx.r9.s64 = r25.s64 + 96;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r9,r7,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + r25.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bne cr6,0x826037cc
	if (!cr6.eq) goto loc_826037CC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x82600bc0
	sub_82600BC0(ctx, base);
	// b 0x82603868
	goto loc_82603868;
loc_826037CC:
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bne cr6,0x826037f8
	if (!cr6.eq) goto loc_826037F8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x82601420
	sub_82601420(ctx, base);
	// b 0x82603868
	goto loc_82603868;
loc_826037F8:
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// bne cr6,0x82603824
	if (!cr6.eq) goto loc_82603824;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// bl 0x82601c80
	sub_82601C80(ctx, base);
	// b 0x82603868
	goto loc_82603868;
loc_82603824:
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bne cr6,0x82603850
	if (!cr6.eq) goto loc_82603850;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82602518
	sub_82602518(ctx, base);
	// b 0x82603868
	goto loc_82603868;
loc_82603850:
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82602d78
	sub_82602D78(ctx, base);
loc_82603868:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aa78
	sub_8260AA78(ctx, base);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(r21.u32, r20.u32, xer);
	// blt cr6,0x82603770
	if (cr6.lt) goto loc_82603770;
loc_82603880:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bge cr6,0x82603894
	if (!cr6.lt) goto loc_82603894;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_82603894:
	// rlwimi r11,r26,2,26,29
	r11.u64 = (__builtin_rotateleft32(r26.u32, 2) & 0x3C) | (r11.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwinm r10,r11,26,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, xer);
	// bgt cr6,0x826038ac
	if (cr6.gt) goto loc_826038AC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_826038AC:
	// rlwimi r11,r10,6,22,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3C0) | (r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_826038BC"))) PPC_WEAK_FUNC(sub_826038BC);
PPC_FUNC_IMPL(__imp__sub_826038BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_826038C0"))) PPC_WEAK_FUNC(sub_826038C0);
PPC_FUNC_IMPL(__imp__sub_826038C0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,404(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// li r16,0
	r16.s64 = 0;
	// bne cr6,0x82603914
	if (!cr6.eq) goto loc_82603914;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// addi r22,r1,144
	r22.s64 = ctx.r1.s64 + 144;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
loc_82603914:
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// subf r29,r10,r11
	r29.s64 = r11.s64 - ctx.r10.s64;
	// lwz r8,20(r22)
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + 20);
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// subf r27,r10,r8
	r27.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// bne cr6,0x8260395c
	if (!cr6.eq) goto loc_8260395C;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r16.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r16.u32);
loc_8260395C:
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// lwz r31,412(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r10,r5,31
	ctx.r10.s64 = ctx.r5.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r10,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// bne cr6,0x826039b8
	if (!cr6.eq) goto loc_826039B8;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x82604040
	sub_82604040(ctx, base);
	// b 0x826039bc
	goto loc_826039BC;
loc_826039B8:
	// mr r19,r26
	r19.u64 = r26.u64;
loc_826039BC:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r23,r9,r10
	r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r14,r11,r7
	r14.s64 = ctx.r7.s64 - r11.s64;
	// subf r15,r11,r10
	r15.s64 = ctx.r10.s64 - r11.s64;
	// addi r30,r23,6
	r30.s64 = r23.s64 + 6;
	// cmplw cr6,r14,r29
	cr6.compare<uint32_t>(r14.u32, r29.u32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bgt cr6,0x82603a1c
	if (cr6.gt) goto loc_82603A1C;
	// mr r11,r14
	r11.u64 = r14.u64;
loc_82603A1C:
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// slw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82603d30
	if (cr6.eq) goto loc_82603D30;
	// rlwinm r11,r28,28,4,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_82603A44:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r17,r11,30,2,31
	r17.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mullw r10,r9,r17
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r17.s32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// beq cr6,0x82603d10
	if (cr6.eq) goto loc_82603D10;
	// slw r20,r11,r30
	r20.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
loc_82603A78:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// add r11,r16,r11
	r11.u64 = r16.u64 + r11.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r28,r11,2,27,28
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x18;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r7,r3,r30
	ctx.r7.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// mullw r27,r8,r10
	r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r7,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r3,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r29,r7,31
	r29.u64 = ctx.r7.u32 & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r29,1,0,30
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,4,27,27
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r8,r20
	r11.u64 = ctx.r8.u64 + r20.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// srawi r8,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = r11.s32 >> 6;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r16,r9
	ctx.r7.u64 = r16.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r8,r24
	r24.u64 = ctx.r8.u64 + r24.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r10,r31,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r31.u32 << (r23.u8 & 0x3F));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r31,r14
	r31.u64 = r14.u64;
	// cmpw cr6,r14,r15
	cr6.compare<int32_t>(r14.s32, r15.s32, xer);
	// bge cr6,0x82603c38
	if (!cr6.lt) goto loc_82603C38;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r23
	r17.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
loc_82603B7C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r4,r23
	ctx.r8.u64 = r23.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r23.u8 & 0x3F));
	// add r11,r7,r6
	r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + r19.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r31,r15
	cr6.compare<int32_t>(r31.s32, r15.s32, xer);
	// blt cr6,0x82603b7c
	if (cr6.lt) goto loc_82603B7C;
	// lwz r17,112(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82603C38:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82603cf0
	if (!cr6.lt) goto loc_82603CF0;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - r31.s64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r9,r7,r23
	ctx.r9.u64 = r23.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r23.u8 & 0x3F));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r9,r24
	r11.u64 = ctx.r9.u64 + r24.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r5,r23
	ctx.r5.u64 = r23.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r23.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82603CF0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// blt cr6,0x82603a78
	if (cr6.lt) goto loc_82603A78;
	// lwz r27,120(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	r16.s64 = 0;
	// lwz r25,396(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r26,380(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_82603D10:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82603a44
	if (cr6.lt) goto loc_82603A44;
loc_82603D30:
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// bne cr6,0x82603d44
	if (!cr6.eq) goto loc_82603D44;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82603D44:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82603D48"))) PPC_WEAK_FUNC(sub_82603D48);
PPC_FUNC_IMPL(__imp__sub_82603D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82603D4C"))) PPC_WEAK_FUNC(sub_82603D4C);
PPC_FUNC_IMPL(__imp__sub_82603D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82603D50"))) PPC_WEAK_FUNC(sub_82603D50);
PPC_FUNC_IMPL(__imp__sub_82603D50) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x826004f0
	sub_826004F0(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,2624
	ctx.r9.s64 = r11.s64 + 2624;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r6,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r10.s64;
	// subfic r7,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r7.s64 = 31 - r11.s64;
	// rlwinm r10,r21,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r11,r21,31,31,31
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lbzx r9,r20,r9
	ctx.r9.u64 = PPC_LOAD_U8(r20.u32 + ctx.r9.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r17,r9,29,3,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82603e70
	if (cr6.eq) goto loc_82603E70;
	// subf r9,r10,r25
	ctx.r9.s64 = r25.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// sraw r9,r9,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bgt cr6,0x82603dfc
	if (cr6.gt) goto loc_82603DFC;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82603DFC:
	// subf r9,r10,r29
	ctx.r9.s64 = r29.s64 - ctx.r10.s64;
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// cntlzw r8,r28
	ctx.r8.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// subf r9,r8,r11
	ctx.r9.s64 = r11.s64 - ctx.r8.s64;
	// srw r19,r28,r6
	r19.u64 = ctx.r6.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// sraw r9,r9,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x82603e30
	if (cr6.gt) goto loc_82603E30;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_82603E30:
	// subf r8,r10,r30
	ctx.r8.s64 = r30.s64 - ctx.r10.s64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// srw r24,r9,r7
	r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r11,r3,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// sraw r11,r11,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r11.s64 = r11.s32 >> temp.u32;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82603e68
	if (!cr6.gt) goto loc_82603E68;
	// mr r22,r11
	r22.u64 = r11.u64;
	// b 0x82603e8c
	goto loc_82603E8C;
loc_82603E68:
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x82603e8c
	goto loc_82603E8C;
loc_82603E70:
	// add r9,r5,r25
	ctx.r9.u64 = ctx.r5.u64 + r25.u64;
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srw r19,r9,r6
	r19.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r24,r11,r7
	r24.u64 = ctx.r7.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r7.u8 & 0x3F));
	// mr r22,r30
	r22.u64 = r30.u64;
loc_82603E8C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,412(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82603f08
	if (cr6.eq) goto loc_82603F08;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// srw r5,r5,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// srw r11,r10,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// b 0x82603f80
	goto loc_82603F80;
loc_82603F08:
	// subf r11,r10,r25
	r11.s64 = r25.s64 - ctx.r10.s64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// srw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82603f24
	if (cr6.gt) goto loc_82603F24;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82603F24:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r16,r10,r29
	r16.s64 = r29.s64 - ctx.r10.s64;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
	// srw r11,r16,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r16.u32 >> (r31.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bgt cr6,0x82603f4c
	if (cr6.gt) goto loc_82603F4C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82603F4C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// subf r8,r10,r30
	ctx.r8.s64 = r30.s64 - ctx.r10.s64;
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// srw r11,r8,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r31.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// bgt cr6,0x82603f78
	if (cr6.gt) goto loc_82603F78;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82603F78:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
loc_82603F80:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82603fac
	if (cr6.eq) goto loc_82603FAC;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r28,8(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// sraw r27,r11,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r27.s64 = r11.s32 >> temp.u32;
	// sraw r26,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r26.s64 = ctx.r10.s32 >> temp.u32;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r23,r1,104
	r23.s64 = ctx.r1.s64 + 104;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
loc_82603FAC:
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82604004
	if (!cr0.eq) goto loc_82604004;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// rlwinm r9,r21,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r18,r3,r18
	r18.s64 = r18.s64 - ctx.r3.s64;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r23,r1,104
	r23.s64 = ctx.r1.s64 + 104;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82604004:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r9,396(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826038c0
	sub_826038C0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82604038"))) PPC_WEAK_FUNC(sub_82604038);
PPC_FUNC_IMPL(__imp__sub_82604038) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8260403C"))) PPC_WEAK_FUNC(sub_8260403C);
PPC_FUNC_IMPL(__imp__sub_8260403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604040"))) PPC_WEAK_FUNC(sub_82604040);
PPC_FUNC_IMPL(__imp__sub_82604040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// clrlwi. r9,r4,30
	ctx.r9.u64 = ctx.r4.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// b 0x82604070
	goto loc_82604070;
loc_82604050:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82604078
	if (cr6.lt) goto loc_82604078;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82604070:
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x82604050
	if (!cr0.eq) goto loc_82604050;
loc_82604078:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x826040a8
	if (cr0.eq) goto loc_826040A8;
loc_82604080:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x826040a8
	if (cr6.lt) goto loc_826040A8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x82604080
	if (!cr0.eq) goto loc_82604080;
loc_826040A8:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x826040d8
	if (cr0.eq) goto loc_826040D8;
loc_826040B0:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x826040d8
	if (cr6.lt) goto loc_826040D8;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// bne 0x826040b0
	if (!cr0.eq) goto loc_826040B0;
loc_826040D8:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82604104
	goto loc_82604104;
loc_826040E0:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x826041b0
	if (cr6.lt) goto loc_826041B0;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_82604104:
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x826040e0
	if (!cr6.lt) goto loc_826040E0;
	// b 0x826041b0
	goto loc_826041B0;
loc_82604118:
	// li r8,15
	ctx.r8.s64 = 15;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82604134:
	// lvrx128 v62,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r8,-16
	ctx.r6.s64 = ctx.r8.s64 + -16;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvrx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r7,-16
	ctx.r3.s64 = ctx.r7.s64 + -16;
	// vor128 v62,v62,v61
	_mm_store_si128((__m128i*)v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lvrx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r6,r7,16
	ctx.r6.s64 = ctx.r7.s64 + 16;
	// vor128 v61,v60,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r5,-64
	ctx.r5.s64 = ctx.r5.s64 + -64;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// vor128 v60,v60,v59
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v59.u8)));
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvlx128 v61,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvrx128 v61,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v61.u8[i]);
	// stvlx128 v62,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// stvlx128 v60,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvrx128 v60,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v60.u8[i]);
	// bdnz 0x82604134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604134;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
loc_826041B0:
	// cmplwi cr6,r5,143
	cr6.compare<uint32_t>(ctx.r5.u32, 143, xer);
	// bge cr6,0x82604118
	if (!cr6.lt) goto loc_82604118;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x826041e4
	if (cr6.lt) goto loc_826041E4;
	// rlwinm r8,r5,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_826041C8:
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stvlx128 v63,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x826041c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826041C8;
loc_826041E4:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82604210
	if (cr0.eq) goto loc_82604210;
loc_826041EC:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x82604210
	if (cr6.lt) goto loc_82604210;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x826041ec
	if (!cr0.eq) goto loc_826041EC;
loc_82604210:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8260423c
	if (cr0.eq) goto loc_8260423C;
loc_82604218:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x8260423c
	if (cr6.lt) goto loc_8260423C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82604218
	if (!cr0.eq) goto loc_82604218;
loc_8260423C:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_82604248:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82604248
	if (!cr0.eq) goto loc_82604248;
}

__attribute__((alias("__imp__sub_82604268"))) PPC_WEAK_FUNC(sub_82604268);
PPC_FUNC_IMPL(__imp__sub_82604268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260426C"))) PPC_WEAK_FUNC(sub_8260426C);
PPC_FUNC_IMPL(__imp__sub_8260426C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604270"))) PPC_WEAK_FUNC(sub_82604270);
PPC_FUNC_IMPL(__imp__sub_82604270) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r7,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826042b8
	if (!cr6.eq) goto loc_826042B8;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r21,r1,112
	r21.s64 = ctx.r1.s64 + 112;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
loc_826042B8:
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r9,12(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// subf r17,r10,r11
	r17.s64 = r11.s64 - ctx.r10.s64;
	// subf r26,r8,r9
	r26.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// bne cr6,0x826042ec
	if (!cr6.eq) goto loc_826042EC;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_826042EC:
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(r28.u32, r18.u32, xer);
	// rlwinm r27,r11,0,0,26
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82604334
	if (!cr6.eq) goto loc_82604334;
	// addi r11,r5,31
	r11.s64 = ctx.r5.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x82604040
	sub_82604040(ctx, base);
	// b 0x82604338
	goto loc_82604338;
loc_82604334:
	// mr r19,r28
	r19.u64 = r28.u64;
loc_82604338:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r17
	ctx.r5.u64 = r11.u64 + r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r15,r11,r7
	r15.s64 = ctx.r7.s64 - r11.s64;
	// subf r16,r11,r10
	r16.s64 = ctx.r10.s64 - r11.s64;
	// addi r30,r29,6
	r30.s64 = r29.s64 + 6;
	// cmplw cr6,r15,r17
	cr6.compare<uint32_t>(r15.u32, r17.u32, xer);
	// mr r11,r17
	r11.u64 = r17.u64;
	// bgt cr6,0x82604398
	if (cr6.gt) goto loc_82604398;
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82604398:
	// slw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82604624
	if (cr6.eq) goto loc_82604624;
	// rlwinm r11,r27,27,5,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_826043B0:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r11,r14,r11
	r11.u64 = r14.u64 + r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// rlwinm r28,r11,2,27,28
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r31,r10,r28
	r31.u64 = ctx.r10.u64 + r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r27,r6,r9
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r31,r11,29,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r25,r31,r30
	r25.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r11,30,30,30
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x2;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r24,r11,4,27,27
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r23,r11,28,31,31
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r11,r9,1,29,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r9,r6
	r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r10,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r14,r7
	ctx.r7.u64 = r14.u64 + ctx.r7.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// slw r8,r4,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r22,r7,r3
	r22.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r22
	ctx.r10.u64 = ctx.r8.u64 + r22.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	cr6.compare<int32_t>(r15.s32, r16.s32, xer);
	// bge cr6,0x8260455c
	if (!cr6.lt) goto loc_8260455C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
loc_826044A0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r4,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// add r11,r7,r6
	r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + r22.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + r19.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r31,r16
	cr6.compare<int32_t>(r31.s32, r16.s32, xer);
	// blt cr6,0x826044a0
	if (cr6.lt) goto loc_826044A0;
	// lwz r17,92(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8260455C:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(r31.u32, r17.u32, xer);
	// bge cr6,0x82604610
	if (!cr6.lt) goto loc_82604610;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r5,r31,r17
	ctx.r5.s64 = r17.s64 - r31.s64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r9,r7,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r29.u8 & 0x3F));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r9,r22
	r11.u64 = ctx.r9.u64 + r22.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r5,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82604610:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(r14.u32, r11.u32, xer);
	// blt cr6,0x826043b0
	if (cr6.lt) goto loc_826043B0;
	// lwz r28,340(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82604624:
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(r28.u32, r18.u32, xer);
	// bne cr6,0x82604638
	if (!cr6.eq) goto loc_82604638;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82604638:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8260463C"))) PPC_WEAK_FUNC(sub_8260463C);
PPC_FUNC_IMPL(__imp__sub_8260463C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82604640"))) PPC_WEAK_FUNC(sub_82604640);
PPC_FUNC_IMPL(__imp__sub_82604640) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82604688
	if (!cr6.eq) goto loc_82604688;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
loc_82604688:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r17,r10,r11
	r17.s64 = r11.s64 - ctx.r10.s64;
	// subf r25,r6,r9
	r25.s64 = ctx.r9.s64 - ctx.r6.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// bne cr6,0x826046bc
	if (!cr6.eq) goto loc_826046BC;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_826046BC:
	// addi r11,r7,31
	r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// rlwinm r26,r11,0,0,26
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82604704
	if (!cr6.eq) goto loc_82604704;
	// addi r11,r8,31
	r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x82604040
	sub_82604040(ctx, base);
	// b 0x82604708
	goto loc_82604708;
loc_82604704:
	// mr r19,r27
	r19.u64 = r27.u64;
loc_82604708:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r17
	ctx.r5.u64 = r11.u64 + r17.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r15,r11,r7
	r15.s64 = ctx.r7.s64 - r11.s64;
	// subf r16,r11,r10
	r16.s64 = ctx.r10.s64 - r11.s64;
	// addi r30,r29,6
	r30.s64 = r29.s64 + 6;
	// cmplw cr6,r15,r17
	cr6.compare<uint32_t>(r15.u32, r17.u32, xer);
	// mr r11,r17
	r11.u64 = r17.u64;
	// bgt cr6,0x82604768
	if (cr6.gt) goto loc_82604768;
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82604768:
	// slw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x826049f4
	if (cr6.eq) goto loc_826049F4;
	// rlwinm r11,r26,27,5,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82604780:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r14,r11
	r11.u64 = r14.u64 + r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// rlwinm r27,r11,2,27,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x18;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r26,r6,r9
	r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r31,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r31,r11,29,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,30,30,30
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r24,r31,r30
	r24.u64 = r30.u8 & 0x20 ? 0 : (r31.u32 << (r30.u8 & 0x3F));
	// rlwinm r23,r11,4,27,27
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x10;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r22,r11,28,31,31
	r22.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// rlwinm r11,r9,1,29,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// srawi r9,r10,6
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r8,r11,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r8,r6
	r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r10,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 + r14.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r21,r7,r3
	r21.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// slw r10,r4,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + r18.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	cr6.compare<int32_t>(r15.s32, r16.s32, xer);
	// bge cr6,0x8260492c
	if (!cr6.lt) goto loc_8260492C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
loc_82604870:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r6,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r29.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r21
	ctx.r8.u64 = r11.u64 + r21.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + r18.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r31,r16
	cr6.compare<int32_t>(r31.s32, r16.s32, xer);
	// blt cr6,0x82604870
	if (cr6.lt) goto loc_82604870;
	// lwz r17,92(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8260492C:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(r31.u32, r17.u32, xer);
	// bge cr6,0x826049e0
	if (!cr6.lt) goto loc_826049E0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r6,r31,r17
	ctx.r6.s64 = r17.s64 - r31.s64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + r25.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r5,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r29.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r29.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_826049E0:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(r14.u32, r11.u32, xer);
	// blt cr6,0x82604780
	if (cr6.lt) goto loc_82604780;
	// lwz r27,332(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_826049F4:
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// bne cr6,0x82604a08
	if (!cr6.eq) goto loc_82604A08;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82604A08:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82604A0C"))) PPC_WEAK_FUNC(sub_82604A0C);
PPC_FUNC_IMPL(__imp__sub_82604A0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82604A10"))) PPC_WEAK_FUNC(sub_82604A10);
PPC_FUNC_IMPL(__imp__sub_82604A10) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82604A10"))) PPC_WEAK_FUNC(sub_82604A10);
PPC_FUNC_IMPL(__imp__sub_82604A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82604270
	sub_82604270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604A14"))) PPC_WEAK_FUNC(sub_82604A14);
PPC_FUNC_IMPL(__imp__sub_82604A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604A18"))) PPC_WEAK_FUNC(sub_82604A18);
PPC_FUNC_IMPL(__imp__sub_82604A18) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x826004f0
	sub_826004F0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r8,r11,2624
	ctx.r8.s64 = r11.s64 + 2624;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	r11.s64 = 31 - ctx.r10.s64;
	// subfic r6,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r9.s64;
	// rlwinm r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + r11.u64;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lbzx r8,r25,r8
	ctx.r8.u64 = PPC_LOAD_U8(r25.u32 + ctx.r8.u32);
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r19,r8,29,3,31
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82604b00
	if (cr6.eq) goto loc_82604B00;
	// subf r8,r9,r27
	ctx.r8.s64 = r27.s64 - ctx.r9.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// sraw r8,r8,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bgt cr6,0x82604ac4
	if (cr6.gt) goto loc_82604AC4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82604AC4:
	// subf r8,r9,r30
	ctx.r8.s64 = r30.s64 - ctx.r9.s64;
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cntlzw r5,r29
	ctx.r5.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srw r22,r8,r11
	r22.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82604af8
	if (cr6.gt) goto loc_82604AF8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604AF8:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x82604b10
	goto loc_82604B10;
loc_82604B00:
	// add r8,r7,r27
	ctx.r8.u64 = ctx.r7.u64 + r27.u64;
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + r30.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r22,r8,r11
	r22.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
loc_82604B10:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// srw r23,r10,r6
	r23.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82604b78
	if (cr6.eq) goto loc_82604B78;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r7,r7,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// sraw r10,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// srw r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// b 0x82604bcc
	goto loc_82604BCC;
loc_82604B78:
	// subf r10,r9,r27
	ctx.r10.s64 = r27.s64 - ctx.r9.s64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x82604b94
	if (cr6.gt) goto loc_82604B94;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604B94:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r9,r30
	ctx.r5.s64 = r30.s64 - ctx.r9.s64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srw r10,r5,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r31.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// srw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bgt cr6,0x82604bbc
	if (cr6.gt) goto loc_82604BBC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604BBC:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
loc_82604BCC:
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82604bf4
	if (cr6.eq) goto loc_82604BF4;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r24,r1,88
	r24.s64 = ctx.r1.s64 + 88;
	// sraw r29,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r29.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r28,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r28.s64 = ctx.r9.s32 >> temp.u32;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
loc_82604BF4:
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82604c40
	if (!cr0.eq) goto loc_82604C40;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r26,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r21,r3,r21
	r21.s64 = r21.s64 - ctx.r3.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r24,r1,88
	r24.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82604C40:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82604270
	sub_82604270(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82604C68"))) PPC_WEAK_FUNC(sub_82604C68);
PPC_FUNC_IMPL(__imp__sub_82604C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82604C6C"))) PPC_WEAK_FUNC(sub_82604C6C);
PPC_FUNC_IMPL(__imp__sub_82604C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604C70"))) PPC_WEAK_FUNC(sub_82604C70);
PPC_FUNC_IMPL(__imp__sub_82604C70) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82604C70"))) PPC_WEAK_FUNC(sub_82604C70);
PPC_FUNC_IMPL(__imp__sub_82604C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82604640
	sub_82604640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82604C74"))) PPC_WEAK_FUNC(sub_82604C74);
PPC_FUNC_IMPL(__imp__sub_82604C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604C78"))) PPC_WEAK_FUNC(sub_82604C78);
PPC_FUNC_IMPL(__imp__sub_82604C78) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x826004f0
	sub_826004F0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r7,r11,2624
	ctx.r7.s64 = r11.s64 + 2624;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r11,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	r11.s64 = 31 - ctx.r10.s64;
	// subfic r8,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// rlwinm r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r10,r24,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lbzx r7,r23,r7
	ctx.r7.u64 = PPC_LOAD_U8(r23.u32 + ctx.r7.u32);
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r17,r7,29,3,31
	r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82604d60
	if (cr6.eq) goto loc_82604D60;
	// subf r7,r9,r25
	ctx.r7.s64 = r25.s64 - ctx.r9.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// sraw r7,r7,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bgt cr6,0x82604d24
	if (cr6.gt) goto loc_82604D24;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82604D24:
	// subf r7,r9,r26
	ctx.r7.s64 = r26.s64 - ctx.r9.s64;
	// addi r31,r7,-1
	r31.s64 = ctx.r7.s64 + -1;
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cntlzw r5,r31
	ctx.r5.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srw r21,r7,r11
	r21.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r10,r10,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x82604d58
	if (cr6.gt) goto loc_82604D58;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604D58:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x82604d70
	goto loc_82604D70;
loc_82604D60:
	// add r7,r6,r25
	ctx.r7.u64 = ctx.r6.u64 + r25.u64;
	// add r10,r4,r26
	ctx.r10.u64 = ctx.r4.u64 + r26.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srw r21,r7,r11
	r21.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
loc_82604D70:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// srw r22,r10,r8
	r22.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// beq cr6,0x82604d9c
	if (cr6.eq) goto loc_82604D9C;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r7,4(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r20,r1,88
	r20.s64 = ctx.r1.s64 + 88;
	// sraw r10,r10,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// sraw r7,r7,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r7.s64 = ctx.r7.s32 >> temp.u32;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82604D9C:
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82604de8
	if (cr6.eq) goto loc_82604DE8;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sraw r28,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	r28.s64 = ctx.r6.s32 >> temp.u32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// sraw r27,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	r27.s64 = ctx.r10.s32 >> temp.u32;
	// srw r29,r7,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// srw r31,r9,r8
	r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// b 0x82604e44
	goto loc_82604E44;
loc_82604DE8:
	// subf r10,r9,r25
	ctx.r10.s64 = r25.s64 - ctx.r9.s64;
	// li r28,0
	r28.s64 = 0;
	// srw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r30.u8 & 0x3F));
	// li r27,0
	r27.s64 = 0;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// bgt cr6,0x82604e0c
	if (cr6.gt) goto loc_82604E0C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604E0C:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r9,r26
	ctx.r5.s64 = r26.s64 - ctx.r9.s64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srw r10,r5,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r30.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// srw r29,r7,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bgt cr6,0x82604e34
	if (cr6.gt) goto loc_82604E34;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82604E34:
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srw r31,r11,r8
	r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
loc_82604E44:
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82604ea8
	if (!cr0.eq) goto loc_82604EA8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r24,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82600310
	sub_82600310(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// subf r6,r3,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r3.s64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// b 0x82604eac
	goto loc_82604EAC;
loc_82604EA8:
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82604EAC:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82604640
	sub_82604640(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82604ED0"))) PPC_WEAK_FUNC(sub_82604ED0);
PPC_FUNC_IMPL(__imp__sub_82604ED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82604ED4"))) PPC_WEAK_FUNC(sub_82604ED4);
PPC_FUNC_IMPL(__imp__sub_82604ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82604ED8"))) PPC_WEAK_FUNC(sub_82604ED8);
PPC_FUNC_IMPL(__imp__sub_82604ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x82604f10
	if (!cr6.lt) goto loc_82604F10;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82605074
	if (cr6.eq) {
		sub_82605074(ctx, base);
		return;
	}
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_82604F00:
	// stbx r10,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82604f00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604F00;
	// b 0x82605074
	sub_82605074(ctx, base);
	return;
loc_82604F10:
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// vspltisb v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// srawi r8,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	ctx.v0.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0xF))));
	// beq 0x82604f4c
	if (cr0.eq) goto loc_82604F4C;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - r11.s64;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
loc_82604F4C:
	// rlwinm r11,r5,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82604f5c
	if (!cr6.lt) goto loc_82604F5C;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_82604F5C:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r6,28244(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28244);
	// beq cr6,0x82604f7c
	if (cr6.eq) goto loc_82604F7C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82604F70:
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x82604f70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604F70;
loc_82604F7C:
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - r11.s64;
	// rlwinm r11,r7,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x82604fac
	if (!cr0.eq) goto loc_82604FAC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82605048
	if (cr6.eq) goto loc_82605048;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82604F9C:
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82604f9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604F9C;
	// b 0x82605048
	goto loc_82605048;
loc_82604FAC:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// blt cr6,0x82604fbc
	if (cr6.lt) goto loc_82604FBC;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82604FBC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82604fdc
	if (cr6.eq) goto loc_82604FDC;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82604FCC:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82604fcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604FCC;
loc_82604FDC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82605048
	if (cr6.eq) goto loc_82605048;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82604FEC:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82605000
	if (!cr6.lt) goto loc_82605000;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
loc_82605000:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	r31.s64 = 64;
	// li r30,80
	r30.s64 = 80;
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,96
	r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82604fec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82604FEC;
loc_82605048:
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82605070
	if (cr6.lt) goto loc_82605070;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82605060:
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x82605060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605060;
loc_82605070:
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
}

__attribute__((alias("__imp__sub_82605074"))) PPC_WEAK_FUNC(sub_82605074);
PPC_FUNC_IMPL(__imp__sub_82605074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82605078"))) PPC_WEAK_FUNC(sub_82605078);
PPC_FUNC_IMPL(__imp__sub_82605078) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826050e4
	if (cr6.eq) goto loc_826050E4;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826050e4
	if (cr6.eq) goto loc_826050E4;
	// andi. r11,r6,144
	r11.u64 = ctx.r6.u64 & 144;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,144
	cr6.compare<uint32_t>(r11.u32, 144, xer);
	// beq cr6,0x826050e4
	if (cr6.eq) goto loc_826050E4;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826050c0
	if (!cr6.eq) goto loc_826050C0;
	// rlwinm. r31,r6,0,24,24
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x826050c0
	if (!cr0.eq) goto loc_826050C0;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_826050C0:
	// rlwinm. r11,r11,0,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826050d4
	if (cr0.eq) goto loc_826050D4;
	// clrlwi r11,r6,28
	r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826050e4
	if (!cr6.eq) goto loc_826050E4;
loc_826050D4:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8314ce3c
	__imp__XamContentCreateEx(ctx, base);
	// b 0x826050e8
	goto loc_826050E8;
loc_826050E4:
	// li r3,87
	ctx.r3.s64 = 87;
loc_826050E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826050F8"))) PPC_WEAK_FUNC(sub_826050F8);
PPC_FUNC_IMPL(__imp__sub_826050F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826050FC"))) PPC_WEAK_FUNC(sub_826050FC);
PPC_FUNC_IMPL(__imp__sub_826050FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605100"))) PPC_WEAK_FUNC(sub_82605100);
PPC_FUNC_IMPL(__imp__sub_82605100) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce4c
	__imp__XamContentClose(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605104"))) PPC_WEAK_FUNC(sub_82605104);
PPC_FUNC_IMPL(__imp__sub_82605104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605108"))) PPC_WEAK_FUNC(sub_82605108);
PPC_FUNC_IMPL(__imp__sub_82605108) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce5c
	__imp__XamContentFlush(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260510C"))) PPC_WEAK_FUNC(sub_8260510C);
PPC_FUNC_IMPL(__imp__sub_8260510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605110"))) PPC_WEAK_FUNC(sub_82605110);
PPC_FUNC_IMPL(__imp__sub_82605110) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce6c
	__imp__XamContentGetCreator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605114"))) PPC_WEAK_FUNC(sub_82605114);
PPC_FUNC_IMPL(__imp__sub_82605114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605118"))) PPC_WEAK_FUNC(sub_82605118);
PPC_FUNC_IMPL(__imp__sub_82605118) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce7c
	__imp__XamContentGetLicenseMask(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260511C"))) PPC_WEAK_FUNC(sub_8260511C);
PPC_FUNC_IMPL(__imp__sub_8260511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605120"))) PPC_WEAK_FUNC(sub_82605120);
PPC_FUNC_IMPL(__imp__sub_82605120) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce8c
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605124"))) PPC_WEAK_FUNC(sub_82605124);
PPC_FUNC_IMPL(__imp__sub_82605124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605128"))) PPC_WEAK_FUNC(sub_82605128);
PPC_FUNC_IMPL(__imp__sub_82605128) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ce9c
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260512C"))) PPC_WEAK_FUNC(sub_8260512C);
PPC_FUNC_IMPL(__imp__sub_8260512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605130"))) PPC_WEAK_FUNC(sub_82605130);
PPC_FUNC_IMPL(__imp__sub_82605130) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ceac
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605134"))) PPC_WEAK_FUNC(sub_82605134);
PPC_FUNC_IMPL(__imp__sub_82605134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605138"))) PPC_WEAK_FUNC(sub_82605138);
PPC_FUNC_IMPL(__imp__sub_82605138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	r11.s64 = r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82605178
	if (!cr6.gt) goto loc_82605178;
	// addi r10,r11,169
	ctx.r10.s64 = r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// b 0x8260517c
	goto loc_8260517C;
loc_82605178:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8260517C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82605190
	if (!cr6.gt) goto loc_82605190;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// b 0x82605194
	goto loc_82605194;
loc_82605190:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82605194:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(r11.u64, 12) & 0xFFFFFFFFFFFFF000;
}

__attribute__((alias("__imp__sub_826051B0"))) PPC_WEAK_FUNC(sub_826051B0);
PPC_FUNC_IMPL(__imp__sub_826051B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826051B4"))) PPC_WEAK_FUNC(sub_826051B4);
PPC_FUNC_IMPL(__imp__sub_826051B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826051B8"))) PPC_WEAK_FUNC(sub_826051B8);
PPC_FUNC_IMPL(__imp__sub_826051B8) {
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82605078
	sub_82605078(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826051F0"))) PPC_WEAK_FUNC(sub_826051F0);
PPC_FUNC_IMPL(__imp__sub_826051F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826051F4"))) PPC_WEAK_FUNC(sub_826051F4);
PPC_FUNC_IMPL(__imp__sub_826051F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826051F8"))) PPC_WEAK_FUNC(sub_826051F8);
PPC_FUNC_IMPL(__imp__sub_826051F8) {
	PPC_FUNC_PROLOGUE();
	// li r4,9
	ctx.r4.s64 = 9;
}

__attribute__((alias("__imp__sub_826051FC"))) PPC_WEAK_FUNC(sub_826051FC);
PPC_FUNC_IMPL(__imp__sub_826051FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cecc
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605200"))) PPC_WEAK_FUNC(sub_82605200);
PPC_FUNC_IMPL(__imp__sub_82605200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,4114
	ctx.r4.u64 = ctx.r4.u64 | 4114;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x8314cedc
	__imp__XMsgInProcessCall(ctx, base);
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605240"))) PPC_WEAK_FUNC(sub_82605240);
PPC_FUNC_IMPL(__imp__sub_82605240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605244"))) PPC_WEAK_FUNC(sub_82605244);
PPC_FUNC_IMPL(__imp__sub_82605244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605248"))) PPC_WEAK_FUNC(sub_82605248);
PPC_FUNC_IMPL(__imp__sub_82605248) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
}

__attribute__((alias("__imp__sub_82605258"))) PPC_WEAK_FUNC(sub_82605258);
PPC_FUNC_IMPL(__imp__sub_82605258) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ceec
	__imp__XamShowMarketplaceDownloadItemsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260525C"))) PPC_WEAK_FUNC(sub_8260525C);
PPC_FUNC_IMPL(__imp__sub_8260525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605260"))) PPC_WEAK_FUNC(sub_82605260);
PPC_FUNC_IMPL(__imp__sub_82605260) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260529c
	if (cr6.eq) goto loc_8260529C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8260abc0
	sub_8260ABC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826052a0
	goto loc_826052A0;
loc_8260529C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826052A0:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826052dc
	if (cr0.lt) goto loc_826052DC;
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x826052d0
	if (cr6.eq) goto loc_826052D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826052D0:
	// bl 0x8260ab50
	sub_8260AB50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826052e4
	goto loc_826052E4;
loc_826052DC:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826052E4:
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

__attribute__((alias("__imp__sub_826052F8"))) PPC_WEAK_FUNC(sub_826052F8);
PPC_FUNC_IMPL(__imp__sub_826052F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826052FC"))) PPC_WEAK_FUNC(sub_826052FC);
PPC_FUNC_IMPL(__imp__sub_826052FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605300"))) PPC_WEAK_FUNC(sub_82605300);
PPC_FUNC_IMPL(__imp__sub_82605300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28316);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605330
	if (cr0.lt) goto loc_82605330;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605338
	goto loc_82605338;
loc_82605330:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

