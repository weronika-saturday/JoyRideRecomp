#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82620EF0"))) PPC_WEAK_FUNC(sub_82620EF0);
PPC_FUNC_IMPL(__imp__sub_82620EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x82620f48
	if (cr0.lt) goto loc_82620F48;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82620F24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82621040
	if (cr6.lt) goto loc_82621040;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x82621040
	if (!cr6.lt) goto loc_82621040;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82620f24
	if (!cr0.lt) goto loc_82620F24;
loc_82620F48:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bne cr6,0x82620f64
	if (!cr6.eq) goto loc_82620F64;
	// addi r23,r1,88
	r23.s64 = ctx.r1.s64 + 88;
loc_82620F64:
	// lwz r27,8(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82621034
	if (cr0.lt) goto loc_82621034;
loc_82620F74:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r31,r11,384
	r31.s64 = r11.s64 + 384;
	// ble cr6,0x82620ffc
	if (!cr6.gt) goto loc_82620FFC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r29,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r29.s64 = r31.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82621040
	if (cr0.eq) goto loc_82621040;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82621040
	if (cr0.eq) goto loc_82621040;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r29,r11
	ctx.r5.s64 = r11.s64 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82621040
	if (cr0.eq) goto loc_82621040;
loc_82620FFC:
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261f810
	sub_8261F810(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// clrlwi r6,r31,29
	ctx.r6.u64 = r31.u32 & 0x7;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r24,4
	ctx.r4.s64 = r24.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82620d88
	sub_82620D88(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r25,r25,r22
	r25.u64 = r25.u64 + r22.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x82620f74
	if (!cr0.lt) goto loc_82620F74;
loc_82621034:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9450
	return;
loc_82621040:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82621044"))) PPC_WEAK_FUNC(sub_82621044);
PPC_FUNC_IMPL(__imp__sub_82621044) {
	PPC_FUNC_PROLOGUE();
	// b 0x82621038
	// ERROR 82621038
	return;
}

__attribute__((alias("__imp__sub_82621048"))) PPC_WEAK_FUNC(sub_82621048);
PPC_FUNC_IMPL(__imp__sub_82621048) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82620e00
	sub_82620E00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826210dc
	if (cr0.eq) goto loc_826210DC;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,331
	r11.s64 = r11.s64 + 331;
	// srawi r3,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r3.s64 = r11.s32 >> 3;
	// b 0x826210e0
	goto loc_826210E0;
loc_826210DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826210E0:
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

__attribute__((alias("__imp__sub_826210F4"))) PPC_WEAK_FUNC(sub_826210F4);
PPC_FUNC_IMPL(__imp__sub_826210F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826210F8"))) PPC_WEAK_FUNC(sub_826210F8);
PPC_FUNC_IMPL(__imp__sub_826210F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// add r27,r11,r9
	r27.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r11,r11,-25600
	r11.s64 = r11.s64 + -25600;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// add r6,r27,r29
	ctx.r6.u64 = r27.u64 + r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lvlx128 v127,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v127,1,1
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v127.f32), 147), 1));
	// stvx128 v63,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// lvx128 v63,r0,r31
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v63,v127,1,1
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v127.f32), 147), 1));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_82621184"))) PPC_WEAK_FUNC(sub_82621184);
PPC_FUNC_IMPL(__imp__sub_82621184) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82621188"))) PPC_WEAK_FUNC(sub_82621188);
PPC_FUNC_IMPL(__imp__sub_82621188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// add r27,r11,r9
	r27.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,16
	ctx.r7.s64 = r30.s64 + 16;
	// addi r11,r11,-25600
	r11.s64 = r11.s64 + -25600;
	// add r6,r27,r28
	ctx.r6.u64 = r27.u64 + r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,1,1
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 147), 1));
	// stvx128 v62,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82620ab0
	sub_82620AB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826211F4"))) PPC_WEAK_FUNC(sub_826211F4);
PPC_FUNC_IMPL(__imp__sub_826211F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826211F8"))) PPC_WEAK_FUNC(sub_826211F8);
PPC_FUNC_IMPL(__imp__sub_826211F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22820(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22820);
	// lwz r9,22812(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22812);
	// lwz r10,22916(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22916);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r5,22920(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22920);
	// addi r11,r11,391
	r11.s64 = r11.s64 + 391;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82621238
	if (cr6.lt) goto loc_82621238;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82621238:
	// lwz r4,22924(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22924);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82621048
	sub_82621048(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82621270"))) PPC_WEAK_FUNC(sub_82621270);
PPC_FUNC_IMPL(__imp__sub_82621270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82621274"))) PPC_WEAK_FUNC(sub_82621274);
PPC_FUNC_IMPL(__imp__sub_82621274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621278"))) PPC_WEAK_FUNC(sub_82621278);
PPC_FUNC_IMPL(__imp__sub_82621278) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,22920(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22920);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826211f8
	sub_826211F8(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x826212ac
	if (cr6.lt) goto loc_826212AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826211f8
	sub_826211F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826212AC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,22920(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22920);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82621048
	sub_82621048(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
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

__attribute__((alias("__imp__sub_826212EC"))) PPC_WEAK_FUNC(sub_826212EC);
PPC_FUNC_IMPL(__imp__sub_826212EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826212F0"))) PPC_WEAK_FUNC(sub_826212F0);
PPC_FUNC_IMPL(__imp__sub_826212F0) {
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
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// lfs f0,3384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// mr r22,r11
	r22.u64 = r11.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x82621340
	if (!cr6.eq) goto loc_82621340;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
loc_82621340:
	// lwz r9,52(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r6,44(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,104(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// lwz r8,100(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r9,96(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// addi r10,r10,331
	ctx.r10.s64 = ctx.r10.s64 + 331;
	// srawi r24,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r24.s64 = ctx.r10.s32 >> 3;
	// bge cr6,0x826213d4
	if (!cr6.lt) goto loc_826213D4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826213c8
	if (cr0.eq) goto loc_826213C8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x826213cc
	if (!cr0.eq) goto loc_826213CC;
loc_826213C8:
	// li r11,0
	r11.s64 = 0;
loc_826213CC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x826215a0
	goto loc_826215A0;
loc_826213D4:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x826213e0
	if (!cr6.gt) goto loc_826213E0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_826213E0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8262159c
	if (cr0.eq) goto loc_8262159C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8262159c
	if (cr0.eq) goto loc_8262159C;
	// mullw r11,r26,r30
	r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// addi r11,r11,11
	r11.s64 = r11.s64 + 11;
	// li r29,4
	r29.s64 = 4;
	// srawi r28,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r28.s64 = r11.s32 >> 3;
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// blt cr6,0x82621438
	if (cr6.lt) goto loc_82621438;
	// li r28,512
	r28.s64 = 512;
loc_82621438:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8262159c
	if (cr0.eq) goto loc_8262159C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82621464:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82619148
	sub_82619148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82621550
	if (cr6.eq) goto loc_82621550;
	// subfic r28,r26,4096
	xer.ca = r26.u32 <= 4096;
	r28.s64 = 4096 - r26.s64;
loc_8262147C:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bgt cr6,0x826214ac
	if (cr6.gt) goto loc_826214AC;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826210f8
	sub_826210F8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r23,r23,r21
	r23.u64 = r23.u64 + r21.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// bne 0x8262147c
	if (!cr0.eq) goto loc_8262147C;
loc_826214AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82621550
	if (cr6.eq) goto loc_82621550;
	// srawi r9,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	ctx.r9.s64 = r29.s32 >> 3;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// subfic r28,r9,512
	xer.ca = ctx.r9.u32 <= 512;
	r28.s64 = 512 - ctx.r9.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r28,-1
	xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x826214ec
	if (cr0.lt) goto loc_826214EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826214DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x826214dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826214DC;
loc_826214EC:
	// clrlwi r29,r29,29
	r29.u64 = r29.u32 & 0x7;
	// mullw r11,r30,r26
	r11.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8262150c
	if (cr6.gt) goto loc_8262150C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8262150C:
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// blt cr6,0x8262151c
	if (cr6.lt) goto loc_8262151C;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_8262151C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8262159c
	if (cr0.eq) goto loc_8262159C;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// b 0x82621464
	goto loc_82621464;
loc_82621550:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// bge cr6,0x82621594
	if (!cr6.lt) goto loc_82621594;
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r4,r3,r24
	ctx.r4.s64 = r24.s64 - ctx.r3.s64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82621594:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826215a0
	goto loc_826215A0;
loc_8262159C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826215A0:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
}

__attribute__((alias("__imp__sub_826215A4"))) PPC_WEAK_FUNC(sub_826215A4);
PPC_FUNC_IMPL(__imp__sub_826215A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_826215A8"))) PPC_WEAK_FUNC(sub_826215A8);
PPC_FUNC_IMPL(__imp__sub_826215A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + r11.u64;
	// lwz r27,40(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r10,92(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r27,r26,r27
	r27.u64 = r26.u64 + r27.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82621188
	sub_82621188(ctx, base);
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// add r6,r11,r28
	ctx.r6.u64 = r11.u64 + r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82620d08
	sub_82620D08(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-25600
	r11.s64 = r11.s64 + -25600;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,1,1
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 147), 1));
	// stvx128 v62,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82621630"))) PPC_WEAK_FUNC(sub_82621630);
PPC_FUNC_IMPL(__imp__sub_82621630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82621634"))) PPC_WEAK_FUNC(sub_82621634);
PPC_FUNC_IMPL(__imp__sub_82621634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82621638"))) PPC_WEAK_FUNC(sub_82621638);
PPC_FUNC_IMPL(__imp__sub_82621638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCVRegister vTemp{};
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826215a8
	sub_826215A8(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)v61.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v52,r0,r9
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v60,-1
	_mm_store_si128((__m128i*)v60.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vsubfp128 v9,v52,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v26,r0,r10
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r11
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v53,v54,v26
	_mm_store_ps(v53.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(v26.f32), 0xFF));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vslw128 v62,v60,v60
	v62.u32[0] = v60.u32[0] << (v60.u8[0] & 0x1F);
	v62.u32[1] = v60.u32[1] << (v60.u8[4] & 0x1F);
	v62.u32[2] = v60.u32[2] << (v60.u8[8] & 0x1F);
	v62.u32[3] = v60.u32[3] << (v60.u8[12] & 0x1F);
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v61.u8));
	// vupkd3d128 v59,v61,4
	temp.f32 = 3.0f;
	temp.s32 += v61.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v61.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v59 = vTemp;
	// vslw128 v57,v60,v60
	v57.u32[0] = v60.u32[0] << (v60.u8[0] & 0x1F);
	v57.u32[1] = v60.u32[1] << (v60.u8[4] & 0x1F);
	v57.u32[2] = v60.u32[2] << (v60.u8[8] & 0x1F);
	v57.u32[3] = v60.u32[3] << (v60.u8[12] & 0x1F);
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vsldoi128 v62,v62,v61,12
	_mm_store_si128((__m128i*)v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8), 4));
	// vspltisw128 v56,-8
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// vpermwi128 v55,v59,234
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x15));
	// vcsxwfp128 v58,v63,16
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// vspltw128 v11,v59,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vcsxwfp128 v10,v63,1
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v29,v59,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vmaddfp v12,v9,v8,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp128 v7,v61,v53
	_mm_store_ps(ctx.v7.f32, _mm_cmpgt_ps(_mm_load_ps(v61.f32), _mm_load_ps(v53.f32)));
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsubfp128 v58,v11,v58
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v58.f32)));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vslw128 v56,v60,v56
	v56.u32[0] = v60.u32[0] << (v56.u8[0] & 0x1F);
	v56.u32[1] = v60.u32[1] << (v56.u8[4] & 0x1F);
	v56.u32[2] = v60.u32[2] << (v56.u8[8] & 0x1F);
	v56.u32[3] = v60.u32[3] << (v56.u8[12] & 0x1F);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v52,r0,r10
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v52,v52,v61,8
	_mm_store_si128((__m128i*)v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v61.u8), 8));
	// vsel v9,v0,v13,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// addi r10,r8,30160
	ctx.r10.s64 = ctx.r8.s64 + 30160;
	// vxor128 v62,v52,v62
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v62.u8)));
	// vor128 v52,v9,v9
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vaddfp128 v55,v55,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v55.f32, _mm_add_ps(_mm_load_ps(v55.f32), _mm_load_ps(v62.f32)));
	// vxor128 v62,v53,v52
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vor128 v12,v62,v62
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrefp128 v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vcmpgtfp128 v25,v58,v62
	_mm_store_ps(v25.f32, _mm_cmpgt_ps(_mm_load_ps(v58.f32), _mm_load_ps(v62.f32)));
	// vslw128 v58,v62,v63
	v58.u32[0] = v62.u32[0] << (v63.u8[0] & 0x1F);
	v58.u32[1] = v62.u32[1] << (v63.u8[4] & 0x1F);
	v58.u32[2] = v62.u32[2] << (v63.u8[8] & 0x1F);
	v58.u32[3] = v62.u32[3] << (v63.u8[12] & 0x1F);
	// vcmpeqfp128 v23,v62,v61
	_mm_store_ps(v23.f32, _mm_cmpeq_ps(_mm_load_ps(v62.f32), _mm_load_ps(v61.f32)));
	// vor128 v1,v62,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v62.u8));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v53,v11,v11
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrsqrtefp128 v0,v53
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v53.f32))));
	// vor128 v9,v53,v53
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v53.u8));
	// vmulfp128 v12,v53,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v51,v0,v0
	_mm_store_ps(v51.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v50,v10,v10
	_mm_store_ps(v50.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v53,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v12,v50,v51
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vsel v12,v0,v9,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vand128 v62,v62,v57
	_mm_store_si128((__m128i*)v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v53,v12,v12
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vnmsubfp v12,v0,v13,v29
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vand128 v51,v53,v57
	_mm_store_si128((__m128i*)v51.u8, _mm_and_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vslw128 v50,v53,v63
	v50.u32[0] = v53.u32[0] << (v63.u8[0] & 0x1F);
	v50.u32[1] = v53.u32[1] << (v63.u8[4] & 0x1F);
	v50.u32[2] = v53.u32[2] << (v63.u8[8] & 0x1F);
	v50.u32[3] = v53.u32[3] << (v63.u8[12] & 0x1F);
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcmpequw128 v8,v62,v61
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v61.u32)));
	// vcmpequw128 v27,v50,v56
	_mm_store_si128((__m128i*)v27.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v50.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vcmpeqfp128 v22,v53,v61
	_mm_store_ps(v22.f32, _mm_cmpeq_ps(_mm_load_ps(v53.f32), _mm_load_ps(v61.f32)));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vcmpequw128 v28,v58,v56
	_mm_store_si128((__m128i*)v28.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v58.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vspltw128 v56,v63,2
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vor128 v6,v51,v51
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v51.u8));
	// vspltw128 v50,v63,3
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vor v31,v13,v13
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v58,v63,1
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v49,v62,v51
	_mm_store_si128((__m128i*)v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v51.u8)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vor128 v10,v56,v51
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vspltw128 v0,v59,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vor128 v12,v50,v51
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8)));
	// addi r9,r9,30144
	ctx.r9.s64 = ctx.r9.s64 + 30144;
	// vor128 v2,v58,v51
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v51.u8)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vor128 v7,v49,v49
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v49.u8));
	// vcsxwfp128 v47,v60,0
	_mm_store_ps(v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v60.u32)));
	// vor128 v5,v60,v60
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v60.u8));
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// vsel v9,v12,v10,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v57,v60,v60
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v60.u8));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsel v24,v7,v6,v8
	_mm_store_si128((__m128i*)v24.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vsel v12,v5,v2,v23
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw128 v58,v63,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vsel v10,v2,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v2,v1,v13,v29
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vslw128 v57,v57,v57
	v57.u32[0] = v57.u32[0] << (v57.u8[0] & 0x1F);
	v57.u32[1] = v57.u32[1] << (v57.u8[4] & 0x1F);
	v57.u32[2] = v57.u32[2] << (v57.u8[8] & 0x1F);
	v57.u32[3] = v57.u32[3] << (v57.u8[12] & 0x1F);
	// vor128 v48,v24,v24
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v24.u8));
	// vcmpeqfp v24,v13,v13
	_mm_store_ps(v24.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v30,v61,v61
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v61.u8));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vor128 v3,v58,v58
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)v58.u8));
	// addi r9,r9,30112
	ctx.r9.s64 = ctx.r9.s64 + 30112;
	// addi r10,r10,30096
	ctx.r10.s64 = ctx.r10.s64 + 30096;
	// vspltw128 v11,v63,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v9,v48,v48
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v48.u8));
	// vspltw128 v4,v63,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vor128 v5,v48,v48
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v48.u8));
	// vspltw128 v51,v62,2
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v50,v62,0
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v46,v62,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vsel v7,v12,v9,v22
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw128 v56,v63,3
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v44,v63,3
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vsel v12,v7,v10,v27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v48,v12,v12
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v10,v5,v12,v27
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vor128 v9,v48,v48
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v48.u8));
	// vsel v12,v9,v10,v28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v48,v12,v12
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v12,v31,v13,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v24,v62,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v31,v63,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v29,v62,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// addi r10,r10,2608
	ctx.r10.s64 = ctx.r10.s64 + 2608;
	// vmulfp128 v45,v53,v12
	_mm_store_ps(v45.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v27,v62,1
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vandc128 v12,v45,v57
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vcmpgtfp128 v21,v61,v45
	_mm_store_ps(v21.f32, _mm_cmpgt_ps(_mm_load_ps(v61.f32), _mm_load_ps(v45.f32)));
	// vcmpgtfp v10,v12,v0
	_mm_store_ps(ctx.v10.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vrefp v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vsel v6,v30,v3,v10
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v30.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vnmsubfp v30,v12,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v7,v4,v11,v10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v30,v62,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vnmsubfp v2,v12,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v28,v62,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor128 v43,v56,v57
	_mm_store_si128((__m128i*)v43.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v57.u8)));
	// addi r9,r9,2512
	ctx.r9.s64 = ctx.r9.s64 + 2512;
	// vcmpgtfp128 v22,v45,v56
	_mm_store_ps(v22.f32, _mm_cmpgt_ps(_mm_load_ps(v45.f32), _mm_load_ps(v56.f32)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v56,v63,3
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r8,r10,2528
	ctx.r8.s64 = ctx.r10.s64 + 2528;
	// vcmpgtfp128 v23,v43,v45
	_mm_store_ps(v23.f32, _mm_cmpgt_ps(_mm_load_ps(v43.f32), _mm_load_ps(v45.f32)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v9,v13,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v11,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vaddfp128 v5,v13,v50
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v50.f32)));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v12,v13,v24,v13
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v2,v13,v51
	_mm_store_ps(ctx.v2.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v51.f32)));
	// vrefp v13,v5
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v5.f32)));
	// vaddfp128 v62,v12,v47
	_mm_store_ps(v62.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v47.f32)));
	// vsel v15,v6,v7,v2
	_mm_store_si128((__m128i*)v15.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vxor128 v6,v58,v57
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v7,v48,v48
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v48.u8));
	// vnmsubfp v24,v5,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v24,v5,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpequw128 v24,v48,v60
	_mm_store_si128((__m128i*)v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vsel v9,v12,v13,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v62,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v9.f32)));
	// vrefp128 v9,v53
	_mm_store_ps(ctx.v9.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v53.f32)));
	// vsel v12,v11,v13,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v2,v49,v49
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v49.u8));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v62,v12,v57
	_mm_store_si128((__m128i*)v62.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v20,v46,v62
	_mm_store_ps(v20.f32, _mm_cmpgt_ps(_mm_load_ps(v46.f32), _mm_load_ps(v62.f32)));
	// vaddfp128 v11,v13,v44
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v44.f32)));
	// vmaddfp v11,v13,v11,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v11,v13,v11,v1
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v11,v13,v11,v31
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v31,v13,v29,v30
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v29.f32)), _mm_load_ps(v30.f32)));
	// vor128 v30,v53,v53
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v53.u8));
	// vspltw128 v29,v59,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vnmsubfp v18,v30,v9,v29
	_mm_store_ps(v18.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v62,v11,v11
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmaddfp v16,v13,v31,v27
	_mm_store_ps(v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v31.f32)), _mm_load_ps(v27.f32)));
	// vrefp128 v11,v62
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v5,v62,v62
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v1,v62,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v62.u8));
	// vnmsubfp v4,v5,v11,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v11,v11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v5,v58,v58
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmaddfp v11,v11,v4,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v11.f32)));
	// vor128 v4,v61,v61
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v61.u8));
	// lvx128 v61,r0,r7
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsel v17,v2,v4,v8
	_mm_store_si128((__m128i*)v17.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vmaddfp v2,v13,v16,v28
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v16.f32)), _mm_load_ps(v28.f32)));
	// vspltw128 v8,v63,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vor128 v4,v53,v53
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v53.u8));
	// vspltw128 v27,v63,1
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// addi r9,r9,2544
	ctx.r9.s64 = ctx.r9.s64 + 2544;
	// vspltw128 v30,v63,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vnmsubfp v31,v1,v11,v0
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v19,v11,v11
	_mm_store_ps(v19.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v9,v18,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v18.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v60,v2,v13
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v11,v31,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v11.f32)));
	// vspltw128 v31,v63,3
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v1,v63,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vsel v2,v3,v11,v19
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vcmpeqfp v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v3,v60,v2
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v2.f32)));
	// vnmsubfp v2,v4,v0,v29
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v3,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vmaddfp v0,v0,v2,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v2,v63,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vsel v4,v13,v12,v20
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v29,v9,v0,v11
	_mm_store_si128((__m128i*)v29.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v60,v4,v4
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vspltw128 v4,v63,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vxor128 v0,v60,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v60.u8));
	// vsel v12,v13,v0,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v9,v61,v10
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v12,v12,v15
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v15.f32)));
	// vxor128 v0,v12,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v13,v12,v0,v21
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v13,v5,v22
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v5,v62,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vsel v13,v0,v6,v23
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v6,v62,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vaddfp v0,v13,v17
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v17.f32)));
	// vsel v13,v7,v0,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v7,v62,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vmulfp128 v0,v55,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v63,v0,v56
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v56.f32)));
	// vrfin128 v13,v63
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v0,v8,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v8,v62,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vor128 v13,v55,v55
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmulfp128 v63,v0,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v63
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v27,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v30,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v31,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v1,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v3,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v4,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v5,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v6,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v7,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v8,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v29
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v29.f32)));
	// vsel v12,v13,v0,v25
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v54,v63
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v63.f32)));
	// vxor128 v0,v62,v52
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vmaddfp v0,v26,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v9,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82621B44"))) PPC_WEAK_FUNC(sub_82621B44);
PPC_FUNC_IMPL(__imp__sub_82621B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82621B48"))) PPC_WEAK_FUNC(sub_82621B48);
PPC_FUNC_IMPL(__imp__sub_82621B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	PPCVRegister vTemp{};
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82621188
	sub_82621188(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r0,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)v61.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v52,r0,r9
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v60,-1
	_mm_store_si128((__m128i*)v60.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vsubfp128 v9,v52,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v26,r0,r10
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r11
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v53,v54,v26
	_mm_store_ps(v53.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(v26.f32), 0xFF));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vslw128 v62,v60,v60
	v62.u32[0] = v60.u32[0] << (v60.u8[0] & 0x1F);
	v62.u32[1] = v60.u32[1] << (v60.u8[4] & 0x1F);
	v62.u32[2] = v60.u32[2] << (v60.u8[8] & 0x1F);
	v62.u32[3] = v60.u32[3] << (v60.u8[12] & 0x1F);
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v61.u8));
	// vupkd3d128 v59,v61,4
	temp.f32 = 3.0f;
	temp.s32 += v61.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v61.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v59 = vTemp;
	// vslw128 v57,v60,v60
	v57.u32[0] = v60.u32[0] << (v60.u8[0] & 0x1F);
	v57.u32[1] = v60.u32[1] << (v60.u8[4] & 0x1F);
	v57.u32[2] = v60.u32[2] << (v60.u8[8] & 0x1F);
	v57.u32[3] = v60.u32[3] << (v60.u8[12] & 0x1F);
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vsldoi128 v62,v62,v61,12
	_mm_store_si128((__m128i*)v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8), 4));
	// vspltisw128 v56,-8
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// vpermwi128 v55,v59,234
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x15));
	// vcsxwfp128 v58,v63,16
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// vspltw128 v11,v59,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vcsxwfp128 v10,v63,1
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v29,v59,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vmaddfp v12,v9,v8,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp128 v7,v61,v53
	_mm_store_ps(ctx.v7.f32, _mm_cmpgt_ps(_mm_load_ps(v61.f32), _mm_load_ps(v53.f32)));
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsubfp128 v58,v11,v58
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v58.f32)));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vslw128 v56,v60,v56
	v56.u32[0] = v60.u32[0] << (v56.u8[0] & 0x1F);
	v56.u32[1] = v60.u32[1] << (v56.u8[4] & 0x1F);
	v56.u32[2] = v60.u32[2] << (v56.u8[8] & 0x1F);
	v56.u32[3] = v60.u32[3] << (v56.u8[12] & 0x1F);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v52,r0,r10
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v52,v52,v61,8
	_mm_store_si128((__m128i*)v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v61.u8), 8));
	// vsel v9,v0,v13,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// addi r10,r8,30160
	ctx.r10.s64 = ctx.r8.s64 + 30160;
	// vxor128 v62,v52,v62
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v62.u8)));
	// vor128 v52,v9,v9
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vaddfp128 v55,v55,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v55.f32, _mm_add_ps(_mm_load_ps(v55.f32), _mm_load_ps(v62.f32)));
	// vxor128 v62,v53,v52
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vor128 v12,v62,v62
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrefp128 v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vcmpgtfp128 v25,v58,v62
	_mm_store_ps(v25.f32, _mm_cmpgt_ps(_mm_load_ps(v58.f32), _mm_load_ps(v62.f32)));
	// vslw128 v58,v62,v63
	v58.u32[0] = v62.u32[0] << (v63.u8[0] & 0x1F);
	v58.u32[1] = v62.u32[1] << (v63.u8[4] & 0x1F);
	v58.u32[2] = v62.u32[2] << (v63.u8[8] & 0x1F);
	v58.u32[3] = v62.u32[3] << (v63.u8[12] & 0x1F);
	// vcmpeqfp128 v23,v62,v61
	_mm_store_ps(v23.f32, _mm_cmpeq_ps(_mm_load_ps(v62.f32), _mm_load_ps(v61.f32)));
	// vor128 v1,v62,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v62.u8));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v53,v11,v11
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrsqrtefp128 v0,v53
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v53.f32))));
	// vor128 v9,v53,v53
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v53.u8));
	// vmulfp128 v12,v53,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v51,v0,v0
	_mm_store_ps(v51.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v12,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v50,v10,v10
	_mm_store_ps(v50.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v53,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v12,v50,v51
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vsel v12,v0,v9,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vand128 v62,v62,v57
	_mm_store_si128((__m128i*)v62.u8, _mm_and_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v53,v12,v12
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vnmsubfp v12,v0,v13,v29
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vand128 v51,v53,v57
	_mm_store_si128((__m128i*)v51.u8, _mm_and_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vslw128 v50,v53,v63
	v50.u32[0] = v53.u32[0] << (v63.u8[0] & 0x1F);
	v50.u32[1] = v53.u32[1] << (v63.u8[4] & 0x1F);
	v50.u32[2] = v53.u32[2] << (v63.u8[8] & 0x1F);
	v50.u32[3] = v53.u32[3] << (v63.u8[12] & 0x1F);
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcmpequw128 v8,v62,v61
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v61.u32)));
	// vcmpequw128 v27,v50,v56
	_mm_store_si128((__m128i*)v27.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v50.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vcmpeqfp128 v22,v53,v61
	_mm_store_ps(v22.f32, _mm_cmpeq_ps(_mm_load_ps(v53.f32), _mm_load_ps(v61.f32)));
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vcmpequw128 v28,v58,v56
	_mm_store_si128((__m128i*)v28.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v58.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vspltw128 v56,v63,2
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vor128 v6,v51,v51
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v51.u8));
	// vspltw128 v50,v63,3
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vor v31,v13,v13
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v58,v63,1
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v49,v62,v51
	_mm_store_si128((__m128i*)v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v51.u8)));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vor128 v10,v56,v51
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vspltw128 v0,v59,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vor128 v12,v50,v51
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8)));
	// addi r9,r9,30144
	ctx.r9.s64 = ctx.r9.s64 + 30144;
	// vor128 v2,v58,v51
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v51.u8)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vor128 v7,v49,v49
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v49.u8));
	// vcsxwfp128 v47,v60,0
	_mm_store_ps(v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v60.u32)));
	// vor128 v5,v60,v60
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v60.u8));
	// addi r10,r10,30128
	ctx.r10.s64 = ctx.r10.s64 + 30128;
	// vsel v9,v12,v10,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v57,v60,v60
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v60.u8));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsel v24,v7,v6,v8
	_mm_store_si128((__m128i*)v24.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vsel v12,v5,v2,v23
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vspltw128 v58,v63,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vsel v10,v2,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v2,v1,v13,v29
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vslw128 v57,v57,v57
	v57.u32[0] = v57.u32[0] << (v57.u8[0] & 0x1F);
	v57.u32[1] = v57.u32[1] << (v57.u8[4] & 0x1F);
	v57.u32[2] = v57.u32[2] << (v57.u8[8] & 0x1F);
	v57.u32[3] = v57.u32[3] << (v57.u8[12] & 0x1F);
	// vor128 v48,v24,v24
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v24.u8));
	// vcmpeqfp v24,v13,v13
	_mm_store_ps(v24.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v30,v61,v61
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v61.u8));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vor128 v3,v58,v58
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)v58.u8));
	// addi r9,r9,30112
	ctx.r9.s64 = ctx.r9.s64 + 30112;
	// addi r10,r10,30096
	ctx.r10.s64 = ctx.r10.s64 + 30096;
	// vspltw128 v11,v63,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v9,v48,v48
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v48.u8));
	// vspltw128 v4,v63,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vor128 v5,v48,v48
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v48.u8));
	// vspltw128 v51,v62,2
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v50,v62,0
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v46,v62,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vsel v7,v12,v9,v22
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw128 v56,v63,3
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v44,v63,3
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vsel v12,v7,v10,v27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v48,v12,v12
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v10,v5,v12,v27
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vor128 v9,v48,v48
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v48.u8));
	// vsel v12,v9,v10,v28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v48,v12,v12
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v12,v31,v13,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v24,v62,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v31,v63,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v29,v62,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// addi r10,r10,2608
	ctx.r10.s64 = ctx.r10.s64 + 2608;
	// vmulfp128 v45,v53,v12
	_mm_store_ps(v45.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v27,v62,1
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vandc128 v12,v45,v57
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vcmpgtfp128 v21,v61,v45
	_mm_store_ps(v21.f32, _mm_cmpgt_ps(_mm_load_ps(v61.f32), _mm_load_ps(v45.f32)));
	// vcmpgtfp v10,v12,v0
	_mm_store_ps(ctx.v10.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vrefp v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vsel v6,v30,v3,v10
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v30.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vnmsubfp v30,v12,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v7,v4,v11,v10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v30,v62,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vnmsubfp v2,v12,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v28,v62,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor128 v43,v56,v57
	_mm_store_si128((__m128i*)v43.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v57.u8)));
	// addi r9,r9,2512
	ctx.r9.s64 = ctx.r9.s64 + 2512;
	// vcmpgtfp128 v22,v45,v56
	_mm_store_ps(v22.f32, _mm_cmpgt_ps(_mm_load_ps(v45.f32), _mm_load_ps(v56.f32)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v56,v63,3
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// addi r10,r10,2528
	ctx.r10.s64 = ctx.r10.s64 + 2528;
	// vcmpgtfp128 v23,v43,v45
	_mm_store_ps(v23.f32, _mm_cmpgt_ps(_mm_load_ps(v43.f32), _mm_load_ps(v45.f32)));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v9,v13,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v12,v11,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vaddfp128 v5,v13,v50
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v50.f32)));
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v12,v13,v24,v13
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v2,v13,v51
	_mm_store_ps(ctx.v2.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v51.f32)));
	// vrefp v13,v5
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v5.f32)));
	// vaddfp128 v62,v12,v47
	_mm_store_ps(v62.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v47.f32)));
	// vsel v15,v6,v7,v2
	_mm_store_si128((__m128i*)v15.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vxor128 v6,v58,v57
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v7,v48,v48
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v48.u8));
	// vnmsubfp v24,v5,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v24,v5,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpequw128 v24,v48,v60
	_mm_store_si128((__m128i*)v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vsel v9,v12,v13,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v62,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v9.f32)));
	// vrefp128 v9,v53
	_mm_store_ps(ctx.v9.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v53.f32)));
	// vsel v12,v11,v13,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v2,v49,v49
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v49.u8));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v62,v12,v57
	_mm_store_si128((__m128i*)v62.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v20,v46,v62
	_mm_store_ps(v20.f32, _mm_cmpgt_ps(_mm_load_ps(v46.f32), _mm_load_ps(v62.f32)));
	// vaddfp128 v11,v13,v44
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v44.f32)));
	// vmaddfp v11,v13,v11,v3
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v11,v13,v11,v1
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v11,v13,v11,v31
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v31,v13,v29,v30
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v29.f32)), _mm_load_ps(v30.f32)));
	// vspltw128 v29,v59,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vor128 v30,v53,v53
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v53.u8));
	// vnmsubfp v18,v30,v9,v29
	_mm_store_ps(v18.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v62,v11,v11
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmaddfp v16,v13,v31,v27
	_mm_store_ps(v16.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v31.f32)), _mm_load_ps(v27.f32)));
	// vrefp128 v11,v62
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v5,v62,v62
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v1,v62,v62
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v62.u8));
	// vnmsubfp v4,v5,v11,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v11,v11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v5,v58,v58
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmaddfp v11,v11,v4,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v11.f32)));
	// vor128 v4,v61,v61
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v61.u8));
	// vsel v17,v2,v4,v8
	_mm_store_si128((__m128i*)v17.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vmaddfp v2,v13,v16,v28
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v16.f32)), _mm_load_ps(v28.f32)));
	// vor128 v4,v53,v53
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v53.u8));
	// vspltw128 v8,v63,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r9,r9,2544
	ctx.r9.s64 = ctx.r9.s64 + 2544;
	// vspltw128 v27,v63,1
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vnmsubfp v31,v1,v11,v0
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v1,v63,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vcmpeqfp v19,v11,v11
	_mm_store_ps(v19.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v9,v18,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v18.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v61,v2,v13
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v11,v31,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsel v2,v3,v11,v19
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vcmpeqfp v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v3,v61,v2
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v2.f32)));
	// vnmsubfp v2,v4,v0,v29
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v3,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v0,v2,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v2,v63,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v3,v63,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vsel v4,v13,v12,v20
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v31,v9,v0,v11
	_mm_store_si128((__m128i*)v31.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v9,v62,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vor128 v61,v4,v4
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vspltw128 v4,v63,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vxor128 v0,v61,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v13,v61,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v61.u8));
	// vsel v12,v13,v0,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v10,v62,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vaddfp v12,v12,v15
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v15.f32)));
	// vxor128 v0,v12,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v13,v12,v0,v21
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v13,v5,v22
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v5,v63,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vsel v13,v0,v6,v23
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v6,v63,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vaddfp v0,v13,v17
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v17.f32)));
	// vsel v13,v7,v0,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v7,v62,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vmulfp128 v0,v55,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v63,v0,v56
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v56.f32)));
	// vrfin128 v13,v63
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v0,v8,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v8,v62,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vor128 v13,v55,v55
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmulfp128 v63,v0,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v63
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v27,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v1,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v3,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v4,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v5,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v6,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v7,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v8,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v9,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v31.f32)));
	// vsel v12,v13,v0,v25
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v54,v63
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v63.f32)));
	// vxor128 v0,v62,v52
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vmaddfp v0,v26,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8262201C"))) PPC_WEAK_FUNC(sub_8262201C);
PPC_FUNC_IMPL(__imp__sub_8262201C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622020"))) PPC_WEAK_FUNC(sub_82622020);
PPC_FUNC_IMPL(__imp__sub_82622020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7088(r1)
	ea = -7088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82621278
	sub_82621278(ctx, base);
	// lwz r10,22920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 22920);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82622070
	if (cr6.gt) goto loc_82622070;
	// lwz r10,22924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 22924);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x826220e8
	goto loc_826220E8;
loc_82622070:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82619048
	sub_82619048(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ld r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r11,88(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 88);
	// lvx128 v62,r8,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,48
	r30.s64 = 48;
	// lvx128 v62,r0,r6
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r3,3776
	ctx.r9.s64 = ctx.r3.s64 + 3776;
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r3,32
	ctx.r3.s64 = 32;
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// vor128 v60,v61,v61
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v61.u8));
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, r11.u64);
	// stvx128 v61,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r3
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r30
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826220E8:
	// addi r1,r1,7088
	ctx.r1.s64 = ctx.r1.s64 + 7088;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826220FC"))) PPC_WEAK_FUNC(sub_826220FC);
