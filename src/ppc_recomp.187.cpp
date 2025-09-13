#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826374D0"))) PPC_WEAK_FUNC(sub_826374D0);
PPC_FUNC_IMPL(__imp__sub_826374D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x8263751c
	if (!cr6.lt) goto loc_8263751C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826374E4:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bge cr6,0x82637524
	if (!cr6.lt) goto loc_82637524;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r11,27
	ctx.r7.u64 = r11.u32 & 0x1F;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// and r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82637524
	if (!cr6.eq) goto loc_82637524;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x826374e4
	if (cr6.lt) goto loc_826374E4;
loc_8263751C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82637524:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263752C"))) PPC_WEAK_FUNC(sub_8263752C);
PPC_FUNC_IMPL(__imp__sub_8263752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82637530"))) PPC_WEAK_FUNC(sub_82637530);
PPC_FUNC_IMPL(__imp__sub_82637530) {
	PPC_FUNC_PROLOGUE();
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x826374d0
	sub_826374D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82637538"))) PPC_WEAK_FUNC(sub_82637538);
PPC_FUNC_IMPL(__imp__sub_82637538) {
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
	// bl 0x82637348
	sub_82637348(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82637584
	if (cr6.eq) goto loc_82637584;
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
loc_82637584:
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

__attribute__((alias("__imp__sub_8263759C"))) PPC_WEAK_FUNC(sub_8263759C);
PPC_FUNC_IMPL(__imp__sub_8263759C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826375A0"))) PPC_WEAK_FUNC(sub_826375A0);
PPC_FUNC_IMPL(__imp__sub_826375A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826375A8"))) PPC_WEAK_FUNC(sub_826375A8);
PPC_FUNC_IMPL(__imp__sub_826375A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r11,-11872
	ctx.r5.s64 = r11.s64 + -11872;
	// b 0x82628308
	sub_82628308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826375B4"))) PPC_WEAK_FUNC(sub_826375B4);
PPC_FUNC_IMPL(__imp__sub_826375B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826375B8"))) PPC_WEAK_FUNC(sub_826375B8);
PPC_FUNC_IMPL(__imp__sub_826375B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r3,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82637604
	if (!cr6.lt) goto loc_82637604;
	// li r11,0
	r11.s64 = 0;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// oris r11,r11,16128
	r11.u64 = r11.u64 | 1056964608;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
loc_82637604:
	// li r11,16
	r11.s64 = 16;
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// oris r11,r11,16128
	r11.u64 = r11.u64 | 1056964608;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637618"))) PPC_WEAK_FUNC(sub_82637618);
PPC_FUNC_IMPL(__imp__sub_82637618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	uint32_t ea{};
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r11,r4,-2
	r11.s64 = ctx.r4.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82637630:
	// lhzu r10,2(r11)
	ea = 2 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// oris r8,r10,16128
	ctx.r8.u64 = ctx.r10.u64 | 1056964608;
	// lvx128 v0,r9,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82637630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82637630;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637650"))) PPC_WEAK_FUNC(sub_82637650);
PPC_FUNC_IMPL(__imp__sub_82637650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,48
	r11.s64 = 48;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r9,3792
	ctx.r8.s64 = ctx.r9.s64 + 3792;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r3,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v12,v10
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637680"))) PPC_WEAK_FUNC(sub_82637680);
PPC_FUNC_IMPL(__imp__sub_82637680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637690"))) PPC_WEAK_FUNC(sub_82637690);
PPC_FUNC_IMPL(__imp__sub_82637690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r3,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826376B4"))) PPC_WEAK_FUNC(sub_826376B4);
PPC_FUNC_IMPL(__imp__sub_826376B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826376B8"))) PPC_WEAK_FUNC(sub_826376B8);
PPC_FUNC_IMPL(__imp__sub_826376B8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// lvx128 v11,r0,r3
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// vmsum3fp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v0,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx v8,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v9,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,21036(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82637704
	if (cr6.gt) goto loc_82637704;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82637704:
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82637718
	if (cr6.lt) goto loc_82637718;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82637718:
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82637734"))) PPC_WEAK_FUNC(sub_82637734);
PPC_FUNC_IMPL(__imp__sub_82637734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637738"))) PPC_WEAK_FUNC(sub_82637738);
PPC_FUNC_IMPL(__imp__sub_82637738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9204
	ctx.r9.s64 = r11.s64 + 9204;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f1,60(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
}

__attribute__((alias("__imp__sub_82637780"))) PPC_WEAK_FUNC(sub_82637780);
PPC_FUNC_IMPL(__imp__sub_82637780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637784"))) PPC_WEAK_FUNC(sub_82637784);
PPC_FUNC_IMPL(__imp__sub_82637784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82637788"))) PPC_WEAK_FUNC(sub_82637788);
PPC_FUNC_IMPL(__imp__sub_82637788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r8,16
	ctx.r8.s64 = 16;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// li r7,32
	ctx.r7.s64 = 32;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,2
	ctx.r9.s64 = 2;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lvx128 v9,r4,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v8,r4,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826377CC:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v9,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v12,v0,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x826377cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826377CC;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r11,r6,16
	r11.s64 = ctx.r6.s64 + 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaxfp v12,v0,v13
	_mm_store_ps(ctx.v12.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vminfp v11,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v10,v11,v7
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32)));
	// vaddfp v8,v9,v7
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637834"))) PPC_WEAK_FUNC(sub_82637834);
PPC_FUNC_IMPL(__imp__sub_82637834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82637838"))) PPC_WEAK_FUNC(sub_82637838);
PPC_FUNC_IMPL(__imp__sub_82637838) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82bf63f8
	sub_82BF63F8(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82637894"))) PPC_WEAK_FUNC(sub_82637894);
PPC_FUNC_IMPL(__imp__sub_82637894) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82637898"))) PPC_WEAK_FUNC(sub_82637898);
PPC_FUNC_IMPL(__imp__sub_82637898) {
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
	PPCRegister f0{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + r11.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826378f0
	if (!cr6.lt) goto loc_826378F0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9276
	ctx.r8.s64 = ctx.r9.s64 + 9276;
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
loc_826378F0:
	// addi r28,r24,48
	r28.s64 = r24.s64 + 48;
	// addi r29,r24,32
	r29.s64 = r24.s64 + 32;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826376b8
	sub_826376B8(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r25,r24,16
	r25.s64 = r24.s64 + 16;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82637c34
	if (cr6.lt) goto loc_82637C34;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vsubfp v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// vsubfp v9,v10,v0
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82bf63f8
	sub_82BF63F8(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82637c34
	if (cr6.gt) goto loc_82637C34;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,7632
	ctx.r7.s64 = ctx.r10.s64 + 7632;
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// vmsum3fp128 v12,v5,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,7832(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7832);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f12,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// ble cr6,0x82637a14
	if (!cr6.gt) goto loc_82637A14;
	// vrsqrtefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// vspltisw v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_set1_epi32(int(0x0)));
	// vmulfp128 v9,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vcmpeqfp v6,v8,v12
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v10,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v9,v11,v13
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v0,v8,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v12,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)));
	// stvewx v12,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// b 0x82637a1c
	goto loc_82637A1C;
loc_82637A14:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// vxor v0,v5,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
loc_82637A1C:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,7520
	ctx.r8.s64 = ctx.r10.s64 + 7520;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v11,v10
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v12,v0,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v9,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82637a70
	if (cr6.eq) goto loc_82637A70;
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f9,f11,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fsubs f0,f8,f6
	f0.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// b 0x82637a78
	goto loc_82637A78;
loc_82637A70:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,6240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f0.f64 = double(temp.f32);
loc_82637A78:
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82637c34
	if (!cr6.lt) goto loc_82637C34;
	// lvx128 v11,r0,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vmsum3fp128 v12,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r10,7536
	ctx.r8.s64 = ctx.r10.s64 + 7536;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f0.f64, ctx.f12.f64);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r26
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v9,v8,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v6,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v8,v6,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v9,v7,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmsum3fp128 v5,v8,v0
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v5,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// blt cr6,0x82637bcc
	if (cr6.lt) goto loc_82637BCC;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82637bcc
	if (!cr6.gt) goto loc_82637BCC;
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x82637bcc
	if (!cr6.lt) goto loc_82637BCC;
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vspltisw v7,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_set1_epi32(int(0x0)));
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// vor v12,v7,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r6,0(r23)
	PPC_STORE_U8(r23.u32 + 0, ctx.r6.u8);
	// lvlx v6,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v5,v6,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vspltw v0,v5,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vsubfp v4,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v4,v11
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v9,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v3,v8,v0
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v2,v3,v3
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vrsqrtefp v0,v2
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// vmulfp128 v9,v2,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v7,v2
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v10,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v1,v13,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v31,v3,v1
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v31,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r8,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x82637d1c
	if (!cr6.lt) goto loc_82637D1C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x828e9454
	return;
loc_82637BCC:
	// vmsum3fp128 v0,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	cr6.compare(f0.f64, ctx.f12.f64);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fdivs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v0,v8,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v6,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v6,v11
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v13,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// bge cr6,0x82637c40
	if (!cr6.lt) goto loc_82637C40;
	// vmsum3fp128 v0,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82637c40
	if (!cr6.gt) goto loc_82637C40;
loc_82637C34:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// b 0x82637cec
	goto loc_82637CEC;
loc_82637C40:
	// li r29,0
	r29.s64 = 0;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// ble cr6,0x82637c5c
	if (!cr6.gt) goto loc_82637C5C;
	// li r30,1
	r30.s64 = 1;
loc_82637C5C:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// lfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r9,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v12,v7,v0
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82637d28
	sub_82637D28(ctx, base);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82637ce8
	if (cr6.eq) goto loc_82637CE8;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stb r10,0(r23)
	PPC_STORE_U8(r23.u32 + 0, ctx.r10.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82637d1c
	if (!cr6.lt) goto loc_82637D1C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x828e9454
	return;
loc_82637CE8:
	// stb r29,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r29.u8);
loc_82637CEC:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82637d1c
	if (!cr6.lt) goto loc_82637D1C;
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
loc_82637D1C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_82637D24"))) PPC_WEAK_FUNC(sub_82637D24);
PPC_FUNC_IMPL(__imp__sub_82637D24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82637D28"))) PPC_WEAK_FUNC(sub_82637D28);
PPC_FUNC_IMPL(__imp__sub_82637D28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fmuls f12,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v12,v0,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,21036(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82637e1c
	if (!cr6.lt) goto loc_82637E1C;
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f9,f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,7536
	ctx.r9.s64 = r11.s64 + 7536;
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,4028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4028);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fcmpu cr6,f9,f7
	cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// ble cr6,0x82637dcc
	if (!cr6.gt) goto loc_82637DCC;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82637e1c
	if (cr6.lt) goto loc_82637E1C;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / f0.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v0,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vsubfp v9,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// b 0x82637dd0
	goto loc_82637DD0;
loc_82637DCC:
	// fmr f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f11.f64;
loc_82637DD0:
	// vmsum3fp128 v0,v13,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stvewx v0,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmsubs f12,f13,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82637e1c
	if (!cr6.gt) goto loc_82637E1C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsqrts f8,f12
	ctx.f8.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fadds f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bge cr6,0x82637e1c
	if (!cr6.lt) goto loc_82637E1C;
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82637e28
	if (!cr6.lt) goto loc_82637E28;
loc_82637E1C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82637E28:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,16(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,64(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lvlx v10,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v0,v9,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f1
	f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v8,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v6,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// li r11,-1
	r11.s64 = -1;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vmulfp128 v13,v6,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v5,v0,v7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r11.u32);
}

__attribute__((alias("__imp__sub_82637E9C"))) PPC_WEAK_FUNC(sub_82637E9C);
PPC_FUNC_IMPL(__imp__sub_82637E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637EA0"))) PPC_WEAK_FUNC(sub_82637EA0);
PPC_FUNC_IMPL(__imp__sub_82637EA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637EA8"))) PPC_WEAK_FUNC(sub_82637EA8);
PPC_FUNC_IMPL(__imp__sub_82637EA8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
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
	// bne cr6,0x82637ee8
	if (!cr6.eq) goto loc_82637EE8;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82637EE8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82637f20
	if (cr6.eq) goto loc_82637F20;
loc_82637F10:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82637f10
	if (!cr6.eq) goto loc_82637F10;
loc_82637F20:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82637f4c
	if (cr6.eq) goto loc_82637F4C;
loc_82637F3C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82637f3c
	if (!cr6.eq) goto loc_82637F3C;
loc_82637F4C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82637F5C"))) PPC_WEAK_FUNC(sub_82637F5C);
PPC_FUNC_IMPL(__imp__sub_82637F5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82637F60"))) PPC_WEAK_FUNC(sub_82637F60);
PPC_FUNC_IMPL(__imp__sub_82637F60) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r28,16
	r28.s64 = 16;
loc_82637F7C:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// lvx128 v0,r7,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
loc_82637FAC:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
loc_82637FC0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82637fd4
	if (cr6.lt) goto loc_82637FD4;
	// li r11,0
	r11.s64 = 0;
loc_82637FD4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82637fec
	if (cr6.eq) goto loc_82637FEC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// b 0x82637fc0
	goto loc_82637FC0;
loc_82637FEC:
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
loc_82638000:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82638014
	if (cr6.lt) goto loc_82638014;
	// li r11,0
	r11.s64 = 0;
loc_82638014:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263802c
	if (cr6.eq) goto loc_8263802C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// b 0x82638000
	goto loc_82638000;
loc_8263802C:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x826380d0
	if (cr6.lt) goto loc_826380D0;
	// beq cr6,0x826380c0
	if (cr6.eq) goto loc_826380C0;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lwz r26,44(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// stw r3,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
	// stw r26,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r26.u32);
loc_826380C0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x82637fac
	if (!cr6.gt) goto loc_82637FAC;
loc_826380D0:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x826380e4
	if (!cr6.lt) goto loc_826380E4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82637f60
	sub_82637F60(ctx, base);
loc_826380E4:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x826380f4
	if (!cr6.lt) goto loc_826380F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82637f7c
	goto loc_82637F7C;
loc_826380F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826380F8"))) PPC_WEAK_FUNC(sub_826380F8);
PPC_FUNC_IMPL(__imp__sub_826380F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826380FC"))) PPC_WEAK_FUNC(sub_826380FC);
PPC_FUNC_IMPL(__imp__sub_826380FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638100"))) PPC_WEAK_FUNC(sub_82638100);
PPC_FUNC_IMPL(__imp__sub_82638100) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
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
	// bne cr6,0x82638144
	if (!cr6.eq) goto loc_82638144;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82638144:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r30,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82638198
	if (cr6.eq) goto loc_82638198;
loc_82638188:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82638188
	if (!cr6.eq) goto loc_82638188;
loc_82638198:
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826381c8
	if (cr6.eq) goto loc_826381C8;
loc_826381B8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826381b8
	if (!cr6.eq) goto loc_826381B8;
loc_826381C8:
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826381EC"))) PPC_WEAK_FUNC(sub_826381EC);
PPC_FUNC_IMPL(__imp__sub_826381EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826381F0"))) PPC_WEAK_FUNC(sub_826381F0);
PPC_FUNC_IMPL(__imp__sub_826381F0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x82638228
	if (!cr6.gt) goto loc_82638228;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82637f60
	sub_82637F60(ctx, base);
loc_82638228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82638234"))) PPC_WEAK_FUNC(sub_82638234);
PPC_FUNC_IMPL(__imp__sub_82638234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638238"))) PPC_WEAK_FUNC(sub_82638238);
PPC_FUNC_IMPL(__imp__sub_82638238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r11,-11872
	ctx.r5.s64 = r11.s64 + -11872;
	// b 0x82628308
	sub_82628308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82638244"))) PPC_WEAK_FUNC(sub_82638244);
PPC_FUNC_IMPL(__imp__sub_82638244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638248"))) PPC_WEAK_FUNC(sub_82638248);
PPC_FUNC_IMPL(__imp__sub_82638248) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638250"))) PPC_WEAK_FUNC(sub_82638250);
PPC_FUNC_IMPL(__imp__sub_82638250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638260"))) PPC_WEAK_FUNC(sub_82638260);
PPC_FUNC_IMPL(__imp__sub_82638260) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82638280
	if (cr6.lt) goto loc_82638280;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82638280:
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82638298
	if (!cr6.lt) goto loc_82638298;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
loc_82638298:
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826382A0"))) PPC_WEAK_FUNC(sub_826382A0);
PPC_FUNC_IMPL(__imp__sub_826382A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826382B0"))) PPC_WEAK_FUNC(sub_826382B0);
PPC_FUNC_IMPL(__imp__sub_826382B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r7,r9,5456
	ctx.r7.s64 = ctx.r9.s64 + 5456;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r11,32
	r11.s64 = 32;
	// lvx128 v9,r4,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v4,r0,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r4,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v3,v4,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vmulfp128 v5,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r9,r5,8976
	ctx.r9.s64 = ctx.r5.s64 + 8976;
	// vmulfp128 v7,v12,v8
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)));
	// li r11,48
	r11.s64 = 48;
	// vmulfp128 v6,v11,v9
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r4,r11
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vand v30,v5,v0
	_mm_store_si128((__m128i*)v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand v2,v7,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand v1,v6,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddfp v29,v2,v3
	_mm_store_ps(v29.f32, _mm_add_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vaddfp v28,v30,v1
	_mm_store_ps(v28.f32, _mm_add_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v1.f32)));
	// vaddfp v27,v28,v29
	_mm_store_ps(v27.f32, _mm_add_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vxor v26,v27,v13
	_mm_store_si128((__m128i*)v26.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddfp v25,v27,v31
	_mm_store_ps(v25.f32, _mm_add_ps(_mm_load_ps(v27.f32), _mm_load_ps(v31.f32)));
	// vaddfp v24,v26,v31
	_mm_store_ps(v24.f32, _mm_add_ps(_mm_load_ps(v26.f32), _mm_load_ps(v31.f32)));
	// stvx128 v25,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263834C"))) PPC_WEAK_FUNC(sub_8263834C);
PPC_FUNC_IMPL(__imp__sub_8263834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638350"))) PPC_WEAK_FUNC(sub_82638350);
PPC_FUNC_IMPL(__imp__sub_82638350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,8976
	ctx.r9.s64 = r11.s64 + 8976;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r8,15808
	ctx.r6.s64 = ctx.r8.s64 + 15808;
	// lvx128 v11,r3,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r7,9424
	ctx.r4.s64 = ctx.r7.s64 + 9424;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// vand v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v0,v11,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vcmpgtfp v7,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v6,v7,v9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vmsum4fp128 v5,v6,v8
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vctsxs v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.s32, _mm_vctsxs(_mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r9,0,28,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// oris r7,r8,16128
	ctx.r7.u64 = ctx.r8.u64 | 1056964608;
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// lvx128 v3,r0,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826383CC"))) PPC_WEAK_FUNC(sub_826383CC);
PPC_FUNC_IMPL(__imp__sub_826383CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826383D0"))) PPC_WEAK_FUNC(sub_826383D0);
PPC_FUNC_IMPL(__imp__sub_826383D0) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826383E0"))) PPC_WEAK_FUNC(sub_826383E0);
PPC_FUNC_IMPL(__imp__sub_826383E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	uint32_t ea{};
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r8,r11,9296
	ctx.r8.s64 = r11.s64 + 9296;
loc_82638400:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r7,r11,3
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 3);
	// oris r4,r11,16128
	ctx.r4.u64 = r11.u64 | 1056964608;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lvx128 v13,r7,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82638400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82638400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638430"))) PPC_WEAK_FUNC(sub_82638430);
PPC_FUNC_IMPL(__imp__sub_82638430) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r11,32
	r11.s64 = 32;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r8,r10,9296
	ctx.r8.s64 = ctx.r10.s64 + 9296;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// li r5,16
	ctx.r5.s64 = 16;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r8,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f0,-52(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v12,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r31,80
	r31.s64 = 80;
	// li r29,112
	r29.s64 = 112;
	// li r30,96
	r30.s64 = 96;
	// li r28,96
	r28.s64 = 96;
	// li r27,112
	r27.s64 = 112;
	// stvx128 v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v0,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v11,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v8,v0,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v0,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v8,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v0,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v0,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v6,r4,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v7,r4,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826384F8"))) PPC_WEAK_FUNC(sub_826384F8);
PPC_FUNC_IMPL(__imp__sub_826384F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826384FC"))) PPC_WEAK_FUNC(sub_826384FC);
PPC_FUNC_IMPL(__imp__sub_826384FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638500"))) PPC_WEAK_FUNC(sub_82638500);
PPC_FUNC_IMPL(__imp__sub_82638500) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9444
	ctx.r9.s64 = r11.s64 + 9444;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82638548
	if (cr6.lt) goto loc_82638548;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82638548:
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82638560
	if (!cr6.lt) goto loc_82638560;
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
loc_82638560:
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
}

__attribute__((alias("__imp__sub_82638564"))) PPC_WEAK_FUNC(sub_82638564);
PPC_FUNC_IMPL(__imp__sub_82638564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638568"))) PPC_WEAK_FUNC(sub_82638568);
PPC_FUNC_IMPL(__imp__sub_82638568) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9414
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826385a8
	if (!cr6.lt) goto loc_826385A8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9516
	ctx.r8.s64 = ctx.r9.s64 + 9516;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_826385A8:
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r31,r1,-80
	r31.s64 = ctx.r1.s64 + -80;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v9,r4,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r8,15808
	ctx.r4.s64 = ctx.r8.s64 + 15808;
	// vaddfp v8,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r7,r9,8976
	ctx.r7.s64 = ctx.r9.s64 + 8976;
	// addi r9,r11,9424
	ctx.r9.s64 = r11.s64 + 9424;
	// lvx128 v7,r0,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lvx128 v4,r5,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v5,v7,v7
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r11,r1,-80
	r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lvx128 v3,r0,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v31,v7,v7
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vor v2,v3,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor v28,v3,v3
	_mm_store_si128((__m128i*)v28.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vcmpgefp v30,v12,v8
	_mm_store_ps(v30.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)));
	// vxor v13,v8,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpgefp v29,v4,v8
	_mm_store_ps(v29.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// vcmpgefp v27,v13,v12
	_mm_store_ps(v27.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgefp v26,v13,v4
	_mm_store_ps(v26.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)));
	// vand v25,v30,v7
	_mm_store_si128((__m128i*)v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vand v24,v29,v5
	_mm_store_si128((__m128i*)v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vmsum4fp128 v23,v25,v3
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v3.f32), 0xFF));
	// vand v22,v27,v6
	_mm_store_si128((__m128i*)v22.u8, _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vmsum4fp128 v21,v24,v1
	_mm_store_ps(v21.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v1.f32), 0xFF));
	// vand v20,v26,v31
	_mm_store_si128((__m128i*)v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)v31.u8)));
	// vmsum4fp128 v19,v22,v2
	_mm_store_ps(v19.f32, _mm_dp_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v2.f32), 0xFF));
	// vmsum4fp128 v18,v20,v28
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v20.f32), _mm_load_ps(v28.f32), 0xFF));
	// vctsxs v17,v23,0
	_mm_store_si128((__m128i*)v17.s32, _mm_vctsxs(_mm_load_ps(v23.f32)));
	// vctsxs v16,v21,0
	_mm_store_si128((__m128i*)v16.s32, _mm_vctsxs(_mm_load_ps(v21.f32)));
	// vctsxs v15,v19,0
	_mm_store_si128((__m128i*)v15.s32, _mm_vctsxs(_mm_load_ps(v19.f32)));
	// vctsxs v14,v18,0
	_mm_store_si128((__m128i*)v14.s32, _mm_vctsxs(_mm_load_ps(v18.f32)));
	// stvx128 v17,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v16,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r9,0,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// lwz r8,-80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v15,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,-80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stvx128 v14,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r10,r8,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE;
	// lwz r4,-80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// rlwinm r29,r4,0,28,30
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & r11.u64;
	// rlwinm r30,r7,0,28,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82638804
	if (!cr6.eq) goto loc_82638804;
	// and r9,r29,r30
	ctx.r9.u64 = r29.u64 & r30.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82638804
	if (!cr6.eq) goto loc_82638804;
	// or r9,r30,r11
	ctx.r9.u64 = r30.u64 | r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82638804
	if (cr6.eq) goto loc_82638804;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f11,16(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r4,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r4.u32);
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | r11.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// lfs f12,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r7,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r7.u32);
	// li r31,2
	r31.s64 = 2;
	// lfs f13,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// stw r31,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, r31.u32);
	// li r31,1
	r31.s64 = 1;
	// lfs f10,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	ctx.f10.f64 = double(temp.f32);
loc_82638704:
	// li r11,0
	r11.s64 = 0;
	// addi r10,r1,-88
	ctx.r10.s64 = ctx.r1.s64 + -88;
loc_8263870C:
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82638788
	if (cr6.eq) goto loc_82638788;
	// addi r5,r1,-56
	ctx.r5.s64 = ctx.r1.s64 + -56;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfsx f9,r11,r5
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f0,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f6,f8,f12,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fdivs f0,f7,f5
	f0.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// beq cr6,0x82638778
	if (cr6.eq) goto loc_82638778;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82638780
	if (cr6.lt) goto loc_82638780;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r1,-72
	ctx.r9.s64 = ctx.r1.s64 + -72;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// b 0x82638780
	goto loc_82638780;
loc_82638778:
	// fsubs f9,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f11,f9,f0,f11
	ctx.f11.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
loc_82638780:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82638804
	if (cr6.lt) goto loc_82638804;
loc_82638788:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r1,-88
	ctx.r10.s64 = ctx.r1.s64 + -88;
	// cmpwi cr6,r11,-8
	cr6.compare<int32_t>(r11.s32, -8, xer);
	// bge cr6,0x8263870c
	if (!cr6.lt) goto loc_8263870C;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// fmr f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64;
	// or r4,r29,r30
	ctx.r4.u64 = r29.u64 | r30.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bge 0x82638704
	if (!cr0.lt) goto loc_82638704;
	// lwz r11,64(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x826387f8
	if (!cr6.lt) goto loc_826387F8;
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
loc_826387F8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// b 0x828e9464
	return;
loc_82638804:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638834
	if (!cr6.lt) goto loc_82638834;
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
loc_82638834:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_8263883C"))) PPC_WEAK_FUNC(sub_8263883C);
PPC_FUNC_IMPL(__imp__sub_8263883C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82638840"))) PPC_WEAK_FUNC(sub_82638840);
PPC_FUNC_IMPL(__imp__sub_82638840) {
	PPC_FUNC_PROLOGUE();
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638848"))) PPC_WEAK_FUNC(sub_82638848);
PPC_FUNC_IMPL(__imp__sub_82638848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263885C"))) PPC_WEAK_FUNC(sub_8263885C);
PPC_FUNC_IMPL(__imp__sub_8263885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638860"))) PPC_WEAK_FUNC(sub_82638860);
PPC_FUNC_IMPL(__imp__sub_82638860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r11,-11584
	ctx.r5.s64 = r11.s64 + -11584;
}

__attribute__((alias("__imp__sub_82638868"))) PPC_WEAK_FUNC(sub_82638868);
PPC_FUNC_IMPL(__imp__sub_82638868) {
	PPC_FUNC_PROLOGUE();
	// b 0x82628308
	sub_82628308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263886C"))) PPC_WEAK_FUNC(sub_8263886C);
PPC_FUNC_IMPL(__imp__sub_8263886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638870"))) PPC_WEAK_FUNC(sub_82638870);
PPC_FUNC_IMPL(__imp__sub_82638870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638874"))) PPC_WEAK_FUNC(sub_82638874);
PPC_FUNC_IMPL(__imp__sub_82638874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638878"))) PPC_WEAK_FUNC(sub_82638878);
PPC_FUNC_IMPL(__imp__sub_82638878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263887C"))) PPC_WEAK_FUNC(sub_8263887C);
PPC_FUNC_IMPL(__imp__sub_8263887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638880"))) PPC_WEAK_FUNC(sub_82638880);
PPC_FUNC_IMPL(__imp__sub_82638880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r10,21220
	ctx.r6.s64 = ctx.r10.s64 + 21220;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r4,r9,9028
	ctx.r4.s64 = ctx.r9.s64 + 9028;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// addi r10,r8,8996
	ctx.r10.s64 = ctx.r8.s64 + 8996;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stb r5,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_826388C0"))) PPC_WEAK_FUNC(sub_826388C0);
PPC_FUNC_IMPL(__imp__sub_826388C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826388C4"))) PPC_WEAK_FUNC(sub_826388C4);
PPC_FUNC_IMPL(__imp__sub_826388C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826388C8"))) PPC_WEAK_FUNC(sub_826388C8);
PPC_FUNC_IMPL(__imp__sub_826388C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263891c
	if (!cr6.lt) goto loc_8263891C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9848
	ctx.r8.s64 = ctx.r9.s64 + 9848;
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
loc_8263891C:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// li r23,-1
	r23.s64 = -1;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r26,r23
	r26.u64 = r23.u64;
	// stw r11,64(r28)
	PPC_STORE_U32(r28.u32 + 64, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x826389d8
	if (!cr6.eq) goto loc_826389D8;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638a90
	if (cr6.eq) goto loc_82638A90;
loc_82638960:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826389b0
	if (cr6.eq) goto loc_826389B0;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_826389B0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82638960
	if (!cr6.eq) goto loc_82638960;
	// b 0x82638a90
	goto loc_82638A90;
loc_826389D8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638a90
	if (cr6.eq) goto loc_82638A90;
loc_826389E8:
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82638a6c
	if (cr6.eq) goto loc_82638A6C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82638a6c
	if (cr6.eq) goto loc_82638A6C;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82638A6C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x826389e8
	if (!cr6.eq) goto loc_826389E8;
loc_82638A90:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r28)
	PPC_STORE_U32(r28.u32 + 64, r11.u32);
	// beq cr6,0x82638ab0
	if (cr6.eq) goto loc_82638AB0;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, r26.u32);
loc_82638AB0:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638ae0
	if (!cr6.lt) goto loc_82638AE0;
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
loc_82638AE0:
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r22)
	PPC_STORE_U8(r22.u32 + 0, ctx.r9.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
}

__attribute__((alias("__imp__sub_82638AF8"))) PPC_WEAK_FUNC(sub_82638AF8);
PPC_FUNC_IMPL(__imp__sub_82638AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82638AFC"))) PPC_WEAK_FUNC(sub_82638AFC);
PPC_FUNC_IMPL(__imp__sub_82638AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638B00"))) PPC_WEAK_FUNC(sub_82638B00);
PPC_FUNC_IMPL(__imp__sub_82638B00) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,12
	r25.s64 = 12;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwzx r11,r25,r26
	r11.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638b54
	if (!cr6.lt) goto loc_82638B54;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9864
	ctx.r8.s64 = ctx.r9.s64 + 9864;
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
loc_82638B54:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// lfs f0,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,21212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638c30
	if (cr6.eq) goto loc_82638C30;
loc_82638BAC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vminfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82638bac
	if (!cr6.eq) goto loc_82638BAC;
loc_82638C30:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638c60
	if (!cr6.lt) goto loc_82638C60;
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
loc_82638C60:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_82638C68"))) PPC_WEAK_FUNC(sub_82638C68);
PPC_FUNC_IMPL(__imp__sub_82638C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82638C6C"))) PPC_WEAK_FUNC(sub_82638C6C);
PPC_FUNC_IMPL(__imp__sub_82638C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638C70"))) PPC_WEAK_FUNC(sub_82638C70);
PPC_FUNC_IMPL(__imp__sub_82638C70) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638cbc
	if (!cr6.lt) goto loc_82638CBC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9896
	ctx.r8.s64 = ctx.r9.s64 + 9896;
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
loc_82638CBC:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lfs f31,21212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21212);
	f31.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638d44
	if (cr6.eq) goto loc_82638D44;
loc_82638CE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// fsel f31,f0,f31,f1
	f31.f64 = f0.f64 >= 0.0 ? f31.f64 : ctx.f1.f64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82638ce8
	if (!cr6.eq) goto loc_82638CE8;
loc_82638D44:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638d74
	if (!cr6.lt) goto loc_82638D74;
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
loc_82638D74:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82638D80"))) PPC_WEAK_FUNC(sub_82638D80);
PPC_FUNC_IMPL(__imp__sub_82638D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82638D84"))) PPC_WEAK_FUNC(sub_82638D84);
PPC_FUNC_IMPL(__imp__sub_82638D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638D88"))) PPC_WEAK_FUNC(sub_82638D88);
PPC_FUNC_IMPL(__imp__sub_82638D88) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638ddc
	if (!cr6.lt) goto loc_82638DDC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9848
	ctx.r8.s64 = ctx.r9.s64 + 9848;
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
loc_82638DDC:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82638e80
	if (!cr6.eq) goto loc_82638E80;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638f34
	if (cr6.eq) goto loc_82638F34;
loc_82638E0C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82638e0c
	if (!cr6.eq) goto loc_82638E0C;
	// b 0x82638f34
	goto loc_82638F34;
loc_82638E80:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82638f34
	if (cr6.eq) goto loc_82638F34;
loc_82638E90:
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82638f10
	if (cr6.eq) goto loc_82638F10;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82638F10:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82638e90
	if (!cr6.eq) goto loc_82638E90;
loc_82638F34:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82638f64
	if (!cr6.lt) goto loc_82638F64;
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
loc_82638F64:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
}

__attribute__((alias("__imp__sub_82638F68"))) PPC_WEAK_FUNC(sub_82638F68);
PPC_FUNC_IMPL(__imp__sub_82638F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82638F6C"))) PPC_WEAK_FUNC(sub_82638F6C);
PPC_FUNC_IMPL(__imp__sub_82638F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638F70"))) PPC_WEAK_FUNC(sub_82638F70);
PPC_FUNC_IMPL(__imp__sub_82638F70) {
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

__attribute__((alias("__imp__sub_82638F84"))) PPC_WEAK_FUNC(sub_82638F84);
PPC_FUNC_IMPL(__imp__sub_82638F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638F88"))) PPC_WEAK_FUNC(sub_82638F88);
PPC_FUNC_IMPL(__imp__sub_82638F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11680
	ctx.r3.s64 = r11.s64 + -11680;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638F94"))) PPC_WEAK_FUNC(sub_82638F94);
PPC_FUNC_IMPL(__imp__sub_82638F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638F98"))) PPC_WEAK_FUNC(sub_82638F98);
PPC_FUNC_IMPL(__imp__sub_82638F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,21252
	ctx.r10.s64 = r11.s64 + 21252;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638FB0"))) PPC_WEAK_FUNC(sub_82638FB0);
PPC_FUNC_IMPL(__imp__sub_82638FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,21252
	ctx.r3.s64 = r11.s64 + 21252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82638FBC"))) PPC_WEAK_FUNC(sub_82638FBC);
PPC_FUNC_IMPL(__imp__sub_82638FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638FC0"))) PPC_WEAK_FUNC(sub_82638FC0);
PPC_FUNC_IMPL(__imp__sub_82638FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x82638fd8
	if (!cr6.eq) goto loc_82638FD8;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x82638fe4
	goto loc_82638FE4;
loc_82638FD8:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 / ctx.f1.f64));
loc_82638FE4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82638FF4"))) PPC_WEAK_FUNC(sub_82638FF4);
PPC_FUNC_IMPL(__imp__sub_82638FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82638FF8"))) PPC_WEAK_FUNC(sub_82638FF8);
PPC_FUNC_IMPL(__imp__sub_82638FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_82639004"))) PPC_WEAK_FUNC(sub_82639004);
PPC_FUNC_IMPL(__imp__sub_82639004) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf65b8
	sub_82BF65B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639008"))) PPC_WEAK_FUNC(sub_82639008);
PPC_FUNC_IMPL(__imp__sub_82639008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// b 0x82bf71a8
	sub_82BF71A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639018"))) PPC_WEAK_FUNC(sub_82639018);
PPC_FUNC_IMPL(__imp__sub_82639018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// b 0x82bf7230
	sub_82BF7230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639028"))) PPC_WEAK_FUNC(sub_82639028);
PPC_FUNC_IMPL(__imp__sub_82639028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// b 0x82bf7020
	sub_82BF7020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263903C"))) PPC_WEAK_FUNC(sub_8263903C);
PPC_FUNC_IMPL(__imp__sub_8263903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639040"))) PPC_WEAK_FUNC(sub_82639040);
PPC_FUNC_IMPL(__imp__sub_82639040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// b 0x82bf70d0
	sub_82BF70D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639050"))) PPC_WEAK_FUNC(sub_82639050);
PPC_FUNC_IMPL(__imp__sub_82639050) {
	PPC_FUNC_PROLOGUE();
	// stb r4,190(r3)
	PPC_STORE_U8(ctx.r3.u32 + 190, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_82639054"))) PPC_WEAK_FUNC(sub_82639054);
PPC_FUNC_IMPL(__imp__sub_82639054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639058"))) PPC_WEAK_FUNC(sub_82639058);
PPC_FUNC_IMPL(__imp__sub_82639058) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,192
	r11.s64 = 192;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
}

__attribute__((alias("__imp__sub_8263908C"))) PPC_WEAK_FUNC(sub_8263908C);
PPC_FUNC_IMPL(__imp__sub_8263908C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639090"))) PPC_WEAK_FUNC(sub_82639090);
PPC_FUNC_IMPL(__imp__sub_82639090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639098"))) PPC_WEAK_FUNC(sub_82639098);
PPC_FUNC_IMPL(__imp__sub_82639098) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
}

__attribute__((alias("__imp__sub_8263909C"))) PPC_WEAK_FUNC(sub_8263909C);
PPC_FUNC_IMPL(__imp__sub_8263909C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bf74a0
	sub_82BF74A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826390A0"))) PPC_WEAK_FUNC(sub_826390A0);
PPC_FUNC_IMPL(__imp__sub_826390A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,208
	r11.s64 = 208;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826390B0"))) PPC_WEAK_FUNC(sub_826390B0);
PPC_FUNC_IMPL(__imp__sub_826390B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,224
	r11.s64 = 224;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826390C0"))) PPC_WEAK_FUNC(sub_826390C0);
PPC_FUNC_IMPL(__imp__sub_826390C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,192
	ctx.r10.s64 = 192;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826390E4"))) PPC_WEAK_FUNC(sub_826390E4);
PPC_FUNC_IMPL(__imp__sub_826390E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826390E8"))) PPC_WEAK_FUNC(sub_826390E8);
PPC_FUNC_IMPL(__imp__sub_826390E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r3,208
	r11.s64 = ctx.r3.s64 + 208;
	// addi r9,r10,10460
	ctx.r9.s64 = ctx.r10.s64 + 10460;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r3,224
	ctx.r10.s64 = ctx.r3.s64 + 224;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82bf75d8
	sub_82BF75D8(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// clrlwi r6,r29,24
	ctx.r6.u64 = r29.u32 & 0xFF;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f0,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// beq cr6,0x8263917c
	if (cr6.eq) goto loc_8263917C;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// stb r9,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r9.u8);
	// b 0x82639184
	goto loc_82639184;
loc_8263917C:
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r10,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r10.u8);
loc_82639184:
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// sth r11,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r11.u16);
	// addi r9,r31,256
	ctx.r9.s64 = r31.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// srawi r6,r7,16
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// sth r6,286(r31)
	PPC_STORE_U16(r31.u32 + 286, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826391D4"))) PPC_WEAK_FUNC(sub_826391D4);
PPC_FUNC_IMPL(__imp__sub_826391D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826391D8"))) PPC_WEAK_FUNC(sub_826391D8);
PPC_FUNC_IMPL(__imp__sub_826391D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9418
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// lvx128 v13,r11,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r28,64
	r28.s64 = 64;
	// stvx128 v13,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,144
	r29.s64 = 144;
	// lvx128 v12,r11,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r30,208
	r30.s64 = 208;
	// stvx128 v12,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,224
	r31.s64 = 224;
	// lvx128 v11,r11,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r9,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r9,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r8,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r9,r28
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r8,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r29
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v5,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	f0.f64 = double(temp.f32);
	// stfs f0,176(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 176, temp.u32);
	// lfs f13,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// lfs f12,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// lbz r11,188(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 188);
	// stb r11,188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 188, r11.u8);
	// lbz r10,189(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 189);
	// stb r10,189(r4)
	PPC_STORE_U8(ctx.r4.u32 + 189, ctx.r10.u8);
	// lbz r9,190(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// stb r9,190(r4)
	PPC_STORE_U8(ctx.r4.u32 + 190, ctx.r9.u8);
	// lvx128 v4,r3,r30
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r3.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v4,r4,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v3,r3,r31
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r3.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v3,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r8,9(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r8,9(r4)
	PPC_STORE_U8(ctx.r4.u32 + 9, ctx.r8.u8);
}

__attribute__((alias("__imp__sub_826392A4"))) PPC_WEAK_FUNC(sub_826392A4);
PPC_FUNC_IMPL(__imp__sub_826392A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826392A8"))) PPC_WEAK_FUNC(sub_826392A8);
PPC_FUNC_IMPL(__imp__sub_826392A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r4,64
	r11.s64 = ctx.r4.s64 + 64;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// lvx128 v13,r4,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v13,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,144
	ctx.r6.s64 = 144;
	// lvx128 v12,r4,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v8,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r11,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v5,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,160(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f13,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f12,168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lbz r11,172(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 172);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, r11.u8);
	// lbz r10,173(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 173);
	// stb r10,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r10.u8);
	// lbz r9,174(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 174);
	// stb r9,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_82639344"))) PPC_WEAK_FUNC(sub_82639344);
PPC_FUNC_IMPL(__imp__sub_82639344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639348"))) PPC_WEAK_FUNC(sub_82639348);
PPC_FUNC_IMPL(__imp__sub_82639348) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,-13024
	ctx.r7.s64 = ctx.r9.s64 + -13024;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-13004
	ctx.r4.s64 = ctx.r8.s64 + -13004;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r9,r11,-12976
	ctx.r9.s64 = r11.s64 + -12976;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// stb r8,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826393EC"))) PPC_WEAK_FUNC(sub_826393EC);
PPC_FUNC_IMPL(__imp__sub_826393EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826393F0"))) PPC_WEAK_FUNC(sub_826393F0);
PPC_FUNC_IMPL(__imp__sub_826393F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826393F4"))) PPC_WEAK_FUNC(sub_826393F4);
PPC_FUNC_IMPL(__imp__sub_826393F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826393F8"))) PPC_WEAK_FUNC(sub_826393F8);
PPC_FUNC_IMPL(__imp__sub_826393F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826393FC"))) PPC_WEAK_FUNC(sub_826393FC);
PPC_FUNC_IMPL(__imp__sub_826393FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639400"))) PPC_WEAK_FUNC(sub_82639400);
PPC_FUNC_IMPL(__imp__sub_82639400) {
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
	// li r4,27
	ctx.r4.s64 = 27;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82639440"))) PPC_WEAK_FUNC(sub_82639440);
PPC_FUNC_IMPL(__imp__sub_82639440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639444"))) PPC_WEAK_FUNC(sub_82639444);
PPC_FUNC_IMPL(__imp__sub_82639444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639448"))) PPC_WEAK_FUNC(sub_82639448);
PPC_FUNC_IMPL(__imp__sub_82639448) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82639488
	if (cr6.eq) goto loc_82639488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82639488:
	// addi r11,r28,5
	r11.s64 = r28.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82639498"))) PPC_WEAK_FUNC(sub_82639498);
PPC_FUNC_IMPL(__imp__sub_82639498) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263949C"))) PPC_WEAK_FUNC(sub_8263949C);
PPC_FUNC_IMPL(__imp__sub_8263949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826394A0"))) PPC_WEAK_FUNC(sub_826394A0);
PPC_FUNC_IMPL(__imp__sub_826394A0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// li r30,2
	r30.s64 = 2;
	// li r28,0
	r28.s64 = 0;
loc_826394BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x826394d4
	if (!cr6.eq) goto loc_826394D4;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_826394D4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x826394bc
	if (!cr0.eq) goto loc_826394BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826394E4"))) PPC_WEAK_FUNC(sub_826394E4);
PPC_FUNC_IMPL(__imp__sub_826394E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826394E8"))) PPC_WEAK_FUNC(sub_826394E8);
PPC_FUNC_IMPL(__imp__sub_826394E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r10,19(r11)
	PPC_STORE_U8(r11.u32 + 19, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82639500"))) PPC_WEAK_FUNC(sub_82639500);
PPC_FUNC_IMPL(__imp__sub_82639500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639504"))) PPC_WEAK_FUNC(sub_82639504);
PPC_FUNC_IMPL(__imp__sub_82639504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639508"))) PPC_WEAK_FUNC(sub_82639508);
PPC_FUNC_IMPL(__imp__sub_82639508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_82639524"))) PPC_WEAK_FUNC(sub_82639524);
PPC_FUNC_IMPL(__imp__sub_82639524) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264d050
	sub_8264D050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639528"))) PPC_WEAK_FUNC(sub_82639528);
PPC_FUNC_IMPL(__imp__sub_82639528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263952C"))) PPC_WEAK_FUNC(sub_8263952C);
PPC_FUNC_IMPL(__imp__sub_8263952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639530"))) PPC_WEAK_FUNC(sub_82639530);
PPC_FUNC_IMPL(__imp__sub_82639530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82639560
	if (!cr6.gt) goto loc_82639560;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82639544:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82639564
	if (cr6.eq) goto loc_82639564;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82639544
	if (cr6.lt) goto loc_82639544;
loc_82639560:
	// li r11,-1
	r11.s64 = -1;
loc_82639564:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82639574"))) PPC_WEAK_FUNC(sub_82639574);
PPC_FUNC_IMPL(__imp__sub_82639574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639578"))) PPC_WEAK_FUNC(sub_82639578);
PPC_FUNC_IMPL(__imp__sub_82639578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826395ac
	if (cr6.eq) goto loc_826395AC;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826395a0
	if (cr6.eq) goto loc_826395A0;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826395ac
	if (cr6.eq) goto loc_826395AC;
loc_826395A0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_826395AC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_826395B4"))) PPC_WEAK_FUNC(sub_826395B4);
PPC_FUNC_IMPL(__imp__sub_826395B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826395B8"))) PPC_WEAK_FUNC(sub_826395B8);
PPC_FUNC_IMPL(__imp__sub_826395B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82651578
	sub_82651578(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82651678
	sub_82651678(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r31,24(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82639630"))) PPC_WEAK_FUNC(sub_82639630);
PPC_FUNC_IMPL(__imp__sub_82639630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82639634"))) PPC_WEAK_FUNC(sub_82639634);
PPC_FUNC_IMPL(__imp__sub_82639634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639638"))) PPC_WEAK_FUNC(sub_82639638);
PPC_FUNC_IMPL(__imp__sub_82639638) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82639680
	if (cr6.eq) goto loc_82639680;
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82639680:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826396bc
	if (cr6.eq) goto loc_826396BC;
	// li r11,24
	r11.s64 = 24;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x826396c0
	goto loc_826396C0;
loc_826396BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_826396C0:
	// li r11,32
	r11.s64 = 32;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v0,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r5,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826396E8"))) PPC_WEAK_FUNC(sub_826396E8);
PPC_FUNC_IMPL(__imp__sub_826396E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826396EC"))) PPC_WEAK_FUNC(sub_826396EC);
PPC_FUNC_IMPL(__imp__sub_826396EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826396F0"))) PPC_WEAK_FUNC(sub_826396F0);
PPC_FUNC_IMPL(__imp__sub_826396F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82647890
	sub_82647890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826396F8"))) PPC_WEAK_FUNC(sub_826396F8);
PPC_FUNC_IMPL(__imp__sub_826396F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82647798
	sub_82647798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639700"))) PPC_WEAK_FUNC(sub_82639700);
PPC_FUNC_IMPL(__imp__sub_82639700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r4
	r11.s64 = ctx.r4.s8;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82639714
	if (cr6.eq) goto loc_82639714;
	// b 0x82647890
	sub_82647890(ctx, base);
	return;
loc_82639714:
	// b 0x82647798
	sub_82647798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82639718"))) PPC_WEAK_FUNC(sub_82639718);
PPC_FUNC_IMPL(__imp__sub_82639718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8263972c
	if (!cr6.eq) goto loc_8263972C;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_8263972C:
	// lwz r3,204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 204);
}

__attribute__((alias("__imp__sub_82639730"))) PPC_WEAK_FUNC(sub_82639730);
PPC_FUNC_IMPL(__imp__sub_82639730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639734"))) PPC_WEAK_FUNC(sub_82639734);
PPC_FUNC_IMPL(__imp__sub_82639734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639738"))) PPC_WEAK_FUNC(sub_82639738);
PPC_FUNC_IMPL(__imp__sub_82639738) {
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
	// lhz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8263978c
	if (!cr6.gt) goto loc_8263978C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8263976C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826397dc
	if (cr6.eq) goto loc_826397DC;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8263976c
	if (cr6.lt) goto loc_8263976C;
loc_8263978C:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// clrlwi r10,r11,18
	ctx.r10.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x826397a8
	if (!cr6.eq) goto loc_826397A8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_826397A8:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
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
loc_826397DC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8263978c
	if (cr6.lt) goto loc_8263978C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r30.u32);
}

__attribute__((alias("__imp__sub_826397EC"))) PPC_WEAK_FUNC(sub_826397EC);
PPC_FUNC_IMPL(__imp__sub_826397EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826397c4
	// ERROR 826397C4
	return;
}

__attribute__((alias("__imp__sub_826397F0"))) PPC_WEAK_FUNC(sub_826397F0);
PPC_FUNC_IMPL(__imp__sub_826397F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263983c
	if (cr6.eq) goto loc_8263983C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82639834
	if (cr6.eq) goto loc_82639834;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8263983c
	if (cr6.eq) goto loc_8263983C;
loc_82639834:
	// li r11,0
	r11.s64 = 0;
	// b 0x82639840
	goto loc_82639840;
loc_8263983C:
	// li r11,1
	r11.s64 = 1;
loc_82639840:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82639e30
	if (cr6.eq) goto loc_82639E30;
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bgt cr6,0x82639e30
	if (cr6.gt) goto loc_82639E30;
loc_8263986C:
	// lis r12,-32156
	r12.s64 = -2107375616;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26492
	r12.s64 = r12.s64 + -26492;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82639904;
	case 1:
		goto loc_8263993C;
	case 2:
		goto loc_82639A0C;
	case 3:
		goto loc_82639E30;
	case 4:
		goto loc_82639E30;
	case 5:
		goto loc_82639E30;
	case 6:
		goto loc_82639B84;
	case 7:
		goto loc_82639C40;
	case 8:
		goto loc_82639D1C;
	case 9:
		goto loc_82639D70;
	case 10:
		goto loc_82639E30;
	case 11:
		goto loc_82639E30;
	case 12:
		goto loc_826398C0;
	case 13:
		goto loc_826398C8;
	case 14:
		goto loc_82639B04;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-26364(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26364);
	// lwz r19,-26308(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26308);
	// lwz r19,-26100(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26100);
	// lwz r19,-25040(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25040);
	// lwz r19,-25040(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25040);
	// lwz r19,-25040(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25040);
	// lwz r19,-25724(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25724);
	// lwz r19,-25536(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25536);
	// lwz r19,-25316(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25316);
	// lwz r19,-25232(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25232);
	// lwz r19,-25040(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25040);
	// lwz r19,-25040(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25040);
	// lwz r19,-26432(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26432);
	// lwz r19,-26424(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -26424);
	// lwz r19,-25852(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25852);
loc_826398C0:
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x826398d4
	goto loc_826398D4;
loc_826398C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653e70
	sub_82653E70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826398D4:
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
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// ble cr6,0x8263986c
	if (!cr6.gt) goto loc_8263986C;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639904:
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653c40
	sub_82653C40(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_8263993C:
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,48
	r11.s64 = 48;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lvx128 v13,r8,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lvx128 v12,r8,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lvx128 v11,r8,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r1,304
	r29.s64 = ctx.r1.s64 + 304;
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r7,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r7,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lvx128 v8,r7,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + r11.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r26
	_mm_store_si128((__m128i*)(base + ((r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653520
	sub_82653520(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639A0C:
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,48
	r11.s64 = 48;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lvx128 v13,r8,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lvx128 v12,r8,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r8,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lvx128 v9,r7,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v8,r7,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v10,r7,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r26
	_mm_store_si128((__m128i*)(base + ((r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263cad8
	sub_8263CAD8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639B04:
	// lbz r11,162(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 162);
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,144
	ctx.r9.s64 = 144;
	// addi r8,r11,6
	ctx.r8.s64 = r11.s64 + 6;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r31,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v12,r6,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + r31.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652fc0
	sub_82652FC0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639B84:
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,48
	r11.s64 = 48;
	// addi r8,r31,96
	ctx.r8.s64 = r31.s64 + 96;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r9,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r9,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r8,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r8,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v12,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826528c8
	sub_826528C8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639C40:
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r11,48
	r11.s64 = 48;
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lvx128 v13,r28,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// lvx128 v12,r28,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r28,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r26,r1,368
	r26.s64 = ctx.r1.s64 + 368;
	// lvx128 v10,r29,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// lvx128 v8,r29,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r29,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v7,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r26
	_mm_store_si128((__m128i*)(base + ((r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r28,16
	ctx.r6.s64 = r28.s64 + 16;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263a4a0
	sub_8263A4A0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639D1C:
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v127,r0,r29
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f31.f64 = double(temp.f32);
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stvx128 v127,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_82639D70:
	// li r11,80
	r11.s64 = 80;
	// li r10,144
	ctx.r10.s64 = 144;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r8,208
	ctx.r8.s64 = 208;
	// li r7,256
	ctx.r7.s64 = 256;
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r31,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r31,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r31,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stvx128 v10,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// li r9,272
	ctx.r9.s64 = 272;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r31,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82628178
	sub_82628178(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82651da0
	sub_82651DA0(ctx, base);
loc_82639E30:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82639E40"))) PPC_WEAK_FUNC(sub_82639E40);
PPC_FUNC_IMPL(__imp__sub_82639E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82639E44"))) PPC_WEAK_FUNC(sub_82639E44);
PPC_FUNC_IMPL(__imp__sub_82639E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639E48"))) PPC_WEAK_FUNC(sub_82639E48);
PPC_FUNC_IMPL(__imp__sub_82639E48) {
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
	// addi r29,r3,20
	r29.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,2
	r28.s64 = 2;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82639E64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82639ea0
	if (!cr6.eq) goto loc_82639EA0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// xor r11,r8,r11
	r11.u64 = ctx.r8.u64 ^ r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82639ea0
	if (cr6.eq) goto loc_82639EA0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82639ea0
	if (cr6.eq) goto loc_82639EA0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82639EA0:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82639e64
	if (!cr0.eq) goto loc_82639E64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82639EB0"))) PPC_WEAK_FUNC(sub_82639EB0);
PPC_FUNC_IMPL(__imp__sub_82639EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82639EB4"))) PPC_WEAK_FUNC(sub_82639EB4);
PPC_FUNC_IMPL(__imp__sub_82639EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82639EB8"))) PPC_WEAK_FUNC(sub_82639EB8);
PPC_FUNC_IMPL(__imp__sub_82639EB8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,10568
	ctx.r9.s64 = ctx.r10.s64 + 10568;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,-32768
	ctx.r7.s64 = -32768;
	// stb r8,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r8.u8);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stb r11,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r11.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r30,30(r31)
	PPC_STORE_U8(r31.u32 + 30, r30.u8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// sth r30,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r30.u16);
	// sth r7,38(r31)
	PPC_STORE_U16(r31.u32 + 38, ctx.r7.u16);
	// bl 0x82bf7638
	sub_82BF7638(ctx, base);
	// li r6,-16
	ctx.r6.s64 = -16;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82639f50
	if (cr6.eq) goto loc_82639F50;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82639F50:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82639F64"))) PPC_WEAK_FUNC(sub_82639F64);
PPC_FUNC_IMPL(__imp__sub_82639F64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82639F68"))) PPC_WEAK_FUNC(sub_82639F68);
PPC_FUNC_IMPL(__imp__sub_82639F68) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,10568
	ctx.r9.s64 = ctx.r10.s64 + 10568;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// li r7,-32768
	ctx.r7.s64 = -32768;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stb r4,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r4.u8);
	// stb r11,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r11.u8);
	// stb r30,30(r31)
	PPC_STORE_U8(r31.u32 + 30, r30.u8);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// sth r30,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r30.u16);
	// sth r7,38(r31)
	PPC_STORE_U16(r31.u32 + 38, ctx.r7.u16);
	// bl 0x82bf7638
	sub_82BF7638(ctx, base);
	// li r6,-16
	ctx.r6.s64 = -16;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82639FEC"))) PPC_WEAK_FUNC(sub_82639FEC);
PPC_FUNC_IMPL(__imp__sub_82639FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82639FF0"))) PPC_WEAK_FUNC(sub_82639FF0);
PPC_FUNC_IMPL(__imp__sub_82639FF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8263a080
	if (!cr6.eq) goto loc_8263A080;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263a040
	if (cr6.eq) goto loc_8263A040;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263a038
	if (cr6.eq) goto loc_8263A038;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8263a040
	if (cr6.eq) goto loc_8263A040;
loc_8263A038:
	// li r11,0
	r11.s64 = 0;
	// b 0x8263a044
	goto loc_8263A044;
loc_8263A040:
	// li r11,1
	r11.s64 = 1;
loc_8263A044:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263a0f0
	if (cr6.eq) goto loc_8263A0F0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82654628
	sub_82654628(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8263a0c8
	goto loc_8263A0C8;
loc_8263A080:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x8263a0f0
	if (!cr6.eq) goto loc_8263A0F0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x826548a0
	sub_826548A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8263a0a8
	if (!cr6.eq) goto loc_8263A0A8;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263A0A8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8263A0C8:
	// li r9,56
	ctx.r9.s64 = 56;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// bl 0x82639eb8
	sub_82639EB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// b 0x8263a12c
	goto loc_8263A12C;
loc_8263A0F0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82639eb8
	sub_82639EB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8263A12C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// rlwinm r4,r11,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82bf7968
	sub_82BF7968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263A144"))) PPC_WEAK_FUNC(sub_8263A144);
PPC_FUNC_IMPL(__imp__sub_8263A144) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263A148"))) PPC_WEAK_FUNC(sub_8263A148);
PPC_FUNC_IMPL(__imp__sub_8263A148) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,10568
	ctx.r10.s64 = r11.s64 + 10568;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82654f80
	sub_82654F80(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a178
	if (cr6.eq) goto loc_8263A178;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A178:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a188
	if (cr6.eq) goto loc_8263A188;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A188:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8263a1d8
	if (cr6.eq) goto loc_8263A1D8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x8263a1d8
	if (cr6.lt) goto loc_8263A1D8;
loc_8263A1A0:
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r30,20(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r28,16(r29)
	r28.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r9,23
	cr6.compare<uint32_t>(ctx.r9.u32, 23, xer);
	// bge cr6,0x8263a1a0
	if (!cr6.lt) goto loc_8263A1A0;
loc_8263A1D8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a1e8
	if (cr6.eq) goto loc_8263A1E8;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A1E8:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82bf78f8
	sub_82BF78F8(ctx, base);
	// lhz r30,38(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263a224
	if (!cr6.eq) goto loc_8263A224;
	// lwz r29,32(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263A224:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263A234"))) PPC_WEAK_FUNC(sub_8263A234);
PPC_FUNC_IMPL(__imp__sub_8263A234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263A238"))) PPC_WEAK_FUNC(sub_8263A238);
PPC_FUNC_IMPL(__imp__sub_8263A238) {
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
	// bl 0x8263a148
	sub_8263A148(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263a284
	if (cr6.eq) goto loc_8263A284;
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
loc_8263A284:
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

__attribute__((alias("__imp__sub_8263A29C"))) PPC_WEAK_FUNC(sub_8263A29C);
PPC_FUNC_IMPL(__imp__sub_8263A29C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2A0"))) PPC_WEAK_FUNC(sub_8263A2A0);
PPC_FUNC_IMPL(__imp__sub_8263A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2A8"))) PPC_WEAK_FUNC(sub_8263A2A8);
PPC_FUNC_IMPL(__imp__sub_8263A2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2B0"))) PPC_WEAK_FUNC(sub_8263A2B0);
PPC_FUNC_IMPL(__imp__sub_8263A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// slw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// stb r10,314(r3)
	PPC_STORE_U8(ctx.r3.u32 + 314, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2C0"))) PPC_WEAK_FUNC(sub_8263A2C0);
PPC_FUNC_IMPL(__imp__sub_8263A2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,314(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 314);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2CC"))) PPC_WEAK_FUNC(sub_8263A2CC);
PPC_FUNC_IMPL(__imp__sub_8263A2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A2D0"))) PPC_WEAK_FUNC(sub_8263A2D0);
PPC_FUNC_IMPL(__imp__sub_8263A2D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263A2E0"))) PPC_WEAK_FUNC(sub_8263A2E0);
PPC_FUNC_IMPL(__imp__sub_8263A2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,12
	r11.s64 = 12;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A2F4"))) PPC_WEAK_FUNC(sub_8263A2F4);
PPC_FUNC_IMPL(__imp__sub_8263A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A2F8"))) PPC_WEAK_FUNC(sub_8263A2F8);
PPC_FUNC_IMPL(__imp__sub_8263A2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A300"))) PPC_WEAK_FUNC(sub_8263A300);
PPC_FUNC_IMPL(__imp__sub_8263A300) {
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
	// mulli r8,r9,56
	ctx.r8.s64 = ctx.r9.s64 * 56;
	// stb r8,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, ctx.r8.u8);
}

__attribute__((alias("__imp__sub_8263A314"))) PPC_WEAK_FUNC(sub_8263A314);
PPC_FUNC_IMPL(__imp__sub_8263A314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A318"))) PPC_WEAK_FUNC(sub_8263A318);
PPC_FUNC_IMPL(__imp__sub_8263A318) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
}

__attribute__((alias("__imp__sub_8263A31C"))) PPC_WEAK_FUNC(sub_8263A31C);
PPC_FUNC_IMPL(__imp__sub_8263A31C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A320"))) PPC_WEAK_FUNC(sub_8263A320);
PPC_FUNC_IMPL(__imp__sub_8263A320) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8263a348
	if (cr6.eq) goto loc_8263A348;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263A348:
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a360
	if (cr6.eq) goto loc_8263A360;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A360:
	// stwx r29,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263A368"))) PPC_WEAK_FUNC(sub_8263A368);
PPC_FUNC_IMPL(__imp__sub_8263A368) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263A36C"))) PPC_WEAK_FUNC(sub_8263A36C);
PPC_FUNC_IMPL(__imp__sub_8263A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A370"))) PPC_WEAK_FUNC(sub_8263A370);
PPC_FUNC_IMPL(__imp__sub_8263A370) {
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
	// beq cr6,0x8263a39c
	if (cr6.eq) goto loc_8263A39C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263A39C:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a3ac
	if (cr6.eq) goto loc_8263A3AC;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A3AC:
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
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

__attribute__((alias("__imp__sub_8263A3C4"))) PPC_WEAK_FUNC(sub_8263A3C4);
PPC_FUNC_IMPL(__imp__sub_8263A3C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A3C8"))) PPC_WEAK_FUNC(sub_8263A3C8);
PPC_FUNC_IMPL(__imp__sub_8263A3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
}

__attribute__((alias("__imp__sub_8263A3CC"))) PPC_WEAK_FUNC(sub_8263A3CC);
PPC_FUNC_IMPL(__imp__sub_8263A3CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A3D0"))) PPC_WEAK_FUNC(sub_8263A3D0);
PPC_FUNC_IMPL(__imp__sub_8263A3D0) {
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
	// beq cr6,0x8263a3fc
	if (cr6.eq) goto loc_8263A3FC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263A3FC:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a40c
	if (cr6.eq) goto loc_8263A40C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A40C:
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
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

__attribute__((alias("__imp__sub_8263A424"))) PPC_WEAK_FUNC(sub_8263A424);
PPC_FUNC_IMPL(__imp__sub_8263A424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A428"))) PPC_WEAK_FUNC(sub_8263A428);
PPC_FUNC_IMPL(__imp__sub_8263A428) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
}

__attribute__((alias("__imp__sub_8263A42C"))) PPC_WEAK_FUNC(sub_8263A42C);
PPC_FUNC_IMPL(__imp__sub_8263A42C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A430"))) PPC_WEAK_FUNC(sub_8263A430);
PPC_FUNC_IMPL(__imp__sub_8263A430) {
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
	// beq cr6,0x8263a45c
	if (cr6.eq) goto loc_8263A45C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263A45C:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a46c
	if (cr6.eq) goto loc_8263A46C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A46C:
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
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

__attribute__((alias("__imp__sub_8263A484"))) PPC_WEAK_FUNC(sub_8263A484);
PPC_FUNC_IMPL(__imp__sub_8263A484) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A488"))) PPC_WEAK_FUNC(sub_8263A488);
PPC_FUNC_IMPL(__imp__sub_8263A488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,162(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 162);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A494"))) PPC_WEAK_FUNC(sub_8263A494);
PPC_FUNC_IMPL(__imp__sub_8263A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A498"))) PPC_WEAK_FUNC(sub_8263A498);
PPC_FUNC_IMPL(__imp__sub_8263A498) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A4A0"))) PPC_WEAK_FUNC(sub_8263A4A0);
PPC_FUNC_IMPL(__imp__sub_8263A4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
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
	// mflr r12
	// bl 0x828e9418
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmsum3fp128 v4,v5,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r30,r11,7632
	r30.s64 = r11.s64 + 7632;
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// li r31,32
	r31.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// stvx128 v5,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r28,144
	r28.s64 = 144;
	// vrsqrtefp v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// vmulfp128 v10,v4,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v3,v4
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
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
	// vsel v13,v0,v3,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v2,v13,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v1,v5,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r6
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vor v30,v31,v31
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v31.u8));
	// vmsum3fp128 v29,v30,v30
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v30.f32), 0xEF));
	// stvx128 v31,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v29
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// vmulfp128 v10,v29,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v3,v29
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v29.f32)));
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
	// vsel v13,v0,v3,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v28,v13,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v27,v30,v28
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v28.f32)));
	// vor v25,v27,v27
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)v27.u8));
	// stvx128 v27,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r0,r10
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v23,v26,135
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x78));
	// vpermwi128 v24,v25,99
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// li r8,16
	ctx.r8.s64 = 16;
	// vpermwi128 v22,v25,135
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v21,v26,99
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x9C));
	// vmulfp128 v20,v23,v24
	_mm_store_ps(v20.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v24.f32)));
	// vmulfp128 v19,v21,v22
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(v22.f32)));
	// vsubfp v18,v19,v20
	_mm_store_ps(v18.f32, _mm_sub_ps(_mm_load_ps(v19.f32), _mm_load_ps(v20.f32)));
	// stvx128 v18,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v17,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v16,r0,r9
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v15,v16,v16
	_mm_store_ps(v15.f32, _mm_dp_ps(_mm_load_ps(v16.f32), _mm_load_ps(v16.f32), 0xEF));
	// vrsqrtefp v0,v15
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v15.f32))));
	// stvx128 v16,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v15,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
	// vcmpeqfp v8,v3,v15
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v15.f32)));
	// vnmsubfp v10,v9,v11,v13
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v3,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v14,v13,0
	_mm_store_si128((__m128i*)v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v63,v16,v14
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v16.f32), _mm_load_ps(v14.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r7
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v61,v62,v62
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v62.u8));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v60,v61,v61
	_mm_store_ps(v60.f32, _mm_dp_ps(_mm_load_ps(v61.f32), _mm_load_ps(v61.f32), 0xEF));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v60.f32))));
	// vmulfp128 v10,v60,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v8,v3,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v60.f32)));
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
	// vsel v13,v0,v3,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw128 v59,v13,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v58,v61,v59
	_mm_store_ps(v58.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v59.f32)));
	// vor128 v56,v58,v58
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)v58.u8));
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r11
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v54,v57,135
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x78));
	// vpermwi128 v55,v56,99
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x9C));
	// vpermwi128 v53,v56,135
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x78));
	// vpermwi128 v52,v57,99
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x9C));
	// vmulfp128 v51,v54,v55
	_mm_store_ps(v51.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v55.f32)));
	// vmulfp128 v50,v52,v53
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v52.f32), _mm_load_ps(v53.f32)));
	// vsubfp128 v49,v50,v51
	_mm_store_ps(v49.f32, _mm_sub_ps(_mm_load_ps(v50.f32), _mm_load_ps(v51.f32)));
	// stvx128 v49,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r5
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v48,r3,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r11
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v47,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v46,r11,r8
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v46,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r31
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((r11.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v45,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8263A668"))) PPC_WEAK_FUNC(sub_8263A668);
PPC_FUNC_IMPL(__imp__sub_8263A668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263A66C"))) PPC_WEAK_FUNC(sub_8263A66C);
PPC_FUNC_IMPL(__imp__sub_8263A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A670"))) PPC_WEAK_FUNC(sub_8263A670);
PPC_FUNC_IMPL(__imp__sub_8263A670) {
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
	// beq cr6,0x8263a6ec
	if (cr6.eq) goto loc_8263A6EC;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
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
	// bne cr6,0x8263a6f0
	if (!cr6.eq) goto loc_8263A6F0;
loc_8263A6EC:
	// li r11,0
	r11.s64 = 0;
loc_8263A6F0:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263a718
	if (cr6.eq) goto loc_8263A718;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f13,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19328);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8263a71c
	if (cr6.eq) goto loc_8263A71C;
loc_8263A718:
	// li r11,0
	r11.s64 = 0;
loc_8263A71C:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263a744
	if (cr6.eq) goto loc_8263A744;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8263a748
	if (!cr6.lt) goto loc_8263A748;
loc_8263A744:
	// li r11,0
	r11.s64 = 0;
loc_8263A748:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263a770
	if (cr6.eq) goto loc_8263A770;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8263a774
	if (cr6.lt) goto loc_8263A774;
loc_8263A770:
	// li r11,0
	r11.s64 = 0;
loc_8263A774:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263a798
	if (cr6.eq) goto loc_8263A798;
	// lfs f0,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 300);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,304(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8263a79c
	if (!cr6.gt) goto loc_8263A79C;
loc_8263A798:
	// li r11,0
	r11.s64 = 0;
loc_8263A79C:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263a7c0
	if (cr6.eq) goto loc_8263A7C0;
	// lfs f0,260(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,264(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8263a7c4
	if (!cr6.gt) goto loc_8263A7C4;
loc_8263A7C0:
	// li r11,0
	r11.s64 = 0;
loc_8263A7C4:
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

__attribute__((alias("__imp__sub_8263A7E4"))) PPC_WEAK_FUNC(sub_8263A7E4);
PPC_FUNC_IMPL(__imp__sub_8263A7E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A7E8"))) PPC_WEAK_FUNC(sub_8263A7E8);
PPC_FUNC_IMPL(__imp__sub_8263A7E8) {
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

__attribute__((alias("__imp__sub_8263A810"))) PPC_WEAK_FUNC(sub_8263A810);
PPC_FUNC_IMPL(__imp__sub_8263A810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
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

__attribute__((alias("__imp__sub_8263A838"))) PPC_WEAK_FUNC(sub_8263A838);
PPC_FUNC_IMPL(__imp__sub_8263A838) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,10604
	ctx.r10.s64 = r11.s64 + 10604;
	// addi r31,r3,224
	r31.s64 = ctx.r3.s64 + 224;
	// li r30,3
	r30.s64 = 3;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8263A85C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263a86c
	if (cr6.eq) goto loc_8263A86C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263A86C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8263a85c
	if (!cr0.eq) goto loc_8263A85C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263A888"))) PPC_WEAK_FUNC(sub_8263A888);
PPC_FUNC_IMPL(__imp__sub_8263A888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263A88C"))) PPC_WEAK_FUNC(sub_8263A88C);
PPC_FUNC_IMPL(__imp__sub_8263A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A890"))) PPC_WEAK_FUNC(sub_8263A890);
PPC_FUNC_IMPL(__imp__sub_8263A890) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x8262acd8
	sub_8262ACD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263A8A0"))) PPC_WEAK_FUNC(sub_8263A8A0);
PPC_FUNC_IMPL(__imp__sub_8263A8A0) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r3,32
	ctx.r5.s64 = ctx.r3.s64 + 32;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// b 0x8262acd8
	sub_8262ACD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263A8AC"))) PPC_WEAK_FUNC(sub_8263A8AC);
PPC_FUNC_IMPL(__imp__sub_8263A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A8B0"))) PPC_WEAK_FUNC(sub_8263A8B0);
PPC_FUNC_IMPL(__imp__sub_8263A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r11,176
	ctx.r5.s64 = r11.s64 + 176;
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// b 0x8262add8
	sub_8262ADD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263A8C4"))) PPC_WEAK_FUNC(sub_8263A8C4);
PPC_FUNC_IMPL(__imp__sub_8263A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263A8C8"))) PPC_WEAK_FUNC(sub_8263A8C8);
PPC_FUNC_IMPL(__imp__sub_8263A8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,242(r3)
	PPC_STORE_U8(ctx.r3.u32 + 242, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f0,44(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
}

__attribute__((alias("__imp__sub_8263A934"))) PPC_WEAK_FUNC(sub_8263A934);
PPC_FUNC_IMPL(__imp__sub_8263A934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263A938"))) PPC_WEAK_FUNC(sub_8263A938);
PPC_FUNC_IMPL(__imp__sub_8263A938) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r29,1
	r29.s64 = 1;
	// addi r10,r11,10604
	ctx.r10.s64 = r11.s64 + 10604;
	// li r30,0
	r30.s64 = 0;
	// sth r29,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r29.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8263ad98
	sub_8263AD98(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r28,3
	r28.s64 = 3;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r31,176
	r11.s64 = r31.s64 + 176;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lis r27,-32250
	r27.s64 = -2113536000;
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// li r26,96
	r26.s64 = 96;
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// li r25,100
	r25.s64 = 100;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lfs f13,21036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stvx128 v13,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r24,56
	r24.s64 = 56;
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v8,v9,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_setzero_si128());
	// stvx128 v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,243(r31)
	PPC_STORE_U8(r31.u32 + 243, r30.u8);
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stb r28,244(r31)
	PPC_STORE_U8(r31.u32 + 244, r28.u8);
	// stb r30,162(r31)
	PPC_STORE_U8(r31.u32 + 162, r30.u8);
	// lfs f13,10680(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 10680);
	ctx.f13.f64 = double(temp.f32);
	// sth r26,164(r31)
	PPC_STORE_U16(r31.u32 + 164, r26.u16);
	// lfs f12,-19328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -19328);
	ctx.f12.f64 = double(temp.f32);
	// sth r25,166(r31)
	PPC_STORE_U16(r31.u32 + 166, r25.u16);
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// lfs f13,10676(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10676);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,255(r31)
	PPC_STORE_U8(r31.u32 + 255, r30.u8);
	// lfs f0,-23368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23368);
	f0.f64 = double(temp.f32);
	// stb r29,256(r31)
	PPC_STORE_U8(r31.u32 + 256, r29.u8);
	// lfs f11,10672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10672);
	ctx.f11.f64 = double(temp.f32);
	// stb r30,275(r31)
	PPC_STORE_U8(r31.u32 + 275, r30.u8);
	// lfs f10,10668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10668);
	ctx.f10.f64 = double(temp.f32);
	// stb r30,276(r31)
	PPC_STORE_U8(r31.u32 + 276, r30.u8);
	// stfs f13,264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// stb r30,277(r31)
	PPC_STORE_U8(r31.u32 + 277, r30.u8);
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// stb r24,278(r31)
	PPC_STORE_U8(r31.u32 + 278, r24.u8);
	// stfs f12,280(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// stb r30,295(r31)
	PPC_STORE_U8(r31.u32 + 295, r30.u8);
	// stfs f0,288(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// stb r29,296(r31)
	PPC_STORE_U8(r31.u32 + 296, r29.u8);
	// stfs f11,300(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// stb r29,297(r31)
	PPC_STORE_U8(r31.u32 + 297, r29.u8);
	// stfs f10,304(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,308(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 308, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8263AAD0"))) PPC_WEAK_FUNC(sub_8263AAD0);
PPC_FUNC_IMPL(__imp__sub_8263AAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8263AAD4"))) PPC_WEAK_FUNC(sub_8263AAD4);
PPC_FUNC_IMPL(__imp__sub_8263AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263AAD8"))) PPC_WEAK_FUNC(sub_8263AAD8);
PPC_FUNC_IMPL(__imp__sub_8263AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v28,r0,r7
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v27,r0,r8
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
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
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v31,r0,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r28,16
	r28.s64 = 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r29,32
	r29.s64 = 32;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lvx128 v30,r4,r28
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r4.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v29,r4,r29
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r4.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// vrsqrtefp v13,v26
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v26.f32))));
	// vrsqrtefp v12,v25
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v25.f32))));
	// vmulfp128 v4,v26,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v25,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v2,v24,v26
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(v24.f32), _mm_load_ps(v26.f32)));
	// vcmpeqfp v3,v24,v25
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v5,v12,v12
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v1,v4,v7,v0
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v9,v8,v5,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v1,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v6,v4,v7,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v8,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
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
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v20,v13,99
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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
	// stvx128 v15,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r9,7520
	ctx.r8.s64 = ctx.r9.s64 + 7520;
loc_8263ABD0:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v12,v30,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
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
	// bdnz 0x8263abd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263ABD0;
	// li r9,3
	ctx.r9.s64 = 3;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r30,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r30,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8263AC1C:
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
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
	// bdnz 0x8263ac1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263AC1C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8263AC8C"))) PPC_WEAK_FUNC(sub_8263AC8C);
PPC_FUNC_IMPL(__imp__sub_8263AC8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263AC90"))) PPC_WEAK_FUNC(sub_8263AC90);
PPC_FUNC_IMPL(__imp__sub_8263AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// bl 0x828e941c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fadds f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r3,96
	r31.s64 = ctx.r3.s64 + 96;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f31.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x8262b5e0
	sub_8262B5E0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// vpermwi128 v7,v9,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v6,v9,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// fsubs f12,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f29.f64 - f30.f64));
	// addi r7,r9,7648
	ctx.r7.s64 = ctx.r9.s64 + 7648;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v8,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmaddfp v12,v13,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v5,v11,v7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v4,v10,v6
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)));
	// fmuls f11,f12,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// vmulfp128 v12,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw v11,v8,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v10,v4,v5
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v3,v0,v0
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// stvx128 v3,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v2,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vpermwi128 v31,v1,135
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x78));
	// vpermwi128 v29,v2,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vpermwi128 v28,v1,99
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x9C));
	// vmulfp128 v27,v31,v30
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v26,v28,v29
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vsubfp v25,v26,v27
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// stvx128 v25,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f11,284(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_8263AD7C"))) PPC_WEAK_FUNC(sub_8263AD7C);
PPC_FUNC_IMPL(__imp__sub_8263AD7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263AD80"))) PPC_WEAK_FUNC(sub_8263AD80);
PPC_FUNC_IMPL(__imp__sub_8263AD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AD8C"))) PPC_WEAK_FUNC(sub_8263AD8C);
PPC_FUNC_IMPL(__imp__sub_8263AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263AD90"))) PPC_WEAK_FUNC(sub_8263AD90);
PPC_FUNC_IMPL(__imp__sub_8263AD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AD98"))) PPC_WEAK_FUNC(sub_8263AD98);
PPC_FUNC_IMPL(__imp__sub_8263AD98) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,19
	ctx.r9.s64 = 19;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r9.u16);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, r11.u8);
	// li r7,17
	ctx.r7.s64 = 17;
	// sth r10,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r10.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r10,150(r3)
	PPC_STORE_U16(ctx.r3.u32 + 150, ctx.r10.u16);
	// li r6,15
	ctx.r6.s64 = 15;
	// stb r11,226(r3)
	PPC_STORE_U8(ctx.r3.u32 + 226, r11.u8);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r11,228(r3)
	PPC_STORE_U8(ctx.r3.u32 + 228, r11.u8);
	// sth r7,224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 224, ctx.r7.u16);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,238(r3)
	PPC_STORE_U8(ctx.r3.u32 + 238, r11.u8);
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// sth r6,236(r3)
	PPC_STORE_U16(ctx.r3.u32 + 236, ctx.r6.u16);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r11,258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 258, r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r9,256(r3)
	PPC_STORE_U16(ctx.r3.u32 + 256, ctx.r9.u16);
	// stb r10,262(r3)
	PPC_STORE_U8(ctx.r3.u32 + 262, ctx.r10.u8);
	// stb r11,278(r3)
	PPC_STORE_U8(ctx.r3.u32 + 278, r11.u8);
	// addi r11,r3,296
	r11.s64 = ctx.r3.s64 + 296;
	// sth r9,276(r3)
	PPC_STORE_U16(ctx.r3.u32 + 276, ctx.r9.u16);
	// stb r10,282(r3)
	PPC_STORE_U8(ctx.r3.u32 + 282, ctx.r10.u8);
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// sth r5,296(r31)
	PPC_STORE_U16(r31.u32 + 296, ctx.r5.u16);
	// stb r10,298(r31)
	PPC_STORE_U8(r31.u32 + 298, ctx.r10.u8);
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-12728(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,300(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 300, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263AE50"))) PPC_WEAK_FUNC(sub_8263AE50);
PPC_FUNC_IMPL(__imp__sub_8263AE50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AE54"))) PPC_WEAK_FUNC(sub_8263AE54);
PPC_FUNC_IMPL(__imp__sub_8263AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263AE58"))) PPC_WEAK_FUNC(sub_8263AE58);
PPC_FUNC_IMPL(__imp__sub_8263AE58) {
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
	// bl 0x8263a838
	sub_8263A838(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263aea4
	if (cr6.eq) goto loc_8263AEA4;
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
loc_8263AEA4:
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

__attribute__((alias("__imp__sub_8263AEBC"))) PPC_WEAK_FUNC(sub_8263AEBC);
PPC_FUNC_IMPL(__imp__sub_8263AEBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AEC0"))) PPC_WEAK_FUNC(sub_8263AEC0);
PPC_FUNC_IMPL(__imp__sub_8263AEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,9(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// clrlwi r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263aee0
	if (!cr6.lt) goto loc_8263AEE0;
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8263aee4
	goto loc_8263AEE4;
loc_8263AEE0:
	// rlwinm r10,r4,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
loc_8263AEE4:
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bge cr6,0x8263aef8
	if (!cr6.lt) goto loc_8263AEF8;
	// not r11,r5
	r11.u64 = ~ctx.r5.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8263aefc
	goto loc_8263AEFC;
loc_8263AEF8:
	// rlwinm r11,r5,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
loc_8263AEFC:
	// lhz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r7,r9,18
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | r11.u64;
	// sth r5,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r5.u16);
	// sth r4,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
}

__attribute__((alias("__imp__sub_8263AF1C"))) PPC_WEAK_FUNC(sub_8263AF1C);
PPC_FUNC_IMPL(__imp__sub_8263AF1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AF20"))) PPC_WEAK_FUNC(sub_8263AF20);
PPC_FUNC_IMPL(__imp__sub_8263AF20) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263af58
	if (cr6.eq) goto loc_8263AF58;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263af58
	if (cr6.eq) goto loc_8263AF58;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8263AF58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263AF64"))) PPC_WEAK_FUNC(sub_8263AF64);
PPC_FUNC_IMPL(__imp__sub_8263AF64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AF68"))) PPC_WEAK_FUNC(sub_8263AF68);
PPC_FUNC_IMPL(__imp__sub_8263AF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263af7c
	if (!cr6.eq) goto loc_8263AF7C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8263AF7C:
	// lbz r11,38(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AF8C"))) PPC_WEAK_FUNC(sub_8263AF8C);
PPC_FUNC_IMPL(__imp__sub_8263AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263AF90"))) PPC_WEAK_FUNC(sub_8263AF90);
PPC_FUNC_IMPL(__imp__sub_8263AF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263afa4
	if (!cr6.eq) goto loc_8263AFA4;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8263AFA4:
	// lbz r11,38(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// rlwinm r10,r11,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8263AFB0"))) PPC_WEAK_FUNC(sub_8263AFB0);
PPC_FUNC_IMPL(__imp__sub_8263AFB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AFB4"))) PPC_WEAK_FUNC(sub_8263AFB4);
PPC_FUNC_IMPL(__imp__sub_8263AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263AFB8"))) PPC_WEAK_FUNC(sub_8263AFB8);
PPC_FUNC_IMPL(__imp__sub_8263AFB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AFC0"))) PPC_WEAK_FUNC(sub_8263AFC0);
PPC_FUNC_IMPL(__imp__sub_8263AFC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263AFC8"))) PPC_WEAK_FUNC(sub_8263AFC8);
PPC_FUNC_IMPL(__imp__sub_8263AFC8) {
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
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263aff4
	if (cr6.eq) goto loc_8263AFF4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82c54b30
	sub_82C54B30(ctx, base);
loc_8263AFF4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8263b0dc
	if (cr6.eq) goto loc_8263B0DC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8263b0dc
	if (cr6.eq) goto loc_8263B0DC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// addi r9,r11,68
	ctx.r9.s64 = r11.s64 + 68;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r7,r11,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8263b040
	if (cr6.eq) goto loc_8263B040;
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
	// b 0x8263b064
	goto loc_8263B064;
loc_8263B040:
	// rlwinm r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263b0dc
	if (cr6.eq) goto loc_8263B0DC;
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
	// li r28,1
	r28.s64 = 1;
loc_8263B064:
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8263b07c
	if (cr6.eq) goto loc_8263B07C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8263b080
	if (!cr6.eq) goto loc_8263B080;
loc_8263B07C:
	// li r11,1
	r11.s64 = 1;
loc_8263B080:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263b098
	if (cr6.eq) goto loc_8263B098;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263b0dc
	if (!cr6.eq) goto loc_8263B0DC;
loc_8263B098:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82c54bb0
	sub_82C54BB0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r9.u32);
	// stw r8,64(r29)
	PPC_STORE_U32(r29.u32 + 64, ctx.r8.u32);
	// lbz r7,232(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bne cr6,0x8263b0dc
	if (!cr6.eq) goto loc_8263B0DC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263af20
	sub_8263AF20(ctx, base);
loc_8263B0DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263B0E0"))) PPC_WEAK_FUNC(sub_8263B0E0);
PPC_FUNC_IMPL(__imp__sub_8263B0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263B0E4"))) PPC_WEAK_FUNC(sub_8263B0E4);
PPC_FUNC_IMPL(__imp__sub_8263B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263B0E8"))) PPC_WEAK_FUNC(sub_8263B0E8);
PPC_FUNC_IMPL(__imp__sub_8263B0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// li r11,0
	r11.s64 = 0;
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b11c
	if (!cr6.gt) goto loc_8263B11C;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8263B100:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263b120
	if (cr6.eq) goto loc_8263B120;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263b100
	if (cr6.lt) goto loc_8263B100;
loc_8263B11C:
	// li r11,-1
	r11.s64 = -1;
loc_8263B120:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B134"))) PPC_WEAK_FUNC(sub_8263B134);
PPC_FUNC_IMPL(__imp__sub_8263B134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263B138"))) PPC_WEAK_FUNC(sub_8263B138);
PPC_FUNC_IMPL(__imp__sub_8263B138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b168
	if (!cr6.gt) goto loc_8263B168;
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
loc_8263B14C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263b16c
	if (cr6.eq) goto loc_8263B16C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263b14c
	if (cr6.lt) goto loc_8263B14C;
loc_8263B168:
	// li r11,-1
	r11.s64 = -1;
loc_8263B16C:
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263B17C"))) PPC_WEAK_FUNC(sub_8263B17C);
PPC_FUNC_IMPL(__imp__sub_8263B17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B180"))) PPC_WEAK_FUNC(sub_8263B180);
PPC_FUNC_IMPL(__imp__sub_8263B180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b1b4
	if (!cr6.gt) goto loc_8263B1B4;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8263B198:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8263b1bc
	if (cr6.eq) goto loc_8263B1BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263b198
	if (cr6.lt) goto loc_8263B198;
loc_8263B1B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8263B1BC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B1C8"))) PPC_WEAK_FUNC(sub_8263B1C8);
PPC_FUNC_IMPL(__imp__sub_8263B1C8) {
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
	// lwz r4,204(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8263b1f4
	if (!cr6.eq) goto loc_8263B1F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x8263b1fc
	goto loc_8263B1FC;
loc_8263B1F4:
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// rlwinm r11,r11,28,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
loc_8263B1FC:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263b244
	if (!cr6.eq) goto loc_8263B244;
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8263b244
	if (cr6.eq) goto loc_8263B244;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263b244
	if (cr6.eq) goto loc_8263B244;
	// sth r10,234(r31)
	PPC_STORE_U16(r31.u32 + 234, ctx.r10.u16);
	// sth r10,236(r31)
	PPC_STORE_U16(r31.u32 + 236, ctx.r10.u16);
	// bl 0x8264ee98
	sub_8264EE98(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// lbz r6,775(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 775);
	// lbz r5,774(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 774);
	// lbz r4,773(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 773);
	// bl 0x8263aec0
	sub_8263AEC0(ctx, base);
loc_8263B244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263B254"))) PPC_WEAK_FUNC(sub_8263B254);
PPC_FUNC_IMPL(__imp__sub_8263B254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B258"))) PPC_WEAK_FUNC(sub_8263B258);
PPC_FUNC_IMPL(__imp__sub_8263B258) {
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
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263b284
	if (!cr6.eq) goto loc_8263B284;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8263b28c
	goto loc_8263B28C;
loc_8263B284:
	// lbz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
loc_8263B28C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263b348
	if (cr6.eq) goto loc_8263B348;
	// lbz r11,37(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8263b2b4
	if (!cr6.eq) goto loc_8263B2B4;
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263b300
	if (cr6.eq) goto loc_8263B300;
loc_8263B2B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,180(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// stw r10,180(r11)
	PPC_STORE_U32(r11.u32 + 180, ctx.r10.u32);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r7,r7,0,28,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r7,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r7.u8);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lbz r6,37(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r6,r9,6,0,25
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r6.u64 & 0xFFFFFFFF0000003F);
	// stb r6,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r6.u8);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82650de0
	sub_82650DE0(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 180, r30.u32);
loc_8263B300:
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8263b340
	if (!cr6.gt) goto loc_8263B340;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-12728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12728);
	f0.f64 = double(temp.f32);
loc_8263B324:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfs f0,476(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 476, temp.u32);
	// stfs f0,492(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 492, temp.u32);
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263b324
	if (cr6.lt) goto loc_8263B324;
loc_8263B340:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8264ed60
	sub_8264ED60(ctx, base);
loc_8263B348:
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

__attribute__((alias("__imp__sub_8263B35C"))) PPC_WEAK_FUNC(sub_8263B35C);
PPC_FUNC_IMPL(__imp__sub_8263B35C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B360"))) PPC_WEAK_FUNC(sub_8263B360);
PPC_FUNC_IMPL(__imp__sub_8263B360) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263b3ac
	if (cr6.eq) goto loc_8263B3AC;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263b3ac
	if (cr6.eq) goto loc_8263B3AC;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8263B3AC:
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263B3BC"))) PPC_WEAK_FUNC(sub_8263B3BC);
PPC_FUNC_IMPL(__imp__sub_8263B3BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B3C0"))) PPC_WEAK_FUNC(sub_8263B3C0);
PPC_FUNC_IMPL(__imp__sub_8263B3C0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263b40c
	if (cr6.eq) goto loc_8263B40C;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8263b40c
	if (cr6.eq) goto loc_8263B40C;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8263B40C:
	// bl 0x8263b258
	sub_8263B258(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

