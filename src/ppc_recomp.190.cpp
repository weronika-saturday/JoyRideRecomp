#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82648C88"))) PPC_WEAK_FUNC(sub_82648C88);
PPC_FUNC_IMPL(__imp__sub_82648C88) {
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
	// bl 0x82648600
	sub_82648600(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82648cd4
	if (cr6.eq) goto loc_82648CD4;
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
loc_82648CD4:
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

__attribute__((alias("__imp__sub_82648CEC"))) PPC_WEAK_FUNC(sub_82648CEC);
PPC_FUNC_IMPL(__imp__sub_82648CEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648CF0"))) PPC_WEAK_FUNC(sub_82648CF0);
PPC_FUNC_IMPL(__imp__sub_82648CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648CF8"))) PPC_WEAK_FUNC(sub_82648CF8);
PPC_FUNC_IMPL(__imp__sub_82648CF8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82648CF8"))) PPC_WEAK_FUNC(sub_82648CF8);
PPC_FUNC_IMPL(__imp__sub_82648CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264a538
	sub_8264A538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82648CFC"))) PPC_WEAK_FUNC(sub_82648CFC);
PPC_FUNC_IMPL(__imp__sub_82648CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648D00"))) PPC_WEAK_FUNC(sub_82648D00);
PPC_FUNC_IMPL(__imp__sub_82648D00) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648d74
	if (cr6.eq) goto loc_82648D74;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82648d54
	if (cr6.eq) goto loc_82648D54;
	// li r11,5
	r11.s64 = 5;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82648e18
	goto loc_82648E18;
loc_82648D54:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648d74
	if (cr6.eq) goto loc_82648D74;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8264f958
	sub_8264F958(ctx, base);
loc_82648D74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82648d8c
	if (cr6.eq) goto loc_82648D8C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82648D8C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648da4
	if (cr6.eq) goto loc_82648DA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826592d0
	sub_826592D0(ctx, base);
loc_82648DA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a1f8
	sub_8264A1F8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648e14
	if (cr6.eq) goto loc_82648E14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8264f6f0
	sub_8264F6F0(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x82648e14
	if (!cr0.eq) goto loc_82648E14;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82648e14
	if (!cr6.eq) goto loc_82648E14;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82648df4
	if (cr6.eq) goto loc_82648DF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82648DF4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82648e14
	if (!cr6.eq) goto loc_82648E14;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82648e14
	if (cr6.eq) goto loc_82648E14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_82648E14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82648E18:
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

__attribute__((alias("__imp__sub_82648E2C"))) PPC_WEAK_FUNC(sub_82648E2C);
PPC_FUNC_IMPL(__imp__sub_82648E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648E30"))) PPC_WEAK_FUNC(sub_82648E30);
PPC_FUNC_IMPL(__imp__sub_82648E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82648eb8
	if (cr6.eq) goto loc_82648EB8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a5f8
	sub_8264A5F8(ctx, base);
loc_82648EB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82648EC8"))) PPC_WEAK_FUNC(sub_82648EC8);
PPC_FUNC_IMPL(__imp__sub_82648EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648ECC"))) PPC_WEAK_FUNC(sub_82648ECC);
PPC_FUNC_IMPL(__imp__sub_82648ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648ED0"))) PPC_WEAK_FUNC(sub_82648ED0);
PPC_FUNC_IMPL(__imp__sub_82648ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,224
	ctx.r10.s64 = 224;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82648f38
	if (cr6.eq) goto loc_82648F38;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f1.f64));
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a5f8
	sub_8264A5F8(ctx, base);
loc_82648F38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82648F48"))) PPC_WEAK_FUNC(sub_82648F48);
PPC_FUNC_IMPL(__imp__sub_82648F48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648F4C"))) PPC_WEAK_FUNC(sub_82648F4C);
PPC_FUNC_IMPL(__imp__sub_82648F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648F50"))) PPC_WEAK_FUNC(sub_82648F50);
PPC_FUNC_IMPL(__imp__sub_82648F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f0,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lwz r7,120(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// lwz r5,28(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82648F88"))) PPC_WEAK_FUNC(sub_82648F88);
PPC_FUNC_IMPL(__imp__sub_82648F88) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82657808
	sub_82657808(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// addi r6,r8,13716
	ctx.r6.s64 = ctx.r8.s64 + 13716;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// bl 0x8262b8e0
	sub_8262B8E0(ctx, base);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf75d8
	sub_82BF75D8(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82649008"))) PPC_WEAK_FUNC(sub_82649008);
PPC_FUNC_IMPL(__imp__sub_82649008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264900C"))) PPC_WEAK_FUNC(sub_8264900C);
PPC_FUNC_IMPL(__imp__sub_8264900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649010"))) PPC_WEAK_FUNC(sub_82649010);
PPC_FUNC_IMPL(__imp__sub_82649010) {
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
	// bl 0x8264a910
	sub_8264A910(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264905c
	if (cr6.eq) goto loc_8264905C;
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
loc_8264905C:
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

__attribute__((alias("__imp__sub_82649074"))) PPC_WEAK_FUNC(sub_82649074);
PPC_FUNC_IMPL(__imp__sub_82649074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649078"))) PPC_WEAK_FUNC(sub_82649078);
PPC_FUNC_IMPL(__imp__sub_82649078) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649080"))) PPC_WEAK_FUNC(sub_82649080);
PPC_FUNC_IMPL(__imp__sub_82649080) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826490a8
	if (!cr6.eq) goto loc_826490A8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r27,120(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 120);
loc_826490A8:
	// lwz r11,356(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 356);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826490f4
	if (cr0.lt) goto loc_826490F4;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_826490BC:
	// lwz r11,352(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 352);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x826490bc
	if (!cr0.lt) goto loc_826490BC;
loc_826490F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826490F8"))) PPC_WEAK_FUNC(sub_826490F8);
PPC_FUNC_IMPL(__imp__sub_826490F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826490FC"))) PPC_WEAK_FUNC(sub_826490FC);
PPC_FUNC_IMPL(__imp__sub_826490FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649100"))) PPC_WEAK_FUNC(sub_82649100);
PPC_FUNC_IMPL(__imp__sub_82649100) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82649128
	if (!cr6.eq) goto loc_82649128;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r27,120(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 120);
loc_82649128:
	// lwz r11,356(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82649180
	if (cr0.lt) goto loc_82649180;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// rlwinm r31,r26,3,0,28
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_8264913C:
	// lwz r11,352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 352);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82649180
	if (!cr6.eq) goto loc_82649180;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bge 0x8264913c
	if (!cr0.lt) goto loc_8264913C;
loc_82649180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82649184"))) PPC_WEAK_FUNC(sub_82649184);
PPC_FUNC_IMPL(__imp__sub_82649184) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82649188"))) PPC_WEAK_FUNC(sub_82649188);
PPC_FUNC_IMPL(__imp__sub_82649188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,356(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826491bc
	if (!cr6.gt) goto loc_826491BC;
	// lwz r11,352(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 352);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_826491A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x826491c8
	if (cr6.eq) goto loc_826491C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x826491a0
	if (cr6.lt) goto loc_826491A0;
loc_826491BC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_826491C8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826491D4"))) PPC_WEAK_FUNC(sub_826491D4);
PPC_FUNC_IMPL(__imp__sub_826491D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826491D8"))) PPC_WEAK_FUNC(sub_826491D8);
PPC_FUNC_IMPL(__imp__sub_826491D8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,10
	r11.s64 = 10;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r9,-8
	r11.s64 = ctx.r9.s64 + -8;
loc_82649200:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82649200
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82649200;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,13792
	ctx.r8.s64 = r11.s64 + 13792;
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r29,0
	r29.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82649278
	if (!cr6.gt) goto loc_82649278;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// li r31,0
	r31.s64 = 0;
loc_82649238:
	// lwz r11,352(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 352);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,356(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82649238
	if (cr6.lt) goto loc_82649238;
loc_82649278:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_8264927C"))) PPC_WEAK_FUNC(sub_8264927C);
PPC_FUNC_IMPL(__imp__sub_8264927C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82649280"))) PPC_WEAK_FUNC(sub_82649280);
PPC_FUNC_IMPL(__imp__sub_82649280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,224
	r11.s64 = 224;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,120(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lfs f13,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f0,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// addi r30,r29,20
	r30.s64 = r29.s64 + 20;
	// lwz r5,28(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v12,r0,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r0,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v127,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v127.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vminfp128 v8,v13,v127
	_mm_store_ps(ctx.v8.f32, _mm_min_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v127.f32)));
	// vmaxfp128 v7,v13,v127
	_mm_store_ps(ctx.v7.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v127.f32)));
	// vaddfp v6,v10,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// vaddfp v5,v9,v7
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264a5f8
	sub_8264A5F8(ctx, base);
	// vmsum3fp128 v4,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(v127.f32), _mm_load_ps(v127.f32), 0xEF));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r6,7632
	ctx.r4.s64 = ctx.r6.s64 + 7632;
	// li r3,32
	ctx.r3.s64 = 32;
	// lfs f0,7832(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7832);
	f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,120(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// vrsqrtefp v0,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v4.f32))));
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// vmulfp128 v10,v4,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// stb r6,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r6.u8);
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// vcmpeqfp v7,v3,v4
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v3,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vmulfp128 v2,v4,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stvx128 v1,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r10,r5
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v31,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r3
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v30,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// stvx128 v127,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v2,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lfs f11,20(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addic. r30,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r30.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// blt 0x82649478
	if (cr0.lt) goto loc_82649478;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_8264943C:
	// lwz r11,352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x8264943c
	if (!cr0.lt) goto loc_8264943C;
loc_82649478:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_82649484"))) PPC_WEAK_FUNC(sub_82649484);
PPC_FUNC_IMPL(__imp__sub_82649484) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82649488"))) PPC_WEAK_FUNC(sub_82649488);
PPC_FUNC_IMPL(__imp__sub_82649488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// stvx128 v12,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82649280
	sub_82649280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826494B4"))) PPC_WEAK_FUNC(sub_826494B4);
PPC_FUNC_IMPL(__imp__sub_826494B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826494B8"))) PPC_WEAK_FUNC(sub_826494B8);
PPC_FUNC_IMPL(__imp__sub_826494B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// addi r9,r11,13792
	ctx.r9.s64 = r11.s64 + 13792;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r28,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r28.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82649534
	if (cr6.eq) goto loc_82649534;
	// lwz r11,356(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8264951c
	if (cr0.lt) goto loc_8264951C;
	// lwz r11,352(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82649504:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x8264953c
	if (cr6.eq) goto loc_8264953C;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bge 0x82649504
	if (!cr0.lt) goto loc_82649504;
loc_8264951C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826489b8
	sub_826489B8(ctx, base);
loc_82649534:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8264953C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826489b8
	sub_826489B8(ctx, base);
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82649578
	if (cr6.eq) goto loc_82649578;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82649578:
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x826495b8
	if (cr6.eq) goto loc_826495B8;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r11,r10,r29
	r11.u64 = ctx.r10.u64 + r29.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826495A8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826495a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826495A8;
loc_826495B8:
	// stb r28,364(r31)
	PPC_STORE_U8(r31.u32 + 364, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826495C0"))) PPC_WEAK_FUNC(sub_826495C0);
PPC_FUNC_IMPL(__imp__sub_826495C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826495C4"))) PPC_WEAK_FUNC(sub_826495C4);
PPC_FUNC_IMPL(__imp__sub_826495C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826495C8"))) PPC_WEAK_FUNC(sub_826495C8);
PPC_FUNC_IMPL(__imp__sub_826495C8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-10972
	ctx.r5.s64 = r11.s64 + -10972;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8264a370
	sub_8264A370(ctx, base);
	// lwz r11,360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82649634
	if (!cr6.eq) goto loc_82649634;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,352(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// addi r5,r9,13828
	ctx.r5.s64 = ctx.r9.s64 + 13828;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82649634:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,13820
	ctx.r4.s64 = ctx.r10.s64 + 13820;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8264969c
	if (!cr6.gt) goto loc_8264969C;
	// li r28,0
	r28.s64 = 0;
loc_82649664:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82649664
	if (cr6.lt) goto loc_82649664;
loc_8264969C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826496B4"))) PPC_WEAK_FUNC(sub_826496B4);
PPC_FUNC_IMPL(__imp__sub_826496B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826496B8"))) PPC_WEAK_FUNC(sub_826496B8);
PPC_FUNC_IMPL(__imp__sub_826496B8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82648f88
	sub_82648F88(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,13844
	ctx.r9.s64 = ctx.r10.s64 + 13844;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// stw r8,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r8.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(r31.u32 + 364, r11.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
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

__attribute__((alias("__imp__sub_82649718"))) PPC_WEAK_FUNC(sub_82649718);
PPC_FUNC_IMPL(__imp__sub_82649718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264971C"))) PPC_WEAK_FUNC(sub_8264971C);
PPC_FUNC_IMPL(__imp__sub_8264971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649720"))) PPC_WEAK_FUNC(sub_82649720);
PPC_FUNC_IMPL(__imp__sub_82649720) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,356(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,13844
	ctx.r8.s64 = ctx.r10.s64 + 13844;
	// addi r7,r9,13792
	ctx.r7.s64 = ctx.r9.s64 + 13792;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// blt 0x82649788
	if (cr0.lt) goto loc_82649788;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82649760:
	// lwz r11,352(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 352);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x82649760
	if (!cr0.lt) goto loc_82649760;
loc_82649788:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r30,356(r29)
	PPC_STORE_U32(r29.u32 + 356, r30.u32);
	// addi r31,r29,352
	r31.s64 = r29.s64 + 352;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 360);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,356(r29)
	PPC_STORE_U32(r29.u32 + 356, r30.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826497d8
	if (!cr6.eq) goto loc_826497D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_826497D8:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8264a910
	sub_8264A910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826497F0"))) PPC_WEAK_FUNC(sub_826497F0);
PPC_FUNC_IMPL(__imp__sub_826497F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826497F4"))) PPC_WEAK_FUNC(sub_826497F4);
PPC_FUNC_IMPL(__imp__sub_826497F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826497F8"))) PPC_WEAK_FUNC(sub_826497F8);
PPC_FUNC_IMPL(__imp__sub_826497F8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826498f0
	if (cr6.eq) goto loc_826498F0;
	// bl 0x82648948
	sub_82648948(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826498f0
	if (!cr6.eq) goto loc_826498F0;
	// addi r30,r31,352
	r30.s64 = r31.s64 + 352;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82649850
	if (!cr6.eq) goto loc_82649850;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82649850:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,120(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// bl 0x82649d68
	sub_82649D68(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r11,7264
	ctx.r6.s64 = r11.s64 + 7264;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// addi r10,r11,416
	ctx.r10.s64 = r11.s64 + 416;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,2464(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2464);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stb r6,364(r31)
	PPC_STORE_U8(r31.u32 + 364, ctx.r6.u8);
	// bl 0x8263dcb8
	sub_8263DCB8(ctx, base);
loc_826498F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_826498F4"))) PPC_WEAK_FUNC(sub_826498F4);
PPC_FUNC_IMPL(__imp__sub_826498F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826498F8"))) PPC_WEAK_FUNC(sub_826498F8);
PPC_FUNC_IMPL(__imp__sub_826498F8) {
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
	// lwz r11,356(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82649960
	if (!cr6.eq) goto loc_82649960;
	// addi r31,r3,352
	r31.s64 = ctx.r3.s64 + 352;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,360(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 360);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,356(r29)
	PPC_STORE_U32(r29.u32 + 356, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82649954
	if (!cr6.eq) goto loc_82649954;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_82649954:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82649960:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82648cf8
	sub_82648CF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264996C"))) PPC_WEAK_FUNC(sub_8264996C);
PPC_FUNC_IMPL(__imp__sub_8264996C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82649970"))) PPC_WEAK_FUNC(sub_82649970);
PPC_FUNC_IMPL(__imp__sub_82649970) {
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
	// lbz r11,364(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826499c4
	if (cr6.eq) goto loc_826499C4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,356(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x826499c0
	if (!cr6.gt) goto loc_826499C0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82649bc0
	sub_82649BC0(ctx, base);
loc_826499C0:
	// stb r30,364(r31)
	PPC_STORE_U8(r31.u32 + 364, r30.u8);
loc_826499C4:
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

__attribute__((alias("__imp__sub_826499D8"))) PPC_WEAK_FUNC(sub_826499D8);
PPC_FUNC_IMPL(__imp__sub_826499D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826499DC"))) PPC_WEAK_FUNC(sub_826499DC);
PPC_FUNC_IMPL(__imp__sub_826499DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826499E0"))) PPC_WEAK_FUNC(sub_826499E0);
PPC_FUNC_IMPL(__imp__sub_826499E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,368
	ctx.r4.s64 = 368;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,368
	ctx.r9.s64 = 368;
	// addi r5,r27,176
	ctx.r5.s64 = r27.s64 + 176;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,44(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x82648f88
	sub_82648F88(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,13844
	ctx.r7.s64 = ctx.r8.s64 + 13844;
	// li r11,0
	r11.s64 = 0;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// addi r29,r27,140
	r29.s64 = r27.s64 + 140;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// stw r6,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r6.u32);
	// stb r11,364(r31)
	PPC_STORE_U8(r31.u32 + 364, r11.u8);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,144(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r28,16(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// bge cr6,0x82649acc
	if (!cr6.lt) goto loc_82649ACC;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82649a9c
	if (!cr6.eq) goto loc_82649A9C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82649A9C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_82649ACC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ble cr6,0x82649afc
	if (!cr6.gt) goto loc_82649AFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82649AEC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82649aec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82649AEC;
loc_82649AFC:
	// addi r29,r27,152
	r29.s64 = r27.s64 + 152;
	// addi r30,r31,152
	r30.s64 = r31.s64 + 152;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,156(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 156);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r28,16(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x82649b78
	if (!cr6.lt) goto loc_82649B78;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82649b48
	if (!cr6.eq) goto loc_82649B48;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82649B48:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
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
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_82649B78:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ble cr6,0x82649ba8
	if (!cr6.gt) goto loc_82649BA8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82649B98:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82649b98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82649B98;
loc_82649BA8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82648b98
	sub_82648B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82649BBC"))) PPC_WEAK_FUNC(sub_82649BBC);
PPC_FUNC_IMPL(__imp__sub_82649BBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82649BC0"))) PPC_WEAK_FUNC(sub_82649BC0);
PPC_FUNC_IMPL(__imp__sub_82649BC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82649BD8:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + r30.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82649BF8:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,20(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bge cr6,0x82649c2c
	if (!cr6.lt) goto loc_82649C2C;
loc_82649C18:
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82649c18
	if (cr6.lt) goto loc_82649C18;
loc_82649C2C:
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82649c5c
	if (!cr6.lt) goto loc_82649C5C;
loc_82649C48:
	// lwzu r9,-8(r10)
	ea = -8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82649c48
	if (cr6.lt) goto loc_82649C48;
loc_82649C5C:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x82649ca0
	if (cr6.lt) goto loc_82649CA0;
	// beq cr6,0x82649c90
	if (cr6.eq) goto loc_82649C90;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
loc_82649C90:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x82649bf8
	if (!cr6.gt) goto loc_82649BF8;
loc_82649CA0:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x82649cb4
	if (!cr6.lt) goto loc_82649CB4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82649bc0
	sub_82649BC0(ctx, base);
loc_82649CB4:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x82649cc4
	if (!cr6.lt) goto loc_82649CC4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82649bd8
	goto loc_82649BD8;
loc_82649CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82649CC8"))) PPC_WEAK_FUNC(sub_82649CC8);
PPC_FUNC_IMPL(__imp__sub_82649CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82649CCC"))) PPC_WEAK_FUNC(sub_82649CCC);
PPC_FUNC_IMPL(__imp__sub_82649CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649CD0"))) PPC_WEAK_FUNC(sub_82649CD0);
PPC_FUNC_IMPL(__imp__sub_82649CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r6,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r6.u8);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r11,80(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r11,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, r11.u64);
	// ld r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r10,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r10.u64);
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lbz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 108);
	// stb r7,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r7.u8);
	// lbz r6,109(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 109);
	// stb r6,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r6.u8);
	// lwz r5,112(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_82649D60"))) PPC_WEAK_FUNC(sub_82649D60);
PPC_FUNC_IMPL(__imp__sub_82649D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649D64"))) PPC_WEAK_FUNC(sub_82649D64);
PPC_FUNC_IMPL(__imp__sub_82649D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649D68"))) PPC_WEAK_FUNC(sub_82649D68);
PPC_FUNC_IMPL(__imp__sub_82649D68) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lbz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r6,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r6.u8);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 80);
	// std r6,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r6.u64);
	// ld r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 88);
	// std r5,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r5.u64);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,108(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 108);
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// lbz r10,109(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 109);
	// stb r10,109(r31)
	PPC_STORE_U8(r31.u32 + 109, ctx.r10.u8);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r9,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82649E3C"))) PPC_WEAK_FUNC(sub_82649E3C);
PPC_FUNC_IMPL(__imp__sub_82649E3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649E40"))) PPC_WEAK_FUNC(sub_82649E40);
PPC_FUNC_IMPL(__imp__sub_82649E40) {
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
	// bl 0x82649720
	sub_82649720(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82649e8c
	if (cr6.eq) goto loc_82649E8C;
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
loc_82649E8C:
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

__attribute__((alias("__imp__sub_82649EA4"))) PPC_WEAK_FUNC(sub_82649EA4);
PPC_FUNC_IMPL(__imp__sub_82649EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82649EA8"))) PPC_WEAK_FUNC(sub_82649EA8);
PPC_FUNC_IMPL(__imp__sub_82649EA8) {
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
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82649efc
	if (cr0.lt) goto loc_82649EFC;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82649EC8:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82649ef0
	if (cr6.eq) goto loc_82649EF0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82649EF0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82649ec8
	if (!cr0.lt) goto loc_82649EC8;
loc_82649EFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82649F00"))) PPC_WEAK_FUNC(sub_82649F00);
PPC_FUNC_IMPL(__imp__sub_82649F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82649F04"))) PPC_WEAK_FUNC(sub_82649F04);
PPC_FUNC_IMPL(__imp__sub_82649F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82649F08"))) PPC_WEAK_FUNC(sub_82649F08);
PPC_FUNC_IMPL(__imp__sub_82649F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9410
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r8,-11760
	ctx.r6.s64 = ctx.r8.s64 + -11760;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r31,r7,-12816
	r31.s64 = ctx.r7.s64 + -12816;
	// addi r27,r1,-80
	r27.s64 = ctx.r1.s64 + -80;
	// addi r7,r8,64
	ctx.r7.s64 = ctx.r8.s64 + 64;
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// li r5,4
	ctx.r5.s64 = 4;
	// lvx128 v11,r8,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,8
	ctx.r6.s64 = 8;
	// vaddfp v10,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r29,48
	r29.s64 = 48;
	// li r28,16
	r28.s64 = 16;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// li r26,12
	r26.s64 = 12;
	// li r11,0
	r11.s64 = 0;
	// vmulfp128 v8,v10,v9
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vminfp v7,v8,v12
	_mm_store_ps(ctx.v7.f32, _mm_min_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v6,v7,v0
	_mm_store_ps(ctx.v6.f32, _mm_max_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v6,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	f0.f64 = double(temp.f32);
	// lfs f13,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f10.u32);
	// fctiwz f9,f0
	ctx.f9.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.f9.u32);
	// fctiwz f8,f13
	ctx.f8.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f8,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.f8.u32);
	// fctiwz f7,f12
	ctx.f7.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// li r12,12
	r12.s64 = 12;
	// stfiwx f7,r10,r12
	PPC_STORE_U32(ctx.r10.u32 + r12.u32, ctx.f7.u32);
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r29
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r4,r28
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r4.u32 + r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v2,v3,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v1,v2,v5
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v5.f32)));
	// vminfp v31,v1,v12
	_mm_store_ps(v31.f32, _mm_min_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v30,v31,v0
	_mm_store_ps(v30.f32, _mm_max_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v30,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,-76(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f3.f64 = double(temp.f32);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f2.u32);
	// fctiwz f1,f6
	ctx.f1.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfiwx f1,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.f1.u32);
	// fctiwz f0,f5
	f0.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfiwx f0,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, f0.u32);
	// fctiwz f13,f4
	ctx.f13.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfiwx f13,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + r26.u32, ctx.f13.u32);
	// stb r11,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, r11.u8);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, r11.u8);
	// stb r11,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, r11.u8);
	// stb r11,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, r11.u8);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, r11.u8);
	// stb r11,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, r11.u8);
	// stb r11,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, r11.u8);
}

__attribute__((alias("__imp__sub_8264A024"))) PPC_WEAK_FUNC(sub_8264A024);
PPC_FUNC_IMPL(__imp__sub_8264A024) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8264A028"))) PPC_WEAK_FUNC(sub_8264A028);
PPC_FUNC_IMPL(__imp__sub_8264A028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264A038:
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264a094
	if (!cr6.eq) goto loc_8264A094;
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264a094
	if (!cr6.gt) goto loc_8264A094;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264A084:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264a084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264A084;
loc_8264A094:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x8264a038
	if (!cr0.lt) goto loc_8264A038;
}

__attribute__((alias("__imp__sub_8264A0A0"))) PPC_WEAK_FUNC(sub_8264A0A0);
PPC_FUNC_IMPL(__imp__sub_8264A0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A0A4"))) PPC_WEAK_FUNC(sub_8264A0A4);
PPC_FUNC_IMPL(__imp__sub_8264A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264A0A8"))) PPC_WEAK_FUNC(sub_8264A0A8);
PPC_FUNC_IMPL(__imp__sub_8264A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264A0B8:
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264a114
	if (!cr6.eq) goto loc_8264A114;
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r9,152(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264a114
	if (!cr6.gt) goto loc_8264A114;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264A104:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264a104
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264A104;
loc_8264A114:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x8264a0b8
	if (!cr0.lt) goto loc_8264A0B8;
}

__attribute__((alias("__imp__sub_8264A120"))) PPC_WEAK_FUNC(sub_8264A120);
PPC_FUNC_IMPL(__imp__sub_8264A120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A124"))) PPC_WEAK_FUNC(sub_8264A124);
PPC_FUNC_IMPL(__imp__sub_8264A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264A128"))) PPC_WEAK_FUNC(sub_8264A128);
PPC_FUNC_IMPL(__imp__sub_8264A128) {
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
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8264a17c
	if (cr0.lt) goto loc_8264A17C;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264A148:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264a170
	if (cr6.eq) goto loc_8264A170;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A170:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x8264a148
	if (!cr0.lt) goto loc_8264A148;
loc_8264A17C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264a0a8
	sub_8264A0A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264A188"))) PPC_WEAK_FUNC(sub_8264A188);
PPC_FUNC_IMPL(__imp__sub_8264A188) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264A18C"))) PPC_WEAK_FUNC(sub_8264A18C);
PPC_FUNC_IMPL(__imp__sub_8264A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264A190"))) PPC_WEAK_FUNC(sub_8264A190);
PPC_FUNC_IMPL(__imp__sub_8264A190) {
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
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8264a1e4
	if (cr0.lt) goto loc_8264A1E4;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264A1B0:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264a1d8
	if (cr6.eq) goto loc_8264A1D8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A1D8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x8264a1b0
	if (!cr0.lt) goto loc_8264A1B0;
loc_8264A1E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264a0a8
	sub_8264A0A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264A1F0"))) PPC_WEAK_FUNC(sub_8264A1F0);
PPC_FUNC_IMPL(__imp__sub_8264A1F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264A1F4"))) PPC_WEAK_FUNC(sub_8264A1F4);
PPC_FUNC_IMPL(__imp__sub_8264A1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264A1F8"))) PPC_WEAK_FUNC(sub_8264A1F8);
PPC_FUNC_IMPL(__imp__sub_8264A1F8) {
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
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8264a24c
	if (cr0.lt) goto loc_8264A24C;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264A218:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264a240
	if (cr6.eq) goto loc_8264A240;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A240:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x8264a218
	if (!cr0.lt) goto loc_8264A218;
loc_8264A24C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264a0a8
	sub_8264A0A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264A258"))) PPC_WEAK_FUNC(sub_8264A258);
PPC_FUNC_IMPL(__imp__sub_8264A258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264A25C"))) PPC_WEAK_FUNC(sub_8264A25C);
PPC_FUNC_IMPL(__imp__sub_8264A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264A260"))) PPC_WEAK_FUNC(sub_8264A260);
PPC_FUNC_IMPL(__imp__sub_8264A260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264a290
	if (!cr6.gt) goto loc_8264A290;
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
loc_8264A274:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8264a294
	if (cr6.eq) goto loc_8264A294;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264a274
	if (cr6.lt) goto loc_8264A274;
loc_8264A290:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8264A294:
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// add r11,r7,r8
	r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264A2D4:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264a2d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264A2D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A2E8"))) PPC_WEAK_FUNC(sub_8264A2E8);
PPC_FUNC_IMPL(__imp__sub_8264A2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8264a318
	if (!cr6.gt) goto loc_8264A318;
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
loc_8264A2FC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8264a31c
	if (cr6.eq) goto loc_8264A31C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264a2fc
	if (cr6.lt) goto loc_8264A2FC;
loc_8264A318:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8264A31C:
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,140(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// add r11,r7,r8
	r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264A35C:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264a35c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264A35C;
}

__attribute__((alias("__imp__sub_8264A36C"))) PPC_WEAK_FUNC(sub_8264A36C);
PPC_FUNC_IMPL(__imp__sub_8264A36C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A370"))) PPC_WEAK_FUNC(sub_8264A370);
PPC_FUNC_IMPL(__imp__sub_8264A370) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,-11464
	ctx.r5.s64 = r11.s64 + -11464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826575b0
	sub_826575B0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a3e4
	if (!cr6.eq) goto loc_8264A3E4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r5,r9,13932
	ctx.r5.s64 = ctx.r9.s64 + 13932;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A3E4:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a430
	if (!cr6.eq) goto loc_8264A430;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r5,r9,13916
	ctx.r5.s64 = ctx.r9.s64 + 13916;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A430:
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

__attribute__((alias("__imp__sub_8264A444"))) PPC_WEAK_FUNC(sub_8264A444);
PPC_FUNC_IMPL(__imp__sub_8264A444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A448"))) PPC_WEAK_FUNC(sub_8264A448);
PPC_FUNC_IMPL(__imp__sub_8264A448) {
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
	// addi r31,r3,152
	r31.s64 = ctx.r3.s64 + 152;
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
	// bne cr6,0x8264a48c
	if (!cr6.eq) goto loc_8264A48C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264A48C:
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
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264A4BC"))) PPC_WEAK_FUNC(sub_8264A4BC);
PPC_FUNC_IMPL(__imp__sub_8264A4BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A4C0"))) PPC_WEAK_FUNC(sub_8264A4C0);
PPC_FUNC_IMPL(__imp__sub_8264A4C0) {
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
	// addi r31,r3,140
	r31.s64 = ctx.r3.s64 + 140;
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
	// bne cr6,0x8264a504
	if (!cr6.eq) goto loc_8264A504;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264A504:
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
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264A534"))) PPC_WEAK_FUNC(sub_8264A534);
PPC_FUNC_IMPL(__imp__sub_8264A534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264A538"))) PPC_WEAK_FUNC(sub_8264A538);
PPC_FUNC_IMPL(__imp__sub_8264A538) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264a5a0
	if (!cr6.eq) goto loc_8264A5A0;
	// addi r31,r3,140
	r31.s64 = ctx.r3.s64 + 140;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a598
	if (!cr6.eq) goto loc_8264A598;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_8264A598:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8264A5A0:
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264a5f0
	if (!cr6.eq) goto loc_8264A5F0;
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a5e8
	if (!cr6.eq) goto loc_8264A5E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_8264A5E8:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8264A5F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264A5F4"))) PPC_WEAK_FUNC(sub_8264A5F4);
PPC_FUNC_IMPL(__imp__sub_8264A5F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264A5F8"))) PPC_WEAK_FUNC(sub_8264A5F8);
PPC_FUNC_IMPL(__imp__sub_8264A5F8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264a908
	if (cr6.eq) goto loc_8264A908;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8264a648
	if (cr0.eq) goto loc_8264A648;
	// li r11,17
	r11.s64 = 17;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9464
	return;
loc_8264A648:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r27,828(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 828);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r7,r27,r29
	ctx.r7.u64 = r27.u64 | r29.u64;
	// addi r6,r11,127
	ctx.r6.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r6,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwz r27,828(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 828);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r27,r29
	ctx.r9.u64 = r27.u64 | r29.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r31,36
	ctx.r7.s64 = r31.s64 + 36;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r3,88(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8264a700
	if (cr6.eq) goto loc_8264A700;
	// bl 0x82c66db0
	sub_82C66DB0(ctx, base);
loc_8264A700:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8264a744
	if (!cr6.eq) goto loc_8264A744;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264a794
	if (cr6.eq) goto loc_8264A794;
loc_8264A744:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8264a77c
	if (!cr6.eq) goto loc_8264A77C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_8264A77C:
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a028
	sub_8264A028(ctx, base);
loc_8264A794:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264a7ac
	if (cr6.eq) goto loc_8264A7AC;
	// bl 0x82c66db8
	sub_82C66DB8(ctx, base);
loc_8264A7AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82649f08
	sub_82649F08(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264a7e4
	if (cr6.eq) goto loc_8264A7E4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A7E4:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264a838
	if (!cr0.eq) goto loc_8264A838;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264a838
	if (!cr6.eq) goto loc_8264A838;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264a818
	if (cr6.eq) goto loc_8264A818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264A818:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264a838
	if (!cr6.eq) goto loc_8264A838;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264a838
	if (cr6.eq) goto loc_8264A838;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264A838:
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
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a89c
	if (!cr6.eq) goto loc_8264A89C;
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
loc_8264A89C:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a908
	if (!cr6.eq) goto loc_8264A908;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8264A908:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8264A90C"))) PPC_WEAK_FUNC(sub_8264A90C);
PPC_FUNC_IMPL(__imp__sub_8264A90C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264A910"))) PPC_WEAK_FUNC(sub_8264A910);
PPC_FUNC_IMPL(__imp__sub_8264A910) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,13652
	ctx.r10.s64 = r11.s64 + 13652;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82649ea8
	sub_82649EA8(ctx, base);
	// addi r30,r29,152
	r30.s64 = r29.s64 + 152;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,160(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 160);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,156(r29)
	PPC_STORE_U32(r29.u32 + 156, r28.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8264a970
	if (!cr6.eq) goto loc_8264A970;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264A970:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// addi r31,r29,140
	r31.s64 = r29.s64 + 140;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264a9b8
	if (!cr6.eq) goto loc_8264A9B8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_8264A9B8:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x8263c850
	sub_8263C850(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264A9CC"))) PPC_WEAK_FUNC(sub_8264A9CC);
PPC_FUNC_IMPL(__imp__sub_8264A9CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264A9D0"))) PPC_WEAK_FUNC(sub_8264A9D0);
PPC_FUNC_IMPL(__imp__sub_8264A9D0) {
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
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
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

__attribute__((alias("__imp__sub_8264AA1C"))) PPC_WEAK_FUNC(sub_8264AA1C);
PPC_FUNC_IMPL(__imp__sub_8264AA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AA20"))) PPC_WEAK_FUNC(sub_8264AA20);
PPC_FUNC_IMPL(__imp__sub_8264AA20) {
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
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
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

__attribute__((alias("__imp__sub_8264AA6C"))) PPC_WEAK_FUNC(sub_8264AA6C);
PPC_FUNC_IMPL(__imp__sub_8264AA6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AA70"))) PPC_WEAK_FUNC(sub_8264AA70);
PPC_FUNC_IMPL(__imp__sub_8264AA70) {
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
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
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

__attribute__((alias("__imp__sub_8264AABC"))) PPC_WEAK_FUNC(sub_8264AABC);
PPC_FUNC_IMPL(__imp__sub_8264AABC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AAC0"))) PPC_WEAK_FUNC(sub_8264AAC0);
PPC_FUNC_IMPL(__imp__sub_8264AAC0) {
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
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
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

__attribute__((alias("__imp__sub_8264AB0C"))) PPC_WEAK_FUNC(sub_8264AB0C);
PPC_FUNC_IMPL(__imp__sub_8264AB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AB10"))) PPC_WEAK_FUNC(sub_8264AB10);
PPC_FUNC_IMPL(__imp__sub_8264AB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264ab80
	if (cr6.eq) goto loc_8264AB80;
	// clrlwi r11,r5,28
	r11.u64 = ctx.r5.u32 & 0xF;
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r11.u8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264ab40
	if (!cr6.lt) goto loc_8264AB40;
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8264ab44
	goto loc_8264AB44;
loc_8264AB40:
	// rlwinm r10,r6,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
loc_8264AB44:
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bge cr6,0x8264ab58
	if (!cr6.lt) goto loc_8264AB58;
	// not r11,r7
	r11.u64 = ~ctx.r7.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8264ab5c
	goto loc_8264AB5C;
loc_8264AB58:
	// rlwinm r11,r7,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
loc_8264AB5C:
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
	// blr 
	return;
loc_8264AB80:
	// li r11,0
	r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, r11.u16);
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r11.u16);
}

__attribute__((alias("__imp__sub_8264AB94"))) PPC_WEAK_FUNC(sub_8264AB94);
PPC_FUNC_IMPL(__imp__sub_8264AB94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AB98"))) PPC_WEAK_FUNC(sub_8264AB98);
PPC_FUNC_IMPL(__imp__sub_8264AB98) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fsel f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f0,f8,f10,f9
	f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8264abd8
	if (!cr6.lt) goto loc_8264ABD8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
loc_8264ABD8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264ABE8"))) PPC_WEAK_FUNC(sub_8264ABE8);
PPC_FUNC_IMPL(__imp__sub_8264ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,13952
	ctx.r10.s64 = r11.s64 + 13952;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8263c340
	sub_8263C340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264ABF8"))) PPC_WEAK_FUNC(sub_8264ABF8);
PPC_FUNC_IMPL(__imp__sub_8264ABF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AC00"))) PPC_WEAK_FUNC(sub_8264AC00);
PPC_FUNC_IMPL(__imp__sub_8264AC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,233(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 233);
	// addi r11,r11,-255
	r11.s64 = r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AC14"))) PPC_WEAK_FUNC(sub_8264AC14);
PPC_FUNC_IMPL(__imp__sub_8264AC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264AC18"))) PPC_WEAK_FUNC(sub_8264AC18);
PPC_FUNC_IMPL(__imp__sub_8264AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r4,r8,-12160
	ctx.r4.s64 = ctx.r8.s64 + -12160;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r31,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v0,v11
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v8,v10,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v7,v9,v9
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v8,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v7,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f10,400(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 400, temp.u32);
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

__attribute__((alias("__imp__sub_8264ACCC"))) PPC_WEAK_FUNC(sub_8264ACCC);
PPC_FUNC_IMPL(__imp__sub_8264ACCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264ACD0"))) PPC_WEAK_FUNC(sub_8264ACD0);
PPC_FUNC_IMPL(__imp__sub_8264ACD0) {
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
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f3,204(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x8264ae4c
	if (cr6.gt) goto loc_8264AE4C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264ad88
	if (cr6.eq) goto loc_8264AD88;
	// bdz 0x8264ad28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8264AD28;
	// bdz 0x8264ad58
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8264AD58;
	// bdz 0x8264adf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8264ADF4;
	// bdz 0x8264ae4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8264AE4C;
	// bdz 0x8264ad70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8264AD70;
	// b 0x8264ae1c
	goto loc_8264AE1C;
loc_8264AD28:
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826390e8
	sub_826390E8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,2
	r11.s64 = 2;
	// addi r9,r10,11052
	ctx.r9.s64 = ctx.r10.s64 + 11052;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AD58:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// bl 0x82656ad8
	sub_82656AD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AD70:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// bl 0x82670150
	sub_82670150(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AD88:
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-23368(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23368);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f13,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f8,f11,f12,f13
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsel f5,f7,f10,f9
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// fsel f4,f6,f8,f10
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fcmpu cr6,f4,f3
	cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// ble cr6,0x8264ad58
	if (!cr6.gt) goto loc_8264AD58;
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826390e8
	sub_826390E8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,2
	r11.s64 = 2;
	// addi r9,r10,11052
	ctx.r9.s64 = ctx.r10.s64 + 11052;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264ADF4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,-12988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12988);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// bl 0x826556d8
	sub_826556D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AE1C:
	// lwz r31,212(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826390e8
	sub_826390E8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,7
	r11.s64 = 7;
	// addi r9,r10,11388
	ctx.r9.s64 = ctx.r10.s64 + 11388;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AE4C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264ae64
	if (cr6.eq) goto loc_8264AE64;
	// bl 0x82656628
	sub_82656628(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8264ae68
	goto loc_8264AE68;
loc_8264AE64:
	// li r31,0
	r31.s64 = 0;
loc_8264AE68:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// beq cr6,0x8264aeb8
	if (cr6.eq) goto loc_8264AEB8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264AEB8:
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r31,189
	ctx.r3.s64 = r31.s64 + 189;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8264AED8"))) PPC_WEAK_FUNC(sub_8264AED8);
PPC_FUNC_IMPL(__imp__sub_8264AED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264AEDC"))) PPC_WEAK_FUNC(sub_8264AEDC);
PPC_FUNC_IMPL(__imp__sub_8264AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264AEE0"))) PPC_WEAK_FUNC(sub_8264AEE0);
PPC_FUNC_IMPL(__imp__sub_8264AEE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8264af40
	if (cr6.eq) goto loc_8264AF40;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264af40
	if (cr6.eq) goto loc_8264AF40;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8264AF40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650f28
	sub_82650F28(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264af5c
	if (cr6.eq) goto loc_8264AF5C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82659048
	sub_82659048(ctx, base);
loc_8264AF5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657e28
	sub_82657E28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264AF74"))) PPC_WEAK_FUNC(sub_8264AF74);
PPC_FUNC_IMPL(__imp__sub_8264AF74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264AF78"))) PPC_WEAK_FUNC(sub_8264AF78);
PPC_FUNC_IMPL(__imp__sub_8264AF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264afe8
	if (cr6.eq) goto loc_8264AFE8;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264afc8
	if (cr6.eq) goto loc_8264AFC8;
	// li r11,5
	r11.s64 = 5;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_8264AFC8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264afe8
	if (cr6.eq) goto loc_8264AFE8;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8264f828
	sub_8264F828(ctx, base);
loc_8264AFE8:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264b008
	if (cr6.eq) goto loc_8264B008;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8264B008:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ac18
	sub_8264AC18(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8264b040
	if (cr6.eq) goto loc_8264B040;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8264b040
	if (cr6.eq) goto loc_8264B040;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
loc_8264B040:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8264b09c
	if (cr6.gt) goto loc_8264B09C;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// fsel f9,f10,f13,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f0,f8,f12,f9
	f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x8264b090
	if (!cr6.lt) goto loc_8264B090;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x8264b098
	goto loc_8264B098;
loc_8264B090:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
loc_8264B098:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
loc_8264B09C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8264b0b4
	if (cr6.eq) goto loc_8264B0B4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263afc8
	sub_8263AFC8(ctx, base);
loc_8264B0B4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b0c8
	if (cr6.eq) goto loc_8264B0C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82658f70
	sub_82658F70(ctx, base);
loc_8264B0C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657d50
	sub_82657D50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b138
	if (cr6.eq) goto loc_8264B138;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8264f590
	sub_8264F590(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264b138
	if (!cr0.eq) goto loc_8264B138;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264b138
	if (!cr6.eq) goto loc_8264B138;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b118
	if (cr6.eq) goto loc_8264B118;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264B118:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264b138
	if (!cr6.eq) goto loc_8264B138;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b138
	if (cr6.eq) goto loc_8264B138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264B138:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264B140"))) PPC_WEAK_FUNC(sub_8264B140);
PPC_FUNC_IMPL(__imp__sub_8264B140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264B144"))) PPC_WEAK_FUNC(sub_8264B144);
PPC_FUNC_IMPL(__imp__sub_8264B144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B148"))) PPC_WEAK_FUNC(sub_8264B148);
PPC_FUNC_IMPL(__imp__sub_8264B148) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ac18
	sub_8264AC18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264B190"))) PPC_WEAK_FUNC(sub_8264B190);
PPC_FUNC_IMPL(__imp__sub_8264B190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B194"))) PPC_WEAK_FUNC(sub_8264B194);
PPC_FUNC_IMPL(__imp__sub_8264B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B198"))) PPC_WEAK_FUNC(sub_8264B198);
PPC_FUNC_IMPL(__imp__sub_8264B198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// beq cr6,0x8264b1e4
	if (cr6.eq) goto loc_8264B1E4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264b1d4
	if (cr6.eq) goto loc_8264B1D4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r8,775(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 775);
	// lbz r7,774(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 774);
	// lbz r6,773(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 773);
	// b 0x8264ab10
	sub_8264AB10(ctx, base);
	return;
loc_8264B1D4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8264ab10
	sub_8264AB10(ctx, base);
	return;
loc_8264B1E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8264B1F8"))) PPC_WEAK_FUNC(sub_8264B1F8);
PPC_FUNC_IMPL(__imp__sub_8264B1F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264ab10
	sub_8264AB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8264B1FC"))) PPC_WEAK_FUNC(sub_8264B1FC);
PPC_FUNC_IMPL(__imp__sub_8264B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B200"))) PPC_WEAK_FUNC(sub_8264B200);
PPC_FUNC_IMPL(__imp__sub_8264B200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,232(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8264b21c
	if (cr6.eq) goto loc_8264B21C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264b21c
	if (cr6.eq) goto loc_8264B21C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264B21C:
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
}

__attribute__((alias("__imp__sub_8264B220"))) PPC_WEAK_FUNC(sub_8264B220);
PPC_FUNC_IMPL(__imp__sub_8264B220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B224"))) PPC_WEAK_FUNC(sub_8264B224);
PPC_FUNC_IMPL(__imp__sub_8264B224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B228"))) PPC_WEAK_FUNC(sub_8264B228);
PPC_FUNC_IMPL(__imp__sub_8264B228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,232(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8264b244
	if (cr6.eq) goto loc_8264B244;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264b244
	if (cr6.eq) goto loc_8264B244;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8264B244:
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B24C"))) PPC_WEAK_FUNC(sub_8264B24C);
PPC_FUNC_IMPL(__imp__sub_8264B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B250"))) PPC_WEAK_FUNC(sub_8264B250);
PPC_FUNC_IMPL(__imp__sub_8264B250) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264b39c
	if (cr6.eq) goto loc_8264B39C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b29c
	if (cr6.eq) goto loc_8264B29C;
	// li r11,22
	r11.s64 = 22;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264b39c
	goto loc_8264B39C;
loc_8264B29C:
	// li r11,1
	r11.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264b2e8
	if (cr6.eq) goto loc_8264B2E8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8265d840
	sub_8265D840(ctx, base);
loc_8264B2E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263af90
	sub_8263AF90(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264b32c
	if (!cr6.eq) goto loc_8264B32C;
	// lbz r11,214(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 214);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264b320
	if (cr6.eq) goto loc_8264B320;
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264b320
	if (cr6.eq) goto loc_8264B320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
loc_8264B320:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a4d0
	sub_8265A4D0(ctx, base);
loc_8264B32C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264b34c
	if (cr6.eq) goto loc_8264B34C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264B34C:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264b39c
	if (!cr0.eq) goto loc_8264B39C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264b39c
	if (!cr6.eq) goto loc_8264B39C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b37c
	if (cr6.eq) goto loc_8264B37C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264B37C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264b39c
	if (!cr6.eq) goto loc_8264B39C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b39c
	if (cr6.eq) goto loc_8264B39C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264B39C:
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

__attribute__((alias("__imp__sub_8264B3B0"))) PPC_WEAK_FUNC(sub_8264B3B0);
PPC_FUNC_IMPL(__imp__sub_8264B3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B3B4"))) PPC_WEAK_FUNC(sub_8264B3B4);
PPC_FUNC_IMPL(__imp__sub_8264B3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B3B8"))) PPC_WEAK_FUNC(sub_8264B3B8);
PPC_FUNC_IMPL(__imp__sub_8264B3B8) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264B3F8"))) PPC_WEAK_FUNC(sub_8264B3F8);
PPC_FUNC_IMPL(__imp__sub_8264B3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B3FC"))) PPC_WEAK_FUNC(sub_8264B3FC);
PPC_FUNC_IMPL(__imp__sub_8264B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B400"))) PPC_WEAK_FUNC(sub_8264B400);
PPC_FUNC_IMPL(__imp__sub_8264B400) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264B440"))) PPC_WEAK_FUNC(sub_8264B440);
PPC_FUNC_IMPL(__imp__sub_8264B440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B444"))) PPC_WEAK_FUNC(sub_8264B444);
PPC_FUNC_IMPL(__imp__sub_8264B444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B448"))) PPC_WEAK_FUNC(sub_8264B448);
PPC_FUNC_IMPL(__imp__sub_8264B448) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264B488"))) PPC_WEAK_FUNC(sub_8264B488);
PPC_FUNC_IMPL(__imp__sub_8264B488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B48C"))) PPC_WEAK_FUNC(sub_8264B48C);
PPC_FUNC_IMPL(__imp__sub_8264B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B490"))) PPC_WEAK_FUNC(sub_8264B490);
PPC_FUNC_IMPL(__imp__sub_8264B490) {
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
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264B4D0"))) PPC_WEAK_FUNC(sub_8264B4D0);
PPC_FUNC_IMPL(__imp__sub_8264B4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B4D4"))) PPC_WEAK_FUNC(sub_8264B4D4);
PPC_FUNC_IMPL(__imp__sub_8264B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B4D8"))) PPC_WEAK_FUNC(sub_8264B4D8);
PPC_FUNC_IMPL(__imp__sub_8264B4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8264B4E8"))) PPC_WEAK_FUNC(sub_8264B4E8);
PPC_FUNC_IMPL(__imp__sub_8264B4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8264B4EC"))) PPC_WEAK_FUNC(sub_8264B4EC);
PPC_FUNC_IMPL(__imp__sub_8264B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B4F0"))) PPC_WEAK_FUNC(sub_8264B4F0);
PPC_FUNC_IMPL(__imp__sub_8264B4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8264B500"))) PPC_WEAK_FUNC(sub_8264B500);
PPC_FUNC_IMPL(__imp__sub_8264B500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8264B504"))) PPC_WEAK_FUNC(sub_8264B504);
PPC_FUNC_IMPL(__imp__sub_8264B504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B508"))) PPC_WEAK_FUNC(sub_8264B508);
PPC_FUNC_IMPL(__imp__sub_8264B508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B510"))) PPC_WEAK_FUNC(sub_8264B510);
PPC_FUNC_IMPL(__imp__sub_8264B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B518"))) PPC_WEAK_FUNC(sub_8264B518);
PPC_FUNC_IMPL(__imp__sub_8264B518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8264B528"))) PPC_WEAK_FUNC(sub_8264B528);
PPC_FUNC_IMPL(__imp__sub_8264B528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8264B52C"))) PPC_WEAK_FUNC(sub_8264B52C);
PPC_FUNC_IMPL(__imp__sub_8264B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B530"))) PPC_WEAK_FUNC(sub_8264B530);
PPC_FUNC_IMPL(__imp__sub_8264B530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8264B544"))) PPC_WEAK_FUNC(sub_8264B544);
PPC_FUNC_IMPL(__imp__sub_8264B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B548"))) PPC_WEAK_FUNC(sub_8264B548);
PPC_FUNC_IMPL(__imp__sub_8264B548) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b5d0
	if (cr6.eq) goto loc_8264B5D0;
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b5d0
	if (cr6.eq) goto loc_8264B5D0;
	// li r11,24
	r11.s64 = 24;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v13,r7,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8264B5D0:
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264B5F8"))) PPC_WEAK_FUNC(sub_8264B5F8);
PPC_FUNC_IMPL(__imp__sub_8264B5F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264B5FC"))) PPC_WEAK_FUNC(sub_8264B5FC);
PPC_FUNC_IMPL(__imp__sub_8264B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B600"))) PPC_WEAK_FUNC(sub_8264B600);
PPC_FUNC_IMPL(__imp__sub_8264B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8264b664
	if (cr6.eq) goto loc_8264B664;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b664
	if (cr6.eq) goto loc_8264B664;
	// li r11,25
	r11.s64 = 25;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264b684
	goto loc_8264B684;
loc_8264B664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264B684:
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

__attribute__((alias("__imp__sub_8264B698"))) PPC_WEAK_FUNC(sub_8264B698);
PPC_FUNC_IMPL(__imp__sub_8264B698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B69C"))) PPC_WEAK_FUNC(sub_8264B69C);
PPC_FUNC_IMPL(__imp__sub_8264B69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B6A0"))) PPC_WEAK_FUNC(sub_8264B6A0);
PPC_FUNC_IMPL(__imp__sub_8264B6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8264b704
	if (cr6.eq) goto loc_8264B704;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b704
	if (cr6.eq) goto loc_8264B704;
	// li r11,26
	r11.s64 = 26;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264b724
	goto loc_8264B724;
loc_8264B704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264B724:
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

__attribute__((alias("__imp__sub_8264B738"))) PPC_WEAK_FUNC(sub_8264B738);
PPC_FUNC_IMPL(__imp__sub_8264B738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B73C"))) PPC_WEAK_FUNC(sub_8264B73C);
PPC_FUNC_IMPL(__imp__sub_8264B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B740"))) PPC_WEAK_FUNC(sub_8264B740);
PPC_FUNC_IMPL(__imp__sub_8264B740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8264b7a4
	if (cr6.eq) goto loc_8264B7A4;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b7a4
	if (cr6.eq) goto loc_8264B7A4;
	// li r11,27
	r11.s64 = 27;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264b7c4
	goto loc_8264B7C4;
loc_8264B7A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264B7C4:
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

__attribute__((alias("__imp__sub_8264B7D8"))) PPC_WEAK_FUNC(sub_8264B7D8);
PPC_FUNC_IMPL(__imp__sub_8264B7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B7DC"))) PPC_WEAK_FUNC(sub_8264B7DC);
PPC_FUNC_IMPL(__imp__sub_8264B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B7E0"))) PPC_WEAK_FUNC(sub_8264B7E0);
PPC_FUNC_IMPL(__imp__sub_8264B7E0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b868
	if (cr6.eq) goto loc_8264B868;
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b868
	if (cr6.eq) goto loc_8264B868;
	// li r11,28
	r11.s64 = 28;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v13,r7,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8264B868:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264B890"))) PPC_WEAK_FUNC(sub_8264B890);
PPC_FUNC_IMPL(__imp__sub_8264B890) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264B894"))) PPC_WEAK_FUNC(sub_8264B894);
PPC_FUNC_IMPL(__imp__sub_8264B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B898"))) PPC_WEAK_FUNC(sub_8264B898);
PPC_FUNC_IMPL(__imp__sub_8264B898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8264b8fc
	if (cr6.eq) goto loc_8264B8FC;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264b8fc
	if (cr6.eq) goto loc_8264B8FC;
	// li r11,29
	r11.s64 = 29;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8263e0e0
	sub_8263E0E0(ctx, base);
	// b 0x8264b91c
	goto loc_8264B91C;
loc_8264B8FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264B91C:
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

__attribute__((alias("__imp__sub_8264B930"))) PPC_WEAK_FUNC(sub_8264B930);
PPC_FUNC_IMPL(__imp__sub_8264B930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264B934"))) PPC_WEAK_FUNC(sub_8264B934);
PPC_FUNC_IMPL(__imp__sub_8264B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264B938"))) PPC_WEAK_FUNC(sub_8264B938);
PPC_FUNC_IMPL(__imp__sub_8264B938) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8264b968
	if (!cr6.eq) goto loc_8264B968;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8264B968:
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// li r30,1
	r30.s64 = 1;
	// lwz r28,12(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264b988
	if (cr6.eq) goto loc_8264B988;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8264b98c
	if (!cr6.eq) goto loc_8264B98C;
loc_8264B988:
	// li r11,1
	r11.s64 = 1;
loc_8264B98C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// li r27,100
	r27.s64 = 100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264b9e4
	if (!cr6.eq) goto loc_8264B9E4;
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(r28.s32, 10, xer);
	// beq cr6,0x8264b9ac
	if (cr6.eq) goto loc_8264B9AC;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(r28.s32, 8, xer);
	// bne cr6,0x8264b9e4
	if (!cr6.eq) goto loc_8264B9E4;
loc_8264B9AC:
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
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// xoris r7,r3,32768
	ctx.r7.u64 = ctx.r3.u64 ^ 2147483648;
	// subf r6,r3,r27
	ctx.r6.s64 = r27.s64 - ctx.r3.s64;
	// addc r5,r6,r7
	xer.ca = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32);
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r3,r30
	r30.u64 = ctx.r3.u64 & r30.u64;
loc_8264B9E4:
	// cmpwi cr6,r28,24
	cr6.compare<int32_t>(r28.s32, 24, xer);
	// bne cr6,0x8264ba20
	if (!cr6.eq) goto loc_8264BA20;
loc_8264B9EC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,100
	cr6.compare<int32_t>(ctx.r3.s32, 100, xer);
	// ble cr6,0x8264ba60
	if (!cr6.gt) goto loc_8264BA60;
loc_8264BA0C:
	// li r30,0
	r30.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8264BA20:
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(r28.s32, 7, xer);
	// beq cr6,0x8264b9ec
	if (cr6.eq) goto loc_8264B9EC;
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(r28.s32, 15, xer);
	// beq cr6,0x8264ba0c
	if (cr6.eq) goto loc_8264BA0C;
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(r28.s32, 9, xer);
	// bne cr6,0x8264ba60
	if (!cr6.eq) goto loc_8264BA60;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// xoris r9,r3,32768
	ctx.r9.u64 = ctx.r3.u64 ^ 2147483648;
	// subf r8,r3,r27
	ctx.r8.s64 = r27.s64 - ctx.r3.s64;
	// addc r7,r8,r9
	xer.ca = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32);
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r5,r30
	r30.u64 = ctx.r5.u64 & r30.u64;
loc_8264BA60:
	// stb r30,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r30.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264BA6C"))) PPC_WEAK_FUNC(sub_8264BA6C);
PPC_FUNC_IMPL(__imp__sub_8264BA6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8264BA70"))) PPC_WEAK_FUNC(sub_8264BA70);
PPC_FUNC_IMPL(__imp__sub_8264BA70) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8263c098
	sub_8263C098(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,13952
	ctx.r10.s64 = r11.s64 + 13952;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// stb r9,140(r31)
	PPC_STORE_U8(r31.u32 + 140, ctx.r9.u8);
	// lhz r8,14(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// sth r8,170(r31)
	PPC_STORE_U16(r31.u32 + 170, ctx.r8.u16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8264bae4
	if (cr6.eq) goto loc_8264BAE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264bad8
	if (cr6.eq) goto loc_8264BAD8;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8264BAD8:
	// stw r29,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r29.u32);
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(r29.u32, 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8264BAE4:
	// lbz r11,180(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 180);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8264bb68
	if (!cr6.eq) goto loc_8264BB68;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8264bb20
	if (cr6.eq) goto loc_8264BB20;
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82656628
	sub_82656628(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8264bb24
	goto loc_8264BB24;
loc_8264BB20:
	// li r28,0
	r28.s64 = 0;
loc_8264BB24:
	// addi r4,r30,168
	ctx.r4.s64 = r30.s64 + 168;
	// addi r3,r28,188
	ctx.r3.s64 = r28.s64 + 188;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// addi r4,r30,172
	ctx.r4.s64 = r30.s64 + 172;
	// addi r3,r28,189
	ctx.r3.s64 = r28.s64 + 189;
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82639050
	sub_82639050(ctx, base);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8264bbe8
	if (cr6.gt) goto loc_8264BBE8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// b 0x8264bbe8
	goto loc_8264BBE8;
loc_8264BB68:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r8,r30,128
	ctx.r8.s64 = r30.s64 + 128;
	// addi r7,r30,80
	ctx.r7.s64 = r30.s64 + 80;
	// lfs f3,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// lfs f2,168(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lfs f1,144(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8264acd0
	sub_8264ACD0(ctx, base);
	// lbz r11,182(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 182);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x82639050
	sub_82639050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,68(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r31,240
	ctx.r6.s64 = r31.s64 + 240;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	f0.f64 = double(temp.f32);
loc_8264BBE8:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lbz r11,181(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 181);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x8264bc20
	if (cr6.eq) goto loc_8264BC20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264bc28
	if (cr6.eq) goto loc_8264BC28;
	// lbz r8,775(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 775);
	// lbz r7,774(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 774);
	// lbz r6,773(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 773);
	// b 0x8264bc34
	goto loc_8264BC34;
loc_8264BC20:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8264BC28:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8264BC34:
	// bl 0x8264ab10
	sub_8264AB10(ctx, base);
	// lfs f0,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 148);
	f0.f64 = double(temp.f32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stfs f0,404(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 404, temp.u32);
	// lfs f13,152(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 408, temp.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8264bcb4
	if (cr6.eq) goto loc_8264BCB4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ac18
	sub_8264AC18(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8264bcb4
	if (cr6.gt) goto loc_8264BCB4;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f11.f64 = double(temp.f32);
	// fsel f9,f10,f13,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fsubs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f0,f8,f12,f9
	f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x8264bca8
	if (!cr6.lt) goto loc_8264BCA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4932(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4932);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x8264bcb0
	goto loc_8264BCB0;
loc_8264BCA8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
loc_8264BCB0:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
loc_8264BCB4:
	// lbz r11,183(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 183);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x8264bce8
	if (!cr6.eq) goto loc_8264BCE8;
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8264bcd4
	if (!cr6.eq) goto loc_8264BCD4;
	// li r11,0
	r11.s64 = 0;
	// b 0x8264bce8
	goto loc_8264BCE8;
loc_8264BCD4:
	// lbz r11,180(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 180);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8264bce8
	if (cr6.eq) goto loc_8264BCE8;
	// li r11,2
	r11.s64 = 2;
loc_8264BCE8:
	// stb r11,42(r31)
	PPC_STORE_U8(r31.u32 + 42, r11.u8);
	// lbz r11,184(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 184);
	// stb r11,208(r31)
	PPC_STORE_U8(r31.u32 + 208, r11.u8);
	// lbz r10,187(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 187);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264bd0c
	if (cr6.eq) goto loc_8264BD0C;
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,33(r31)
	PPC_STORE_U8(r31.u32 + 33, ctx.r10.u8);
loc_8264BD0C:
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f13,164(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lhz r11,156(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 156);
	// sth r11,510(r31)
	PPC_STORE_U16(r31.u32 + 510, r11.u16);
	// lbz r11,186(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 186);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8264bd3c
	if (cr6.lt) goto loc_8264BD3C;
	// stb r11,209(r31)
	PPC_STORE_U8(r31.u32 + 209, r11.u8);
	// b 0x8264bd48
	goto loc_8264BD48;
loc_8264BD3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82c66ea8
	sub_82C66EA8(ctx, base);
	// stb r3,209(r31)
	PPC_STORE_U8(r31.u32 + 209, ctx.r3.u8);
loc_8264BD48:
	// lbz r11,185(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 185);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,210(r31)
	PPC_STORE_U8(r31.u32 + 210, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8264BD5C"))) PPC_WEAK_FUNC(sub_8264BD5C);
PPC_FUNC_IMPL(__imp__sub_8264BD5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264BD60"))) PPC_WEAK_FUNC(sub_8264BD60);
PPC_FUNC_IMPL(__imp__sub_8264BD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lbz r11,33(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// li r10,432
	ctx.r10.s64 = 432;
	// stb r8,187(r4)
	PPC_STORE_U8(ctx.r4.u32 + 187, ctx.r8.u8);
	// li r9,48
	ctx.r9.s64 = 48;
	// lbz r5,208(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// li r7,448
	ctx.r7.s64 = 448;
	// stb r5,184(r4)
	PPC_STORE_U8(ctx.r4.u32 + 184, ctx.r5.u8);
	// li r6,64
	ctx.r6.s64 = 64;
	// lbz r4,209(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 209);
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// stb r4,186(r30)
	PPC_STORE_U8(r30.u32 + 186, ctx.r4.u8);
	// lhz r11,170(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 170);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// lbz r11,233(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 233);
	// addi r11,r11,-255
	r11.s64 = r11.s64 + -255;
	// addic r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	// subfe r5,r8,r11
	temp.u8 = (~ctx.r8.u32 + r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r5,181(r30)
	PPC_STORE_U8(r30.u32 + 181, ctx.r5.u8);
	// lwz r4,528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 160, temp.u32);
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// stb r11,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r11.u8);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// lfs f12,404(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 404);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,148(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 148, temp.u32);
	// lfs f11,408(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 408);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,152(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 152, temp.u32);
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r30,r9
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r30,r6
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82639058
	sub_82639058(ctx, base);
	// stfs f1,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 144, temp.u32);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r7,288
	ctx.r7.s64 = 288;
	// addi r6,r8,5472
	ctx.r6.s64 = ctx.r8.s64 + 5472;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,352
	ctx.r4.s64 = 352;
	// stb r9,180(r30)
	PPC_STORE_U8(r30.u32 + 180, ctx.r9.u8);
	// li r3,32
	ctx.r3.s64 = 32;
	// li r11,368
	r11.s64 = 368;
	// li r10,128
	ctx.r10.s64 = 128;
	// lbz r8,414(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 414);
	// stb r8,182(r30)
	PPC_STORE_U8(r30.u32 + 182, ctx.r8.u8);
	// lbz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 412);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f10,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 168, temp.u32);
	// lbz r9,413(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 413);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfsx f9,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 172, temp.u32);
	// lvx128 v12,r31,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r30,r5
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r31,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r30,r3
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r31,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r30,r10
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// lfs f8,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 176, temp.u32);
	// lbz r5,42(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 42);
	// stb r5,183(r30)
	PPC_STORE_U8(r30.u32 + 183, ctx.r5.u8);
	// lhz r4,510(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 510);
	// rotlwi r3,r4,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 156, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264BEC4"))) PPC_WEAK_FUNC(sub_8264BEC4);
PPC_FUNC_IMPL(__imp__sub_8264BEC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264BEC8"))) PPC_WEAK_FUNC(sub_8264BEC8);
PPC_FUNC_IMPL(__imp__sub_8264BEC8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8266a7c8
	sub_8266A7C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264bd60
	sub_8264BD60(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,544
	ctx.r4.s64 = 544;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,544
	ctx.r9.s64 = 544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8264ba70
	sub_8264BA70(ctx, base);
	// addi r10,r31,224
	ctx.r10.s64 = r31.s64 + 224;
	// li r9,18
	ctx.r9.s64 = 18;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subf r8,r3,r31
	ctx.r8.s64 = r31.s64 - ctx.r3.s64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8264BF44:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x8264bf44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264BF44;
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264bfec
	if (cr6.eq) goto loc_8264BFEC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,18
	r11.s64 = 18;
	// addi r7,r9,10812
	ctx.r7.s64 = ctx.r9.s64 + 10812;
	// li r8,288
	ctx.r8.s64 = 288;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// stw r6,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r3,504(r30)
	PPC_STORE_U32(r30.u32 + 504, ctx.r3.u32);
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// addi r11,r9,-4
	r11.s64 = ctx.r9.s64 + -4;
loc_8264BFC8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8264bfc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264BFC8;
loc_8264BFEC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82648b98
	sub_82648B98(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// rlwinm r4,r9,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82bf7968
	sub_82BF7968(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8264c050
	if (cr6.eq) goto loc_8264C050;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,160(r30)
	PPC_STORE_U32(r30.u32 + 160, ctx.r3.u32);
loc_8264C050:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264C068"))) PPC_WEAK_FUNC(sub_8264C068);
PPC_FUNC_IMPL(__imp__sub_8264C068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C06C"))) PPC_WEAK_FUNC(sub_8264C06C);
PPC_FUNC_IMPL(__imp__sub_8264C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C070"))) PPC_WEAK_FUNC(sub_8264C070);
PPC_FUNC_IMPL(__imp__sub_8264C070) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,13952
	ctx.r10.s64 = r11.s64 + 13952;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8263c340
	sub_8263C340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8264c0c8
	if (cr6.eq) goto loc_8264C0C8;
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
loc_8264C0C8:
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

__attribute__((alias("__imp__sub_8264C0E0"))) PPC_WEAK_FUNC(sub_8264C0E0);
PPC_FUNC_IMPL(__imp__sub_8264C0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C0E4"))) PPC_WEAK_FUNC(sub_8264C0E4);
PPC_FUNC_IMPL(__imp__sub_8264C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C0E8"))) PPC_WEAK_FUNC(sub_8264C0E8);
PPC_FUNC_IMPL(__imp__sub_8264C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264c104
	if (cr6.eq) goto loc_8264C104;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8264c118
	if (!cr6.eq) goto loc_8264C118;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
loc_8264C104:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// sth r6,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r6.u16);
	// blr 
	return;
loc_8264C118:
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x8264c140
	if (cr6.eq) goto loc_8264C140;
loc_8264C12C:
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8264c12c
	if (!cr6.eq) goto loc_8264C12C;
loc_8264C140:
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// sth r6,18(r9)
	PPC_STORE_U16(ctx.r9.u32 + 18, ctx.r6.u16);
}

__attribute__((alias("__imp__sub_8264C148"))) PPC_WEAK_FUNC(sub_8264C148);
PPC_FUNC_IMPL(__imp__sub_8264C148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C14C"))) PPC_WEAK_FUNC(sub_8264C14C);
PPC_FUNC_IMPL(__imp__sub_8264C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C150"))) PPC_WEAK_FUNC(sub_8264C150);
PPC_FUNC_IMPL(__imp__sub_8264C150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r4.u32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r5,r1,-28
	ctx.r5.s64 = ctx.r1.s64 + -28;
loc_8264C16C:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lhz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 176);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8264c1b4
	if (!cr6.gt) goto loc_8264C1B4;
	// lwz r4,172(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
loc_8264C18C:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// xor r31,r31,r30
	r31.u64 = r31.u64 ^ r30.u64;
	// xor r31,r31,r9
	r31.u64 = r31.u64 ^ ctx.r9.u64;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x8264c1d8
	if (cr6.eq) goto loc_8264C1D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264c18c
	if (cr6.lt) goto loc_8264C18C;
loc_8264C1B4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x8264c16c
	if (cr6.lt) goto loc_8264C16C;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8264C1D8:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8264C1F0"))) PPC_WEAK_FUNC(sub_8264C1F0);
PPC_FUNC_IMPL(__imp__sub_8264C1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C1F4"))) PPC_WEAK_FUNC(sub_8264C1F4);
PPC_FUNC_IMPL(__imp__sub_8264C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C1F8"))) PPC_WEAK_FUNC(sub_8264C1F8);
PPC_FUNC_IMPL(__imp__sub_8264C1F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8264c374
	if (cr6.eq) goto loc_8264C374;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r27,48(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x8264c278
	if (!cr6.eq) goto loc_8264C278;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8264c258
	if (cr6.eq) goto loc_8264C258;
	// stw r10,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r10.u32);
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// sth r11,16(r27)
	PPC_STORE_U16(r27.u32 + 16, r11.u16);
loc_8264C258:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// li r11,23
	r11.s64 = 23;
	// subfc r8,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// addze r7,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r5.u32);
	// b 0x8264c2c4
	goto loc_8264C2C4;
loc_8264C278:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x8264c374
	if (cr6.lt) goto loc_8264C374;
loc_8264C28C:
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// beq cr6,0x8264c2b4
	if (cr6.eq) goto loc_8264C2B4;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bge cr6,0x8264c28c
	if (!cr6.lt) goto loc_8264C28C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_8264C2B4:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lhz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 18);
	// sth r8,18(r9)
	PPC_STORE_U16(ctx.r9.u32 + 18, ctx.r8.u16);
loc_8264C2C4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8264c350
	if (cr6.eq) goto loc_8264C350;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82658808
	sub_82658808(ctx, base);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,13396
	ctx.r9.s64 = r11.s64 + 13396;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r11,210(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 210);
	// lbz r8,210(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 210);
	// or r7,r11,r8
	ctx.r7.u64 = r11.u64 | ctx.r8.u64;
	// and r11,r7,r4
	r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r6,r11,1,28,30
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xE;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lhzx r11,r6,r9
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lhz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// sth r9,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r9.u16);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8264cc78
	sub_8264CC78(ctx, base);
loc_8264C350:
	// lhz r30,16(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 16);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264C374:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264C378"))) PPC_WEAK_FUNC(sub_8264C378);
PPC_FUNC_IMPL(__imp__sub_8264C378) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264C37C"))) PPC_WEAK_FUNC(sub_8264C37C);
PPC_FUNC_IMPL(__imp__sub_8264C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C380"))) PPC_WEAK_FUNC(sub_8264C380);
PPC_FUNC_IMPL(__imp__sub_8264C380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264c3bc
	if (cr6.eq) goto loc_8264C3BC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// beq cr6,0x8264c3b4
	if (cr6.eq) goto loc_8264C3B4;
loc_8264C398:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x8264c3bc
	if (cr6.lt) goto loc_8264C3BC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x8264c398
	if (!cr6.eq) goto loc_8264C398;
loc_8264C3B4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
loc_8264C3BC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8264C3C0"))) PPC_WEAK_FUNC(sub_8264C3C0);
PPC_FUNC_IMPL(__imp__sub_8264C3C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C3C4"))) PPC_WEAK_FUNC(sub_8264C3C4);
PPC_FUNC_IMPL(__imp__sub_8264C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C3C8"))) PPC_WEAK_FUNC(sub_8264C3C8);
PPC_FUNC_IMPL(__imp__sub_8264C3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8264c3d8
	if (!cr6.eq) goto loc_8264C3D8;
	// blr 
	return;
loc_8264C3D8:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_8264C3E8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bge cr6,0x8264c3e8
	if (!cr6.lt) goto loc_8264C3E8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264C400"))) PPC_WEAK_FUNC(sub_8264C400);
PPC_FUNC_IMPL(__imp__sub_8264C400) {
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwimi r10,r11,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r10.u8);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 22);
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x8264cc78
	sub_8264CC78(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r28,0
	r28.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// mr r27,r28
	r27.u64 = r28.u64;
	// stw r6,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r6.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// lbz r5,26(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 26);
	// subfic r4,r5,2
	xer.ca = ctx.r5.u32 <= 2;
	ctx.r4.s64 = 2 - ctx.r5.s64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 34);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r11,r3,r31
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r31.u32);
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// lwz r6,184(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,-4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stwx r4,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stw r3,184(r11)
	PPC_STORE_U32(r11.u32 + 184, ctx.r3.u32);
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// sth r8,34(r11)
	PPC_STORE_U16(r11.u32 + 34, ctx.r8.u16);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lbz r11,26(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 26);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r30,r9,r31
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// beq cr6,0x8264c504
	if (cr6.eq) goto loc_8264C504;
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// addi r10,r30,192
	ctx.r10.s64 = r30.s64 + 192;
	// lwz r9,196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// neg r27,r11
	r27.s64 = -r11.s64;
	// subf r11,r4,r9
	r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262d7d8
	sub_8262D7D8(ctx, base);
	// lwz r8,196(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r6,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r6.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
loc_8264C504:
	// stw r28,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r28.u32);
	// addi r6,r30,172
	ctx.r6.s64 = r30.s64 + 172;
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// mr r11,r31
	r11.u64 = r31.u64;
	// lhz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8264c594
	if (!cr6.lt) goto loc_8264C594;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divwu r10,r8,r9
	ctx.r10.u32 = ctx.r8.u32 / ctx.r9.u32;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_8264C548:
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r7,r11,28
	ctx.r7.s64 = r11.s64 + 28;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8264C55C:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8264c55c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264C55C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, r11.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// bne cr6,0x8264c584
	if (!cr6.eq) goto loc_8264C584;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8264C584:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x8264c548
	if (!cr0.eq) goto loc_8264C548;
loc_8264C594:
	// lhz r11,4(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r10.u16);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264C5B0"))) PPC_WEAK_FUNC(sub_8264C5B0);
PPC_FUNC_IMPL(__imp__sub_8264C5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264C5B4"))) PPC_WEAK_FUNC(sub_8264C5B4);
PPC_FUNC_IMPL(__imp__sub_8264C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264C5B8"))) PPC_WEAK_FUNC(sub_8264C5B8);
PPC_FUNC_IMPL(__imp__sub_8264C5B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264c5fc
	if (!cr6.eq) goto loc_8264C5FC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8264c620
	goto loc_8264C620;
loc_8264C5FC:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r8,23
	cr6.compare<uint32_t>(ctx.r8.u32, 23, xer);
	// blt cr6,0x8264c620
	if (cr6.lt) goto loc_8264C620;
loc_8264C60C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r8,23
	cr6.compare<uint32_t>(ctx.r8.u32, 23, xer);
	// bge cr6,0x8264c60c
	if (!cr6.lt) goto loc_8264C60C;
loc_8264C620:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bne cr6,0x8264c700
	if (!cr6.eq) goto loc_8264C700;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264c700
	if (cr6.eq) goto loc_8264C700;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lhz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r7,18(r30)
	PPC_STORE_U16(r30.u32 + 18, ctx.r7.u16);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// lhz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// sth r6,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r6.u16);
loc_8264C654:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264c6f8
	if (cr6.eq) goto loc_8264C6F8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82658808
	sub_82658808(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264cda8
	sub_8264CDA8(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r11,13396
	ctx.r10.s64 = r11.s64 + 13396;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r4,210(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 210);
	// lbz r3,210(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 210);
	// or r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// and r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	// rlwinm r9,r11,1,28,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xE;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r6,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r6.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lhz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// subf r4,r7,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r7.s64;
	// sth r4,20(r11)
	PPC_STORE_U16(r11.u32 + 20, ctx.r4.u16);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264c6f8
	if (cr6.eq) goto loc_8264C6F8;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | r30.u64;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
loc_8264C6F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_8264C700:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264c744
	if (cr6.eq) goto loc_8264C744;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,27
	cr6.compare<uint32_t>(ctx.r10.u32, 27, xer);
	// bne cr6,0x8264c744
	if (!cr6.eq) goto loc_8264C744;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// sth r7,18(r30)
	PPC_STORE_U16(r30.u32 + 18, ctx.r7.u16);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, r30.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// sth r4,18(r5)
	PPC_STORE_U16(ctx.r5.u32 + 18, ctx.r4.u16);
	// b 0x8264c654
	goto loc_8264C654;
loc_8264C744:
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264c770
	if (cr6.eq) goto loc_8264C770;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lhz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// sth r10,18(r30)
	PPC_STORE_U16(r30.u32 + 18, ctx.r10.u16);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lhz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// sth r7,16(r8)
	PPC_STORE_U16(ctx.r8.u32 + 16, ctx.r7.u16);
	// b 0x8264c654
	goto loc_8264C654;
loc_8264C770:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// sth r9,18(r30)
	PPC_STORE_U16(r30.u32 + 18, ctx.r9.u16);
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8264C79C"))) PPC_WEAK_FUNC(sub_8264C79C);
PPC_FUNC_IMPL(__imp__sub_8264C79C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264C7A0"))) PPC_WEAK_FUNC(sub_8264C7A0);
PPC_FUNC_IMPL(__imp__sub_8264C7A0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,20(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// lwz r5,24(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r11,16(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// beq cr6,0x8264c800
	if (cr6.eq) goto loc_8264C800;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lhz r11,16(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r11.u16);
	// b 0x8264c810
	goto loc_8264C810;
loc_8264C800:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r11.u16);
loc_8264C810:
	// lbz r11,28(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 28);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, r11.u8);
	// lbz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8264c84c
	if (cr6.eq) goto loc_8264C84C;
	// lbz r11,232(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264c84c
	if (cr6.eq) goto loc_8264C84C;
	// lwz r11,204(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// lwz r10,204(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8264c84c
	if (cr6.eq) goto loc_8264C84C;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8264C84C:
	// lbz r11,232(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// li r22,0
	r22.s64 = 0;
	// addi r9,r11,-5
	ctx.r9.s64 = r11.s64 + -5;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FC;
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r11.u8);
	// lwzx r30,r6,r10
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// stw r5,8(r23)
	PPC_STORE_U32(r23.u32 + 8, ctx.r5.u32);
	// lwz r11,28(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lhz r31,0(r3)
	r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// stb r8,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r8.u8);
	// stb r22,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r22.u8);
	// bne cr6,0x8264c8fc
	if (!cr6.eq) goto loc_8264C8FC;
	// li r11,2
	r11.s64 = 2;
	// lwz r4,12(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r11.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264c8d8
	if (cr6.eq) goto loc_8264C8D8;
	// lbz r10,146(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r9.u8);
loc_8264C8D8:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r8.u8);
	// b 0x8264c90c
	goto loc_8264C90C;
loc_8264C8FC:
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// bne cr6,0x8264c90c
	if (!cr6.eq) goto loc_8264C90C;
	// li r11,2
	r11.s64 = 2;
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r11.u8);
loc_8264C90C:
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264c934
	if (cr6.eq) goto loc_8264C934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826588c0
	sub_826588C0(ctx, base);
	// lbz r10,146(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stb r9,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r9.u8);
loc_8264C934:
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(r31.s32, 22, xer);
	// bne cr6,0x8264c97c
	if (!cr6.eq) goto loc_8264C97C;
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,20(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// addi r7,r10,13396
	ctx.r7.s64 = ctx.r10.s64 + 13396;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r4,210(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 210);
	// lbz r3,210(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 210);
	// or r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r5,r8,1,28,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xE;
	// lhzx r11,r5,r7
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r11,r6
	ctx.r4.u64 = r11.u64 + ctx.r6.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
loc_8264C97C:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// sth r22,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, r22.u16);
	// sth r22,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r22.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// sth r22,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r22.u16);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r11,48(r23)
	PPC_STORE_U32(r23.u32 + 48, r11.u32);
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x8264cda8
	sub_8264CDA8(ctx, base);
	// lhz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// addi r25,r30,172
	r25.s64 = r30.s64 + 172;
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8264ca28
	if (!cr6.gt) goto loc_8264CA28;
	// lbz r7,147(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8264C9C8:
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 19);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x8264ca28
	if (cr6.lt) goto loc_8264CA28;
	// bgt cr6,0x8264ca18
	if (cr6.gt) goto loc_8264CA18;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8264ca28
	if (cr6.lt) goto loc_8264CA28;
	// bgt cr6,0x8264ca18
	if (cr6.gt) goto loc_8264CA18;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// xor r9,r30,r6
	ctx.r9.u64 = r30.u64 ^ ctx.r6.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 ^ r30.u64;
	// lwz r9,212(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lwz r3,212(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x8264ca28
	if (cr6.lt) goto loc_8264CA28;
loc_8264CA18:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmpw cr6,r24,r8
	cr6.compare<int32_t>(r24.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264c9c8
	if (cr6.lt) goto loc_8264C9C8;
loc_8264CA28:
	// lhz r11,6(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 6);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r11,18
	ctx.r10.u64 = r11.u32 & 0x3FFF;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// subfc r9,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r24
	r31.u64 = ctx.r7.u64 & r24.u64;
	// bl 0x8264ccf0
	sub_8264CCF0(ctx, base);
	// lhz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpw cr6,r31,r6
	cr6.compare<int32_t>(r31.s32, ctx.r6.s32, xer);
	// bge cr6,0x8264ca90
	if (!cr6.lt) goto loc_8264CA90;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_8264CA6C:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lhz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x8264ca6c
	if (cr6.lt) goto loc_8264CA6C;
loc_8264CA90:
	// lwz r26,48(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,29(r23)
	ctx.r4.u64 = PPC_LOAD_U8(r23.u32 + 29);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r8,15
	ctx.r7.s64 = ctx.r8.s64 + 15;
	// rlwinm r11,r7,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,32(r26)
	PPC_STORE_U16(r26.u32 + 32, r11.u16);
	// beq cr6,0x8264cbe4
	if (cr6.eq) goto loc_8264CBE4;
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bge cr6,0x8264cb08
	if (!cr6.lt) goto loc_8264CB08;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8264CB08:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r22
	r27.u64 = r22.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// subf r29,r28,r31
	r29.s64 = r31.s64 - r28.s64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble cr6,0x8264cb60
	if (!cr6.gt) goto loc_8264CB60;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8264CB34:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264cb58
	if (cr6.eq) goto loc_8264CB58;
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8264CB58:
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// bdnz 0x8264cb34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264CB34;
loc_8264CB60:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r11,32(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - r31.s64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262d7d8
	sub_8262D7D8(ctx, base);
	// lhz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// stw r31,28(r26)
	PPC_STORE_U32(r26.u32 + 28, r31.u32);
	// lhz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x8264cbe8
	if (!cr6.lt) goto loc_8264CBE8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_8264CBAC:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bne cr6,0x8264cbc8
	if (!cr6.eq) goto loc_8264CBC8;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8264CBC8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lhz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264cbac
	if (cr6.lt) goto loc_8264CBAC;
	// b 0x8264cbe8
	goto loc_8264CBE8;
loc_8264CBE4:
	// stw r22,28(r26)
	PPC_STORE_U32(r26.u32 + 28, r22.u32);
loc_8264CBE8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lhz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// lwz r5,28(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,26(r26)
	ctx.r8.u64 = PPC_LOAD_U8(r26.u32 + 26);
	// subfic r7,r8,2
	xer.ca = ctx.r8.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r26
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r26.u32);
	// addi r31,r11,180
	r31.s64 = r11.s64 + 180;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// sth r5,34(r26)
	PPC_STORE_U16(r26.u32 + 34, ctx.r5.u16);
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
	// bne cr6,0x8264cc50
	if (!cr6.eq) goto loc_8264CC50;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264CC50:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r23.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8264CC70"))) PPC_WEAK_FUNC(sub_8264CC70);
PPC_FUNC_IMPL(__imp__sub_8264CC70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8264CC74"))) PPC_WEAK_FUNC(sub_8264CC74);
PPC_FUNC_IMPL(__imp__sub_8264CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264CC78"))) PPC_WEAK_FUNC(sub_8264CC78);
PPC_FUNC_IMPL(__imp__sub_8264CC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// subf r8,r9,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lhz r11,24(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 24);
	// lhz r9,22(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 22);
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// subf r5,r4,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// sth r5,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r5.u16);
	// subf r4,r6,r11
	ctx.r4.s64 = r11.s64 - ctx.r6.s64;
	// sth r8,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r8.u16);
	// sth r4,24(r7)
	PPC_STORE_U16(ctx.r7.u32 + 24, ctx.r4.u16);
}

__attribute__((alias("__imp__sub_8264CCEC"))) PPC_WEAK_FUNC(sub_8264CCEC);
PPC_FUNC_IMPL(__imp__sub_8264CCEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264CCF0"))) PPC_WEAK_FUNC(sub_8264CCF0);
PPC_FUNC_IMPL(__imp__sub_8264CCF0) {
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
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r28,r11,r6
	r28.u64 = r11.u64 + ctx.r6.u64;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// subf r27,r4,r11
	r27.s64 = r11.s64 - ctx.r4.s64;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// bge cr6,0x8264cd48
	if (!cr6.lt) goto loc_8264CD48;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8264cd38
	if (cr6.lt) goto loc_8264CD38;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8264CD38:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7bd0
	sub_82BF7BD0(ctx, base);
loc_8264CD48:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r30,r9
	ctx.r7.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = r11.u64 + ctx.r8.u64;
	// add r5,r27,r9
	ctx.r5.u64 = r27.u64 + ctx.r9.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r30,r7,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826345b0
	sub_826345B0(ctx, base);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// rlwinm r5,r3,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x826345b0
	sub_826345B0(ctx, base);
	// sth r28,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264CDA4"))) PPC_WEAK_FUNC(sub_8264CDA4);
PPC_FUNC_IMPL(__imp__sub_8264CDA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8264CDA8"))) PPC_WEAK_FUNC(sub_8264CDA8);
PPC_FUNC_IMPL(__imp__sub_8264CDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264cdc8
	if (!cr6.gt) goto loc_8264CDC8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264CDC8:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8264cddc
	if (cr6.gt) goto loc_8264CDDC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264CDDC:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lhz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 24);
	// lhz r11,22(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// lhz r11,20(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 20);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r10,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, ctx.r10.u16);
	// sth r5,22(r6)
	PPC_STORE_U16(ctx.r6.u32 + 22, ctx.r5.u16);
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, r11.u16);
	// lwz r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8264ce5c
	if (cr6.gt) goto loc_8264CE5C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264CE5C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
}

__attribute__((alias("__imp__sub_8264CE60"))) PPC_WEAK_FUNC(sub_8264CE60);
PPC_FUNC_IMPL(__imp__sub_8264CE60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264CE64"))) PPC_WEAK_FUNC(sub_8264CE64);
PPC_FUNC_IMPL(__imp__sub_8264CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264CE68"))) PPC_WEAK_FUNC(sub_8264CE68);
PPC_FUNC_IMPL(__imp__sub_8264CE68) {
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
	// bl 0x8264c7a0
	sub_8264C7A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826593a8
	sub_826593A8(ctx, base);
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

__attribute__((alias("__imp__sub_8264CEA8"))) PPC_WEAK_FUNC(sub_8264CEA8);
PPC_FUNC_IMPL(__imp__sub_8264CEA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264CEAC"))) PPC_WEAK_FUNC(sub_8264CEAC);
PPC_FUNC_IMPL(__imp__sub_8264CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264CEB0"))) PPC_WEAK_FUNC(sub_8264CEB0);
PPC_FUNC_IMPL(__imp__sub_8264CEB0) {
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
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// bl 0x8264c7a0
	sub_8264C7A0(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8264ceec
	if (cr6.eq) goto loc_8264CEEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826593a8
	sub_826593A8(ctx, base);
loc_8264CEEC:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264cf3c
	if (!cr0.eq) goto loc_8264CF3C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264cf3c
	if (!cr6.eq) goto loc_8264CF3C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264cf1c
	if (cr6.eq) goto loc_8264CF1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264CF1C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264cf3c
	if (!cr6.eq) goto loc_8264CF3C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264cf3c
	if (cr6.eq) goto loc_8264CF3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264CF3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264CF44"))) PPC_WEAK_FUNC(sub_8264CF44);
PPC_FUNC_IMPL(__imp__sub_8264CF44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264CF48"))) PPC_WEAK_FUNC(sub_8264CF48);
PPC_FUNC_IMPL(__imp__sub_8264CF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r31,180(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// bge cr6,0x8264cfe8
	if (!cr6.lt) goto loc_8264CFE8;
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264cfe8
	if (cr6.eq) goto loc_8264CFE8;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r9,-20
	ctx.r10.s64 = ctx.r9.s64 + -20;
	// xoris r8,r11,32768
	ctx.r8.u64 = r11.u64 ^ 2147483648;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addc r3,r7,r8
	xer.ca = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32);
	ctx.r3.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfe r8,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8264cfe8
	if (cr6.lt) goto loc_8264CFE8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
loc_8264CF9C:
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// beq cr6,0x8264cfd8
	if (cr6.eq) goto loc_8264CFD8;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8264cfbc
	if (cr6.gt) goto loc_8264CFBC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264CFBC:
	// lbz r10,38(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// rlwinm r4,r10,0,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8264cfd8
	if (cr6.eq) goto loc_8264CFD8;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x8264cff4
	if (cr6.lt) goto loc_8264CFF4;
loc_8264CFD8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bge cr6,0x8264cf9c
	if (!cr6.lt) goto loc_8264CF9C;
loc_8264CFE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8264CFF4:
	// lbz r11,37(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r9.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8264D00C"))) PPC_WEAK_FUNC(sub_8264D00C);
PPC_FUNC_IMPL(__imp__sub_8264D00C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D010"))) PPC_WEAK_FUNC(sub_8264D010);
PPC_FUNC_IMPL(__imp__sub_8264D010) {
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
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d034
	if (cr6.eq) goto loc_8264D034;
	// bl 0x82659480
	sub_82659480(ctx, base);
loc_8264D034:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8264D04C"))) PPC_WEAK_FUNC(sub_8264D04C);
PPC_FUNC_IMPL(__imp__sub_8264D04C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D050"))) PPC_WEAK_FUNC(sub_8264D050);
PPC_FUNC_IMPL(__imp__sub_8264D050) {
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
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r9,37(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 37);
	// rlwimi r9,r11,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r10)
	PPC_STORE_U8(ctx.r10.u32 + 37, ctx.r9.u8);
	// lwz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8264d0b0
	if (cr6.eq) goto loc_8264D0B0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8264d0a4
	if (cr6.eq) goto loc_8264D0A4;
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d0a4
	if (cr6.eq) goto loc_8264D0A4;
	// bl 0x82659480
	sub_82659480(ctx, base);
loc_8264D0A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// b 0x8264d12c
	goto loc_8264D12C;
loc_8264D0B0:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// beq cr6,0x8264d0d4
	if (cr6.eq) goto loc_8264D0D4;
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d0d4
	if (cr6.eq) goto loc_8264D0D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659480
	sub_82659480(ctx, base);
loc_8264D0D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c400
	sub_8264C400(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264d12c
	if (!cr0.eq) goto loc_8264D12C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264d12c
	if (!cr6.eq) goto loc_8264D12C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d10c
	if (cr6.eq) goto loc_8264D10C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8264D10C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264d12c
	if (!cr6.eq) goto loc_8264D12C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d12c
	if (cr6.eq) goto loc_8264D12C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8264D12C:
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

__attribute__((alias("__imp__sub_8264D140"))) PPC_WEAK_FUNC(sub_8264D140);
PPC_FUNC_IMPL(__imp__sub_8264D140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D144"))) PPC_WEAK_FUNC(sub_8264D144);
PPC_FUNC_IMPL(__imp__sub_8264D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264D148"))) PPC_WEAK_FUNC(sub_8264D148);
PPC_FUNC_IMPL(__imp__sub_8264D148) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8264d180
	if (cr0.lt) goto loc_8264D180;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264D168:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82664c48
	sub_82664C48(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x8264d168
	if (!cr0.lt) goto loc_8264D168;
loc_8264D180:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8264d1a8
	if (cr0.lt) goto loc_8264D1A8;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8264D190:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82664c48
	sub_82664C48(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x8264d190
	if (!cr0.lt) goto loc_8264D190;
loc_8264D1A8:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x82664c48
	sub_82664C48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264D1B4"))) PPC_WEAK_FUNC(sub_8264D1B4);
PPC_FUNC_IMPL(__imp__sub_8264D1B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264D1B8"))) PPC_WEAK_FUNC(sub_8264D1B8);
PPC_FUNC_IMPL(__imp__sub_8264D1B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x82c5a808
	sub_82C5A808(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264d278
	if (!cr6.gt) goto loc_8264D278;
	// li r28,0
	r28.s64 = 0;
loc_8264D1F4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lbz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x8264d220
	if (!cr6.eq) goto loc_8264D220;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x8264d24c
	goto loc_8264D24C;
loc_8264D220:
	// cmpwi cr6,r23,5
	cr6.compare<int32_t>(r23.s32, 5, xer);
	// bne cr6,0x8264d264
	if (!cr6.eq) goto loc_8264D264;
	// lwz r4,204(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82665818
	sub_82665818(ctx, base);
	// lwz r11,204(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8264d264
	if (!cr6.eq) goto loc_8264D264;
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
loc_8264D24C:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c59930
	sub_82C59930(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82c58a80
	sub_82C58A80(ctx, base);
loc_8264D264:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8264d1f4
	if (cr6.lt) goto loc_8264D1F4;
loc_8264D278:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264D27C"))) PPC_WEAK_FUNC(sub_8264D27C);
PPC_FUNC_IMPL(__imp__sub_8264D27C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8264D280"))) PPC_WEAK_FUNC(sub_8264D280);
PPC_FUNC_IMPL(__imp__sub_8264D280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8264d294
	if (!cr6.eq) goto loc_8264D294;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8264D294:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8264d2a8
	if (!cr6.eq) goto loc_8264D2A8;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8264D2A8:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,212(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// subfc r5,r6,r7
	xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D2D4"))) PPC_WEAK_FUNC(sub_8264D2D4);
PPC_FUNC_IMPL(__imp__sub_8264D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264D2D8"))) PPC_WEAK_FUNC(sub_8264D2D8);
PPC_FUNC_IMPL(__imp__sub_8264D2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,34(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// sth r7,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, ctx.r7.u16);
}

__attribute__((alias("__imp__sub_8264D2FC"))) PPC_WEAK_FUNC(sub_8264D2FC);
PPC_FUNC_IMPL(__imp__sub_8264D2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D300"))) PPC_WEAK_FUNC(sub_8264D300);
PPC_FUNC_IMPL(__imp__sub_8264D300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,38(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 38);
	// lhz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8264d358
	if (!cr6.eq) goto loc_8264D358;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r5.u32);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// sth r10,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r10.u16);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// b 0x8264d394
	goto loc_8264D394;
loc_8264D358:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,-4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r5,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, ctx.r5.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhz r11,32(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// sth r11,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, r11.u16);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
loc_8264D394:
	// lhz r11,34(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// sth r7,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, ctx.r7.u16);
}

__attribute__((alias("__imp__sub_8264D3B8"))) PPC_WEAK_FUNC(sub_8264D3B8);
PPC_FUNC_IMPL(__imp__sub_8264D3B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D3BC"))) PPC_WEAK_FUNC(sub_8264D3BC);
PPC_FUNC_IMPL(__imp__sub_8264D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264D3C0"))) PPC_WEAK_FUNC(sub_8264D3C0);
PPC_FUNC_IMPL(__imp__sub_8264D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8264d3ec
	if (!cr6.gt) goto loc_8264D3EC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_8264D3DC:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264d3dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264D3DC;
loc_8264D3EC:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r5,773
	ctx.r6.s64 = ctx.r5.s64 + 773;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264d490
	if (!cr6.gt) goto loc_8264D490;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r31,1
	r31.s64 = 1;
loc_8264D408:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lhz r11,236(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 236);
	// srawi r30,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r30.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// bne cr6,0x8264d428
	if (!cr6.eq) goto loc_8264D428;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264D428:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 234);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// srawi r30,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r30.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x8264d444
	if (!cr6.eq) goto loc_8264D444;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264D444:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264d45c
	if (!cr6.gt) goto loc_8264D45C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264D45C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x8264d47c
	if (cr6.gt) goto loc_8264D47C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
loc_8264D47C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x8264d408
	if (cr6.lt) goto loc_8264D408;
loc_8264D490:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8264D498"))) PPC_WEAK_FUNC(sub_8264D498);
PPC_FUNC_IMPL(__imp__sub_8264D498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D49C"))) PPC_WEAK_FUNC(sub_8264D49C);
PPC_FUNC_IMPL(__imp__sub_8264D49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264D4A0"))) PPC_WEAK_FUNC(sub_8264D4A0);
PPC_FUNC_IMPL(__imp__sub_8264D4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e9414
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264d56c
	if (!cr6.gt) {
		sub_8264D56C(ctx, base);
		return;
	}
	// li r31,0
	r31.s64 = 0;
	// li r28,1
	r28.s64 = 1;
loc_8264D4C0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,236(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 236);
	// lwzx r29,r10,r31
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// srawi r10,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 14;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bne cr6,0x8264d4ec
	if (!cr6.eq) goto loc_8264D4EC;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264D4EC:
	// clrlwi r9,r11,25
	ctx.r9.u64 = r11.u32 & 0x7F;
	// lhz r11,234(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 234);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// srawi r27,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r27.s64 = r11.s32 >> 14;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x8264d508
	if (!cr6.eq) goto loc_8264D508;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
loc_8264D508:
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// clrlwi r11,r9,25
	r11.u64 = ctx.r9.u32 & 0x7F;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x8264d520
	if (!cr6.gt) goto loc_8264D520;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8264D520:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x8264d534
	if (cr6.gt) goto loc_8264D534;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
loc_8264D534:
	// lhz r8,176(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 176);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bge cr6,0x8264d544
	if (!cr6.lt) goto loc_8264D544;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_8264D544:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x8264d4c0
	if (cr6.lt) goto loc_8264D4C0;
}

__attribute__((alias("__imp__sub_8264D56C"))) PPC_WEAK_FUNC(sub_8264D56C);
PPC_FUNC_IMPL(__imp__sub_8264D56C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8264D570"))) PPC_WEAK_FUNC(sub_8264D570);
PPC_FUNC_IMPL(__imp__sub_8264D570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264d5e8
	if (!cr6.gt) goto loc_8264D5E8;
	// li r11,0
	r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
loc_8264D590:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r30.u32);
	// lhz r9,176(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 176);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x8264d5c4
	if (cr6.lt) goto loc_8264D5C4;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_8264D5C4:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264d590
	if (cr6.lt) goto loc_8264D590;
loc_8264D5E8:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8264D5F0"))) PPC_WEAK_FUNC(sub_8264D5F0);
PPC_FUNC_IMPL(__imp__sub_8264D5F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8264D5F4"))) PPC_WEAK_FUNC(sub_8264D5F4);
PPC_FUNC_IMPL(__imp__sub_8264D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264D5F8"))) PPC_WEAK_FUNC(sub_8264D5F8);
PPC_FUNC_IMPL(__imp__sub_8264D5F8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x8264d7b0
	if (cr6.eq) goto loc_8264D7B0;
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264d6c0
	if (!cr6.eq) goto loc_8264D6C0;
	// lwz r11,224(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// lwz r30,504(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r27,10(r30)
	PPC_STORE_U16(r30.u32 + 10, r27.u16);
	// sth r27,12(r30)
	PPC_STORE_U16(r30.u32 + 12, r27.u16);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// addi r10,r31,220
	ctx.r10.s64 = r31.s64 + 220;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 508);
	// stb r9,42(r31)
	PPC_STORE_U8(r31.u32 + 42, ctx.r9.u8);
loc_8264D674:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8264d674
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264D674;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8263afc8
	sub_8263AFC8(ctx, base);
loc_8264D6C0:
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x8264d9b8
	if (cr6.eq) goto loc_8264D9B8;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// beq cr6,0x8264d9b8
	if (cr6.eq) goto loc_8264D9B8;
	// addi r30,r31,224
	r30.s64 = r31.s64 + 224;
	// stw r27,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, r27.u32);
	// li r11,18
	r11.s64 = 18;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// subf r9,r31,r30
	ctx.r9.s64 = r30.s64 - r31.s64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r8,10812
	ctx.r7.s64 = ctx.r8.s64 + 10812;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r10,-236
	ctx.r10.s64 = ctx.r10.s64 + -236;
	// stw r7,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r7.u32);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
loc_8264D704:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8264d704
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264D704;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,573(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 573);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lbz r6,572(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 572);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r8,r9,5472
	ctx.r8.s64 = ctx.r9.s64 + 5472;
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lfsx f31,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	f31.f64 = double(temp.f32);
	// lfsx f30,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	f30.f64 = double(temp.f32);
	// bl 0x82639058
	sub_82639058(ctx, base);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// addi r8,r1,528
	ctx.r8.s64 = ctx.r1.s64 + 528;
	// bl 0x8264acd0
	sub_8264ACD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x826391d8
	sub_826391D8(ctx, base);
	// lfs f0,564(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	f0.f64 = double(temp.f32);
	// lfs f13,568(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stfs f0,180(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f13,184(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 184, temp.u32);
	// b 0x8264d9b4
	goto loc_8264D9B4;
loc_8264D7B0:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// stw r27,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r27.u32);
	// li r11,18
	r11.s64 = 18;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// subf r8,r31,r3
	ctx.r8.s64 = ctx.r3.s64 - r31.s64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r30,r9,10812
	r30.s64 = ctx.r9.s64 + 10812;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r10,-236
	ctx.r10.s64 = ctx.r10.s64 + -236;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
loc_8264D7E0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8264d7e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264D7E0;
	// cmpwi cr6,r24,5
	cr6.compare<int32_t>(r24.s32, 5, xer);
	// bne cr6,0x8264d894
	if (!cr6.eq) goto loc_8264D894;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d828
	if (cr6.eq) goto loc_8264D828;
	// addi r5,r31,352
	ctx.r5.s64 = r31.s64 + 352;
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// bl 0x82656628
	sub_82656628(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8264d82c
	goto loc_8264D82C;
loc_8264D828:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8264D82C:
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826392a8
	sub_826392A8(ctx, base);
	// lbz r10,105(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stb r10,9(r29)
	PPC_STORE_U8(r29.u32 + 9, ctx.r10.u8);
	// lfs f13,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8264d8c0
	if (cr6.eq) goto loc_8264D8C0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8264d874
	if (cr6.eq) goto loc_8264D874;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8263ded8
	sub_8263DED8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bf6e08
	sub_82BF6E08(ctx, base);
	// b 0x8264d8c0
	goto loc_8264D8C0;
loc_8264D874:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f12,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x82bf6e08
	sub_82BF6E08(ctx, base);
	// b 0x8264d8c0
	goto loc_8264D8C0;
loc_8264D894:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264d8b0
	if (cr6.eq) goto loc_8264D8B0;
	// addi r5,r31,352
	ctx.r5.s64 = r31.s64 + 352;
	// addi r4,r31,288
	ctx.r4.s64 = r31.s64 + 288;
	// bl 0x826556d8
	sub_826556D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8264d8b4
	goto loc_8264D8B4;
loc_8264D8B0:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8264D8B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826391d8
	sub_826391D8(ctx, base);
loc_8264D8C0:
	// extsb r11,r26
	r11.s64 = r26.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264d97c
	if (cr6.eq) goto loc_8264D97C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,18
	ctx.r8.s64 = 18;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r7,288
	ctx.r7.s64 = 288;
	// stw r27,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r27.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// subf r8,r3,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8264D924:
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r6,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r6.u32);
	// lwzu r6,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r6,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r6.u32);
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8264d924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264D924;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r5,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r5.u16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// sth r10,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,280(r29)
	PPC_STORE_U32(r29.u32 + 280, r11.u32);
	// lbz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 42);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// sth r8,284(r29)
	PPC_STORE_U16(r29.u32 + 284, ctx.r8.u16);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8263afc8
	sub_8263AFC8(ctx, base);
	// b 0x8264d99c
	goto loc_8264D99C;
loc_8264D97C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r9,380(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 380);
	// sth r9,284(r29)
	PPC_STORE_U16(r29.u32 + 284, ctx.r9.u16);
loc_8264D99C:
	// addi r11,r24,-5
	r11.s64 = r24.s64 + -5;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,42(r31)
	PPC_STORE_U8(r31.u32 + 42, ctx.r9.u8);
loc_8264D9B4:
	// bl 0x82655740
	sub_82655740(ctx, base);
loc_8264D9B8:
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// beq cr6,0x8264da2c
	if (cr6.eq) goto loc_8264DA2C;
	// addi r11,r25,480
	r11.s64 = r25.s64 + 480;
	// lbz r10,775(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 775);
	// lbz r11,233(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 233);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// lbz r8,774(r25)
	ctx.r8.u64 = PPC_LOAD_U8(r25.u32 + 774);
	// clrlwi r6,r11,30
	ctx.r6.u64 = r11.u32 & 0x3;
	// lbz r9,773(r25)
	ctx.r9.u64 = PPC_LOAD_U8(r25.u32 + 773);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x8264d9f0
	if (!cr6.lt) goto loc_8264D9F0;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_8264D9F0:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8264da08
	if (!cr6.lt) goto loc_8264DA08;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8264da0c
	goto loc_8264DA0C;
loc_8264DA08:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_8264DA0C:
	// lhz r10,234(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 234);
	// lhz r8,236(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 236);
	// clrlwi r7,r10,18
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | r11.u64;
	// sth r5,234(r31)
	PPC_STORE_U16(r31.u32 + 234, ctx.r5.u16);
	// sth r4,236(r31)
	PPC_STORE_U16(r31.u32 + 236, ctx.r4.u16);
loc_8264DA2C:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_8264DA38"))) PPC_WEAK_FUNC(sub_8264DA38);
PPC_FUNC_IMPL(__imp__sub_8264DA38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8264DA3C"))) PPC_WEAK_FUNC(sub_8264DA3C);
PPC_FUNC_IMPL(__imp__sub_8264DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8264DA40"))) PPC_WEAK_FUNC(sub_8264DA40);
PPC_FUNC_IMPL(__imp__sub_8264DA40) {
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
	// lbz r11,232(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 232);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8264da74
	if (!cr6.eq) goto loc_8264DA74;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82665090
	sub_82665090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8264DA74:
	// lbz r11,200(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8264db70
	if (cr6.eq) goto loc_8264DB70;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264daa0
	if (!cr6.eq) goto loc_8264DAA0;
	// addi r31,r30,52
	r31.s64 = r30.s64 + 52;
loc_8264DAA0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8264dad4
	if (cr6.eq) goto loc_8264DAD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264cf48
	sub_8264CF48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264dad4
	if (cr6.eq) goto loc_8264DAD4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82665090
	sub_82665090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8264DAD4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,108
	ctx.r9.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82665648
	sub_82665648(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lbz r7,38(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwimi r8,r29,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(r29.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwimi r7,r8,4,0,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// stb r7,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r7.u8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r4.u16);
	// stb r4,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r4.u8);
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
	// bne cr6,0x8264db50
	if (!cr6.eq) goto loc_8264DB50;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264DB50:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// b 0x8264db78
	goto loc_8264DB78;
loc_8264DB70:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8264DB78:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82665090
	sub_82665090(ctx, base);
	// lwz r11,212(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// stb r11,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