PPC_FUNC_IMPL(__imp__sub_826220FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622100"))) PPC_WEAK_FUNC(sub_82622100);
PPC_FUNC_IMPL(__imp__sub_82622100) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82620e00
	sub_82620E00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622180
	if (cr0.eq) goto loc_82622180;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826212f0
	sub_826212F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82622184
	if (!cr0.eq) goto loc_82622184;
loc_82622180:
	// li r11,0
	r11.s64 = 0;
loc_82622184:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8262218C"))) PPC_WEAK_FUNC(sub_8262218C);
PPC_FUNC_IMPL(__imp__sub_8262218C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82622190"))) PPC_WEAK_FUNC(sub_82622190);
PPC_FUNC_IMPL(__imp__sub_82622190) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826221bc
	if (cr6.lt) goto loc_826221BC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826221BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82622240
	if (cr6.eq) goto loc_82622240;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,104
	r31.s64 = ctx.r4.s64 + 104;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_826221D0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,-96
	ctx.r4.s64 = r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826215a8
	sub_826215A8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r9,-52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + -48);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// bne 0x826221d0
	if (!cr0.eq) goto loc_826221D0;
loc_82622240:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82622244"))) PPC_WEAK_FUNC(sub_82622244);
PPC_FUNC_IMPL(__imp__sub_82622244) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82622248"))) PPC_WEAK_FUNC(sub_82622248);
PPC_FUNC_IMPL(__imp__sub_82622248) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82622274
	if (cr6.lt) goto loc_82622274;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82622274:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826222f8
	if (cr6.eq) goto loc_826222F8;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,104
	r31.s64 = ctx.r4.s64 + 104;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82622288:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,-96
	ctx.r4.s64 = r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82621638
	sub_82621638(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r9,-52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r6,-48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + -48);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,156
	r31.s64 = r31.s64 + 156;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// bne 0x82622288
	if (!cr0.eq) goto loc_82622288;
loc_826222F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826222FC"))) PPC_WEAK_FUNC(sub_826222FC);
PPC_FUNC_IMPL(__imp__sub_826222FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82622300"))) PPC_WEAK_FUNC(sub_82622300);
PPC_FUNC_IMPL(__imp__sub_82622300) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8262232c
	if (cr6.lt) goto loc_8262232C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8262232C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82622398
	if (cr6.eq) goto loc_82622398;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,104
	r31.s64 = ctx.r4.s64 + 104;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82622340:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,-96
	ctx.r4.s64 = r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82621188
	sub_82621188(ctx, base);
	// lwz r9,-52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -48);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x82622340
	if (!cr0.eq) goto loc_82622340;
loc_82622398:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262239C"))) PPC_WEAK_FUNC(sub_8262239C);
PPC_FUNC_IMPL(__imp__sub_8262239C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826223A0"))) PPC_WEAK_FUNC(sub_826223A0);
PPC_FUNC_IMPL(__imp__sub_826223A0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826223cc
	if (cr6.lt) goto loc_826223CC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826223CC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82622438
	if (cr6.eq) goto loc_82622438;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,104
	r31.s64 = ctx.r4.s64 + 104;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_826223E0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r31,-96
	ctx.r4.s64 = r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82621b48
	sub_82621B48(ctx, base);
	// lwz r9,-52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -52);
	// lwz r11,-56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -56);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r10,-48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -48);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,104
	r31.s64 = r31.s64 + 104;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// bne 0x826223e0
	if (!cr0.eq) goto loc_826223E0;
loc_82622438:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8262243C"))) PPC_WEAK_FUNC(sub_8262243C);
PPC_FUNC_IMPL(__imp__sub_8262243C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82622440"))) PPC_WEAK_FUNC(sub_82622440);
PPC_FUNC_IMPL(__imp__sub_82622440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x82622494
	if (cr0.lt) goto loc_82622494;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82622470:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x826225d0
	if (cr6.lt) goto loc_826225D0;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x826225d0
	if (!cr6.lt) goto loc_826225D0;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82622470
	if (!cr0.lt) goto loc_82622470;
loc_82622494:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lfs f0,3384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x826224c8
	if (!cr6.eq) goto loc_826224C8;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
loc_826224C8:
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,52(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,48(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// addi r31,r5,4
	r31.s64 = ctx.r5.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,104(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// lwz r9,100(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r10,96(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// blt 0x826225c4
	if (cr0.lt) goto loc_826225C4;
loc_82622504:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// addi r29,r11,324
	r29.s64 = r11.s64 + 324;
	// ble cr6,0x8262258c
	if (!cr6.gt) goto loc_8262258C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srawi r27,r29,3
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	r27.s64 = r29.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826225d0
	if (cr0.eq) goto loc_826225D0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826225d0
	if (cr0.eq) goto loc_826225D0;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r5,r27,r11
	ctx.r5.s64 = r11.s64 - r27.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826225d0
	if (cr0.eq) goto loc_826225D0;
loc_8262258C:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82619298
	sub_82619298(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// clrlwi r6,r29,29
	ctx.r6.u64 = r29.u32 & 0x7;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826210f8
	sub_826210F8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r24,r24,r22
	r24.u64 = r24.u64 + r22.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bge 0x82622504
	if (!cr0.lt) goto loc_82622504;
loc_826225C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9450
	return;
loc_826225D0:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826225D4"))) PPC_WEAK_FUNC(sub_826225D4);
PPC_FUNC_IMPL(__imp__sub_826225D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826225c8
	// ERROR 826225C8
	return;
}

__attribute__((alias("__imp__sub_826225D8"))) PPC_WEAK_FUNC(sub_826225D8);
PPC_FUNC_IMPL(__imp__sub_826225D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5408(r1)
	ea = -5408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x82622634
	if (cr0.lt) goto loc_82622634;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82622610:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82622760
	if (cr6.lt) goto loc_82622760;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x82622760
	if (!cr6.lt) goto loc_82622760;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82622610
	if (!cr0.lt) goto loc_82622610;
loc_82622634:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,72
	ctx.r8.s64 = 72;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lfs f0,3384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bne cr6,0x82622684
	if (!cr6.eq) goto loc_82622684;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
loc_82622684:
	// lwz r27,8(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82622754
	if (cr0.lt) goto loc_82622754;
loc_82622694:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r31,r11,31600
	r31.s64 = r11.s64 + 31600;
	// ble cr6,0x8262271c
	if (!cr6.gt) goto loc_8262271C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r29,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r29.s64 = r31.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622760
	if (cr0.eq) goto loc_82622760;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622760
	if (cr0.eq) goto loc_82622760;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r29,r11
	ctx.r5.s64 = r11.s64 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622760
	if (cr0.eq) goto loc_82622760;
loc_8262271C:
	// li r5,2592
	ctx.r5.s64 = 2592;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,2720
	ctx.r3.s64 = ctx.r1.s64 + 2720;
	// bl 0x8261f6c0
	sub_8261F6C0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// clrlwi r6,r31,29
	ctx.r6.u64 = r31.u32 & 0x7;
	// addi r5,r1,2720
	ctx.r5.s64 = ctx.r1.s64 + 2720;
	// addi r4,r24,4
	ctx.r4.s64 = r24.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82622190
	sub_82622190(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r25,r25,r22
	r25.u64 = r25.u64 + r22.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x82622694
	if (!cr0.lt) goto loc_82622694;
loc_82622754:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,5408
	ctx.r1.s64 = ctx.r1.s64 + 5408;
	// b 0x828e9450
	return;
loc_82622760:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82622764"))) PPC_WEAK_FUNC(sub_82622764);
PPC_FUNC_IMPL(__imp__sub_82622764) {
	PPC_FUNC_PROLOGUE();
	// b 0x82622758
	// ERROR 82622758
	return;
}

__attribute__((alias("__imp__sub_82622768"))) PPC_WEAK_FUNC(sub_82622768);
PPC_FUNC_IMPL(__imp__sub_82622768) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5440(r1)
	ea = -5440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x826227c4
	if (cr0.lt) goto loc_826227C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_826227A0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x826228fc
	if (cr6.lt) goto loc_826228FC;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x826228fc
	if (!cr6.lt) goto loc_826228FC;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x826227a0
	if (!cr0.lt) goto loc_826227A0;
loc_826227C4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,72
	ctx.r7.s64 = 72;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lfs f0,3384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lfs f13,5288(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bne cr6,0x82622820
	if (!cr6.eq) goto loc_82622820;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
loc_82622820:
	// lwz r27,8(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x826228f0
	if (cr0.lt) goto loc_826228F0;
loc_82622830:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r31,r11,31600
	r31.s64 = r11.s64 + 31600;
	// ble cr6,0x826228b8
	if (!cr6.gt) goto loc_826228B8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r29,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r29.s64 = r31.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826228fc
	if (cr0.eq) goto loc_826228FC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826228fc
	if (cr0.eq) goto loc_826228FC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r29,r11
	ctx.r5.s64 = r11.s64 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826228fc
	if (cr0.eq) goto loc_826228FC;
loc_826228B8:
	// li r5,2592
	ctx.r5.s64 = 2592;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,2752
	ctx.r3.s64 = ctx.r1.s64 + 2752;
	// bl 0x8261f6c0
	sub_8261F6C0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// clrlwi r6,r31,29
	ctx.r6.u64 = r31.u32 & 0x7;
	// addi r5,r1,2752
	ctx.r5.s64 = ctx.r1.s64 + 2752;
	// addi r4,r24,4
	ctx.r4.s64 = r24.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82622248
	sub_82622248(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r25,r25,r22
	r25.u64 = r25.u64 + r22.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x82622830
	if (!cr0.lt) goto loc_82622830;
loc_826228F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,5440
	ctx.r1.s64 = ctx.r1.s64 + 5440;
	// b 0x828e9450
	return;
loc_826228FC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82622900"))) PPC_WEAK_FUNC(sub_82622900);
PPC_FUNC_IMPL(__imp__sub_82622900) {
	PPC_FUNC_PROLOGUE();
	// b 0x826228f4
	// ERROR 826228F4
	return;
}

__attribute__((alias("__imp__sub_82622904"))) PPC_WEAK_FUNC(sub_82622904);
PPC_FUNC_IMPL(__imp__sub_82622904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82622908"))) PPC_WEAK_FUNC(sub_82622908);
PPC_FUNC_IMPL(__imp__sub_82622908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x82622960
	if (cr0.lt) goto loc_82622960;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8262293C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82622a78
	if (cr6.lt) goto loc_82622A78;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x82622a78
	if (!cr6.lt) goto loc_82622A78;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x8262293c
	if (!cr0.lt) goto loc_8262293C;
loc_82622960:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lfs f0,3384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne cr6,0x8262299c
	if (!cr6.eq) goto loc_8262299C;
	// addi r23,r1,88
	r23.s64 = ctx.r1.s64 + 88;
loc_8262299C:
	// lwz r27,8(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82622a6c
	if (cr0.lt) goto loc_82622A6C;
loc_826229AC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r31,r11,940
	r31.s64 = r11.s64 + 940;
	// ble cr6,0x82622a34
	if (!cr6.gt) goto loc_82622A34;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r29,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r29.s64 = r31.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622a78
	if (cr0.eq) goto loc_82622A78;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622a78
	if (cr0.eq) goto loc_82622A78;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r29,r11
	ctx.r5.s64 = r11.s64 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622a78
	if (cr0.eq) goto loc_82622A78;
loc_82622A34:
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8261f768
	sub_8261F768(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// clrlwi r6,r31,29
	ctx.r6.u64 = r31.u32 & 0x7;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r24,4
	ctx.r4.s64 = r24.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82622300
	sub_82622300(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r25,r25,r22
	r25.u64 = r25.u64 + r22.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x826229ac
	if (!cr0.lt) goto loc_826229AC;
loc_82622A6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x828e9450
	return;
loc_82622A78:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82622A7C"))) PPC_WEAK_FUNC(sub_82622A7C);
PPC_FUNC_IMPL(__imp__sub_82622A7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82622a70
	// ERROR 82622A70
	return;
}

__attribute__((alias("__imp__sub_82622A80"))) PPC_WEAK_FUNC(sub_82622A80);
PPC_FUNC_IMPL(__imp__sub_82622A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// blt 0x82622ad8
	if (cr0.lt) goto loc_82622AD8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82622AB4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82622bfc
	if (cr6.lt) goto loc_82622BFC;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x82622bfc
	if (!cr6.lt) goto loc_82622BFC;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82622ab4
	if (!cr0.lt) goto loc_82622AB4;
loc_82622AD8:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r7,3
	ctx.r7.s64 = 3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lfs f0,3384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lfs f13,5288(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bne cr6,0x82622b20
	if (!cr6.eq) goto loc_82622B20;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
loc_82622B20:
	// lwz r27,8(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82622bf0
	if (cr0.lt) goto loc_82622BF0;
loc_82622B30:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r31,r11,940
	r31.s64 = r11.s64 + 940;
	// ble cr6,0x82622bb8
	if (!cr6.gt) goto loc_82622BB8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srawi r29,r31,3
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r29.s64 = r31.s32 >> 3;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622bfc
	if (cr0.eq) goto loc_82622BFC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622bfc
	if (cr0.eq) goto loc_82622BFC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// subf r5,r29,r11
	ctx.r5.s64 = r11.s64 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622bfc
	if (cr0.eq) goto loc_82622BFC;
loc_82622BB8:
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8261f768
	sub_8261F768(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// clrlwi r6,r31,29
	ctx.r6.u64 = r31.u32 & 0x7;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r24,4
	ctx.r4.s64 = r24.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826223a0
	sub_826223A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r25,r25,r22
	r25.u64 = r25.u64 + r22.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x82622b30
	if (!cr0.lt) goto loc_82622B30;
loc_82622BF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x828e9450
	return;
loc_82622BFC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82622C00"))) PPC_WEAK_FUNC(sub_82622C00);
PPC_FUNC_IMPL(__imp__sub_82622C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82622bf4
	// ERROR 82622BF4
	return;
}

__attribute__((alias("__imp__sub_82622C04"))) PPC_WEAK_FUNC(sub_82622C04);
PPC_FUNC_IMPL(__imp__sub_82622C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82622C08"))) PPC_WEAK_FUNC(sub_82622C08);
PPC_FUNC_IMPL(__imp__sub_82622C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82620e00
	sub_82620E00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82622c90
	if (cr0.eq) goto loc_82622C90;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622440
	sub_82622440(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82622c94
	if (!cr0.eq) goto loc_82622C94;
loc_82622C90:
	// li r11,0
	r11.s64 = 0;
loc_82622C94:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82622C9C"))) PPC_WEAK_FUNC(sub_82622C9C);
PPC_FUNC_IMPL(__imp__sub_82622C9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82622CA0"))) PPC_WEAK_FUNC(sub_82622CA0);
PPC_FUNC_IMPL(__imp__sub_82622CA0) {
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
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,3936
	r11.s64 = r11.s64 + 3936;
	// addi r10,r10,3952
	ctx.r10.s64 = ctx.r10.s64 + 3952;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// clrlwi r30,r4,19
	r30.u64 = ctx.r4.u32 & 0x1FFF;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,22896(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22896);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82622cec
	if (!cr6.eq) goto loc_82622CEC;
	// andi. r30,r30,61439
	r30.u64 = r30.u64 & 61439;
	cr0.compare<int32_t>(r30.s32, 0, xer);
loc_82622CEC:
	// lwz r6,22920(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22920);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82622d18
	if (!cr6.eq) goto loc_82622D18;
	// lwz r11,22820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22820);
	// lwz r9,22812(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 22812);
	// lwz r10,22916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22916);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,391
	r11.s64 = r11.s64 + 391;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82622d2c
	goto loc_82622D2C;
loc_82622D18:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x82622d2c
	if (!cr6.eq) goto loc_82622D2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826211f8
	sub_826211F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82622D2C:
	// lwz r5,22920(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22920);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x82622ee4
	if (!cr6.lt) goto loc_82622EE4;
	// li r29,0
	r29.s64 = 0;
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// clrlwi r8,r30,16
	ctx.r8.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r8,8191
	cr6.compare<uint32_t>(ctx.r8.u32, 8191, xer);
	// bne cr6,0x82622d84
	if (!cr6.eq) goto loc_82622D84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,13
	ctx.r6.s64 = 13;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,13
	r31.s64 = 13;
	// bl 0x82622100
	sub_82622100(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82622df4
	if (!cr0.eq) goto loc_82622DF4;
	// b 0x82622ee4
	goto loc_82622EE4;
loc_82622D84:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82622ee4
	if (cr6.eq) goto loc_82622EE4;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82622D9C:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82622db4
	if (cr0.eq) goto loc_82622DB4;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82622DB4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82622d9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82622D9C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622c08
	sub_82622C08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = r11.u64 & r31.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82622ee4
	if (cr6.eq) goto loc_82622EE4;
loc_82622DF4:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28648);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82622e84
	if (cr6.eq) goto loc_82622E84;
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82622e84
	if (cr0.lt) goto loc_82622E84;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82622E24:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r11,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vor128 v61,v62,v62
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v62.u8));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v61,v63,2,2
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 78), 2));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v63,v62,2,2
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 78), 2));
	// stvx128 v63,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// bdnz 0x82622e24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82622E24;
loc_82622E84:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blt cr6,0x82622ee4
	if (cr6.lt) goto loc_82622EE4;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82622EB8:
	// li r10,-16
	ctx.r10.s64 = -16;
	// lvx128 v63,r0,r28
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r10
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// vminfp128 v63,v63,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_min_ps(_mm_load_ps(v63.f32), _mm_load_ps(v61.f32)));
	// stvx128 v63,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r27
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vmaxfp128 v63,v63,v62
	_mm_store_ps(v63.f32, _mm_max_ps(_mm_load_ps(v63.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82622eb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82622EB8;
loc_82622EE4:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
}

__attribute__((alias("__imp__sub_82622EE8"))) PPC_WEAK_FUNC(sub_82622EE8);
PPC_FUNC_IMPL(__imp__sub_82622EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82622EEC"))) PPC_WEAK_FUNC(sub_82622EEC);
PPC_FUNC_IMPL(__imp__sub_82622EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82622EF0"))) PPC_WEAK_FUNC(sub_82622EF0);
PPC_FUNC_IMPL(__imp__sub_82622EF0) {
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
	PPCVRegister vTemp{};
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
	// stwu r1,-3792(r1)
	ea = -3792 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22884(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22884);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stw r6,3836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3836, ctx.r6.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / r11.u32;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mullw r11,r6,r11
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,3836
	ctx.r8.s64 = ctx.r1.s64 + 3836;
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82623008
	if (cr6.lt) goto loc_82623008;
	// lfs f31,3384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f31.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826225d8
	sub_826225D8(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stfs f29,172(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622768
	sub_82622768(ctx, base);
	// b 0x82623584
	goto loc_82623584;
loc_82623008:
	// lfs f30,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f30.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x826225d8
	sub_826225D8(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stfs f29,204(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f30,192(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622768
	sub_82622768(ctx, base);
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82623584
	if (cr0.lt) goto loc_82623584;
	// mulli r11,r10,48
	r11.s64 = ctx.r10.s64 * 48;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// vspltisw128 v62,-1
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vspltisw128 v56,1
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0x1)));
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vspltisw128 v55,-8
	_mm_store_si128((__m128i*)v55.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// vupkd3d128 v57,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v57 = vTemp;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vcsxwfp128 v54,v62,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v62.u32)));
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// add r8,r11,r31
	ctx.r8.u64 = r11.u64 + r31.u64;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// subf r27,r31,r7
	r27.s64 = ctx.r7.s64 - r31.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r8,32
	r11.s64 = ctx.r8.s64 + 32;
	// vspltw128 v29,v57,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r31,-32253
	r31.s64 = -2113732608;
	// lis r30,-32253
	r30.s64 = -2113732608;
	// lis r29,-32253
	r29.s64 = -2113732608;
	// li r9,-16
	ctx.r9.s64 = -16;
	// li r28,-32
	r28.s64 = -32;
	// addi r8,r8,2544
	ctx.r8.s64 = ctx.r8.s64 + 2544;
	// addi r7,r7,2528
	ctx.r7.s64 = ctx.r7.s64 + 2528;
	// addi r6,r6,2512
	ctx.r6.s64 = ctx.r6.s64 + 2512;
	// addi r5,r5,2608
	ctx.r5.s64 = ctx.r5.s64 + 2608;
	// addi r4,r4,30096
	ctx.r4.s64 = ctx.r4.s64 + 30096;
	// addi r3,r3,30112
	ctx.r3.s64 = ctx.r3.s64 + 30112;
	// addi r31,r31,30128
	r31.s64 = r31.s64 + 30128;
	// addi r30,r30,30144
	r30.s64 = r30.s64 + 30144;
	// addi r29,r29,30160
	r29.s64 = r29.s64 + 30160;
loc_82623174:
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslw128 v61,v62,v62
	v61.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v61.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v61.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v61.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// lvx128 v53,r11,r9
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v60,v53,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v1.f32), 0xFF));
	// lvx128 v12,r11,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r10,r9
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// vsubfp128 v11,v59,v12
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v13,v61,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v61.u8));
	// vcsxwfp128 v58,v56,16
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// vsldoi128 v61,v61,v63,12
	_mm_store_si128((__m128i*)v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v63.u8), 4));
	// lvx128 v59,r0,r26
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// vspltw128 v10,v57,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vslw128 v52,v62,v62
	v52.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v52.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v52.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v52.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// vpermwi128 v51,v57,234
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x15));
	// vcsxwfp128 v8,v56,1
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v4,v57,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vslw128 v50,v62,v55
	v50.u32[0] = v62.u32[0] << (v55.u8[0] & 0x1F);
	v50.u32[1] = v62.u32[1] << (v55.u8[4] & 0x1F);
	v50.u32[2] = v62.u32[2] << (v55.u8[8] & 0x1F);
	v50.u32[3] = v62.u32[3] << (v55.u8[12] & 0x1F);
	// vor128 v49,v62,v62
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)v62.u8));
	// lvx128 v48,r0,r26
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v48,v48,v63,8
	_mm_store_si128((__m128i*)v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v63.u8), 8));
	// vmaddfp128 v12,v11,v59,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v59.f32)), _mm_load_ps(ctx.v12.f32)));
	// vxor128 v61,v48,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vsubfp128 v59,v10,v58
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v58.f32)));
	// vcmpgtfp128 v9,v63,v60
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vaddfp128 v51,v51,v61
	_mm_store_ps(v51.f32, _mm_add_ps(_mm_load_ps(v51.f32), _mm_load_ps(v61.f32)));
	// stvx128 v12,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r29
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vspltw128 v58,v61,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vsel v11,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v48,v61,1
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v47,v61,2
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vspltw128 v46,v61,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vor128 v45,v11,v11
	_mm_store_si128((__m128i*)v45.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vxor128 v6,v60,v45
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vnmsubfp v9,v6,v6,v10
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vand128 v61,v6,v52
	_mm_store_si128((__m128i*)v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vrefp v13,v6
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v6.f32)));
	// vcmpeqfp128 v3,v6,v63
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v63.f32)));
	// vcmpgtfp128 v28,v59,v6
	_mm_store_ps(v28.f32, _mm_cmpgt_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v6.f32)));
	// vslw128 v59,v6,v56
	v59.u32[0] = ctx.v6.u32[0] << (v56.u8[0] & 0x1F);
	v59.u32[1] = ctx.v6.u32[1] << (v56.u8[4] & 0x1F);
	v59.u32[2] = ctx.v6.u32[2] << (v56.u8[8] & 0x1F);
	v59.u32[3] = ctx.v6.u32[3] << (v56.u8[12] & 0x1F);
	// vcmpequw128 v10,v61,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v61.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vcmpequw128 v31,v59,v50
	_mm_store_si128((__m128i*)v31.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vor128 v61,v9,v9
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vnmsubfp v5,v6,v13,v4
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrsqrtefp128 v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v61.f32))));
	// vor128 v7,v61,v61
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v61.u8));
	// vmulfp128 v11,v61,v8
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v60,v0,v0
	_mm_store_ps(v60.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v30,v6,v13,v4
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v19,v13,v13
	_mm_store_ps(v19.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v8,v11,v9,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v44,v8,v8
	_mm_store_ps(v44.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v61,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v61,r0,r30
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vxor128 v11,v44,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vspltw128 v8,v61,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vsel v11,v0,v7,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vor128 v44,v11,v11
	_mm_store_si128((__m128i*)v44.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vand128 v60,v44,v52
	_mm_store_si128((__m128i*)v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vcmpeqfp128 v25,v44,v63
	_mm_store_ps(v25.f32, _mm_cmpeq_ps(_mm_load_ps(v44.f32), _mm_load_ps(v63.f32)));
	// vslw128 v52,v44,v56
	v52.u32[0] = v44.u32[0] << (v56.u8[0] & 0x1F);
	v52.u32[1] = v44.u32[1] << (v56.u8[4] & 0x1F);
	v52.u32[2] = v44.u32[2] << (v56.u8[8] & 0x1F);
	v52.u32[3] = v44.u32[3] << (v56.u8[12] & 0x1F);
	// vor128 v43,v58,v60
	_mm_store_si128((__m128i*)v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vor128 v11,v60,v60
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v60.u8));
	// vor128 v6,v48,v60
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vspltw128 v48,v61,0
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vor128 v5,v47,v60
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vor128 v0,v43,v43
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v43.u8));
	// vor128 v7,v46,v60
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v60.u8)));
	// lvx128 v60,r0,r31
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vsel v9,v0,v11,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw128 v0,v57,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vor128 v11,v62,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v58,v9,v9
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vsel v4,v11,v6,v3
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v3,v7,v5,v10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vmaddfp v5,v13,v30,v13
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v58.u8));
	// lvx128 v58,r0,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vcmpequw128 v30,v52,v50
	_mm_store_si128((__m128i*)v30.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v52.u32), _mm_load_si128((__m128i*)v50.u32)));
	// vspltw128 v2,v61,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vspltw128 v24,v58,0
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vslw128 v49,v49,v49
	v49.u32[0] = v49.u32[0] << (v49.u8[0] & 0x1F);
	v49.u32[1] = v49.u32[1] << (v49.u8[4] & 0x1F);
	v49.u32[2] = v49.u32[2] << (v49.u8[8] & 0x1F);
	v49.u32[3] = v49.u32[3] << (v49.u8[12] & 0x1F);
	// vsel v7,v6,v3,v31
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v23,v58,1
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vsel v13,v4,v11,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw128 v22,v58,2
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// vspltw128 v21,v58,3
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vor128 v6,v48,v48
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v48.u8));
	// vor128 v3,v63,v63
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)v63.u8));
	// vspltw128 v47,v60,0
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v52,v60,2
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// lvx128 v59,r0,r3
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsel v11,v13,v7,v30
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v20,v60,1
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vspltw128 v26,v59,1
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vspltw128 v25,v59,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vsel v13,v12,v5,v19
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v27,v59,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vor128 v42,v11,v11
	_mm_store_si128((__m128i*)v42.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vspltw128 v59,v59,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vsel v12,v9,v11,v30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw128 v50,v61,3
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vspltw128 v41,v60,3
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// lvx128 v60,r0,r6
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v58,v44,v13
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v61,r0,r5
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v42,v42
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v42.u8));
	// vxor128 v46,v50,v49
	_mm_store_si128((__m128i*)v46.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vspltw128 v40,v61,3
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vsel v11,v13,v12,v31
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vor128 v42,v11,v11
	_mm_store_si128((__m128i*)v42.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vandc128 v9,v58,v49
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vcmpgtfp128 v4,v58,v50
	_mm_store_ps(ctx.v4.f32, _mm_cmpgt_ps(_mm_load_ps(v58.f32), _mm_load_ps(v50.f32)));
	// vcmpgtfp v11,v9,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vrefp v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v9.f32)));
	// vsel v12,v2,v8,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v8,v3,v6,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vnmsubfp v3,v9,v13,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v13,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v3,v9,v13,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v3,v63,v58
	_mm_store_ps(ctx.v3.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v58.f32)));
	// vsel v7,v6,v13,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v9,v7,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vaddfp128 v7,v13,v47
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v47.f32)));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcmpgtfp128 v5,v13,v52
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v52.f32)));
	// vmaddfp v2,v13,v20,v13
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v20.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v7.f32)));
	// vsel v31,v8,v12,v5
	_mm_store_si128((__m128i*)v31.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vaddfp128 v52,v2,v54
	_mm_store_ps(v52.f32, _mm_add_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v54.f32)));
	// vnmsubfp v2,v7,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v2,v7,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v6,v13,v13
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v8,v12,v13,v6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v52,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v8.f32)));
	// vsel v12,v9,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v52,v12,v49
	_mm_store_si128((__m128i*)v52.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v5,v41,v52
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(v41.f32), _mm_load_ps(v52.f32)));
	// vmaddfp v8,v13,v21,v22
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v21.f32)), _mm_load_ps(v22.f32)));
	// vcmpequw128 v21,v42,v62
	_mm_store_si128((__m128i*)v21.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v42.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vaddfp128 v9,v13,v59
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v59.f32)));
	// vspltw128 v22,v60,1
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vmaddfp v8,v13,v8,v23
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v23.f32)));
	// vspltw128 v23,v60,2
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vmaddfp v9,v13,v9,v25
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v25.f32)));
	// vmaddfp v8,v13,v8,v24
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v24.f32)));
	// vspltw128 v24,v60,3
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vmaddfp v9,v13,v9,v26
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v26.f32)));
	// vmaddfp v9,v13,v9,v27
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v27.f32)));
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v60,v8,v13
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v8,v48,v48
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v48.u8));
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// lvx128 v59,r0,r26
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vrefp v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v9.f32)));
	// vor v6,v9,v9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vnmsubfp v2,v6,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v7,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v6,v13,v13
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v9,v0,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v9,v61,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// lvx128 v61,r0,r7
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v6,v44,v44
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v44.u8));
	// vspltw128 v25,v61,0
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vmulfp128 v0,v60,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v26,v61,1
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v27,v61,2
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// lvx128 v60,r27,r11
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r27.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v30,v61,3
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v2,v61,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vmaddfp v0,v12,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v13,v0,v12,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vcmpgtfp128 v5,v46,v58
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(v46.f32), _mm_load_ps(v58.f32)));
	// vxor128 v0,v13,v49
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v12,v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vaddfp v13,v12,v31
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v31.f32)));
	// vor128 v12,v43,v43
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v43.u8));
	// vspltw128 v31,v61,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vxor128 v0,v13,v49
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v7,v13,v0,v3
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v3,v61,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// vxor128 v13,v48,v49
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v11,v7,v8,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v4,v12,v0,v10
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vrefp128 v0,v44
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v44.f32)));
	// vor128 v10,v42,v42
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v42.u8));
	// vor128 v8,v44,v44
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v44.u8));
	// vsel v7,v11,v13,v5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor128 v12,v51,v51
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v51.u8));
	// vaddfp v13,v7,v4
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw128 v4,v61,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vnmsubfp v20,v6,v0,v29
	_mm_store_ps(v20.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vsel v7,v10,v13,v21
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v7,v51,v7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v0,v20,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v20.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v61,v7,v40
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v40.f32)));
	// vnmsubfp v21,v8,v0,v29
	_mm_store_ps(v21.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v6,v0,v0
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v10,v61
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(v61.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vmaddfp v0,v0,v21,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v21.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v10,v7
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v10,v11,v0,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v61,v13,v13
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v61,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v13,v22,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v11,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v23,v11,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v24,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v13,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v25,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v0,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v26,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v13,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v27,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v0,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v30,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v13,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v31,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v0,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v13,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v13,v3,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v4,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v13,v12,v0,v28
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsubfp128 v12,v60,v5
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v5.f32)));
	// vspltw128 v61,v13,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v60,v13,1
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vmulfp128 v13,v53,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v61.f32)));
	// vxor128 v0,v60,v45
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v45.u8)));
	// vmaddcfp128 v12,v59,v12,v5
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v1,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// bdnz 0x82623174
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623174;
loc_82623584:
	// addi r1,r1,3792
	ctx.r1.s64 = ctx.r1.s64 + 3792;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82623594"))) PPC_WEAK_FUNC(sub_82623594);
