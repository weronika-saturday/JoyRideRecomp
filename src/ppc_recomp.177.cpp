#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82605344"))) PPC_WEAK_FUNC(sub_82605344);
PPC_FUNC_IMPL(__imp__sub_82605344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605348"))) PPC_WEAK_FUNC(sub_82605348);
PPC_FUNC_IMPL(__imp__sub_82605348) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d47c
	__imp__NtPulseEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260536c
	if (cr0.lt) goto loc_8260536C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605374
	goto loc_82605374;
loc_8260536C:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605380"))) PPC_WEAK_FUNC(sub_82605380);
PPC_FUNC_IMPL(__imp__sub_82605380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605384"))) PPC_WEAK_FUNC(sub_82605384);
PPC_FUNC_IMPL(__imp__sub_82605384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605388"))) PPC_WEAK_FUNC(sub_82605388);
PPC_FUNC_IMPL(__imp__sub_82605388) {
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
	// beq cr6,0x826053c4
	if (cr6.eq) goto loc_826053C4;
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
	// b 0x826053c8
	goto loc_826053C8;
loc_826053C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826053C8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d48c
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605400
	if (cr0.lt) goto loc_82605400;
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x826053f4
	if (cr6.eq) goto loc_826053F4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826053F4:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82605408
	goto loc_82605408;
loc_82605400:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605408:
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

__attribute__((alias("__imp__sub_8260541C"))) PPC_WEAK_FUNC(sub_8260541C);
PPC_FUNC_IMPL(__imp__sub_8260541C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605420"))) PPC_WEAK_FUNC(sub_82605420);
PPC_FUNC_IMPL(__imp__sub_82605420) {
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
	// bl 0x8314d49c
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605440
	if (cr0.lt) goto loc_82605440;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605448
	goto loc_82605448;
loc_82605440:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605454"))) PPC_WEAK_FUNC(sub_82605454);
PPC_FUNC_IMPL(__imp__sub_82605454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605458"))) PPC_WEAK_FUNC(sub_82605458);
PPC_FUNC_IMPL(__imp__sub_82605458) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// ble cr6,0x82605490
	if (!cr6.gt) goto loc_82605490;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82605500
	goto loc_82605500;
loc_82605490:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8260ac28
	sub_8260AC28(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r30,r27,24
	r30.u64 = r27.u32 & 0xFF;
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_826054C0:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d4ac
	__imp__NtWaitForMultipleObjectsEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826054f8
	if (cr0.lt) goto loc_826054F8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82605500
	if (cr6.eq) goto loc_82605500;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x826054c0
	if (cr6.eq) goto loc_826054C0;
	// b 0x82605500
	goto loc_82605500;
loc_826054F8:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82605500:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_82605504"))) PPC_WEAK_FUNC(sub_82605504);
PPC_FUNC_IMPL(__imp__sub_82605504) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82605508"))) PPC_WEAK_FUNC(sub_82605508);
PPC_FUNC_IMPL(__imp__sub_82605508) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
}

__attribute__((alias("__imp__sub_8260550C"))) PPC_WEAK_FUNC(sub_8260550C);
PPC_FUNC_IMPL(__imp__sub_8260550C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605458
	sub_82605458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605510"))) PPC_WEAK_FUNC(sub_82605510);
PPC_FUNC_IMPL(__imp__sub_82605510) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-13632
	r31.s64 = r11.s64 + -13632;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82605544
	if (cr6.eq) goto loc_82605544;
loc_82605538:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8260557c
	goto loc_8260557C;
loc_82605544:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c928
	sub_8260C928(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82605570
	if (!cr0.lt) goto loc_82605570;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82605538
	if (!cr6.eq) goto loc_82605538;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8260557c
	goto loc_8260557C;
loc_82605570:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,-13640(r11)
	PPC_STORE_U32(r11.u32 + -13640, r31.u32);
loc_8260557C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260558C"))) PPC_WEAK_FUNC(sub_8260558C);
PPC_FUNC_IMPL(__imp__sub_8260558C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605590"))) PPC_WEAK_FUNC(sub_82605590);
PPC_FUNC_IMPL(__imp__sub_82605590) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_82605594"))) PPC_WEAK_FUNC(sub_82605594);
PPC_FUNC_IMPL(__imp__sub_82605594) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260ca08
	sub_8260CA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605598"))) PPC_WEAK_FUNC(sub_82605598);
PPC_FUNC_IMPL(__imp__sub_82605598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9418
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r30,r5,25,7,31
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826055d0
	if (!cr6.eq) goto loc_826055D0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82605690
	if (cr6.eq) {
		sub_82605690(ctx, base);
		return;
	}
	// mtctr r30
	ctr.u64 = r30.u64;
loc_826055C0:
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x826055c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826055C0;
	// b 0x828e9468
	return;
loc_826055D0:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// blt cr6,0x826055e0
	if (cr6.lt) goto loc_826055E0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_826055E0:
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// vspltisb v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lvsl v12,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslb v11,v12,v0
	ctx.v11.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v11.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v11.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v11.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v11.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v11.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v11.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v11.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v11.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v11.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v11.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v11.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v11.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v11.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v11.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v11.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v10,v13,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltb v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_set1_epi8(char(0xF))));
	// beq cr6,0x82605620
	if (cr6.eq) goto loc_82605620;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
loc_82605610:
	// dcbzl r10,r3
	memset(base + ((ctx.r10.u32 + ctx.r3.u32) & ~127), 0, 128);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// bdnz 0x82605610
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605610;
loc_82605620:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82605690
	if (cr6.eq) {
		sub_82605690(ctx, base);
		return;
	}
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// mtctr r30
	ctr.u64 = r30.u64;
	// li r31,-32
	r31.s64 = -32;
	// li r4,-16
	ctx.r4.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
loc_82605650:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x82605668
	if (!cr6.lt) goto loc_82605668;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// li r28,128
	r28.s64 = 128;
	// dcbzl r28,r29
	memset(base + ((r28.u32 + r29.u32) & ~127), 0, 128);
loc_82605668:
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r4
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r5
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x82605650
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605650;
}

__attribute__((alias("__imp__sub_82605690"))) PPC_WEAK_FUNC(sub_82605690);
PPC_FUNC_IMPL(__imp__sub_82605690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82605694"))) PPC_WEAK_FUNC(sub_82605694);
PPC_FUNC_IMPL(__imp__sub_82605694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605698"))) PPC_WEAK_FUNC(sub_82605698);
PPC_FUNC_IMPL(__imp__sub_82605698) {
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
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi r30,r11,25
	r30.u64 = r11.u32 & 0x7F;
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// bge cr6,0x826056d0
	if (!cr6.lt) goto loc_826056D0;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826056D0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826056f4
	if (cr6.eq) goto loc_826056F4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r28,r30,r27
	r28.u64 = r30.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
loc_826056F4:
	// rlwinm r30,r31,0,0,24
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r29,28
	r11.u64 = r29.u32 & 0xF;
	// clrlwi r31,r31,25
	r31.u64 = r31.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x8260571c
	if (cr6.eq) goto loc_8260571C;
	// bl 0x8260cd94
	sub_8260CD94(ctx, base);
	// b 0x82605720
	goto loc_82605720;
loc_8260571C:
	// bl 0x8260ca70
	sub_8260CA70(ctx, base);
loc_82605720:
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82605738
	if (cr6.eq) goto loc_82605738;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82605738:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82605740"))) PPC_WEAK_FUNC(sub_82605740);
PPC_FUNC_IMPL(__imp__sub_82605740) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82605744"))) PPC_WEAK_FUNC(sub_82605744);
PPC_FUNC_IMPL(__imp__sub_82605744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605748"))) PPC_WEAK_FUNC(sub_82605748);
PPC_FUNC_IMPL(__imp__sub_82605748) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x82605808
	if (!cr6.lt) goto loc_82605808;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x82605794
	if (cr6.lt) goto loc_82605794;
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82605794
	if (!cr6.eq) goto loc_82605794;
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
loc_82605794:
	// clrlwi r11,r30,30
	r11.u64 = r30.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826057d4
	if (!cr6.eq) goto loc_826057D4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x826057d4
	if (cr6.lt) goto loc_826057D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r29,30,2,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
	// rlwinm r11,r29,0,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
loc_826057C8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bne 0x826057c8
	if (!cr0.eq) goto loc_826057C8;
loc_826057D4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82605a30
	if (cr6.eq) goto loc_82605A30;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// lwz r10,28248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28248);
loc_826057E8:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// subf. r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x826057e8
	if (!cr0.eq) goto loc_826057E8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82605808:
	// neg r11,r26
	r11.s64 = -r26.s64;
	// cmplwi cr6,r29,1024
	cr6.compare<uint32_t>(r29.u32, 1024, xer);
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// blt cr6,0x82605828
	if (cr6.lt) goto loc_82605828;
	// li r9,1024
	ctx.r9.s64 = 1024;
loc_82605828:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82605850
	if (cr6.eq) goto loc_82605850;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82605844:
	// dcbt r10,r4
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82605844
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605844;
loc_82605850:
	// li r27,15
	r27.s64 = 15;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260587c
	if (cr6.eq) goto loc_8260587C;
	// lvx128 v63,r0,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r30,r11,r4
	r30.u64 = r11.u64 + ctx.r4.u64;
	// lvx128 v62,r4,r27
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + r27.u32) & ~0xF), VectorMaskL));
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// vperm128 v63,v63,v62,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v63,r0,r26
	ea = r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
loc_8260587C:
	// rlwinm r11,r29,28,4,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8260588c
	if (!cr6.lt) goto loc_8260588C;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_8260588C:
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// rlwinm r28,r10,0,0,24
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r28,128
	cr6.compare<uint32_t>(r28.u32, 128, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// blt cr6,0x826058a8
	if (cr6.lt) goto loc_826058A8;
	// li r10,128
	ctx.r10.s64 = 128;
loc_826058A8:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826058c8
	if (cr6.eq) goto loc_826058C8;
	// addi r9,r31,127
	ctx.r9.s64 = r31.s64 + 127;
loc_826058B8:
	// dcbzl r11,r9
	memset(base + ((r11.u32 + ctx.r9.u32) & ~127), 0, 128);
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826058b8
	if (cr6.lt) goto loc_826058B8;
loc_826058C8:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82605900
	if (cr6.eq) goto loc_82605900;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826058E4:
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r30,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vperm128 v62,v63,v62,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x826058e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826058E4;
loc_82605900:
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r30,28
	ctx.r10.u64 = r30.u32 & 0xF;
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826059b4
	if (!cr6.eq) goto loc_826059B4;
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// blt cr6,0x826059d8
	if (cr6.lt) goto loc_826059D8;
	// rlwinm r11,r29,25,7,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r10,96
	ctx.r10.s64 = 96;
	// li r11,112
	r11.s64 = 112;
loc_82605940:
	// cmplwi cr6,r29,1024
	cr6.compare<uint32_t>(r29.u32, 1024, xer);
	// ble cr6,0x82605950
	if (!cr6.gt) goto loc_82605950;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// dcbt r4,r30
loc_82605950:
	// cmplwi cr6,r29,256
	cr6.compare<uint32_t>(r29.u32, 256, xer);
	// ble cr6,0x82605960
	if (!cr6.gt) goto loc_82605960;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbzl r4,r31
	memset(base + ((ctx.r4.u32 + r31.u32) & ~127), 0, 128);
loc_82605960:
	// lvx128 v61,r0,r30
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r29,r29,-128
	r29.s64 = r29.s64 + -128;
	// lvx128 v60,r30,r5
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r30.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r30,r6
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r30.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r30,r7
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((r30.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r30,r8
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r30,r9
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r30,r10
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r30,r11
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// stvx128 v61,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r5
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r6
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r7
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// bdnz 0x82605940
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82605940;
	// b 0x826059d8
	goto loc_826059D8;
loc_826059B4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260db10
	sub_8260DB10(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// subf r29,r28,r29
	r29.s64 = r29.s64 - r28.s64;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_826059D8:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// blt cr6,0x82605a0c
	if (cr6.lt) goto loc_82605A0C;
	// rlwinm r10,r29,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826059EC:
	// lvx128 v63,r0,r30
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// lvx128 v62,r30,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vperm128 v53,v63,v62,v0
	_mm_store_si128((__m128i*)v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x826059ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826059EC;
loc_82605A0C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82605a30
	if (cr6.eq) goto loc_82605A30;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// lvx128 v52,r0,r30
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r10,-1
	ctx.r10.s64 = -1;
	// lvsl v0,r30,r29
	temp.u32 = r30.u32 + r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r11,r10
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v50,v52,v51,v0
	_mm_store_si128((__m128i*)v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvrx128 v50,r31,r29
	ea = r31.u32 + r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v50.u8[i]);
loc_82605A30:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82605A38"))) PPC_WEAK_FUNC(sub_82605A38);
PPC_FUNC_IMPL(__imp__sub_82605A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82605A3C"))) PPC_WEAK_FUNC(sub_82605A3C);
PPC_FUNC_IMPL(__imp__sub_82605A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605A40"))) PPC_WEAK_FUNC(sub_82605A40);
PPC_FUNC_IMPL(__imp__sub_82605A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82605a50
	if (!cr0.eq) goto loc_82605A50;
	// mftb r11
	r11.u64 = __rdtsc();
loc_82605A50:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_82605A58"))) PPC_WEAK_FUNC(sub_82605A58);
PPC_FUNC_IMPL(__imp__sub_82605A58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605A5C"))) PPC_WEAK_FUNC(sub_82605A5C);
PPC_FUNC_IMPL(__imp__sub_82605A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605A60"))) PPC_WEAK_FUNC(sub_82605A60);
PPC_FUNC_IMPL(__imp__sub_82605A60) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8314d0fc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82605A90"))) PPC_WEAK_FUNC(sub_82605A90);
PPC_FUNC_IMPL(__imp__sub_82605A90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605A94"))) PPC_WEAK_FUNC(sub_82605A94);
PPC_FUNC_IMPL(__imp__sub_82605A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605A98"))) PPC_WEAK_FUNC(sub_82605A98);
PPC_FUNC_IMPL(__imp__sub_82605A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1692);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
}

__attribute__((alias("__imp__sub_82605AA4"))) PPC_WEAK_FUNC(sub_82605AA4);
PPC_FUNC_IMPL(__imp__sub_82605AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605AA8"))) PPC_WEAK_FUNC(sub_82605AA8);
PPC_FUNC_IMPL(__imp__sub_82605AA8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605acc
	if (cr0.lt) goto loc_82605ACC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605ad4
	goto loc_82605AD4;
loc_82605ACC:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605AD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605AE0"))) PPC_WEAK_FUNC(sub_82605AE0);
PPC_FUNC_IMPL(__imp__sub_82605AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605AE4"))) PPC_WEAK_FUNC(sub_82605AE4);
PPC_FUNC_IMPL(__imp__sub_82605AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605AE8"))) PPC_WEAK_FUNC(sub_82605AE8);
PPC_FUNC_IMPL(__imp__sub_82605AE8) {
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
	// bl 0x8314d4cc
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605b08
	if (cr0.lt) goto loc_82605B08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605b10
	goto loc_82605B10;
loc_82605B08:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605B10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605B1C"))) PPC_WEAK_FUNC(sub_82605B1C);
PPC_FUNC_IMPL(__imp__sub_82605B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605B20"))) PPC_WEAK_FUNC(sub_82605B20);
PPC_FUNC_IMPL(__imp__sub_82605B20) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8260dbd0
	sub_8260DBD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605B5C"))) PPC_WEAK_FUNC(sub_82605B5C);
PPC_FUNC_IMPL(__imp__sub_82605B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605B60"))) PPC_WEAK_FUNC(sub_82605B60);
PPC_FUNC_IMPL(__imp__sub_82605B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
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
	// bl 0x8314d4dc
	__imp__NtYieldExecution(ctx, base);
	// lis r11,16384
	r11.s64 = 1073741824;
	// ori r11,r11,36
	r11.u64 = r11.u64 | 36;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605B90"))) PPC_WEAK_FUNC(sub_82605B90);
PPC_FUNC_IMPL(__imp__sub_82605B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605B94"))) PPC_WEAK_FUNC(sub_82605B94);
PPC_FUNC_IMPL(__imp__sub_82605B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605B98"))) PPC_WEAK_FUNC(sub_82605B98);
PPC_FUNC_IMPL(__imp__sub_82605B98) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82605bc8
	if (cr6.eq) goto loc_82605BC8;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// b 0x82605bd8
	goto loc_82605BD8;
loc_82605BC8:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82605BD8:
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
loc_82605BDC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d4ec
	__imp__KeDelayExecutionThread(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82605bfc
	if (cr6.eq) goto loc_82605BFC;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x82605bdc
	if (cr6.eq) goto loc_82605BDC;
loc_82605BFC:
	// addi r11,r3,-192
	r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82605C24"))) PPC_WEAK_FUNC(sub_82605C24);
PPC_FUNC_IMPL(__imp__sub_82605C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605C28"))) PPC_WEAK_FUNC(sub_82605C28);
PPC_FUNC_IMPL(__imp__sub_82605C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x82605b98
	sub_82605B98(ctx, base);
	// addi r11,r3,-192
	r11.s64 = ctx.r3.s64 + -192;
	// li r10,192
	ctx.r10.s64 = 192;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605C5C"))) PPC_WEAK_FUNC(sub_82605C5C);
PPC_FUNC_IMPL(__imp__sub_82605C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605C60"))) PPC_WEAK_FUNC(sub_82605C60);
PPC_FUNC_IMPL(__imp__sub_82605C60) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_82605C64"))) PPC_WEAK_FUNC(sub_82605C64);
PPC_FUNC_IMPL(__imp__sub_82605C64) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605b98
	sub_82605B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605C68"))) PPC_WEAK_FUNC(sub_82605C68);
PPC_FUNC_IMPL(__imp__sub_82605C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 332);
}

__attribute__((alias("__imp__sub_82605C70"))) PPC_WEAK_FUNC(sub_82605C70);
PPC_FUNC_IMPL(__imp__sub_82605C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605C74"))) PPC_WEAK_FUNC(sub_82605C74);
PPC_FUNC_IMPL(__imp__sub_82605C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605C78"))) PPC_WEAK_FUNC(sub_82605C78);
PPC_FUNC_IMPL(__imp__sub_82605C78) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605cdc
	if (cr0.lt) goto loc_82605CDC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(r31.s32, 15, xer);
	// bne cr6,0x82605cb8
	if (!cr6.eq) goto loc_82605CB8;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82605cc4
	goto loc_82605CC4;
loc_82605CB8:
	// cmpwi cr6,r31,-15
	cr6.compare<int32_t>(r31.s32, -15, xer);
	// bne cr6,0x82605cc4
	if (!cr6.eq) goto loc_82605CC4;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82605CC4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d40c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605ce4
	goto loc_82605CE4;
loc_82605CDC:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82605CF4"))) PPC_WEAK_FUNC(sub_82605CF4);
PPC_FUNC_IMPL(__imp__sub_82605CF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605CF8"))) PPC_WEAK_FUNC(sub_82605CF8);
PPC_FUNC_IMPL(__imp__sub_82605CF8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605d58
	if (cr0.lt) goto loc_82605D58;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d4fc
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bne cr6,0x82605d3c
	if (!cr6.eq) goto loc_82605D3C;
	// li r31,15
	r31.s64 = 15;
	// b 0x82605d48
	goto loc_82605D48;
loc_82605D3C:
	// cmpwi cr6,r31,-16
	cr6.compare<int32_t>(r31.s32, -16, xer);
	// bne cr6,0x82605d48
	if (!cr6.eq) goto loc_82605D48;
	// li r31,-15
	r31.s64 = -15;
loc_82605D48:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82605d64
	goto loc_82605D64;
loc_82605D58:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82605D64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82605D74"))) PPC_WEAK_FUNC(sub_82605D74);
PPC_FUNC_IMPL(__imp__sub_82605D74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605D78"))) PPC_WEAK_FUNC(sub_82605D78);
PPC_FUNC_IMPL(__imp__sub_82605D78) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d50c
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82605da0
	if (!cr0.lt) goto loc_82605DA0;
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82605da4
	goto loc_82605DA4;
loc_82605DA0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82605DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82605DB0"))) PPC_WEAK_FUNC(sub_82605DB0);
PPC_FUNC_IMPL(__imp__sub_82605DB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605DB4"))) PPC_WEAK_FUNC(sub_82605DB4);
PPC_FUNC_IMPL(__imp__sub_82605DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605DB8"))) PPC_WEAK_FUNC(sub_82605DB8);
PPC_FUNC_IMPL(__imp__sub_82605DB8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82605e10
	if (cr0.lt) goto loc_82605E10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82605dfc
	if (cr0.eq) goto loc_82605DFC;
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// b 0x82605e00
	goto loc_82605E00;
loc_82605DFC:
	// li r11,259
	r11.s64 = 259;
loc_82605E00:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82605e18
	goto loc_82605E18;
loc_82605E10:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605E18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82605E28"))) PPC_WEAK_FUNC(sub_82605E28);
PPC_FUNC_IMPL(__imp__sub_82605E28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605E2C"))) PPC_WEAK_FUNC(sub_82605E2C);
PPC_FUNC_IMPL(__imp__sub_82605E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605E30"))) PPC_WEAK_FUNC(sub_82605E30);
PPC_FUNC_IMPL(__imp__sub_82605E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31917
	ctx.r10.s64 = -2091712512;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-28332(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28332);
	// stw r11,-28332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28332, r11.u32);
}

__attribute__((alias("__imp__sub_82605E40"))) PPC_WEAK_FUNC(sub_82605E40);
PPC_FUNC_IMPL(__imp__sub_82605E40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605E44"))) PPC_WEAK_FUNC(sub_82605E44);
PPC_FUNC_IMPL(__imp__sub_82605E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605E48"))) PPC_WEAK_FUNC(sub_82605E48);
PPC_FUNC_IMPL(__imp__sub_82605E48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// bge cr6,0x82605ea4
	if (!cr6.lt) goto loc_82605EA4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82605ed4
	if (cr0.lt) goto loc_82605ED4;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// bl 0x8314d52c
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
	// b 0x82605eac
	goto loc_82605EAC;
loc_82605EA4:
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
loc_82605EAC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82605ed4
	if (cr6.lt) goto loc_82605ED4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82605ecc
	if (cr6.eq) goto loc_82605ECC;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r3.s64 = 31 - r11.s64;
	// b 0x82605ee0
	goto loc_82605EE0;
loc_82605ECC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82605ee0
	goto loc_82605EE0;
loc_82605ED4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82605EE0:
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

__attribute__((alias("__imp__sub_82605EF4"))) PPC_WEAK_FUNC(sub_82605EF4);
PPC_FUNC_IMPL(__imp__sub_82605EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605EF8"))) PPC_WEAK_FUNC(sub_82605EF8);
PPC_FUNC_IMPL(__imp__sub_82605EF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
}

__attribute__((alias("__imp__sub_82605EFC"))) PPC_WEAK_FUNC(sub_82605EFC);
PPC_FUNC_IMPL(__imp__sub_82605EFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605F00"))) PPC_WEAK_FUNC(sub_82605F00);
PPC_FUNC_IMPL(__imp__sub_82605F00) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82605f40
	if (cr6.eq) goto loc_82605F40;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82605f44
	goto loc_82605F44;
loc_82605F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605F44:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82605f78
	if (!cr6.eq) goto loc_82605F78;
	// lis r11,-31917
	r11.s64 = -2091712512;
	// lwz r10,-28332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -28332);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82605f78
	if (cr6.eq) goto loc_82605F78;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x82605f7c
	if (cr6.eq) goto loc_82605F7C;
loc_82605F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82605F7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82605F8C"))) PPC_WEAK_FUNC(sub_82605F8C);
PPC_FUNC_IMPL(__imp__sub_82605F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82605F90"))) PPC_WEAK_FUNC(sub_82605F90);
PPC_FUNC_IMPL(__imp__sub_82605F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x82608260
	sub_82608260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82605F90"))) PPC_WEAK_FUNC(sub_82605F90);
PPC_FUNC_IMPL(__imp__sub_82605F90) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82605F94"))) PPC_WEAK_FUNC(sub_82605F94);
PPC_FUNC_IMPL(__imp__sub_82605F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82605F98"))) PPC_WEAK_FUNC(sub_82605F98);
PPC_FUNC_IMPL(__imp__sub_82605F98) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d54c
	__imp__KeQuerySystemTime(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8260dbe0
	sub_8260DBE0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x8314d53c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// lhz r9,126(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// lhz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lhz r5,122(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// lhz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r4.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82606028"))) PPC_WEAK_FUNC(sub_82606028);
PPC_FUNC_IMPL(__imp__sub_82606028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260602C"))) PPC_WEAK_FUNC(sub_8260602C);
PPC_FUNC_IMPL(__imp__sub_8260602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606030"))) PPC_WEAK_FUNC(sub_82606030);
PPC_FUNC_IMPL(__imp__sub_82606030) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_82606044"))) PPC_WEAK_FUNC(sub_82606044);
PPC_FUNC_IMPL(__imp__sub_82606044) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cefc
	__imp__XamEnumerate(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606048"))) PPC_WEAK_FUNC(sub_82606048);
PPC_FUNC_IMPL(__imp__sub_82606048) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf0c
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260604C"))) PPC_WEAK_FUNC(sub_8260604C);
PPC_FUNC_IMPL(__imp__sub_8260604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606050"))) PPC_WEAK_FUNC(sub_82606050);
PPC_FUNC_IMPL(__imp__sub_82606050) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf1c
	__imp__XamShowFriendsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606054"))) PPC_WEAK_FUNC(sub_82606054);
PPC_FUNC_IMPL(__imp__sub_82606054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606058"))) PPC_WEAK_FUNC(sub_82606058);
PPC_FUNC_IMPL(__imp__sub_82606058) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8314cf2c
	__imp__XamShowGamerCardUIForXUID(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606060"))) PPC_WEAK_FUNC(sub_82606060);
PPC_FUNC_IMPL(__imp__sub_82606060) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8314cf3c
	__imp__XamShowAchievementsUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606068"))) PPC_WEAK_FUNC(sub_82606068);
PPC_FUNC_IMPL(__imp__sub_82606068) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
}

__attribute__((alias("__imp__sub_82606074"))) PPC_WEAK_FUNC(sub_82606074);
PPC_FUNC_IMPL(__imp__sub_82606074) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf4c
	__imp__XamShowMarketplaceUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606078"))) PPC_WEAK_FUNC(sub_82606078);
PPC_FUNC_IMPL(__imp__sub_82606078) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf5c
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260607C"))) PPC_WEAK_FUNC(sub_8260607C);
PPC_FUNC_IMPL(__imp__sub_8260607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606080"))) PPC_WEAK_FUNC(sub_82606080);
PPC_FUNC_IMPL(__imp__sub_82606080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82606148
	if (cr6.eq) {
		sub_82606148(ctx, base);
		return;
	}
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29956
	ctx.r10.s64 = ctx.r10.s64 + -29956;
loc_82606094:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x826060b8
	if (cr0.eq) goto loc_826060B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82606094
	if (cr6.eq) goto loc_82606094;
loc_826060B8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826060c8
	if (!cr0.eq) goto loc_826060C8;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x82606144
	goto loc_82606144;
loc_826060C8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,16928
	ctx.r10.s64 = ctx.r10.s64 + 16928;
loc_826060D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x826060f8
	if (cr0.eq) goto loc_826060F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826060d4
	if (cr6.eq) goto loc_826060D4;
loc_826060F8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82606108
	if (!cr0.eq) goto loc_82606108;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// b 0x82606144
	goto loc_82606144;
loc_82606108:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29976
	ctx.r10.s64 = ctx.r10.s64 + -29976;
loc_82606114:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82606138
	if (cr0.eq) goto loc_82606138;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82606114
	if (cr6.eq) goto loc_82606114;
loc_82606138:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82606148
	if (!cr0.eq) {
		sub_82606148(ctx, base);
		return;
	}
	// oris r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 262144;
loc_82606144:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82606148"))) PPC_WEAK_FUNC(sub_82606148);
PPC_FUNC_IMPL(__imp__sub_82606148) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf6c
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260614C"))) PPC_WEAK_FUNC(sub_8260614C);
PPC_FUNC_IMPL(__imp__sub_8260614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606150"))) PPC_WEAK_FUNC(sub_82606150);
PPC_FUNC_IMPL(__imp__sub_82606150) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260617c
	if (cr6.eq) goto loc_8260617C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8260617C:
	// cmplwi cr6,r3,65001
	cr6.compare<uint32_t>(ctx.r3.u32, 65001, xer);
	// bne cr6,0x82606198
	if (!cr6.eq) goto loc_82606198;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260dc60
	sub_8260DC60(ctx, base);
	// b 0x82606208
	goto loc_82606208;
loc_82606198:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x826061b0
	if (!cr6.eq) goto loc_826061B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ee2b0
	sub_828EE2B0(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// b 0x826061b4
	goto loc_826061B4;
loc_826061B0:
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_826061B4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x826061c4
	if (!cr6.eq) goto loc_826061C4;
loc_826061BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82606208
	goto loc_82606208;
loc_826061C4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826061fc
	if (cr6.lt) goto loc_826061FC;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// blt cr6,0x826061fc
	if (cr6.lt) goto loc_826061FC;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d56c
	__imp__RtlUnicodeToMultiByteN(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826061bc
	if (!cr0.lt) goto loc_826061BC;
	// bl 0x8314d55c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82606200
	goto loc_82606200;
loc_826061FC:
	// li r3,122
	ctx.r3.s64 = 122;
loc_82606200:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82606208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260620C"))) PPC_WEAK_FUNC(sub_8260620C);
PPC_FUNC_IMPL(__imp__sub_8260620C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82606210"))) PPC_WEAK_FUNC(sub_82606210);
PPC_FUNC_IMPL(__imp__sub_82606210) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82606254
	if (!cr0.lt) goto loc_82606254;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82606274
	goto loc_82606274;
loc_82606254:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82606270
	if (!cr6.eq) goto loc_82606270;
	// bl 0x8260aba0
	sub_8260ABA0(ctx, base);
	// li r11,1627
	r11.s64 = 1627;
	// srawi r10,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & r11.u64;
	// b 0x82606274
	goto loc_82606274;
loc_82606270:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82606274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82606284"))) PPC_WEAK_FUNC(sub_82606284);
PPC_FUNC_IMPL(__imp__sub_82606284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606288"))) PPC_WEAK_FUNC(sub_82606288);
PPC_FUNC_IMPL(__imp__sub_82606288) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,113
	ctx.r4.u64 = ctx.r4.u64 | 113;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826062cc
	if (!cr0.lt) goto loc_826062CC;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x826062ec
	goto loc_826062EC;
loc_826062CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826062e8
	if (!cr6.eq) goto loc_826062E8;
	// bl 0x8260aba0
	sub_8260ABA0(ctx, base);
	// li r11,1627
	r11.s64 = 1627;
	// srawi r10,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & r11.u64;
	// b 0x826062ec
	goto loc_826062EC;
loc_826062E8:
	// li r3,997
	ctx.r3.s64 = 997;
loc_826062EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826062FC"))) PPC_WEAK_FUNC(sub_826062FC);
PPC_FUNC_IMPL(__imp__sub_826062FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606300"))) PPC_WEAK_FUNC(sub_82606300);
PPC_FUNC_IMPL(__imp__sub_82606300) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82606354
	if (!cr0.lt) goto loc_82606354;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x82606378
	goto loc_82606378;
loc_82606354:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82606374
	if (!cr6.eq) goto loc_82606374;
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
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x82606378
	goto loc_82606378;
loc_82606374:
	// li r3,997
	ctx.r3.s64 = 997;
loc_82606378:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82606388"))) PPC_WEAK_FUNC(sub_82606388);
PPC_FUNC_IMPL(__imp__sub_82606388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260638C"))) PPC_WEAK_FUNC(sub_8260638C);
PPC_FUNC_IMPL(__imp__sub_8260638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606390"))) PPC_WEAK_FUNC(sub_82606390);
PPC_FUNC_IMPL(__imp__sub_82606390) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
}

__attribute__((alias("__imp__sub_82606394"))) PPC_WEAK_FUNC(sub_82606394);
PPC_FUNC_IMPL(__imp__sub_82606394) {
	PPC_FUNC_PROLOGUE();
	// b 0x82606300
	sub_82606300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606398"))) PPC_WEAK_FUNC(sub_82606398);
PPC_FUNC_IMPL(__imp__sub_82606398) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bne cr6,0x826063ec
	if (!cr6.eq) goto loc_826063EC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8314d57c
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x826063ec
	if (!cr0.eq) goto loc_826063EC;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8260643c
	goto loc_8260643C;
loc_826063EC:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82606418
	if (!cr0.lt) goto loc_82606418;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8260643c
	goto loc_8260643C;
loc_82606418:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82606438
	if (!cr6.eq) goto loc_82606438;
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
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x8260643c
	goto loc_8260643C;
loc_82606438:
	// li r3,997
	ctx.r3.s64 = 997;
loc_8260643C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260644C"))) PPC_WEAK_FUNC(sub_8260644C);
PPC_FUNC_IMPL(__imp__sub_8260644C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606450"))) PPC_WEAK_FUNC(sub_82606450);
PPC_FUNC_IMPL(__imp__sub_82606450) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
}

__attribute__((alias("__imp__sub_82606454"))) PPC_WEAK_FUNC(sub_82606454);
PPC_FUNC_IMPL(__imp__sub_82606454) {
	PPC_FUNC_PROLOGUE();
	// b 0x82606398
	sub_82606398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606458"))) PPC_WEAK_FUNC(sub_82606458);
PPC_FUNC_IMPL(__imp__sub_82606458) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf7c
	__imp__XamUserGetName(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260645C"))) PPC_WEAK_FUNC(sub_8260645C);
PPC_FUNC_IMPL(__imp__sub_8260645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606460"))) PPC_WEAK_FUNC(sub_82606460);
PPC_FUNC_IMPL(__imp__sub_82606460) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf8c
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82606464"))) PPC_WEAK_FUNC(sub_82606464);
PPC_FUNC_IMPL(__imp__sub_82606464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606468"))) PPC_WEAK_FUNC(sub_82606468);
PPC_FUNC_IMPL(__imp__sub_82606468) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cf9c
	__imp__XamUserAreUsersFriends(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260646C"))) PPC_WEAK_FUNC(sub_8260646C);
PPC_FUNC_IMPL(__imp__sub_8260646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606470"))) PPC_WEAK_FUNC(sub_82606470);
PPC_FUNC_IMPL(__imp__sub_82606470) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8314cfbc
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	r11.s64 = 537460736;
	// ori r11,r11,27392
	r11.u64 = r11.u64 | 27392;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x826064e8
	if (!cr6.lt) goto loc_826064E8;
	// cmplwi cr6,r30,255
	cr6.compare<uint32_t>(r30.u32, 255, xer);
	// bne cr6,0x826064d8
	if (!cr6.eq) goto loc_826064D8;
	// li r31,0
	r31.s64 = 0;
loc_826064A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cf8c
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x826064c8
	if (cr6.eq) goto loc_826064C8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x826064a8
	if (cr6.lt) goto loc_826064A8;
	// b 0x826064e8
	goto loc_826064E8;
loc_826064C8:
	// li r11,0
	r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x826064f8
	goto loc_826064F8;
loc_826064D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314cf8c
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x826064c8
	if (cr6.eq) goto loc_826064C8;
loc_826064E8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314cfac
	__imp__XamUserCheckPrivilege(ctx, base);
loc_826064F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826064FC"))) PPC_WEAK_FUNC(sub_826064FC);
PPC_FUNC_IMPL(__imp__sub_826064FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82606500"))) PPC_WEAK_FUNC(sub_82606500);
PPC_FUNC_IMPL(__imp__sub_82606500) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x8260654c
	if (cr6.eq) goto loc_8260654C;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82606538:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 * 28;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x82606538
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82606538;
loc_8260654C:
	// lwz r31,0(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// ble cr6,0x82606564
	if (!cr6.gt) goto loc_82606564;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x826065d0
	goto loc_826065D0;
loc_82606564:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8314cebc
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826065ac
	if (!cr0.lt) goto loc_826065AC;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x826065d0
	goto loc_826065D0;
loc_826065AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826065cc
	if (!cr6.eq) goto loc_826065CC;
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
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x826065d0
	goto loc_826065D0;
loc_826065CC:
	// li r3,997
	ctx.r3.s64 = 997;
loc_826065D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826065D4"))) PPC_WEAK_FUNC(sub_826065D4);
PPC_FUNC_IMPL(__imp__sub_826065D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826065D8"))) PPC_WEAK_FUNC(sub_826065D8);
PPC_FUNC_IMPL(__imp__sub_826065D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8260dd98
	sub_8260DD98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82606630
	if (!cr0.eq) goto loc_82606630;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cfcc
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82606630:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82606634"))) PPC_WEAK_FUNC(sub_82606634);
PPC_FUNC_IMPL(__imp__sub_82606634) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82606638"))) PPC_WEAK_FUNC(sub_82606638);
PPC_FUNC_IMPL(__imp__sub_82606638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8260dd98
	sub_8260DD98(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82606690
	if (!cr0.eq) goto loc_82606690;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cfcc
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_82606690:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82606694"))) PPC_WEAK_FUNC(sub_82606694);
PPC_FUNC_IMPL(__imp__sub_82606694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82606698"))) PPC_WEAK_FUNC(sub_82606698);
PPC_FUNC_IMPL(__imp__sub_82606698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
}

__attribute__((alias("__imp__sub_826066C4"))) PPC_WEAK_FUNC(sub_826066C4);
PPC_FUNC_IMPL(__imp__sub_826066C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314cfdc
	__imp__XamReadTileToTexture(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826066C8"))) PPC_WEAK_FUNC(sub_826066C8);
PPC_FUNC_IMPL(__imp__sub_826066C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x8314cfbc
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,16128
	r11.u64 = r11.u64 | 16128;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82606760
	if (cr6.lt) goto loc_82606760;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,-29936
	ctx.r3.s64 = r11.s64 + -29936;
	// bl 0x82606e88
	sub_82606E88(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82606760
	if (cr0.eq) goto loc_82606760;
	// li r4,765
	ctx.r4.s64 = 765;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82606e18
	sub_82606E18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82606760
	if (cr0.eq) goto loc_82606760;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,254
	ctx.r6.s64 = 254;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826067b0
	goto loc_826067B0;
loc_82606760:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cfec
	__imp__XamParseGamerTileKey(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x826067b4
	if (!cr0.eq) goto loc_826067B4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8260678c
	if (!cr6.eq) goto loc_8260678C;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8260678C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,254
	ctx.r6.s64 = 254;
	// clrldi r5,r11,32
	ctx.r5.u64 = r11.u64 & 0xFFFFFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8314cfdc
	__imp__XamReadTileToTexture(ctx, base);
loc_826067B0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826067B4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x826067c4
	if (cr6.eq) goto loc_826067C4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82606de0
	sub_82606DE0(ctx, base);
loc_826067C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826067CC"))) PPC_WEAK_FUNC(sub_826067CC);
PPC_FUNC_IMPL(__imp__sub_826067CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826067D0"))) PPC_WEAK_FUNC(sub_826067D0);
PPC_FUNC_IMPL(__imp__sub_826067D0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8314cffc
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826067f8
	if (cr0.lt) goto loc_826067F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82606810
	goto loc_82606810;
loc_826067F8:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82606810
	if (cr6.eq) goto loc_82606810;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82606810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260681C"))) PPC_WEAK_FUNC(sub_8260681C);
PPC_FUNC_IMPL(__imp__sub_8260681C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606820"))) PPC_WEAK_FUNC(sub_82606820);
PPC_FUNC_IMPL(__imp__sub_82606820) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// bne cr6,0x8260688c
	if (!cr6.eq) goto loc_8260688C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82606868
	if (cr6.eq) goto loc_82606868;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82606868
	if (cr6.eq) goto loc_82606868;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// b 0x8260686c
	goto loc_8260686C;
loc_82606868:
	// li r3,258
	ctx.r3.s64 = 258;
loc_8260686C:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x8260687c
	if (!cr6.eq) goto loc_8260687C;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x826068a0
	goto loc_826068A0;
loc_8260687C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260688c
	if (cr6.eq) goto loc_8260688C;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// b 0x826068a0
	goto loc_826068A0;
loc_8260688C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8260689c
	if (cr6.eq) goto loc_8260689C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8260689C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_826068A0:
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

__attribute__((alias("__imp__sub_826068B4"))) PPC_WEAK_FUNC(sub_826068B4);
PPC_FUNC_IMPL(__imp__sub_826068B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826068B8"))) PPC_WEAK_FUNC(sub_826068B8);
PPC_FUNC_IMPL(__imp__sub_826068B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826068cc
	if (!cr6.eq) goto loc_826068CC;
	// b 0x8260de10
	sub_8260DE10(ctx, base);
	return;
loc_826068CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
}

__attribute__((alias("__imp__sub_826068DC"))) PPC_WEAK_FUNC(sub_826068DC);
PPC_FUNC_IMPL(__imp__sub_826068DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826068E0"))) PPC_WEAK_FUNC(sub_826068E0);
PPC_FUNC_IMPL(__imp__sub_826068E0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82606990
	if (cr0.lt) goto loc_82606990;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x8314d00c
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82606988
	if (!cr6.eq) goto loc_82606988;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82606820
	sub_82606820(ctx, base);
loc_82606988:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
loc_82606990:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82606994"))) PPC_WEAK_FUNC(sub_82606994);
PPC_FUNC_IMPL(__imp__sub_82606994) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82606998"))) PPC_WEAK_FUNC(sub_82606998);
PPC_FUNC_IMPL(__imp__sub_82606998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-29920
	r11.s64 = r11.s64 + -29920;
loc_826069A8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bne cr6,0x826069fc
	if (!cr6.eq) goto loc_826069FC;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x826069ec
	if (cr0.eq) goto loc_826069EC;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
loc_826069CC:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x826069ec
	if (!cr6.lt) goto loc_826069EC;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// sthu r31,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, r31.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x826069cc
	if (cr6.lt) goto loc_826069CC;
loc_826069EC:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x82606a04
	goto loc_82606A04;
loc_826069FC:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82606A04:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// ble cr6,0x826069a8
	if (!cr6.gt) goto loc_826069A8;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82606A14"))) PPC_WEAK_FUNC(sub_82606A14);
PPC_FUNC_IMPL(__imp__sub_82606A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606A18"))) PPC_WEAK_FUNC(sub_82606A18);
PPC_FUNC_IMPL(__imp__sub_82606A18) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x8314d57c
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82606bdc
	if (cr0.eq) goto loc_82606BDC;
	// bl 0x8314d02c
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x82606bdc
	if (cr6.eq) goto loc_82606BDC;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82606bdc
	if (cr6.eq) goto loc_82606BDC;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82606bdc
	if (cr6.eq) goto loc_82606BDC;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82606bdc
	if (cr6.eq) goto loc_82606BDC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82606bdc
	if (!cr0.eq) goto loc_82606BDC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,16,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x82606bdc
	if (!cr6.eq) goto loc_82606BDC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82606bdc
	if (!cr0.eq) goto loc_82606BDC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82606acc
	if (!cr0.eq) goto loc_82606ACC;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82606bdc
	if (!cr0.eq) goto loc_82606BDC;
loc_82606ACC:
	// bl 0x8314d01c
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r11,15
	r11.s64 = 15;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(r31.u32, 10, xer);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// blt cr6,0x82606b9c
	if (cr6.lt) goto loc_82606B9C;
	// li r31,1
	r31.s64 = 1;
loc_82606B9C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82606998
	sub_82606998(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82606998
	sub_82606998(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826068e0
	sub_826068E0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_82606BDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82606BF4"))) PPC_WEAK_FUNC(sub_82606BF4);
PPC_FUNC_IMPL(__imp__sub_82606BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606BF8"))) PPC_WEAK_FUNC(sub_82606BF8);
PPC_FUNC_IMPL(__imp__sub_82606BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13888(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13888);
	// mflr r12
	// bl 0x828e9418
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31901
	ctx.r9.s64 = -2090663936;
	// lis r8,-31901
	ctx.r8.s64 = -2090663936;
	// li r11,-1
	r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,6480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6480, r11.u32);
	// stw r10,6484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6484, ctx.r10.u32);
	// bl 0x8260e130
	sub_8260E130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// bl 0x82606a18
	sub_82606A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82606c54
	if (cr0.eq) goto loc_82606C54;
	// bl 0x8314d03c
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82606C54:
	// bl 0x828ee888
	sub_828EE888(ctx, base);
	// bl 0x8260df08
	sub_8260DF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260de28
	sub_8260DE28(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-13184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d80
	if (cr6.eq) goto loc_82606D80;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x8260de18
	sub_8260DE18(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82606d68
	if (cr0.eq) goto loc_82606D68;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_82606CA0:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
loc_82606CA8:
	// extsb. r11,r9
	r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82606ce0
	if (cr0.eq) goto loc_82606CE0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x82606cc0
	if (cr6.eq) goto loc_82606CC0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82606ce0
	if (!cr6.eq) goto loc_82606CE0;
loc_82606CC0:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82606ca8
	goto loc_82606CA8;
loc_82606CE0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d64
	if (cr6.eq) goto loc_82606D64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
loc_82606D04:
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x82606d1c
	if (cr6.eq) goto loc_82606D1C;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82606d28
	goto loc_82606D28;
loc_82606D1C:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82606D28:
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r9
	r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// beq 0x82606d54
	if (cr0.eq) goto loc_82606D54;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82606d04
	if (!cr6.eq) goto loc_82606D04;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x82606d54
	if (cr6.eq) goto loc_82606D54;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82606d04
	if (!cr6.eq) goto loc_82606D04;
loc_82606D54:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d64
	if (cr6.eq) goto loc_82606D64;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// ble cr6,0x82606ca0
	if (!cr6.gt) goto loc_82606CA0;
loc_82606D64:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
loc_82606D68:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x82606d88
	goto loc_82606D88;
loc_82606D80:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82606D88:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8231cb40
	sub_8231CB40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x828ee578
	sub_828EE578(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-27248
	ctx.r3.s64 = r11.s64 + -27248;
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8314d03c
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82605f00
	sub_82605F00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp___xstart"))) PPC_WEAK_FUNC(_xstart);
PPC_FUNC_IMPL(__imp___xstart) {
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
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31901
	ctx.r9.s64 = -2090663936;
	// lis r8,-31901
	ctx.r8.s64 = -2090663936;
	// li r11,-1
	r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,6480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6480, r11.u32);
	// stw r10,6484(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6484, ctx.r10.u32);
	// bl 0x8260e130
	sub_8260E130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// bl 0x82606a18
	sub_82606A18(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82606c54
	if (cr0.eq) goto loc_82606C54;
	// bl 0x8314d03c
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82606C54:
	// bl 0x828ee888
	sub_828EE888(ctx, base);
	// bl 0x8260df08
	sub_8260DF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260de28
	sub_8260DE28(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-13184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d80
	if (cr6.eq) goto loc_82606D80;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x8260de18
	sub_8260DE18(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82606d68
	if (cr0.eq) goto loc_82606D68;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_82606CA0:
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
loc_82606CA8:
	// extsb. r11,r9
	r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82606ce0
	if (cr0.eq) goto loc_82606CE0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x82606cc0
	if (cr6.eq) goto loc_82606CC0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82606ce0
	if (!cr6.eq) goto loc_82606CE0;
loc_82606CC0:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82606ca8
	goto loc_82606CA8;
loc_82606CE0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d64
	if (cr6.eq) goto loc_82606D64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
loc_82606D04:
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// beq cr6,0x82606d1c
	if (cr6.eq) goto loc_82606D1C;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82606d28
	goto loc_82606D28;
loc_82606D1C:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82606D28:
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r9
	r11.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// beq 0x82606d54
	if (cr0.eq) goto loc_82606D54;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82606d04
	if (!cr6.eq) goto loc_82606D04;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x82606d54
	if (cr6.eq) goto loc_82606D54;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x82606d04
	if (!cr6.eq) goto loc_82606D04;
loc_82606D54:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82606d64
	if (cr6.eq) goto loc_82606D64;
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// ble cr6,0x82606ca0
	if (!cr6.gt) goto loc_82606CA0;
loc_82606D64:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
loc_82606D68:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x82606d88
	goto loc_82606D88;
loc_82606D80:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82606D88:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8231cb40
	sub_8231CB40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x828ee578
	sub_828EE578(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-27248
	ctx.r3.s64 = r11.s64 + -27248;
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8314d03c
	__imp__XamLoaderTerminateTitle(ctx, base);
}

__attribute__((alias("__imp__sub_82606DB8"))) PPC_WEAK_FUNC(sub_82606DB8);
PPC_FUNC_IMPL(__imp__sub_82606DB8) {
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
	// bl 0x82605f00
	sub_82605F00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606DDC"))) PPC_WEAK_FUNC(sub_82606DDC);
PPC_FUNC_IMPL(__imp__sub_82606DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606DE0"))) PPC_WEAK_FUNC(sub_82606DE0);
PPC_FUNC_IMPL(__imp__sub_82606DE0) {
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
	// bl 0x8314d5bc
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82606e04
	if (!cr0.lt) goto loc_82606E04;
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82606e08
	goto loc_82606E08;
loc_82606E04:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82606E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82606E14"))) PPC_WEAK_FUNC(sub_82606E14);
PPC_FUNC_IMPL(__imp__sub_82606E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606E18"))) PPC_WEAK_FUNC(sub_82606E18);
PPC_FUNC_IMPL(__imp__sub_82606E18) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82606e64
	if (cr0.lt) goto loc_82606E64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82606e5c
	if (!cr6.eq) goto loc_82606E5C;
	// li r11,0
	r11.s64 = 0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ori r3,r3,611
	ctx.r3.u64 = ctx.r3.u64 | 611;
loc_82606E5C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82606e70
	if (!cr6.lt) goto loc_82606E70;
loc_82606E64:
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82606e74
	goto loc_82606E74;
loc_82606E70:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82606E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82606E84"))) PPC_WEAK_FUNC(sub_82606E84);
PPC_FUNC_IMPL(__imp__sub_82606E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606E88"))) PPC_WEAK_FUNC(sub_82606E88);
PPC_FUNC_IMPL(__imp__sub_82606E88) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8314d5dc
	__imp__XexLoadImage(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82606eb8
	if (!cr0.lt) goto loc_82606EB8;
	// bl 0x8260ac18
	sub_8260AC18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82606ebc
	goto loc_82606EBC;
loc_82606EB8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82606EBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82606EC8"))) PPC_WEAK_FUNC(sub_82606EC8);
PPC_FUNC_IMPL(__imp__sub_82606EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606ECC"))) PPC_WEAK_FUNC(sub_82606ECC);
PPC_FUNC_IMPL(__imp__sub_82606ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82606ED0"))) PPC_WEAK_FUNC(sub_82606ED0);
PPC_FUNC_IMPL(__imp__sub_82606ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// oris r11,r3,544
	r11.u64 = ctx.r3.u64 | 35651584;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	r11.s64 = 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1880(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82606f28
	if (cr6.eq) goto loc_82606F28;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82606F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82606F34"))) PPC_WEAK_FUNC(sub_82606F34);
PPC_FUNC_IMPL(__imp__sub_82606F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82606F38"))) PPC_WEAK_FUNC(sub_82606F38);
PPC_FUNC_IMPL(__imp__sub_82606F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	r29.s64 = r11.s64 + 3;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,1,7
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0x7F000000;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1880(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1880);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82606fbc
	if (cr6.eq) goto loc_82606FBC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82606fc0
	goto loc_82606FC0;
loc_82606FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82606FC0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82606fd0
	if (!cr6.gt) goto loc_82606FD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260704c
	goto loc_8260704C;
loc_82606FD0:
	// blt cr6,0x82607048
	if (cr6.lt) goto loc_82607048;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// rlwinm r12,r11,0,0,27
	r12.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x828ec934
	sub_828EC934(ctx, base);
	// lwz r11,0(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + r12.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,1880(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1880);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82607048
	if (cr6.eq) goto loc_82607048;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260704c
	goto loc_8260704C;
loc_82607048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260704C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
}

__attribute__((alias("__imp__sub_82607050"))) PPC_WEAK_FUNC(sub_82607050);
PPC_FUNC_IMPL(__imp__sub_82607050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82607054"))) PPC_WEAK_FUNC(sub_82607054);
PPC_FUNC_IMPL(__imp__sub_82607054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607058"))) PPC_WEAK_FUNC(sub_82607058);
PPC_FUNC_IMPL(__imp__sub_82607058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82607080
	if (cr6.eq) goto loc_82607080;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82607080:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82607084"))) PPC_WEAK_FUNC(sub_82607084);
PPC_FUNC_IMPL(__imp__sub_82607084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82607088"))) PPC_WEAK_FUNC(sub_82607088);
PPC_FUNC_IMPL(__imp__sub_82607088) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d44c
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82607110
	if (!cr0.lt) goto loc_82607110;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82607108
	if (!cr6.eq) goto loc_82607108;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
loc_82607108:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82607190
	goto loc_82607190;
loc_82607110:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d5ec
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82607148
	if (!cr6.lt) goto loc_82607148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// b 0x82607108
	goto loc_82607108;
loc_82607148:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	r11.s64 = ctx.r9.s64 * ctx.r8.s64;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// beq cr6,0x82607174
	if (cr6.eq) goto loc_82607174;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
loc_82607174:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82607180
	if (cr6.eq) goto loc_82607180;
	// std r10,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r10.u64);
loc_82607180:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8260718c
	if (cr6.eq) goto loc_8260718C;
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
loc_8260718C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82607190:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82607194"))) PPC_WEAK_FUNC(sub_82607194);
PPC_FUNC_IMPL(__imp__sub_82607194) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82607198"))) PPC_WEAK_FUNC(sub_82607198);
PPC_FUNC_IMPL(__imp__sub_82607198) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314d60c
	__imp__NtQueryInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607220
	if (cr0.lt) goto loc_82607220;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x8314d5fc
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607220
	if (cr0.lt) goto loc_82607220;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// bl 0x8314d5fc
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607220
	if (cr0.lt) goto loc_82607220;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82607228
	goto loc_82607228;
loc_82607220:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82607238"))) PPC_WEAK_FUNC(sub_82607238);
PPC_FUNC_IMPL(__imp__sub_82607238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260723C"))) PPC_WEAK_FUNC(sub_8260723C);
PPC_FUNC_IMPL(__imp__sub_8260723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607240"))) PPC_WEAK_FUNC(sub_82607240);
PPC_FUNC_IMPL(__imp__sub_82607240) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82607270
	if (cr6.eq) goto loc_82607270;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82607274
	goto loc_82607274;
loc_82607270:
	// extsw r30,r4
	r30.s64 = ctx.r4.s32;
loc_82607274:
	// lis r31,-31965
	r31.s64 = -2094858240;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82607300
	if (cr6.lt) goto loc_82607300;
	// beq cr6,0x826072cc
	if (cr6.eq) goto loc_826072CC;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x826072cc
	if (!cr6.lt) goto loc_826072CC;
	// lwz r11,28316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28316);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826072c0
	if (!cr0.lt) goto loc_826072C0;
loc_826072B8:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// b 0x826073a4
	goto loc_826073A4;
loc_826072C0:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
loc_826072C4:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x82607304
	goto loc_82607304;
loc_826072CC:
	// lwz r11,28316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28316);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826072b8
	if (cr0.lt) goto loc_826072B8;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x826072c4
	goto loc_826072C4;
loc_82607300:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82607304:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x8260731c
	if (!cr6.lt) goto loc_8260731C;
	// li r3,131
	ctx.r3.s64 = 131;
loc_82607314:
	// bl 0x8260ab50
	sub_8260AB50(ctx, base);
	// b 0x826073a4
	goto loc_826073A4;
loc_8260731C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82607338
	if (!cr6.eq) goto loc_82607338;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82607338
	if (cr0.eq) goto loc_82607338;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82607314
	goto loc_82607314;
loc_82607338:
	// lwz r11,28316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28316);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607390
	if (cr0.lt) goto loc_82607390;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82607374
	if (cr6.eq) goto loc_82607374;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82607374:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82607388
	if (!cr6.eq) goto loc_82607388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
loc_82607388:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826073a8
	goto loc_826073A8;
loc_82607390:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826073a4
	if (cr6.eq) goto loc_826073A4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_826073A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826073A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826073AC"))) PPC_WEAK_FUNC(sub_826073AC);
PPC_FUNC_IMPL(__imp__sub_826073AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826073B0"))) PPC_WEAK_FUNC(sub_826073B0);
PPC_FUNC_IMPL(__imp__sub_826073B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826073e0
	if (cr6.eq) goto loc_826073E0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_826073E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82607458
	if (cr6.eq) goto loc_82607458;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = r11.u64 & r31.u64;
	// bl 0x8314d62c
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826074c4
	if (cr6.eq) goto loc_826074C4;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x826074c4
	if (cr6.eq) goto loc_826074C4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82607450
	if (cr6.eq) goto loc_82607450;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82607450:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826074cc
	goto loc_826074CC;
loc_82607458:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d62c
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x82607494
	if (!cr6.eq) goto loc_82607494;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826074ac
	if (cr0.lt) goto loc_826074AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82607494:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826074ac
	if (cr6.lt) goto loc_826074AC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x826074cc
	goto loc_826074CC;
loc_826074AC:
	// rlwinm r11,r3,0,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826074c4
	if (!cr6.eq) goto loc_826074C4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_826074C4:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826074CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826074D0"))) PPC_WEAK_FUNC(sub_826074D0);
PPC_FUNC_IMPL(__imp__sub_826074D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826074D4"))) PPC_WEAK_FUNC(sub_826074D4);
PPC_FUNC_IMPL(__imp__sub_826074D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826074D8"))) PPC_WEAK_FUNC(sub_826074D8);
PPC_FUNC_IMPL(__imp__sub_826074D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d44c
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607570
	if (cr0.lt) goto loc_82607570;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d5fc
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8260756c
	if (cr6.lt) goto loc_8260756C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82607578
	goto loc_82607578;
loc_8260756C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82607570:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607578:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82607588"))) PPC_WEAK_FUNC(sub_82607588);
PPC_FUNC_IMPL(__imp__sub_82607588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260758C"))) PPC_WEAK_FUNC(sub_8260758C);
PPC_FUNC_IMPL(__imp__sub_8260758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607590"))) PPC_WEAK_FUNC(sub_82607590);
PPC_FUNC_IMPL(__imp__sub_82607590) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// beq cr6,0x82607610
	if (cr6.eq) goto loc_82607610;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x82607608
	if (cr6.eq) goto loc_82607608;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// beq cr6,0x82607600
	if (cr6.eq) goto loc_82607600;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// beq cr6,0x826075f8
	if (cr6.eq) goto loc_826075F8;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bne cr6,0x826075e4
	if (!cr6.eq) goto loc_826075E4;
	// rlwinm. r11,r4,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x82607614
	if (!cr0.eq) goto loc_82607614;
loc_826075E4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
loc_826075F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8260777c
	goto loc_8260777C;
loc_826075F8:
	// li r30,3
	r30.s64 = 3;
	// b 0x82607614
	goto loc_82607614;
loc_82607600:
	// li r30,1
	r30.s64 = 1;
	// b 0x82607614
	goto loc_82607614;
loc_82607608:
	// li r30,5
	r30.s64 = 5;
	// b 0x82607614
	goto loc_82607614;
loc_82607610:
	// li r30,2
	r30.s64 = 2;
loc_82607614:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82607640
	if (!cr6.gt) goto loc_82607640;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82607644
	if (cr6.eq) goto loc_82607644;
loc_82607640:
	// li r29,0
	r29.s64 = 0;
loc_82607644:
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	r11.u64 = (__builtin_rotateleft32(r31.u32, 28) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// beq 0x826076ac
	if (cr0.eq) goto loc_826076AC;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// oris r28,r28,1
	r28.u64 = r28.u64 | 65536;
loc_826076AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826076b8
	if (!cr6.eq) goto loc_826076B8;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_826076B8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// oris r4,r28,16
	ctx.r4.u64 = r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r11,28316(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28316);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82607744
	if (!cr0.lt) goto loc_82607744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x8260771c
	if (!cr6.eq) goto loc_8260771C;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x8260773c
	goto loc_8260773C;
loc_8260771C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,186
	r11.u64 = r11.u64 | 186;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x826075f0
	if (!cr6.eq) goto loc_826075F0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x8260773c
	if (!cr6.eq) goto loc_8260773C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8260773C:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// b 0x826075f0
	goto loc_826075F0;
loc_82607744:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// bne cr6,0x82607758
	if (!cr6.eq) goto loc_82607758;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82607768
	if (cr6.eq) goto loc_82607768;
loc_82607758:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bne cr6,0x82607770
	if (!cr6.eq) goto loc_82607770;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82607770
	if (!cr6.eq) goto loc_82607770;
loc_82607768:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82607774
	goto loc_82607774;
loc_82607770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607774:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8260777C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82607780"))) PPC_WEAK_FUNC(sub_82607780);
PPC_FUNC_IMPL(__imp__sub_82607780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82607784"))) PPC_WEAK_FUNC(sub_82607784);
PPC_FUNC_IMPL(__imp__sub_82607784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607788"))) PPC_WEAK_FUNC(sub_82607788);
PPC_FUNC_IMPL(__imp__sub_82607788) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
}

__attribute__((alias("__imp__sub_82607790"))) PPC_WEAK_FUNC(sub_82607790);
PPC_FUNC_IMPL(__imp__sub_82607790) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e188
	sub_8260E188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82607794"))) PPC_WEAK_FUNC(sub_82607794);
PPC_FUNC_IMPL(__imp__sub_82607794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607798"))) PPC_WEAK_FUNC(sub_82607798);
PPC_FUNC_IMPL(__imp__sub_82607798) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r10,76
	r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8260794c
	if (!cr6.eq) goto loc_8260794C;
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82607840
	if (cr6.eq) goto loc_82607840;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82607840
	if (cr6.eq) goto loc_82607840;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r7,1424(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1424);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82607870
	if (cr0.lt) goto loc_82607870;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82607904
	goto loc_82607904;
loc_82607840:
	// lis r11,16
	r11.s64 = 1048576;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82607878
	if (!cr0.lt) goto loc_82607878;
loc_82607870:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82607958
	goto loc_82607958;
loc_82607878:
	// lis r11,1
	r11.s64 = 65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826078c8
	if (!cr0.lt) goto loc_826078C8;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 1424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82607870
	goto loc_82607870;
loc_826078C8:
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82607904:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82607940
	if (!cr6.lt) goto loc_82607940;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82607930:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x82607930
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82607930;
loc_82607940:
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
loc_8260794C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82607958:
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

__attribute__((alias("__imp__sub_8260796C"))) PPC_WEAK_FUNC(sub_8260796C);
PPC_FUNC_IMPL(__imp__sub_8260796C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82607970"))) PPC_WEAK_FUNC(sub_82607970);
PPC_FUNC_IMPL(__imp__sub_82607970) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r3,56
	r28.s64 = ctx.r3.s64 + 56;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82607a14
	if (cr6.eq) goto loc_82607A14;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8260799C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bgt cr6,0x82607a5c
	if (cr6.gt) goto loc_82607A5C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x82607a04
	if (!cr6.eq) goto loc_82607A04;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// ble cr6,0x82607a08
	if (!cr6.gt) goto loc_82607A08;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x82607a08
	goto loc_82607A08;
loc_82607A04:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82607A08:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260799c
	if (!cr6.eq) goto loc_8260799C;
loc_82607A14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607798
	sub_82607798(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82607a54
	if (cr0.eq) goto loc_82607A54;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// blt cr6,0x82607a54
	if (cr6.lt) goto loc_82607A54;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82607A54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82607A5C:
	// add r9,r29,r30
	ctx.r9.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82607a14
	if (!cr6.eq) goto loc_82607A14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82607a54
	if (!cr6.gt) goto loc_82607A54;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82607A88"))) PPC_WEAK_FUNC(sub_82607A88);
PPC_FUNC_IMPL(__imp__sub_82607A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82607a54
	// ERROR 82607A54
	return;
}

__attribute__((alias("__imp__sub_82607A8C"))) PPC_WEAK_FUNC(sub_82607A8C);
PPC_FUNC_IMPL(__imp__sub_82607A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607A90"))) PPC_WEAK_FUNC(sub_82607A90);
PPC_FUNC_IMPL(__imp__sub_82607A90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// addi r25,r4,56
	r25.s64 = ctx.r4.s64 + 56;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82607af8
	if (cr6.eq) goto loc_82607AF8;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82607AC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82607ae4
	if (cr6.lt) goto loc_82607AE4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82607b04
	if (cr6.eq) goto loc_82607B04;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82607b04
	if (cr6.eq) goto loc_82607B04;
loc_82607AE4:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82607ac4
	if (!cr6.eq) goto loc_82607AC4;
loc_82607AF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607AFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82607B04:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,1412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82607b2c
	if (cr6.eq) goto loc_82607B2C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82607b48
	goto loc_82607B48;
loc_82607B2C:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_82607B48:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82607af8
	if (cr6.lt) goto loc_82607AF8;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82607b74
	if (!cr6.eq) goto loc_82607B74;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
loc_82607B74:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82607ba4
	if (cr0.eq) goto loc_82607BA4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82607c10
	if (cr6.eq) goto loc_82607C10;
loc_82607BA4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82607bb4
	if (!cr6.eq) goto loc_82607BB4;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// b 0x82607bc0
	goto loc_82607BC0;
loc_82607BB4:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82607BC0:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82607c10
	if (!cr0.eq) goto loc_82607C10;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_82607BD0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82607c04
	if (!cr6.lt) goto loc_82607C04;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82607c04
	if (cr0.eq) goto loc_82607C04;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82607bd0
	if (cr0.eq) goto loc_82607BD0;
	// b 0x82607c10
	goto loc_82607C10;
loc_82607C04:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82607af8
	if (!cr6.eq) goto loc_82607AF8;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82607C10:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x82607ca0
	if (!cr0.eq) goto loc_82607CA0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82607c60
	if (!cr6.eq) goto loc_82607C60;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x82607c6c
	goto loc_82607C6C;
loc_82607C60:
	// stb r26,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_82607C6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x82607cac
	goto loc_82607CAC;
loc_82607CA0:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_82607CAC:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// bne 0x82607ce4
	if (!cr0.eq) goto loc_82607CE4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82607CE4:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82607afc
	if (!cr6.eq) goto loc_82607AFC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x82607d10
	goto loc_82607D10;
loc_82607CF8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82607d0c
	if (cr6.lt) goto loc_82607D0C;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_82607D0C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82607D10:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82607cf8
	if (!cr6.eq) goto loc_82607CF8;
}

__attribute__((alias("__imp__sub_82607D18"))) PPC_WEAK_FUNC(sub_82607D18);
PPC_FUNC_IMPL(__imp__sub_82607D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82607afc
	// ERROR 82607AFC
	return;
}

__attribute__((alias("__imp__sub_82607D1C"))) PPC_WEAK_FUNC(sub_82607D1C);
PPC_FUNC_IMPL(__imp__sub_82607D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82607D20"))) PPC_WEAK_FUNC(sub_82607D20);
PPC_FUNC_IMPL(__imp__sub_82607D20) {
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
	// lhz r11,2(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lis r10,-274
	ctx.r10.s64 = -17956864;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r31,r11,r4
	r31.s64 = ctx.r4.s64 - r11.s64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r26,1
	r26.s64 = 1;
	// ori r25,r10,65262
	r25.u64 = ctx.r10.u64 | 65262;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82607f34
	if (cr6.eq) goto loc_82607F34;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82607f34
	if (!cr0.eq) goto loc_82607F34;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x82607f34
	if (cr6.gt) goto loc_82607F34;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82607e30
	if (cr6.eq) goto loc_82607E30;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82607de4
	if (!cr6.eq) goto loc_82607DE4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82607de4
	if (!cr6.eq) goto loc_82607DE4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82607de4
	if (!cr6.eq) goto loc_82607DE4;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82607de4
	if (!cr6.lt) goto loc_82607DE4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82607DE4:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82607e1c
	if (cr0.eq) goto loc_82607E1C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82607e10
	if (cr0.eq) goto loc_82607E10;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82607e10
	if (!cr6.gt) goto loc_82607E10;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82607E10:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82607E1C:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_82607E30:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82607e90
	if (!cr6.eq) goto loc_82607E90;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82607e90
	if (!cr6.eq) goto loc_82607E90;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82607e90
	if (!cr6.eq) goto loc_82607E90;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82607e90
	if (!cr6.lt) goto loc_82607E90;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82607E90:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82607ec8
	if (cr0.eq) goto loc_82607EC8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82607ebc
	if (cr0.eq) goto loc_82607EBC;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82607ebc
	if (!cr6.gt) goto loc_82607EBC;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82607EBC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82607EC8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// beq 0x82607eec
	if (cr0.eq) goto loc_82607EEC;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_82607EEC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r10,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// bne 0x82607f34
	if (!cr0.eq) goto loc_82607F34;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82607F34:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82608118
	if (!cr0.eq) goto loc_82608118;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82608118
	if (!cr0.eq) goto loc_82608118;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x82608118
	if (cr6.gt) goto loc_82608118;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82608018
	if (cr6.eq) goto loc_82608018;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82607fd0
	if (!cr6.eq) goto loc_82607FD0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82607fd0
	if (!cr6.eq) goto loc_82607FD0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82607fd0
	if (!cr6.eq) goto loc_82607FD0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82607fd0
	if (!cr6.lt) goto loc_82607FD0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82607FD0:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82608008
	if (cr0.eq) goto loc_82608008;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82607ffc
	if (cr0.eq) goto loc_82607FFC;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82607ffc
	if (!cr6.gt) goto loc_82607FFC;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82607FFC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82608008:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_82608018:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x8260803c
	if (cr0.eq) goto loc_8260803C;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_8260803C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8260809c
	if (!cr6.eq) goto loc_8260809C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260809c
	if (!cr6.eq) goto loc_8260809C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x8260809c
	if (!cr6.eq) goto loc_8260809C;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x8260809c
	if (!cr6.lt) goto loc_8260809C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_8260809C:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826080d4
	if (cr0.eq) goto loc_826080D4;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x826080c8
	if (cr0.eq) goto loc_826080C8;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x826080c8
	if (!cr6.gt) goto loc_826080C8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_826080C8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_826080D4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// sth r10,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// bne 0x82608118
	if (!cr0.eq) goto loc_82608118;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82608118:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82608120"))) PPC_WEAK_FUNC(sub_82608120);
PPC_FUNC_IMPL(__imp__sub_82608120) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82608124"))) PPC_WEAK_FUNC(sub_82608124);
PPC_FUNC_IMPL(__imp__sub_82608124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608128"))) PPC_WEAK_FUNC(sub_82608128);
PPC_FUNC_IMPL(__imp__sub_82608128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e9418
	// lbz r31,4(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// b 0x82608244
	goto loc_82608244;
loc_8260815C:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// ble cr6,0x82608180
	if (!cr6.gt) goto loc_82608180;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	cr6.compare<uint32_t>(ctx.r5.u32, 61441, xer);
	// bne cr6,0x82608174
	if (!cr6.eq) goto loc_82608174;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_82608174:
	// li r11,0
	r11.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// b 0x82608188
	goto loc_82608188;
loc_82608180:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_82608188:
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r31.u8);
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// bge cr6,0x826081ec
	if (!cr6.lt) goto loc_826081EC;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82608210
	if (!cr6.eq) goto loc_82608210;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x82608210
	goto loc_82608210;
loc_826081EC:
	// lwz r11,384(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x82608208
	goto loc_82608208;
loc_826081F8:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82608210
	if (!cr6.gt) goto loc_82608210;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82608208:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826081f8
	if (!cr6.eq) goto loc_826081F8;
loc_82608210:
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82608258
	if (!cr6.lt) {
		sub_82608258(ctx, base);
		return;
	}
loc_82608244:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8260815c
	if (!cr6.eq) goto loc_8260815C;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82608258
	if (!cr0.eq) {
		sub_82608258(ctx, base);
		return;
	}
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
}

__attribute__((alias("__imp__sub_82608258"))) PPC_WEAK_FUNC(sub_82608258);
PPC_FUNC_IMPL(__imp__sub_82608258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260825C"))) PPC_WEAK_FUNC(sub_8260825C);
PPC_FUNC_IMPL(__imp__sub_8260825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608260"))) PPC_WEAK_FUNC(sub_82608260);
PPC_FUNC_IMPL(__imp__sub_82608260) {
	PPC_FUNC_PROLOGUE();
	// stw r4,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_82608264"))) PPC_WEAK_FUNC(sub_82608264);
PPC_FUNC_IMPL(__imp__sub_82608264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82608268"))) PPC_WEAK_FUNC(sub_82608268);
PPC_FUNC_IMPL(__imp__sub_82608268) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x8260829c
	if (!cr6.gt) goto loc_8260829C;
loc_82608294:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826087e0
	goto loc_826087E0;
loc_8260829C:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// beq 0x82608354
	if (cr0.eq) goto loc_82608354;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82607a90
	sub_82607A90(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82608294
	if (cr0.eq) goto loc_82608294;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82607d20
	sub_82607D20(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r28,5(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82608424
	if (!cr6.lt) goto loc_82608424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x826087e0
	goto loc_826087E0;
loc_82608354:
	// lbz r28,5(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82608294
	if (!cr0.eq) goto loc_82608294;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82608294
	if (cr6.lt) goto loc_82608294;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826083d4
	if (!cr6.eq) goto loc_826083D4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826083d4
	if (!cr6.eq) goto loc_826083D4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x826083d4
	if (!cr6.eq) goto loc_826083D4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x826083d4
	if (!cr6.lt) goto loc_826083D4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_826083D4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82608410
	if (cr0.eq) goto loc_82608410;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82608400
	if (cr0.eq) goto loc_82608400;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82608400
	if (!cr6.gt) goto loc_82608400;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82608400:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82608410:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_82608424:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lbz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bgt cr6,0x82608450
	if (cr6.gt) goto loc_82608450;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82608450:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82608488
	if (cr0.eq) goto loc_82608488;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,-16(r9)
	PPC_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,-8(r9)
	PPC_STORE_U64(ctx.r9.u32 + -8, r11.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82608488:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826084e0
	if (!cr6.eq) goto loc_826084E0;
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.s64 = ctx.r9.s64 - r23.s64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	PPC_STORE_U8(r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r11.u16);
	// bne 0x826084c8
	if (!cr0.eq) goto loc_826084C8;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x826087ac
	goto loc_826087AC;
loc_826084C8:
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r27,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r27.u32);
	// b 0x826087ac
	goto loc_826087AC;
loc_826084E0:
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// subf r10,r23,r11
	ctx.r10.s64 = r11.s64 - r23.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r10,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// sth r9,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// beq 0x82608570
	if (cr0.eq) goto loc_82608570;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x826085c4
	if (cr6.lt) goto loc_826085C4;
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82608564
	goto loc_82608564;
loc_82608554:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82608774
	if (!cr6.gt) goto loc_82608774;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82608564:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82608554
	if (!cr6.eq) goto loc_82608554;
	// b 0x82608774
	goto loc_82608774;
loc_82608570:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lbz r28,5(r29)
	r28.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826085f4
	if (cr0.eq) goto loc_826085F4;
	// andi. r11,r10,239
	r11.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x826085cc
	if (!cr6.lt) goto loc_826085CC;
loc_826085C4:
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x82608714
	goto loc_82608714;
loc_826085CC:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x826085e8
	goto loc_826085E8;
loc_826085D8:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82608774
	if (!cr6.gt) goto loc_82608774;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_826085E8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826085d8
	if (!cr6.eq) goto loc_826085D8;
	// b 0x82608774
	goto loc_82608774;
loc_826085F4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82608654
	if (!cr6.eq) goto loc_82608654;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82608654
	if (!cr6.eq) goto loc_82608654;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82608654
	if (!cr6.eq) goto loc_82608654;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82608654
	if (!cr6.lt) goto loc_82608654;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82608654:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82608690
	if (cr0.eq) goto loc_82608690;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82608680
	if (cr0.eq) goto loc_82608680;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82608680
	if (!cr6.gt) goto loc_82608680;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82608680:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82608690:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x826087a0
	if (cr6.gt) goto loc_826087A0;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r5,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// bne 0x826086e0
	if (!cr0.eq) goto loc_826086E0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x826086f4
	goto loc_826086F4;
loc_826086E0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_826086F4:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x82608750
	if (!cr6.lt) goto loc_82608750;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_82608714:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82608774
	if (!cr6.eq) goto loc_82608774;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x82608774
	goto loc_82608774;
loc_82608750:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// b 0x8260876c
	goto loc_8260876C;
loc_8260875C:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82608774
	if (!cr6.gt) goto loc_82608774;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8260876C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260875c
	if (!cr6.eq) goto loc_8260875C;
loc_82608774:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x826087ac
	goto loc_826087AC;
loc_826087A0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
loc_826087AC:
	// rlwinm. r11,r22,0,28,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826087d0
	if (cr0.eq) goto loc_826087D0;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(r23.u32, r24.u32, xer);
	// ble cr6,0x826087d0
	if (!cr6.gt) goto loc_826087D0;
	// add r11,r24,r27
	r11.u64 = r24.u64 + r27.u64;
	// subf r5,r24,r23
	ctx.r5.s64 = r23.s64 - r24.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_826087D0:
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	r11.u64 = (__builtin_rotateleft32(r22.u32, 28) & 0xE0) | (r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	PPC_STORE_U8(r27.u32 + 5, r11.u8);
loc_826087E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826087E4"))) PPC_WEAK_FUNC(sub_826087E4);
PPC_FUNC_IMPL(__imp__sub_826087E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_826087E8"))) PPC_WEAK_FUNC(sub_826087E8);
PPC_FUNC_IMPL(__imp__sub_826087E8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82608838
	if (cr0.eq) goto loc_82608838;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82608838
	if (cr6.eq) goto loc_82608838;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5206
	ctx.r6.s64 = 5206;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_82608838:
	// lbz r11,-11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260884c
	if (!cr0.eq) goto loc_8260884C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82608878
	goto loc_82608878;
loc_8260884C:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82608868
	if (cr0.eq) goto loc_82608868;
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// b 0x82608878
	goto loc_82608878;
loc_82608868:
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -10);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
loc_82608878:
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

__attribute__((alias("__imp__sub_8260888C"))) PPC_WEAK_FUNC(sub_8260888C);
PPC_FUNC_IMPL(__imp__sub_8260888C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82608890"))) PPC_WEAK_FUNC(sub_82608890);
PPC_FUNC_IMPL(__imp__sub_82608890) {
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
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r11,r4,87
	r11.s64 = ctx.r4.s64 + 87;
	// srawi r10,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r26.s64 = temp.s64;
	// bne cr6,0x826088dc
	if (!cr6.eq) goto loc_826088DC;
	// lhz r22,0(r3)
	r22.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x826088e0
	goto loc_826088E0;
loc_826088DC:
	// li r22,0
	r22.s64 = 0;
loc_826088E0:
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// clrlwi r24,r10,16
	r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x82608948
	if (cr6.lt) goto loc_82608948;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82608908
	if (cr6.lt) goto loc_82608908;
loc_82608900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826089f0
	goto loc_826089F0;
loc_82608908:
	// subf r11,r8,r30
	r11.s64 = r30.s64 - ctx.r8.s64;
	// lwz r7,1424(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 1424);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82608900
	if (cr0.lt) goto loc_82608900;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_82608948:
	// subf r11,r8,r27
	r11.s64 = r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// addze. r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stb r7,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x826089b0
	if (cr0.eq) goto loc_826089B0;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607970
	sub_82607970(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_826089B0:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - r30.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r31.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// bl 0x82608128
	sub_82608128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_826089F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826089F4"))) PPC_WEAK_FUNC(sub_826089F4);
PPC_FUNC_IMPL(__imp__sub_826089F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_826089F8"))) PPC_WEAK_FUNC(sub_826089F8);
PPC_FUNC_IMPL(__imp__sub_826089F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82608A2C:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82608ab0
	if (cr6.eq) goto loc_82608AB0;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82608ac0
	if (cr6.gt) goto loc_82608AC0;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82608ac0
	if (cr6.gt) goto loc_82608AC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607a90
	sub_82607A90(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82608ac0
	if (cr0.eq) goto loc_82608AC0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82607d20
	sub_82607D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82608c2c
	goto loc_82608C2C;
loc_82608AB0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x82608ac0
	if (!cr6.eq) goto loc_82608AC0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82608AC0:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82608a2c
	if (cr6.lt) goto loc_82608A2C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x82608c28
	if (cr6.eq) goto loc_82608C28;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82608c28
	if (cr0.eq) goto loc_82608C28;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82608b0c
	if (cr6.gt) goto loc_82608B0C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82608B0C:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82608b7c
	if (!cr0.lt) goto loc_82608B7C;
loc_82608B30:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82608b74
	if (cr6.eq) goto loc_82608B74;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82608b50
	if (!cr6.lt) goto loc_82608B50;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_82608B50:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82608b30
	if (cr0.lt) goto loc_82608B30;
loc_82608B74:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82608c28
	if (cr6.lt) goto loc_82608C28;
loc_82608B7C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x82608ba0
	if (cr6.gt) goto loc_82608BA0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82608BA0:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82608c10
	if (cr0.lt) goto loc_82608C10;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82608890
	sub_82608890(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82608bfc
	if (!cr0.eq) goto loc_82608BFC;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_82608BFC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82608c10
	if (cr6.lt) goto loc_82608C10;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// b 0x82608c2c
	goto loc_82608C2C;
loc_82608C10:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82608C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82608C2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82608C30"))) PPC_WEAK_FUNC(sub_82608C30);
PPC_FUNC_IMPL(__imp__sub_82608C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82608C34"))) PPC_WEAK_FUNC(sub_82608C34);
PPC_FUNC_IMPL(__imp__sub_82608C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82608C38"))) PPC_WEAK_FUNC(sub_82608C38);
PPC_FUNC_IMPL(__imp__sub_82608C38) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82608f80
	if (!cr6.eq) goto loc_82608F80;
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	r23.u64 = r19.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r3
	r25.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x82608cac
	if (!cr6.eq) goto loc_82608CAC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	r26.s64 = 4097;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82608cc8
	goto loc_82608CC8;
loc_82608CAC:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82608cc8
	if (cr0.eq) goto loc_82608CC8;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bne cr6,0x82608cc8
	if (!cr6.eq) goto loc_82608CC8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	r23.s64 = r31.s64 - r11.s64;
loc_82608CC8:
	// rlwinm r11,r24,4,0,27
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x82608cfc
	if (!cr6.eq) goto loc_82608CFC;
	// li r27,4097
	r27.s64 = 4097;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// b 0x82608d14
	goto loc_82608D14;
loc_82608CFC:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82608d14
	if (!cr6.eq) goto loc_82608D14;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82608d14
	if (!cr0.eq) goto loc_82608D14;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_82608D14:
	// rlwinm r22,r27,4,12,27
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// clrlwi r21,r27,16
	r21.u64 = r27.u32 & 0xFFFF;
	// subf r28,r22,r10
	r28.s64 = ctx.r10.s64 - r22.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// bgt cr6,0x82608d30
	if (cr6.gt) goto loc_82608D30;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82608D30:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82608f80
	if (cr6.eq) goto loc_82608F80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82607798
	sub_82607798(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82608f80
	if (cr0.eq) goto loc_82608F80;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,1424(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// stw r30,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r19.u32);
	// blt 0x82608f80
	if (cr0.lt) goto loc_82608F80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82607970
	sub_82607970(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	PPC_STORE_U32(r25.u32 + 48, ctx.r10.u32);
	// beq 0x82608e68
	if (cr0.eq) goto loc_82608E68;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x82608e24
	if (!cr6.lt) goto loc_82608E24;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82608e4c
	if (!cr6.eq) goto loc_82608E4C;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x82608e4c
	goto loc_82608E4C;
loc_82608E24:
	// lwz r10,384(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 384);
	// addi r9,r29,384
	ctx.r9.s64 = r29.s64 + 384;
	// b 0x82608e40
	goto loc_82608E40;
loc_82608E30:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82608e48
	if (!cr6.gt) goto loc_82608E48;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82608E40:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82608e30
	if (!cr6.eq) goto loc_82608E30;
loc_82608E48:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82608E4C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82608eac
	goto loc_82608EAC;
loc_82608E68:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82608e84
	if (cr6.eq) goto loc_82608E84;
	// lbz r11,5(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(r23.u32 + 5, r11.u8);
	// stw r23,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r23.u32);
	// b 0x82608eac
	goto loc_82608EAC;
loc_82608E84:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82608eac
	if (cr6.lt) goto loc_82608EAC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82608eac
	if (!cr6.lt) goto loc_82608EAC;
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// stw r11,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r11.u32);
loc_82608EAC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82608f70
	if (cr6.eq) goto loc_82608F70;
	// add r11,r22,r28
	r11.u64 = r22.u64 + r28.u64;
	// sth r19,2(r28)
	PPC_STORE_U16(r28.u32 + 2, r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r21,128
	cr6.compare<uint32_t>(r21.u32, 128, xer);
	// stb r19,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r19.u8);
	// stb r10,4(r28)
	PPC_STORE_U8(r28.u32 + 4, ctx.r10.u8);
	// sth r27,0(r28)
	PPC_STORE_U16(r28.u32 + 0, r27.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r27.u16);
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r11.u8);
	// bge cr6,0x82608f24
	if (!cr6.lt) goto loc_82608F24;
	// addi r11,r21,48
	r11.s64 = r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82608f48
	if (!cr6.eq) goto loc_82608F48;
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x82608f48
	goto loc_82608F48;
loc_82608F24:
	// lwz r11,384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 384);
	// addi r10,r29,384
	ctx.r10.s64 = r29.s64 + 384;
	// b 0x82608f40
	goto loc_82608F40;
loc_82608F30:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r21,r9
	cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, xer);
	// ble cr6,0x82608f48
	if (!cr6.gt) goto loc_82608F48;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82608F40:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82608f30
	if (!cr6.eq) goto loc_82608F30;
loc_82608F48:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// b 0x82608f90
	goto loc_82608F90;
loc_82608F70:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82608f90
	if (cr6.eq) goto loc_82608F90;
	// sth r19,2(r20)
	PPC_STORE_U16(r20.u32 + 2, r19.u16);
	// b 0x82608f90
	goto loc_82608F90;
loc_82608F80:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
loc_82608F90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82608F94"))) PPC_WEAK_FUNC(sub_82608F94);
PPC_FUNC_IMPL(__imp__sub_82608F94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82608F98"))) PPC_WEAK_FUNC(sub_82608F98);
PPC_FUNC_IMPL(__imp__sub_82608F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13864(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13864);
	// mflr r12
	// bl 0x828e93f8
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// li r11,6
	r11.s64 = 6;
	// li r21,0
	r21.s64 = 0;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r21,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r21.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r4,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r4.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r5,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r5.u32);
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
	// stw r6,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r6.u32);
	// stw r7,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82608FF0:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x82608ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82608FF0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82609064
	if (cr6.eq) {
		// ERROR 82609064
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82609028
	if (!cr6.eq) goto loc_82609028;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
loc_82609028:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609050
	// ERROR 82609050
	return;
}

__attribute__((alias("__imp__sub_82608FA0"))) PPC_WEAK_FUNC(sub_82608FA0);
PPC_FUNC_IMPL(__imp__sub_82608FA0) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// li r11,6
	r11.s64 = 6;
	// li r21,0
	r21.s64 = 0;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r21,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r21.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r4,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r4.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r5,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r5.u32);
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
	// stw r6,332(r31)
	PPC_STORE_U32(r31.u32 + 332, ctx.r6.u32);
	// stw r7,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82608FF0:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x82608ff0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82608FF0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82609064
	if (cr6.eq) goto loc_82609064;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82609028
	if (!cr6.eq) goto loc_82609028;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
loc_82609028:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609050
	goto loc_82609050;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r20,340(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// li r21,0
	r21.s64 = 0;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r29,316(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r23,308(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_82609050:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82609060
	if (!cr6.lt) goto loc_82609060;
loc_82609058:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82609554
	goto loc_82609554;
loc_82609060:
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 332);
loc_82609064:
	// lis r22,-31917
	r22.s64 = -2091712512;
	// lwz r11,-28344(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -28344);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609078
	if (cr0.eq) goto loc_82609078;
	// ori r23,r23,128
	r23.u64 = r23.u64 | 128;
loc_82609078:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609090
	if (!cr6.eq) goto loc_82609090;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28252);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82609090:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090a8
	if (!cr6.eq) goto loc_826090A8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28256);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_826090A8:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090c0
	if (!cr6.eq) goto loc_826090C0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28264);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_826090C0:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090d8
	if (!cr6.eq) goto loc_826090D8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28260(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28260);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_826090D8:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090f0
	if (!cr6.eq) goto loc_826090F0;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_826090F0:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82609108
	if (cr6.eq) goto loc_82609108;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82609110
	if (!cr6.gt) goto loc_82609110;
loc_82609108:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_82609110:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x82609168
	if (!cr6.eq) goto loc_82609168;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// bne cr6,0x82609138
	if (!cr6.eq) goto loc_82609138;
	// lis r11,64
	r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	r25.u64 = ctx.r10.u64 | 65535;
	// b 0x82609148
	goto loc_82609148;
loc_82609138:
	// lis r11,0
	r11.s64 = 0;
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
loc_82609140:
	// add r11,r5,r25
	r11.u64 = ctx.r5.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_82609148:
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r24,1432
	r24.s64 = 1432;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne 0x826091a0
	if (!cr0.eq) goto loc_826091A0;
	// beq cr6,0x82609194
	if (cr6.eq) goto loc_82609194;
	// oris r23,r23,32768
	r23.u64 = r23.u64 | 2147483648;
	// b 0x826091a4
	goto loc_826091A4;
loc_82609168:
	// lis r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
	// add r11,r6,r25
	r11.u64 = ctx.r6.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// bne cr6,0x82609140
	if (!cr6.eq) goto loc_82609140;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82609148
	goto loc_82609148;
loc_82609194:
	// li r24,1460
	r24.s64 = 1460;
	// li r20,-1
	r20.s64 = -1;
	// b 0x826091a4
	goto loc_826091A4;
loc_826091A0:
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
loc_826091A4:
	// rlwinm. r11,r23,0,12,12
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826091bc
	if (cr0.eq) goto loc_826091BC;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r27,3
	r27.s64 = 3;
	// beq cr6,0x826091c0
	if (cr6.eq) goto loc_826091C0;
loc_826091BC:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_826091C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x826092c8
	if (cr6.eq) goto loc_826092C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260921c
	if (cr6.eq) goto loc_8260921C;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82609058
	if (cr6.gt) goto loc_82609058;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82609058
	if (!cr0.eq) goto loc_82609058;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x826092b8
	goto loc_826092B8;
loc_8260921C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d67c
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609058
	if (cr0.lt) goto loc_82609058;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x826092b0
	if (!cr6.eq) goto loc_826092B0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d67c
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// blt 0x826092b8
	if (cr0.lt) goto loc_826092B8;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x826092b8
	if (!cr6.eq) goto loc_826092B8;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// b 0x826092b8
	goto loc_826092B8;
loc_826092B0:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
loc_826092B8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82609314
	goto loc_82609314;
loc_826092C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609058
	if (cr0.lt) goto loc_82609058;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609308
	if (!cr6.eq) goto loc_82609308;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
loc_82609308:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82609314:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82609374
	if (!cr6.eq) goto loc_82609374;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,332
	ctx.r4.s64 = r31.s64 + 332;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82609368
	if (!cr0.lt) goto loc_82609368;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82609058
	goto loc_82609058;
loc_82609368:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
loc_82609374:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r10,1439
	r11.s64 = ctx.r10.s64 + 1439;
	// addi r9,r24,128
	ctx.r9.s64 = r24.s64 + 128;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8260938C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x8260938c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260938C;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,-28344(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + -28344);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826093d4
	if (cr0.eq) goto loc_826093D4;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// addi r29,r10,1548
	r29.s64 = ctx.r10.s64 + 1548;
	// b 0x826093d8
	goto loc_826093D8;
loc_826093D4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_826093D8:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r11,r23,r12
	r11.u64 = r23.u64 & r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r10,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r23,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r23.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r25,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r25.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r21.u32);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r11,128
	r11.s64 = 128;
	// stb r3,379(r10)
	PPC_STORE_U8(ctx.r10.u32 + 379, ctx.r3.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r27,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, r27.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_82609460:
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82609460
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82609460;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r11.u32);
	// bne cr6,0x82609494
	if (!cr6.eq) goto loc_82609494;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r20,r29
	r20.u64 = r29.u64;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82609494:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r20.u32);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// bl 0x82608890
	sub_82608890(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82609058
	if (cr0.eq) goto loc_82609058;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r23,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r21,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r21.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1412, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82609554:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x828e9448
	return;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_82609038"))) PPC_WEAK_FUNC(sub_82609038);
PPC_FUNC_IMPL(__imp__sub_82609038) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r20,340(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// li r21,0
	r21.s64 = 0;
	// lwz r5,324(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r29,316(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r23,308(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82609060
	if (!cr6.lt) goto loc_82609060;
loc_82609058:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82609554
	goto loc_82609554;
loc_82609060:
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lis r22,-31917
	r22.s64 = -2091712512;
	// lwz r11,-28344(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -28344);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609078
	if (cr0.eq) goto loc_82609078;
	// ori r23,r23,128
	r23.u64 = r23.u64 | 128;
loc_82609078:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609090
	if (!cr6.eq) goto loc_82609090;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28252);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82609090:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090a8
	if (!cr6.eq) goto loc_826090A8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28256);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_826090A8:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090c0
	if (!cr6.eq) goto loc_826090C0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28264);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_826090C0:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090d8
	if (!cr6.eq) goto loc_826090D8;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r11,28260(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28260);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_826090D8:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826090f0
	if (!cr6.eq) goto loc_826090F0;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_826090F0:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82609108
	if (cr6.eq) goto loc_82609108;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82609110
	if (!cr6.gt) goto loc_82609110;
loc_82609108:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_82609110:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x82609168
	if (!cr6.eq) goto loc_82609168;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// bne cr6,0x82609138
	if (!cr6.eq) goto loc_82609138;
	// lis r11,64
	r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	r25.u64 = ctx.r10.u64 | 65535;
	// b 0x82609148
	goto loc_82609148;
loc_82609138:
	// lis r11,0
	r11.s64 = 0;
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
loc_82609140:
	// add r11,r5,r25
	r11.u64 = ctx.r5.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_82609148:
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r24,1432
	r24.s64 = 1432;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne 0x826091a0
	if (!cr0.eq) goto loc_826091A0;
	// beq cr6,0x82609194
	if (cr6.eq) goto loc_82609194;
	// oris r23,r23,32768
	r23.u64 = r23.u64 | 2147483648;
	// b 0x826091a4
	goto loc_826091A4;
loc_82609168:
	// lis r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r25,r11,65535
	r25.u64 = r11.u64 | 65535;
	// add r11,r6,r25
	r11.u64 = ctx.r6.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// bne cr6,0x82609140
	if (!cr6.eq) goto loc_82609140;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82609148
	goto loc_82609148;
loc_82609194:
	// li r24,1460
	r24.s64 = 1460;
	// li r20,-1
	r20.s64 = -1;
	// b 0x826091a4
	goto loc_826091A4;
loc_826091A0:
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
loc_826091A4:
	// rlwinm. r11,r23,0,12,12
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826091bc
	if (cr0.eq) goto loc_826091BC;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r27,3
	r27.s64 = 3;
	// beq cr6,0x826091c0
	if (cr6.eq) goto loc_826091C0;
loc_826091BC:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_826091C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x826092c8
	if (cr6.eq) goto loc_826092C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260921c
	if (cr6.eq) goto loc_8260921C;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82609058
	if (cr6.gt) goto loc_82609058;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82609058
	if (!cr0.eq) goto loc_82609058;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x826092b8
	goto loc_826092B8;
loc_8260921C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d67c
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609058
	if (cr0.lt) goto loc_82609058;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82609058
	if (cr6.eq) goto loc_82609058;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x826092b0
	if (!cr6.eq) goto loc_826092B0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d67c
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// blt 0x826092b8
	if (cr0.lt) goto loc_826092B8;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x826092b8
	if (!cr6.eq) goto loc_826092B8;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// b 0x826092b8
	goto loc_826092B8;
loc_826092B0:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
loc_826092B8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82609314
	goto loc_82609314;
loc_826092C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609058
	if (cr0.lt) goto loc_82609058;
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82609308
	if (!cr6.eq) goto loc_82609308;
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
loc_82609308:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82609314:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82609374
	if (!cr6.eq) goto loc_82609374;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,332
	ctx.r4.s64 = r31.s64 + 332;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82609368
	if (!cr0.lt) goto loc_82609368;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82609058
	if (!cr6.eq) goto loc_82609058;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82609058
	goto loc_82609058;
loc_82609368:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
loc_82609374:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r10,1439
	r11.s64 = ctx.r10.s64 + 1439;
	// addi r9,r24,128
	ctx.r9.s64 = r24.s64 + 128;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8260938C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x8260938c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260938C;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,-28344(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + -28344);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826093d4
	if (cr0.eq) goto loc_826093D4;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// addi r29,r10,1548
	r29.s64 = ctx.r10.s64 + 1548;
	// b 0x826093d8
	goto loc_826093D8;
loc_826093D4:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_826093D8:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r11,r23,r12
	r11.u64 = r23.u64 & r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r10,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r23,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r23.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r25,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r25.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r21.u32);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r11,128
	r11.s64 = 128;
	// stb r3,379(r10)
	PPC_STORE_U8(ctx.r10.u32 + 379, ctx.r3.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r27,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, r27.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_82609460:
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82609460
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82609460;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r11.u32);
	// bne cr6,0x82609494
	if (!cr6.eq) goto loc_82609494;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r20,r29
	r20.u64 = r29.u64;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82609494:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r20.u32);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// bl 0x82608890
	sub_82608890(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82609058
	if (cr0.eq) goto loc_82609058;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r23,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r21,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r21.u16);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1412, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82609554:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8260955C"))) PPC_WEAK_FUNC(sub_8260955C);
PPC_FUNC_IMPL(__imp__sub_8260955C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82609568"))) PPC_WEAK_FUNC(sub_82609568);
PPC_FUNC_IMPL(__imp__sub_82609568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r20{};
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
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13840(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13840);
	// mflr r12
	// bl 0x828e9400
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r24.u32);
	// beq 0x826095d8
	if (cr0.eq) goto loc_826095D8;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x826095d8
	if (cr6.eq) goto loc_826095D8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1515
	ctx.r6.s64 = 1515;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_826095D8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// or r23,r11,r29
	r23.u64 = r11.u64 | r29.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x826095f4
	if (!cr6.eq) goto loc_826095F4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826095F4:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82609624
	if (!cr0.eq) goto loc_82609624;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	r22.u64 = r27.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82609624:
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// bge cr6,0x8260981c
	if (!cr6.lt) goto loc_8260981C;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826096e0
	if (cr6.eq) goto loc_826096E0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r6,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_826096B0:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r26,r11
	r26.u64 = r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// rlwimi r6,r27,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stb r6,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r24.u8);
	// b 0x82609ca4
	goto loc_82609CA4;
loc_826096E0:
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x82609730
	if (cr6.lt) goto loc_82609730;
	// beq cr6,0x82609750
	if (cr6.eq) goto loc_82609750;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82609770
	if (cr6.lt) goto loc_82609770;
	// beq cr6,0x82609790
	if (cr6.eq) goto loc_82609790;
	// b 0x82609828
	goto loc_82609828;
loc_82609730:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609740
	if (cr6.eq) goto loc_82609740;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609740:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82609750:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609760
	if (cr6.eq) goto loc_82609760;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609760:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82609770:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609780
	if (cr6.eq) goto loc_82609780;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609780:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82609790:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609828
	if (cr6.eq) goto loc_82609828;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_8260979C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x826098fc
	goto loc_826098FC;
loc_8260981C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82609ce0
	if (cr6.gt) goto loc_82609CE0;
loc_82609828:
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// beq cr6,0x826098b8
	if (cr6.eq) goto loc_826098B8;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x826098b8
	if (cr6.lt) goto loc_826098B8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_82609858:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826098b8
	if (cr6.eq) goto loc_826098B8;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x82609884
	if (!cr6.lt) goto loc_82609884;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609858
	goto loc_82609858;
loc_82609884:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098b0
	if (!cr6.eq) goto loc_826098B0;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x826098b0
	if (!cr6.eq) goto loc_826098B0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_826098B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826098fc
	goto loc_826098FC;
loc_826098B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826089f8
	sub_826089F8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82609da4
	if (cr0.eq) goto loc_82609DA4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098f8
	if (!cr6.eq) goto loc_826098F8;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x826098f8
	if (!cr6.eq) goto loc_826098F8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_826098F8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826098FC:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r9.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x82609c90
	if (cr0.eq) goto loc_82609C90;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82609968
	if (!cr6.eq) goto loc_82609968;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// b 0x82609c90
	goto loc_82609C90;
loc_82609968:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// beq 0x82609a28
	if (cr0.eq) goto loc_82609A28;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x826099e4
	if (!cr6.lt) goto loc_826099E4;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609a94
	if (!cr6.eq) goto loc_82609A94;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82609a90
	goto loc_82609A90;
loc_826099E4:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_826099FC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609a94
	if (cr6.eq) goto loc_82609A94;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82609a94
	if (!cr6.gt) goto loc_82609A94;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826099fc
	goto loc_826099FC;
loc_82609A28:
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82609af8
	if (cr0.eq) goto loc_82609AF8;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82609ab8
	if (!cr6.lt) goto loc_82609AB8;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609a94
	if (!cr6.eq) goto loc_82609A94;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82609A90:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82609A94:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// b 0x82609c54
	goto loc_82609C54;
loc_82609AB8:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82609ACC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609a94
	if (cr6.eq) goto loc_82609A94;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82609a94
	if (!cr6.gt) goto loc_82609A94;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609acc
	goto loc_82609ACC;
loc_82609AF8:
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x82609b5c
	if (!cr6.lt) goto loc_82609B5C;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82609B5C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82609c5c
	if (cr6.gt) goto loc_82609C5C;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82609b9c
	if (!cr0.eq) goto loc_82609B9C;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_82609B9C:
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82609bf4
	if (!cr6.lt) goto loc_82609BF4;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609c34
	if (!cr6.eq) goto loc_82609C34;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82609c34
	goto loc_82609C34;
loc_82609BF4:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_82609C08:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609c34
	if (cr6.eq) goto loc_82609C34;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82609c34
	if (!cr6.gt) goto loc_82609C34;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609c08
	goto loc_82609C08;
loc_82609C34:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_82609C54:
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x82609c68
	goto loc_82609C68;
loc_82609C5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
loc_82609C68:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609c90
	if (cr0.eq) goto loc_82609C90;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_82609C90:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609ca4
	if (cr0.eq) goto loc_82609CA4;
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r11.u8);
loc_82609CA4:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x82609cc4
	if (cr6.eq) goto loc_82609CC4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r24.u32);
loc_82609CC4:
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609dd8
	if (cr0.eq) goto loc_82609DD8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x82609dd8
	goto loc_82609DD8;
loc_82609CE0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609da8
	if (cr0.eq) goto loc_82609DA8;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// not r10,r23
	ctx.r10.u64 = ~r23.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r11,r10,20,8,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x800000;
	// lwz r7,1424(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 1424);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// oris r5,r11,24576
	ctx.r5.u64 = r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609da4
	if (cr0.lt) goto loc_82609DA4;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	r11.s64 = r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// b 0x82609dd8
	goto loc_82609DD8;
loc_82609DA4:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82609DA8:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609dd4
	if (cr0.eq) goto loc_82609DD4;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x8314d5ac
	__imp__RtlRaiseException(ctx, base);
loc_82609DD4:
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
loc_82609DD8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x82609e18
	sub_82609E18(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82609570"))) PPC_WEAK_FUNC(sub_82609570);
PPC_FUNC_IMPL(__imp__sub_82609570) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r24.u32);
	// beq 0x826095d8
	if (cr0.eq) goto loc_826095D8;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x826095d8
	if (cr6.eq) goto loc_826095D8;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1515
	ctx.r6.s64 = 1515;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_826095D8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// or r23,r11,r29
	r23.u64 = r11.u64 | r29.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x826095f4
	if (!cr6.eq) goto loc_826095F4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826095F4:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82609624
	if (!cr0.eq) goto loc_82609624;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	r22.u64 = r27.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82609624:
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// bge cr6,0x8260981c
	if (!cr6.lt) goto loc_8260981C;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826096e0
	if (cr6.eq) goto loc_826096E0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r6,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x826096b0
	if (!cr6.eq) goto loc_826096B0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_826096B0:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r26,r11
	r26.u64 = r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// rlwimi r6,r27,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stb r6,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r24.u8);
	// b 0x82609ca4
	goto loc_82609CA4;
loc_826096E0:
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x82609730
	if (cr6.lt) goto loc_82609730;
	// beq cr6,0x82609750
	if (cr6.eq) goto loc_82609750;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82609770
	if (cr6.lt) goto loc_82609770;
	// beq cr6,0x82609790
	if (cr6.eq) goto loc_82609790;
	// b 0x82609828
	goto loc_82609828;
loc_82609730:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609740
	if (cr6.eq) goto loc_82609740;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609740:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82609750:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609760
	if (cr6.eq) goto loc_82609760;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609760:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82609770:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609780
	if (cr6.eq) goto loc_82609780;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x8260979c
	goto loc_8260979C;
loc_82609780:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82609790:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82609828
	if (cr6.eq) goto loc_82609828;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_8260979C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x826098fc
	if (!cr6.eq) goto loc_826098FC;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x826098fc
	goto loc_826098FC;
loc_8260981C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82609ce0
	if (cr6.gt) goto loc_82609CE0;
loc_82609828:
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// beq cr6,0x826098b8
	if (cr6.eq) goto loc_826098B8;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x826098b8
	if (cr6.lt) goto loc_826098B8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_82609858:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826098b8
	if (cr6.eq) goto loc_826098B8;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x82609884
	if (!cr6.lt) goto loc_82609884;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609858
	goto loc_82609858;
loc_82609884:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098b0
	if (!cr6.eq) goto loc_826098B0;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x826098b0
	if (!cr6.eq) goto loc_826098B0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_826098B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826098fc
	goto loc_826098FC;
loc_826098B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826089f8
	sub_826089F8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82609da4
	if (cr0.eq) goto loc_82609DA4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x826098f8
	if (!cr6.eq) goto loc_826098F8;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x826098f8
	if (!cr6.eq) goto loc_826098F8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_826098F8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826098FC:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r9.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x82609c90
	if (cr0.eq) goto loc_82609C90;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82609968
	if (!cr6.eq) goto loc_82609968;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// b 0x82609c90
	goto loc_82609C90;
loc_82609968:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// beq 0x82609a28
	if (cr0.eq) goto loc_82609A28;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x826099e4
	if (!cr6.lt) goto loc_826099E4;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609a94
	if (!cr6.eq) goto loc_82609A94;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82609a90
	goto loc_82609A90;
loc_826099E4:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_826099FC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609a94
	if (cr6.eq) goto loc_82609A94;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82609a94
	if (!cr6.gt) goto loc_82609A94;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826099fc
	goto loc_826099FC;
loc_82609A28:
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82609af8
	if (cr0.eq) goto loc_82609AF8;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82609ab8
	if (!cr6.lt) goto loc_82609AB8;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609a94
	if (!cr6.eq) goto loc_82609A94;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82609A90:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82609A94:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// b 0x82609c54
	goto loc_82609C54;
loc_82609AB8:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82609ACC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609a94
	if (cr6.eq) goto loc_82609A94;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82609a94
	if (!cr6.gt) goto loc_82609A94;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609acc
	goto loc_82609ACC;
loc_82609AF8:
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82609b5c
	if (!cr6.eq) goto loc_82609B5C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x82609b5c
	if (!cr6.lt) goto loc_82609B5C;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82609B5C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82609c5c
	if (cr6.gt) goto loc_82609C5C;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82609b9c
	if (!cr0.eq) goto loc_82609B9C;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_82609B9C:
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82609bf4
	if (!cr6.lt) goto loc_82609BF4;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609c34
	if (!cr6.eq) goto loc_82609C34;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82609c34
	goto loc_82609C34;
loc_82609BF4:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_82609C08:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82609c34
	if (cr6.eq) goto loc_82609C34;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82609c34
	if (!cr6.gt) goto loc_82609C34;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82609c08
	goto loc_82609C08;
loc_82609C34:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_82609C54:
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x82609c68
	goto loc_82609C68;
loc_82609C5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
loc_82609C68:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r24,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r24.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609c90
	if (cr0.eq) goto loc_82609C90;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_82609C90:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609ca4
	if (cr0.eq) goto loc_82609CA4;
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r11.u8);
loc_82609CA4:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x82609cc4
	if (cr6.eq) goto loc_82609CC4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r24.u32);
loc_82609CC4:
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609dd8
	if (cr0.eq) goto loc_82609DD8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x82609dd8
	goto loc_82609DD8;
loc_82609CE0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609da8
	if (cr0.eq) goto loc_82609DA8;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// not r10,r23
	ctx.r10.u64 = ~r23.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r11,r10,20,8,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x800000;
	// lwz r7,1424(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 1424);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// oris r5,r11,24576
	ctx.r5.u64 = r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8314d63c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82609da4
	if (cr0.lt) goto loc_82609DA4;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	r11.s64 = r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// b 0x82609dd8
	goto loc_82609DD8;
loc_82609DA4:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82609DA8:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82609dd4
	if (cr0.eq) goto loc_82609DD4;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x8314d5ac
	__imp__RtlRaiseException(ctx, base);
loc_82609DD4:
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
loc_82609DD8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x82609e18
	sub_82609E18(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x828e9450
	return;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r22,104(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 104);
}

__attribute__((alias("__imp__sub_82609DF0"))) PPC_WEAK_FUNC(sub_82609DF0);
PPC_FUNC_IMPL(__imp__sub_82609DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r22,104(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82609e34
	goto loc_82609E34;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82609E34:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82609e44
	if (cr6.eq) goto loc_82609E44;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82609E44:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82609E18"))) PPC_WEAK_FUNC(sub_82609E18);
PPC_FUNC_IMPL(__imp__sub_82609E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82609e44
	if (cr6.eq) goto loc_82609E44;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82609E44:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82609E60"))) PPC_WEAK_FUNC(sub_82609E60);
PPC_FUNC_IMPL(__imp__sub_82609E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13816(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13816);
	// mflr r12
	// bl 0x828e9410
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	r27.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// beq 0x82609ecc
	if (cr0.eq) goto loc_82609ECC;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82609ecc
	if (cr6.eq) goto loc_82609ECC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,4450
	ctx.r6.s64 = 4450;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_82609ECC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82609edc
	if (!cr6.eq) goto loc_82609EDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260a0dc
	goto loc_8260A0DC;
loc_82609EDC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82609f04
	if (!cr0.eq) goto loc_82609F04;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
loc_82609F04:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260a06c
	if (!cr0.eq) goto loc_8260A06C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82607d20
	sub_82607D20(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x82609fb4
	if (!cr6.lt) goto loc_82609FB4;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609f8c
	if (!cr6.eq) goto loc_82609F8C;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_82609F8C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8260a058
	goto loc_8260A058;
loc_82609FB4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82609fe0
	if (cr6.lt) goto loc_82609FE0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82609fe0
	if (cr6.lt) goto loc_82609FE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608c38
	sub_82608C38(ctx, base);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_82609FE0:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x8260a060
	if (cr6.gt) goto loc_8260A060;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8260A000:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8260a034
	if (cr6.eq) goto loc_8260A034;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8260a034
	if (!cr6.gt) goto loc_8260A034;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a000
	goto loc_8260A000;
loc_8260A034:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8260A058:
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_8260A060:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_8260A06C:
	// addi r11,r29,-32
	r11.s64 = r29.s64 + -32;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,-32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8260a09c
	if (cr6.eq) goto loc_8260A09C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
loc_8260A09C:
	// li r11,0
	r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 1424);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8260A0CC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8260a10c
	sub_8260A10C(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8260A0DC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82609E68"))) PPC_WEAK_FUNC(sub_82609E68);
PPC_FUNC_IMPL(__imp__sub_82609E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,1
	r27.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// beq 0x82609ecc
	if (cr0.eq) goto loc_82609ECC;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82609ecc
	if (cr6.eq) goto loc_82609ECC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,4450
	ctx.r6.s64 = 4450;
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_82609ECC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82609edc
	if (!cr6.eq) goto loc_82609EDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260a0dc
	goto loc_8260A0DC;
loc_82609EDC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82609f04
	if (!cr0.eq) goto loc_82609F04;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
loc_82609F04:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260a06c
	if (!cr0.eq) goto loc_8260A06C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82607d20
	sub_82607D20(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x82609fb4
	if (!cr6.lt) goto loc_82609FB4;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82609f8c
	if (!cr6.eq) goto loc_82609F8C;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_82609F8C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8260a058
	goto loc_8260A058;
loc_82609FB4:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82609fe0
	if (cr6.lt) goto loc_82609FE0;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82609fe0
	if (cr6.lt) goto loc_82609FE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608c38
	sub_82608C38(ctx, base);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_82609FE0:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x8260a060
	if (cr6.gt) goto loc_8260A060;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_8260A000:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8260a034
	if (cr6.eq) goto loc_8260A034;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8260a034
	if (!cr6.gt) goto loc_8260A034;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a000
	goto loc_8260A000;
loc_8260A034:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8260A058:
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_8260A060:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// b 0x8260a0cc
	goto loc_8260A0CC;
loc_8260A06C:
	// addi r11,r29,-32
	r11.s64 = r29.s64 + -32;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,-32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8260a09c
	if (cr6.eq) goto loc_8260A09C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
loc_8260A09C:
	// li r11,0
	r11.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 1424);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8260A0CC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x8260a10c
	sub_8260A10C(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_8260A0DC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e9460
	return;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r26,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r26.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
}

__attribute__((alias("__imp__sub_8260A0E4"))) PPC_WEAK_FUNC(sub_8260A0E4);
PPC_FUNC_IMPL(__imp__sub_8260A0E4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r26,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r26.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r26,84(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x8260a128
	goto loc_8260A128;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r26,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r26.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8260A128:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8260a138
	if (cr6.eq) goto loc_8260A138;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260A138:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260A10C"))) PPC_WEAK_FUNC(sub_8260A10C);
PPC_FUNC_IMPL(__imp__sub_8260A10C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r26,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r26.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8260a138
	if (cr6.eq) goto loc_8260A138;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260A138:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r26,-24(r1)
	r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260A154"))) PPC_WEAK_FUNC(sub_8260A154);
PPC_FUNC_IMPL(__imp__sub_8260A154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260A158"))) PPC_WEAK_FUNC(sub_8260A158);
PPC_FUNC_IMPL(__imp__sub_8260A158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
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
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13792(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13792);
	// mflr r12
	// bl 0x828e93f4
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8260a1d0
	if (cr0.eq) goto loc_8260A1D0;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8260a1d0
	if (cr6.eq) goto loc_8260A1D0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3198
	ctx.r6.s64 = 3198;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_8260A1D0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8260a1e0
	if (!cr6.eq) goto loc_8260A1E0;
loc_8260A1D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260a9a0
	// ERROR 8260A9A0
	return;
loc_8260A1E0:
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// or r23,r10,r30
	r23.u64 = ctx.r10.u64 | r30.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x8260a1d8
	if (cr6.gt) goto loc_8260A1D8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x8260a20c
	if (!cr6.eq) goto loc_8260A20C;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8260A20C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x8260a244
	if (!cr0.eq) goto loc_8260A244;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260a244
	if (!cr6.eq) goto loc_8260A244;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a24c
	if (cr0.eq) goto loc_8260A24C;
loc_8260A244:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_8260A24C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260a270
	if (!cr0.eq) goto loc_8260A270;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A270:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a974
	if (cr0.eq) {
		// ERROR 8260A974
		return;
	}
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x8260a2d8
	if (cr0.eq) goto loc_8260A2D8;
	// addi r9,r24,32
	ctx.r9.s64 = r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8260a2e8
	goto loc_8260A2E8;
loc_8260A2D8:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_8260A2E8:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x8260a744
	if (cr6.gt) goto loc_8260A744;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x8260a318
	if (!cr6.eq) goto loc_8260A318;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_8260A318:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260a334
	if (cr6.eq) goto loc_8260A334;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x8260a374
	goto loc_8260A374;
loc_8260A334:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a36c
	if (cr0.eq) goto loc_8260A36C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x8260a374
	goto loc_8260A374;
loc_8260A36C:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_8260A374:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x8260a394
	if (!cr6.gt) goto loc_8260A394;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a394
	if (cr0.eq) goto loc_8260A394;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8260A394:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8260a940
	if (cr6.eq) {
		// ERROR 8260A940
		return;
	}
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a3f8
	if (cr0.eq) goto loc_8260A3F8;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260a940
	if (cr0.lt) {
		// ERROR 8260A940
		return;
	}
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8260a940
	// ERROR 8260A940
	return;
loc_8260A3F8:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r11
	r28.s64 = r11.s64 - r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x8260a4ac
	if (cr0.eq) goto loc_8260A4AC;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a474
	if (!cr6.lt) goto loc_8260A474;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x8260a4e8
	goto loc_8260A4E8;
loc_8260A474:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_8260A480:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8260a520
	if (cr6.eq) goto loc_8260A520;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a520
	if (!cr6.gt) goto loc_8260A520;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a480
	goto loc_8260A480;
loc_8260A4AC:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a57c
	if (cr0.eq) goto loc_8260A57C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a544
	if (!cr6.lt) goto loc_8260A544;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_8260A4E8:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260a520
	if (!cr6.eq) goto loc_8260A520;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_8260A520:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// b 0x8260a72c
	goto loc_8260A72C;
loc_8260A544:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_8260A550:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8260a520
	if (cr6.eq) goto loc_8260A520;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a520
	if (!cr6.gt) goto loc_8260A520;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a550
	goto loc_8260A550;
loc_8260A57C:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x8260a5e0
	if (!cr6.lt) goto loc_8260A5E0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_8260A5E0:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a624
	if (cr0.eq) goto loc_8260A624;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x8260a614
	if (cr0.eq) goto loc_8260A614;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x8260a614
	if (!cr6.gt) goto loc_8260A614;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_8260A614:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8260A624:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x8260a734
	if (cr6.gt) goto loc_8260A734;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260a668
	if (!cr0.eq) goto loc_8260A668;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x8260a67c
	goto loc_8260A67C;
loc_8260A668:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_8260A67C:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a6d4
	if (!cr6.lt) goto loc_8260A6D4;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260a70c
	if (!cr6.eq) goto loc_8260A70C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// b 0x8260a70c
	goto loc_8260A70C;
loc_8260A6D4:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_8260A6E0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8260a70c
	if (cr6.eq) goto loc_8260A70C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a70c
	if (!cr6.gt) goto loc_8260A70C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a6e0
	goto loc_8260A6E0;
loc_8260A70C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_8260A72C:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x8260a940
	// ERROR 8260A940
	return;
loc_8260A734:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// b 0x8260a940
	// ERROR 8260A940
	return;
loc_8260A744:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8260a76c
	if (!cr6.eq) goto loc_8260A76C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82608268
	sub_82608268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8260a940
	if (!cr0.eq) {
		// ERROR 8260A940
		return;
	}
loc_8260A76C:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a77c
	if (cr0.eq) goto loc_8260A77C;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x8260a948
	// ERROR 8260A948
	return;
loc_8260A77C:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a844
	if (cr0.eq) {
		sub_8260A844(ctx, base);
		return;
	}
	// rlwinm r11,r23,0,23,19
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r23,r10,r11
	r23.u64 = ctx.r10.u64 | r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x8260a7c0
	if (cr0.eq) goto loc_8260A7C0;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8260a7d0
	goto loc_8260A7D0;
loc_8260A7C0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8260A7D0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8260a7fc
	if (cr0.eq) goto loc_8260A7FC;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260a7fc
	if (!cr0.eq) goto loc_8260A7FC;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A7FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a85c
	// ERROR 8260A85C
	return;
}

__attribute__((alias("__imp__sub_8260A160"))) PPC_WEAK_FUNC(sub_8260A160);
PPC_FUNC_IMPL(__imp__sub_8260A160) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r6,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// beq 0x8260a1d0
	if (cr0.eq) goto loc_8260A1D0;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8260a1d0
	if (cr6.eq) goto loc_8260A1D0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3198
	ctx.r6.s64 = 3198;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8314d64c
	__imp__KeBugCheckEx(ctx, base);
loc_8260A1D0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8260a1e0
	if (!cr6.eq) goto loc_8260A1E0;
loc_8260A1D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260a9a0
	goto loc_8260A9A0;
loc_8260A1E0:
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// or r23,r10,r30
	r23.u64 = ctx.r10.u64 | r30.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x8260a1d8
	if (cr6.gt) goto loc_8260A1D8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x8260a20c
	if (!cr6.eq) goto loc_8260A20C;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8260A20C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x8260a244
	if (!cr0.eq) goto loc_8260A244;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260a244
	if (!cr6.eq) goto loc_8260A244;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a24c
	if (cr0.eq) goto loc_8260A24C;
loc_8260A244:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_8260A24C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260a270
	if (!cr0.eq) goto loc_8260A270;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A270:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a974
	if (cr0.eq) goto loc_8260A974;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x8260a2d8
	if (cr0.eq) goto loc_8260A2D8;
	// addi r9,r24,32
	ctx.r9.s64 = r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x8260a2e8
	goto loc_8260A2E8;
loc_8260A2D8:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_8260A2E8:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x8260a744
	if (cr6.gt) goto loc_8260A744;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x8260a318
	if (!cr6.eq) goto loc_8260A318;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_8260A318:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260a334
	if (cr6.eq) goto loc_8260A334;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x8260a374
	goto loc_8260A374;
loc_8260A334:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a36c
	if (cr0.eq) goto loc_8260A36C;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x8260a374
	goto loc_8260A374;
loc_8260A36C:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_8260A374:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x8260a394
	if (!cr6.gt) goto loc_8260A394;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a394
	if (cr0.eq) goto loc_8260A394;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8260A394:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8260a940
	if (cr6.eq) goto loc_8260A940;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a3f8
	if (cr0.eq) goto loc_8260A3F8;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,1424(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 1424);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8314d65c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260a940
	if (cr0.lt) goto loc_8260A940;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x8260a940
	goto loc_8260A940;
loc_8260A3F8:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r11
	r28.s64 = r11.s64 - r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x8260a4ac
	if (cr0.eq) goto loc_8260A4AC;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a474
	if (!cr6.lt) goto loc_8260A474;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x8260a4e8
	goto loc_8260A4E8;
loc_8260A474:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_8260A480:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8260a520
	if (cr6.eq) goto loc_8260A520;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a520
	if (!cr6.gt) goto loc_8260A520;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a480
	goto loc_8260A480;
loc_8260A4AC:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a57c
	if (cr0.eq) goto loc_8260A57C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a544
	if (!cr6.lt) goto loc_8260A544;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_8260A4E8:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260a520
	if (!cr6.eq) goto loc_8260A520;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_8260A520:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// b 0x8260a72c
	goto loc_8260A72C;
loc_8260A544:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_8260A550:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8260a520
	if (cr6.eq) goto loc_8260A520;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a520
	if (!cr6.gt) goto loc_8260A520;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a550
	goto loc_8260A550;
loc_8260A57C:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x8260a5e0
	if (!cr6.eq) goto loc_8260A5E0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x8260a5e0
	if (!cr6.lt) goto loc_8260A5E0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_8260A5E0:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a624
	if (cr0.eq) goto loc_8260A624;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x8260a614
	if (cr0.eq) goto loc_8260A614;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x8260a614
	if (!cr6.gt) goto loc_8260A614;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_8260A614:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8314d66c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_8260A624:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x8260a734
	if (cr6.gt) goto loc_8260A734;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260a668
	if (!cr0.eq) goto loc_8260A668;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x8260a67c
	goto loc_8260A67C;
loc_8260A668:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_8260A67C:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x8260a6d4
	if (!cr6.lt) goto loc_8260A6D4;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260a70c
	if (!cr6.eq) goto loc_8260A70C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// b 0x8260a70c
	goto loc_8260A70C;
loc_8260A6D4:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_8260A6E0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8260a70c
	if (cr6.eq) goto loc_8260A70C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x8260a70c
	if (!cr6.gt) goto loc_8260A70C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a6e0
	goto loc_8260A6E0;
loc_8260A70C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_8260A72C:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x8260a940
	goto loc_8260A940;
loc_8260A734:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82608128
	sub_82608128(ctx, base);
	// b 0x8260a940
	goto loc_8260A940;
loc_8260A744:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8260a76c
	if (!cr6.eq) goto loc_8260A76C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82608268
	sub_82608268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8260a940
	if (!cr0.eq) goto loc_8260A940;
loc_8260A76C:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a77c
	if (cr0.eq) goto loc_8260A77C;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x8260a948
	goto loc_8260A948;
loc_8260A77C:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a844
	if (cr0.eq) goto loc_8260A844;
	// rlwinm r11,r23,0,23,19
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r23,r10,r11
	r23.u64 = ctx.r10.u64 | r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x8260a7c0
	if (cr0.eq) goto loc_8260A7C0;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8260a7d0
	goto loc_8260A7D0;
loc_8260A7C0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8260A7D0:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8260a7fc
	if (cr0.eq) goto loc_8260A7FC;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260a7fc
	if (!cr0.eq) goto loc_8260A7FC;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A7FC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a85c
	goto loc_8260A85C;
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// li r22,1
	r22.s64 = 1;
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x8260a85c
	goto loc_8260A85C;
loc_8260A844:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8260a85c
	if (cr0.eq) goto loc_8260A85C;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A85C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82609570
	sub_82609570(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8260a938
	if (cr0.eq) goto loc_8260A938;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + -11);
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8260a8ec
	if (cr0.eq) goto loc_8260A8EC;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a898
	if (cr0.eq) goto loc_8260A898;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x8260a8a8
	goto loc_8260A8A8;
loc_8260A898:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_8260A8A8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8260a8e4
	if (cr0.eq) goto loc_8260A8E4;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a8c8
	if (cr0.eq) goto loc_8260A8C8;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8260a8d8
	goto loc_8260A8D8;
loc_8260A8C8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8260A8D8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8260a8ec
	goto loc_8260A8EC;
loc_8260A8E4:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_8260A8EC:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x8260a8fc
	if (cr6.lt) goto loc_8260A8FC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8260A8FC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x8260a928
	if (!cr6.gt) goto loc_8260A928;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a928
	if (cr0.eq) goto loc_8260A928;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8260A928:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82609e68
	sub_82609E68(ctx, base);
loc_8260A938:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r29,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r29.u32);
loc_8260A940:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8260a974
	if (!cr6.eq) goto loc_8260A974;
loc_8260A948:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a974
	if (cr0.eq) goto loc_8260A974;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x8314d5ac
	__imp__RtlRaiseException(ctx, base);
loc_8260A974:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a990
	goto loc_8260A990;
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_8260A990:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x8260a9c8
	sub_8260A9C8(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
loc_8260A9A0:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x828e9444
	return;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
}

__attribute__((alias("__imp__sub_8260A80C"))) PPC_WEAK_FUNC(sub_8260A80C);
PPC_FUNC_IMPL(__imp__sub_8260A80C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// li r22,1
	r22.s64 = 1;
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x8260a85c
	// ERROR 8260A85C
	return;
}

__attribute__((alias("__imp__sub_8260A844"))) PPC_WEAK_FUNC(sub_8260A844);
PPC_FUNC_IMPL(__imp__sub_8260A844) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8260a85c
	if (cr0.eq) goto loc_8260A85C;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_8260A85C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82609570
	sub_82609570(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8260a938
	if (cr0.eq) goto loc_8260A938;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + -11);
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8260a8ec
	if (cr0.eq) goto loc_8260A8EC;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260a898
	if (cr0.eq) goto loc_8260A898;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x8260a8a8
	goto loc_8260A8A8;
loc_8260A898:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_8260A8A8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8260a8e4
	if (cr0.eq) goto loc_8260A8E4;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a8c8
	if (cr0.eq) goto loc_8260A8C8;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x8260a8d8
	goto loc_8260A8D8;
loc_8260A8C8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_8260A8D8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8260a8ec
	goto loc_8260A8EC;
loc_8260A8E4:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_8260A8EC:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x8260a8fc
	if (cr6.lt) goto loc_8260A8FC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_8260A8FC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x8260a928
	if (!cr6.gt) goto loc_8260A928;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a928
	if (cr0.eq) goto loc_8260A928;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8260A928:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82609e68
	sub_82609E68(ctx, base);
loc_8260A938:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r29,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r29.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x8260a974
	if (!cr6.eq) goto loc_8260A974;
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260a974
	if (cr0.eq) goto loc_8260A974;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x8314d5ac
	__imp__RtlRaiseException(ctx, base);
loc_8260A974:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8260a990
	// ERROR 8260A990
	return;
}

__attribute__((alias("__imp__sub_8260A984"))) PPC_WEAK_FUNC(sub_8260A984);
PPC_FUNC_IMPL(__imp__sub_8260A984) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x8260a9c8
	sub_8260A9C8(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8260A9A8"))) PPC_WEAK_FUNC(sub_8260A9A8);
PPC_FUNC_IMPL(__imp__sub_8260A9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x8260a9e0
	goto loc_8260A9E0;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8260A9E0:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260a9f4
	if (cr6.eq) goto loc_8260A9F4;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260A9F4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260A9C8"))) PPC_WEAK_FUNC(sub_8260A9C8);
PPC_FUNC_IMPL(__imp__sub_8260A9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260a9f4
	if (cr6.eq) goto loc_8260A9F4;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260A9F4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260AA0C"))) PPC_WEAK_FUNC(sub_8260AA0C);
PPC_FUNC_IMPL(__imp__sub_8260AA0C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AA30"))) PPC_WEAK_FUNC(sub_8260AA30);
PPC_FUNC_IMPL(__imp__sub_8260AA30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AA3C"))) PPC_WEAK_FUNC(sub_8260AA3C);
PPC_FUNC_IMPL(__imp__sub_8260AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AA40"))) PPC_WEAK_FUNC(sub_8260AA40);
PPC_FUNC_IMPL(__imp__sub_8260AA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31917
	r11.s64 = -2091712512;
	// lwz r3,-28336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -28336);
}

__attribute__((alias("__imp__sub_8260AA48"))) PPC_WEAK_FUNC(sub_8260AA48);
PPC_FUNC_IMPL(__imp__sub_8260AA48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AA4C"))) PPC_WEAK_FUNC(sub_8260AA4C);
PPC_FUNC_IMPL(__imp__sub_8260AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AA50"))) PPC_WEAK_FUNC(sub_8260AA50);
PPC_FUNC_IMPL(__imp__sub_8260AA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8260AA6C"))) PPC_WEAK_FUNC(sub_8260AA6C);
PPC_FUNC_IMPL(__imp__sub_8260AA6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e248
	sub_8260E248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AA70"))) PPC_WEAK_FUNC(sub_8260AA70);
PPC_FUNC_IMPL(__imp__sub_8260AA70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AA74"))) PPC_WEAK_FUNC(sub_8260AA74);
PPC_FUNC_IMPL(__imp__sub_8260AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AA78"))) PPC_WEAK_FUNC(sub_8260AA78);
PPC_FUNC_IMPL(__imp__sub_8260AA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8260AA94"))) PPC_WEAK_FUNC(sub_8260AA94);
PPC_FUNC_IMPL(__imp__sub_8260AA94) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e250
	sub_8260E250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AA98"))) PPC_WEAK_FUNC(sub_8260AA98);
PPC_FUNC_IMPL(__imp__sub_8260AA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AA9C"))) PPC_WEAK_FUNC(sub_8260AA9C);
PPC_FUNC_IMPL(__imp__sub_8260AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AAA0"))) PPC_WEAK_FUNC(sub_8260AAA0);
PPC_FUNC_IMPL(__imp__sub_8260AAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8260AABC"))) PPC_WEAK_FUNC(sub_8260AABC);
PPC_FUNC_IMPL(__imp__sub_8260AABC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e2b0
	sub_8260E2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AAC0"))) PPC_WEAK_FUNC(sub_8260AAC0);
PPC_FUNC_IMPL(__imp__sub_8260AAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AAC4"))) PPC_WEAK_FUNC(sub_8260AAC4);
PPC_FUNC_IMPL(__imp__sub_8260AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AAC8"))) PPC_WEAK_FUNC(sub_8260AAC8);
PPC_FUNC_IMPL(__imp__sub_8260AAC8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260AAC8"))) PPC_WEAK_FUNC(sub_8260AAC8);
PPC_FUNC_IMPL(__imp__sub_8260AAC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e310
	sub_8260E310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AACC"))) PPC_WEAK_FUNC(sub_8260AACC);
PPC_FUNC_IMPL(__imp__sub_8260AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AAD0"))) PPC_WEAK_FUNC(sub_8260AAD0);
PPC_FUNC_IMPL(__imp__sub_8260AAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8260AAF4"))) PPC_WEAK_FUNC(sub_8260AAF4);
PPC_FUNC_IMPL(__imp__sub_8260AAF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e1f8
	sub_8260E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AAF8"))) PPC_WEAK_FUNC(sub_8260AAF8);
PPC_FUNC_IMPL(__imp__sub_8260AAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AAFC"))) PPC_WEAK_FUNC(sub_8260AAFC);
PPC_FUNC_IMPL(__imp__sub_8260AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AB00"))) PPC_WEAK_FUNC(sub_8260AB00);
PPC_FUNC_IMPL(__imp__sub_8260AB00) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8260ab24
	if (!cr6.eq) goto loc_8260AB24;
	// bl 0x8260e240
	sub_8260E240(ctx, base);
loc_8260AB24:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260ab3c
	if (cr0.eq) goto loc_8260AB3C;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_8260AB3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260AB4C"))) PPC_WEAK_FUNC(sub_8260AB4C);
PPC_FUNC_IMPL(__imp__sub_8260AB4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AB50"))) PPC_WEAK_FUNC(sub_8260AB50);
PPC_FUNC_IMPL(__imp__sub_8260AB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
}

__attribute__((alias("__imp__sub_8260AB64"))) PPC_WEAK_FUNC(sub_8260AB64);
PPC_FUNC_IMPL(__imp__sub_8260AB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AB68"))) PPC_WEAK_FUNC(sub_8260AB68);
PPC_FUNC_IMPL(__imp__sub_8260AB68) {
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
	// bl 0x8314d55c
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260ab8c
	if (!cr6.eq) goto loc_8260AB8C;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
loc_8260AB8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260AB98"))) PPC_WEAK_FUNC(sub_8260AB98);
PPC_FUNC_IMPL(__imp__sub_8260AB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AB9C"))) PPC_WEAK_FUNC(sub_8260AB9C);
PPC_FUNC_IMPL(__imp__sub_8260AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ABA0"))) PPC_WEAK_FUNC(sub_8260ABA0);
PPC_FUNC_IMPL(__imp__sub_8260ABA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260abb8
	if (!cr6.eq) goto loc_8260ABB8;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// blr 
	return;
loc_8260ABB8:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8260ABBC"))) PPC_WEAK_FUNC(sub_8260ABBC);
PPC_FUNC_IMPL(__imp__sub_8260ABBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260ABC0"))) PPC_WEAK_FUNC(sub_8260ABC0);
PPC_FUNC_IMPL(__imp__sub_8260ABC0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-4
	r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

