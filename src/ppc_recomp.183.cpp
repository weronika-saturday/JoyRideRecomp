#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8262A8B4"))) PPC_WEAK_FUNC(sub_8262A8B4);
PPC_FUNC_IMPL(__imp__sub_8262A8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A8B8"))) PPC_WEAK_FUNC(sub_8262A8B8);
PPC_FUNC_IMPL(__imp__sub_8262A8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r8,32
	ctx.r8.s64 = 32;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A8F8"))) PPC_WEAK_FUNC(sub_8262A8F8);
PPC_FUNC_IMPL(__imp__sub_8262A8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A8FC"))) PPC_WEAK_FUNC(sub_8262A8FC);
PPC_FUNC_IMPL(__imp__sub_8262A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A900"))) PPC_WEAK_FUNC(sub_8262A900);
PPC_FUNC_IMPL(__imp__sub_8262A900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r8,32
	ctx.r8.s64 = 32;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A940"))) PPC_WEAK_FUNC(sub_8262A940);
PPC_FUNC_IMPL(__imp__sub_8262A940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A944"))) PPC_WEAK_FUNC(sub_8262A944);
PPC_FUNC_IMPL(__imp__sub_8262A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A948"))) PPC_WEAK_FUNC(sub_8262A948);
PPC_FUNC_IMPL(__imp__sub_8262A948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// vpermwi128 v11,v0,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f6,-8(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v9,v0,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v8,v12,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v7,v11,v9
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// vmsum3fp128 v5,v13,v6
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// stvx128 v5,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262A9E0"))) PPC_WEAK_FUNC(sub_8262A9E0);
PPC_FUNC_IMPL(__imp__sub_8262A9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262A9E4"))) PPC_WEAK_FUNC(sub_8262A9E4);
PPC_FUNC_IMPL(__imp__sub_8262A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262A9E8"))) PPC_WEAK_FUNC(sub_8262A9E8);
PPC_FUNC_IMPL(__imp__sub_8262A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8262aa88
	if (cr6.eq) goto loc_8262AA88;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lfs f0,2992(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfsx f11,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfsx f9,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f13,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f8,f10
	f0.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// fmadds f7,f0,f0,f13
	ctx.f7.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// fsqrts f12,f7
	ctx.f12.f64 = double(float(sqrt(ctx.f7.f64)));
	// blt cr6,0x8262aa64
	if (cr6.lt) goto loc_8262AA64;
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// b 0x8262aa68
	goto loc_8262AA68;
loc_8262AA64:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
loc_8262AA68:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f9,4(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
loc_8262AA88:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// stfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
}

__attribute__((alias("__imp__sub_8262AA98"))) PPC_WEAK_FUNC(sub_8262AA98);
PPC_FUNC_IMPL(__imp__sub_8262AA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AA9C"))) PPC_WEAK_FUNC(sub_8262AA9C);
PPC_FUNC_IMPL(__imp__sub_8262AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262AAA0"))) PPC_WEAK_FUNC(sub_8262AAA0);
PPC_FUNC_IMPL(__imp__sub_8262AAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8262AAB4:
	// lfs f13,-28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	f0.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f0,f0,f10
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// bdnz 0x8262aab4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262AAB4;
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(f0.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AAD8"))) PPC_WEAK_FUNC(sub_8262AAD8);
PPC_FUNC_IMPL(__imp__sub_8262AAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8262AAF0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8262ab00
	if (cr6.eq) goto loc_8262AB00;
	// lfs f13,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
loc_8262AB00:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8262ab10
	if (cr6.eq) goto loc_8262AB10;
	// lfs f13,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
loc_8262AB10:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8262ab20
	if (cr6.eq) goto loc_8262AB20;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
loc_8262AB20:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8262aaf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262AAF0;
	// fsqrts f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(f0.f64)));
}

__attribute__((alias("__imp__sub_8262AB30"))) PPC_WEAK_FUNC(sub_8262AB30);
PPC_FUNC_IMPL(__imp__sub_8262AB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AB34"))) PPC_WEAK_FUNC(sub_8262AB34);
PPC_FUNC_IMPL(__imp__sub_8262AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262AB38"))) PPC_WEAK_FUNC(sub_8262AB38);
PPC_FUNC_IMPL(__imp__sub_8262AB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8262AB5C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8262ab80
	if (!cr6.lt) goto loc_8262AB80;
	// lfs f13,-32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8262ab80
	if (cr6.lt) goto loc_8262AB80;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
loc_8262AB80:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x8262aba4
	if (!cr6.lt) goto loc_8262ABA4;
	// lfs f13,-16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8262aba4
	if (cr6.lt) goto loc_8262ABA4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_8262ABA4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8262abc8
	if (!cr6.lt) goto loc_8262ABC8;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8262abc8
	if (cr6.lt) goto loc_8262ABC8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_8262ABC8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8262ab5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262AB5C;
}

__attribute__((alias("__imp__sub_8262ABD4"))) PPC_WEAK_FUNC(sub_8262ABD4);
PPC_FUNC_IMPL(__imp__sub_8262ABD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ABD8"))) PPC_WEAK_FUNC(sub_8262ABD8);
PPC_FUNC_IMPL(__imp__sub_8262ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r10,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r7,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r5,r3
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AC7C"))) PPC_WEAK_FUNC(sub_8262AC7C);
PPC_FUNC_IMPL(__imp__sub_8262AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262AC80"))) PPC_WEAK_FUNC(sub_8262AC80);
PPC_FUNC_IMPL(__imp__sub_8262AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8262ACA4:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
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
	// stvx128 v0,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8262aca4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262ACA4;
}

__attribute__((alias("__imp__sub_8262ACCC"))) PPC_WEAK_FUNC(sub_8262ACCC);
PPC_FUNC_IMPL(__imp__sub_8262ACCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ACD0"))) PPC_WEAK_FUNC(sub_8262ACD0);
PPC_FUNC_IMPL(__imp__sub_8262ACD0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262ACD0"))) PPC_WEAK_FUNC(sub_8262ACD0);
PPC_FUNC_IMPL(__imp__sub_8262ACD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8262a7f0
	sub_8262A7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262ACD4"))) PPC_WEAK_FUNC(sub_8262ACD4);
PPC_FUNC_IMPL(__imp__sub_8262ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262ACD8"))) PPC_WEAK_FUNC(sub_8262ACD8);
PPC_FUNC_IMPL(__imp__sub_8262ACD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8262ACFC:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
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
	// stvx128 v0,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8262acfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262ACFC;
}

__attribute__((alias("__imp__sub_8262AD24"))) PPC_WEAK_FUNC(sub_8262AD24);
PPC_FUNC_IMPL(__imp__sub_8262AD24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AD28"))) PPC_WEAK_FUNC(sub_8262AD28);
PPC_FUNC_IMPL(__imp__sub_8262AD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f12,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// li r7,32
	ctx.r7.s64 = 32;
	// lfs f11,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f8,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f5,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f10,-44(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f9,-32(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-20(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// stfs f8,-40(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f6,-24(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f5,-12(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
loc_8262ADA8:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// vspltw v8,v0,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v11,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v10,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v9,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x8262ada8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262ADA8;
}

__attribute__((alias("__imp__sub_8262ADD4"))) PPC_WEAK_FUNC(sub_8262ADD4);
PPC_FUNC_IMPL(__imp__sub_8262ADD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262ADD8"))) PPC_WEAK_FUNC(sub_8262ADD8);
PPC_FUNC_IMPL(__imp__sub_8262ADD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v12,r4,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,7520
	ctx.r10.s64 = ctx.r10.s64 + 7520;
loc_8262AE04:
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
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
	// stvx128 v4,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8262ae04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262AE04;
}

__attribute__((alias("__imp__sub_8262AE30"))) PPC_WEAK_FUNC(sub_8262AE30);
PPC_FUNC_IMPL(__imp__sub_8262AE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AE34"))) PPC_WEAK_FUNC(sub_8262AE34);
PPC_FUNC_IMPL(__imp__sub_8262AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262AE38"))) PPC_WEAK_FUNC(sub_8262AE38);
PPC_FUNC_IMPL(__imp__sub_8262AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262AE90"))) PPC_WEAK_FUNC(sub_8262AE90);
PPC_FUNC_IMPL(__imp__sub_8262AE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262AE94"))) PPC_WEAK_FUNC(sub_8262AE94);
PPC_FUNC_IMPL(__imp__sub_8262AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262AE98"))) PPC_WEAK_FUNC(sub_8262AE98);
PPC_FUNC_IMPL(__imp__sub_8262AE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x8262a640
	sub_8262A640(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262aed0
	if (!cr6.eq) goto loc_8262AED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x828e9438
	return;
loc_8262AED0:
	// li r10,16
	ctx.r10.s64 = 16;
	// vxor v0,v2,v2
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lvx128 v10,r31,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lfs f4,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,3
	ctx.r10.s64 = 3;
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f0,f4
	f0.f64 = ctx.f4.f64;
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f6,20(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stvx128 v9,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8262AF40:
	// lfs f13,-28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// lfs f11,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	f0.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f0,f0,f10
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f10.f64));
	// bdnz 0x8262af40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262AF40;
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r27,r31
	r27.u64 = r31.u64;
	// fmuls f5,f0,f1
	ctx.f5.f64 = double(float(f0.f64 * ctx.f1.f64));
	// bl 0x8262aad8
	sub_8262AAD8(ctx, base);
	// fcmpu cr6,f1,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// blt cr6,0x8262b1f0
	if (cr6.lt) goto loc_8262B1F0;
	// b 0x8262af98
	goto loc_8262AF98;
loc_8262AF80:
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_8262AF98:
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// bge cr6,0x8262b1f0
	if (!cr6.lt) goto loc_8262B1F0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8262ab38
	sub_8262AB38(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8262a9e8
	sub_8262A9E8(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// vxor v1,v1,v1
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_setzero_si128());
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r24,r1,224
	r24.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r23,r1,208
	r23.s64 = ctx.r1.s64 + 208;
	// addi r22,r1,208
	r22.s64 = ctx.r1.s64 + 208;
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r21,r1,208
	r21.s64 = ctx.r1.s64 + 208;
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r20,r1,208
	r20.s64 = ctx.r1.s64 + 208;
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r19,r1,128
	r19.s64 = ctx.r1.s64 + 128;
	// addi r18,r1,144
	r18.s64 = ctx.r1.s64 + 144;
	// addi r17,r1,112
	r17.s64 = ctx.r1.s64 + 112;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r11,r8
	r16.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r16,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r6,r23
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + r23.u32, temp.u32);
	// stfsx f0,r8,r22
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r22.u32, temp.u32);
	// stfsx f12,r7,r21
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + r21.u32, temp.u32);
	// stfsx f13,r11,r20
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + r20.u32, temp.u32);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r19
	_mm_store_si128((__m128i*)(base + ((r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r18
	_mm_store_si128((__m128i*)(base + ((r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r17
	_mm_store_si128((__m128i*)(base + ((r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8262B0C8:
	// lvx128 v0,r9,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// vspltw v8,v0,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v9,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v10,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bdnz 0x8262b0c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262B0C8;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_8262B148:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v13,v9,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8262b148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262B148;
	// li r10,3
	ctx.r10.s64 = 3;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// mr r11,r31
	r11.u64 = r31.u64;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8262B18C:
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8262b18c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262B18C;
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262aad8
	sub_8262AAD8(ctx, base);
	// fcmpu cr6,f1,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// bge cr6,0x8262af80
	if (!cr6.lt) goto loc_8262AF80;
loc_8262B1F0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f5
	cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x8262b228
	if (cr6.gt) goto loc_8262B228;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262B228:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
}

__attribute__((alias("__imp__sub_8262B22C"))) PPC_WEAK_FUNC(sub_8262B22C);
PPC_FUNC_IMPL(__imp__sub_8262B22C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8262B230"))) PPC_WEAK_FUNC(sub_8262B230);
PPC_FUNC_IMPL(__imp__sub_8262B230) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262ad28
	sub_8262AD28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262B278"))) PPC_WEAK_FUNC(sub_8262B278);
PPC_FUNC_IMPL(__imp__sub_8262B278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B27C"))) PPC_WEAK_FUNC(sub_8262B27C);
PPC_FUNC_IMPL(__imp__sub_8262B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B280"))) PPC_WEAK_FUNC(sub_8262B280);
PPC_FUNC_IMPL(__imp__sub_8262B280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfic r9,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r9.s64 = 23 - r11.s64;
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// srawi r4,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 31;
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// not r7,r4
	ctx.r7.u64 = ~ctx.r4.u64;
	// andc r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// clrlwi r4,r7,27
	ctx.r4.u64 = ctx.r7.u32 & 0x1F;
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// rlwinm r4,r4,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// sraw r9,r8,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// orc r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ~ctx.r7.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// andc r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// srawi r8,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 31;
	// sraw r4,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r4.s64 = ctx.r6.s32 >> temp.u32;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// and r11,r8,r9
	r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// andc r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r3.u64;
	// rlwinm r6,r11,0,0,8
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF800000;
	// and r11,r7,r9
	r11.u64 = ctx.r7.u64 & ctx.r9.u64;
	// rlwinm r6,r6,0,2,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// andc r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// and r11,r3,r5
	r11.u64 = ctx.r3.u64 & ctx.r5.u64;
	// or r10,r11,r6
	ctx.r10.u64 = r11.u64 | ctx.r6.u64;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f1,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B310"))) PPC_WEAK_FUNC(sub_8262B310);
PPC_FUNC_IMPL(__imp__sub_8262B310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r9,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r8,r11,-23
	ctx.r8.s64 = r11.s64 + -23;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// lis r7,-128
	ctx.r7.s64 = -8388608;
	// srawi r10,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subfic r3,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r3.s64 = 23 - r11.s64;
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// rlwinm r4,r4,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// not r31,r10
	r31.u64 = ~ctx.r10.u64;
	// subf r4,r3,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// sraw r10,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// andc r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// or r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 | r31.u64;
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// andc r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// srawi r10,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// sraw r11,r6,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	r11.s64 = ctx.r6.s32 >> temp.u32;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// andc r7,r11,r7
	ctx.r7.u64 = r11.u64 & ~ctx.r7.u64;
	// and r11,r6,r5
	r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// and r8,r31,r8
	ctx.r8.u64 = r31.u64 & ctx.r8.u64;
	// rlwimi r11,r9,0,8,8
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x800000) | (r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// clrlwi r7,r11,8
	ctx.r7.u64 = r11.u32 & 0xFFFFFF;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// subf r11,r6,r4
	r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sraw r10,r11,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	ctx.r10.s64 = r11.s32 >> temp.u32;
	// slw r3,r10,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8262B3C8"))) PPC_WEAK_FUNC(sub_8262B3C8);
PPC_FUNC_IMPL(__imp__sub_8262B3C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B3CC"))) PPC_WEAK_FUNC(sub_8262B3CC);
PPC_FUNC_IMPL(__imp__sub_8262B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B3D0"))) PPC_WEAK_FUNC(sub_8262B3D0);
PPC_FUNC_IMPL(__imp__sub_8262B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r11,r9,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// addi r11,r11,-127
	r11.s64 = r11.s64 + -127;
	// clrlwi r10,r9,1
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// addi r8,r11,-23
	ctx.r8.s64 = r11.s64 + -23;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// lis r7,-128
	ctx.r7.s64 = -8388608;
	// srawi r10,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// subfic r3,r11,23
	xer.ca = r11.u32 <= 23;
	ctx.r3.s64 = 23 - r11.s64;
	// srawi r5,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// and r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 & ctx.r10.u64;
	// clrlwi r3,r10,27
	ctx.r3.u64 = ctx.r10.u32 & 0x1F;
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// rlwinm r3,r3,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r5,r4,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r4.s64;
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
	// sraw r10,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// or r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwimi r7,r6,23,0,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 23) & 0xFF800000) | (ctx.r7.u64 & 0xFFFFFFFF007FFFFF);
	// srawi r10,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// and r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 & ctx.r5.u64;
	// srawi r7,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r11.s32 >> 31;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 & ctx.r8.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// or r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 | ctx.r10.u64;
	// subf r11,r9,r3
	r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// andc r10,r11,r7
	ctx.r10.u64 = r11.u64 & ~ctx.r7.u64;
	// sraw r9,r10,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// slw r3,r9,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
}

__attribute__((alias("__imp__sub_8262B45C"))) PPC_WEAK_FUNC(sub_8262B45C);
PPC_FUNC_IMPL(__imp__sub_8262B45C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B460"))) PPC_WEAK_FUNC(sub_8262B460);
PPC_FUNC_IMPL(__imp__sub_8262B460) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f12,7832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8262b4a4
	if (cr6.gt) goto loc_8262B4A4;
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,7828(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7828);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7824);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fnmsubs f8,f9,f13,f10
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f13.f64 - ctx.f10.f64)));
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fnmsubs f0,f7,f12,f8
	f0.f64 = double(float(-(ctx.f7.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// b 0x8262b4d0
	goto loc_8262B4D0;
loc_8262B4A4:
	// fadds f10,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f0,7828(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7828);
	f0.f64 = double(temp.f32);
	// lfs f12,7824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7824);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f11,-12724(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12724);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fnmsubs f7,f8,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * f0.f64 - ctx.f9.f64)));
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fnmsubs f5,f6,f12,f7
	ctx.f5.f64 = double(float(-(ctx.f6.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fsubs f0,f11,f5
	f0.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
loc_8262B4D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f2,f12
	cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bge cr6,0x8262b4ec
	if (!cr6.lt) goto loc_8262B4EC;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
loc_8262B4EC:
	// fcmpu cr6,f1,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x8262b4fc
	if (!cr6.lt) goto loc_8262B4FC;
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_8262B4FC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
}

__attribute__((alias("__imp__sub_8262B500"))) PPC_WEAK_FUNC(sub_8262B500);
PPC_FUNC_IMPL(__imp__sub_8262B500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B504"))) PPC_WEAK_FUNC(sub_8262B504);
PPC_FUNC_IMPL(__imp__sub_8262B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B508"))) PPC_WEAK_FUNC(sub_8262B508);
PPC_FUNC_IMPL(__imp__sub_8262B508) {
	PPC_FUNC_PROLOGUE();
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
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8262b554
	if (cr6.lt) goto loc_8262B554;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8262b540
	if (cr6.gt) goto loc_8262B540;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
loc_8262B540:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8262B554:
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262B568"))) PPC_WEAK_FUNC(sub_8262B568);
PPC_FUNC_IMPL(__imp__sub_8262B568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B56C"))) PPC_WEAK_FUNC(sub_8262B56C);
PPC_FUNC_IMPL(__imp__sub_8262B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B570"))) PPC_WEAK_FUNC(sub_8262B570);
PPC_FUNC_IMPL(__imp__sub_8262B570) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8262b5b8
	if (cr6.lt) goto loc_8262B5B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8262b5c0
	if (cr6.gt) goto loc_8262B5C0;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8262b5c0
	goto loc_8262B5C0;
loc_8262B5B8:
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
loc_8262B5C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262B5D8"))) PPC_WEAK_FUNC(sub_8262B5D8);
PPC_FUNC_IMPL(__imp__sub_8262B5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B5DC"))) PPC_WEAK_FUNC(sub_8262B5DC);
PPC_FUNC_IMPL(__imp__sub_8262B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B5E0"))) PPC_WEAK_FUNC(sub_8262B5E0);
PPC_FUNC_IMPL(__imp__sub_8262B5E0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262B65C"))) PPC_WEAK_FUNC(sub_8262B65C);
PPC_FUNC_IMPL(__imp__sub_8262B65C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B660"))) PPC_WEAK_FUNC(sub_8262B660);
PPC_FUNC_IMPL(__imp__sub_8262B660) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627fb0
	sub_82627FB0(ctx, base);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmsum4fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// blt cr6,0x8262b6bc
	if (cr6.lt) goto loc_8262B6BC;
	// li r11,0
	r11.s64 = 0;
loc_8262B6BC:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8262b6d8
	if (cr6.eq) goto loc_8262B6D8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8262b6dc
	if (!cr6.eq) goto loc_8262B6DC;
loc_8262B6D8:
	// li r11,0
	r11.s64 = 0;
loc_8262B6DC:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_8262B6F8"))) PPC_WEAK_FUNC(sub_8262B6F8);
PPC_FUNC_IMPL(__imp__sub_8262B6F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B6FC"))) PPC_WEAK_FUNC(sub_8262B6FC);
PPC_FUNC_IMPL(__imp__sub_8262B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B700"))) PPC_WEAK_FUNC(sub_8262B700);
PPC_FUNC_IMPL(__imp__sub_8262B700) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9418
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x8262b79c
	if (!cr6.gt) goto loc_8262B79C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f0,f13
	ctx.f6.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(f0.f64 / ctx.f3.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfs f1,-52(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f0,f10,f2
	f0.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f12,f4,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f12,-56(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x828e9468
	return;
loc_8262B79C:
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, r11.u32);
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// stw r9,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
	// ble cr6,0x8262b7c0
	if (!cr6.gt) goto loc_8262B7C0;
	// li r11,1
	r11.s64 = 1;
loc_8262B7C0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// ble cr6,0x8262b7dc
	if (!cr6.gt) goto loc_8262B7DC;
	// li r11,2
	r11.s64 = 2;
loc_8262B7DC:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r31,-32229
	r31.s64 = -2112159744;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,3792(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 3792);
	f0.f64 = double(temp.f32);
	// add r28,r7,r10
	r28.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f12,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-25600(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// lwzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfsx f11,r30,r4
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r31,r4
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lfsx f9,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r31,r4
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// lfsx f6,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// lfsx f5,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfsx f3,r11,r4
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,-64
	ctx.r4.s64 = ctx.r1.s64 + -64;
	// fadds f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// fsubs f10,f12,f8
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(f0.f64 / ctx.f8.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfsx f6,r7,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, temp.u32);
	// fmuls f5,f4,f7
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f5,-52(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f4,f2,f7
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfsx f4,r8,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// fmuls f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfsx f3,r6,r4
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262B8D8"))) PPC_WEAK_FUNC(sub_8262B8D8);
PPC_FUNC_IMPL(__imp__sub_8262B8D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262B8DC"))) PPC_WEAK_FUNC(sub_8262B8DC);
PPC_FUNC_IMPL(__imp__sub_8262B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B8E0"))) PPC_WEAK_FUNC(sub_8262B8E0);
PPC_FUNC_IMPL(__imp__sub_8262B8E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8262b700
	sub_8262B700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262B8E0"))) PPC_WEAK_FUNC(sub_8262B8E0);
PPC_FUNC_IMPL(__imp__sub_8262B8E0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262B8E4"))) PPC_WEAK_FUNC(sub_8262B8E4);
PPC_FUNC_IMPL(__imp__sub_8262B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B8E8"))) PPC_WEAK_FUNC(sub_8262B8E8);
PPC_FUNC_IMPL(__imp__sub_8262B8E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8262b920
	if (!cr6.lt) goto loc_8262B920;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8262B920:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8262b92c
	if (!cr6.lt) goto loc_8262B92C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8262B92C:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// vxor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfsx f0,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r9,7632
	ctx.r4.s64 = ctx.r9.s64 + 7632;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// stfsx f13,r8,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stfsx f12,r6,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v9.f32))));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v9,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// vcmpeqfp v7,v11,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v9,v6,v6
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vnmsubfp v6,v6,v10,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v5,v13,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v4,v8,v5
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8262B9D8"))) PPC_WEAK_FUNC(sub_8262B9D8);
PPC_FUNC_IMPL(__imp__sub_8262B9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262B9DC"))) PPC_WEAK_FUNC(sub_8262B9DC);
PPC_FUNC_IMPL(__imp__sub_8262B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262B9E0"))) PPC_WEAK_FUNC(sub_8262B9E0);
PPC_FUNC_IMPL(__imp__sub_8262B9E0) {
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
	// bl 0x8262b700
	sub_8262B700(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,7632
	ctx.r10.s64 = r11.s64 + 7632;
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v5,v6,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vmulfp128 v9,v5,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v11,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
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
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262BA58"))) PPC_WEAK_FUNC(sub_8262BA58);
PPC_FUNC_IMPL(__imp__sub_8262BA58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BA5C"))) PPC_WEAK_FUNC(sub_8262BA5C);
PPC_FUNC_IMPL(__imp__sub_8262BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262BA60"))) PPC_WEAK_FUNC(sub_8262BA60);
PPC_FUNC_IMPL(__imp__sub_8262BA60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// vmsum4fp128 v13,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushModeUnconditional();
	f28.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f30.f64 = double(temp.f32);
	// fmr f29,f30
	f29.f64 = f30.f64;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8262bac4
	if (!cr6.lt) goto loc_8262BAC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fneg f31,f31
	f31.u64 = f31.u64 ^ 0x8000000000000000;
	// lfs f29,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f29.f64 = double(temp.f32);
loc_8262BAC4:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f0,7856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7856);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8262bb44
	if (!cr6.lt) goto loc_8262BB44;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8262b508
	sub_8262B508(ctx, base);
	// fnmsubs f0,f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(f31.f64 * f31.f64 - f30.f64)));
	// fmuls f31,f1,f28
	f31.f64 = double(float(ctx.f1.f64 * f28.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - f31.f64));
	// fdivs f30,f30,f13
	f30.f64 = double(float(f30.f64 / ctx.f13.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvlx v12,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * f30.f64));
	// vmulfp128 v13,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// fmuls f8,f9,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f9.f64 * f29.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v10,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmaddfp v8,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// b 0x8262bb74
	goto loc_8262BB74;
loc_8262BB44:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fmuls f0,f29,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f30,f28
	ctx.f13.f64 = double(float(f30.f64 - f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v0,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v8,v12,v13,v0
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
loc_8262BB74:
	// vmsum4fp128 v11,v8,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,7632
	ctx.r10.s64 = r11.s64 + 7632;
	// vor v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vmulfp128 v6,v11,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v10,v11
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor v10,v6,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vnmsubfp v6,v6,v9,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v5,v13,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v4,v8,v5
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_8262BBD0"))) PPC_WEAK_FUNC(sub_8262BBD0);
PPC_FUNC_IMPL(__imp__sub_8262BBD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262BBD4"))) PPC_WEAK_FUNC(sub_8262BBD4);
PPC_FUNC_IMPL(__imp__sub_8262BBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262BBD8"))) PPC_WEAK_FUNC(sub_8262BBD8);
PPC_FUNC_IMPL(__imp__sub_8262BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// li r12,-48
	r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r11,7648
	ctx.r10.s64 = r11.s64 + 7648;
	// vmsum3fp128 v8,v0,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vpermwi128 v7,v0,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v6,v0,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// vpermwi128 v5,v9,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// vpermwi128 v4,v9,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// vmaddfp v12,v13,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v3,v7,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v2,v6,v4
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw v11,v8,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vmulfp128 v12,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v10,v2,v3
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v0,v11,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v127,v0,v0
	_mm_store_ps(v127.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v1,v9,v127
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v127.f32), 0xEF));
	// stvewx v1,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v1.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,7860(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7860);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8262bc8c
	if (!cr6.gt) goto loc_8262BC8C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,7600
	ctx.r10.s64 = r11.s64 + 7600;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8262bdac
	goto loc_8262BDAC;
loc_8262BC8C:
	// fadds f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8262bd28
	if (!cr6.lt) goto loc_8262BD28;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r11,1
	r11.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8262bcd8
	if (!cr6.lt) goto loc_8262BCD8;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8262BCD8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8262bce4
	if (!cr6.lt) goto loc_8262BCE4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8262BCE4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfsx f0,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// lfsx f12,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f12,r8,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lfs f1,-25596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25596);
	ctx.f1.f64 = double(temp.f32);
	// stfsx f13,r6,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// b 0x8262bda0
	goto loc_8262BDA0;
loc_8262BD28:
	// bl 0x8262b508
	sub_8262B508(ctx, base);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v13,v127,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x9C));
	// addi r9,r11,7632
	ctx.r9.s64 = r11.s64 + 7632;
	// vpermwi128 v11,v127,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x78));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// vmulfp128 v7,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v10,v11
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v6,v7
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v5,v13,v13
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vmulfp128 v4,v5,v12
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp v6,v9,v5
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v4,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v4,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v9,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v3,v12,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v2,v13,v3
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8262BDA0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262b5e0
	sub_8262B5E0(ctx, base);
loc_8262BDAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// li r0,-48
	r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262BDC8"))) PPC_WEAK_FUNC(sub_8262BDC8);
PPC_FUNC_IMPL(__imp__sub_8262BDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BDCC"))) PPC_WEAK_FUNC(sub_8262BDCC);
PPC_FUNC_IMPL(__imp__sub_8262BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262BDD0"))) PPC_WEAK_FUNC(sub_8262BDD0);
PPC_FUNC_IMPL(__imp__sub_8262BDD0) {
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
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8262bbd8
	sub_8262BBD8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v8,r0,r28
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,7840
	ctx.r9.s64 = r11.s64 + 7840;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v13,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// vpermwi128 v9,v13,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vspltw128 v127,v13,3
	_mm_store_si128((__m128i*)v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// addi r30,r11,21036
	r30.s64 = r11.s64 + 21036;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v0,v8,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f13,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// vpermwi128 v7,v0,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmsum3fp128 v6,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v5,v0,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v4,v0,v13
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v3,v7,v10
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v2,v5,v9
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v1,v6,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vsubfp v10,v2,v3
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vsubfp v31,v4,v1
	_mm_store_ps(v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v13,v11,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddcfp128 v127,v0,v127,v13
	_mm_store_ps(v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v127.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v127,v31,1,0
	_mm_store_ps(v127.f32, _mm_blend_ps(_mm_load_ps(v127.f32), _mm_permute_ps(_mm_load_ps(v31.f32), 228), 1));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8262beac
	if (cr6.lt) goto loc_8262BEAC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8262bea0
	if (!cr6.gt) goto loc_8262BEA0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8262beb4
	goto loc_8262BEB4;
loc_8262BEA0:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// b 0x8262beb4
	goto loc_8262BEB4;
loc_8262BEAC:
	// bl 0x828eb798
	sub_828EB798(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
loc_8262BEB4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f13,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v10,v11,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// stvewx v8,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8262bf0c
	if (cr6.lt) goto loc_8262BF0C;
	// li r11,0
	r11.s64 = 0;
loc_8262BF0C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8262bf20
	if (cr6.eq) goto loc_8262BF20;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_8262BF20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_8262BF2C"))) PPC_WEAK_FUNC(sub_8262BF2C);
PPC_FUNC_IMPL(__imp__sub_8262BF2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262BF30"))) PPC_WEAK_FUNC(sub_8262BF30);
PPC_FUNC_IMPL(__imp__sub_8262BF30) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8262bf84
	if (!cr6.gt) goto loc_8262BF84;
	// li r29,0
	r29.s64 = 0;
loc_8262BF58:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262bf90
	if (cr6.eq) goto loc_8262BF90;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8262bf58
	if (cr6.lt) goto loc_8262BF58;
loc_8262BF84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262BF90:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262BFAC"))) PPC_WEAK_FUNC(sub_8262BFAC);
PPC_FUNC_IMPL(__imp__sub_8262BFAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262BFB0"))) PPC_WEAK_FUNC(sub_8262BFB0);
PPC_FUNC_IMPL(__imp__sub_8262BFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_8262BFB4"))) PPC_WEAK_FUNC(sub_8262BFB4);
PPC_FUNC_IMPL(__imp__sub_8262BFB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BFB8"))) PPC_WEAK_FUNC(sub_8262BFB8);
PPC_FUNC_IMPL(__imp__sub_8262BFB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8262BFBC"))) PPC_WEAK_FUNC(sub_8262BFBC);
PPC_FUNC_IMPL(__imp__sub_8262BFBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BFC0"))) PPC_WEAK_FUNC(sub_8262BFC0);
PPC_FUNC_IMPL(__imp__sub_8262BFC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8262BFC4"))) PPC_WEAK_FUNC(sub_8262BFC4);
PPC_FUNC_IMPL(__imp__sub_8262BFC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BFC8"))) PPC_WEAK_FUNC(sub_8262BFC8);
PPC_FUNC_IMPL(__imp__sub_8262BFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8262BFD8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262bfd8
	if (!cr6.eq) goto loc_8262BFD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262BFEC"))) PPC_WEAK_FUNC(sub_8262BFEC);
PPC_FUNC_IMPL(__imp__sub_8262BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262BFF0"))) PPC_WEAK_FUNC(sub_8262BFF0);
PPC_FUNC_IMPL(__imp__sub_8262BFF0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8262c030
	if (cr6.eq) goto loc_8262C030;
loc_8262C010:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c044
	if (cr6.eq) goto loc_8262C044;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8262c010
	if (!cr6.eq) goto loc_8262C010;
loc_8262C030:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8262C044:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262C054"))) PPC_WEAK_FUNC(sub_8262C054);
PPC_FUNC_IMPL(__imp__sub_8262C054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262C058"))) PPC_WEAK_FUNC(sub_8262C058);
PPC_FUNC_IMPL(__imp__sub_8262C058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8262C068:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c068
	if (!cr6.eq) goto loc_8262C068;
}

__attribute__((alias("__imp__sub_8262C07C"))) PPC_WEAK_FUNC(sub_8262C07C);
PPC_FUNC_IMPL(__imp__sub_8262C07C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C080"))) PPC_WEAK_FUNC(sub_8262C080);
PPC_FUNC_IMPL(__imp__sub_8262C080) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C088"))) PPC_WEAK_FUNC(sub_8262C088);
PPC_FUNC_IMPL(__imp__sub_8262C088) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C090"))) PPC_WEAK_FUNC(sub_8262C090);
PPC_FUNC_IMPL(__imp__sub_8262C090) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_8262C094"))) PPC_WEAK_FUNC(sub_8262C094);
PPC_FUNC_IMPL(__imp__sub_8262C094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C098"))) PPC_WEAK_FUNC(sub_8262C098);
PPC_FUNC_IMPL(__imp__sub_8262C098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8262C0A8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c0a8
	if (!cr6.eq) goto loc_8262C0A8;
}

__attribute__((alias("__imp__sub_8262C0BC"))) PPC_WEAK_FUNC(sub_8262C0BC);
PPC_FUNC_IMPL(__imp__sub_8262C0BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C0C0"))) PPC_WEAK_FUNC(sub_8262C0C0);
PPC_FUNC_IMPL(__imp__sub_8262C0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c0e4
	if (cr6.eq) goto loc_8262C0E4;
loc_8262C0D0:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c0d0
	if (!cr6.eq) goto loc_8262C0D0;
loc_8262C0E4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_8262C0EC:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c10c
	if (!cr0.lt) goto loc_8262C10C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c0ec
	if (!cr6.eq) goto loc_8262C0EC;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_8262C10C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C124"))) PPC_WEAK_FUNC(sub_8262C124);
PPC_FUNC_IMPL(__imp__sub_8262C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C128"))) PPC_WEAK_FUNC(sub_8262C128);
PPC_FUNC_IMPL(__imp__sub_8262C128) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x8262c098
	sub_8262C098(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8262c1bc
	if (!cr6.gt) goto loc_8262C1BC;
loc_8262C14C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c170
	if (cr6.eq) goto loc_8262C170;
loc_8262C15C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c15c
	if (!cr6.eq) goto loc_8262C15C;
loc_8262C170:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r11,r9,r29
	r11.s64 = r29.s64 - ctx.r9.s64;
loc_8262C178:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c1c8
	if (!cr0.lt) goto loc_8262C1C8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c178
	if (!cr6.eq) goto loc_8262C178;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_8262C194:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c1e0
	if (cr6.eq) goto loc_8262C1E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x8262c098
	sub_8262C098(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x8262c14c
	if (cr6.lt) goto loc_8262C14C;
loc_8262C1BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262C1C8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8262c194
	goto loc_8262C194;
loc_8262C1E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C1E8"))) PPC_WEAK_FUNC(sub_8262C1E8);
PPC_FUNC_IMPL(__imp__sub_8262C1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262C1EC"))) PPC_WEAK_FUNC(sub_8262C1EC);
PPC_FUNC_IMPL(__imp__sub_8262C1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C1F0"))) PPC_WEAK_FUNC(sub_8262C1F0);
PPC_FUNC_IMPL(__imp__sub_8262C1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262C204"))) PPC_WEAK_FUNC(sub_8262C204);
PPC_FUNC_IMPL(__imp__sub_8262C204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C208"))) PPC_WEAK_FUNC(sub_8262C208);
PPC_FUNC_IMPL(__imp__sub_8262C208) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
}

__attribute__((alias("__imp__sub_8262C20C"))) PPC_WEAK_FUNC(sub_8262C20C);
PPC_FUNC_IMPL(__imp__sub_8262C20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C210"))) PPC_WEAK_FUNC(sub_8262C210);
PPC_FUNC_IMPL(__imp__sub_8262C210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8262C220:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c220
	if (!cr6.eq) goto loc_8262C220;
}

__attribute__((alias("__imp__sub_8262C234"))) PPC_WEAK_FUNC(sub_8262C234);
PPC_FUNC_IMPL(__imp__sub_8262C234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C238"))) PPC_WEAK_FUNC(sub_8262C238);
PPC_FUNC_IMPL(__imp__sub_8262C238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c25c
	if (cr6.eq) goto loc_8262C25C;
loc_8262C248:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c248
	if (!cr6.eq) goto loc_8262C248;
loc_8262C25C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_8262C264:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c284
	if (!cr0.lt) goto loc_8262C284;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c264
	if (!cr6.eq) goto loc_8262C264;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_8262C284:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262C298"))) PPC_WEAK_FUNC(sub_8262C298);
PPC_FUNC_IMPL(__imp__sub_8262C298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C29C"))) PPC_WEAK_FUNC(sub_8262C29C);
PPC_FUNC_IMPL(__imp__sub_8262C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C2A0"))) PPC_WEAK_FUNC(sub_8262C2A0);
PPC_FUNC_IMPL(__imp__sub_8262C2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8262c238
	sub_8262C238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262C2A0"))) PPC_WEAK_FUNC(sub_8262C2A0);
PPC_FUNC_IMPL(__imp__sub_8262C2A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262C2A4"))) PPC_WEAK_FUNC(sub_8262C2A4);
PPC_FUNC_IMPL(__imp__sub_8262C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C2A8"))) PPC_WEAK_FUNC(sub_8262C2A8);
PPC_FUNC_IMPL(__imp__sub_8262C2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_8262C2AC"))) PPC_WEAK_FUNC(sub_8262C2AC);
PPC_FUNC_IMPL(__imp__sub_8262C2AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C2B0"))) PPC_WEAK_FUNC(sub_8262C2B0);
PPC_FUNC_IMPL(__imp__sub_8262C2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8262C2C4"))) PPC_WEAK_FUNC(sub_8262C2C4);
PPC_FUNC_IMPL(__imp__sub_8262C2C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C2C8"))) PPC_WEAK_FUNC(sub_8262C2C8);
PPC_FUNC_IMPL(__imp__sub_8262C2C8) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8262c320
	if (!cr6.gt) goto loc_8262C320;
	// li r31,0
	r31.s64 = 0;
loc_8262C2F0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c32c
	if (cr6.eq) goto loc_8262C32C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8262c2f0
	if (cr6.lt) goto loc_8262C2F0;
loc_8262C320:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8262C32C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C334"))) PPC_WEAK_FUNC(sub_8262C334);
PPC_FUNC_IMPL(__imp__sub_8262C334) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262C338"))) PPC_WEAK_FUNC(sub_8262C338);
PPC_FUNC_IMPL(__imp__sub_8262C338) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8262c3cc
	if (!cr6.gt) goto loc_8262C3CC;
loc_8262C35C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c380
	if (cr6.eq) goto loc_8262C380;
loc_8262C36C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c36c
	if (!cr6.eq) goto loc_8262C36C;
loc_8262C380:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r11,r9,r29
	r11.s64 = r29.s64 - ctx.r9.s64;
loc_8262C388:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c3d8
	if (!cr0.lt) goto loc_8262C3D8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c388
	if (!cr6.eq) goto loc_8262C388;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
loc_8262C3A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c3f0
	if (cr6.eq) goto loc_8262C3F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x8262c35c
	if (cr6.lt) goto loc_8262C35C;
loc_8262C3CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262C3D8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8262c3a4
	goto loc_8262C3A4;
loc_8262C3F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C3F8"))) PPC_WEAK_FUNC(sub_8262C3F8);
PPC_FUNC_IMPL(__imp__sub_8262C3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262C3FC"))) PPC_WEAK_FUNC(sub_8262C3FC);
PPC_FUNC_IMPL(__imp__sub_8262C3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C400"))) PPC_WEAK_FUNC(sub_8262C400);
PPC_FUNC_IMPL(__imp__sub_8262C400) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8262c494
	if (!cr6.gt) goto loc_8262C494;
loc_8262C424:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c448
	if (cr6.eq) goto loc_8262C448;
loc_8262C434:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c434
	if (!cr6.eq) goto loc_8262C434;
loc_8262C448:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// subf r11,r9,r30
	r11.s64 = r30.s64 - ctx.r9.s64;
loc_8262C450:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c4a0
	if (!cr0.lt) goto loc_8262C4A0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c450
	if (!cr6.eq) goto loc_8262C450;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_8262C46C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c4b8
	if (cr6.eq) goto loc_8262C4B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8262c210
	sub_8262C210(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x8262c424
	if (cr6.lt) goto loc_8262C424;
loc_8262C494:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8262C4A0:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8262c46c
	goto loc_8262C46C;
loc_8262C4B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262C4C0"))) PPC_WEAK_FUNC(sub_8262C4C0);
PPC_FUNC_IMPL(__imp__sub_8262C4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262C4C4"))) PPC_WEAK_FUNC(sub_8262C4C4);
PPC_FUNC_IMPL(__imp__sub_8262C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C4C8"))) PPC_WEAK_FUNC(sub_8262C4C8);
PPC_FUNC_IMPL(__imp__sub_8262C4C8) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8262c51c
	if (!cr6.gt) goto loc_8262C51C;
	// li r31,0
	r31.s64 = 0;
loc_8262C4F0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c528
	if (cr6.eq) goto loc_8262C528;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8262c4f0
	if (cr6.lt) goto loc_8262C4F0;
loc_8262C51C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262C528:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C530"))) PPC_WEAK_FUNC(sub_8262C530);
PPC_FUNC_IMPL(__imp__sub_8262C530) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262C534"))) PPC_WEAK_FUNC(sub_8262C534);
PPC_FUNC_IMPL(__imp__sub_8262C534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C538"))) PPC_WEAK_FUNC(sub_8262C538);
PPC_FUNC_IMPL(__imp__sub_8262C538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_8262C53C"))) PPC_WEAK_FUNC(sub_8262C53C);
PPC_FUNC_IMPL(__imp__sub_8262C53C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C540"))) PPC_WEAK_FUNC(sub_8262C540);
PPC_FUNC_IMPL(__imp__sub_8262C540) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8262C544"))) PPC_WEAK_FUNC(sub_8262C544);
PPC_FUNC_IMPL(__imp__sub_8262C544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C548"))) PPC_WEAK_FUNC(sub_8262C548);
PPC_FUNC_IMPL(__imp__sub_8262C548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8262c564
	if (cr6.eq) goto loc_8262C564;
loc_8262C554:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8262c554
	if (!cr6.eq) goto loc_8262C554;
loc_8262C564:
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8262C574"))) PPC_WEAK_FUNC(sub_8262C574);
PPC_FUNC_IMPL(__imp__sub_8262C574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C578"))) PPC_WEAK_FUNC(sub_8262C578);
PPC_FUNC_IMPL(__imp__sub_8262C578) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C580"))) PPC_WEAK_FUNC(sub_8262C580);
PPC_FUNC_IMPL(__imp__sub_8262C580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c5a8
	if (cr6.eq) goto loc_8262C5A8;
loc_8262C594:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262c594
	if (!cr6.eq) goto loc_8262C594;
loc_8262C5A8:
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_8262C5AC:
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add. r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8262c5cc
	if (!cr0.lt) goto loc_8262C5CC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262c5ac
	if (!cr6.eq) goto loc_8262C5AC;
loc_8262C5C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8262C5CC:
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8262c5c4
	if (cr6.eq) goto loc_8262C5C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8262c5c4
	if (cr6.lt) goto loc_8262C5C4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_8262C60C"))) PPC_WEAK_FUNC(sub_8262C60C);
PPC_FUNC_IMPL(__imp__sub_8262C60C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C610"))) PPC_WEAK_FUNC(sub_8262C610);
PPC_FUNC_IMPL(__imp__sub_8262C610) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x8262c580
	sub_8262C580(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262C63C"))) PPC_WEAK_FUNC(sub_8262C63C);
PPC_FUNC_IMPL(__imp__sub_8262C63C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C640"))) PPC_WEAK_FUNC(sub_8262C640);
PPC_FUNC_IMPL(__imp__sub_8262C640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c660
	if (cr6.eq) goto loc_8262C660;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgelr cr6
	if (!cr6.lt) return;
loc_8262C660:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C668"))) PPC_WEAK_FUNC(sub_8262C668);
PPC_FUNC_IMPL(__imp__sub_8262C668) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x8262c580
	sub_8262C580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262c6b4
	if (!cr6.eq) goto loc_8262C6B4;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8262ed70
	sub_8262ED70(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262C6B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C6BC"))) PPC_WEAK_FUNC(sub_8262C6BC);
PPC_FUNC_IMPL(__imp__sub_8262C6BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262C6C0"))) PPC_WEAK_FUNC(sub_8262C6C0);
PPC_FUNC_IMPL(__imp__sub_8262C6C0) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c730
	if (cr6.eq) goto loc_8262C730;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8262c730
	if (cr6.lt) goto loc_8262C730;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// lwz r29,0(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r4,r9
	r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262ed70
	sub_8262ED70(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8262C730:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262C738"))) PPC_WEAK_FUNC(sub_8262C738);
PPC_FUNC_IMPL(__imp__sub_8262C738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262C73C"))) PPC_WEAK_FUNC(sub_8262C73C);
PPC_FUNC_IMPL(__imp__sub_8262C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C740"))) PPC_WEAK_FUNC(sub_8262C740);
PPC_FUNC_IMPL(__imp__sub_8262C740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262c750
	if (cr6.eq) goto loc_8262C750;
	// b 0x8262bf30
	sub_8262BF30(ctx, base);
	return;
loc_8262C750:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C758"))) PPC_WEAK_FUNC(sub_8262C758);
PPC_FUNC_IMPL(__imp__sub_8262C758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
}

__attribute__((alias("__imp__sub_8262C75C"))) PPC_WEAK_FUNC(sub_8262C75C);
PPC_FUNC_IMPL(__imp__sub_8262C75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C760"))) PPC_WEAK_FUNC(sub_8262C760);
PPC_FUNC_IMPL(__imp__sub_8262C760) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C768"))) PPC_WEAK_FUNC(sub_8262C768);
PPC_FUNC_IMPL(__imp__sub_8262C768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_8262C7B0"))) PPC_WEAK_FUNC(sub_8262C7B0);
PPC_FUNC_IMPL(__imp__sub_8262C7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262C7B4"))) PPC_WEAK_FUNC(sub_8262C7B4);
PPC_FUNC_IMPL(__imp__sub_8262C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C7B8"))) PPC_WEAK_FUNC(sub_8262C7B8);
PPC_FUNC_IMPL(__imp__sub_8262C7B8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8262c810
	if (!cr6.gt) goto loc_8262C810;
	// li r31,0
	r31.s64 = 0;
loc_8262C7E0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262c81c
	if (cr6.eq) goto loc_8262C81C;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8262c7e0
	if (cr6.lt) goto loc_8262C7E0;
loc_8262C810:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8262C81C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C824"))) PPC_WEAK_FUNC(sub_8262C824);
PPC_FUNC_IMPL(__imp__sub_8262C824) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262C828"))) PPC_WEAK_FUNC(sub_8262C828);
PPC_FUNC_IMPL(__imp__sub_8262C828) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8262c580
	sub_8262C580(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262c87c
	if (!cr6.eq) goto loc_8262C87C;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// bne cr6,0x8262c888
	if (!cr6.eq) goto loc_8262C888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262ed30
	sub_8262ED30(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8262C87C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262C888:
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bne cr6,0x8262c8c4
	if (!cr6.eq) goto loc_8262C8C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262ed38
	sub_8262ED38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8262f040
	sub_8262F040(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8262C8C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8262cc80
	sub_8262CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C8D4"))) PPC_WEAK_FUNC(sub_8262C8D4);
PPC_FUNC_IMPL(__imp__sub_8262C8D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262C8D8"))) PPC_WEAK_FUNC(sub_8262C8D8);
PPC_FUNC_IMPL(__imp__sub_8262C8D8) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262c9a8
	if (cr6.eq) goto loc_8262C9A8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8262c9a8
	if (cr6.lt) goto loc_8262C9A8;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r30,r11,r8
	r30.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r4,r10
	r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	// lbz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// bne cr6,0x8262c954
	if (!cr6.eq) goto loc_8262C954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262ed30
	sub_8262ED30(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8262C954:
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bne cr6,0x8262c990
	if (!cr6.eq) goto loc_8262C990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262ed38
	sub_8262ED38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262f040
	sub_8262F040(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8262C990:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8262cc80
	sub_8262CC80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8262C9A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262C9B0"))) PPC_WEAK_FUNC(sub_8262C9B0);
PPC_FUNC_IMPL(__imp__sub_8262C9B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8262C9B4"))) PPC_WEAK_FUNC(sub_8262C9B4);
PPC_FUNC_IMPL(__imp__sub_8262C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262C9B8"))) PPC_WEAK_FUNC(sub_8262C9B8);
PPC_FUNC_IMPL(__imp__sub_8262C9B8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82630b48
	sub_82630B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// bl 0x82630d20
	sub_82630D20(ctx, base);
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8262ca28
	if (!cr6.gt) goto loc_8262CA28;
	// li r30,0
	r30.s64 = 0;
loc_8262CA04:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x826313c8
	sub_826313C8(ctx, base);
	// lwz r4,20(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// blt cr6,0x8262ca04
	if (cr6.lt) goto loc_8262CA04;
loc_8262CA28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630d20
	sub_82630D20(ctx, base);
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8262cbe0
	if (!cr6.gt) goto loc_8262CBE0;
	// li r24,0
	r24.s64 = 0;
loc_8262CA44:
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r28,r9,r24
	r28.u64 = ctx.r9.u64 + r24.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8262CA60:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8262ca60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8262CA60;
	// lbz r25,124(r1)
	r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r25,24
	cr6.compare<uint32_t>(r25.u32, 24, xer);
	// beq cr6,0x8262ca84
	if (cr6.eq) goto loc_8262CA84;
	// cmplwi cr6,r25,31
	cr6.compare<uint32_t>(r25.u32, 31, xer);
	// bne cr6,0x8262cab4
	if (!cr6.eq) goto loc_8262CAB4;
loc_8262CA84:
	// lbz r3,125(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// bl 0x8262ec70
	sub_8262EC70(ctx, base);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lhz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r30.u8);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// clrlwi r29,r5,16
	r29.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r29,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r29.u16);
	// b 0x8262cabc
	goto loc_8262CABC;
loc_8262CAB4:
	// lhz r29,128(r1)
	r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lbz r30,125(r1)
	r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
loc_8262CABC:
	// rlwinm r10,r29,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// li r27,0
	r27.s64 = 0;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8262cafc
	if (cr6.eq) goto loc_8262CAFC;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// xori r29,r11,1024
	r29.u64 = r11.u64 ^ 1024;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r29,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r29.u16);
	// beq cr6,0x8262caec
	if (cr6.eq) goto loc_8262CAEC;
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
loc_8262CAEC:
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r25,19
	r25.s64 = 19;
	// stb r30,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r30.u8);
	// stb r25,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r25.u8);
loc_8262CAFC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262cb4c
	if (cr6.eq) goto loc_8262CB4C;
	// lbz r11,12(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 12);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x8262cb4c
	if (cr6.eq) goto loc_8262CB4C;
	// lbz r11,13(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x8262cb4c
	if (cr6.eq) goto loc_8262CB4C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8262ed30
	sub_8262ED30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8262cb4c
	if (cr6.eq) goto loc_8262CB4C;
loc_8262CB34:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262c9b8
	sub_8262C9B8(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8262cb34
	if (!cr6.eq) goto loc_8262CB34;
loc_8262CB4C:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262cb68
	if (cr6.eq) goto loc_8262CB68;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8262ed38
	sub_8262ED38(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x826313c8
	sub_826313C8(ctx, base);
loc_8262CB68:
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630a88
	sub_82630A88(ctx, base);
	// clrlwi r4,r25,24
	ctx.r4.u64 = r25.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630cc0
	sub_82630CC0(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = r30.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630cc0
	sub_82630CC0(ctx, base);
	// extsh r11,r27
	r11.s64 = r27.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8262cbb4
	if (cr6.eq) goto loc_8262CBB4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630cc0
	sub_82630CC0(ctx, base);
loc_8262CBB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,126(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// bl 0x82630cc0
	sub_82630CC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630cc0
	sub_82630CC0(ctx, base);
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// cmpw cr6,r23,r4
	cr6.compare<int32_t>(r23.s32, ctx.r4.s32, xer);
	// blt cr6,0x8262ca44
	if (cr6.lt) goto loc_8262CA44;
loc_8262CBE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630d20
	sub_82630D20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630c78
	sub_82630C78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8262CBF4"))) PPC_WEAK_FUNC(sub_8262CBF4);
PPC_FUNC_IMPL(__imp__sub_8262CBF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8262CBF8"))) PPC_WEAK_FUNC(sub_8262CBF8);
PPC_FUNC_IMPL(__imp__sub_8262CBF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826316c0
	sub_826316C0(ctx, base);
	// not r11,r30
	r11.u64 = ~r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// beq cr6,0x8262cc60
	if (cr6.eq) goto loc_8262CC60;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
loc_8262CC34:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262c9b8
	sub_8262C9B8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8262cc50
	if (cr6.eq) goto loc_8262CC50;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8262cc54
	goto loc_8262CC54;
loc_8262CC50:
	// li r11,0
	r11.s64 = 0;
loc_8262CC54:
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262cc34
	if (!cr6.eq) goto loc_8262CC34;
loc_8262CC60:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826316b0
	sub_826316B0(ctx, base);
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

__attribute__((alias("__imp__sub_8262CC7C"))) PPC_WEAK_FUNC(sub_8262CC7C);
PPC_FUNC_IMPL(__imp__sub_8262CC7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CC80"))) PPC_WEAK_FUNC(sub_8262CC80);
PPC_FUNC_IMPL(__imp__sub_8262CC80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262ec70
	sub_8262EC70(ctx, base);
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bgt cr6,0x8262ccd0
	if (cr6.gt) goto loc_8262CCD0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r5,r11
	ctx.r5.s64 = r11.s16;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8262CCD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262CCD8"))) PPC_WEAK_FUNC(sub_8262CCD8);
PPC_FUNC_IMPL(__imp__sub_8262CCD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262CCDC"))) PPC_WEAK_FUNC(sub_8262CCDC);
PPC_FUNC_IMPL(__imp__sub_8262CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262CCE0"))) PPC_WEAK_FUNC(sub_8262CCE0);
PPC_FUNC_IMPL(__imp__sub_8262CCE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8262cd4c
	if (cr6.eq) goto loc_8262CD4C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8262cd50
	if (!cr6.eq) goto loc_8262CD50;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262cd4c
	if (cr6.eq) goto loc_8262CD4C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// bne cr6,0x8262cd50
	if (!cr6.eq) goto loc_8262CD50;
loc_8262CD4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262CD50:
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

__attribute__((alias("__imp__sub_8262CD64"))) PPC_WEAK_FUNC(sub_8262CD64);
PPC_FUNC_IMPL(__imp__sub_8262CD64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CD68"))) PPC_WEAK_FUNC(sub_8262CD68);
PPC_FUNC_IMPL(__imp__sub_8262CD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// clrlwi r3,r10,17
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFF;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262cdc8
	if (!cr6.eq) goto loc_8262CDC8;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8262cdc8
	if (cr6.eq) goto loc_8262CDC8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
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
	// beq cr6,0x8262cdc4
	if (cr6.eq) goto loc_8262CDC4;
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8262CDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262CDC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262CDD4"))) PPC_WEAK_FUNC(sub_8262CDD4);
PPC_FUNC_IMPL(__imp__sub_8262CDD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CDD8"))) PPC_WEAK_FUNC(sub_8262CDD8);
PPC_FUNC_IMPL(__imp__sub_8262CDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x8262ce34
	if (cr6.gt) goto loc_8262CE34;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8262ce04
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8262CE04;
	// bdzf 4*cr6+eq,0x8262ce10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8262CE10;
	// bdzf 4*cr6+eq,0x8262ce1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8262CE1C;
	// bne cr6,0x8262ce28
	if (!cr6.eq) goto loc_8262CE28;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,7896
	ctx.r3.s64 = r11.s64 + 7896;
	// blr 
	return;
loc_8262CE04:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,7888
	ctx.r3.s64 = r11.s64 + 7888;
	// blr 
	return;
loc_8262CE10:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,7880
	ctx.r3.s64 = r11.s64 + 7880;
	// blr 
	return;
loc_8262CE1C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,7872
	ctx.r3.s64 = r11.s64 + 7872;
	// blr 
	return;
loc_8262CE28:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,7864
	ctx.r3.s64 = r11.s64 + 7864;
	// blr 
	return;
loc_8262CE34:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,31204
	ctx.r3.s64 = r11.s64 + 31204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CE40"))) PPC_WEAK_FUNC(sub_8262CE40);
PPC_FUNC_IMPL(__imp__sub_8262CE40) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1024
	cr6.compare<int32_t>(ctx.r5.s32, 1024, xer);
	// bge cr6,0x8262ce78
	if (!cr6.lt) goto loc_8262CE78;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r11,7932
	ctx.r4.s64 = r11.s64 + 7932;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8262CE78:
	// cmpwi cr6,r5,10240
	cr6.compare<int32_t>(ctx.r5.s32, 10240, xer);
	// bge cr6,0x8262cec4
	if (!cr6.lt) goto loc_8262CEC4;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,7928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7928);
	f0.f64 = double(temp.f32);
	// addi r4,r9,7920
	ctx.r4.s64 = ctx.r9.s64 + 7920;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8262CEC4:
	// lis r11,16
	r11.s64 = 1048576;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bge cr6,0x8262cef4
	if (!cr6.lt) goto loc_8262CEF4;
	// srawi r11,r5,10
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	r11.s64 = ctx.r5.s32 >> 10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addze r5,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r5.s64 = temp.s64;
	// addi r4,r10,7912
	ctx.r4.s64 = ctx.r10.s64 + 7912;
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8262CEF4:
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r4,r9,7904
	ctx.r4.s64 = ctx.r9.s64 + 7904;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-31420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31420);
	f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826320d0
	sub_826320D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262CF34"))) PPC_WEAK_FUNC(sub_8262CF34);
PPC_FUNC_IMPL(__imp__sub_8262CF34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CF38"))) PPC_WEAK_FUNC(sub_8262CF38);
PPC_FUNC_IMPL(__imp__sub_8262CF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,7948
	ctx.r9.s64 = r11.s64 + 7948;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CF5C"))) PPC_WEAK_FUNC(sub_8262CF5C);
PPC_FUNC_IMPL(__imp__sub_8262CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262CF60"))) PPC_WEAK_FUNC(sub_8262CF60);
PPC_FUNC_IMPL(__imp__sub_8262CF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CF78"))) PPC_WEAK_FUNC(sub_8262CF78);
PPC_FUNC_IMPL(__imp__sub_8262CF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8262CFC8"))) PPC_WEAK_FUNC(sub_8262CFC8);
PPC_FUNC_IMPL(__imp__sub_8262CFC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262CFCC"))) PPC_WEAK_FUNC(sub_8262CFCC);
PPC_FUNC_IMPL(__imp__sub_8262CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262CFD0"))) PPC_WEAK_FUNC(sub_8262CFD0);
PPC_FUNC_IMPL(__imp__sub_8262CFD0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8262d010
	if (!cr6.gt) goto loc_8262D010;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8262d010
	if (!cr6.eq) goto loc_8262D010;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8262D010:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262D038"))) PPC_WEAK_FUNC(sub_8262D038);
PPC_FUNC_IMPL(__imp__sub_8262D038) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262D03C"))) PPC_WEAK_FUNC(sub_8262D03C);
PPC_FUNC_IMPL(__imp__sub_8262D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D040"))) PPC_WEAK_FUNC(sub_8262D040);
PPC_FUNC_IMPL(__imp__sub_8262D040) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8262d080
	if (!cr6.gt) goto loc_8262D080;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8262d080
	if (!cr6.eq) goto loc_8262D080;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8262D080:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262D0A8"))) PPC_WEAK_FUNC(sub_8262D0A8);
PPC_FUNC_IMPL(__imp__sub_8262D0A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262D0AC"))) PPC_WEAK_FUNC(sub_8262D0AC);
PPC_FUNC_IMPL(__imp__sub_8262D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D0B0"))) PPC_WEAK_FUNC(sub_8262D0B0);
PPC_FUNC_IMPL(__imp__sub_8262D0B0) {
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
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r31,r11,0,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8262d128
	if (cr6.eq) goto loc_8262D128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262D128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8262D12C"))) PPC_WEAK_FUNC(sub_8262D12C);
PPC_FUNC_IMPL(__imp__sub_8262D12C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8262D130"))) PPC_WEAK_FUNC(sub_8262D130);
PPC_FUNC_IMPL(__imp__sub_8262D130) {
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
	// clrlwi r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8262d1a0
	if (!cr6.eq) goto loc_8262D1A0;
	// bl 0x8262cd68
	sub_8262CD68(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262D1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262D1A4"))) PPC_WEAK_FUNC(sub_8262D1A4);
PPC_FUNC_IMPL(__imp__sub_8262D1A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262D1A8"))) PPC_WEAK_FUNC(sub_8262D1A8);
PPC_FUNC_IMPL(__imp__sub_8262D1A8) {
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
	// clrlwi r11,r6,31
	r11.u64 = ctx.r6.u32 & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8262d21c
	if (!cr6.eq) goto loc_8262D21C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262c538
	sub_8262C538(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8262D21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262D220"))) PPC_WEAK_FUNC(sub_8262D220);
PPC_FUNC_IMPL(__imp__sub_8262D220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262D224"))) PPC_WEAK_FUNC(sub_8262D224);
PPC_FUNC_IMPL(__imp__sub_8262D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D228"))) PPC_WEAK_FUNC(sub_8262D228);
PPC_FUNC_IMPL(__imp__sub_8262D228) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8262d27c
	if (cr6.eq) goto loc_8262D27C;
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
loc_8262D27C:
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

__attribute__((alias("__imp__sub_8262D290"))) PPC_WEAK_FUNC(sub_8262D290);
PPC_FUNC_IMPL(__imp__sub_8262D290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D294"))) PPC_WEAK_FUNC(sub_8262D294);
PPC_FUNC_IMPL(__imp__sub_8262D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D298"))) PPC_WEAK_FUNC(sub_8262D298);
PPC_FUNC_IMPL(__imp__sub_8262D298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D2B8"))) PPC_WEAK_FUNC(sub_8262D2B8);
PPC_FUNC_IMPL(__imp__sub_8262D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D2D8"))) PPC_WEAK_FUNC(sub_8262D2D8);
PPC_FUNC_IMPL(__imp__sub_8262D2D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ee088
	sub_828EE088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D2D8"))) PPC_WEAK_FUNC(sub_8262D2D8);
PPC_FUNC_IMPL(__imp__sub_8262D2D8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D2DC"))) PPC_WEAK_FUNC(sub_8262D2DC);
PPC_FUNC_IMPL(__imp__sub_8262D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D2E0"))) PPC_WEAK_FUNC(sub_8262D2E0);
PPC_FUNC_IMPL(__imp__sub_8262D2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ee088
	sub_828EE088(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262D320"))) PPC_WEAK_FUNC(sub_8262D320);
PPC_FUNC_IMPL(__imp__sub_8262D320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D324"))) PPC_WEAK_FUNC(sub_8262D324);
PPC_FUNC_IMPL(__imp__sub_8262D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D328"))) PPC_WEAK_FUNC(sub_8262D328);
PPC_FUNC_IMPL(__imp__sub_8262D328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828eeb88
	sub_828EEB88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262D36C"))) PPC_WEAK_FUNC(sub_8262D36C);
PPC_FUNC_IMPL(__imp__sub_8262D36C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D370"))) PPC_WEAK_FUNC(sub_8262D370);
PPC_FUNC_IMPL(__imp__sub_8262D370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8262D374:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8262d374
	if (cr6.eq) goto loc_8262D374;
}

__attribute__((alias("__imp__sub_8262D398"))) PPC_WEAK_FUNC(sub_8262D398);
PPC_FUNC_IMPL(__imp__sub_8262D398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D39C"))) PPC_WEAK_FUNC(sub_8262D39C);
PPC_FUNC_IMPL(__imp__sub_8262D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D3A0"))) PPC_WEAK_FUNC(sub_8262D3A0);
PPC_FUNC_IMPL(__imp__sub_8262D3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ec840
	sub_828EC840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D3A0"))) PPC_WEAK_FUNC(sub_8262D3A0);
PPC_FUNC_IMPL(__imp__sub_8262D3A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D3A4"))) PPC_WEAK_FUNC(sub_8262D3A4);
PPC_FUNC_IMPL(__imp__sub_8262D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D3A8"))) PPC_WEAK_FUNC(sub_8262D3A8);
PPC_FUNC_IMPL(__imp__sub_8262D3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8262D3AC:
	// lbzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d3c4
	if (!cr6.eq) goto loc_8262D3C4;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262d478
	if (cr6.eq) goto loc_8262D478;
loc_8262D3C4:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d3e4
	if (cr6.lt) goto loc_8262D3E4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d3e4
	if (cr6.gt) goto loc_8262D3E4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x8262d3e8
	goto loc_8262D3E8;
loc_8262D3E4:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8262D3E8:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d40c
	if (cr6.lt) goto loc_8262D40C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d40c
	if (cr6.gt) goto loc_8262D40C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d410
	goto loc_8262D410;
loc_8262D40C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D410:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x8262d480
	if (cr6.lt) goto loc_8262D480;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d43c
	if (cr6.lt) goto loc_8262D43C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d43c
	if (cr6.gt) goto loc_8262D43C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_8262D43C:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d45c
	if (cr6.lt) goto loc_8262D45C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d45c
	if (cr6.gt) goto loc_8262D45C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d460
	goto loc_8262D460;
loc_8262D45C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D460:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8262d488
	if (cr6.gt) goto loc_8262D488;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8262d3ac
	goto loc_8262D3AC;
loc_8262D478:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8262D480:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8262D488:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8262D48C"))) PPC_WEAK_FUNC(sub_8262D48C);
PPC_FUNC_IMPL(__imp__sub_8262D48C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D490"))) PPC_WEAK_FUNC(sub_8262D490);
PPC_FUNC_IMPL(__imp__sub_8262D490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8262D49C:
	// lbzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d4b4
	if (!cr6.eq) goto loc_8262D4B4;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8262d584
	if (cr6.eq) goto loc_8262D584;
loc_8262D4B4:
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x8262d584
	if (!cr6.lt) goto loc_8262D584;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d4dc
	if (cr6.lt) goto loc_8262D4DC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d4dc
	if (cr6.gt) goto loc_8262D4DC;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x8262d4e0
	goto loc_8262D4E0;
loc_8262D4DC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8262D4E0:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d504
	if (cr6.lt) goto loc_8262D504;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d504
	if (cr6.gt) goto loc_8262D504;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d508
	goto loc_8262D508;
loc_8262D504:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D508:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x8262d574
	if (cr6.lt) goto loc_8262D574;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d534
	if (cr6.lt) goto loc_8262D534;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d534
	if (cr6.gt) goto loc_8262D534;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_8262D534:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d554
	if (cr6.lt) goto loc_8262D554;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d554
	if (cr6.gt) goto loc_8262D554;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d558
	goto loc_8262D558;
loc_8262D554:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D558:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8262d57c
	if (cr6.gt) goto loc_8262D57C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x8262d49c
	goto loc_8262D49C;
loc_8262D574:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8262D57C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8262D584:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D58C"))) PPC_WEAK_FUNC(sub_8262D58C);
PPC_FUNC_IMPL(__imp__sub_8262D58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D590"))) PPC_WEAK_FUNC(sub_8262D590);
PPC_FUNC_IMPL(__imp__sub_8262D590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r11,r4,r3
	r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8262D594:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x8262d594
	if (!cr6.eq) goto loc_8262D594;
}

__attribute__((alias("__imp__sub_8262D5A8"))) PPC_WEAK_FUNC(sub_8262D5A8);
PPC_FUNC_IMPL(__imp__sub_8262D5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D5AC"))) PPC_WEAK_FUNC(sub_8262D5AC);
PPC_FUNC_IMPL(__imp__sub_8262D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D5B0"))) PPC_WEAK_FUNC(sub_8262D5B0);
PPC_FUNC_IMPL(__imp__sub_8262D5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8262D5B8"))) PPC_WEAK_FUNC(sub_8262D5B8);
PPC_FUNC_IMPL(__imp__sub_8262D5B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ecd48
	sub_828ECD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D5BC"))) PPC_WEAK_FUNC(sub_8262D5BC);
PPC_FUNC_IMPL(__imp__sub_8262D5BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D5C0"))) PPC_WEAK_FUNC(sub_8262D5C0);
PPC_FUNC_IMPL(__imp__sub_8262D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8262D5C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d5c4
	if (!cr6.eq) goto loc_8262D5C4;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
}

__attribute__((alias("__imp__sub_8262D5E0"))) PPC_WEAK_FUNC(sub_8262D5E0);
PPC_FUNC_IMPL(__imp__sub_8262D5E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D5E4"))) PPC_WEAK_FUNC(sub_8262D5E4);
PPC_FUNC_IMPL(__imp__sub_8262D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D5E8"))) PPC_WEAK_FUNC(sub_8262D5E8);
PPC_FUNC_IMPL(__imp__sub_8262D5E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8262D5F0"))) PPC_WEAK_FUNC(sub_8262D5F0);
PPC_FUNC_IMPL(__imp__sub_8262D5F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ecc38
	sub_828ECC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D5F4"))) PPC_WEAK_FUNC(sub_8262D5F4);
PPC_FUNC_IMPL(__imp__sub_8262D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D5F8"))) PPC_WEAK_FUNC(sub_8262D5F8);
PPC_FUNC_IMPL(__imp__sub_8262D5F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828eecf8
	sub_828EECF8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8262D61C"))) PPC_WEAK_FUNC(sub_8262D61C);
PPC_FUNC_IMPL(__imp__sub_8262D61C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D620"))) PPC_WEAK_FUNC(sub_8262D620);
PPC_FUNC_IMPL(__imp__sub_8262D620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb9d8
	sub_828EB9D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D620"))) PPC_WEAK_FUNC(sub_8262D620);
PPC_FUNC_IMPL(__imp__sub_8262D620) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D624"))) PPC_WEAK_FUNC(sub_8262D624);
PPC_FUNC_IMPL(__imp__sub_8262D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D628"))) PPC_WEAK_FUNC(sub_8262D628);
PPC_FUNC_IMPL(__imp__sub_8262D628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb800
	sub_828EB800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D628"))) PPC_WEAK_FUNC(sub_8262D628);
PPC_FUNC_IMPL(__imp__sub_8262D628) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D62C"))) PPC_WEAK_FUNC(sub_8262D62C);
PPC_FUNC_IMPL(__imp__sub_8262D62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D630"))) PPC_WEAK_FUNC(sub_8262D630);
PPC_FUNC_IMPL(__imp__sub_8262D630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ee960
	sub_828EE960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D630"))) PPC_WEAK_FUNC(sub_8262D630);
PPC_FUNC_IMPL(__imp__sub_8262D630) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8262D634"))) PPC_WEAK_FUNC(sub_8262D634);
PPC_FUNC_IMPL(__imp__sub_8262D634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D638"))) PPC_WEAK_FUNC(sub_8262D638);
PPC_FUNC_IMPL(__imp__sub_8262D638) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8262D650:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d650
	if (!cr6.eq) goto loc_8262D650;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82627dc0
	sub_82627DC0(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - r31.s64;
loc_8262D680:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x8262d680
	if (!cr6.eq) goto loc_8262D680;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8262D6A4"))) PPC_WEAK_FUNC(sub_8262D6A4);
PPC_FUNC_IMPL(__imp__sub_8262D6A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D6A8"))) PPC_WEAK_FUNC(sub_8262D6A8);
PPC_FUNC_IMPL(__imp__sub_8262D6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8262D6B4"))) PPC_WEAK_FUNC(sub_8262D6B4);
PPC_FUNC_IMPL(__imp__sub_8262D6B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82627e18
	sub_82627E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D6B8"))) PPC_WEAK_FUNC(sub_8262D6B8);
PPC_FUNC_IMPL(__imp__sub_8262D6B8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8262D6CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8262d6cc
	if (!cr6.eq) goto loc_8262D6CC;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// ble cr6,0x8262d6f4
	if (!cr6.gt) goto loc_8262D6F4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8262D6F4:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82627dc0
	sub_82627DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8262d718
	if (cr6.eq) goto loc_8262D718;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
loc_8262D718:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8262D728"))) PPC_WEAK_FUNC(sub_8262D728);
PPC_FUNC_IMPL(__imp__sub_8262D728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8262D72C"))) PPC_WEAK_FUNC(sub_8262D72C);
PPC_FUNC_IMPL(__imp__sub_8262D72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D730"))) PPC_WEAK_FUNC(sub_8262D730);
PPC_FUNC_IMPL(__imp__sub_8262D730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8262D740:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x8262d764
	if (cr6.lt) goto loc_8262D764;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x8262d764
	if (cr6.gt) goto loc_8262D764;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d768
	goto loc_8262D768;
loc_8262D764:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D768:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262d740
	if (!cr6.eq) goto loc_8262D740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D77C"))) PPC_WEAK_FUNC(sub_8262D77C);
PPC_FUNC_IMPL(__imp__sub_8262D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D780"))) PPC_WEAK_FUNC(sub_8262D780);
PPC_FUNC_IMPL(__imp__sub_8262D780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8262D790:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x8262d7b4
	if (cr6.lt) goto loc_8262D7B4;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x8262d7b4
	if (cr6.gt) goto loc_8262D7B4;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x8262d7b8
	goto loc_8262D7B8;
loc_8262D7B4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8262D7B8:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8262d790
	if (!cr6.eq) goto loc_8262D790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8262D7CC"))) PPC_WEAK_FUNC(sub_8262D7CC);
PPC_FUNC_IMPL(__imp__sub_8262D7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8262D7D0"))) PPC_WEAK_FUNC(sub_8262D7D0);
PPC_FUNC_IMPL(__imp__sub_8262D7D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262D7D0"))) PPC_WEAK_FUNC(sub_8262D7D0);
PPC_FUNC_IMPL(__imp__sub_8262D7D0) {
	PPC_FUNC_PROLOGUE();
}