PPC_FUNC_IMPL(__imp__sub_82623594) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82623598"))) PPC_WEAK_FUNC(sub_82623598);
PPC_FUNC_IMPL(__imp__sub_82623598) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22884(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22884);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stw r6,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / r11.u32;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mullw r11,r6,r11
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r1,396
	ctx.r8.s64 = ctx.r1.s64 + 396;
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82623688
	if (cr6.lt) goto loc_82623688;
	// lfs f31,3384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f31.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622908
	sub_82622908(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f0.f64 = double(temp.f32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622a80
	sub_82622A80(ctx, base);
	// b 0x82623bb8
	goto loc_82623BB8;
loc_82623688:
	// lfs f30,3384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f30.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f0.f64 = double(temp.f32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82622908
	sub_82622908(ctx, base);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f0.f64 = double(temp.f32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622a80
	sub_82622A80(ctx, base);
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82623bb8
	if (cr0.lt) goto loc_82623BB8;
	// rlwinm r11,r10,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vspltisw128 v62,-1
	_mm_store_si128((__m128i*)v62.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// vupkd3d128 v57,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v57 = vTemp;
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// subf r28,r31,r7
	r28.s64 = ctx.r7.s64 - r31.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r9,16
	r11.s64 = ctx.r9.s64 + 16;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// vspltisw128 v56,1
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0x1)));
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// vspltisw128 v55,-8
	_mm_store_si128((__m128i*)v55.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// vcsxwfp128 v54,v62,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v62.u32)));
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// vspltw128 v28,v57,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// lis r31,-32253
	r31.s64 = -2113732608;
	// li r29,-16
	r29.s64 = -16;
	// addi r10,r10,2544
	ctx.r10.s64 = ctx.r10.s64 + 2544;
	// addi r9,r9,2528
	ctx.r9.s64 = ctx.r9.s64 + 2528;
	// addi r8,r8,2512
	ctx.r8.s64 = ctx.r8.s64 + 2512;
	// addi r7,r7,2608
	ctx.r7.s64 = ctx.r7.s64 + 2608;
	// addi r6,r6,30096
	ctx.r6.s64 = ctx.r6.s64 + 30096;
	// addi r5,r5,30112
	ctx.r5.s64 = ctx.r5.s64 + 30112;
	// addi r4,r4,30128
	ctx.r4.s64 = ctx.r4.s64 + 30128;
	// addi r3,r3,30144
	ctx.r3.s64 = ctx.r3.s64 + 30144;
	// addi r31,r31,30160
	r31.s64 = r31.s64 + 30160;
loc_826237B8:
	// lvx128 v31,r28,r11
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r28.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lvx128 v53,r0,r11
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vslw128 v61,v62,v62
	v61.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v61.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v61.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v61.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// vmsum4fp128 v60,v53,v31
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v53.f32), _mm_load_ps(v31.f32), 0xFF));
	// lvx128 v11,r11,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r30
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v56,16
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// vsubfp128 v10,v59,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v11.f32)));
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v63.u8));
	// lvx128 v59,r0,r27
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// vor128 v12,v61,v61
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v61.u8));
	// vsldoi128 v61,v61,v63,12
	_mm_store_si128((__m128i*)v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v63.u8), 4));
	// vspltw128 v9,v57,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vslw128 v52,v62,v62
	v52.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v52.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v52.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v52.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// vpermwi128 v50,v57,234
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x15));
	// vslw128 v51,v62,v55
	v51.u32[0] = v62.u32[0] << (v55.u8[0] & 0x1F);
	v51.u32[1] = v62.u32[1] << (v55.u8[4] & 0x1F);
	v51.u32[2] = v62.u32[2] << (v55.u8[8] & 0x1F);
	v51.u32[3] = v62.u32[3] << (v55.u8[12] & 0x1F);
	// vcsxwfp128 v7,v56,1
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v56.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v3,v57,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// lvx128 v48,r0,r27
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vspltw128 v0,v57,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vor128 v49,v62,v62
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)v62.u8));
	// vsldoi128 v48,v48,v63,8
	_mm_store_si128((__m128i*)v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v63.u8), 8));
	// vmaddfp128 v11,v10,v59,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v59.f32)), _mm_load_ps(ctx.v11.f32)));
	// vxor128 v61,v48,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vsubfp128 v59,v9,v58
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v58.f32)));
	// vcmpgtfp128 v8,v63,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vaddfp128 v50,v50,v61
	_mm_store_ps(v50.f32, _mm_add_ps(_mm_load_ps(v50.f32), _mm_load_ps(v61.f32)));
	// stvx128 v11,r11,r29
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r31
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v58,v61,2
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vsel v10,v13,v12,v8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw128 v47,v61,3
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vor128 v48,v10,v10
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vxor128 v5,v60,v48
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vnmsubfp v8,v5,v5,v9
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vand128 v60,v5,v52
	_mm_store_si128((__m128i*)v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vcmpgtfp128 v27,v59,v5
	_mm_store_ps(v27.f32, _mm_cmpgt_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v5.f32)));
	// vslw128 v59,v5,v56
	v59.u32[0] = ctx.v5.u32[0] << (v56.u8[0] & 0x1F);
	v59.u32[1] = ctx.v5.u32[1] << (v56.u8[4] & 0x1F);
	v59.u32[2] = ctx.v5.u32[2] << (v56.u8[8] & 0x1F);
	v59.u32[3] = ctx.v5.u32[3] << (v56.u8[12] & 0x1F);
	// vrefp v12,v5
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v5.f32)));
	// vcmpeqfp128 v2,v5,v63
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v63.f32)));
	// vcmpequw128 v9,v60,v63
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vcmpequw128 v30,v59,v51
	_mm_store_si128((__m128i*)v30.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v51.u32)));
	// vspltw128 v59,v61,1
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vor128 v61,v8,v8
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vnmsubfp v4,v5,v12,v3
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrsqrtefp128 v13,v61
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v61.f32))));
	// vor128 v6,v61,v61
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v61.u8));
	// vmulfp128 v10,v61,v7
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v12,v12,v4,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v46,v13,v13
	_mm_store_ps(v46.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v26,v5,v12,v3
	_mm_store_ps(v26.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v18,v12,v12
	_mm_store_ps(v18.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v7,v10,v8,v7
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v5,v12,v26,v12
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v26.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v45,v7,v7
	_mm_store_ps(v45.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v61,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v10,v45,v46
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)v46.u8)));
	// vsel v10,v13,v6,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vor128 v46,v10,v10
	_mm_store_si128((__m128i*)v46.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vand128 v52,v46,v52
	_mm_store_si128((__m128i*)v52.u8, _mm_and_si128(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vcmpeqfp128 v1,v46,v63
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(v46.f32), _mm_load_ps(v63.f32)));
	// vslw128 v61,v46,v56
	v61.u32[0] = v46.u32[0] << (v56.u8[0] & 0x1F);
	v61.u32[1] = v46.u32[1] << (v56.u8[4] & 0x1F);
	v61.u32[2] = v46.u32[2] << (v56.u8[8] & 0x1F);
	v61.u32[3] = v46.u32[3] << (v56.u8[12] & 0x1F);
	// vor128 v45,v60,v52
	_mm_store_si128((__m128i*)v45.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v52.u8)));
	// lvx128 v60,r0,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vor128 v10,v52,v52
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v52.u8));
	// vor128 v59,v59,v52
	_mm_store_si128((__m128i*)v59.u8, _mm_or_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vcmpequw128 v29,v61,v51
	_mm_store_si128((__m128i*)v29.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v61.u32), _mm_load_si128((__m128i*)v51.u32)));
	// lvx128 v61,r0,r3
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v45,v45
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v45.u8));
	// vor128 v7,v58,v52
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vsel v8,v13,v10,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vor128 v10,v59,v59
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v51,v8,v8
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor128 v8,v47,v52
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vsel v4,v13,v10,v2
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vspltw128 v52,v61,0
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vor128 v13,v51,v51
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v51.u8));
	// vspltw128 v6,v61,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vsel v3,v8,v7,v9
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v2,v61,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vor128 v7,v51,v51
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v51.u8));
	// vspltw128 v47,v60,0
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vslw128 v49,v49,v49
	v49.u32[0] = v49.u32[0] << (v49.u8[0] & 0x1F);
	v49.u32[1] = v49.u32[1] << (v49.u8[4] & 0x1F);
	v49.u32[2] = v49.u32[2] << (v49.u8[8] & 0x1F);
	v49.u32[3] = v49.u32[3] << (v49.u8[12] & 0x1F);
	// vspltw128 v44,v60,2
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vsel v8,v4,v13,v1
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v19,v60,1
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vsel v13,v10,v3,v30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v51,v61,3
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vor128 v12,v52,v52
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v52.u8));
	// lvx128 v59,r0,r5
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v1,v63,v63
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v63.u8));
	// lvx128 v58,r0,r6
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw128 v24,v59,2
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// lvx128 v61,r0,r7
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsel v4,v8,v13,v29
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v26,v59,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// vxor128 v43,v51,v49
	_mm_store_si128((__m128i*)v43.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vspltw128 v25,v59,1
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vspltw128 v59,v59,3
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vrefp128 v10,v46
	_mm_store_ps(ctx.v10.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v46.f32)));
	// vspltw128 v21,v58,2
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x55));
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// vor128 v42,v4,v4
	_mm_store_si128((__m128i*)v42.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vspltw128 v20,v58,3
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x0));
	// vsel v4,v11,v5,v18
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v22,v58,1
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xAA));
	// vspltw128 v23,v58,0
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFF));
	// vspltw128 v58,v60,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v8,v42,v42
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v42.u8));
	// vspltw128 v41,v61,3
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vmulfp128 v40,v46,v4
	_mm_store_ps(v40.f32, _mm_mul_ps(_mm_load_ps(v46.f32), _mm_load_ps(ctx.v4.f32)));
	// vor128 v13,v42,v42
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v42.u8));
	// vsel v11,v7,v8,v29
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v8,v13,v11,v30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vor128 v42,v8,v8
	_mm_store_si128((__m128i*)v42.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vandc128 v8,v40,v49
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v40.u8)));
	// vcmpgtfp v11,v8,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vrefp v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v8.f32)));
	// vsel v7,v1,v12,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vcmpgtfp128 v1,v63,v40
	_mm_store_ps(ctx.v1.f32, _mm_cmpgt_ps(_mm_load_ps(v63.f32), _mm_load_ps(v40.f32)));
	// vsel v12,v2,v6,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vnmsubfp v2,v8,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v13,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v2,v8,v13,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v3,v13,v13
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v2,v40,v51
	_mm_store_ps(ctx.v2.f32, _mm_cmpgt_ps(_mm_load_ps(v40.f32), _mm_load_ps(v51.f32)));
	// vsel v5,v6,v13,v3
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v8,v5,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vaddfp128 v5,v13,v47
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v47.f32)));
	// vor v8,v13,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcmpgtfp128 v3,v13,v44
	_mm_store_ps(ctx.v3.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v44.f32)));
	// vmaddfp v30,v13,v19,v13
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v19.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v5
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v5.f32)));
	// vsel v29,v7,v12,v3
	_mm_store_si128((__m128i*)v29.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vaddfp128 v51,v30,v54
	_mm_store_ps(v51.f32, _mm_add_ps(_mm_load_ps(v30.f32), _mm_load_ps(v54.f32)));
	// vnmsubfp v30,v5,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v30,v5,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v7,v12,v13,v4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v51,v7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(ctx.v7.f32)));
	// vsel v12,v8,v13,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v51,v12,v49
	_mm_store_si128((__m128i*)v51.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v3,v58,v51
	_mm_store_ps(ctx.v3.f32, _mm_cmpgt_ps(_mm_load_ps(v58.f32), _mm_load_ps(v51.f32)));
	// vaddfp128 v8,v13,v59
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v59.f32)));
	// vmaddfp v7,v13,v20,v21
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v20.f32)), _mm_load_ps(v21.f32)));
	// vmaddfp v8,v13,v8,v24
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v24.f32)));
	// vspltw128 v24,v60,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vmaddfp v7,v13,v7,v22
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(v22.f32)));
	// vmaddfp v8,v13,v8,v25
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v25.f32)));
	// vspltw128 v25,v60,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vmaddfp v7,v13,v7,v23
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(v23.f32)));
	// vcmpequw128 v23,v42,v62
	_mm_store_si128((__m128i*)v23.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v42.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vmaddfp v8,v13,v8,v26
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v26.f32)));
	// vspltw128 v26,v60,3
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vmulfp128 v60,v7,v13
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v7,v52,v52
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v52.u8));
	// vrefp v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v8.f32)));
	// vor v4,v8,v8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor v5,v8,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vnmsubfp v30,v4,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v8,v13,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v5,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v8,v0,v4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vcmpgtfp128 v4,v43,v40
	_mm_store_ps(ctx.v4.f32, _mm_cmpgt_ps(_mm_load_ps(v43.f32), _mm_load_ps(v40.f32)));
	// vspltw128 v8,v61,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v30,v61,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vmulfp128 v0,v60,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v13,v0,v12,v3
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vxor128 v0,v13,v49
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v12,v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vaddfp v13,v12,v29
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v29.f32)));
	// vor128 v12,v45,v45
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v45.u8));
	// vspltw128 v29,v61,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vxor128 v0,v13,v49
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v5,v13,v0,v1
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v1,v61,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// vxor128 v13,v52,v49
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vsel v11,v5,v7,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v2,v61,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vsel v20,v12,v0,v9
	_mm_store_si128((__m128i*)v20.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// lvx128 v61,r0,r10
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v46,v46
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v46.u8));
	// vor128 v7,v42,v42
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v42.u8));
	// vspltw128 v3,v61,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vsel v21,v11,v13,v4
	_mm_store_si128((__m128i*)v21.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v4,v61,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vor v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vspltw128 v5,v61,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vnmsubfp v22,v0,v10,v28
	_mm_store_ps(v22.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(v28.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v6,v61,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vor128 v9,v46,v46
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v46.u8));
	// vaddfp v11,v21,v20
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(v21.f32), _mm_load_ps(v20.f32)));
	// vor128 v13,v50,v50
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v50.u8));
	// vmaddfp v0,v10,v22,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v22.f32)), _mm_load_ps(ctx.v10.f32)));
	// vsel v10,v7,v11,v23
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmulfp128 v7,v50,v10
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v10,v9,v0,v28
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v28.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v23,v0,v0
	_mm_store_ps(v23.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v61,v7,v41
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v41.f32)));
	// vmaddfp v10,v0,v10,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v11,v61
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(v61.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vsel v9,v12,v10,v23
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vnmsubfp v0,v8,v11,v7
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v61,v0,v0
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v61,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v61
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v12,v24,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v25,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v0,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v26,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v29,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v30,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v1,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v3,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v61
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v11,v4,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v61
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vmaddfp v12,v5,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v6,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vsel v12,v13,v0,v27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v61,v12,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v60,v12,1
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v53,v61
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v61.f32)));
	// vxor128 v0,v60,v48
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vmaddfp v0,v31,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// bdnz 0x826237b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826237B8;
loc_82623BB8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82623BC8"))) PPC_WEAK_FUNC(sub_82623BC8);
PPC_FUNC_IMPL(__imp__sub_82623BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82623BCC"))) PPC_WEAK_FUNC(sub_82623BCC);
PPC_FUNC_IMPL(__imp__sub_82623BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82623BD0"))) PPC_WEAK_FUNC(sub_82623BD0);
PPC_FUNC_IMPL(__imp__sub_82623BD0) {
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
	PPCVRegister v116{};
	PPCVRegister v117{};
	PPCVRegister v118{};
	PPCVRegister v119{};
	PPCVRegister v120{};
	PPCVRegister v121{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaaf4
	// addi r12,r1,-192
	r12.s64 = ctx.r1.s64 + -192;
	// bl 0x828ebc94
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,1332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1332, ctx.r9.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// ble cr6,0x82625248
	if (!cr6.gt) goto loc_82625248;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,22888(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 22888);
	ctx.f13.f64 = double(temp.f32);
	// addi r18,r4,16
	r18.s64 = ctx.r4.s64 + 16;
	// li r28,-32
	r28.s64 = -32;
	// li r30,-16
	r30.s64 = -16;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r29,r11,3776
	r29.s64 = r11.s64 + 3776;
	// addi r25,r10,-17616
	r25.s64 = ctx.r10.s64 + -17616;
	// fmsubs f27,f0,f13,f12
	f27.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// beq cr6,0x82623d1c
	if (cr6.eq) goto loc_82623D1C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82623d1c
	if (cr6.eq) goto loc_82623D1C;
	// lwz r11,22892(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22892);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82623cb8
	if (!cr6.lt) goto loc_82623CB8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// subf r8,r11,r6
	ctx.r8.s64 = ctx.r6.s64 - r11.s64;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// mulli r10,r11,48
	ctx.r10.s64 = r11.s64 * 48;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r9,r9,15808
	ctx.r9.s64 = ctx.r9.s64 + 15808;
	// add r11,r10,r7
	r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82623CA0:
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r30
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bdnz 0x82623ca0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623CA0;
	// lwz r26,22892(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 22892);
loc_82623CB8:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82623ce0
	if (!cr6.eq) goto loc_82623CE0;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,824
	ctx.r10.s64 = ctx.r1.s64 + 824;
	// addi r9,r24,-8
	ctx.r9.s64 = r24.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82623CD4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82623cd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623CD4;
loc_82623CE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,22908(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22908);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622ef0
	sub_82622EF0(ctx, base);
	// stw r25,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r25.u32);
loc_82623D1C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82623dd4
	if (cr6.eq) goto loc_82623DD4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82623dd4
	if (cr6.eq) goto loc_82623DD4;
	// lwz r11,22896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22896);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82623d70
	if (!cr6.lt) goto loc_82623D70;
	// subf r9,r11,r23
	ctx.r9.s64 = r23.s64 - r11.s64;
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// mulli r10,r11,48
	ctx.r10.s64 = r11.s64 * 48;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v63.u8));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// add r11,r10,r22
	r11.u64 = ctx.r10.u64 + r22.u64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82623D58:
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r28
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r30
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bdnz 0x82623d58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623D58;
	// lwz r23,22896(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 22896);
loc_82623D70:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82623d98
	if (!cr6.eq) goto loc_82623D98;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// addi r9,r22,-8
	ctx.r9.s64 = r22.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82623D8C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82623d8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623D8C;
loc_82623D98:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r6,22908(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22908);
	// lwz r5,22912(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22912);
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r5,r31,11244
	ctx.r5.s64 = r31.s64 + 11244;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622ef0
	sub_82622EF0(ctx, base);
	// stw r25,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r25.u32);
loc_82623DD4:
	// lwz r21,1348(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1348);
	// li r19,16
	r19.s64 = 16;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82623e7c
	if (cr6.eq) goto loc_82623E7C;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82623e7c
	if (cr6.eq) goto loc_82623E7C;
	// lwz r11,22900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22900);
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(r11.u32, r17.u32, xer);
	// bge cr6,0x82623e24
	if (!cr6.lt) goto loc_82623E24;
	// subf r10,r11,r17
	ctx.r10.s64 = r17.s64 - r11.s64;
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82623E10:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r19
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bdnz 0x82623e10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82623E10;
	// lwz r17,22900(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 22900);
loc_82623E24:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82623e40
	if (!cr6.eq) goto loc_82623E40;
	// rlwinm r5,r17,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82623E40:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r6,22912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22912);
	// lwz r5,22916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22916);
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// addi r5,r31,22488
	ctx.r5.s64 = r31.s64 + 22488;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82623598
	sub_82623598(ctx, base);
	// stw r25,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r25.u32);
loc_82623E7C:
	// lwz r11,1356(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82623f04
	if (cr6.eq) goto loc_82623F04;
	// lwz r30,1364(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1364);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82623f04
	if (cr6.eq) goto loc_82623F04;
	// lwz r10,22904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22904);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82623ec0
	if (!cr6.gt) goto loc_82623EC0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,22904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22904);
loc_82623EC0:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r6,22916(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22916);
	// lwz r5,22920(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22920);
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,22812
	ctx.r5.s64 = r31.s64 + 22812;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82620ef0
	sub_82620EF0(ctx, base);
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r25.u32);
loc_82623F04:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82625248
	if (!cr6.eq) goto loc_82625248;
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r26.u64);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// std r25,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r25.u64);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r5,22916(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22916);
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// ld r30,8(r9)
	r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r29,r1,272
	r29.s64 = ctx.r1.s64 + 272;
	// ld r28,16(r9)
	r28.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ld r22,0(r8)
	r22.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r20,8(r8)
	r20.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r16,16(r8)
	r16.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// ld r14,0(r7)
	r14.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r26,8(r7)
	r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r25,16(r7)
	r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// ld r15,24(r9)
	r15.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// ld r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// ld r7,24(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// std r28,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r28.u64);
	// lwz r6,22912(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22912);
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// std r22,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r22.u64);
	// std r20,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r20.u64);
	// std r16,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r16.u64);
	// std r8,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r8.u64);
	// std r15,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r15.u64);
	// std r14,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r14.u64);
	// std r26,8(r29)
	PPC_STORE_U64(r29.u32 + 8, r26.u64);
	// std r25,16(r29)
	PPC_STORE_U64(r29.u32 + 16, r25.u64);
	// std r7,24(r29)
	PPC_STORE_U64(r29.u32 + 24, ctx.r7.u64);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// lwz r6,24(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// addi r20,r31,22488
	r20.s64 = r31.s64 + 22488;
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,22888(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 22888);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f29,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f29.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// fmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// bl 0x82623598
	sub_82623598(ctx, base);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82623598
	sub_82623598(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// ld r26,112(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r25,144(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826241ac
	if (!cr6.eq) goto loc_826241AC;
	// lwz r11,22884(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22884);
	// lfs f13,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// fadds f28,f13,f12
	f28.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,22888(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 22888);
	f0.f64 = double(temp.f32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fcmpu cr6,f28,f30
	cr6.compare(f28.f64, f30.f64);
	// blt cr6,0x826241ac
	if (cr6.lt) goto loc_826241AC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,3384(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3384);
	f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// ld r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r29,24(r9)
	r29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r28,r1,576
	r28.s64 = ctx.r1.s64 + 576;
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// li r9,32
	ctx.r9.s64 = 32;
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// std r3,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r3.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r29,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, r29.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r29,8(r30)
	r29.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// ld r27,16(r30)
	r27.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// ld r30,24(r30)
	r30.u64 = PPC_LOAD_U64(r30.u32 + 24);
	// std r10,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// std r29,8(r28)
	PPC_STORE_U64(r28.u32 + 8, r29.u64);
	// std r27,16(r28)
	PPC_STORE_U64(r28.u32 + 16, r27.u64);
	// std r30,24(r28)
	PPC_STORE_U64(r28.u32 + 24, r30.u64);
	// bl 0x82622908
	sub_82622908(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82622908
	sub_82622908(ctx, base);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8261f8b8
	sub_8261F8B8(ctx, base);
	// fsubs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 - f30.f64));
	// b 0x8262417c
	goto loc_8262417C;
loc_82624164:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8261f8b8
	sub_8261F8B8(ctx, base);
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - f30.f64));
loc_8262417C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82624164
	if (!cr6.lt) goto loc_82624164;
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
loc_826241AC:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8261f8b8
	sub_8261F8B8(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622020
	sub_82622020(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82624260
	if (cr6.eq) goto loc_82624260;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82624260
	if (cr6.eq) goto loc_82624260;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x82624204
	if (cr6.lt) goto loc_82624204;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,296
	ctx.r10.s64 = ctx.r1.s64 + 296;
	// addi r9,r24,-8
	ctx.r9.s64 = r24.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826241F4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x826241f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826241F4;
	// b 0x82624240
	goto loc_82624240;
loc_82624204:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,22908(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22908);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622ef0
	sub_82622EF0(ctx, base);
	// stw r25,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r25.u32);
loc_82624240:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8261fe70
	sub_8261FE70(ctx, base);
loc_82624260:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x826242f8
	if (cr6.eq) goto loc_826242F8;
	// lwz r30,1332(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1332);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826242f8
	if (cr6.eq) goto loc_826242F8;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x8262429c
	if (cr6.lt) goto loc_8262429C;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,296
	ctx.r10.s64 = ctx.r1.s64 + 296;
	// addi r9,r30,-8
	ctx.r9.s64 = r30.s64 + -8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8262428C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8262428c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262428C;
	// b 0x826242d8
	goto loc_826242D8;
loc_8262429C:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r6,22908(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22908);
	// lwz r5,22912(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22912);
	// lwz r4,22924(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22924);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// addi r5,r31,11244
	ctx.r5.s64 = r31.s64 + 11244;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82622ef0
	sub_82622EF0(ctx, base);
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r25.u32);
loc_826242D8:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8261fe70
	sub_8261FE70(ctx, base);
loc_826242F8:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82625248
	if (cr6.eq) goto loc_82625248;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82625248
	if (cr6.eq) goto loc_82625248;
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// vspltisw128 v126,-1
	_mm_store_si128((__m128i*)v126.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vupkd3d128 v124,v127,4
	temp.f32 = 3.0f;
	temp.s32 += v127.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v127.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v124 = vTemp;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor128 v61,v126,v126
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v126.u8));
	// vaddfp128 v60,v63,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(v63.f32), _mm_load_ps(v63.f32)));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v58,v63,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vpermwi128 v59,v63,7
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xF8));
	// vpermwi128 v57,v124,254
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x1));
	// vslw128 v61,v61,v61
	v61.u32[0] = v61.u32[0] << (v61.u8[0] & 0x1F);
	v61.u32[1] = v61.u32[1] << (v61.u8[4] & 0x1F);
	v61.u32[2] = v61.u32[2] << (v61.u8[8] & 0x1F);
	v61.u32[3] = v61.u32[3] << (v61.u8[12] & 0x1F);
	// vmrghw128 v48,v127,v61
	_mm_store_si128((__m128i*)v48.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v61.u32), _mm_load_si128((__m128i*)v127.u32)));
	// vmulfp128 v63,v63,v60
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v56,v60,155
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x64));
	// vpermwi128 v60,v60,99
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x9C));
	// vmulfp128 v59,v59,v56
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v56.f32)));
	// vmulfp128 v60,v58,v60
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v58,v63,64
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xBF));
	// vpermwi128 v63,v63,164
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x5B));
	// vsubfp128 v58,v57,v58
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v57.f32), _mm_load_ps(v58.f32)));
	// vaddfp128 v57,v59,v60
	_mm_store_ps(v57.f32, _mm_add_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v60,v59,v60
	_mm_store_ps(v60.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v63,v58,v63
	_mm_store_ps(v63.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(v63.f32)));
	// vpermwi128 v59,v57,66
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0xBD));
	// vsldoi128 v58,v60,v57,8
	_mm_store_si128((__m128i*)v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v57.u8), 8));
	// vrlimi128 v59,v60,6,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 6));
	// vpermwi128 v60,v58,136
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x77));
	// vrlimi128 v63,v124,1,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v124.f32), 57), 1));
	// vpermwi128 v57,v63,7
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xF8));
	// vrlimi128 v60,v63,3,0
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 228), 3));
	// vor128 v58,v63,v63
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)v63.u8));
	// vmrglw128 v63,v59,v57
	_mm_store_si128((__m128i*)v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vrlimi128 v58,v59,6,3
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 57), 6));
	// vmrghw128 v59,v63,v62
	_mm_store_si128((__m128i*)v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrglw128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrghw128 v62,v58,v60
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrglw128 v60,v58,v60
	_mm_store_si128((__m128i*)v60.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vor128 v57,v59,v59
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v63.u8));
	// vmrglw128 v58,v62,v59
	_mm_store_si128((__m128i*)v58.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vmrghw128 v56,v62,v59
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vor128 v55,v60,v60
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)v60.u8));
	// vmrghw128 v54,v60,v63
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vrlimi128 v57,v63,12,2
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 78), 12));
	// vmrglw128 v63,v60,v63
	_mm_store_si128((__m128i*)v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v63.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vrlimi128 v0,v59,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 78), 3));
	// vpermwi128 v59,v58,187
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x44));
	// vrlimi128 v13,v60,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 78), 12));
	// vpermwi128 v53,v56,5
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0xFA));
	// vrlimi128 v55,v62,3,2
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 78), 3));
	// vpermwi128 v62,v54,5
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xFA));
	// vpermwi128 v60,v63,187
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x44));
	// vpermwi128 v12,v56,187
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x44));
	// vmulfp128 v7,v53,v59
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v59.f32)));
	// vpermwi128 v11,v58,5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0xFA));
	// vmulfp128 v8,v55,v57
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v57.f32)));
	// vpermwi128 v10,v54,187
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x44));
	// vmulfp128 v6,v62,v60
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v9,v63,5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFA));
	// vpermwi128 v62,v56,132
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x7B));
	// vpermwi128 v60,v58,97
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x9E));
	// vpermwi128 v51,v63,97
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x9E));
	// vpermwi128 v50,v54,132
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x7B));
	// vnmsubfp v7,v12,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v12,v0,v13,v8
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v8,v58,182
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x49));
	// vnmsubfp v0,v10,v9,v6
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v59,v7,v7
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vor128 v57,v12,v12
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v55,v0,v0
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v11,v59,156
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x63));
	// vpermwi128 v12,v59,198
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x39));
	// vpermwi128 v13,v55,156
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x63));
	// vpermwi128 v53,v55,198
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x39));
	// vor128 v49,v11,v11
	_mm_store_si128((__m128i*)v49.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v52,v13,v13
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor128 v0,v53,v53
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v53.u8));
	// vrlimi128 v52,v57,8,1
	_mm_store_ps(v52.f32, _mm_blend_ps(_mm_load_ps(v52.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 147), 8));
	// vmulfp128 v2,v60,v52
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v52.f32)));
	// vor128 v47,v12,v12
	_mm_store_si128((__m128i*)v47.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vrlimi128 v53,v57,4,0
	_mm_store_ps(v53.f32, _mm_blend_ps(_mm_load_ps(v53.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 228), 4));
	// vpermwi128 v58,v58,204
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v58.u32), 0x33));
	// vrlimi128 v49,v57,8,3
	_mm_store_ps(v49.f32, _mm_blend_ps(_mm_load_ps(v49.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 8));
	// vsldoi128 v46,v55,v57,8
	_mm_store_si128((__m128i*)v46.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v57.u8), 8));
	// vrlimi128 v0,v57,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 147), 1));
	// vpermwi128 v7,v56,237
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x12));
	// vrlimi128 v47,v57,4,2
	_mm_store_ps(v47.f32, _mm_blend_ps(_mm_load_ps(v47.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 78), 4));
	// vpermwi128 v6,v63,182
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x49));
	// vmulfp128 v3,v62,v53
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v53.f32)));
	// vrlimi128 v13,v57,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 78), 2));
	// vmulfp128 v1,v51,v49
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v49.f32)));
	// vrlimi128 v12,v57,1,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 1));
	// vrlimi128 v11,v57,2,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 228), 2));
	// vpermwi128 v5,v54,237
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x12));
	// vmulfp128 v31,v50,v47
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v47.f32)));
	// vpermwi128 v30,v46,56
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xC7));
	// vxor128 v29,v58,v48
	_mm_store_si128((__m128i*)v29.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vpermwi128 v63,v63,204
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x33));
	// vmrghw128 v61,v61,v127
	_mm_store_si128((__m128i*)v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v127.u32), _mm_load_si128((__m128i*)v61.u32)));
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f31.f64, f29.f64);
	// vpermwi128 v10,v55,78
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xB1));
	// vnmsubfp v2,v8,v0,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v60,v56,114
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x8D));
	// vxor128 v26,v63,v48
	_mm_store_si128((__m128i*)v26.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vspltw128 v4,v124,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vpermwi128 v9,v59,78
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xB1));
	// vrlimi128 v10,v57,9,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 147), 9));
	// vmrglw128 v62,v59,v57
	_mm_store_si128((__m128i*)v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vxor128 v27,v60,v61
	_mm_store_si128((__m128i*)v27.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vpermwi128 v59,v54,114
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0x8D));
	// vnmsubfp v0,v7,v13,v3
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v13,v6,v12,v1
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v9,v57,9,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 9));
	// vpermwi128 v28,v62,52
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xCB));
	// vnmsubfp v12,v5,v11,v31
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v25,v59,v61
	_mm_store_si128((__m128i*)v25.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vmaddfp v11,v29,v30,v2
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v8,v27,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v26,v28,v13
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v28.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v25,v9,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vor128 v63,v11,v11
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmsum4fp128 v11,v63,v56
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v63.f32), _mm_load_ps(v56.f32), 0xFF));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v6,v11,v0,v4
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v11,v0,v4
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v6,v0,v0
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v10,v0,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v119,v63,v13
	_mm_store_ps(v119.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v118,v8,v13
	_mm_store_ps(v118.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v117,v7,v13
	_mm_store_ps(v117.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v116,v9,v13
	_mm_store_ps(v116.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// blt cr6,0x8262476c
	if (cr6.lt) goto loc_8262476C;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r17,-1
	r11.s64 = r17.s64 + -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r9,0(r21)
	PPC_STORE_U64(r21.u32 + 0, ctx.r9.u64);
	// std r8,8(r21)
	PPC_STORE_U64(r21.u32 + 8, ctx.r8.u64);
	// std r7,16(r21)
	PPC_STORE_U64(r21.u32 + 16, ctx.r7.u64);
	// std r10,24(r21)
	PPC_STORE_U64(r21.u32 + 24, ctx.r10.u64);
	// blt cr6,0x82625248
	if (cr6.lt) goto loc_82625248;
	// vpermwi128 v62,v118,32
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v118.u32), 0xDF));
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// vpermwi128 v24,v119,67
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v119.u32), 0xBC));
	// mtctr r11
	ctr.u64 = r11.u64;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// add r11,r10,r21
	r11.u64 = ctx.r10.u64 + r21.u64;
	// vspltisw128 v61,-9
	_mm_store_si128((__m128i*)v61.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// vrlimi128 v62,v117,3,2
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v117.f32), 78), 3));
	// vspltw128 v60,v119,0
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v119.u32), 0xFF));
	// vspltw128 v22,v118,1
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v118.u32), 0xAA));
	// vspltw128 v21,v117,2
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v117.u32), 0x55));
	// vcsxwfp128 v25,v63,1
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vpermwi128 v23,v62,48
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xCF));
	// vrlimi128 v24,v62,6,0
	_mm_store_ps(v24.f32, _mm_blend_ps(_mm_load_ps(v24.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 228), 6));
	// vrlimi128 v23,v119,3,0
	_mm_store_ps(v23.f32, _mm_blend_ps(_mm_load_ps(v23.f32), _mm_permute_ps(_mm_load_ps(v119.f32), 228), 3));
