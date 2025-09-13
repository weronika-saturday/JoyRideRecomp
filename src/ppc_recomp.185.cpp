#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826306AC"))) PPC_WEAK_FUNC(sub_826306AC);
PPC_FUNC_IMPL(__imp__sub_826306AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826306B0"))) PPC_WEAK_FUNC(sub_826306B0);
PPC_FUNC_IMPL(__imp__sub_826306B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82633548
	sub_82633548(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82630648
	sub_82630648(ctx, base);
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

__attribute__((alias("__imp__sub_826306FC"))) PPC_WEAK_FUNC(sub_826306FC);
PPC_FUNC_IMPL(__imp__sub_826306FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630700"))) PPC_WEAK_FUNC(sub_82630700);
PPC_FUNC_IMPL(__imp__sub_82630700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// subf r7,r5,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r5.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,7520
	ctx.r10.s64 = ctx.r10.s64 + 7520;
loc_8263072C:
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
	// stvx128 v4,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x8263072c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263072C;
	// li r11,48
	r11.s64 = 48;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r5,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v7,v13,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v6,v12,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v5,v11,v8
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v4,v7,v0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v3,v5,v6
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// stvx128 v2,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82630794"))) PPC_WEAK_FUNC(sub_82630794);
PPC_FUNC_IMPL(__imp__sub_82630794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630798"))) PPC_WEAK_FUNC(sub_82630798);
PPC_FUNC_IMPL(__imp__sub_82630798) {
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
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r3,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630648
	sub_82630648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826307F8"))) PPC_WEAK_FUNC(sub_826307F8);
PPC_FUNC_IMPL(__imp__sub_826307F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826307FC"))) PPC_WEAK_FUNC(sub_826307FC);
PPC_FUNC_IMPL(__imp__sub_826307FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630800"))) PPC_WEAK_FUNC(sub_82630800);
PPC_FUNC_IMPL(__imp__sub_82630800) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826305c8
	sub_826305C8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82630648
	sub_82630648(ctx, base);
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

__attribute__((alias("__imp__sub_8263084C"))) PPC_WEAK_FUNC(sub_8263084C);
PPC_FUNC_IMPL(__imp__sub_8263084C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630850"))) PPC_WEAK_FUNC(sub_82630850);
PPC_FUNC_IMPL(__imp__sub_82630850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630888"))) PPC_WEAK_FUNC(sub_82630888);
PPC_FUNC_IMPL(__imp__sub_82630888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263088C"))) PPC_WEAK_FUNC(sub_8263088C);
PPC_FUNC_IMPL(__imp__sub_8263088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630890"))) PPC_WEAK_FUNC(sub_82630890);
PPC_FUNC_IMPL(__imp__sub_82630890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826308C8"))) PPC_WEAK_FUNC(sub_826308C8);
PPC_FUNC_IMPL(__imp__sub_826308C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826308CC"))) PPC_WEAK_FUNC(sub_826308CC);
PPC_FUNC_IMPL(__imp__sub_826308CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826308D0"))) PPC_WEAK_FUNC(sub_826308D0);
PPC_FUNC_IMPL(__imp__sub_826308D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826308E4"))) PPC_WEAK_FUNC(sub_826308E4);
PPC_FUNC_IMPL(__imp__sub_826308E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826308E8"))) PPC_WEAK_FUNC(sub_826308E8);
PPC_FUNC_IMPL(__imp__sub_826308E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82630928
	if (!cr6.eq) goto loc_82630928;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x828e9458
	return;
loc_82630928:
	// mullw. r30,r29,r6
	r30.s64 = int64_t(r29.s32) * int64_t(ctx.r6.s32);
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// srawi r11,r30,9
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1FF) != 0);
	r11.s64 = r30.s32 >> 9;
	// li r28,512
	r28.s64 = 512;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// divw r31,r28,r29
	r31.s32 = r28.s32 / r29.s32;
	// subf r27,r9,r30
	r27.s64 = r30.s64 - ctx.r9.s64;
	// twllei r29,0
	if (r29.u32 <= 0) __builtin_debugtrap();
	// rotlwi r11,r27,1
	r11.u64 = __builtin_rotateleft32(r27.u32, 1);
	// divw r25,r27,r29
	r25.s32 = r27.s32 / r29.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// twllei r29,0
	if (r29.u32 <= 0) __builtin_debugtrap();
	// andc r7,r29,r8
	ctx.r7.u64 = r29.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// ble 0x82630a80
	if (!cr0.gt) goto loc_82630A80;
loc_82630968:
	// cmpwi cr6,r30,512
	cr6.compare<int32_t>(r30.s32, 512, xer);
	// bge cr6,0x82630978
	if (!cr6.lt) goto loc_82630978;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82630978:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// beq cr6,0x82630a30
	if (cr6.eq) goto loc_82630A30;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x826309f8
	if (cr6.eq) goto loc_826309F8;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x82630a58
	if (!cr6.eq) goto loc_82630A58;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82630a58
	if (!cr6.gt) goto loc_82630A58;
	// addi r11,r1,76
	r11.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_826309B0:
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 11);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// stb r9,11(r11)
	PPC_STORE_U8(r11.u32 + 11, ctx.r9.u8);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r8,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r8.u8);
	// stb r7,10(r11)
	PPC_STORE_U8(r11.u32 + 10, ctx.r7.u8);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// stb r6,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r6.u8);
	// stb r5,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r5.u8);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// stb r4,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r4.u8);
	// stbu r3,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	r11.u32 = ea;
	// bdnz 0x826309b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826309B0;
	// b 0x82630a58
	goto loc_82630A58;
loc_826309F8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82630a58
	if (!cr6.gt) goto loc_82630A58;
	// addi r11,r1,78
	r11.s64 = ctx.r1.s64 + 78;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_82630A08:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r7,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r7.u8);
	// stbu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	r11.u32 = ea;
	// bdnz 0x82630a08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82630A08;
	// b 0x82630a58
	goto loc_82630A58;
loc_82630A30:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82630a58
	if (!cr6.gt) goto loc_82630A58;
	// mtctr r31
	ctr.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82630A44:
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// stbu r9,2(r11)
	ea = 2 + r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// bdnz 0x82630a44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82630A44;
loc_82630A58:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r30,r28,r30
	r30.s64 = r30.s64 - r28.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// bgt 0x82630968
	if (cr0.gt) goto loc_82630968;
loc_82630A80:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
}

__attribute__((alias("__imp__sub_82630A84"))) PPC_WEAK_FUNC(sub_82630A84);
PPC_FUNC_IMPL(__imp__sub_82630A84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82630A88"))) PPC_WEAK_FUNC(sub_82630A88);
PPC_FUNC_IMPL(__imp__sub_82630A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_82630A98"))) PPC_WEAK_FUNC(sub_82630A98);
PPC_FUNC_IMPL(__imp__sub_82630A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82630A9C"))) PPC_WEAK_FUNC(sub_82630A9C);
PPC_FUNC_IMPL(__imp__sub_82630A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630AA0"))) PPC_WEAK_FUNC(sub_82630AA0);
PPC_FUNC_IMPL(__imp__sub_82630AA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630AA8"))) PPC_WEAK_FUNC(sub_82630AA8);
PPC_FUNC_IMPL(__imp__sub_82630AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630AB4"))) PPC_WEAK_FUNC(sub_82630AB4);
PPC_FUNC_IMPL(__imp__sub_82630AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630AB8"))) PPC_WEAK_FUNC(sub_82630AB8);
PPC_FUNC_IMPL(__imp__sub_82630AB8) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82630AF4"))) PPC_WEAK_FUNC(sub_82630AF4);
PPC_FUNC_IMPL(__imp__sub_82630AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630AF8"))) PPC_WEAK_FUNC(sub_82630AF8);
PPC_FUNC_IMPL(__imp__sub_82630AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
}

__attribute__((alias("__imp__sub_82630AFC"))) PPC_WEAK_FUNC(sub_82630AFC);
PPC_FUNC_IMPL(__imp__sub_82630AFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630B00"))) PPC_WEAK_FUNC(sub_82630B00);
PPC_FUNC_IMPL(__imp__sub_82630B00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_82630B44"))) PPC_WEAK_FUNC(sub_82630B44);
PPC_FUNC_IMPL(__imp__sub_82630B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630B48"))) PPC_WEAK_FUNC(sub_82630B48);
PPC_FUNC_IMPL(__imp__sub_82630B48) {
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
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,8560
	ctx.r9.s64 = r11.s64 + 8560;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
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

__attribute__((alias("__imp__sub_82630B94"))) PPC_WEAK_FUNC(sub_82630B94);
PPC_FUNC_IMPL(__imp__sub_82630B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630B98"))) PPC_WEAK_FUNC(sub_82630B98);
PPC_FUNC_IMPL(__imp__sub_82630B98) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,8560
	ctx.r9.s64 = r11.s64 + 8560;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-12048(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12048);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82630BF4"))) PPC_WEAK_FUNC(sub_82630BF4);
PPC_FUNC_IMPL(__imp__sub_82630BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630BF8"))) PPC_WEAK_FUNC(sub_82630BF8);
PPC_FUNC_IMPL(__imp__sub_82630BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stb r6,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r6.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,8560
	ctx.r9.s64 = r11.s64 + 8560;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826339a8
	sub_826339A8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82630C74"))) PPC_WEAK_FUNC(sub_82630C74);
PPC_FUNC_IMPL(__imp__sub_82630C74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82630C78"))) PPC_WEAK_FUNC(sub_82630C78);
PPC_FUNC_IMPL(__imp__sub_82630C78) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,8560
	ctx.r10.s64 = r11.s64 + 8560;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-13048
	ctx.r8.s64 = ctx.r9.s64 + -13048;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82630CBC"))) PPC_WEAK_FUNC(sub_82630CBC);
PPC_FUNC_IMPL(__imp__sub_82630CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630CC0"))) PPC_WEAK_FUNC(sub_82630CC0);
PPC_FUNC_IMPL(__imp__sub_82630CC0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630CEC"))) PPC_WEAK_FUNC(sub_82630CEC);
PPC_FUNC_IMPL(__imp__sub_82630CEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630CF0"))) PPC_WEAK_FUNC(sub_82630CF0);
PPC_FUNC_IMPL(__imp__sub_82630CF0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630D1C"))) PPC_WEAK_FUNC(sub_82630D1C);
PPC_FUNC_IMPL(__imp__sub_82630D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630D20"))) PPC_WEAK_FUNC(sub_82630D20);
PPC_FUNC_IMPL(__imp__sub_82630D20) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630D4C"))) PPC_WEAK_FUNC(sub_82630D4C);
PPC_FUNC_IMPL(__imp__sub_82630D4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630D50"))) PPC_WEAK_FUNC(sub_82630D50);
PPC_FUNC_IMPL(__imp__sub_82630D50) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630D7C"))) PPC_WEAK_FUNC(sub_82630D7C);
PPC_FUNC_IMPL(__imp__sub_82630D7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630D80"))) PPC_WEAK_FUNC(sub_82630D80);
PPC_FUNC_IMPL(__imp__sub_82630D80) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630DAC"))) PPC_WEAK_FUNC(sub_82630DAC);
PPC_FUNC_IMPL(__imp__sub_82630DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630DB0"))) PPC_WEAK_FUNC(sub_82630DB0);
PPC_FUNC_IMPL(__imp__sub_82630DB0) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630DDC"))) PPC_WEAK_FUNC(sub_82630DDC);
PPC_FUNC_IMPL(__imp__sub_82630DDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630DE0"))) PPC_WEAK_FUNC(sub_82630DE0);
PPC_FUNC_IMPL(__imp__sub_82630DE0) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630E0C"))) PPC_WEAK_FUNC(sub_82630E0C);
PPC_FUNC_IMPL(__imp__sub_82630E0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630E10"))) PPC_WEAK_FUNC(sub_82630E10);
PPC_FUNC_IMPL(__imp__sub_82630E10) {
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
	// stfd f1,120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f1.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x826308e8
	sub_826308E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82630E3C"))) PPC_WEAK_FUNC(sub_82630E3C);
PPC_FUNC_IMPL(__imp__sub_82630E3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82630E40"))) PPC_WEAK_FUNC(sub_82630E40);
PPC_FUNC_IMPL(__imp__sub_82630E40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82630e78
	if (!cr6.eq) goto loc_82630E78;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x828e9464
	return;
loc_82630E78:
	// srawi r11,r5,9
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	r11.s64 = ctx.r5.s32 >> 9;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// li r31,512
	r31.s64 = 512;
	// subf r27,r9,r5
	r27.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82630ee0
	if (!cr6.gt) goto loc_82630EE0;
loc_82630E9C:
	// cmpwi cr6,r30,512
	cr6.compare<int32_t>(r30.s32, 512, xer);
	// bge cr6,0x82630ea8
	if (!cr6.lt) goto loc_82630EA8;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82630EA8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bgt 0x82630e9c
	if (cr0.gt) goto loc_82630E9C;
loc_82630EE0:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
}

__attribute__((alias("__imp__sub_82630EE4"))) PPC_WEAK_FUNC(sub_82630EE4);
PPC_FUNC_IMPL(__imp__sub_82630EE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82630EE8"))) PPC_WEAK_FUNC(sub_82630EE8);
PPC_FUNC_IMPL(__imp__sub_82630EE8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82630f20
	if (!cr6.eq) goto loc_82630F20;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x828e9464
	return;
loc_82630F20:
	// srawi r11,r5,9
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	r11.s64 = ctx.r5.s32 >> 9;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// li r31,512
	r31.s64 = 512;
	// subf r27,r9,r5
	r27.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82630f88
	if (!cr6.gt) goto loc_82630F88;
loc_82630F44:
	// cmpwi cr6,r30,512
	cr6.compare<int32_t>(r30.s32, 512, xer);
	// bge cr6,0x82630f50
	if (!cr6.lt) goto loc_82630F50;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82630F50:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bgt 0x82630f44
	if (cr0.gt) goto loc_82630F44;
loc_82630F88:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
}

__attribute__((alias("__imp__sub_82630F8C"))) PPC_WEAK_FUNC(sub_82630F8C);
PPC_FUNC_IMPL(__imp__sub_82630F8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82630F90"))) PPC_WEAK_FUNC(sub_82630F90);
PPC_FUNC_IMPL(__imp__sub_82630F90) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630F9C"))) PPC_WEAK_FUNC(sub_82630F9C);
PPC_FUNC_IMPL(__imp__sub_82630F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FA0"))) PPC_WEAK_FUNC(sub_82630FA0);
PPC_FUNC_IMPL(__imp__sub_82630FA0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FAC"))) PPC_WEAK_FUNC(sub_82630FAC);
PPC_FUNC_IMPL(__imp__sub_82630FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FB0"))) PPC_WEAK_FUNC(sub_82630FB0);
PPC_FUNC_IMPL(__imp__sub_82630FB0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FBC"))) PPC_WEAK_FUNC(sub_82630FBC);
PPC_FUNC_IMPL(__imp__sub_82630FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FC0"))) PPC_WEAK_FUNC(sub_82630FC0);
PPC_FUNC_IMPL(__imp__sub_82630FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FCC"))) PPC_WEAK_FUNC(sub_82630FCC);
PPC_FUNC_IMPL(__imp__sub_82630FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FD0"))) PPC_WEAK_FUNC(sub_82630FD0);
PPC_FUNC_IMPL(__imp__sub_82630FD0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FDC"))) PPC_WEAK_FUNC(sub_82630FDC);
PPC_FUNC_IMPL(__imp__sub_82630FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FE0"))) PPC_WEAK_FUNC(sub_82630FE0);
PPC_FUNC_IMPL(__imp__sub_82630FE0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FEC"))) PPC_WEAK_FUNC(sub_82630FEC);
PPC_FUNC_IMPL(__imp__sub_82630FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82630FF0"))) PPC_WEAK_FUNC(sub_82630FF0);
PPC_FUNC_IMPL(__imp__sub_82630FF0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82630FFC"))) PPC_WEAK_FUNC(sub_82630FFC);
PPC_FUNC_IMPL(__imp__sub_82630FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631000"))) PPC_WEAK_FUNC(sub_82631000);
PPC_FUNC_IMPL(__imp__sub_82631000) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x826308e8
	sub_826308E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263100C"))) PPC_WEAK_FUNC(sub_8263100C);
PPC_FUNC_IMPL(__imp__sub_8263100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631010"))) PPC_WEAK_FUNC(sub_82631010);
PPC_FUNC_IMPL(__imp__sub_82631010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// li r31,1
	r31.s64 = 1;
	// addi r10,r11,8560
	ctx.r10.s64 = r11.s64 + 8560;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r31.u16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r31.u16);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r5,r7,8576
	ctx.r5.s64 = ctx.r7.s64 + 8576;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// bl 0x82631098
	sub_82631098(ctx, base);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82631094"))) PPC_WEAK_FUNC(sub_82631094);
PPC_FUNC_IMPL(__imp__sub_82631094) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82631098"))) PPC_WEAK_FUNC(sub_82631098);
PPC_FUNC_IMPL(__imp__sub_82631098) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x826310ec
	if (!cr6.lt) goto loc_826310EC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826310dc
	if (cr6.lt) goto loc_826310DC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_826310DC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826310EC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82631104"))) PPC_WEAK_FUNC(sub_82631104);
PPC_FUNC_IMPL(__imp__sub_82631104) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82631108"))) PPC_WEAK_FUNC(sub_82631108);
PPC_FUNC_IMPL(__imp__sub_82631108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631114"))) PPC_WEAK_FUNC(sub_82631114);
PPC_FUNC_IMPL(__imp__sub_82631114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631118"))) PPC_WEAK_FUNC(sub_82631118);
PPC_FUNC_IMPL(__imp__sub_82631118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11996
	ctx.r3.s64 = r11.s64 + -11996;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631124"))) PPC_WEAK_FUNC(sub_82631124);
PPC_FUNC_IMPL(__imp__sub_82631124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631128"))) PPC_WEAK_FUNC(sub_82631128);
PPC_FUNC_IMPL(__imp__sub_82631128) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,8560
	ctx.r10.s64 = r11.s64 + 8560;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,-13048
	ctx.r7.s64 = ctx.r9.s64 + -13048;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82631190
	if (cr6.eq) goto loc_82631190;
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
loc_82631190:
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

__attribute__((alias("__imp__sub_826311A8"))) PPC_WEAK_FUNC(sub_826311A8);
PPC_FUNC_IMPL(__imp__sub_826311A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826311AC"))) PPC_WEAK_FUNC(sub_826311AC);
PPC_FUNC_IMPL(__imp__sub_826311AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826311B0"))) PPC_WEAK_FUNC(sub_826311B0);
PPC_FUNC_IMPL(__imp__sub_826311B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82631200
	if (!cr6.eq) goto loc_82631200;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
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
loc_82631200:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82631238
	if (cr6.eq) goto loc_82631238;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82631238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82631240"))) PPC_WEAK_FUNC(sub_82631240);
PPC_FUNC_IMPL(__imp__sub_82631240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82631244"))) PPC_WEAK_FUNC(sub_82631244);
PPC_FUNC_IMPL(__imp__sub_82631244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631248"))) PPC_WEAK_FUNC(sub_82631248);
PPC_FUNC_IMPL(__imp__sub_82631248) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,8576
	ctx.r9.s64 = r11.s64 + 8576;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82631290
	if (!cr6.eq) goto loc_82631290;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82631290
	if (cr6.eq) goto loc_82631290;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826311b0
	sub_826311B0(ctx, base);
loc_82631290:
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
	// beq cr6,0x826312c8
	if (cr6.eq) goto loc_826312C8;
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
loc_826312C8:
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

__attribute__((alias("__imp__sub_826312E0"))) PPC_WEAK_FUNC(sub_826312E0);
PPC_FUNC_IMPL(__imp__sub_826312E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826312E4"))) PPC_WEAK_FUNC(sub_826312E4);
PPC_FUNC_IMPL(__imp__sub_826312E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826312E8"))) PPC_WEAK_FUNC(sub_826312E8);
PPC_FUNC_IMPL(__imp__sub_826312E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263131c
	if (!cr6.gt) goto loc_8263131C;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82631300:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x82631324
	if (cr6.eq) goto loc_82631324;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82631300
	if (cr6.lt) goto loc_82631300;
loc_8263131C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82631324:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82631338"))) PPC_WEAK_FUNC(sub_82631338);
PPC_FUNC_IMPL(__imp__sub_82631338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263133C"))) PPC_WEAK_FUNC(sub_8263133C);
PPC_FUNC_IMPL(__imp__sub_8263133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631340"))) PPC_WEAK_FUNC(sub_82631340);
PPC_FUNC_IMPL(__imp__sub_82631340) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263139c
	if (!cr6.gt) goto loc_8263139C;
	// li r30,0
	r30.s64 = 0;
loc_8263136C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8262d3a8
	sub_8262D3A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826313a8
	if (cr6.eq) goto loc_826313A8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8263136c
	if (cr6.lt) goto loc_8263136C;
loc_8263139C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826313A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826313C0"))) PPC_WEAK_FUNC(sub_826313C0);
PPC_FUNC_IMPL(__imp__sub_826313C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826313C4"))) PPC_WEAK_FUNC(sub_826313C4);
PPC_FUNC_IMPL(__imp__sub_826313C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826313C8"))) PPC_WEAK_FUNC(sub_826313C8);
PPC_FUNC_IMPL(__imp__sub_826313C8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82630b48
	sub_82630B48(ctx, base);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
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
	// lwz r27,8(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8263145c
	if (!cr6.gt) goto loc_8263145C;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82631420:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r29,r30,r11
	r29.u64 = r30.u64 + r11.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630a88
	sub_82630A88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82630d20
	sub_82630D20(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82631420
	if (!cr0.eq) goto loc_82631420;
loc_8263145C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630d20
	sub_82630D20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82630c78
	sub_82630C78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82631474"))) PPC_WEAK_FUNC(sub_82631474);
PPC_FUNC_IMPL(__imp__sub_82631474) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82631478"))) PPC_WEAK_FUNC(sub_82631478);
PPC_FUNC_IMPL(__imp__sub_82631478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82631488
	if (cr6.eq) goto loc_82631488;
	// b 0x8262bf30
	sub_8262BF30(ctx, base);
	return;
loc_82631488:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631490"))) PPC_WEAK_FUNC(sub_82631490);
PPC_FUNC_IMPL(__imp__sub_82631490) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826316c0
	sub_826316C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826313c8
	sub_826313C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826316b0
	sub_826316B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826314D4"))) PPC_WEAK_FUNC(sub_826314D4);
PPC_FUNC_IMPL(__imp__sub_826314D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826314D8"))) PPC_WEAK_FUNC(sub_826314D8);
PPC_FUNC_IMPL(__imp__sub_826314D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addic. r25,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r25.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82631584
	if (cr0.lt) goto loc_82631584;
	// rlwinm r27,r25,3,0,28
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
loc_8263150C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82631584
	if (cr6.eq) goto loc_82631584;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r10,r30,r29
	ctx.r10.u64 = r30.u64 & r29.u64;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82631578
	if (!cr6.eq) goto loc_82631578;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
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
	// bne cr6,0x82631558
	if (!cr6.eq) goto loc_82631558;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82631558:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// andc r29,r29,r30
	r29.u64 = r29.u64 & ~r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82631578:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,-8
	r27.s64 = r27.s64 + -8;
	// bge 0x8263150c
	if (!cr0.lt) goto loc_8263150C;
loc_82631584:
	// addic r11,r29,-1
	xer.ca = r29.u32 > 0;
	r11.s64 = r29.s64 + -1;
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// subfe r3,r11,r29
	temp.u8 = (~r11.u32 + r29.u32 < ~r11.u32) | (~r11.u32 + r29.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82631594"))) PPC_WEAK_FUNC(sub_82631594);
PPC_FUNC_IMPL(__imp__sub_82631594) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82631598"))) PPC_WEAK_FUNC(sub_82631598);
PPC_FUNC_IMPL(__imp__sub_82631598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// lis r10,-4680
	ctx.r10.s64 = -306708480;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r11,r10,33568
	r11.u64 = ctx.r10.u64 | 33568;
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x826315b4
	if (cr6.eq) goto loc_826315B4;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_826315B4:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826315c8
	if (cr6.eq) goto loc_826315C8;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_826315C8:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826315dc
	if (cr6.eq) goto loc_826315DC;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_826315DC:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826315f0
	if (cr6.eq) goto loc_826315F0;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_826315F0:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82631604
	if (cr6.eq) goto loc_82631604;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82631604:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82631618
	if (cr6.eq) goto loc_82631618;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82631618:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8263162c
	if (cr6.eq) goto loc_8263162C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_8263162C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82631644
	if (cr6.eq) goto loc_82631644;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 ^ r11.u64;
	// blr 
	return;
loc_82631644:
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
}

__attribute__((alias("__imp__sub_82631648"))) PPC_WEAK_FUNC(sub_82631648);
PPC_FUNC_IMPL(__imp__sub_82631648) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263164C"))) PPC_WEAK_FUNC(sub_8263164C);
PPC_FUNC_IMPL(__imp__sub_8263164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631650"))) PPC_WEAK_FUNC(sub_82631650);
PPC_FUNC_IMPL(__imp__sub_82631650) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8263169c
	if (!cr6.gt) goto loc_8263169C;
loc_82631678:
	// lbzx r11,r31,r28
	r11.u64 = PPC_LOAD_U8(r31.u32 + r28.u32);
	// xor r10,r11,r30
	ctx.r10.u64 = r11.u64 ^ r30.u64;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82631598
	sub_82631598(ctx, base);
	// rlwinm r9,r30,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// xor r30,r3,r9
	r30.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82631678
	if (cr6.lt) goto loc_82631678;
loc_8263169C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826316A8"))) PPC_WEAK_FUNC(sub_826316A8);
PPC_FUNC_IMPL(__imp__sub_826316A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826316AC"))) PPC_WEAK_FUNC(sub_826316AC);
PPC_FUNC_IMPL(__imp__sub_826316AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826316B0"))) PPC_WEAK_FUNC(sub_826316B0);
PPC_FUNC_IMPL(__imp__sub_826316B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// not r3,r11
	ctx.r3.u64 = ~r11.u64;
}

__attribute__((alias("__imp__sub_826316B8"))) PPC_WEAK_FUNC(sub_826316B8);
PPC_FUNC_IMPL(__imp__sub_826316B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826316BC"))) PPC_WEAK_FUNC(sub_826316BC);
PPC_FUNC_IMPL(__imp__sub_826316BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826316C0"))) PPC_WEAK_FUNC(sub_826316C0);
PPC_FUNC_IMPL(__imp__sub_826316C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,8620
	ctx.r9.s64 = r11.s64 + 8620;
	// not r8,r4
	ctx.r8.u64 = ~ctx.r4.u64;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_826316DC"))) PPC_WEAK_FUNC(sub_826316DC);
PPC_FUNC_IMPL(__imp__sub_826316DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826316E0"))) PPC_WEAK_FUNC(sub_826316E0);
PPC_FUNC_IMPL(__imp__sub_826316E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826316EC"))) PPC_WEAK_FUNC(sub_826316EC);
PPC_FUNC_IMPL(__imp__sub_826316EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826316F0"))) PPC_WEAK_FUNC(sub_826316F0);
PPC_FUNC_IMPL(__imp__sub_826316F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82631708
	if (cr6.lt) goto loc_82631708;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82631708
	if (cr6.gt) goto loc_82631708;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82631708:
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631710"))) PPC_WEAK_FUNC(sub_82631710);
PPC_FUNC_IMPL(__imp__sub_82631710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82631728
	if (cr6.lt) goto loc_82631728;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82631728
	if (cr6.gt) goto loc_82631728;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
loc_82631728:
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631730"))) PPC_WEAK_FUNC(sub_82631730);
PPC_FUNC_IMPL(__imp__sub_82631730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631734"))) PPC_WEAK_FUNC(sub_82631734);
PPC_FUNC_IMPL(__imp__sub_82631734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631738"))) PPC_WEAK_FUNC(sub_82631738);
PPC_FUNC_IMPL(__imp__sub_82631738) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r3,r11,r5
	ctx.r3.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x8262d620
	sub_8262D620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263177c
	if (cr6.eq) goto loc_8263177C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8263177C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82631790"))) PPC_WEAK_FUNC(sub_82631790);
PPC_FUNC_IMPL(__imp__sub_82631790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631794"))) PPC_WEAK_FUNC(sub_82631794);
PPC_FUNC_IMPL(__imp__sub_82631794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631798"))) PPC_WEAK_FUNC(sub_82631798);
PPC_FUNC_IMPL(__imp__sub_82631798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82631838
	if (cr6.eq) goto loc_82631838;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
loc_826317B4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8263181c
	if (cr6.eq) goto loc_8263181C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_826317C8:
	// lbzx r11,r8,r9
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x826317e4
	if (cr6.lt) goto loc_826317E4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x826317e4
	if (cr6.gt) goto loc_826317E4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_826317E4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x826317fc
	if (cr6.lt) goto loc_826317FC;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x826317fc
	if (cr6.gt) goto loc_826317FC;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_826317FC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8263181c
	if (!cr6.eq) goto loc_8263181C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826317c8
	if (!cr6.eq) goto loc_826317C8;
loc_8263181C:
	// lbzx r11,r9,r4
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r11,r3,r7
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826317b4
	if (!cr6.eq) goto loc_826317B4;
loc_82631838:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631840"))) PPC_WEAK_FUNC(sub_82631840);
PPC_FUNC_IMPL(__imp__sub_82631840) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// bl 0x8262d620
	sub_8262D620(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263188c
	if (cr6.eq) goto loc_8263188C;
loc_8263186C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// subf r29,r10,r11
	r29.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8262d620
	sub_8262D620(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8263186c
	if (!cr6.eq) goto loc_8263186C;
loc_8263188C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82631894"))) PPC_WEAK_FUNC(sub_82631894);
PPC_FUNC_IMPL(__imp__sub_82631894) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82631898"))) PPC_WEAK_FUNC(sub_82631898);
PPC_FUNC_IMPL(__imp__sub_82631898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826318dc
	if (cr6.eq) goto loc_826318DC;
loc_826318AC:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826318dc
	if (cr6.eq) goto loc_826318DC;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bne cr6,0x826318ec
	if (!cr6.eq) goto loc_826318EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826318ac
	if (!cr6.eq) goto loc_826318AC;
loc_826318DC:
	// lbzx r11,r11,r4
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r4.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_826318EC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826318F0"))) PPC_WEAK_FUNC(sub_826318F0);
PPC_FUNC_IMPL(__imp__sub_826318F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826318F4"))) PPC_WEAK_FUNC(sub_826318F4);
PPC_FUNC_IMPL(__imp__sub_826318F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826318F8"))) PPC_WEAK_FUNC(sub_826318F8);
PPC_FUNC_IMPL(__imp__sub_826318F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82631970
	if (cr6.eq) goto loc_82631970;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_8263190C:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82631970
	if (cr6.eq) goto loc_82631970;
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82631934
	if (cr6.lt) goto loc_82631934;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x82631938
	if (!cr6.gt) goto loc_82631938;
loc_82631934:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82631938:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82631950
	if (cr6.lt) goto loc_82631950;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82631950
	if (cr6.gt) goto loc_82631950;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82631950:
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82631978
	if (!cr6.eq) goto loc_82631978;
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263190c
	if (!cr6.eq) goto loc_8263190C;
loc_82631970:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82631978:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631980"))) PPC_WEAK_FUNC(sub_82631980);
PPC_FUNC_IMPL(__imp__sub_82631980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// blt cr6,0x82631998
	if (cr6.lt) goto loc_82631998;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82631998:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x826319c4
	if (!cr6.lt) goto loc_826319C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_826319A8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x826319cc
	if (cr6.eq) goto loc_826319CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x826319a8
	if (cr6.lt) goto loc_826319A8;
loc_826319C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_826319CC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_826319D0"))) PPC_WEAK_FUNC(sub_826319D0);
PPC_FUNC_IMPL(__imp__sub_826319D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826319D4"))) PPC_WEAK_FUNC(sub_826319D4);
PPC_FUNC_IMPL(__imp__sub_826319D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826319D8"))) PPC_WEAK_FUNC(sub_826319D8);
PPC_FUNC_IMPL(__imp__sub_826319D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x826319ec
	if (!cr6.gt) goto loc_826319EC;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_826319EC:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82631a1c
	if (cr6.lt) goto loc_82631A1C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_82631A00:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x82631a24
	if (cr6.eq) goto loc_82631A24;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x82631a00
	if (!cr6.lt) goto loc_82631A00;
loc_82631A1C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82631A24:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631A2C"))) PPC_WEAK_FUNC(sub_82631A2C);
PPC_FUNC_IMPL(__imp__sub_82631A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631A30"))) PPC_WEAK_FUNC(sub_82631A30);
PPC_FUNC_IMPL(__imp__sub_82631A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8262d370
	sub_8262D370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82631A38"))) PPC_WEAK_FUNC(sub_82631A38);
PPC_FUNC_IMPL(__imp__sub_82631A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8262d3a8
	sub_8262D3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82631A40"))) PPC_WEAK_FUNC(sub_82631A40);
PPC_FUNC_IMPL(__imp__sub_82631A40) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8262d370
	sub_8262D370(ctx, base);
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82631A7C"))) PPC_WEAK_FUNC(sub_82631A7C);
PPC_FUNC_IMPL(__imp__sub_82631A7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631A80"))) PPC_WEAK_FUNC(sub_82631A80);
PPC_FUNC_IMPL(__imp__sub_82631A80) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8262d370
	sub_8262D370(ctx, base);
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

__attribute__((alias("__imp__sub_82631AA8"))) PPC_WEAK_FUNC(sub_82631AA8);
PPC_FUNC_IMPL(__imp__sub_82631AA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631AAC"))) PPC_WEAK_FUNC(sub_82631AAC);
PPC_FUNC_IMPL(__imp__sub_82631AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631AB0"))) PPC_WEAK_FUNC(sub_82631AB0);
PPC_FUNC_IMPL(__imp__sub_82631AB0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// ble cr6,0x82631aec
	if (!cr6.gt) goto loc_82631AEC;
loc_82631AE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82631b28
	goto loc_82631B28;
loc_82631AEC:
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82631b24
	if (!cr6.gt) goto loc_82631B24;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82631B08:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lbzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82631ae4
	if (!cr6.eq) goto loc_82631AE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x82631b08
	if (cr6.lt) goto loc_82631B08;
loc_82631B24:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82631B28:
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

__attribute__((alias("__imp__sub_82631B3C"))) PPC_WEAK_FUNC(sub_82631B3C);
PPC_FUNC_IMPL(__imp__sub_82631B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631B40"))) PPC_WEAK_FUNC(sub_82631B40);
PPC_FUNC_IMPL(__imp__sub_82631B40) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// ble cr6,0x82631b7c
	if (!cr6.gt) goto loc_82631B7C;
loc_82631B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82631bf4
	goto loc_82631BF4;
loc_82631B7C:
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82631bf0
	if (!cr6.gt) goto loc_82631BF0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
loc_82631B98:
	// lbzx r11,r8,r9
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82631bb4
	if (cr6.lt) goto loc_82631BB4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// ble cr6,0x82631bb8
	if (!cr6.gt) goto loc_82631BB8;
loc_82631BB4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82631BB8:
	// lbzx r11,r9,r30
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82631bd4
	if (cr6.lt) goto loc_82631BD4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82631bd4
	if (cr6.gt) goto loc_82631BD4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_82631BD4:
	// extsb r7,r11
	ctx.r7.s64 = r11.s8;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bne cr6,0x82631b74
	if (!cr6.eq) goto loc_82631B74;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// blt cr6,0x82631b98
	if (cr6.lt) goto loc_82631B98;
loc_82631BF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82631BF4:
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

__attribute__((alias("__imp__sub_82631C08"))) PPC_WEAK_FUNC(sub_82631C08);
PPC_FUNC_IMPL(__imp__sub_82631C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631C0C"))) PPC_WEAK_FUNC(sub_82631C0C);
PPC_FUNC_IMPL(__imp__sub_82631C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631C10"))) PPC_WEAK_FUNC(sub_82631C10);
PPC_FUNC_IMPL(__imp__sub_82631C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r9,r11,r4
	ctx.r9.u64 = r11.u64 + ctx.r4.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82631C3C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82631c3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82631C3C;
}

__attribute__((alias("__imp__sub_82631C4C"))) PPC_WEAK_FUNC(sub_82631C4C);
PPC_FUNC_IMPL(__imp__sub_82631C4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631C50"))) PPC_WEAK_FUNC(sub_82631C50);
PPC_FUNC_IMPL(__imp__sub_82631C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x82631c70
	if (!cr6.lt) goto loc_82631C70;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82631C70:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82631c90
	if (cr0.lt) goto loc_82631C90;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82631C7C:
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r6,47
	cr6.compare<uint32_t>(ctx.r6.u32, 47, xer);
	// beq cr6,0x82631c94
	if (cr6.eq) goto loc_82631C94;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82631c7c
	if (!cr0.lt) goto loc_82631C7C;
loc_82631C90:
	// li r11,-1
	r11.s64 = -1;
loc_82631C94:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x82631ca4
	if (!cr6.lt) goto loc_82631CA4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82631CA4:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82631cc4
	if (cr0.lt) goto loc_82631CC4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82631CB0:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,92
	cr6.compare<uint32_t>(ctx.r8.u32, 92, xer);
	// beq cr6,0x82631cc8
	if (cr6.eq) goto loc_82631CC8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82631cb0
	if (!cr0.lt) goto loc_82631CB0;
loc_82631CC4:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82631CC8:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x82631cd4
	if (cr6.gt) goto loc_82631CD4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82631CD4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r9,r7
	r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82631D04:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82631d04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82631D04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631D18"))) PPC_WEAK_FUNC(sub_82631D18);
PPC_FUNC_IMPL(__imp__sub_82631D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// addic. r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
loc_82631D34:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// bne cr6,0x82631d58
	if (!cr6.eq) goto loc_82631D58;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82631D58:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82631d34
	if (cr6.lt) goto loc_82631D34;
}

__attribute__((alias("__imp__sub_82631D6C"))) PPC_WEAK_FUNC(sub_82631D6C);
PPC_FUNC_IMPL(__imp__sub_82631D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631D70"))) PPC_WEAK_FUNC(sub_82631D70);
PPC_FUNC_IMPL(__imp__sub_82631D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_82631D80:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82631da4
	if (cr6.lt) goto loc_82631DA4;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82631da4
	if (cr6.gt) goto loc_82631DA4;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82631DA4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82631d80
	if (cr6.lt) goto loc_82631D80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631DC0"))) PPC_WEAK_FUNC(sub_82631DC0);
PPC_FUNC_IMPL(__imp__sub_82631DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_82631DD0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x82631df4
	if (cr6.lt) goto loc_82631DF4;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x82631df4
	if (cr6.gt) goto loc_82631DF4;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
loc_82631DF4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82631dd0
	if (cr6.lt) goto loc_82631DD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82631E10"))) PPC_WEAK_FUNC(sub_82631E10);
PPC_FUNC_IMPL(__imp__sub_82631E10) {
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
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r29,1
	r29.s64 = 1;
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
	// bne cr6,0x82631e58
	if (!cr6.eq) goto loc_82631E58;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82631E58:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bgt cr6,0x82631e98
	if (cr6.gt) goto loc_82631E98;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82631E98:
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// bge cr6,0x82631ec8
	if (!cr6.lt) goto loc_82631EC8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// extsb r9,r25
	ctx.r9.s64 = r25.s8;
loc_82631EAC:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// beq cr6,0x82631ed0
	if (cr6.eq) goto loc_82631ED0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82631eac
	if (cr6.lt) goto loc_82631EAC;
loc_82631EC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_82631ED0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82631ec8
	if (cr6.lt) goto loc_82631EC8;
	// stbx r26,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r26.u8);
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
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
	// bne cr6,0x82631f10
	if (!cr6.eq) goto loc_82631F10;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82631F10:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
}

__attribute__((alias("__imp__sub_82631F28"))) PPC_WEAK_FUNC(sub_82631F28);
PPC_FUNC_IMPL(__imp__sub_82631F28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82631e7c
	// ERROR 82631E7C
	return;
}

__attribute__((alias("__imp__sub_82631F2C"))) PPC_WEAK_FUNC(sub_82631F2C);
PPC_FUNC_IMPL(__imp__sub_82631F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631F30"))) PPC_WEAK_FUNC(sub_82631F30);
PPC_FUNC_IMPL(__imp__sub_82631F30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,12(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x82631fb8
	if (!cr6.lt) goto loc_82631FB8;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82631f88
	if (!cr6.eq) goto loc_82631F88;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82631F88:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_82631FB8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82631fe8
	if (!cr6.gt) goto loc_82631FE8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82631FD8:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82631fd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82631FD8;
loc_82631FE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82631FF0"))) PPC_WEAK_FUNC(sub_82631FF0);
PPC_FUNC_IMPL(__imp__sub_82631FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82631FF4"))) PPC_WEAK_FUNC(sub_82631FF4);
PPC_FUNC_IMPL(__imp__sub_82631FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82631FF8"))) PPC_WEAK_FUNC(sub_82631FF8);
PPC_FUNC_IMPL(__imp__sub_82631FF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82632048
	if (cr6.eq) goto loc_82632048;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82632048:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263205C"))) PPC_WEAK_FUNC(sub_8263205C);
PPC_FUNC_IMPL(__imp__sub_8263205C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82632060"))) PPC_WEAK_FUNC(sub_82632060);
PPC_FUNC_IMPL(__imp__sub_82632060) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x826320a8
	if (!cr6.lt) goto loc_826320A8;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bgt cr6,0x8263209c
	if (cr6.gt) goto loc_8263209C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8263209C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826320A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826320CC"))) PPC_WEAK_FUNC(sub_826320CC);
PPC_FUNC_IMPL(__imp__sub_826320CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826320D0"))) PPC_WEAK_FUNC(sub_826320D0);
PPC_FUNC_IMPL(__imp__sub_826320D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r30,r11,2
	r30.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8262d2d8
	sub_8262D2D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82632154
	if (cr6.lt) goto loc_82632154;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bge cr6,0x82632168
	if (!cr6.lt) goto loc_82632168;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82632154:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// bgt cr6,0x82632168
	if (cr6.gt) goto loc_82632168;
	// li r29,255
	r29.s64 = 255;
loc_82632168:
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x826321a4
	if (!cr6.lt) goto loc_826321A4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632194
	if (cr6.lt) goto loc_82632194;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632194:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826321A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stbx r28,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, r28.u8);
}

__attribute__((alias("__imp__sub_826321B0"))) PPC_WEAK_FUNC(sub_826321B0);
PPC_FUNC_IMPL(__imp__sub_826321B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82632110
	// ERROR 82632110
	return;
}

__attribute__((alias("__imp__sub_826321B4"))) PPC_WEAK_FUNC(sub_826321B4);
PPC_FUNC_IMPL(__imp__sub_826321B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826321B8"))) PPC_WEAK_FUNC(sub_826321B8);
PPC_FUNC_IMPL(__imp__sub_826321B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82632d48
	sub_82632D48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82632208"))) PPC_WEAK_FUNC(sub_82632208);
PPC_FUNC_IMPL(__imp__sub_82632208) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263220C"))) PPC_WEAK_FUNC(sub_8263220C);
PPC_FUNC_IMPL(__imp__sub_8263220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632210"))) PPC_WEAK_FUNC(sub_82632210);
PPC_FUNC_IMPL(__imp__sub_82632210) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// mr r28,r31
	r28.u64 = r31.u64;
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// std r31,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// beq cr6,0x8263229c
	if (cr6.eq) goto loc_8263229C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82632274:
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r26,r3,r26
	r26.u64 = ctx.r3.u64 + r26.u64;
	// stwx r3,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r3.u32);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82632274
	if (!cr6.eq) goto loc_82632274;
loc_8263229C:
	// addi r29,r26,1
	r29.s64 = r26.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x826322d8
	if (!cr6.lt) goto loc_826322D8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826322c8
	if (cr6.lt) goto loc_826322C8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826322C8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826322D8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r29,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r29.u32);
	// stbx r31,r11,r26
	PPC_STORE_U8(r11.u32 + r26.u32, r31.u8);
	// beq cr6,0x8263232c
	if (cr6.eq) goto loc_8263232C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826322F8:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826322f8
	if (!cr6.eq) goto loc_826322F8;
loc_8263232C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82632330"))) PPC_WEAK_FUNC(sub_82632330);
PPC_FUNC_IMPL(__imp__sub_82632330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82632334"))) PPC_WEAK_FUNC(sub_82632334);
PPC_FUNC_IMPL(__imp__sub_82632334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632338"))) PPC_WEAK_FUNC(sub_82632338);
PPC_FUNC_IMPL(__imp__sub_82632338) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82632060
	sub_82632060(ctx, base);
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82632210
	sub_82632210(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82632388"))) PPC_WEAK_FUNC(sub_82632388);
PPC_FUNC_IMPL(__imp__sub_82632388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263238C"))) PPC_WEAK_FUNC(sub_8263238C);
PPC_FUNC_IMPL(__imp__sub_8263238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632390"))) PPC_WEAK_FUNC(sub_82632390);
PPC_FUNC_IMPL(__imp__sub_82632390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// b 0x8262f6c8
	sub_8262F6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826323A8"))) PPC_WEAK_FUNC(sub_826323A8);
PPC_FUNC_IMPL(__imp__sub_826323A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826323AC"))) PPC_WEAK_FUNC(sub_826323AC);
PPC_FUNC_IMPL(__imp__sub_826323AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826323B0"))) PPC_WEAK_FUNC(sub_826323B0);
PPC_FUNC_IMPL(__imp__sub_826323B0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x826323d8
	if (cr6.eq) goto loc_826323D8;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bl 0x82634720
	sub_82634720(ctx, base);
loc_826323D8:
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82632414
	if (!cr6.lt) goto loc_82632414;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632404
	if (cr6.lt) goto loc_82632404;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632404:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632414:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82632428"))) PPC_WEAK_FUNC(sub_82632428);
PPC_FUNC_IMPL(__imp__sub_82632428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263242C"))) PPC_WEAK_FUNC(sub_8263242C);
PPC_FUNC_IMPL(__imp__sub_8263242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632430"))) PPC_WEAK_FUNC(sub_82632430);
PPC_FUNC_IMPL(__imp__sub_82632430) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82632484
	if (!cr6.lt) goto loc_82632484;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632474
	if (cr6.lt) goto loc_82632474;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632474:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632484:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826344c8
	sub_826344C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826324A8"))) PPC_WEAK_FUNC(sub_826324A8);
PPC_FUNC_IMPL(__imp__sub_826324A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826324AC"))) PPC_WEAK_FUNC(sub_826324AC);
PPC_FUNC_IMPL(__imp__sub_826324AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826324B0"))) PPC_WEAK_FUNC(sub_826324B0);
PPC_FUNC_IMPL(__imp__sub_826324B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x826324dc
	if (!cr6.lt) goto loc_826324DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826324DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// add r28,r29,r27
	r28.u64 = r29.u64 + r27.u64;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82632524
	if (!cr6.lt) goto loc_82632524;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632514
	if (cr6.lt) goto loc_82632514;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632514:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632524:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stbx r10,r11,r28
	PPC_STORE_U8(r11.u32 + r28.u32, ctx.r10.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x826344c8
	sub_826344C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263254C"))) PPC_WEAK_FUNC(sub_8263254C);
PPC_FUNC_IMPL(__imp__sub_8263254C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82632550"))) PPC_WEAK_FUNC(sub_82632550);
PPC_FUNC_IMPL(__imp__sub_82632550) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x82632580
	if (!cr6.lt) goto loc_82632580;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82632580:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82632d48
	sub_82632D48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826325A8"))) PPC_WEAK_FUNC(sub_826325A8);
PPC_FUNC_IMPL(__imp__sub_826325A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826325AC"))) PPC_WEAK_FUNC(sub_826325AC);
PPC_FUNC_IMPL(__imp__sub_826325AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826325B0"))) PPC_WEAK_FUNC(sub_826325B0);
PPC_FUNC_IMPL(__imp__sub_826325B0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x826325e0
	if (!cr6.lt) goto loc_826325E0;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_826325E0:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82632600
	if (cr0.lt) goto loc_82632600;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_826325EC:
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r7,47
	cr6.compare<uint32_t>(ctx.r7.u32, 47, xer);
	// beq cr6,0x82632604
	if (cr6.eq) goto loc_82632604;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x826325ec
	if (!cr0.lt) goto loc_826325EC;
loc_82632600:
	// li r11,-1
	r11.s64 = -1;
loc_82632604:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x82632614
	if (!cr6.lt) goto loc_82632614;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82632614:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82632634
	if (cr0.lt) goto loc_82632634;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_82632620:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,92
	cr6.compare<uint32_t>(ctx.r8.u32, 92, xer);
	// beq cr6,0x82632638
	if (cr6.eq) goto loc_82632638;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82632620
	if (!cr0.lt) goto loc_82632620;
loc_82632634:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82632638:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bgt cr6,0x82632648
	if (cr6.gt) goto loc_82632648;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82632648:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826326a4
	if (cr6.lt) goto loc_826326A4;
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8263268c
	if (!cr6.lt) goto loc_8263268C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8263267c
	if (cr6.lt) goto loc_8263267C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8263267C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8263268C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stbx r10,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826326A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82632060
	sub_82632060(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826326B0"))) PPC_WEAK_FUNC(sub_826326B0);
PPC_FUNC_IMPL(__imp__sub_826326B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826326B4"))) PPC_WEAK_FUNC(sub_826326B4);
PPC_FUNC_IMPL(__imp__sub_826326B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826326B8"))) PPC_WEAK_FUNC(sub_826326B8);
PPC_FUNC_IMPL(__imp__sub_826326B8) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82632724
	if (cr6.eq) goto loc_82632724;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82632724:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82632738"))) PPC_WEAK_FUNC(sub_82632738);
PPC_FUNC_IMPL(__imp__sub_82632738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263273C"))) PPC_WEAK_FUNC(sub_8263273C);
PPC_FUNC_IMPL(__imp__sub_8263273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632740"))) PPC_WEAK_FUNC(sub_82632740);
PPC_FUNC_IMPL(__imp__sub_82632740) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r30,r7,0,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826327b0
	if (cr6.eq) goto loc_826327B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826327B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826327C4"))) PPC_WEAK_FUNC(sub_826327C4);
PPC_FUNC_IMPL(__imp__sub_826327C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826327C8"))) PPC_WEAK_FUNC(sub_826327C8);
PPC_FUNC_IMPL(__imp__sub_826327C8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r30,r3,32
	r30.u64 = ctx.r3.u64 | 32;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r10,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82632210
	sub_82632210(ctx, base);
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

__attribute__((alias("__imp__sub_8263282C"))) PPC_WEAK_FUNC(sub_8263282C);
PPC_FUNC_IMPL(__imp__sub_8263282C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82632830"))) PPC_WEAK_FUNC(sub_82632830);
PPC_FUNC_IMPL(__imp__sub_82632830) {
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
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// li r27,0
	r27.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r8,2
	r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x826328a0
	if (!cr6.lt) goto loc_826328A0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632890
	if (cr6.lt) goto loc_82632890;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632890:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826328A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stbx r27,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, r27.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826328C4"))) PPC_WEAK_FUNC(sub_826328C4);
PPC_FUNC_IMPL(__imp__sub_826328C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826328C8"))) PPC_WEAK_FUNC(sub_826328C8);
PPC_FUNC_IMPL(__imp__sub_826328C8) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 | 32;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,12(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bge cr6,0x8263296c
	if (!cr6.lt) goto loc_8263296C;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263293c
	if (!cr6.eq) goto loc_8263293C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263293C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_8263296C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x8263299c
	if (!cr6.gt) goto loc_8263299C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_8263298C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8263298c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263298C;
loc_8263299C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826329A4"))) PPC_WEAK_FUNC(sub_826329A4);
PPC_FUNC_IMPL(__imp__sub_826329A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826329A8"))) PPC_WEAK_FUNC(sub_826329A8);
PPC_FUNC_IMPL(__imp__sub_826329A8) {
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
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x826329d4
	if (!cr6.lt) goto loc_826329D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826329D4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82632d48
	sub_82632D48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826329FC"))) PPC_WEAK_FUNC(sub_826329FC);
PPC_FUNC_IMPL(__imp__sub_826329FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82632A00"))) PPC_WEAK_FUNC(sub_82632A00);
PPC_FUNC_IMPL(__imp__sub_82632A00) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8262d5c0
	sub_8262D5C0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, r26.s32, xer);
	// ble cr6,0x82632adc
	if (!cr6.gt) goto loc_82632ADC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826328c8
	sub_826328C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82632060
	sub_82632060(ctx, base);
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82632A58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x8262d620
	sub_8262D620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82632aac
	if (cr6.eq) goto loc_82632AAC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r30,r11,r3
	r30.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82632ab0
	if (cr0.lt) goto loc_82632AB0;
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r22,1
	r22.s64 = 1;
	// bl 0x826324b0
	sub_826324B0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826324b0
	sub_826324B0(ctx, base);
	// add r31,r30,r26
	r31.u64 = r30.u64 + r26.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82632a58
	if (!cr6.eq) goto loc_82632A58;
loc_82632AAC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82632AB0:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x826324b0
	sub_826324B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9450
	return;
loc_82632ADC:
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_82632AEC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8262d620
	sub_8262D620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82632b6c
	if (cr6.eq) goto loc_82632B6C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82632b6c
	if (cr6.eq) goto loc_82632B6C;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x82632b38
	if (!cr6.lt) goto loc_82632B38;
	// subf r11,r30,r10
	r11.s64 = ctx.r10.s64 - r30.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82632B24:
	// lbzx r11,r30,r28
	r11.u64 = PPC_LOAD_U8(r30.u32 + r28.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stbx r11,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82632b24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82632B24;
loc_82632B38:
	// mr r11,r22
	r11.u64 = r22.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82632b5c
	if (!cr6.gt) goto loc_82632B5C;
	// mtctr r25
	ctr.u64 = r25.u64;
loc_82632B48:
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r27.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r9,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x82632b48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82632B48;
loc_82632B5C:
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r11,r10,r26
	r11.u64 = ctx.r10.u64 + r26.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82632aec
	if (!cr6.eq) goto loc_82632AEC;
loc_82632B6C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82632b9c
	if (!cr6.lt) goto loc_82632B9C;
loc_82632B7C:
	// lbzx r11,r30,r28
	r11.u64 = PPC_LOAD_U8(r30.u32 + r28.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stbx r11,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82632b7c
	if (cr6.lt) goto loc_82632B7C;
loc_82632B9C:
	// stbx r22,r31,r28
	PPC_STORE_U8(r31.u32 + r28.u32, r22.u8);
	// addi r30,r31,1
	r30.s64 = r31.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82632bdc
	if (!cr6.lt) goto loc_82632BDC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82632bcc
	if (cr6.lt) goto loc_82632BCC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82632BCC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632BDC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stbx r22,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r22.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82632BF0"))) PPC_WEAK_FUNC(sub_82632BF0);
PPC_FUNC_IMPL(__imp__sub_82632BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82632BF4"))) PPC_WEAK_FUNC(sub_82632BF4);
PPC_FUNC_IMPL(__imp__sub_82632BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632BF8"))) PPC_WEAK_FUNC(sub_82632BF8);
PPC_FUNC_IMPL(__imp__sub_82632BF8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8262f7a8
	sub_8262F7A8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r29,0
	r29.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82632C40:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r31,r11,2
	r31.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8262d2d8
	sub_8262D2D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82632cbc
	if (cr6.lt) goto loc_82632CBC;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// blt cr6,0x82632d1c
	if (cr6.lt) goto loc_82632D1C;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82632cac
	if (!cr6.lt) goto loc_82632CAC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82632c9c
	if (cr6.lt) goto loc_82632C9C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82632C9C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632CAC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stbx r29,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r29.u8);
	// b 0x82632c40
	goto loc_82632C40;
loc_82632CBC:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// bgt cr6,0x82632cd0
	if (cr6.gt) goto loc_82632CD0;
	// li r30,255
	r30.s64 = 255;
loc_82632CD0:
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82632d0c
	if (!cr6.lt) goto loc_82632D0C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82632cfc
	if (cr6.lt) goto loc_82632CFC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82632CFC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632D0C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stbx r29,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r29.u8);
	// b 0x82632c40
	goto loc_82632C40;
loc_82632D1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262f6c8
	sub_8262F6C8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826324b0
	sub_826324B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262f730
	sub_8262F730(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82632D44"))) PPC_WEAK_FUNC(sub_82632D44);
PPC_FUNC_IMPL(__imp__sub_82632D44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82632D48"))) PPC_WEAK_FUNC(sub_82632D48);
PPC_FUNC_IMPL(__imp__sub_82632D48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// clrlwi r11,r8,2
	r11.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// subf r7,r5,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r27,r10,r30
	r27.u64 = ctx.r10.u64 + r30.u64;
	// subf r26,r6,r7
	r26.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82632db0
	if (!cr6.lt) goto loc_82632DB0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82632da0
	if (cr6.lt) goto loc_82632DA0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82632DA0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82632DB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82634720
	sub_82634720(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// ble cr6,0x82632df0
	if (!cr6.gt) goto loc_82632DF0;
	// mtctr r30
	ctr.u64 = r30.u64;
	// subf r10,r11,r25
	ctx.r10.s64 = r25.s64 - r11.s64;
loc_82632DE0:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82632de0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82632DE0;
loc_82632DF0:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82632DF8"))) PPC_WEAK_FUNC(sub_82632DF8);
PPC_FUNC_IMPL(__imp__sub_82632DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82632DFC"))) PPC_WEAK_FUNC(sub_82632DFC);
PPC_FUNC_IMPL(__imp__sub_82632DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632E00"))) PPC_WEAK_FUNC(sub_82632E00);
PPC_FUNC_IMPL(__imp__sub_82632E00) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82632e5c
	if (!cr6.eq) goto loc_82632E5C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82632E5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82632E98"))) PPC_WEAK_FUNC(sub_82632E98);
PPC_FUNC_IMPL(__imp__sub_82632E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82632E9C"))) PPC_WEAK_FUNC(sub_82632E9C);
PPC_FUNC_IMPL(__imp__sub_82632E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82632EA0"))) PPC_WEAK_FUNC(sub_82632EA0);
PPC_FUNC_IMPL(__imp__sub_82632EA0) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82632ec8
	if (!cr6.eq) goto loc_82632EC8;
	// li r11,1
	r11.s64 = 1;
loc_82632EC8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82632f10
	if (!cr6.eq) goto loc_82632F10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82632F10:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r5,r30,r9
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82632F4C"))) PPC_WEAK_FUNC(sub_82632F4C);
PPC_FUNC_IMPL(__imp__sub_82632F4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82632F50"))) PPC_WEAK_FUNC(sub_82632F50);
PPC_FUNC_IMPL(__imp__sub_82632F50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82632fd0
	if (cr6.eq) goto loc_82632FD0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82632fd0
	if (!cr6.lt) goto loc_82632FD0;
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r5,r10,2
	ctx.r5.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// oris r7,r8,32768
	ctx.r7.u64 = ctx.r8.u64 | 2147483648;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82632FD0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82633004"))) PPC_WEAK_FUNC(sub_82633004);
PPC_FUNC_IMPL(__imp__sub_82633004) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82633008"))) PPC_WEAK_FUNC(sub_82633008);
PPC_FUNC_IMPL(__imp__sub_82633008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8263307c
	if (cr6.eq) goto loc_8263307C;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r7,r8,-25600
	ctx.r7.s64 = ctx.r8.s64 + -25600;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// vspltw v10,v0,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r7,r7,7536
	ctx.r7.s64 = ctx.r7.s64 + 7536;
loc_8263303C:
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrefp v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v11,v0,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v7,v9,v8
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v6,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v5,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x8263303c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263303C;
loc_8263307C:
	// rlwinm r6,r5,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r4,r10,7632
	ctx.r4.s64 = ctx.r10.s64 + 7632;
	// beq cr6,0x82633130
	if (cr6.eq) goto loc_82633130;
	// li r7,160
	ctx.r7.s64 = 160;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826330A4:
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v12,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// lvx128 v9,r11,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v8,v9,v9
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// lvx128 v7,r11,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v6,v7,v7
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r11,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v10,v12,4,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 228), 4));
	// vrlimi128 v10,v8,2,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 228), 2));
	// vrlimi128 v10,v6,1,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 228), 1));
	// vrsqrtefp v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// vmulfp128 v13,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw v4,v0,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v3,v0,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v2,v0,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v1,v0,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v31,v5,v4
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v31,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r11,r9
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v29,v30,v3
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v29,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r11,r8
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v27,v28,v2
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v27,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r11,r7
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v25,v26,v1
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v25,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,192
	r11.s64 = r11.s64 + 192;
	// bdnz 0x826330a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826330A4;
loc_82633130:
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// vspltisw v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82633148:
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v4,v5,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// vmulfp128 v9,v4,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v8,v4
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v6,v9,v10,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v3,v13,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v2,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bdnz 0x82633148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82633148;
}

__attribute__((alias("__imp__sub_82633190"))) PPC_WEAK_FUNC(sub_82633190);
PPC_FUNC_IMPL(__imp__sub_82633190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633194"))) PPC_WEAK_FUNC(sub_82633194);
PPC_FUNC_IMPL(__imp__sub_82633194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633198"))) PPC_WEAK_FUNC(sub_82633198);
PPC_FUNC_IMPL(__imp__sub_82633198) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8262b8e0
	sub_8262B8E0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r11,7536
	ctx.r9.s64 = r11.s64 + 7536;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r30,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_826331F0"))) PPC_WEAK_FUNC(sub_826331F0);
PPC_FUNC_IMPL(__imp__sub_826331F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826331F4"))) PPC_WEAK_FUNC(sub_826331F4);
PPC_FUNC_IMPL(__imp__sub_826331F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826331F8"))) PPC_WEAK_FUNC(sub_826331F8);
PPC_FUNC_IMPL(__imp__sub_826331F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r11
	_mm_store_si128((__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82633240"))) PPC_WEAK_FUNC(sub_82633240);
PPC_FUNC_IMPL(__imp__sub_82633240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633244"))) PPC_WEAK_FUNC(sub_82633244);
PPC_FUNC_IMPL(__imp__sub_82633244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633248"))) PPC_WEAK_FUNC(sub_82633248);
PPC_FUNC_IMPL(__imp__sub_82633248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82633254:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8263327c
	if (cr6.eq) goto loc_8263327C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x8263327c
	if (cr6.eq) goto loc_8263327C;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82633298
	if (cr6.eq) goto loc_82633298;
loc_8263327C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// blt cr6,0x82633254
	if (cr6.lt) goto loc_82633254;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82633298:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_826332A0"))) PPC_WEAK_FUNC(sub_826332A0);
PPC_FUNC_IMPL(__imp__sub_826332A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826332A4"))) PPC_WEAK_FUNC(sub_826332A4);
PPC_FUNC_IMPL(__imp__sub_826332A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826332A8"))) PPC_WEAK_FUNC(sub_826332A8);
PPC_FUNC_IMPL(__imp__sub_826332A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r11,5456
	ctx.r9.s64 = r11.s64 + 5456;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r8,224
	ctx.r8.s64 = 224;
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r11,r11,-12480
	r11.s64 = r11.s64 + -12480;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vand v8,v11,v12
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvx128 v0,r11,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v7,v9,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vor v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v5,v6,v13
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v5.f32), 0xF);
	// blt cr6,0x82633304
	if (cr6.lt) goto loc_82633304;
loc_826332F8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82633304:
	// li r10,32
	ctx.r10.s64 = 32;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vand v6,v9,v12
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpgefp v5,v7,v6
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v3,v4,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// bge cr6,0x826332f8
	if (!cr6.lt) goto loc_826332F8;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r5,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v10,v0,v11
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82633378
	if (!cr6.lt) goto loc_82633378;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,6240
	ctx.r9.s64 = ctx.r10.s64 + 6240;
	// lvlx v10,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v0,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
loc_82633378:
	// vsubfp v0,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r9,240
	ctx.r9.s64 = 240;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vand v9,v0,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v8,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vor v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v6,v7,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v6.f32), 0xF);
	// mfocrf r8,2
	ctx.r8.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r7,r8,25,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826333B4"))) PPC_WEAK_FUNC(sub_826333B4);
PPC_FUNC_IMPL(__imp__sub_826333B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826333B8"))) PPC_WEAK_FUNC(sub_826333B8);
PPC_FUNC_IMPL(__imp__sub_826333B8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630408
	sub_82630408(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82633488"))) PPC_WEAK_FUNC(sub_82633488);
PPC_FUNC_IMPL(__imp__sub_82633488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263348C"))) PPC_WEAK_FUNC(sub_8263348C);
PPC_FUNC_IMPL(__imp__sub_8263348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633490"))) PPC_WEAK_FUNC(sub_82633490);
PPC_FUNC_IMPL(__imp__sub_82633490) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82634738
	sub_82634738(ctx, base);
	// lbz r6,129(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stb r3,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v13,r30,r8
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r30,r7
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82633510"))) PPC_WEAK_FUNC(sub_82633510);
PPC_FUNC_IMPL(__imp__sub_82633510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633514"))) PPC_WEAK_FUNC(sub_82633514);
PPC_FUNC_IMPL(__imp__sub_82633514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633518"))) PPC_WEAK_FUNC(sub_82633518);
PPC_FUNC_IMPL(__imp__sub_82633518) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82633490
	sub_82633490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82633540"))) PPC_WEAK_FUNC(sub_82633540);
PPC_FUNC_IMPL(__imp__sub_82633540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633544"))) PPC_WEAK_FUNC(sub_82633544);
PPC_FUNC_IMPL(__imp__sub_82633544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633548"))) PPC_WEAK_FUNC(sub_82633548);
PPC_FUNC_IMPL(__imp__sub_82633548) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82633548"))) PPC_WEAK_FUNC(sub_82633548);
PPC_FUNC_IMPL(__imp__sub_82633548) {
	PPC_FUNC_PROLOGUE();
	// b 0x826333b8
	sub_826333B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263354C"))) PPC_WEAK_FUNC(sub_8263354C);
PPC_FUNC_IMPL(__imp__sub_8263354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633550"))) PPC_WEAK_FUNC(sub_82633550);
PPC_FUNC_IMPL(__imp__sub_82633550) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633558"))) PPC_WEAK_FUNC(sub_82633558);
PPC_FUNC_IMPL(__imp__sub_82633558) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633560"))) PPC_WEAK_FUNC(sub_82633560);
PPC_FUNC_IMPL(__imp__sub_82633560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263356C"))) PPC_WEAK_FUNC(sub_8263356C);
PPC_FUNC_IMPL(__imp__sub_8263356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633570"))) PPC_WEAK_FUNC(sub_82633570);
PPC_FUNC_IMPL(__imp__sub_82633570) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826335f0
	if (cr6.eq) goto loc_826335F0;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826335d0
	if (!cr6.gt) goto loc_826335D0;
loc_8263359C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r5,r31,r29
	ctx.r5.s64 = r29.s64 - r31.s64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826335e4
	if (cr6.eq) goto loc_826335E4;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8263359c
	if (cr6.lt) goto loc_8263359C;
loc_826335D0:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826335E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826335F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826335F8"))) PPC_WEAK_FUNC(sub_826335F8);
PPC_FUNC_IMPL(__imp__sub_826335F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