loc_8262459C:
	// li r10,0
	ctx.r10.s64 = 0;
	// vcsxwfp128 v58,v126,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v126.u32)));
	// li r9,12
	ctx.r9.s64 = 12;
	// vcsxwfp128 v59,v63,0
	_mm_store_ps(v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vslw128 v57,v63,v61
	v57.u32[0] = v63.u32[0] << (v61.u8[0] & 0x1F);
	v57.u32[1] = v63.u32[1] << (v61.u8[4] & 0x1F);
	v57.u32[2] = v63.u32[2] << (v61.u8[8] & 0x1F);
	v57.u32[3] = v63.u32[3] << (v61.u8[12] & 0x1F);
	// vcsxwfp128 v56,v63,1
	_mm_store_ps(v56.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vspltw128 v12,v62,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltw128 v11,v62,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vor128 v55,v0,v0
	_mm_store_si128((__m128i*)v55.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltw128 v10,v62,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vor128 v62,v0,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddcfp128 v12,v117,v12,v116
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v117.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v116.f32)));
	// vor128 v54,v0,v0
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v26,v0,180
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x4B));
	// vrlimi128 v0,v55,8,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 8));
	// vspltw128 v1,v55,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x55));
	// vrlimi128 v62,v55,8,2
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 78), 8));
	// vspltw128 v5,v55,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xAA));
	// vrlimi128 v54,v55,8,1
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 147), 8));
	// vspltw128 v4,v55,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x0));
	// vsldoi128 v13,v58,v59,8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v59.u8), 8));
	// vor128 v6,v58,v58
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v58.u8));
	// vpermwi128 v27,v0,30
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE1));
	// vor128 v0,v119,v119
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v119.u8));
	// vpermwi128 v31,v62,225
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x1E));
	// vsldoi128 v2,v58,v59,12
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v59.u8), 4));
	// vpermwi128 v62,v13,195
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x3C));
	// vpermwi128 v7,v13,51
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xCC));
	// vpermwi128 v3,v54,75
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xB4));
	// vmaddfp128 v12,v11,v118,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v118.f32)), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v8,v13,243
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xC));
	// vmulfp128 v11,v62,v60
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v28,v13,207
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x30));
	// vmaddcfp128 v0,v10,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v7,v22,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v22.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v21,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v21.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v59,v0,v59
	_mm_store_ps(v59.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v59.f32)));
	// vpermwi128 v62,v0,107
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x94));
	// vpermwi128 v54,v0,7
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xF8));
	// vrlimi128 v62,v57,1,0
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 228), 1));
	// vcmpgefp128 v62,v54,v62
	_mm_store_ps(v62.f32, _mm_cmpge_ps(_mm_load_ps(v54.f32), _mm_load_ps(v62.f32)));
	// vrsqrtefp128 v0,v59
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v59.f32))));
	// vmulfp128 v30,v59,v25
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v25.f32)));
	// vspltw128 v12,v62,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v13,v62,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v10,v62,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v11,v62,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vmulfp128 v29,v0,v0
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v7,v2,v8,v12
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v9,v1,v5,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vcmpeqfp128 v57,v0,v0
	_mm_store_ps(v57.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v31,v3,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vsel v8,v7,v2,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vsel v7,v9,v1,v13
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vsel v9,v12,v31,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vor128 v62,v8,v8
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor128 v58,v7,v7
	_mm_store_si128((__m128i*)v58.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vspltw128 v7,v55,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xFF));
	// vor128 v54,v9,v9
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v55,r11,r19
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32 + r19.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v12,v30,v29,v25
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v29.f32)), _mm_load_ps(v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v8,v58,v58
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v58.u8));
	// vor128 v5,v58,v58
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v53,v12,v12
	_mm_store_ps(v53.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v52,v0,v0
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vsel v0,v9,v28,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v28.u8))));
	// vmulfp128 v62,v52,v56
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v56.f32)));
	// vsel v12,v9,v0,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v3,v59,v52
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v52.f32)));
	// vsel v0,v8,v7,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vor128 v9,v54,v54
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v54.u8));
	// vor128 v8,v54,v54
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v54.u8));
	// vsel v2,v12,v6,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v12,v5,v0,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v9,v27,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)v27.u8))));
	// vmaddfp v10,v2,v23,v24
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v23.f32)), _mm_load_ps(v24.f32)));
	// vor128 v7,v59,v59
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v59.u8));
	// vxor128 v9,v53,v57
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v6,v12,v4,v11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vor128 v59,v126,v126
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)v126.u8));
	// vsel v13,v8,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v3,v7,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vperm128 v62,v62,v62,v6
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vslw128 v59,v59,v59
	v59.u32[0] = v59.u32[0] << (v59.u8[0] & 0x1F);
	v59.u32[1] = v59.u32[1] << (v59.u8[4] & 0x1F);
	v59.u32[2] = v59.u32[2] << (v59.u8[8] & 0x1F);
	v59.u32[3] = v59.u32[3] << (v59.u8[12] & 0x1F);
	// vsel v7,v13,v26,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)v26.u8))));
	// vmulfp128 v58,v0,v56
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v56.f32)));
	// vxor128 v59,v55,v59
	_mm_store_si128((__m128i*)v59.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v59.u8)));
	// vmulfp128 v62,v10,v62
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v62.f32)));
	// vor128 v57,v59,v59
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v56,v59,v59
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v54,v59,v59
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)v59.u8));
	// vrlimi128 v59,v55,11,0
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 11));
	// vrlimi128 v57,v55,1,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 1));
	// vrlimi128 v56,v55,13,0
	_mm_store_ps(v56.f32, _mm_blend_ps(_mm_load_ps(v56.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 13));
	// vrlimi128 v54,v55,7,0
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 228), 7));
	// vperm128 v62,v58,v62,v7
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vpermwi128 v58,v62,177
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x4E));
	// vmsum4fp128 v57,v57,v62
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v57.f32), _mm_load_ps(v62.f32), 0xFF));
	// vpermwi128 v55,v62,78
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xB1));
	// vpermwi128 v62,v62,228
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x1B));
	// vmsum4fp128 v58,v56,v58
	_mm_store_ps(v58.f32, _mm_dp_ps(_mm_load_ps(v56.f32), _mm_load_ps(v58.f32), 0xFF));
	// vmsum4fp128 v56,v54,v55
	_mm_store_ps(v56.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(v55.f32), 0xFF));
	// vmsum4fp128 v62,v59,v62
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v62.f32), 0xFF));
	// vmrghw128 v59,v58,v57
	_mm_store_si128((__m128i*)v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v58.u32)));
	// vmrghw128 v62,v62,v56
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v56.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vmrghw128 v62,v62,v59
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v62.u32)));
	// stvx128 v62,r11,r19
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// bdnz 0x8262459c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262459C;
	// b 0x82625248
	goto loc_82625248;
loc_8262476C:
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vslw128 v63,v126,v126
	v63.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v63.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v63.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v63.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// vor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v127.u8));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,736
	ctx.r9.s64 = ctx.r1.s64 + 736;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v63.u8));
	// lvx128 v31,r0,r11
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltisw128 v125,1
	_mm_store_si128((__m128i*)v125.u32, _mm_set1_epi32(int(0x1)));
	// lvx128 v59,r0,r10
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vmsum4fp128 v62,v59,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v31.f32), 0xFF));
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v10,v124,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v60,v63,v127,12
	_mm_store_si128((__m128i*)v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v127.u8), 4));
	// vsubfp128 v11,v61,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v12.f32)));
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vcsxwfp128 v121,v125,16
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v121.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v125.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x37800000)))));
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vpermwi128 v58,v124,234
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x15));
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vslw128 v61,v126,v126
	v61.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v61.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v61.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v61.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vcsxwfp128 v123,v125,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v123.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v125.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v56,r0,r10
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v56,v56,v127,8
	_mm_store_si128((__m128i*)v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v127.u8), 8));
	// vcmpgtfp128 v8,v127,v62
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(v127.f32), _mm_load_ps(v62.f32)));
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v11,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vxor128 v60,v56,v60
	_mm_store_si128((__m128i*)v60.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vsel v11,v0,v13,v8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vaddfp128 v58,v58,v60
	_mm_store_ps(v58.f32, _mm_add_ps(_mm_load_ps(v58.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v57,v10,v121
	_mm_store_ps(v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v121.f32)));
	// stvx128 v12,r0,r21
	_mm_store_si128((__m128i*)(base + ((r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v6,v124,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vor128 v8,v123,v123
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v123.u8));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vspltisw128 v120,-8
	_mm_store_si128((__m128i*)v120.u32, _mm_set1_epi32(int(0xFFFFFFF8)));
	// vor128 v53,v11,v11
	_mm_store_si128((__m128i*)v53.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// addi r30,r11,30160
	r30.s64 = r11.s64 + 30160;
	// vslw128 v54,v126,v120
	v54.u32[0] = v126.u32[0] << (v120.u8[0] & 0x1F);
	v54.u32[1] = v126.u32[1] << (v120.u8[4] & 0x1F);
	v54.u32[2] = v126.u32[2] << (v120.u8[8] & 0x1F);
	v54.u32[3] = v126.u32[3] << (v120.u8[12] & 0x1F);
	// vxor128 v62,v62,v53
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v53.u8)));
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vspltw128 v55,v63,0
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrefp128 v12,v62
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vcmpgtfp128 v30,v57,v62
	_mm_store_ps(v30.f32, _mm_cmpgt_ps(_mm_load_ps(v57.f32), _mm_load_ps(v62.f32)));
	// vand128 v60,v62,v61
	_mm_store_si128((__m128i*)v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vcmpeqfp128 v3,v62,v127
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(v62.f32), _mm_load_ps(v127.f32)));
	// vor128 v11,v62,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v62.u8));
	// vspltw128 v56,v63,1
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vslw128 v57,v62,v125
	v57.u32[0] = v62.u32[0] << (v125.u8[0] & 0x1F);
	v57.u32[1] = v62.u32[1] << (v125.u8[4] & 0x1F);
	v57.u32[2] = v62.u32[2] << (v125.u8[8] & 0x1F);
	v57.u32[3] = v62.u32[3] << (v125.u8[12] & 0x1F);
	// vnmsubfp v9,v0,v13,v10
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw128 v10,v60,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v127.u32)));
	// vnmsubfp v13,v11,v12,v6
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v60,v9,v9
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v60.f32))));
	// vor128 v7,v60,v60
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v60.u8));
	// vmulfp128 v11,v60,v123
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v123.f32)));
	// vmaddfp v13,v12,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v52,v0,v0
	_mm_store_ps(v52.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v8,v11,v9,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v51,v8,v8
	_mm_store_ps(v51.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v60,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v11,v51,v52
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vsel v11,v0,v7,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vor128 v0,v62,v62
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v62.u8));
	// vspltw128 v62,v63,2
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vor128 v52,v11,v11
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vand128 v61,v52,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vor128 v55,v55,v61
	_mm_store_si128((__m128i*)v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vor128 v8,v61,v61
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v61.u8));
	// vnmsubfp v5,v0,v13,v6
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v9,v55,v55
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v55.u8));
	// vspltw128 v63,v63,3
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vor128 v60,v56,v61
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vor128 v7,v62,v61
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// vcmpeqfp128 v2,v52,v127
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(v52.f32), _mm_load_ps(v127.f32)));
	// vcmpequw128 v4,v57,v54
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v54.u32)));
	// vcmpeqfp v26,v13,v13
	_mm_store_ps(v26.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v9,v8,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vor128 v0,v63,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vor128 v8,v60,v60
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v60.u8));
	// addi r26,r9,30096
	r26.s64 = ctx.r9.s64 + 30096;
	// vor128 v9,v126,v126
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v126.u8));
	// addi r29,r11,30144
	r29.s64 = r11.s64 + 30144;
	// vor128 v57,v11,v11
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vsel v11,v0,v7,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v0,v124,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vcsxwfp128 v122,v126,0
	_mm_store_ps(v122.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v126.u32)));
	// vsel v7,v9,v8,v3
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// addi r27,r10,30112
	r27.s64 = ctx.r10.s64 + 30112;
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v9,v60,v60
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v60.u8));
	// vor128 v6,v57,v57
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v57.u8));
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vslw128 v60,v52,v125
	v60.u32[0] = v52.u32[0] << (v125.u8[0] & 0x1F);
	v60.u32[1] = v52.u32[1] << (v125.u8[4] & 0x1F);
	v60.u32[2] = v52.u32[2] << (v125.u8[8] & 0x1F);
	v60.u32[3] = v52.u32[3] << (v125.u8[12] & 0x1F);
	// addi r28,r11,30128
	r28.s64 = r11.s64 + 30128;
	// vspltw128 v56,v63,0
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vsel v8,v9,v11,v4
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw128 v5,v63,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vsel v11,v7,v6,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v6,v63,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vcmpequw128 v3,v60,v54
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v54.u32)));
	// lvx128 v60,r0,r26
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vor128 v9,v57,v57
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v57.u8));
	// vspltw128 v63,v63,3
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vor128 v57,v126,v126
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v126.u8));
	// vspltw128 v27,v60,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v25,v60,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vor128 v7,v56,v56
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v56.u8));
	// vsel v2,v11,v8,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw128 v22,v60,3
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vor128 v8,v127,v127
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v127.u8));
	// lvx128 v62,r0,r28
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vsel v11,v12,v13,v26
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vspltw128 v26,v60,1
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vslw128 v57,v57,v57
	v57.u32[0] = v57.u32[0] << (v57.u8[0] & 0x1F);
	v57.u32[1] = v57.u32[1] << (v57.u8[4] & 0x1F);
	v57.u32[2] = v57.u32[2] << (v57.u8[8] & 0x1F);
	v57.u32[3] = v57.u32[3] << (v57.u8[12] & 0x1F);
	// lvx128 v61,r0,r27
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vsel v12,v9,v2,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// addi r25,r11,2608
	r25.s64 = r11.s64 + 2608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltw128 v54,v62,2
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vmulfp128 v50,v52,v11
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v11.f32)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltw128 v1,v61,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vxor128 v49,v63,v57
	_mm_store_si128((__m128i*)v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v13,v2,v12,v4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw128 v29,v61,1
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v28,v61,2
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltw128 v51,v62,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// addi r24,r11,2512
	r24.s64 = r11.s64 + 2512;
	// vspltw128 v23,v62,1
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// addi r23,r10,2528
	r23.s64 = ctx.r10.s64 + 2528;
	// vor128 v60,v13,v13
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v61,v61,3
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vspltw128 v62,v62,3
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vandc128 v2,v50,v57
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vcmpgtfp128 v20,v127,v50
	_mm_store_ps(v20.f32, _mm_cmpgt_ps(_mm_load_ps(v127.f32), _mm_load_ps(v50.f32)));
	// vcmpgtfp128 v21,v50,v63
	_mm_store_ps(v21.f32, _mm_cmpgt_ps(_mm_load_ps(v50.f32), _mm_load_ps(v63.f32)));
	// vrefp v13,v2
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v2.f32)));
	// vcmpgtfp v11,v2,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v24,v2,v13,v0
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v13,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vsel v9,v8,v7,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v8,v6,v5,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vmaddfp v13,v13,v24,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v2,v13,v0
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// addi r22,r9,2544
	r22.s64 = ctx.r9.s64 + 2544;
	// vcmpeqfp v6,v13,v13
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v63,r0,r25
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// fmr f2,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = f29.f64;
	// vspltw128 v48,v63,3
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmaddfp v13,v13,v7,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v3,v13,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v2,v12,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vaddfp128 v7,v13,v51
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v51.f32)));
	// vor v6,v13,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcmpgtfp128 v5,v13,v54
	_mm_store_ps(ctx.v5.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v54.f32)));
	// vmaddfp v4,v13,v23,v13
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v23.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpequw128 v23,v60,v126
	_mm_store_si128((__m128i*)v23.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v126.u32)));
	// vrefp v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v7.f32)));
	// vsel v17,v9,v8,v5
	_mm_store_si128((__m128i*)v17.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vaddfp128 v54,v4,v122
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v122.f32)));
	// vnmsubfp v4,v7,v13,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v8,v13,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v9,v7,v13,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v8,v13,v4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v4,v52,v52
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v52.u8));
	// vmulfp128 v13,v54,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(ctx.v12.f32)));
	// vsel v12,v6,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v5,v127,v127
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v127.u8));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v54,v12,v57
	_mm_store_si128((__m128i*)v54.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v18,v62,v54
	_mm_store_ps(v18.f32, _mm_cmpgt_ps(_mm_load_ps(v62.f32), _mm_load_ps(v54.f32)));
	// lvx128 v62,r0,r22
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v8,v13,v61
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v61.f32)));
	// lvx128 v61,r0,r24
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vmaddfp v9,v13,v22,v25
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v22.f32)), _mm_load_ps(v25.f32)));
	// vcmpgtfp128 v22,v49,v50
	_mm_store_ps(v22.f32, _mm_cmpgt_ps(_mm_load_ps(v49.f32), _mm_load_ps(v50.f32)));
	// vspltw128 v24,v61,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v25,v61,2
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vmaddfp v8,v13,v8,v28
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v28.f32)));
	// vmaddfp v9,v13,v9,v26
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v26.f32)));
	// vspltw128 v26,v61,3
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vmaddfp v8,v13,v8,v29
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v29.f32)));
	// vmaddfp v9,v13,v9,v27
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v27.f32)));
	// vmaddfp v8,v13,v8,v1
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v1.f32)));
	// vspltw128 v1,v124,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vmulfp128 v54,v9,v13
	_mm_store_ps(v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vor128 v9,v60,v60
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v60.u8));
	// vrefp v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v8.f32)));
	// vor v7,v8,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vnmsubfp v6,v8,v13,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vxor128 v8,v56,v57
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v6,v55,v55
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v55.u8));
	// vsel v16,v6,v5,v10
	_mm_store_si128((__m128i*)v16.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v10,v63,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// lvx128 v63,r0,r23
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vor128 v5,v52,v52
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v52.u8));
	// vspltw128 v27,v63,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v28,v63,1
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vnmsubfp v3,v7,v13,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v7,v56,v56
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v56.u8));
	// vrefp128 v0,v52
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v52.f32)));
	// vcmpeqfp v29,v13,v13
	_mm_store_ps(v29.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v6,v13,v3,v13
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v3,v62,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vnmsubfp v19,v4,v0,v1
	_mm_store_ps(v19.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vsel v4,v2,v6,v29
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vspltw128 v29,v63,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vmaddfp v0,v0,v19,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v19.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v2,v63,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vmulfp128 v6,v54,v4
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(ctx.v4.f32)));
	// vcmpeqfp v19,v0,v0
	_mm_store_ps(v19.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v12,v6,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v6,v4,v12,v18
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vnmsubfp v1,v5,v0,v1
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v12,v6,v57
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v11,v6,v12,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vmaddfp v0,v0,v1,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v12,v11,v17
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v17.f32)));
	// vsel v6,v13,v0,v19
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vxor128 v0,v12,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v13,v12,v0,v20
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vsel v0,v13,v7,v21
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v13,v0,v8,v22
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw128 v8,v62,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vaddfp v0,v13,v16
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v16.f32)));
	// vsel v13,v9,v0,v23
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v9,v62,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vmulfp128 v0,v58,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v63,v0,v48
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v48.f32)));
	// vrfin128 v13,v63
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v0,v10,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v10,v62,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vor128 v13,v58,v58
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v58.u8));
	// vmulfp128 v63,v0,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v63
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v24,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v25,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v26,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v27,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v28,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v29,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v3,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v8,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v9,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v10,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)));
	// vsel v12,v13,v0,v30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v59,v63
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vxor128 v0,v62,v53
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v53.u8)));
	// vmaddfp v0,v31,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r21,r19
	_mm_store_si128((__m128i*)(base + ((r21.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82623598
	sub_82623598(ctx, base);
	// addi r10,r17,-1
	ctx.r10.s64 = r17.s64 + -1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x82625248
	if (cr6.lt) goto loc_82625248;
	// vpermwi128 v63,v118,32
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v118.u32), 0xDF));
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vpermwi128 v58,v119,67
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v119.u32), 0xBC));
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vspltisw128 v56,-9
	_mm_store_si128((__m128i*)v56.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vspltw128 v55,v119,0
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v119.u32), 0xFF));
	// vrlimi128 v63,v117,3,2
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v117.f32), 78), 3));
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// vspltw128 v54,v118,1
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v118.u32), 0xAA));
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// vspltw128 v53,v117,2
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v117.u32), 0x55));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// vspltw128 v25,v124,3
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vpermwi128 v57,v63,48
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xCF));
	// rlwinm r11,r10,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// vrlimi128 v58,v63,6,0
	_mm_store_ps(v58.f32, _mm_blend_ps(_mm_load_ps(v58.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 228), 6));
	// vrlimi128 v57,v119,3,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v119.f32), 228), 3));
loc_82624C70:
	// vcsxwfp128 v63,v125,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)v125.u32)));
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// vslw128 v62,v125,v56
	v62.u32[0] = v125.u32[0] << (v56.u8[0] & 0x1F);
	v62.u32[1] = v125.u32[1] << (v56.u8[4] & 0x1F);
	v62.u32[2] = v125.u32[2] << (v56.u8[8] & 0x1F);
	v62.u32[3] = v125.u32[3] << (v56.u8[12] & 0x1F);
	// li r9,12
	ctx.r9.s64 = 12;
	// vor128 v26,v119,v119
	_mm_store_si128((__m128i*)v26.u8, _mm_load_si128((__m128i*)v119.u8));
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// vcsxwfp128 v61,v125,1
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v125.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vor128 v29,v57,v57
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)v57.u8));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vor128 v50,v0,v0
	_mm_store_si128((__m128i*)v50.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvsl v13,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,736
	ctx.r9.s64 = ctx.r1.s64 + 736;
	// lvx128 v51,r0,r10
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v60,v13,v13
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor128 v59,v13,v13
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vpermwi128 v9,v13,180
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x4B));
	// vspltw128 v12,v51,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xFF));
	// vor128 v52,v13,v13
	_mm_store_si128((__m128i*)v52.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vspltw128 v6,v51,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0x55));
	// vor128 v13,v54,v54
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v54.u8));
	// vsldoi128 v0,v122,v63,8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v122.u8), _mm_load_si128((__m128i*)v63.u8), 8));
	// vrlimi128 v60,v50,8,2
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v50.f32), 78), 8));
	// vspltw128 v7,v51,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v51.u32), 0xAA));
	// vrlimi128 v59,v50,8,1
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v50.f32), 147), 8));
	// vsldoi128 v3,v122,v63,12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v122.u8), _mm_load_si128((__m128i*)v63.u8), 4));
	// vmaddcfp128 v6,v117,v6,v116
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v117.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(v116.f32)));
	// vspltw128 v4,v50,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x55));
	// vpermwi128 v51,v0,195
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x3C));
	// vpermwi128 v10,v0,51
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xCC));
	// vpermwi128 v31,v0,243
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xC));
	// vpermwi128 v8,v0,207
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x30));
	// vmulfp128 v11,v51,v55
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v55.f32)));
	// vpermwi128 v5,v60,225
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x1E));
	// vpermwi128 v2,v59,75
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xB4));
	// vspltw128 v30,v50,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xAA));
	// vmaddcfp128 v7,v118,v7,v6
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v118.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddcfp128 v13,v10,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v26,v12,v26,v7
	_mm_store_ps(v26.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v26.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddcfp128 v0,v53,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v26,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// vpermwi128 v60,v0,107
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x94));
	// vaddfp128 v59,v0,v63
	_mm_store_ps(v59.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vpermwi128 v63,v0,7
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xF8));
	// vrlimi128 v60,v62,1,0
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 228), 1));
	// vcmpgefp128 v63,v63,v60
	_mm_store_ps(v63.f32, _mm_cmpge_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vrsqrtefp128 v0,v59
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v59.f32))));
	// vmulfp128 v6,v59,v123
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v123.f32)));
	// vspltw128 v12,v63,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v13,v63,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v10,v63,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vspltw128 v11,v63,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vsel v28,v3,v31,v12
	_mm_store_si128((__m128i*)v28.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v31.u8))));
	// vmulfp128 v7,v0,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v31,v4,v30,v12
	_mm_store_si128((__m128i*)v31.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)v30.u8))));
	// vcmpeqfp128 v62,v0,v0
	_mm_store_ps(v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v5,v2,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vsel v2,v28,v3,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v28.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vsel v3,v31,v4,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsel v4,v12,v5,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v12,v50,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xFF));
	// vor128 v5,v123,v123
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v123.u8));
	// vor128 v60,v3,v3
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor128 v51,v4,v4
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vnmsubfp128 v5,v6,v7,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v6,v2,v2
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vsel v2,v2,v8,v10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vor128 v4,v60,v60
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v60.u8));
	// vor128 v7,v122,v122
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v122.u8));
	// vsel v3,v6,v2,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v2.u8))));
	// vsel v6,v4,v12,v10
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v2,v3,v7,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vmaddfp v0,v0,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v49,v5,v5
	_mm_store_ps(v49.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)));
	// vspltw128 v5,v50,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x0));
	// vmulfp128 v63,v0,v61
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vmulfp128 v8,v59,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v0,v60,v60
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v60.u8));
	// vrlimi128 v52,v50,8,0
	_mm_store_ps(v52.f32, _mm_blend_ps(_mm_load_ps(v52.f32), _mm_permute_ps(_mm_load_ps(v50.f32), 228), 8));
	// vmaddcfp128 v29,v2,v29,v58
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v29.f32)), _mm_load_ps(v58.f32)));
	// vsel v4,v0,v6,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// lvx128 v3,r11,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v6,v51,v51
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v51.u8));
	// vsubfp v31,v26,v3
	_mm_store_ps(v31.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v3.f32)));
	// vxor128 v30,v49,v62
	_mm_store_si128((__m128i*)v30.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvx128 v60,r0,r10
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v52,30
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v52.u32), 0xE1));
	// vor128 v12,v59,v59
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v59.u8));
	// vsel v2,v4,v5,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v51,v51
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v51.u8));
	// addi r7,r1,752
	ctx.r7.s64 = ctx.r1.s64 + 752;
	// vor128 v62,v126,v126
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v126.u8));
	// vspltw128 v1,v124,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vsel v10,v6,v7,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// add r9,r11,r21
	ctx.r9.u64 = r11.u64 + r21.u64;
	// vsel v7,v8,v12,v30
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vperm128 v63,v63,v63,v2
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vslw128 v51,v126,v126
	v51.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v51.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v51.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v51.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// vpermwi128 v43,v124,234
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x15));
	// vslw128 v62,v62,v62
	v62.u32[0] = v62.u32[0] << (v62.u8[0] & 0x1F);
	v62.u32[1] = v62.u32[1] << (v62.u8[4] & 0x1F);
	v62.u32[2] = v62.u32[2] << (v62.u8[8] & 0x1F);
	v62.u32[3] = v62.u32[3] << (v62.u8[12] & 0x1F);
	// lvx128 v52,r11,r7
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsel v12,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsubfp128 v50,v1,v121
	_mm_store_ps(v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v121.f32)));
	// vmulfp128 v61,v7,v61
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v61.f32)));
	// vor128 v13,v127,v127
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v127.u8));
	// vmulfp128 v63,v29,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v63.f32)));
	// vor128 v0,v51,v51
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v51.u8));
	// vxor128 v62,v60,v62
	_mm_store_si128((__m128i*)v62.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v62.u8)));
	// vmaddcfp128 v59,v31,v59,v3
	_mm_store_ps(v59.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v59.f32)), _mm_load_ps(ctx.v3.f32)));
	// vsel v7,v12,v9,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw128 v31,v124,3
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vslw128 v49,v126,v126
	v49.u32[0] = v126.u32[0] << (v126.u8[0] & 0x1F);
	v49.u32[1] = v126.u32[1] << (v126.u8[4] & 0x1F);
	v49.u32[2] = v126.u32[2] << (v126.u8[8] & 0x1F);
	v49.u32[3] = v126.u32[3] << (v126.u8[12] & 0x1F);
	// vslw128 v45,v126,v120
	v45.u32[0] = v126.u32[0] << (v120.u8[0] & 0x1F);
	v45.u32[1] = v126.u32[1] << (v120.u8[4] & 0x1F);
	v45.u32[2] = v126.u32[2] << (v120.u8[8] & 0x1F);
	v45.u32[3] = v126.u32[3] << (v120.u8[12] & 0x1F);
	// vor128 v48,v62,v62
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v47,v62,v62
	_mm_store_si128((__m128i*)v47.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v46,v62,v62
	_mm_store_si128((__m128i*)v46.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrlimi128 v62,v60,11,0
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 11));
	// vrlimi128 v48,v60,1,0
	_mm_store_ps(v48.f32, _mm_blend_ps(_mm_load_ps(v48.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 1));
	// vrlimi128 v47,v60,13,0
	_mm_store_ps(v47.f32, _mm_blend_ps(_mm_load_ps(v47.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 13));
	// vrlimi128 v46,v60,7,0
	_mm_store_ps(v46.f32, _mm_blend_ps(_mm_load_ps(v46.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 228), 7));
	// vperm128 v63,v61,v63,v7
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)v126.u8));
	// vor128 v12,v59,v59
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v59.u8));
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v63.u8));
	// stvx128 v12,r11,r21
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vspltw128 v44,v63,0
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vmsum4fp128 v59,v48,v61
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v48.f32), _mm_load_ps(v61.f32), 0xFF));
	// vpermwi128 v60,v61,177
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x4E));
	// vpermwi128 v48,v61,78
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xB1));
	// vpermwi128 v61,v61,228
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x1B));
	// vmsum4fp128 v60,v47,v60
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v47.f32), _mm_load_ps(v60.f32), 0xFF));
	// vspltw128 v47,v63,1
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vmsum4fp128 v48,v46,v48
	_mm_store_ps(v48.f32, _mm_dp_ps(_mm_load_ps(v46.f32), _mm_load_ps(v48.f32), 0xFF));
	// vspltw128 v46,v63,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vmsum4fp128 v62,v62,v61
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v61.f32), 0xFF));
	// vmrghw128 v61,v60,v59
	_mm_store_si128((__m128i*)v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v60.u32)));
	// vspltw128 v59,v63,2
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vmrghw128 v62,v62,v48
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v48.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vsldoi128 v60,v51,v127,12
	_mm_store_si128((__m128i*)v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v127.u8), 4));
	// vor128 v51,v126,v126
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)v126.u8));
	// vmrghw128 v10,v62,v61
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v61.u32), _mm_load_si128((__m128i*)v62.u32)));
	// vmsum4fp128 v62,v52,v10
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v52.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vcmpgtfp128 v12,v127,v62
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(v127.f32), _mm_load_ps(v62.f32)));
	// vsel v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v48,v12,v12
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vxor128 v6,v62,v48
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v48.u8)));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v42,v62,v127,8
	_mm_store_si128((__m128i*)v42.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v127.u8), 8));
	// vcmpgtfp128 v27,v50,v6
	_mm_store_ps(v27.f32, _mm_cmpgt_ps(_mm_load_ps(v50.f32), _mm_load_ps(ctx.v6.f32)));
	// vand128 v61,v6,v49
	_mm_store_si128((__m128i*)v61.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vrefp v12,v6
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v6.f32)));
	// vslw128 v50,v6,v125
	v50.u32[0] = ctx.v6.u32[0] << (v125.u8[0] & 0x1F);
	v50.u32[1] = ctx.v6.u32[1] << (v125.u8[4] & 0x1F);
	v50.u32[2] = ctx.v6.u32[2] << (v125.u8[8] & 0x1F);
	v50.u32[3] = ctx.v6.u32[3] << (v125.u8[12] & 0x1F);
	// vcmpeqfp128 v26,v6,v127
	_mm_store_ps(v26.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v127.f32)));
	// vnmsubfp v5,v6,v6,v1
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpequw128 v29,v50,v45
	_mm_store_si128((__m128i*)v29.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v50.u32), _mm_load_si128((__m128i*)v45.u32)));
	// vnmsubfp v7,v6,v12,v31
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v50,v42,v60
	_mm_store_si128((__m128i*)v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)v60.u8)));
	// lvx128 v62,r0,r28
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvx128 v60,r0,r26
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vcmpequw128 v11,v61,v127
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v61.u32), _mm_load_si128((__m128i*)v127.u32)));
	// vspltw128 v19,v62,1
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v39,v63,3
	_mm_store_si128((__m128i*)v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vslw128 v51,v51,v51
	v51.u32[0] = v51.u32[0] << (v51.u8[0] & 0x1F);
	v51.u32[1] = v51.u32[1] << (v51.u8[4] & 0x1F);
	v51.u32[2] = v51.u32[2] << (v51.u8[8] & 0x1F);
	v51.u32[3] = v51.u32[3] << (v51.u8[12] & 0x1F);
	// vaddfp128 v50,v43,v50
	_mm_store_ps(v50.f32, _mm_add_ps(_mm_load_ps(v43.f32), _mm_load_ps(v50.f32)));
	// vor128 v43,v5,v5
	_mm_store_si128((__m128i*)v43.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vor128 v5,v123,v123
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v123.u8));
	// vspltw128 v41,v63,0
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v42,v62,0
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// lvx128 v61,r0,r27
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vspltw128 v40,v62,2
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vrsqrtefp128 v13,v43
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v43.f32))));
	// vor128 v8,v43,v43
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v43.u8));
	// vmulfp128 v3,v43,v123
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v123.f32)));
	// vspltw128 v22,v60,0
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v20,v60,2
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vmaddfp v12,v12,v7,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v15,v60,3
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vspltw128 v0,v124,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vor128 v7,v41,v41
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v41.u8));
	// vspltw128 v23,v61,2
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vmulfp128 v4,v13,v13
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v38,v13,v13
	_mm_store_ps(v38.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v21,v6,v12,v31
	_mm_store_ps(v21.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(v31.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v31,v63,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vcmpeqfp v18,v12,v12
	_mm_store_ps(v18.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp128 v5,v3,v4,v5
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v37,v5,v5
	_mm_store_ps(v37.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v13,v43,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v5,v37,v38
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)v38.u8)));
	// vsel v5,v13,v8,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vor128 v43,v5,v5
	_mm_store_si128((__m128i*)v43.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vand128 v49,v43,v49
	_mm_store_si128((__m128i*)v49.u8, _mm_and_si128(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vcmpeqfp128 v30,v43,v127
	_mm_store_ps(v30.f32, _mm_cmpeq_ps(_mm_load_ps(v43.f32), _mm_load_ps(v127.f32)));
	// vslw128 v38,v43,v125
	v38.u32[0] = v43.u32[0] << (v125.u8[0] & 0x1F);
	v38.u32[1] = v43.u32[1] << (v125.u8[4] & 0x1F);
	v38.u32[2] = v43.u32[2] << (v125.u8[8] & 0x1F);
	v38.u32[3] = v43.u32[3] << (v125.u8[12] & 0x1F);
	// vor128 v44,v44,v49
	_mm_store_si128((__m128i*)v44.u8, _mm_or_si128(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vor128 v8,v49,v49
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)v49.u8));
	// vor128 v5,v59,v49
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vor128 v4,v46,v49
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vspltw128 v46,v62,3
	_mm_store_si128((__m128i*)v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vor128 v1,v44,v44
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v44.u8));
	// lvx128 v62,r0,r25
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// vor128 v3,v47,v49
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v49.u8)));
	// vspltw128 v47,v61,3
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vcmpequw128 v28,v38,v45
	_mm_store_si128((__m128i*)v28.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v38.u32), _mm_load_si128((__m128i*)v45.u32)));
	// vspltw128 v45,v62,3
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vxor128 v49,v39,v51
	_mm_store_si128((__m128i*)v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v39.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vsel v24,v1,v8,v11
	_mm_store_si128((__m128i*)v24.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vsel v8,v4,v5,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// lvx128 v63,r0,r24
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vsel v5,v2,v3,v26
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v26,v61,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vsel v4,v3,v8,v29
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vrefp128 v8,v43
	_mm_store_ps(ctx.v8.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v43.f32)));
	// vsel v13,v5,v24,v30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)v24.u8))));
	// vor v5,v24,v24
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v24.u8));
	// vspltw128 v24,v61,1
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vor128 v30,v127,v127
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v127.u8));
	// vsel v6,v13,v4,v28
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vmaddfp v4,v12,v21,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v21.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw128 v21,v60,1
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vor128 v60,v19,v19
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v19.u8));
	// vspltw128 v19,v63,1
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v59,v6,v6
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vsel v12,v5,v6,v28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vor128 v13,v59,v59
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v59.u8));
	// vsel v6,v13,v12,v29
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v13,v9,v4,v18
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vor128 v38,v6,v6
	_mm_store_si128((__m128i*)v38.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vmulfp128 v37,v43,v13
	_mm_store_ps(v37.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpequw128 v18,v38,v126
	_mm_store_si128((__m128i*)v18.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v38.u32), _mm_load_si128((__m128i*)v126.u32)));
	// vandc128 v6,v37,v51
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v37.u8)));
	// vcmpgtfp128 v16,v37,v39
	_mm_store_ps(v16.f32, _mm_cmpgt_ps(_mm_load_ps(v37.f32), _mm_load_ps(v39.f32)));
	// vcmpgtfp v9,v6,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v59,v0,v0
	_mm_store_si128((__m128i*)v59.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrefp v13,v6
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v6.f32)));
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// vcmpgtfp128 v17,v49,v37
	_mm_store_ps(v17.f32, _mm_cmpgt_ps(_mm_load_ps(v49.f32), _mm_load_ps(v37.f32)));
	// vsel v5,v30,v7,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v30.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vsel v7,v31,v1,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vnmsubfp v1,v6,v13,v0
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v1,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v1,v6,v13,v0
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v2,v13,v13
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v4,v13,v1,v13
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v1,v43,v43
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v43.u8));
	// vnmsubfp v28,v1,v8,v25
	_mm_store_ps(v28.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v13,v12,v4,v2
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsel v12,v6,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vaddfp128 v4,v12,v42
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v42.f32)));
	// vor v3,v12,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmaddcfp128 v60,v12,v60,v12
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v60.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcmpgtfp128 v31,v12,v40
	_mm_store_ps(v31.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v40.f32)));
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v127.u8));
	// vrefp v13,v4
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v4.f32)));
	// vaddfp128 v60,v60,v122
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(v60.f32), _mm_load_ps(v122.f32)));
	// vor128 v61,v31,v31
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v31.u8));
	// vsel128 v61,v5,v7,v61
	_mm_store_si128((__m128i*)v61.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw128 v7,v62,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// lvx128 v62,r0,r22
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// vxor128 v5,v41,v51
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vnmsubfp v30,v4,v13,v0
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v30,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v13.f32)));
	// vcmpgtfp128 v30,v127,v37
	_mm_store_ps(v30.f32, _mm_cmpgt_ps(_mm_load_ps(v127.f32), _mm_load_ps(v37.f32)));
	// vor v6,v13,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vcmpeqfp v29,v13,v13
	_mm_store_ps(v29.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp128 v59,v4,v6,v59
	_mm_store_ps(v59.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(v59.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v6,v44,v44
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v44.u8));
	// vor128 v4,v41,v41
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)v41.u8));
	// vsel v14,v6,v12,v11
	_mm_store_si128((__m128i*)v14.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vmaddfp v11,v8,v28,v8
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v28.f32)), _mm_load_ps(ctx.v8.f32)));
	// vor128 v6,v38,v38
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)v38.u8));
	// vmaddfp128 v13,v13,v59,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v59.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v2,v13,v29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v60,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v12.f32)));
	// vsel v12,v3,v13,v31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vandc128 v60,v12,v51
	_mm_store_si128((__m128i*)v60.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgtfp128 v29,v46,v60
	_mm_store_ps(v29.f32, _mm_cmpgt_ps(_mm_load_ps(v46.f32), _mm_load_ps(v60.f32)));
	// vaddfp128 v3,v13,v47
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v47.f32)));
	// vmaddfp v2,v13,v15,v20
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v15.f32)), _mm_load_ps(v20.f32)));
	// vmaddfp v3,v13,v3,v23
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(v23.f32)));
	// vmaddfp v2,v13,v2,v21
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(v21.f32)));
	// vmaddfp v3,v13,v3,v24
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(v24.f32)));
	// vmaddfp v2,v13,v2,v22
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(v22.f32)));
	// vmaddfp v3,v13,v3,v26
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(v26.f32)));
	// vmulfp128 v60,v2,v13
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v26,v11,v11
	_mm_store_ps(v26.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vrefp v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v3.f32)));
	// vor v31,v3,v3
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vnmsubfp v28,v31,v13,v0
	_mm_store_ps(v28.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v3,v13,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmaddfp v13,v13,v28,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v28.f32)), _mm_load_ps(ctx.v13.f32)));
	// vspltw128 v28,v63,2
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vnmsubfp v0,v1,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v31,v13,v13
	_mm_store_ps(v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v3,v0,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v3,v62,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vmulfp128 v0,v60,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v13,v0,v12,v29
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw128 v29,v63,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r23
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vspltw128 v31,v63,1
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vxor128 v0,v13,v51
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vspltw128 v1,v63,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v2,v63,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vaddfp128 v13,v12,v61
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v61.f32)));
	// vxor128 v0,v13,v51
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v51.u8)));
	// vsel v9,v13,v0,v30
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v30,v63,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vor128 v13,v43,v43
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v43.u8));
	// vsel v12,v9,v4,v16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vspltw128 v4,v62,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vnmsubfp v24,v13,v11,v25
	_mm_store_ps(v24.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v9,v62,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vor128 v13,v50,v50
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v50.u8));
	// vsel v0,v12,v5,v17
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v5,v62,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vaddfp v0,v0,v14
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v14.f32)));
	// vmaddfp v12,v11,v24,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v24.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsel v11,v6,v0,v18
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v0,v50,v11
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(ctx.v11.f32)));
	// vsel v6,v8,v12,v26
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vmulfp128 v63,v0,v45
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v45.f32)));
	// vrfin128 v12,v63
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v0,v7,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v63,v0,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v12,v63
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v19,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v11,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v28,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v29,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v30,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v31,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v1,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v2,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v3,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v63
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v11,v4,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v12,v63
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v63.f32)));
	// vmaddfp v12,v5,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v9,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)));
	// vsel v12,v13,v0,v27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vspltw128 v63,v12,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v62,v12,1
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v52,v63
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v63.f32)));
	// vxor128 v0,v62,v48
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v48.u8)));
	// vmaddfp v0,v10,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r9,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82624c70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82624C70;
loc_82625248:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-192
	r12.s64 = ctx.r1.s64 + -192;
	// bl 0x828ebf2c
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_8262525C"))) PPC_WEAK_FUNC(sub_8262525C);
PPC_FUNC_IMPL(__imp__sub_8262525C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82625260"))) PPC_WEAK_FUNC(sub_82625260);
PPC_FUNC_IMPL(__imp__sub_82625260) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8314cfbc
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,12800
	r11.u64 = r11.u64 | 12800;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x826252d8
	if (cr6.lt) goto loc_826252D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-29936
	ctx.r3.s64 = r11.s64 + -29936;
	// bl 0x8314d6fc
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826252d8
	if (cr0.lt) goto loc_826252D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x826252dc
	goto loc_826252DC;
loc_826252D8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826252DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82625300
	if (cr6.eq) goto loc_82625300;
	// lis r5,8274
	ctx.r5.s64 = 542244864;
	// mtctr r11
	ctr.u64 = r11.u64;
	// ori r5,r5,32512
	ctx.r5.u64 = ctx.r5.u64 | 32512;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82625304
	goto loc_82625304;
loc_82625300:
	// bl 0x8314d89c
	__imp__NetDll_XNetStartup(ctx, base);
loc_82625304:
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

__attribute__((alias("__imp__sub_82625318"))) PPC_WEAK_FUNC(sub_82625318);
PPC_FUNC_IMPL(__imp__sub_82625318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262531C"))) PPC_WEAK_FUNC(sub_8262531C);
PPC_FUNC_IMPL(__imp__sub_8262531C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625320"))) PPC_WEAK_FUNC(sub_82625320);
PPC_FUNC_IMPL(__imp__sub_82625320) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625328"))) PPC_WEAK_FUNC(sub_82625328);
PPC_FUNC_IMPL(__imp__sub_82625328) {
	PPC_FUNC_PROLOGUE();
	// b 0x82625260
	sub_82625260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262532C"))) PPC_WEAK_FUNC(sub_8262532C);
PPC_FUNC_IMPL(__imp__sub_8262532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625330"))) PPC_WEAK_FUNC(sub_82625330);
PPC_FUNC_IMPL(__imp__sub_82625330) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625334"))) PPC_WEAK_FUNC(sub_82625334);
PPC_FUNC_IMPL(__imp__sub_82625334) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8ac
	__imp__NetDll_XNetCleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625338"))) PPC_WEAK_FUNC(sub_82625338);
PPC_FUNC_IMPL(__imp__sub_82625338) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625344"))) PPC_WEAK_FUNC(sub_82625344);
PPC_FUNC_IMPL(__imp__sub_82625344) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8bc
	__imp__NetDll_XNetRandom(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625348"))) PPC_WEAK_FUNC(sub_82625348);
PPC_FUNC_IMPL(__imp__sub_82625348) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625354"))) PPC_WEAK_FUNC(sub_82625354);
PPC_FUNC_IMPL(__imp__sub_82625354) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8cc
	__imp__NetDll_XNetRegisterKey(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625358"))) PPC_WEAK_FUNC(sub_82625358);
PPC_FUNC_IMPL(__imp__sub_82625358) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625368"))) PPC_WEAK_FUNC(sub_82625368);
PPC_FUNC_IMPL(__imp__sub_82625368) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8dc
	__imp__NetDll_XNetXnAddrToInAddr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262536C"))) PPC_WEAK_FUNC(sub_8262536C);
PPC_FUNC_IMPL(__imp__sub_8262536C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625370"))) PPC_WEAK_FUNC(sub_82625370);
PPC_FUNC_IMPL(__imp__sub_82625370) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625380"))) PPC_WEAK_FUNC(sub_82625380);
PPC_FUNC_IMPL(__imp__sub_82625380) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8ec
	__imp__NetDll_XNetServerToInAddr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625384"))) PPC_WEAK_FUNC(sub_82625384);
PPC_FUNC_IMPL(__imp__sub_82625384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625388"))) PPC_WEAK_FUNC(sub_82625388);
PPC_FUNC_IMPL(__imp__sub_82625388) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625398"))) PPC_WEAK_FUNC(sub_82625398);
PPC_FUNC_IMPL(__imp__sub_82625398) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d8fc
	__imp__NetDll_XNetInAddrToXnAddr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262539C"))) PPC_WEAK_FUNC(sub_8262539C);
PPC_FUNC_IMPL(__imp__sub_8262539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253A0"))) PPC_WEAK_FUNC(sub_826253A0);
PPC_FUNC_IMPL(__imp__sub_826253A0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826253B0"))) PPC_WEAK_FUNC(sub_826253B0);
PPC_FUNC_IMPL(__imp__sub_826253B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d90c
	__imp__NetDll_XNetInAddrToString(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826253B4"))) PPC_WEAK_FUNC(sub_826253B4);
PPC_FUNC_IMPL(__imp__sub_826253B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253B8"))) PPC_WEAK_FUNC(sub_826253B8);
PPC_FUNC_IMPL(__imp__sub_826253B8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826253C0"))) PPC_WEAK_FUNC(sub_826253C0);
PPC_FUNC_IMPL(__imp__sub_826253C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d91c
	__imp__NetDll_XNetUnregisterInAddr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826253C4"))) PPC_WEAK_FUNC(sub_826253C4);
PPC_FUNC_IMPL(__imp__sub_826253C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253C8"))) PPC_WEAK_FUNC(sub_826253C8);
PPC_FUNC_IMPL(__imp__sub_826253C8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826253D4"))) PPC_WEAK_FUNC(sub_826253D4);
PPC_FUNC_IMPL(__imp__sub_826253D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d92c
	__imp__NetDll_XNetXnAddrToMachineId(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826253D8"))) PPC_WEAK_FUNC(sub_826253D8);
PPC_FUNC_IMPL(__imp__sub_826253D8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826253E0"))) PPC_WEAK_FUNC(sub_826253E0);
PPC_FUNC_IMPL(__imp__sub_826253E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d93c
	__imp__NetDll_XNetConnect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826253E4"))) PPC_WEAK_FUNC(sub_826253E4);
PPC_FUNC_IMPL(__imp__sub_826253E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253E8"))) PPC_WEAK_FUNC(sub_826253E8);
PPC_FUNC_IMPL(__imp__sub_826253E8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826253F0"))) PPC_WEAK_FUNC(sub_826253F0);
PPC_FUNC_IMPL(__imp__sub_826253F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d94c
	__imp__NetDll_XNetGetConnectStatus(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826253F4"))) PPC_WEAK_FUNC(sub_826253F4);
PPC_FUNC_IMPL(__imp__sub_826253F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826253F8"))) PPC_WEAK_FUNC(sub_826253F8);
PPC_FUNC_IMPL(__imp__sub_826253F8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625408"))) PPC_WEAK_FUNC(sub_82625408);
PPC_FUNC_IMPL(__imp__sub_82625408) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d95c
	__imp__NetDll_XNetDnsLookup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262540C"))) PPC_WEAK_FUNC(sub_8262540C);
PPC_FUNC_IMPL(__imp__sub_8262540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625410"))) PPC_WEAK_FUNC(sub_82625410);
PPC_FUNC_IMPL(__imp__sub_82625410) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625418"))) PPC_WEAK_FUNC(sub_82625418);
PPC_FUNC_IMPL(__imp__sub_82625418) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d96c
	__imp__NetDll_XNetDnsRelease(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262541C"))) PPC_WEAK_FUNC(sub_8262541C);
PPC_FUNC_IMPL(__imp__sub_8262541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625420"))) PPC_WEAK_FUNC(sub_82625420);
PPC_FUNC_IMPL(__imp__sub_82625420) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82625438"))) PPC_WEAK_FUNC(sub_82625438);
PPC_FUNC_IMPL(__imp__sub_82625438) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d97c
	__imp__NetDll_XNetQosListen(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262543C"))) PPC_WEAK_FUNC(sub_8262543C);
PPC_FUNC_IMPL(__imp__sub_8262543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625440"))) PPC_WEAK_FUNC(sub_82625440);
PPC_FUNC_IMPL(__imp__sub_82625440) {
	PPC_FUNC_PROLOGUE();
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
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r31,268(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r30,260(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r29,252(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r28,244(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x8314d98c
	__imp__NetDll_XNetQosLookup(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8262549C"))) PPC_WEAK_FUNC(sub_8262549C);
PPC_FUNC_IMPL(__imp__sub_8262549C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826254A0"))) PPC_WEAK_FUNC(sub_826254A0);
PPC_FUNC_IMPL(__imp__sub_826254A0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826254A8"))) PPC_WEAK_FUNC(sub_826254A8);
PPC_FUNC_IMPL(__imp__sub_826254A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d99c
	__imp__NetDll_XNetQosRelease(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826254AC"))) PPC_WEAK_FUNC(sub_826254AC);
PPC_FUNC_IMPL(__imp__sub_826254AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826254B0"))) PPC_WEAK_FUNC(sub_826254B0);
PPC_FUNC_IMPL(__imp__sub_826254B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826254B8"))) PPC_WEAK_FUNC(sub_826254B8);
PPC_FUNC_IMPL(__imp__sub_826254B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d9ac
	__imp__NetDll_XNetGetTitleXnAddr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826254BC"))) PPC_WEAK_FUNC(sub_826254BC);
PPC_FUNC_IMPL(__imp__sub_826254BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826254C0"))) PPC_WEAK_FUNC(sub_826254C0);
PPC_FUNC_IMPL(__imp__sub_826254C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826254C4"))) PPC_WEAK_FUNC(sub_826254C4);
PPC_FUNC_IMPL(__imp__sub_826254C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d9bc
	__imp__NetDll_XNetGetEthernetLinkStatus(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826254C8"))) PPC_WEAK_FUNC(sub_826254C8);
PPC_FUNC_IMPL(__imp__sub_826254C8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826254D8"))) PPC_WEAK_FUNC(sub_826254D8);
PPC_FUNC_IMPL(__imp__sub_826254D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d9cc
	__imp__NetDll_XNetGetOpt(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826254DC"))) PPC_WEAK_FUNC(sub_826254DC);
PPC_FUNC_IMPL(__imp__sub_826254DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826254E0"))) PPC_WEAK_FUNC(sub_826254E0);
PPC_FUNC_IMPL(__imp__sub_826254E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(r11.u32 + 512, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8262550C"))) PPC_WEAK_FUNC(sub_8262550C);
PPC_FUNC_IMPL(__imp__sub_8262550C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625510"))) PPC_WEAK_FUNC(sub_82625510);
PPC_FUNC_IMPL(__imp__sub_82625510) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// stw r4,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r4.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r5,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r5.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262563c
	if (cr0.lt) goto loc_8262563C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262563c
	if (cr0.lt) goto loc_8262563C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d9ec
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262563c
	if (cr0.lt) goto loc_8262563C;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,518
	ctx.r3.s64 = 518;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82625ff8
	sub_82625FF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262563c
	if (cr0.lt) goto loc_8262563C;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,748
	ctx.r4.s64 = ctx.r1.s64 + 748;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,756
	ctx.r4.s64 = ctx.r1.s64 + 756;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32800
	ctx.r4.u64 = ctx.r4.u64 | 32800;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x8314cedc
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8262565c
	if (!cr0.lt) goto loc_8262565C;
loc_8262563C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262564c
	if (cr6.eq) goto loc_8262564C;
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
loc_8262564C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// li r30,1627
	r30.s64 = 1627;
	// b 0x82625664
	goto loc_82625664;
loc_8262565C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
loc_82625664:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
}

__attribute__((alias("__imp__sub_8262566C"))) PPC_WEAK_FUNC(sub_8262566C);
PPC_FUNC_IMPL(__imp__sub_8262566C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82625670"))) PPC_WEAK_FUNC(sub_82625670);
PPC_FUNC_IMPL(__imp__sub_82625670) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, r30.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262576c
	if (cr0.lt) goto loc_8262576C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262576c
	if (cr0.lt) goto loc_8262576C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d9ec
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262576c
	if (cr0.lt) goto loc_8262576C;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r3,1414
	ctx.r3.s64 = 1414;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82625ff8
	sub_82625FF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8262576c
	if (cr0.lt) goto loc_8262576C;
	// addi r4,r1,740
	ctx.r4.s64 = ctx.r1.s64 + 740;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ori r4,r4,32803
	ctx.r4.u64 = ctx.r4.u64 | 32803;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x8314cedc
	__imp__XMsgInProcessCall(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8262578c
	if (!cr0.lt) goto loc_8262578C;
loc_8262576C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262577c
	if (cr6.eq) goto loc_8262577C;
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
loc_8262577C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// li r30,1627
	r30.s64 = 1627;
	// b 0x82625794
	goto loc_82625794;
loc_8262578C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
loc_82625794:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
}

__attribute__((alias("__imp__sub_8262579C"))) PPC_WEAK_FUNC(sub_8262579C);
PPC_FUNC_IMPL(__imp__sub_8262579C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826257A0"))) PPC_WEAK_FUNC(sub_826257A0);
PPC_FUNC_IMPL(__imp__sub_826257A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r5,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3073
	ctx.r3.s64 = 3073;
	// addi r30,r11,448
	r30.s64 = r11.s64 + 448;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3585
	ctx.r3.s64 = 3585;
	// add r30,r30,r11
	r30.u64 = r30.u64 + r11.u64;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3601
	ctx.r3.s64 = 3601;
	// add r30,r30,r11
	r30.u64 = r30.u64 + r11.u64;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d9ec
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ee2b0
	sub_828EE2B0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r1,144
	r24.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r23,r1,152
	r23.s64 = ctx.r1.s64 + 152;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,3601
	ctx.r3.s64 = 3601;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x82625ff8
	sub_82625FF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826260f8
	sub_826260F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625a20
	if (cr0.lt) goto loc_82625A20;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r31.u64);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82625a4c
	if (!cr0.lt) goto loc_82625A4C;
loc_82625A20:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82625a34
	if (cr6.eq) goto loc_82625A34;
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x82625a38
	goto loc_82625A38;
loc_82625A34:
	// bl 0x8260ab50
	sub_8260AB50(ctx, base);
loc_82625A38:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82625a70
	if (cr6.eq) goto loc_82625A70;
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
	// b 0x82625a70
	goto loc_82625A70;
loc_82625A4C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82625a5c
	if (cr6.eq) goto loc_82625A5C;
	// li r31,997
	r31.s64 = 997;
	// b 0x82625a70
	goto loc_82625A70;
loc_82625A5C:
	// bl 0x8260aba0
	sub_8260ABA0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = r11.u64 & ctx.r10.u64;
loc_82625A70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
}

__attribute__((alias("__imp__sub_82625A78"))) PPC_WEAK_FUNC(sub_82625A78);
PPC_FUNC_IMPL(__imp__sub_82625A78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82625A7C"))) PPC_WEAK_FUNC(sub_82625A7C);
PPC_FUNC_IMPL(__imp__sub_82625A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625A80"))) PPC_WEAK_FUNC(sub_82625A80);
PPC_FUNC_IMPL(__imp__sub_82625A80) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,48
	r30.s64 = r11.s64 + 48;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3603
	ctx.r3.s64 = 3603;
	// add r30,r30,r11
	r30.u64 = r30.u64 + r11.u64;
	// bl 0x82625e98
	sub_82625E98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82625f20
	sub_82625F20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d9ec
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ee2b0
	sub_828EE2B0(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r25,r1,152
	r25.s64 = ctx.r1.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,3603
	ctx.r3.s64 = 3603;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// bl 0x82625ff8
	sub_82625FF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826254e0
	sub_826254E0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826260f8
	sub_826260F8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625cb4
	if (cr0.lt) goto loc_82625CB4;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// std r31,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r31.u64);
	// std r31,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, r31.u64);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82625ce0
	if (!cr0.lt) goto loc_82625CE0;
loc_82625CB4:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82625cc8
	if (cr6.eq) goto loc_82625CC8;
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x82625ccc
	goto loc_82625CCC;
loc_82625CC8:
	// bl 0x8260ab50
	sub_8260AB50(ctx, base);
loc_82625CCC:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82625d04
	if (cr6.eq) goto loc_82625D04;
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
	// b 0x82625d04
	goto loc_82625D04;
loc_82625CE0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82625cf0
	if (cr6.eq) goto loc_82625CF0;
	// li r31,997
	r31.s64 = 997;
	// b 0x82625d04
	goto loc_82625D04;
loc_82625CF0:
	// bl 0x8260aba0
	sub_8260ABA0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = r11.u64 & ctx.r10.u64;
loc_82625D04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
}

__attribute__((alias("__imp__sub_82625D0C"))) PPC_WEAK_FUNC(sub_82625D0C);
PPC_FUNC_IMPL(__imp__sub_82625D0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82625D10"))) PPC_WEAK_FUNC(sub_82625D10);
PPC_FUNC_IMPL(__imp__sub_82625D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x8260dd98
	sub_8260DD98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82625d74
	if (!cr0.eq) goto loc_82625D74;
	// lwz r11,244(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d9fc
	__imp__XamUserReadProfileSettings(ctx, base);
loc_82625D74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82625D78"))) PPC_WEAK_FUNC(sub_82625D78);
PPC_FUNC_IMPL(__imp__sub_82625D78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82625D7C"))) PPC_WEAK_FUNC(sub_82625D7C);
PPC_FUNC_IMPL(__imp__sub_82625D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625D80"))) PPC_WEAK_FUNC(sub_82625D80);
PPC_FUNC_IMPL(__imp__sub_82625D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625D90"))) PPC_WEAK_FUNC(sub_82625D90);
PPC_FUNC_IMPL(__imp__sub_82625D90) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82625dfc
	if (cr6.eq) goto loc_82625DFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82625dfc
	if (cr6.eq) goto loc_82625DFC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82625dfc
	if (cr6.eq) goto loc_82625DFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826268a0
	sub_826268A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82625e00
	if (!cr0.eq) goto loc_82625E00;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-12896
	ctx.r3.s64 = r11.s64 + -12896;
	// bl 0x826266b0
	sub_826266B0(ctx, base);
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x82625e00
	goto loc_82625E00;
loc_82625DFC:
	// li r3,87
	ctx.r3.s64 = 87;
loc_82625E00:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82625E10"))) PPC_WEAK_FUNC(sub_82625E10);
PPC_FUNC_IMPL(__imp__sub_82625E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625E14"))) PPC_WEAK_FUNC(sub_82625E14);
PPC_FUNC_IMPL(__imp__sub_82625E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625E18"))) PPC_WEAK_FUNC(sub_82625E18);
PPC_FUNC_IMPL(__imp__sub_82625E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// addi r3,r11,-7156
	ctx.r3.s64 = r11.s64 + -7156;
}

__attribute__((alias("__imp__sub_82625E20"))) PPC_WEAK_FUNC(sub_82625E20);
PPC_FUNC_IMPL(__imp__sub_82625E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82625d90
	sub_82625D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625E24"))) PPC_WEAK_FUNC(sub_82625E24);
PPC_FUNC_IMPL(__imp__sub_82625E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625E28"))) PPC_WEAK_FUNC(sub_82625E28);
PPC_FUNC_IMPL(__imp__sub_82625E28) {
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
	// bl 0x826268b0
	sub_826268B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82625E48"))) PPC_WEAK_FUNC(sub_82625E48);
PPC_FUNC_IMPL(__imp__sub_82625E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625E4C"))) PPC_WEAK_FUNC(sub_82625E4C);
PPC_FUNC_IMPL(__imp__sub_82625E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625E50"))) PPC_WEAK_FUNC(sub_82625E50);
PPC_FUNC_IMPL(__imp__sub_82625E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x8314cedc
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge 0x82625e84
	if (!cr0.lt) goto loc_82625E84;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82625E84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82625E90"))) PPC_WEAK_FUNC(sub_82625E90);
PPC_FUNC_IMPL(__imp__sub_82625E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625E94"))) PPC_WEAK_FUNC(sub_82625E94);
PPC_FUNC_IMPL(__imp__sub_82625E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625E98"))) PPC_WEAK_FUNC(sub_82625E98);
PPC_FUNC_IMPL(__imp__sub_82625E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,-12896
	r11.s64 = r11.s64 + -12896;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x82625ecc
	if (!cr0.eq) goto loc_82625ECC;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82625f08
	goto loc_82625F08;
loc_82625ECC:
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// addi r7,r9,23936
	ctx.r7.s64 = ctx.r9.s64 + 23936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ee9b8
	sub_828EE9B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82625efc
	if (!cr0.eq) goto loc_82625EFC;
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82625f08
	goto loc_82625F08;
loc_82625EFC:
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82625F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82625F18"))) PPC_WEAK_FUNC(sub_82625F18);
PPC_FUNC_IMPL(__imp__sub_82625F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625F1C"))) PPC_WEAK_FUNC(sub_82625F1C);
PPC_FUNC_IMPL(__imp__sub_82625F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625F20"))) PPC_WEAK_FUNC(sub_82625F20);
PPC_FUNC_IMPL(__imp__sub_82625F20) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-12896
	ctx.r3.s64 = ctx.r10.s64 + -12896;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// bl 0x82626620
	sub_82626620(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82625fec
	if (cr0.lt) goto loc_82625FEC;
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bne 0x82625f74
	if (!cr0.eq) goto loc_82625F74;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82625F74:
	// rlwinm. r10,r29,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82625f88
	if (cr0.eq) goto loc_82625F88;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r11,260
	r11.s64 = r11.s64 + 260;
loc_82625F88:
	// mulli r11,r11,120
	r11.s64 = r11.s64 * 120;
	// li r10,100
	ctx.r10.s64 = 100;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82625fa8
	if (cr6.eq) goto loc_82625FA8;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82625FA8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82625fb8
	if (cr6.eq) goto loc_82625FB8;
	// li r11,4096
	r11.s64 = 4096;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82625FB8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82625fec
	if (cr6.eq) goto loc_82625FEC;
	// rlwinm. r9,r29,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r11,76
	r11.s64 = 76;
	// beq 0x82625fd0
	if (cr0.eq) goto loc_82625FD0;
	// li r11,80
	r11.s64 = 80;
loc_82625FD0:
	// rlwinm. r9,r29,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82625fdc
	if (cr0.eq) goto loc_82625FDC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82625FDC:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r11,r11,11808
	r11.s64 = r11.s64 + 11808;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82625FEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82625FF0"))) PPC_WEAK_FUNC(sub_82625FF0);
PPC_FUNC_IMPL(__imp__sub_82625FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82625FF4"))) PPC_WEAK_FUNC(sub_82625FF4);
PPC_FUNC_IMPL(__imp__sub_82625FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82625FF8"))) PPC_WEAK_FUNC(sub_82625FF8);
PPC_FUNC_IMPL(__imp__sub_82625FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// rlwinm. r11,r5,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r29,76
	r29.s64 = 76;
	// beq 0x82626030
	if (cr0.eq) goto loc_82626030;
	// li r29,80
	r29.s64 = 80;
loc_82626030:
	// addi r30,r6,7712
	r30.s64 = ctx.r6.s64 + 7712;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// addi r31,r11,4096
	r31.s64 = r11.s64 + 4096;
	// bl 0x8314cedc
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// subf r31,r31,r24
	r31.s64 = r24.s64 - r31.s64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r8,r29,r28
	ctx.r8.u64 = r29.u64 + r28.u64;
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r11,r30,r8
	r11.u64 = r30.u64 + ctx.r8.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r29,r7,r11
	r29.u64 = ctx.r7.u64 & r11.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r5,r5,-12896
	ctx.r5.s64 = ctx.r5.s64 + -12896;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82626ad8
	sub_82626AD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826260ec
	if (cr0.lt) goto loc_826260EC;
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r28.u32);
loc_826260EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_826260F0"))) PPC_WEAK_FUNC(sub_826260F0);
PPC_FUNC_IMPL(__imp__sub_826260F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_826260F4"))) PPC_WEAK_FUNC(sub_826260F4);
PPC_FUNC_IMPL(__imp__sub_826260F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826260F8"))) PPC_WEAK_FUNC(sub_826260F8);
PPC_FUNC_IMPL(__imp__sub_826260F8) {
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
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// not r11,r6
	r11.u64 = ~ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// rlwinm r24,r11,30,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r4,1088
	cr6.compare<uint32_t>(ctx.r4.u32, 1088, xer);
	// bge cr6,0x82626164
	if (!cr6.lt) goto loc_82626164;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82626144
	if (cr6.eq) goto loc_82626144;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,122
	r31.u64 = r31.u64 | 122;
	// b 0x826261c0
	goto loc_826261C0;
loc_82626144:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1088
	ctx.r4.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d9ec
	__imp__XamAlloc(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826261b0
	if (cr0.lt) goto loc_826261B0;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82626168
	goto loc_82626168;
loc_82626164:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82626168:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r4,r11,-12896
	ctx.r4.s64 = r11.s64 + -12896;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82626bb8
	sub_82626BB8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826261b0
	if (cr0.lt) goto loc_826261B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826274e8
	sub_826274E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826261b0
	if (cr0.lt) goto loc_826261B0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_826261B0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826261c0
	if (cr6.eq) goto loc_826261C0;
	// bl 0x8314d9dc
	__imp__XamFree(ctx, base);
loc_826261C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826261C8"))) PPC_WEAK_FUNC(sub_826261C8);
PPC_FUNC_IMPL(__imp__sub_826261C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826261CC"))) PPC_WEAK_FUNC(sub_826261CC);
PPC_FUNC_IMPL(__imp__sub_826261CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826261D0"))) PPC_WEAK_FUNC(sub_826261D0);
PPC_FUNC_IMPL(__imp__sub_826261D0) {
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
	// li r11,1
	r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82627978
	sub_82627978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826261F8"))) PPC_WEAK_FUNC(sub_826261F8);
PPC_FUNC_IMPL(__imp__sub_826261F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826261FC"))) PPC_WEAK_FUNC(sub_826261FC);
PPC_FUNC_IMPL(__imp__sub_826261FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626200"))) PPC_WEAK_FUNC(sub_82626200);
PPC_FUNC_IMPL(__imp__sub_82626200) {
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
	// li r11,2
	r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626240
	if (cr0.lt) goto loc_82626240;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
loc_82626240:
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

__attribute__((alias("__imp__sub_82626254"))) PPC_WEAK_FUNC(sub_82626254);
PPC_FUNC_IMPL(__imp__sub_82626254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626258"))) PPC_WEAK_FUNC(sub_82626258);
PPC_FUNC_IMPL(__imp__sub_82626258) {
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
	// li r11,2
	r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82627978
	sub_82627978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82626280"))) PPC_WEAK_FUNC(sub_82626280);
PPC_FUNC_IMPL(__imp__sub_82626280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626284"))) PPC_WEAK_FUNC(sub_82626284);
PPC_FUNC_IMPL(__imp__sub_82626284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626288"))) PPC_WEAK_FUNC(sub_82626288);
PPC_FUNC_IMPL(__imp__sub_82626288) {
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
	// li r11,2
	r11.s64 = 2;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826262d0
	if (cr0.lt) goto loc_826262D0;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826262d0
	if (cr0.eq) goto loc_826262D0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
loc_826262D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826262D4"))) PPC_WEAK_FUNC(sub_826262D4);
PPC_FUNC_IMPL(__imp__sub_826262D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826262D8"))) PPC_WEAK_FUNC(sub_826262D8);
PPC_FUNC_IMPL(__imp__sub_826262D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x8262645c
	if (!cr6.lt) goto loc_8262645C;
	// li r27,1
	r27.s64 = 1;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8262645c
	if (cr6.lt) goto loc_8262645C;
	// beq cr6,0x8262632c
	if (cr6.eq) goto loc_8262632C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8262645c
	if (!cr6.lt) goto loc_8262645C;
loc_8262632C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626368
	if (cr0.eq) goto loc_82626368;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_82626368:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626388
	if (cr0.eq) goto loc_82626388;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_82626388:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r28,2
	r28.s64 = 2;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826263d4
	if (cr0.eq) goto loc_826263D4;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,86(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826263d4
	if (cr0.eq) goto loc_826263D4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_826263D4:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82626400
	if (!cr6.eq) goto loc_82626400;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82626288
	sub_82626288(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// b 0x8262640c
	goto loc_8262640C;
loc_82626400:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_8262640C:
	// li r29,0
	r29.s64 = 0;
loc_82626410:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x826264f4
	if (!cr6.eq) goto loc_826264F4;
	// lbz r11,89(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8262646c
	if (cr6.lt) goto loc_8262646C;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
loc_82626458:
	// beq cr6,0x82626548
	if (cr6.eq) goto loc_82626548;
loc_8262645C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82626464:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8262646C:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x826278f0
	sub_826278F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826264b0
	if (cr0.eq) goto loc_826264B0;
loc_8262648C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8262648c
	if (cr6.lt) goto loc_8262648C;
loc_826264B0:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lhz r11,84(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826279c8
	sub_826279C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// b 0x82626548
	goto loc_82626548;
loc_826264F4:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r10,30,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82626578
	if (cr6.lt) goto loc_82626578;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82626458
	if (!cr6.lt) goto loc_82626458;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627538
	sub_82627538(ctx, base);
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826262d8
	sub_826262D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_82626548:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82626564
	if (!cr6.eq) goto loc_82626564;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
loc_82626564:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x82626410
	if (!cr6.eq) goto loc_82626410;
	// b 0x82626464
	goto loc_82626464;
loc_82626578:
	// rlwinm. r11,r10,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8262659c
	if (cr0.eq) goto loc_8262659C;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_8262659C:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826265bc
	if (cr0.eq) goto loc_826265BC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_826265BC:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626604
	if (cr0.eq) goto loc_82626604;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627978
	sub_82627978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
	// lbz r11,86(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626604
	if (cr0.eq) goto loc_82626604;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626464
	if (cr0.lt) goto loc_82626464;
loc_82626604:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626548
	if (cr0.eq) goto loc_82626548;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82626200
	sub_82626200(ctx, base);
}

__attribute__((alias("__imp__sub_8262661C"))) PPC_WEAK_FUNC(sub_8262661C);
PPC_FUNC_IMPL(__imp__sub_8262661C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82626540
	// ERROR 82626540
	return;
}

__attribute__((alias("__imp__sub_82626620"))) PPC_WEAK_FUNC(sub_82626620);
PPC_FUNC_IMPL(__imp__sub_82626620) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x8262664c
	if (cr6.lt) goto loc_8262664C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82626668
	goto loc_82626668;
loc_8262664C:
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mullw r11,r9,r4
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82626668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82626674"))) PPC_WEAK_FUNC(sub_82626674);
PPC_FUNC_IMPL(__imp__sub_82626674) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626678"))) PPC_WEAK_FUNC(sub_82626678);
PPC_FUNC_IMPL(__imp__sub_82626678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82626694
	if (!cr6.gt) goto loc_82626694;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82626694:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_826266A8"))) PPC_WEAK_FUNC(sub_826266A8);
PPC_FUNC_IMPL(__imp__sub_826266A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826266AC"))) PPC_WEAK_FUNC(sub_826266AC);
PPC_FUNC_IMPL(__imp__sub_826266AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826266B0"))) PPC_WEAK_FUNC(sub_826266B0);
PPC_FUNC_IMPL(__imp__sub_826266B0) {
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
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826266ec
	if (cr0.eq) goto loc_826266EC;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x82626768
	goto loc_82626768;
loc_826266EC:
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82626700
	if (cr0.eq) goto loc_82626700;
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82626700:
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 40);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rotlwi r11,r10,2
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r6,42(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 42);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - r11.s64;
	// lhz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 26);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lhz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// lhz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r9,-44
	ctx.r10.s64 = ctx.r9.s64 + -44;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
loc_82626768:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82626770"))) PPC_WEAK_FUNC(sub_82626770);
PPC_FUNC_IMPL(__imp__sub_82626770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82626774"))) PPC_WEAK_FUNC(sub_82626774);
PPC_FUNC_IMPL(__imp__sub_82626774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626778"))) PPC_WEAK_FUNC(sub_82626778);
PPC_FUNC_IMPL(__imp__sub_82626778) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82626620
	sub_82626620(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x826267e4
	if (cr0.lt) goto loc_826267E4;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x826267c4
	if (cr6.eq) goto loc_826267C4;
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826267cc
	goto loc_826267CC;
loc_826267C4:
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826267CC:
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82627518
	sub_82627518(ctx, base);
loc_826267E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826267EC"))) PPC_WEAK_FUNC(sub_826267EC);
PPC_FUNC_IMPL(__imp__sub_826267EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826267F0"))) PPC_WEAK_FUNC(sub_826267F0);
PPC_FUNC_IMPL(__imp__sub_826267F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8314cfbc
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,12800
	r11.u64 = r11.u64 | 12800;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82626864
	if (cr6.lt) goto loc_82626864;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-29936
	ctx.r3.s64 = r11.s64 + -29936;
	// bl 0x8314d6fc
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626864
	if (cr0.lt) goto loc_82626864;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82626868
	goto loc_82626868;
loc_82626864:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82626868:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82626890
	if (cr6.eq) goto loc_82626890;
	// lis r6,8274
	ctx.r6.s64 = 542244864;
	// mtctr r11
	ctr.u64 = r11.u64;
	// ori r6,r6,32512
	ctx.r6.u64 = ctx.r6.u64 | 32512;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82626894
	goto loc_82626894;
loc_82626890:
	// bl 0x8314da2c
	__imp__NetDll_WSAStartup(ctx, base);
loc_82626894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82626898"))) PPC_WEAK_FUNC(sub_82626898);
PPC_FUNC_IMPL(__imp__sub_82626898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262689C"))) PPC_WEAK_FUNC(sub_8262689C);
PPC_FUNC_IMPL(__imp__sub_8262689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826268A0"))) PPC_WEAK_FUNC(sub_826268A0);
PPC_FUNC_IMPL(__imp__sub_826268A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826268AC"))) PPC_WEAK_FUNC(sub_826268AC);
PPC_FUNC_IMPL(__imp__sub_826268AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826267f0
	sub_826267F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826268B0"))) PPC_WEAK_FUNC(sub_826268B0);
PPC_FUNC_IMPL(__imp__sub_826268B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826268B4"))) PPC_WEAK_FUNC(sub_826268B4);
PPC_FUNC_IMPL(__imp__sub_826268B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da3c
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826268B8"))) PPC_WEAK_FUNC(sub_826268B8);
PPC_FUNC_IMPL(__imp__sub_826268B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826268C8"))) PPC_WEAK_FUNC(sub_826268C8);
PPC_FUNC_IMPL(__imp__sub_826268C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da4c
	__imp__NetDll_socket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826268CC"))) PPC_WEAK_FUNC(sub_826268CC);
PPC_FUNC_IMPL(__imp__sub_826268CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826268D0"))) PPC_WEAK_FUNC(sub_826268D0);
PPC_FUNC_IMPL(__imp__sub_826268D0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826268D8"))) PPC_WEAK_FUNC(sub_826268D8);
PPC_FUNC_IMPL(__imp__sub_826268D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da5c
	__imp__NetDll_closesocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826268DC"))) PPC_WEAK_FUNC(sub_826268DC);
PPC_FUNC_IMPL(__imp__sub_826268DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826268E0"))) PPC_WEAK_FUNC(sub_826268E0);
PPC_FUNC_IMPL(__imp__sub_826268E0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826268EC"))) PPC_WEAK_FUNC(sub_826268EC);
PPC_FUNC_IMPL(__imp__sub_826268EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da6c
	__imp__NetDll_shutdown(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826268F0"))) PPC_WEAK_FUNC(sub_826268F0);
PPC_FUNC_IMPL(__imp__sub_826268F0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626900"))) PPC_WEAK_FUNC(sub_82626900);
PPC_FUNC_IMPL(__imp__sub_82626900) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da7c
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626904"))) PPC_WEAK_FUNC(sub_82626904);
PPC_FUNC_IMPL(__imp__sub_82626904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626908"))) PPC_WEAK_FUNC(sub_82626908);
PPC_FUNC_IMPL(__imp__sub_82626908) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626920"))) PPC_WEAK_FUNC(sub_82626920);
PPC_FUNC_IMPL(__imp__sub_82626920) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da8c
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626924"))) PPC_WEAK_FUNC(sub_82626924);
PPC_FUNC_IMPL(__imp__sub_82626924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626928"))) PPC_WEAK_FUNC(sub_82626928);
PPC_FUNC_IMPL(__imp__sub_82626928) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626938"))) PPC_WEAK_FUNC(sub_82626938);
PPC_FUNC_IMPL(__imp__sub_82626938) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314da9c
	__imp__NetDll_bind(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262693C"))) PPC_WEAK_FUNC(sub_8262693C);
PPC_FUNC_IMPL(__imp__sub_8262693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626940"))) PPC_WEAK_FUNC(sub_82626940);
PPC_FUNC_IMPL(__imp__sub_82626940) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626950"))) PPC_WEAK_FUNC(sub_82626950);
PPC_FUNC_IMPL(__imp__sub_82626950) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314daac
	__imp__NetDll_connect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626954"))) PPC_WEAK_FUNC(sub_82626954);
PPC_FUNC_IMPL(__imp__sub_82626954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626958"))) PPC_WEAK_FUNC(sub_82626958);
PPC_FUNC_IMPL(__imp__sub_82626958) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626964"))) PPC_WEAK_FUNC(sub_82626964);
PPC_FUNC_IMPL(__imp__sub_82626964) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314dabc
	__imp__NetDll_listen(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626968"))) PPC_WEAK_FUNC(sub_82626968);
PPC_FUNC_IMPL(__imp__sub_82626968) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626978"))) PPC_WEAK_FUNC(sub_82626978);
PPC_FUNC_IMPL(__imp__sub_82626978) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314dacc
	__imp__NetDll_accept(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262697C"))) PPC_WEAK_FUNC(sub_8262697C);
PPC_FUNC_IMPL(__imp__sub_8262697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626980"))) PPC_WEAK_FUNC(sub_82626980);
PPC_FUNC_IMPL(__imp__sub_82626980) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626998"))) PPC_WEAK_FUNC(sub_82626998);
PPC_FUNC_IMPL(__imp__sub_82626998) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314dadc
	__imp__NetDll_select(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262699C"))) PPC_WEAK_FUNC(sub_8262699C);
PPC_FUNC_IMPL(__imp__sub_8262699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826269A0"))) PPC_WEAK_FUNC(sub_826269A0);
PPC_FUNC_IMPL(__imp__sub_826269A0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826269B8"))) PPC_WEAK_FUNC(sub_826269B8);
PPC_FUNC_IMPL(__imp__sub_826269B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314daec
	__imp__NetDll_WSAGetOverlappedResult(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826269BC"))) PPC_WEAK_FUNC(sub_826269BC);
PPC_FUNC_IMPL(__imp__sub_826269BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826269C0"))) PPC_WEAK_FUNC(sub_826269C0);
PPC_FUNC_IMPL(__imp__sub_826269C0) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826269D4"))) PPC_WEAK_FUNC(sub_826269D4);
PPC_FUNC_IMPL(__imp__sub_826269D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314dafc
	__imp__NetDll_recv(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826269D8"))) PPC_WEAK_FUNC(sub_826269D8);
PPC_FUNC_IMPL(__imp__sub_826269D8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826269F4"))) PPC_WEAK_FUNC(sub_826269F4);
PPC_FUNC_IMPL(__imp__sub_826269F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314db0c
	__imp__NetDll_recvfrom(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826269F8"))) PPC_WEAK_FUNC(sub_826269F8);
PPC_FUNC_IMPL(__imp__sub_826269F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314db1c
	__imp__NetDll_WSARecvFrom(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82626A4C"))) PPC_WEAK_FUNC(sub_82626A4C);
PPC_FUNC_IMPL(__imp__sub_82626A4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626A50"))) PPC_WEAK_FUNC(sub_82626A50);
PPC_FUNC_IMPL(__imp__sub_82626A50) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82626A64"))) PPC_WEAK_FUNC(sub_82626A64);
PPC_FUNC_IMPL(__imp__sub_82626A64) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314db2c
	__imp__NetDll_send(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626A68"))) PPC_WEAK_FUNC(sub_82626A68);
PPC_FUNC_IMPL(__imp__sub_82626A68) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314db3c
	__imp__NetDll_WSASendTo(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82626ABC"))) PPC_WEAK_FUNC(sub_82626ABC);
PPC_FUNC_IMPL(__imp__sub_82626ABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626AC0"))) PPC_WEAK_FUNC(sub_82626AC0);
PPC_FUNC_IMPL(__imp__sub_82626AC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314db4c
	__imp__NetDll_inet_addr(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626AC4"))) PPC_WEAK_FUNC(sub_82626AC4);
PPC_FUNC_IMPL(__imp__sub_82626AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626AC8"))) PPC_WEAK_FUNC(sub_82626AC8);
PPC_FUNC_IMPL(__imp__sub_82626AC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314db5c
	__imp__NetDll_WSAGetLastError(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626ACC"))) PPC_WEAK_FUNC(sub_82626ACC);
PPC_FUNC_IMPL(__imp__sub_82626ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626AD0"))) PPC_WEAK_FUNC(sub_82626AD0);
PPC_FUNC_IMPL(__imp__sub_82626AD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314db6c
	__imp__NetDll___WSAFDIsSet(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626AD4"))) PPC_WEAK_FUNC(sub_82626AD4);
PPC_FUNC_IMPL(__imp__sub_82626AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82626AD8"))) PPC_WEAK_FUNC(sub_82626AD8);
PPC_FUNC_IMPL(__imp__sub_82626AD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r7,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626b1c
	if (cr0.eq) goto loc_82626B1C;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82626b1c
	if (!cr6.eq) goto loc_82626B1C;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
loc_82626B1C:
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r5.u32);
	// stw r4,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r24.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82627518
	sub_82627518(ctx, base);
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// beq cr6,0x82626bac
	if (cr6.eq) goto loc_82626BAC;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82626ba0
	if (cr6.eq) goto loc_82626BA0;
	// bl 0x82605ae8
	sub_82605AE8(ctx, base);
loc_82626BA0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82626BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82626BB4"))) PPC_WEAK_FUNC(sub_82626BB4);
PPC_FUNC_IMPL(__imp__sub_82626BB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82626BB8"))) PPC_WEAK_FUNC(sub_82626BB8);
PPC_FUNC_IMPL(__imp__sub_82626BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x82626778
	sub_82626778(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bge 0x82626c2c
	if (!cr0.lt) goto loc_82626C2C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(r31.u32 + 1080, r11.u32);
	// b 0x82626c6c
	goto loc_82626C6C;
loc_82626C2C:
	// stw r28,1080(r31)
	PPC_STORE_U32(r31.u32 + 1080, r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82627518
	sub_82627518(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
loc_82626C58:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82626c58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82626C58;
loc_82626C6C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82626C74"))) PPC_WEAK_FUNC(sub_82626C74);
PPC_FUNC_IMPL(__imp__sub_82626C74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82626C78"))) PPC_WEAK_FUNC(sub_82626C78);
PPC_FUNC_IMPL(__imp__sub_82626C78) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bgt cr6,0x82626ce8
	if (cr6.gt) goto loc_82626CE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x826261d0
	sub_826261D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82626cf0
	if (cr0.lt) goto loc_82626CF0;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82626cc0
	if (cr6.eq) goto loc_82626CC0;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82626CC0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,512(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 512);
	// subfc r11,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bne 0x82626cf0
	if (!cr0.eq) goto loc_82626CF0;
loc_82626CE8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82626CF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82626CF4"))) PPC_WEAK_FUNC(sub_82626CF4);
PPC_FUNC_IMPL(__imp__sub_82626CF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82626CF8"))) PPC_WEAK_FUNC(sub_82626CF8);
PPC_FUNC_IMPL(__imp__sub_82626CF8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// stw r5,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// sth r16,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, r16.u16);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82626d34
	if (cr6.lt) goto loc_82626D34;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82626f8c
	goto loc_82626F8C;
loc_82626D34:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82626d44
	if (cr6.eq) goto loc_82626D44;
	// lwz r21,0(r28)
	r21.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82626d48
	goto loc_82626D48;
loc_82626D44:
	// mr r21,r16
	r21.u64 = r16.u64;
loc_82626D48:
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// addi r24,r25,28
	r24.s64 = r25.s64 + 28;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x826261d0
	sub_826261D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,30,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82626f80
	if (cr6.lt) goto loc_82626F80;
	// beq cr6,0x82626d8c
	if (cr6.eq) goto loc_82626D8C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82626f80
	if (!cr6.lt) goto loc_82626F80;
	// addi r4,r1,90
	ctx.r4.s64 = ctx.r1.s64 + 90;
	// b 0x82626d90
	goto loc_82626D90;
loc_82626D8C:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
loc_82626D90:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r15,4
	r15.s64 = 4;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626df0
	if (cr0.eq) goto loc_82626DF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82626c78
	sub_82626C78(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// rotlwi r21,r9,0
	r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
loc_82626DF0:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626e10
	if (cr0.eq) goto loc_82626E10;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
loc_82626E10:
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r19,1
	r19.s64 = 1;
	// rlwinm. r11,r4,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82626e48
	if (cr0.eq) goto loc_82626E48;
	// lwz r11,1080(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 1080);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x82627b00
	sub_82627B00(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// b 0x82626e54
	goto loc_82626E54;
loc_82626E48:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// sth r16,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r16.u16);
loc_82626E54:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r17,r16
	r17.u64 = r16.u64;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82626ef4
	if (!cr6.eq) goto loc_82626EF4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82626288
	sub_82626288(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82627a50
	sub_82627A50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// rotlwi r18,r11,0
	r18.u64 = __builtin_rotateleft32(r11.u32, 0);
	// beq 0x82626ed8
	if (cr0.eq) goto loc_82626ED8;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// bl 0x82626678
	sub_82626678(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// and r18,r11,r18
	r18.u64 = r11.u64 & r18.u64;
loc_82626ED8:
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// bl 0x82627aa0
	sub_82627AA0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// b 0x82626f00
	goto loc_82626F00;
loc_82626EF4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// mr r18,r16
	r18.u64 = r16.u64;
	// sth r16,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r16.u16);
loc_82626F00:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,40(r25)
	r20.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82627464
	if (cr6.eq) goto loc_82627464;
loc_82626F10:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r23,r16
	r23.u64 = r16.u64;
	// mr r22,r16
	r22.u64 = r16.u64;
	// andi. r11,r11,243
	r11.u64 = r11.u64 & 243;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
loc_82626F24:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x8262704c
	if (!cr6.eq) goto loc_8262704C;
	// lbz r11,85(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// clrlwi r10,r23,16
	ctx.r10.u64 = r23.u32 & 0xFFFF;
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// blt cr6,0x82626f94
	if (cr6.lt) goto loc_82626F94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826261d0
	sub_826261D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,0,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x82626f80
	if (!cr6.eq) goto loc_82626F80;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bne cr6,0x82627414
	if (!cr6.eq) goto loc_82627414;
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82627414
	if (cr0.eq) goto loc_82627414;
loc_82626F80:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82626F88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82626F8C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828e9430
	return;
loc_82626F94:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bl 0x826278f0
	sub_826278F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r30,r16
	r30.u64 = r16.u64;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82627008
	if (cr0.eq) goto loc_82627008;
loc_82626FB8:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// bl 0x82626678
	sub_82626678(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// bne cr6,0x82626ff8
	if (!cr6.eq) goto loc_82626FF8;
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
loc_82626FF8:
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82626fb8
	if (cr6.lt) goto loc_82626FB8;
loc_82627008:
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x8262704c
	if (!cr6.eq) goto loc_8262704C;
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x826279c8
	sub_826279C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82627414
	goto loc_82627414;
loc_8262704C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,40(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826261d0
	sub_826261D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,30,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x826270f4
	if (cr6.lt) goto loc_826270F4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82627088
	if (cr6.lt) goto loc_82627088;
	// bne cr6,0x82626f80
	if (!cr6.eq) goto loc_82626F80;
	// b 0x82627414
	goto loc_82627414;
loc_82627088:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627538
	sub_82627538(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826270ec
	if (cr0.eq) goto loc_826270EC;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826270ec
	if (!cr0.eq) goto loc_826270EC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x826270e4
	if (cr6.eq) goto loc_826270E4;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_826270B8:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r14,1
	ctx.r4.s64 = r14.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82626cf8
	sub_82626CF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r9,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826274c4
	if (cr0.eq) goto loc_826274C4;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x82627414
	goto loc_82627414;
loc_826270E4:
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// b 0x826270b8
	goto loc_826270B8;
loc_826270EC:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// b 0x826270b8
	goto loc_826270B8;
loc_826270F4:
	// rlwinm. r11,r10,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// beq 0x82627150
	if (cr0.eq) goto loc_82627150;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82626c78
	sub_82626C78(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// rotlwi r21,r9,0
	r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82627150:
	// rlwinm. r11,r9,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82627170
	if (cr0.eq) goto loc_82627170;
	// addi r4,r1,102
	ctx.r4.s64 = ctx.r1.s64 + 102;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627948
	sub_82627948(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82627170:
	// clrlwi r11,r9,30
	r11.u64 = ctx.r9.u32 & 0x3;
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// slw r28,r19,r11
	r28.u64 = r11.u8 & 0x20 ? 0 : (r19.u32 << (r11.u8 & 0x3F));
	// beq 0x82627250
	if (cr0.eq) goto loc_82627250;
	// lwz r11,1080(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 1080);
	// addi r30,r25,56
	r30.s64 = r25.s64 + 56;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82627b00
	sub_82627B00(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x826271dc
	if (!cr0.eq) goto loc_826271DC;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826271dc
	if (!cr0.eq) goto loc_826271DC;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82627240
	if (cr6.eq) goto loc_82627240;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// b 0x826271e4
	goto loc_826271E4;
loc_826271DC:
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_826271E4:
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82627210
	if (cr0.eq) goto loc_82627210;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82627210
	if (!cr6.eq) goto loc_82627210;
	// bl 0x828ee2b0
	sub_828EE2B0(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82627210:
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82627aa0
	sub_82627AA0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// beq cr6,0x82627248
	if (cr6.eq) goto loc_82627248;
	// mr r28,r15
	r28.u64 = r15.u64;
	// b 0x82627268
	goto loc_82627268;
loc_82627240:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x826271e4
	goto loc_826271E4;
loc_82627248:
	// mullw r28,r5,r28
	r28.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// b 0x82627268
	goto loc_82627268;
loc_82627250:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r19.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// sth r16,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r16.u16);
loc_82627268:
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x826272e4
	if (cr6.eq) goto loc_826272E4;
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r31,16(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + r11.u64;
	// subf r8,r30,r31
	ctx.r8.s64 = r31.s64 - r30.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// addi r31,r25,8
	r31.s64 = r25.s64 + 8;
	// bl 0x82606150
	sub_82606150(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826278b8
	sub_826278B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// bl 0x82627c10
	sub_82627C10(ctx, base);
	// b 0x82627368
	goto loc_82627368;
loc_826272E4:
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8262737c
	if (cr6.eq) goto loc_8262737C;
	// clrlwi r11,r9,30
	r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82627354
	if (cr6.lt) goto loc_82627354;
	// beq cr6,0x8262733c
	if (cr6.eq) goto loc_8262733C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82627324
	if (cr6.lt) goto loc_82627324;
	// bne cr6,0x8262737c
	if (!cr6.eq) goto loc_8262737C;
	// ld r29,0(r4)
	r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8262737c
	if (!cr6.eq) goto loc_8262737C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x82627808
	sub_82627808(ctx, base);
	// b 0x82627368
	goto loc_82627368;
loc_82627324:
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8262737c
	if (!cr6.eq) goto loc_8262737C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x82627780
	sub_82627780(ctx, base);
	// b 0x82627368
	goto loc_82627368;
loc_8262733C:
	// lhz r29,0(r4)
	r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8262737c
	if (!cr6.eq) goto loc_8262737C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x82627700
	sub_82627700(ctx, base);
	// b 0x82627368
	goto loc_82627368;
loc_82627354:
	// lbz r29,0(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8262737c
	if (!cr6.eq) goto loc_8262737C;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// bl 0x82627688
	sub_82627688(ctx, base);
loc_82627368:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82626f88
	if (cr6.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_8262737C:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82627390
	if (!cr6.eq) goto loc_82627390;
	// lhz r28,90(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
loc_82627390:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8262739c
	if (cr6.eq) goto loc_8262739C;
	// add r21,r28,r21
	r21.u64 = r28.u64 + r21.u64;
loc_8262739C:
	// rlwinm. r11,r9,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82627410
	if (cr0.eq) goto loc_82627410;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82626200
	sub_82626200(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lhz r4,126(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// bl 0x82626678
	sub_82626678(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r11,124(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// rlwinm r5,r11,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r31,r19,r5
	r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r5.u8 & 0x3F));
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// subf r9,r31,r11
	ctx.r9.s64 = r11.s64 - r31.s64;
	// bl 0x826279d0
	sub_826279D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82627410:
	// lwz r28,340(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82627414:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82627430
	if (!cr6.eq) goto loc_82627430;
	// clrlwi r11,r23,16
	r11.u64 = r23.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r23,r11,16
	r23.u64 = r11.u32 & 0xFFFF;
loc_82627430:
	// rlwinm r11,r9,0,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x82626f24
	if (!cr6.eq) goto loc_82626F24;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// bge cr6,0x82627464
	if (!cr6.lt) goto loc_82627464;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82627538
	sub_82627538(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// blt cr6,0x82626f10
	if (cr6.lt) goto loc_82626F10;
loc_82627464:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82627488
	if (cr0.eq) goto loc_82627488;
	// lbz r11,92(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// bl 0x82627aa0
	sub_82627AA0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
loc_82627488:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826274bc
	if (!cr6.eq) goto loc_826274BC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82627538
	sub_82627538(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826262d8
	sub_826262D8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82626f88
	if (cr0.lt) goto loc_82626F88;
loc_826274BC:
	// stw r21,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r21.u32);
	// b 0x82626f88
	goto loc_82626F88;
loc_826274C4:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x826274e0
	if (!cr6.eq) goto loc_826274E0;
	// lhz r11,90(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// add r21,r11,r21
	r21.u64 = r11.u64 + r21.u64;
	// b 0x82627414
	goto loc_82627414;
loc_826274E0:
	// lwz r21,104(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
}

__attribute__((alias("__imp__sub_826274E4"))) PPC_WEAK_FUNC(sub_826274E4);
PPC_FUNC_IMPL(__imp__sub_826274E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627414
	// ERROR 82627414
	return;
}

__attribute__((alias("__imp__sub_826274E8"))) PPC_WEAK_FUNC(sub_826274E8);
PPC_FUNC_IMPL(__imp__sub_826274E8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82626cf8
	sub_82626CF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82627514"))) PPC_WEAK_FUNC(sub_82627514);
PPC_FUNC_IMPL(__imp__sub_82627514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627518"))) PPC_WEAK_FUNC(sub_82627518);
PPC_FUNC_IMPL(__imp__sub_82627518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_82627530"))) PPC_WEAK_FUNC(sub_82627530);
PPC_FUNC_IMPL(__imp__sub_82627530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627534"))) PPC_WEAK_FUNC(sub_82627534);
PPC_FUNC_IMPL(__imp__sub_82627534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627538"))) PPC_WEAK_FUNC(sub_82627538);
PPC_FUNC_IMPL(__imp__sub_82627538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82627550
	if (!cr6.gt) goto loc_82627550;
	// lis r3,-32744
	ctx.r3.s64 = -2145910784;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// blr 
	return;
loc_82627550:
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82627558"))) PPC_WEAK_FUNC(sub_82627558);
PPC_FUNC_IMPL(__imp__sub_82627558) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262755C"))) PPC_WEAK_FUNC(sub_8262755C);
PPC_FUNC_IMPL(__imp__sub_8262755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627560"))) PPC_WEAK_FUNC(sub_82627560);
PPC_FUNC_IMPL(__imp__sub_82627560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8262758c
	if (!cr6.lt) goto loc_8262758C;
	// lis r3,-32744
	ctx.r3.s64 = -2145910784;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// blr 
	return;
loc_8262758C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_826275AC"))) PPC_WEAK_FUNC(sub_826275AC);
PPC_FUNC_IMPL(__imp__sub_826275AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826275B0"))) PPC_WEAK_FUNC(sub_826275B0);
PPC_FUNC_IMPL(__imp__sub_826275B0) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82627560
	sub_82627560(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82627670
	if (cr0.lt) goto loc_82627670;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82627660
	if (cr6.eq) goto loc_82627660;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82627650
	if (cr6.eq) goto loc_82627650;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82627638
	if (cr6.eq) goto loc_82627638;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82627628
	if (cr6.eq) goto loc_82627628;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8262760c
	if (cr6.eq) goto loc_8262760C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
	// b 0x82627670
	goto loc_82627670;
loc_8262760C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// rldimi r11,r10,32,0
	r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (r11.u64 & 0xFFFFFFFF);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, r11.u64);
	// b 0x82627670
	goto loc_82627670;
loc_82627628:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// b 0x82627670
	goto loc_82627670;
loc_82627638:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// b 0x82627670
	goto loc_82627670;
loc_82627650:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r11.u8);
	// b 0x82627670
	goto loc_82627670;
loc_82627660:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82627670:
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

__attribute__((alias("__imp__sub_82627684"))) PPC_WEAK_FUNC(sub_82627684);
PPC_FUNC_IMPL(__imp__sub_82627684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627688"))) PPC_WEAK_FUNC(sub_82627688);
PPC_FUNC_IMPL(__imp__sub_82627688) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bge cr6,0x826276c4
	if (!cr6.lt) goto loc_826276C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x826276e4
	goto loc_826276E4;
loc_826276C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_826276E4:
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

__attribute__((alias("__imp__sub_826276F8"))) PPC_WEAK_FUNC(sub_826276F8);
PPC_FUNC_IMPL(__imp__sub_826276F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826276FC"))) PPC_WEAK_FUNC(sub_826276FC);
PPC_FUNC_IMPL(__imp__sub_826276FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82627700"))) PPC_WEAK_FUNC(sub_82627700);
PPC_FUNC_IMPL(__imp__sub_82627700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82627724
	if (!cr6.lt) goto loc_82627724;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_82627724:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x82627778
	if (cr6.eq) goto loc_82627778;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_82627740:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82627760
	if (cr6.eq) goto loc_82627760;
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r8,24,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r8,8,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x82627764
	goto loc_82627764;
loc_82627760:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_82627764:
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bdnz 0x82627740
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82627740;
loc_82627778:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8262777C"))) PPC_WEAK_FUNC(sub_8262777C);
PPC_FUNC_IMPL(__imp__sub_8262777C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82627780"))) PPC_WEAK_FUNC(sub_82627780);
PPC_FUNC_IMPL(__imp__sub_82627780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826277a4
	if (!cr6.lt) goto loc_826277A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_826277A4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x82627800
	if (cr6.eq) goto loc_82627800;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_826277C0:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826277e8
	if (cr6.eq) goto loc_826277E8;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r8,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r8,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r8,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r8,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// b 0x826277ec
	goto loc_826277EC;
loc_826277E8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_826277EC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bdnz 0x826277c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826277C0;
loc_82627800:
	// li r3,0
	ctx.r3.s64 = 0;
}

