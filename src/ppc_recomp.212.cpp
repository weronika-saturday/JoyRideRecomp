#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826B3998"))) PPC_WEAK_FUNC(sub_826B3998);
PPC_FUNC_IMPL(__imp__sub_826B3998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B399C"))) PPC_WEAK_FUNC(sub_826B399C);
PPC_FUNC_IMPL(__imp__sub_826B399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B39A0"))) PPC_WEAK_FUNC(sub_826B39A0);
PPC_FUNC_IMPL(__imp__sub_826B39A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r4,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r4.u32);
	// stb r8,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r8.u8);
	// stb r5,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_826B39C0"))) PPC_WEAK_FUNC(sub_826B39C0);
PPC_FUNC_IMPL(__imp__sub_826B39C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B39C4"))) PPC_WEAK_FUNC(sub_826B39C4);
PPC_FUNC_IMPL(__imp__sub_826B39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B39C8"))) PPC_WEAK_FUNC(sub_826B39C8);
PPC_FUNC_IMPL(__imp__sub_826B39C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r4,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x826b3a70
	if (!cr6.eq) goto loc_826B3A70;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stb r9,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826b3a54
	if (!cr6.eq) goto loc_826B3A54;
	// b 0x826b1920
	sub_826B1920(ctx, base);
	return;
loc_826B3A54:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwimi r10,r9,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r8,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r8.u8);
	// blr 
	return;
loc_826B3A70:
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// rlwimi r10,r9,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_826B3A84"))) PPC_WEAK_FUNC(sub_826B3A84);
PPC_FUNC_IMPL(__imp__sub_826B3A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3A88"))) PPC_WEAK_FUNC(sub_826B3A88);
PPC_FUNC_IMPL(__imp__sub_826B3A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b3adc
	if (!cr6.eq) goto loc_826B3ADC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b3adc
	if (!cr6.eq) goto loc_826B3ADC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b3abc
	if (!cr6.eq) goto loc_826B3ABC;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_826B3ABC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r11.s64 = ctx.r7.s32 >> 2;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// blr 
	return;
loc_826B3ADC:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_826B3AE0"))) PPC_WEAK_FUNC(sub_826B3AE0);
PPC_FUNC_IMPL(__imp__sub_826B3AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3AE4"))) PPC_WEAK_FUNC(sub_826B3AE4);
PPC_FUNC_IMPL(__imp__sub_826B3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3AE8"))) PPC_WEAK_FUNC(sub_826B3AE8);
PPC_FUNC_IMPL(__imp__sub_826B3AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b3b40
	if (!cr6.eq) goto loc_826B3B40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b3b40
	if (!cr6.eq) goto loc_826B3B40;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b3b1c
	if (!cr6.eq) goto loc_826B3B1C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_826B3B1C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x826b3b48
	if (!cr6.lt) goto loc_826B3B48;
loc_826B3B40:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_826B3B48:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b3b60
	if (cr6.eq) goto loc_826B3B60;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_826B3B60:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826B3B64"))) PPC_WEAK_FUNC(sub_826B3B64);
PPC_FUNC_IMPL(__imp__sub_826B3B64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3B68"))) PPC_WEAK_FUNC(sub_826B3B68);
PPC_FUNC_IMPL(__imp__sub_826B3B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b3b7c
	if (cr6.eq) goto loc_826B3B7C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826b3b84
	if (!cr6.eq) goto loc_826B3B84;
loc_826B3B7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_826B3B84:
	// stw r4,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r6,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r6.u32);
	// stw r6,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r6.u32);
	// stb r5,56(r11)
	PPC_STORE_U8(r11.u32 + 56, ctx.r5.u8);
}

__attribute__((alias("__imp__sub_826B3B98"))) PPC_WEAK_FUNC(sub_826B3B98);
PPC_FUNC_IMPL(__imp__sub_826B3B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3B9C"))) PPC_WEAK_FUNC(sub_826B3B9C);
PPC_FUNC_IMPL(__imp__sub_826B3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3BA0"))) PPC_WEAK_FUNC(sub_826B3BA0);
PPC_FUNC_IMPL(__imp__sub_826B3BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
}

__attribute__((alias("__imp__sub_826B3BA4"))) PPC_WEAK_FUNC(sub_826B3BA4);
PPC_FUNC_IMPL(__imp__sub_826B3BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3BA8"))) PPC_WEAK_FUNC(sub_826B3BA8);
PPC_FUNC_IMPL(__imp__sub_826B3BA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
}

__attribute__((alias("__imp__sub_826B3BAC"))) PPC_WEAK_FUNC(sub_826B3BAC);
PPC_FUNC_IMPL(__imp__sub_826B3BAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3BB0"))) PPC_WEAK_FUNC(sub_826B3BB0);
PPC_FUNC_IMPL(__imp__sub_826B3BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
}

__attribute__((alias("__imp__sub_826B3BB4"))) PPC_WEAK_FUNC(sub_826B3BB4);
PPC_FUNC_IMPL(__imp__sub_826B3BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3BB8"))) PPC_WEAK_FUNC(sub_826B3BB8);
PPC_FUNC_IMPL(__imp__sub_826B3BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x826b3c00
	if (!cr6.gt) goto loc_826B3C00;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
loc_826B3BC8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b3bfc
	if (!cr6.gt) goto loc_826B3BFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x826b3bf0
	if (!cr6.eq) goto loc_826B3BF0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_826B3BF0:
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x826b3bc8
	if (cr6.gt) goto loc_826B3BC8;
loc_826B3BFC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
loc_826B3C00:
	// bne cr6,0x826b3c28
	if (!cr6.eq) goto loc_826B3C28;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b3c40
	if (!cr6.gt) goto loc_826B3C40;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// stw r9,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r9.u32);
	// blr 
	return;
loc_826B3C28:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x826b3c40
	if (!cr6.lt) goto loc_826B3C40;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, r11.u32);
	// blr 
	return;
loc_826B3C40:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826B3C44"))) PPC_WEAK_FUNC(sub_826B3C44);
PPC_FUNC_IMPL(__imp__sub_826B3C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3C48"))) PPC_WEAK_FUNC(sub_826B3C48);
PPC_FUNC_IMPL(__imp__sub_826B3C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b3c70
	if (!cr6.eq) goto loc_826B3C70;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b3c70
	if (!cr6.eq) goto loc_826B3C70;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
loc_826B3C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3C78"))) PPC_WEAK_FUNC(sub_826B3C78);
PPC_FUNC_IMPL(__imp__sub_826B3C78) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b3cfc
	if (!cr6.eq) goto loc_826B3CFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b3cfc
	if (!cr6.eq) goto loc_826B3CFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b3cfc
	if (cr6.eq) goto loc_826B3CFC;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b3cd0
	if (!cr6.eq) goto loc_826B3CD0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
loc_826B3CD0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r11.s64 = ctx.r7.s32 >> 2;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x826b8ec8
	sub_826B8EC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b3d44
	if (!cr6.eq) goto loc_826B3D44;
loc_826B3CFC:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x826b3d10
	if (!cr6.eq) goto loc_826B3D10;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x826b3d14
	goto loc_826B3D14;
loc_826B3D10:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_826B3D14:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// blt cr6,0x826b3d40
	if (cr6.lt) goto loc_826B3D40;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826b3d40
	if (!cr6.gt) goto loc_826B3D40;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,1276
	ctx.r3.s64 = r11.s64 + 1276;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B3D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3D44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B3D48"))) PPC_WEAK_FUNC(sub_826B3D48);
PPC_FUNC_IMPL(__imp__sub_826B3D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B3D4C"))) PPC_WEAK_FUNC(sub_826B3D4C);
PPC_FUNC_IMPL(__imp__sub_826B3D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3D50"))) PPC_WEAK_FUNC(sub_826B3D50);
PPC_FUNC_IMPL(__imp__sub_826B3D50) {
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
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b3c78
	sub_826B3C78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b3da8
	if (cr6.eq) goto loc_826B3DA8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bl 0x826abe78
	sub_826ABE78(ctx, base);
loc_826B3DA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B3DB0"))) PPC_WEAK_FUNC(sub_826B3DB0);
PPC_FUNC_IMPL(__imp__sub_826B3DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B3DB4"))) PPC_WEAK_FUNC(sub_826B3DB4);
PPC_FUNC_IMPL(__imp__sub_826B3DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3DB8"))) PPC_WEAK_FUNC(sub_826B3DB8);
PPC_FUNC_IMPL(__imp__sub_826B3DB8) {
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
	// lwz r11,96(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826b3c78
	sub_826B3C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b3e18
	if (cr6.eq) goto loc_826B3E18;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// addi r9,r11,-16
	ctx.r9.s64 = r11.s64 + -16;
	// std r8,-16(r11)
	PPC_STORE_U64(r11.u32 + -16, ctx.r8.u64);
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r7,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r7.u32);
loc_826B3E18:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B3E28"))) PPC_WEAK_FUNC(sub_826B3E28);
PPC_FUNC_IMPL(__imp__sub_826B3E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B3E2C"))) PPC_WEAK_FUNC(sub_826B3E2C);
PPC_FUNC_IMPL(__imp__sub_826B3E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3E30"))) PPC_WEAK_FUNC(sub_826B3E30);
PPC_FUNC_IMPL(__imp__sub_826B3E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,6(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b3e64
	if (cr6.eq) goto loc_826B3E64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r11,-1
	r11.s64 = -1;
	// addi r8,r10,1308
	ctx.r8.s64 = ctx.r10.s64 + 1308;
	// addi r7,r9,1304
	ctx.r7.s64 = ctx.r9.s64 + 1304;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x826b3eb0
	goto loc_826B3EB0;
loc_826B3E64:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,64(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// bne cr6,0x826b3ea4
	if (!cr6.eq) goto loc_826B3EA4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,1296
	r11.s64 = r11.s64 + 1296;
	// b 0x826b3eac
	goto loc_826B3EAC;
loc_826B3EA4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,1292
	r11.s64 = r11.s64 + 1292;
loc_826B3EAC:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_826B3EB0:
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
}

__attribute__((alias("__imp__sub_826B3EBC"))) PPC_WEAK_FUNC(sub_826B3EBC);
PPC_FUNC_IMPL(__imp__sub_826B3EBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826afc28
	sub_826AFC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B3EC0"))) PPC_WEAK_FUNC(sub_826B3EC0);
PPC_FUNC_IMPL(__imp__sub_826B3EC0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r11,-1
	r11.s64 = -1;
	// addi r7,r10,13435
	ctx.r7.s64 = ctx.r10.s64 + 13435;
	// addi r6,r8,1316
	ctx.r6.s64 = ctx.r8.s64 + 1316;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r5,r9,1332
	ctx.r5.s64 = ctx.r9.s64 + 1332;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// bl 0x826afc28
	sub_826AFC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B3F34"))) PPC_WEAK_FUNC(sub_826B3F34);
PPC_FUNC_IMPL(__imp__sub_826B3F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3F38"))) PPC_WEAK_FUNC(sub_826B3F38);
PPC_FUNC_IMPL(__imp__sub_826B3F38) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b3fcc
	if (cr6.eq) goto loc_826B3FCC;
	// lbz r11,6(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b3fcc
	if (!cr6.eq) goto loc_826B3FCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b7a60
	sub_826B7A60(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826b3fbc
	if (!cr6.gt) goto loc_826B3FBC;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// li r29,1
	r29.s64 = 1;
loc_826B3F90:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzu r5,4(r30)
	ea = 4 + r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b7e48
	sub_826B7E48(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x826b3f90
	if (cr6.lt) goto loc_826B3F90;
loc_826B3FBC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// b 0x826b3fd4
	goto loc_826B3FD4;
loc_826B3FCC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_826B3FD4:
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bgt cr6,0x826b3ff8
	if (cr6.gt) goto loc_826B3FF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B3FF8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B4008"))) PPC_WEAK_FUNC(sub_826B4008);
PPC_FUNC_IMPL(__imp__sub_826B4008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826B400C"))) PPC_WEAK_FUNC(sub_826B400C);
PPC_FUNC_IMPL(__imp__sub_826B400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4010"))) PPC_WEAK_FUNC(sub_826B4010);
PPC_FUNC_IMPL(__imp__sub_826B4010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,75(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(r11.u32, 250, xer);
	// ble cr6,0x826b4024
	if (!cr6.gt) goto loc_826B4024;
loc_826B401C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B4024:
	// lbz r11,72(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x826b401c
	if (cr6.gt) goto loc_826B401C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x826b404c
	if (cr6.eq) goto loc_826B404C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b401c
	if (!cr6.eq) goto loc_826B401C;
loc_826B404C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r11,r10,26
	r11.u64 = ctx.r10.u32 & 0x3F;
	// addi r9,r11,-30
	ctx.r9.s64 = r11.s64 + -30;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4070"))) PPC_WEAK_FUNC(sub_826B4070);
PPC_FUNC_IMPL(__imp__sub_826B4070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,26
	r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x826b409c
	if (cr6.lt) goto loc_826B409C;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// ble cr6,0x826b408c
	if (!cr6.gt) goto loc_826B408C;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x826b409c
	if (!cr6.eq) goto loc_826B409C;
loc_826B408C:
	// rlwinm r11,r3,0,0,8
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF800000;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_826B409C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B40A4"))) PPC_WEAK_FUNC(sub_826B40A4);
PPC_FUNC_IMPL(__imp__sub_826B40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B40A8"))) PPC_WEAK_FUNC(sub_826B40A8);
PPC_FUNC_IMPL(__imp__sub_826B40A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x826b40f0
	if (cr6.eq) goto loc_826B40F0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x826b40dc
	if (cr6.eq) goto loc_826B40DC;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x826b40fc
	if (!cr6.eq) goto loc_826B40FC;
	// rlwinm r11,r4,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b40dc
	if (cr6.eq) goto loc_826B40DC;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// b 0x826b40e4
	goto loc_826B40E4;
loc_826B40DC:
	// lbz r11,75(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
loc_826B40E4:
	// blt cr6,0x826b40fc
	if (cr6.lt) goto loc_826B40FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B40F0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_826B40FC:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826B4100"))) PPC_WEAK_FUNC(sub_826B4100);
PPC_FUNC_IMPL(__imp__sub_826B4100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4104"))) PPC_WEAK_FUNC(sub_826B4104);
PPC_FUNC_IMPL(__imp__sub_826B4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4108"))) PPC_WEAK_FUNC(sub_826B4108);
PPC_FUNC_IMPL(__imp__sub_826B4108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r23,44(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r26,75(r3)
	r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addi r22,r23,-1
	r22.s64 = r23.s64 + -1;
	// cmplwi cr6,r26,250
	cr6.compare<uint32_t>(r26.u32, 250, xer);
	// bgt cr6,0x826b4174
	if (cr6.gt) goto loc_826B4174;
	// lbz r18,72(r3)
	r18.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(r11.s32, r18.s32, xer);
	// bgt cr6,0x826b4174
	if (cr6.gt) goto loc_826B4174;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// beq cr6,0x826b4158
	if (cr6.eq) goto loc_826B4158;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B4158:
	// lwz r25,12(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm r11,r23,2,0,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r9,30
	cr6.compare<int32_t>(ctx.r9.s32, 30, xer);
	// beq cr6,0x826b4180
	if (cr6.eq) goto loc_826B4180;
loc_826B4174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9440
	return;
loc_826B4180:
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x826b45e8
	if (!cr6.gt) goto loc_826B45E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r20,r11,3852
	r20.s64 = r11.s64 + 3852;
	// ori r21,r10,65535
	r21.u64 = ctx.r10.u64 | 65535;
loc_826B419C:
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r30,r29,r25
	r30.u64 = r29.u64 + r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r11,r29,r25
	r11.u64 = PPC_LOAD_U32(r29.u32 + r25.u32);
	// clrlwi r7,r11,26
	ctx.r7.u64 = r11.u32 & 0x3F;
	// rlwinm r31,r11,26,24,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFF;
	// cmpwi cr6,r7,38
	cr6.compare<int32_t>(ctx.r7.s32, 38, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// lbzx r8,r7,r20
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + r20.u32);
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x826b4258
	if (cr6.lt) goto loc_826B4258;
	// beq cr6,0x826b4238
	if (cr6.eq) goto loc_826B4238;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x826b4290
	if (!cr6.lt) goto loc_826B4290;
	// rlwinm r11,r11,18,14,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r10,r8,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// subf r9,r21,r11
	ctx.r9.s64 = r11.s64 - r21.s64;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x826b4290
	if (!cr6.eq) goto loc_826B4290;
	// add r11,r9,r28
	r11.u64 = ctx.r9.u64 + r28.u64;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x826b4174
	if (cr0.lt) goto loc_826B4174;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b4290
	if (!cr6.gt) goto loc_826B4290;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r10,34
	cr6.compare<int32_t>(ctx.r10.s32, 34, xer);
	// bne cr6,0x826b4290
	if (!cr6.eq) goto loc_826B4290;
	// rlwinm r11,r11,0,9,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FC000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// b 0x826b428c
	goto loc_826B428C;
loc_826B4238:
	// rlwinm r10,r8,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// rlwinm r9,r11,18,14,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x826b4290
	if (!cr6.eq) goto loc_826B4290;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// b 0x826b4290
	goto loc_826B4290;
loc_826B4258:
	// rlwinm r9,r11,9,23,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1FF;
	// rlwinm r5,r8,28,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r6,r11,18,23,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1FF;
	// bl 0x826b40a8
	sub_826B40A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b4174
	if (cr6.eq) goto loc_826B4174;
	// rlwinm r5,r8,30,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b40a8
	sub_826B40A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_826B428C:
	// beq cr6,0x826b4174
	if (cr6.eq) goto loc_826B4174;
loc_826B4290:
	// rlwinm r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b42a8
	if (cr6.eq) goto loc_826B42A8;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(r31.s32, r24.s32, xer);
	// bne cr6,0x826b42a8
	if (!cr6.eq) goto loc_826B42A8;
	// mr r22,r28
	r22.u64 = r28.u64;
loc_826B42A8:
	// rlwinm r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b42d0
	if (cr6.eq) goto loc_826B42D0;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B42D0:
	// addi r11,r7,-2
	r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bgt cr6,0x826b45dc
	if (cr6.gt) goto loc_826B45DC;
	// lis r12,-32149
	r12.s64 = -2106916864;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17140
	r12.s64 = r12.s64 + 17140;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826B4384;
	case 1:
		goto loc_826B4398;
	case 2:
		goto loc_826B43B0;
	case 3:
		goto loc_826B43B8;
	case 4:
		goto loc_826B45DC;
	case 5:
		goto loc_826B43B8;
	case 6:
		goto loc_826B43B0;
	case 7:
		goto loc_826B45DC;
	case 8:
		goto loc_826B45DC;
	case 9:
		goto loc_826B43D4;
	case 10:
		goto loc_826B45DC;
	case 11:
		goto loc_826B45DC;
	case 12:
		goto loc_826B45DC;
	case 13:
		goto loc_826B45DC;
	case 14:
		goto loc_826B45DC;
	case 15:
		goto loc_826B45DC;
	case 16:
		goto loc_826B45DC;
	case 17:
		goto loc_826B45DC;
	case 18:
		goto loc_826B45DC;
	case 19:
		goto loc_826B43F0;
	case 20:
		goto loc_826B4430;
	case 21:
		goto loc_826B45DC;
	case 22:
		goto loc_826B45DC;
	case 23:
		goto loc_826B45DC;
	case 24:
		goto loc_826B45DC;
	case 25:
		goto loc_826B45DC;
	case 26:
		goto loc_826B4458;
	case 27:
		goto loc_826B4458;
	case 28:
		goto loc_826B44D4;
	case 29:
		goto loc_826B4424;
	case 30:
		goto loc_826B4424;
	case 31:
		goto loc_826B43F8;
	case 32:
		goto loc_826B44E4;
	case 33:
		goto loc_826B45DC;
	case 34:
		goto loc_826B4508;
	case 35:
		goto loc_826B4578;
	default:
		__builtin_unreachable();
	}
	// lwz r19,17284(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17284);
	// lwz r19,17304(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17304);
	// lwz r19,17328(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17328);
	// lwz r19,17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17336);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17336);
	// lwz r19,17328(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17328);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17364(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17364);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17392(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17392);
	// lwz r19,17456(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17456);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17496(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17496);
	// lwz r19,17496(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17496);
	// lwz r19,17620(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17620);
	// lwz r19,17444(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17444);
	// lwz r19,17444(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17444);
	// lwz r19,17400(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17400);
	// lwz r19,17636(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17636);
	// lwz r19,17884(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17884);
	// lwz r19,17672(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17672);
	// lwz r19,17784(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 17784);
loc_826B4384:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x826b45dc
	if (cr6.eq) goto loc_826B45DC;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// b 0x826b45d8
	goto loc_826B45D8;
loc_826B4398:
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(r31.s32, r24.s32, xer);
	// bgt cr6,0x826b45dc
	if (cr6.gt) goto loc_826B45DC;
	// cmpw cr6,r24,r9
	cr6.compare<int32_t>(r24.s32, ctx.r9.s32, xer);
	// bgt cr6,0x826b45dc
	if (cr6.gt) goto loc_826B45DC;
	// mr r22,r28
	r22.u64 = r28.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B43B0:
	// cmpw cr6,r9,r18
	cr6.compare<int32_t>(ctx.r9.s32, r18.s32, xer);
	// b 0x826b45d8
	goto loc_826B45D8;
loc_826B43B8:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B43D4:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// bne cr6,0x826b45dc
	if (!cr6.eq) goto loc_826B45DC;
	// mr r22,r28
	r22.u64 = r28.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B43F0:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// b 0x826b45d8
	goto loc_826B45D8;
loc_826B43F8:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x826b4174
	if (cr6.lt) goto loc_826B4174;
	// add r11,r6,r31
	r11.u64 = ctx.r6.u64 + r31.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x826b45dc
	if (cr6.lt) goto loc_826B45DC;
	// mr r22,r28
	r22.u64 = r28.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B4424:
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
loc_826B4430:
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(r24.s32, 255, xer);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x826b45dc
	if (cr6.eq) goto loc_826B45DC;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x826b45dc
	if (!cr6.lt) goto loc_826B45DC;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(r11.s32, r19.s32, xer);
	// bgt cr6,0x826b45dc
	if (cr6.gt) goto loc_826B45DC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B4458:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826b4470
	if (cr6.eq) goto loc_826B4470;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
loc_826B4470:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826b44ac
	if (!cr6.eq) goto loc_826B44AC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r10,26
	r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x826b4174
	if (cr6.lt) goto loc_826B4174;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// ble cr6,0x826b449c
	if (!cr6.gt) goto loc_826B449C;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B449C:
	// rlwinm r11,r10,0,0,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
	// b 0x826b44c4
	goto loc_826B44C4;
loc_826B44AC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b44c4
	if (cr6.eq) goto loc_826B44C4;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
loc_826B44C4:
	// cmpw cr6,r24,r31
	cr6.compare<int32_t>(r24.s32, r31.s32, xer);
	// blt cr6,0x826b45dc
	if (cr6.lt) goto loc_826B45DC;
	// mr r22,r28
	r22.u64 = r28.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B44D4:
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x826b45dc
	if (!cr0.gt) goto loc_826B45DC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x826b45d0
	goto loc_826B45D0;
loc_826B44E4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826b44f8
	if (!cr6.gt) goto loc_826B44F8;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
loc_826B44F8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x826b45dc
	if (!cr6.eq) goto loc_826B45DC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B4508:
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + r28.u64;
	// cmpw cr6,r7,r23
	cr6.compare<int32_t>(ctx.r7.s32, r23.s32, xer);
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// blt cr6,0x826b4568
	if (cr6.lt) goto loc_826B4568;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_826B4540:
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x826b4558
	if (cr6.eq) goto loc_826B4558;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B4558:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x826b4540
	if (!cr6.gt) goto loc_826B4540;
loc_826B4568:
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(r24.s32, 255, xer);
	// beq cr6,0x826b45dc
	if (cr6.eq) goto loc_826B45DC;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// b 0x826b45dc
	goto loc_826B45DC;
loc_826B4578:
	// lbz r11,74(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 74);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b4174
	if (cr6.eq) goto loc_826B4174;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x826b45cc
	if (!cr6.eq) goto loc_826B45CC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r10,26
	r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x826b4174
	if (cr6.lt) goto loc_826B4174;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// ble cr6,0x826b45c0
	if (!cr6.gt) goto loc_826B45C0;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B45C0:
	// rlwinm r11,r10,0,0,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b4174
	if (!cr6.eq) goto loc_826B4174;
loc_826B45CC:
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
loc_826B45D0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
loc_826B45D8:
	// bge cr6,0x826b4174
	if (!cr6.lt) goto loc_826B4174;
loc_826B45DC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r19
	cr6.compare<int32_t>(r28.s32, r19.s32, xer);
	// blt cr6,0x826b419c
	if (cr6.lt) goto loc_826B419C;
loc_826B45E8:
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826B45F4"))) PPC_WEAK_FUNC(sub_826B45F4);
PPC_FUNC_IMPL(__imp__sub_826B45F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_826B45F8"))) PPC_WEAK_FUNC(sub_826B45F8);
PPC_FUNC_IMPL(__imp__sub_826B45F8) {
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
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x826b4108
	sub_826B4108(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826B4624"))) PPC_WEAK_FUNC(sub_826B4624);
PPC_FUNC_IMPL(__imp__sub_826B4624) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4628"))) PPC_WEAK_FUNC(sub_826B4628);
PPC_FUNC_IMPL(__imp__sub_826B4628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b465c
	if (cr6.eq) goto loc_826B465C;
	// rlwinm r11,r4,0,24,22
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x826b465c
	if (!cr6.eq) goto loc_826B465C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
loc_826B465C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,428
	ctx.r3.s64 = r11.s64 + 428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4668"))) PPC_WEAK_FUNC(sub_826B4668);
PPC_FUNC_IMPL(__imp__sub_826B4668) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b4758
	if (!cr6.eq) goto loc_826B4758;
loc_826B4694:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b4758
	if (!cr6.eq) goto loc_826B4758;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b3a88
	sub_826B3A88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b8ec8
	sub_826B8EC8(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b4764
	if (!cr6.eq) goto loc_826B4764;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4108
	sub_826B4108(ctx, base);
	// clrlwi r11,r3,26
	r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x826b4758
	if (cr6.gt) goto loc_826B4758;
	// lis r12,-32149
	r12.s64 = -2106916864;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18184
	r12.s64 = r12.s64 + 18184;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826B4738;
	case 1:
		goto loc_826B4758;
	case 2:
		goto loc_826B4758;
	case 3:
		goto loc_826B4758;
	case 4:
		goto loc_826B47FC;
	case 5:
		goto loc_826B4774;
	case 6:
		goto loc_826B4798;
	case 7:
		goto loc_826B4758;
	case 8:
		goto loc_826B4758;
	case 9:
		goto loc_826B4758;
	case 10:
		goto loc_826B4758;
	case 11:
		goto loc_826B4844;
	default:
		__builtin_unreachable();
	}
	// lwz r19,18232(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18232);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18428(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18428);
	// lwz r19,18292(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18292);
	// lwz r19,18328(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18328);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18264(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18264);
	// lwz r19,18500(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 18500);
loc_826B4738:
	// rlwinm r29,r3,9,23,31
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0x1FF;
	// rlwinm r11,r3,26,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0xFF;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x826b4758
	if (!cr6.lt) goto loc_826B4758;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x826b4694
	if (cr6.eq) goto loc_826B4694;
loc_826B4758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B4764:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,25852
	ctx.r3.s64 = r11.s64 + 25852;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B4774:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,22,10,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFF0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,15100
	ctx.r3.s64 = ctx.r9.s64 + 15100;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B4798:
	// rlwinm r10,r3,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x100;
	// rlwinm r11,r3,18,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b47e0
	if (cr6.eq) goto loc_826B47E0;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x826b47e0
	if (!cr6.eq) goto loc_826B47E0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r10,1348
	ctx.r3.s64 = ctx.r10.s64 + 1348;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B47E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,428
	r11.s64 = r11.s64 + 428;
	// addi r3,r10,1348
	ctx.r3.s64 = ctx.r10.s64 + 1348;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B47FC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b4828
	if (cr6.eq) goto loc_826B4828;
	// rlwinm r10,r3,11,21,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r10,1340
	ctx.r3.s64 = ctx.r10.s64 + 1340;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B4828:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,428
	r11.s64 = r11.s64 + 428;
	// addi r3,r10,1340
	ctx.r3.s64 = ctx.r10.s64 + 1340;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B4844:
	// rlwinm r10,r3,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x100;
	// rlwinm r11,r3,18,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b488c
	if (cr6.eq) goto loc_826B488C;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x826b488c
	if (!cr6.eq) goto loc_826B488C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r3,r10,656
	ctx.r3.s64 = ctx.r10.s64 + 656;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B488C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,428
	r11.s64 = r11.s64 + 428;
	// addi r3,r10,656
	ctx.r3.s64 = ctx.r10.s64 + 656;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B48A4"))) PPC_WEAK_FUNC(sub_826B48A4);
PPC_FUNC_IMPL(__imp__sub_826B48A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826B48A8"))) PPC_WEAK_FUNC(sub_826B48A8);
PPC_FUNC_IMPL(__imp__sub_826B48A8) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b48ec
	if (!cr6.eq) goto loc_826B48EC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b48ec
	if (!cr6.eq) goto loc_826B48EC;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x826b496c
	if (cr6.gt) goto loc_826B496C;
loc_826B48EC:
	// lwz r11,-20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b496c
	if (!cr6.eq) goto loc_826B496C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b496c
	if (!cr6.eq) goto loc_826B496C;
	// addi r4,r4,-24
	ctx.r4.s64 = ctx.r4.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b3a88
	sub_826B3A88(ctx, base);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwzx r11,r10,r7
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r10,28
	cr6.compare<int32_t>(ctx.r10.s32, 28, xer);
	// beq cr6,0x826b494c
	if (cr6.eq) goto loc_826B494C;
	// cmpwi cr6,r10,29
	cr6.compare<int32_t>(ctx.r10.s32, 29, xer);
	// beq cr6,0x826b494c
	if (cr6.eq) goto loc_826B494C;
	// cmpwi cr6,r10,33
	cr6.compare<int32_t>(ctx.r10.s32, 33, xer);
	// bne cr6,0x826b496c
	if (!cr6.eq) goto loc_826B496C;
loc_826B494C:
	// rlwinm r5,r11,26,24,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4668
	sub_826B4668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B496C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B4980"))) PPC_WEAK_FUNC(sub_826B4980);
PPC_FUNC_IMPL(__imp__sub_826B4980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4984"))) PPC_WEAK_FUNC(sub_826B4984);
PPC_FUNC_IMPL(__imp__sub_826B4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4988"))) PPC_WEAK_FUNC(sub_826B4988);
PPC_FUNC_IMPL(__imp__sub_826B4988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x826b49ac
	if (!cr6.lt) goto loc_826B49AC;
loc_826B4998:
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x826b49b4
	if (cr6.eq) goto loc_826B49B4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b4998
	if (cr6.lt) goto loc_826B4998;
loc_826B49AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B49B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B49BC"))) PPC_WEAK_FUNC(sub_826B49BC);
PPC_FUNC_IMPL(__imp__sub_826B49BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B49C0"))) PPC_WEAK_FUNC(sub_826B49C0);
PPC_FUNC_IMPL(__imp__sub_826B49C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// cmpwi cr6,r8,6
	cr6.compare<int32_t>(ctx.r8.s32, 6, xer);
	// bne cr6,0x826b4a68
	if (!cr6.eq) goto loc_826B4A68;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b4a68
	if (!cr6.eq) goto loc_826B4A68;
	// bl 0x826b3ae8
	sub_826B3AE8(ctx, base);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826b4a34
	if (!cr6.eq) goto loc_826B4A34;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b4a34
	if (!cr6.eq) goto loc_826B4A34;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x826b4a38
	goto loc_826B4A38;
loc_826B4A34:
	// li r11,0
	r11.s64 = 0;
loc_826B4A38:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x826afc28
	sub_826AFC28(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,1356
	ctx.r4.s64 = r11.s64 + 1356;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826B4A68:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826B4A74"))) PPC_WEAK_FUNC(sub_826B4A74);
PPC_FUNC_IMPL(__imp__sub_826B4A74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B4A78"))) PPC_WEAK_FUNC(sub_826B4A78);
PPC_FUNC_IMPL(__imp__sub_826B4A78) {
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
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b4b1c
	if (cr6.eq) goto loc_826B4B1C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x826b4ab8
	if (cr6.eq) goto loc_826B4AB8;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826B4AB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r8,-16(r11)
	PPC_STORE_U64(r11.u32 + -16, ctx.r8.u64);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r7,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r7.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// bgt cr6,0x826b4b00
	if (cr6.gt) goto loc_826B4B00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B4B00:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r4,r11,-32
	ctx.r4.s64 = r11.s64 + -32;
	// bl 0x826b0eb0
	sub_826B0EB0(ctx, base);
loc_826B4B1C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
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

__attribute__((alias("__imp__sub_826B4B3C"))) PPC_WEAK_FUNC(sub_826B4B3C);
PPC_FUNC_IMPL(__imp__sub_826B4B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4B40"))) PPC_WEAK_FUNC(sub_826B4B40);
PPC_FUNC_IMPL(__imp__sub_826B4B40) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826af948
	sub_826AF948(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b49c0
	sub_826B49C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4a78
	sub_826B4A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B4BA8"))) PPC_WEAK_FUNC(sub_826B4BA8);
PPC_FUNC_IMPL(__imp__sub_826B4BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4BAC"))) PPC_WEAK_FUNC(sub_826B4BAC);
PPC_FUNC_IMPL(__imp__sub_826B4BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4BB0"))) PPC_WEAK_FUNC(sub_826B4BB0);
PPC_FUNC_IMPL(__imp__sub_826B4BB0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x826b4bf0
	if (!cr6.eq) goto loc_826B4BF0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x826b3ec0
	sub_826B3EC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_826B4BF0:
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b4cd8
	if (cr6.eq) goto loc_826B4CD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r10,13435
	r25.s64 = ctx.r10.s64 + 13435;
loc_826B4C08:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bgt cr6,0x826b4c70
	if (cr6.gt) goto loc_826B4C70;
	// beq cr6,0x826b4c48
	if (cr6.eq) goto loc_826B4C48;
	// cmplwi cr6,r11,76
	cr6.compare<uint32_t>(r11.u32, 76, xer);
	// beq cr6,0x826b4cc8
	if (cr6.eq) goto loc_826B4CC8;
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x826b4c38
	if (cr6.eq) goto loc_826B4C38;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// beq cr6,0x826b4cc8
	if (cr6.eq) goto loc_826B4CC8;
	// mr r24,r27
	r24.u64 = r27.u64;
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C38:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b3e30
	sub_826B3E30(ctx, base);
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C48:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b4c64
	if (cr6.eq) goto loc_826B4C64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3ae8
	sub_826B3AE8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C70:
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// beq cr6,0x826b4c94
	if (cr6.eq) goto loc_826B4C94;
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// beq cr6,0x826b4c88
	if (cr6.eq) goto loc_826B4C88;
	// mr r24,r27
	r24.u64 = r27.u64;
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C88:
	// lbz r11,7(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 7);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x826b4cc8
	goto loc_826B4CC8;
loc_826B4C94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b4cb0
	if (cr6.eq) goto loc_826B4CB0;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b48a8
	sub_826B48A8(ctx, base);
	// b 0x826b4cb4
	goto loc_826B4CB4;
loc_826B4CB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_826B4CB4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x826b4cc8
	if (!cr6.eq) goto loc_826B4CC8;
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
loc_826B4CC8:
	// lbzu r11,1(r26)
	ea = 1 + r26.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r26.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b4c08
	if (!cr6.eq) goto loc_826B4C08;
loc_826B4CD8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826B4CE0"))) PPC_WEAK_FUNC(sub_826B4CE0);
PPC_FUNC_IMPL(__imp__sub_826B4CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826B4CE4"))) PPC_WEAK_FUNC(sub_826B4CE4);
PPC_FUNC_IMPL(__imp__sub_826B4CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4CE8"))) PPC_WEAK_FUNC(sub_826B4CE8);
PPC_FUNC_IMPL(__imp__sub_826B4CE8) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x826b4d28
	if (!cr6.eq) goto loc_826B4D28;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x826b4d50
	goto loc_826B4D50;
loc_826B4D28:
	// lwz r11,96(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b4d50
	if (cr6.eq) goto loc_826B4D50;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_826B4D50:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4bb0
	sub_826B4BB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4dc4
	if (cr6.eq) goto loc_826B4DC4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b4d8c
	if (!cr6.eq) goto loc_826B4D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826b4d94
	goto loc_826B4D94;
loc_826B4D8C:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_826B4D94:
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bgt cr6,0x826b4db8
	if (cr6.gt) goto loc_826B4DB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B4DB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_826B4DC4:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4de4
	if (cr6.eq) goto loc_826B4DE4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b3f38
	sub_826B3F38(ctx, base);
loc_826B4DE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B4DEC"))) PPC_WEAK_FUNC(sub_826B4DEC);
PPC_FUNC_IMPL(__imp__sub_826B4DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B4DF0"))) PPC_WEAK_FUNC(sub_826B4DF0);
PPC_FUNC_IMPL(__imp__sub_826B4DF0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r9,1616
	ctx.r7.s64 = ctx.r9.s64 + 1616;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwzx r29,r6,r7
	r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bge cr6,0x826b4e4c
	if (!cr6.lt) goto loc_826B4E4C;
loc_826B4E38:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b4e6c
	if (cr6.eq) goto loc_826B4E6C;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b4e38
	if (cr6.lt) goto loc_826B4E38;
loc_826B4E4C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,1404
	ctx.r4.s64 = r11.s64 + 1404;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e946c
	return;
loc_826B4E6C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r5,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// bl 0x826b4668
	sub_826B4668(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4e4c
	if (cr6.eq) goto loc_826B4E4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r4,r11,1368
	ctx.r4.s64 = r11.s64 + 1368;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826B4EB0"))) PPC_WEAK_FUNC(sub_826B4EB0);
PPC_FUNC_IMPL(__imp__sub_826B4EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B4EB4"))) PPC_WEAK_FUNC(sub_826B4EB4);
PPC_FUNC_IMPL(__imp__sub_826B4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4EB8"))) PPC_WEAK_FUNC(sub_826B4EB8);
PPC_FUNC_IMPL(__imp__sub_826B4EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b4ecc
	if (cr6.eq) goto loc_826B4ECC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b4ed0
	if (!cr6.eq) goto loc_826B4ED0;
loc_826B4ECC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_826B4ED0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,1432
	ctx.r5.s64 = r11.s64 + 1432;
}

__attribute__((alias("__imp__sub_826B4ED8"))) PPC_WEAK_FUNC(sub_826B4ED8);
PPC_FUNC_IMPL(__imp__sub_826B4ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b4df0
	sub_826B4DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B4EDC"))) PPC_WEAK_FUNC(sub_826B4EDC);
PPC_FUNC_IMPL(__imp__sub_826B4EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4EE0"))) PPC_WEAK_FUNC(sub_826B4EE0);
PPC_FUNC_IMPL(__imp__sub_826B4EE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b4f10
	if (!cr6.eq) goto loc_826B4F10;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_826B4F10:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,1444
	ctx.r5.s64 = r11.s64 + 1444;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4df0
	sub_826B4DF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B4F28"))) PPC_WEAK_FUNC(sub_826B4F28);
PPC_FUNC_IMPL(__imp__sub_826B4F28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B4F2C"))) PPC_WEAK_FUNC(sub_826B4F2C);
PPC_FUNC_IMPL(__imp__sub_826B4F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4F30"))) PPC_WEAK_FUNC(sub_826B4F30);
PPC_FUNC_IMPL(__imp__sub_826B4F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r8,r10,1616
	ctx.r8.s64 = ctx.r10.s64 + 1616;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lbz r11,2(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r4,2(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x826b4f8c
	if (!cr6.eq) goto loc_826B4F8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,1500
	ctx.r4.s64 = r11.s64 + 1500;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826B4F8C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,1468
	ctx.r4.s64 = r11.s64 + 1468;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826B4FA8"))) PPC_WEAK_FUNC(sub_826B4FA8);
PPC_FUNC_IMPL(__imp__sub_826B4FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4FAC"))) PPC_WEAK_FUNC(sub_826B4FAC);
PPC_FUNC_IMPL(__imp__sub_826B4FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4FB0"))) PPC_WEAK_FUNC(sub_826B4FB0);
PPC_FUNC_IMPL(__imp__sub_826B4FB0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1664
	r11.s64 = r11.s64 + 1664;
	// li r31,188
	r31.s64 = 188;
	// addi r29,r11,-188
	r29.s64 = r11.s64 + -188;
loc_826B4FD0:
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_826B4FD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b4fd8
	if (!cr6.eq) goto loc_826B4FD8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r3.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r9,r31
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stb r7,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r7.u8);
	// blt cr6,0x826b4fd0
	if (cr6.lt) goto loc_826B4FD0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B5028"))) PPC_WEAK_FUNC(sub_826B5028);
PPC_FUNC_IMPL(__imp__sub_826B5028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B502C"))) PPC_WEAK_FUNC(sub_826B502C);
PPC_FUNC_IMPL(__imp__sub_826B502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5030"))) PPC_WEAK_FUNC(sub_826B5030);
PPC_FUNC_IMPL(__imp__sub_826B5030) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b7c98
	sub_826B7C98(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5078
	if (!cr6.eq) goto loc_826B5078;
	// li r11,1
	r11.s64 = 1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r9,r11,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
loc_826B5078:
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

__attribute__((alias("__imp__sub_826B508C"))) PPC_WEAK_FUNC(sub_826B508C);
PPC_FUNC_IMPL(__imp__sub_826B508C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B5090"))) PPC_WEAK_FUNC(sub_826B5090);
PPC_FUNC_IMPL(__imp__sub_826B5090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x826b50b8
	if (cr6.eq) goto loc_826B50B8;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x826b50b8
	if (cr6.eq) goto loc_826B50B8;
	// addi r11,r11,38
	r11.s64 = r11.s64 + 38;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x826b50c0
	goto loc_826B50C0;
loc_826B50B8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_826B50C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b50e0
	if (cr6.eq) goto loc_826B50E0;
	// addi r10,r5,47
	ctx.r10.s64 = ctx.r5.s64 + 47;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x826b7c98
	sub_826B7C98(ctx, base);
	return;
loc_826B50E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,784
	ctx.r3.s64 = r11.s64 + 784;
}

__attribute__((alias("__imp__sub_826B50E8"))) PPC_WEAK_FUNC(sub_826B50E8);
PPC_FUNC_IMPL(__imp__sub_826B50E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B50EC"))) PPC_WEAK_FUNC(sub_826B50EC);
PPC_FUNC_IMPL(__imp__sub_826B50EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B50F0"))) PPC_WEAK_FUNC(sub_826B50F0);
PPC_FUNC_IMPL(__imp__sub_826B50F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b515c
	if (cr6.eq) goto loc_826B515C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b5158
	if (!cr6.eq) goto loc_826B5158;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x826af7b8
	sub_826AF7B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b5158
	if (cr6.eq) goto loc_826B5158;
	// li r11,3
	r11.s64 = 3;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B5158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B515C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B516C"))) PPC_WEAK_FUNC(sub_826B516C);
PPC_FUNC_IMPL(__imp__sub_826B516C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B5170"))) PPC_WEAK_FUNC(sub_826B5170);
PPC_FUNC_IMPL(__imp__sub_826B5170) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x826b51b4
	if (cr6.eq) goto loc_826B51B4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826b5218
	goto loc_826B5218;
loc_826B51B4:
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,1732
	ctx.r4.s64 = r11.s64 + 1732;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb230
	sub_828EB230(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_826B51D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b51d8
	if (!cr6.eq) goto loc_826B51D8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5218:
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

__attribute__((alias("__imp__sub_826B522C"))) PPC_WEAK_FUNC(sub_826B522C);
PPC_FUNC_IMPL(__imp__sub_826B522C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B5230"))) PPC_WEAK_FUNC(sub_826B5230);
PPC_FUNC_IMPL(__imp__sub_826B5230) {
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
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,24(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b5280
	if (cr6.eq) goto loc_826B5280;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5280
	if (!cr6.eq) goto loc_826B5280;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// bl 0x826b01a8
	sub_826B01A8(ctx, base);
loc_826B5280:
	// rlwinm r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b5310
	if (cr6.eq) goto loc_826B5310;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,20(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r7,r9,r30
	ctx.r7.s64 = r30.s64 - ctx.r9.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// srawi r10,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x826b52c4
	if (cr6.eq) goto loc_826B52C4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// b 0x826b52c8
	goto loc_826B52C8;
loc_826B52C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_826B52C8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b5304
	if (cr6.eq) goto loc_826B5304;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// ble cr6,0x826b5304
	if (!cr6.gt) goto loc_826B5304;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b52f8
	if (cr6.eq) goto loc_826B52F8;
	// subf r10,r9,r28
	ctx.r10.s64 = r28.s64 - ctx.r9.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// b 0x826b52fc
	goto loc_826B52FC;
loc_826B52F8:
	// li r11,0
	r11.s64 = 0;
loc_826B52FC:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x826b5310
	if (cr6.eq) goto loc_826B5310;
loc_826B5304:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b01a8
	sub_826B01A8(ctx, base);
loc_826B5310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B5314"))) PPC_WEAK_FUNC(sub_826B5314);
PPC_FUNC_IMPL(__imp__sub_826B5314) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B5318"))) PPC_WEAK_FUNC(sub_826B5318);
PPC_FUNC_IMPL(__imp__sub_826B5318) {
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
	// ld r11,0(r5)
	r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r30,r9,r4
	r30.s64 = ctx.r4.s64 - ctx.r9.s64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r5.u64);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r3,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r3.u64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r7,48
	cr6.compare<int32_t>(ctx.r7.s32, 48, xer);
	// bgt cr6,0x826b5394
	if (cr6.gt) goto loc_826B5394;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B5394:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r4,r11,-48
	ctx.r4.s64 = r11.s64 + -48;
	// bl 0x826b0eb0
	sub_826B0EB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_826B53E8"))) PPC_WEAK_FUNC(sub_826B53E8);
PPC_FUNC_IMPL(__imp__sub_826B53E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B53EC"))) PPC_WEAK_FUNC(sub_826B53EC);
PPC_FUNC_IMPL(__imp__sub_826B53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B53F0"))) PPC_WEAK_FUNC(sub_826B53F0);
PPC_FUNC_IMPL(__imp__sub_826B53F0) {
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
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r5,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r5.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ld r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r4,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r4.u64);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r3,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r3.u32);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// std r10,48(r11)
	PPC_STORE_U64(r11.u32 + 48, ctx.r10.u64);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,64
	cr6.compare<int32_t>(ctx.r6.s32, 64, xer);
	// bgt cr6,0x826b5474
	if (cr6.gt) goto loc_826B5474;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B5474:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r4,r11,-64
	ctx.r4.s64 = r11.s64 + -64;
	// bl 0x826b0eb0
	sub_826B0EB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B54A0"))) PPC_WEAK_FUNC(sub_826B54A0);
PPC_FUNC_IMPL(__imp__sub_826B54A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B54A4"))) PPC_WEAK_FUNC(sub_826B54A4);
PPC_FUNC_IMPL(__imp__sub_826B54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B54A8"))) PPC_WEAK_FUNC(sub_826B54A8);
PPC_FUNC_IMPL(__imp__sub_826B54A8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,5668
	r24.s64 = r11.s64 + 5668;
loc_826B54D0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x826b554c
	if (!cr6.eq) goto loc_826B554C;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b7cf0
	sub_826B7CF0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5534
	if (!cr6.eq) goto loc_826B5534;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b5534
	if (cr6.eq) goto loc_826B5534;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b5534
	if (!cr6.eq) goto loc_826B5534;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x826b5030
	sub_826B5030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b557c
	if (!cr6.eq) goto loc_826B557C;
loc_826B5534:
	// ld r11,0(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_826B554C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b557c
	if (!cr6.eq) goto loc_826B557C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4df0
	sub_826B4DF0(ctx, base);
loc_826B557C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x826b55b0
	if (cr6.eq) goto loc_826B55B0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r26,100
	cr6.compare<int32_t>(r26.s32, 100, xer);
	// blt cr6,0x826b54d0
	if (cr6.lt) goto loc_826B54D0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1740
	ctx.r4.s64 = r11.s64 + 1740;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_826B55B0:
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r28,r9,r25
	r28.s64 = r25.s64 - ctx.r9.s64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r7,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r7.u64);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// std r5,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r5.u64);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r4,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - r11.s64;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bgt cr6,0x826b5614
	if (cr6.gt) goto loc_826B5614;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B5614:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r4,r11,-48
	ctx.r4.s64 = r11.s64 + -48;
	// bl 0x826b0eb0
	sub_826B0EB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826B5658"))) PPC_WEAK_FUNC(sub_826B5658);
PPC_FUNC_IMPL(__imp__sub_826B5658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826B565C"))) PPC_WEAK_FUNC(sub_826B565C);
PPC_FUNC_IMPL(__imp__sub_826B565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5660"))) PPC_WEAK_FUNC(sub_826B5660);
PPC_FUNC_IMPL(__imp__sub_826B5660) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r23,r11,5668
	r23.s64 = r11.s64 + 5668;
loc_826B5688:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x826b5744
	if (!cr6.eq) goto loc_826B5744;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b7db8
	sub_826B7DB8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b56f0
	if (!cr6.eq) goto loc_826B56F0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b56f0
	if (cr6.eq) goto loc_826B56F0;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b56f0
	if (!cr6.eq) goto loc_826B56F0;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x826b5030
	sub_826B5030(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5770
	if (!cr6.eq) goto loc_826B5770;
loc_826B56F0:
	// ld r11,0(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 0);
	// std r11,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r11.u64);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x826b579c
	if (cr6.lt) goto loc_826B579C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b579c
	if (cr6.eq) goto loc_826B579C;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b579c
	if (cr6.eq) goto loc_826B579C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3978
	sub_826B3978(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_826B5744:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5770
	if (!cr6.eq) goto loc_826B5770;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4df0
	sub_826B4DF0(ctx, base);
loc_826B5770:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x826b57a4
	if (cr6.eq) goto loc_826B57A4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r25,100
	cr6.compare<int32_t>(r25.s32, 100, xer);
	// blt cr6,0x826b5688
	if (cr6.lt) goto loc_826B5688;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1760
	ctx.r4.s64 = r11.s64 + 1760;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B579C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_826B57A4:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b53f0
	sub_826B53F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826B57C0"))) PPC_WEAK_FUNC(sub_826B57C0);
PPC_FUNC_IMPL(__imp__sub_826B57C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826B57C4"))) PPC_WEAK_FUNC(sub_826B57C4);
PPC_FUNC_IMPL(__imp__sub_826B57C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B57C8"))) PPC_WEAK_FUNC(sub_826B57C8);
PPC_FUNC_IMPL(__imp__sub_826B57C8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b580c
	if (!cr6.eq) goto loc_826B580C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
loc_826B580C:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5824
	if (!cr6.eq) goto loc_826B5824;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826B5824:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5318
	sub_826B5318(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B5844"))) PPC_WEAK_FUNC(sub_826B5844);
PPC_FUNC_IMPL(__imp__sub_826B5844) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B5848"))) PPC_WEAK_FUNC(sub_826B5848);
PPC_FUNC_IMPL(__imp__sub_826B5848) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b58ac
	if (cr6.eq) goto loc_826B58AC;
	// li r11,1
	r11.s64 = 1;
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// slw r25,r11,r6
	r25.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b58ac
	if (!cr6.eq) goto loc_826B58AC;
	// addi r11,r6,47
	r11.s64 = ctx.r6.s64 + 47;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x826b5030
	sub_826B5030(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b58b8
	if (!cr6.eq) goto loc_826B58B8;
loc_826B58AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_826B58B8:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x826b58cc
	if (!cr6.eq) goto loc_826B58CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_826B58CC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826b58ac
	if (cr6.eq) goto loc_826B58AC;
	// lbz r11,6(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// and r10,r11,r25
	ctx.r10.u64 = r11.u64 & r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b58ac
	if (!cr6.eq) goto loc_826B58AC;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x826b5030
	sub_826B5030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b58ac
	if (cr6.eq) goto loc_826B58AC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826af750
	sub_826AF750(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 & r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B591C"))) PPC_WEAK_FUNC(sub_826B591C);
PPC_FUNC_IMPL(__imp__sub_826B591C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826B5920"))) PPC_WEAK_FUNC(sub_826B5920);
PPC_FUNC_IMPL(__imp__sub_826B5920) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5960
	if (!cr6.eq) goto loc_826B5960;
loc_826B5954:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826B5960:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826af750
	sub_826AF750(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b5954
	if (cr6.eq) goto loc_826B5954;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5318
	sub_826B5318(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b59cc
	if (cr6.eq) goto loc_826B59CC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826b59c0
	if (!cr6.eq) goto loc_826B59C0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b59cc
	if (cr6.eq) goto loc_826B59CC;
loc_826B59C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826B59CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B59D4"))) PPC_WEAK_FUNC(sub_826B59D4);
PPC_FUNC_IMPL(__imp__sub_826B59D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B59D8"))) PPC_WEAK_FUNC(sub_826B59D8);
PPC_FUNC_IMPL(__imp__sub_826B59D8) {
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
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,12(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828f1e60
	sub_828F1E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b5a80
	if (!cr6.eq) goto loc_826B5A80;
loc_826B5A08:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_826B5A0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b5a0c
	if (!cr6.eq) goto loc_826B5A0C;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x826b5a68
	if (cr6.eq) goto loc_826B5A68;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x826b5a7c
	if (cr6.eq) goto loc_826B5A7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r28,r11,r28
	r28.s64 = r28.s64 - r11.s64;
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
	// bl 0x828f1e60
	sub_828F1E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b5a08
	if (cr6.eq) goto loc_826B5A08;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826B5A68:
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826B5A7C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_826B5A80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B5A84"))) PPC_WEAK_FUNC(sub_826B5A84);
PPC_FUNC_IMPL(__imp__sub_826B5A84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B5A88"))) PPC_WEAK_FUNC(sub_826B5A88);
PPC_FUNC_IMPL(__imp__sub_826B5A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826b5b14
	if (!cr6.eq) goto loc_826B5B14;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b5ad8
	if (!cr6.eq) goto loc_826B5AD8;
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x826b5b24
	if (cr6.lt) goto loc_826B5B24;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5AD8:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b5af8
	if (!cr6.eq) goto loc_826B5AF8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b59d8
	sub_826B59D8(ctx, base);
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5AF8:
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5920
	sub_826B5920(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x826b5b24
	if (!cr6.eq) goto loc_826B5B24;
loc_826B5B14:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4f30
	sub_826B4F30(ctx, base);
loc_826B5B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B5B28"))) PPC_WEAK_FUNC(sub_826B5B28);
PPC_FUNC_IMPL(__imp__sub_826B5B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B5B2C"))) PPC_WEAK_FUNC(sub_826B5B2C);
PPC_FUNC_IMPL(__imp__sub_826B5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5B30"))) PPC_WEAK_FUNC(sub_826B5B30);
PPC_FUNC_IMPL(__imp__sub_826B5B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826b5bf0
	if (!cr6.eq) goto loc_826B5BF0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b5b80
	if (!cr6.eq) goto loc_826B5B80;
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826b5c00
	if (!cr6.gt) goto loc_826B5C00;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5B80:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b5ba8
	if (!cr6.eq) goto loc_826B5BA8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b59d8
	sub_826B59D8(ctx, base);
	// neg r11,r3
	r11.s64 = -ctx.r3.s64;
	// orc r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ~r11.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5BA8:
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5920
	sub_826B5920(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x826b5c00
	if (!cr6.eq) goto loc_826B5C00;
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5920
	sub_826B5920(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x826b5bf0
	if (cr6.eq) goto loc_826B5BF0;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5BF0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4f30
	sub_826B4F30(ctx, base);
loc_826B5C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B5C04"))) PPC_WEAK_FUNC(sub_826B5C04);
PPC_FUNC_IMPL(__imp__sub_826B5C04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B5C08"))) PPC_WEAK_FUNC(sub_826B5C08);
PPC_FUNC_IMPL(__imp__sub_826B5C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x826b5cfc
	if (cr6.gt) goto loc_826B5CFC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x826b5cfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5CFC;
	// bdzf 4*cr6+eq,0x826b5cfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5CFC;
	// bdzf 4*cr6+eq,0x826b5c5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5C5C;
	// bdzf 4*cr6+eq,0x826b5cfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5CFC;
	// bdzf 4*cr6+eq,0x826b5c7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5C7C;
	// bdzf 4*cr6+eq,0x826b5cfc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5CFC;
	// bne cr6,0x826b5c7c
	if (!cr6.eq) goto loc_826B5C7C;
loc_826B5C50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5C5C:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r29)
	ctx.f13.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x826b5d10
	if (cr6.eq) goto loc_826B5D10;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5C7C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b5c50
	if (cr6.eq) goto loc_826B5C50;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826b5848
	sub_826B5848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5cb4
	if (!cr6.eq) goto loc_826B5CB4;
loc_826B5CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5CB4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5318
	sub_826B5318(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b5ca8
	if (cr6.eq) goto loc_826B5CA8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826b5c50
	if (!cr6.eq) goto loc_826B5C50;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b5ca8
	if (cr6.eq) goto loc_826B5CA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B5CFC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_826B5D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B5D14"))) PPC_WEAK_FUNC(sub_826B5D14);
PPC_FUNC_IMPL(__imp__sub_826B5D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B5D18"))) PPC_WEAK_FUNC(sub_826B5D18);
PPC_FUNC_IMPL(__imp__sub_826B5D18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r21,4
	r21.s64 = 4;
	// addi r20,r11,1780
	r20.s64 = r11.s64 + 1780;
loc_826B5D3C:
	// addi r10,r22,1
	ctx.r10.s64 = r22.s64 + 1;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// li r26,2
	r26.s64 = 2;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b5d64
	if (cr6.eq) goto loc_826B5D64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b5d84
	if (!cr6.eq) goto loc_826B5D84;
loc_826B5D64:
	// lwz r11,-8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b5df4
	if (cr6.eq) goto loc_826B5DF4;
	// addi r4,r24,-16
	ctx.r4.s64 = r24.s64 + -16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b5170
	sub_826B5170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b5df4
	if (!cr6.eq) goto loc_826B5DF4;
loc_826B5D84:
	// addi r31,r24,-32
	r31.s64 = r24.s64 + -32;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r30,r24,-16
	r30.s64 = r24.s64 + -16;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b5db8
	if (!cr6.eq) goto loc_826B5DB8;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b5090
	sub_826B5090(ctx, base);
loc_826B5DB8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b5de0
	if (cr6.eq) goto loc_826B5DE0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b5318
	sub_826B5318(ctx, base);
	// b 0x826b5efc
	goto loc_826B5EFC;
loc_826B5DE0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b4eb8
	sub_826B4EB8(ctx, base);
	// b 0x826b5efc
	goto loc_826B5EFC;
loc_826B5DF4:
	// lwz r11,-16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -16);
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b5e20
	if (!cr6.eq) goto loc_826B5E20;
	// lwz r11,-24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b5efc
	if (cr6.eq) goto loc_826B5EFC;
	// addi r4,r24,-32
	ctx.r4.s64 = r24.s64 + -32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b5170
	sub_826B5170(ctx, base);
	// b 0x826b5efc
	goto loc_826B5EFC;
loc_826B5E20:
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// ble cr6,0x826b5e84
	if (!cr6.gt) goto loc_826B5E84;
	// addi r31,r24,-32
	r31.s64 = r24.s64 + -32;
loc_826B5E30:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b5e50
	if (cr6.eq) goto loc_826B5E50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b5170
	sub_826B5170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b5e84
	if (cr6.eq) goto loc_826B5E84;
loc_826B5E50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subfic r10,r30,-3
	xer.ca = r30.u32 <= 4294967293;
	ctx.r10.s64 = -3 - r30.s64;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b5e70
	if (cr6.lt) goto loc_826B5E70;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B5E70:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// cmpw cr6,r26,r23
	cr6.compare<int32_t>(r26.s32, r23.s32, xer);
	// blt cr6,0x826b5e30
	if (cr6.lt) goto loc_826B5E30;
loc_826B5E84:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bl 0x826b9148
	sub_826B9148(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826b5edc
	if (!cr6.gt) goto loc_826B5EDC;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r10,r24
	r28.s64 = r24.s64 - ctx.r10.s64;
loc_826B5EB8:
	// lwzu r11,16(r28)
	ea = 16 + r28.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// add r3,r27,r31
	ctx.r3.u64 = r27.u64 + r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// bgt 0x826b5eb8
	if (cr0.gt) goto loc_826B5EB8;
loc_826B5EDC:
	// rlwinm r11,r26,4,0,27
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r31,r11,r24
	r31.s64 = r24.s64 - r11.s64;
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r21,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r21.u32);
loc_826B5EFC:
	// subf r10,r26,r23
	ctx.r10.s64 = r23.s64 - r26.s64;
	// subf r11,r26,r22
	r11.s64 = r22.s64 - r26.s64;
	// addi r23,r10,1
	r23.s64 = ctx.r10.s64 + 1;
	// addi r22,r11,1
	r22.s64 = r11.s64 + 1;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bgt cr6,0x826b5d3c
	if (cr6.gt) goto loc_826B5D3C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826B5F18"))) PPC_WEAK_FUNC(sub_826B5F18);
PPC_FUNC_IMPL(__imp__sub_826B5F18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_826B5F1C"))) PPC_WEAK_FUNC(sub_826B5F1C);
PPC_FUNC_IMPL(__imp__sub_826B5F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B5F20"))) PPC_WEAK_FUNC(sub_826B5F20);
PPC_FUNC_IMPL(__imp__sub_826B5F20) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b6098
	if (cr6.eq) goto loc_826B6098;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b6098
	if (cr6.eq) goto loc_826B6098;
	// addi r11,r27,-5
	r11.s64 = r27.s64 + -5;
	// lfd f31,0(r28)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// lfd f30,0(r3)
	f30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x826b60c8
	if (cr6.gt) goto loc_826B60C8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x826b5fc8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5FC8;
	// bdzf 4*cr6+eq,0x826b5fe8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B5FE8;
	// bdzf 4*cr6+eq,0x826b6008
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B6008;
	// bdzf 4*cr6+eq,0x826b6028
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B6028;
	// bdzf 4*cr6+eq,0x826b6050
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826B6050;
	// bne cr6,0x826b6078
	if (!cr6.eq) goto loc_826B6078;
	// li r11,3
	r11.s64 = 3;
	// fadd f0,f30,f31
	f0.f64 = f30.f64 + f31.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B5FC8:
	// li r11,3
	r11.s64 = 3;
	// fsub f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 - f30.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B5FE8:
	// li r11,3
	r11.s64 = 3;
	// fmul f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64 * f31.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B6008:
	// li r11,3
	r11.s64 = 3;
	// fdiv f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / f30.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B6028:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// fnmsub f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = -(ctx.f1.f64 * f30.f64 - f31.f64);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B6050:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B6078:
	// li r11,3
	r11.s64 = 3;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 ^ 0x8000000000000000;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_826B6098:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b57c8
	sub_826B57C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b60c8
	if (!cr6.eq) goto loc_826B60C8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b4ee0
	sub_826B4EE0(ctx, base);
loc_826B60C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_826B60D4"))) PPC_WEAK_FUNC(sub_826B60D4);
PPC_FUNC_IMPL(__imp__sub_826B60D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826B60D8"))) PPC_WEAK_FUNC(sub_826B60D8);
PPC_FUNC_IMPL(__imp__sub_826B60D8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfd f31,16944(r7)
	f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16944);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r5,r11,1892
	ctx.r5.s64 = r11.s64 + 1892;
	// addi r4,r10,1860
	ctx.r4.s64 = ctx.r10.s64 + 1860;
	// addi r3,r9,1820
	ctx.r3.s64 = ctx.r9.s64 + 1820;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r17,1
	r17.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r18,0
	r18.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r19,5
	r19.s64 = 5;
	// li r20,3
	r20.s64 = 3;
	// ori r21,r6,65535
	r21.u64 = ctx.r6.u64 | 65535;
	// li r14,6
	r14.s64 = 6;
	// addi r15,r8,1804
	r15.s64 = ctx.r8.s64 + 1804;
	// addi r16,r7,784
	r16.s64 = ctx.r7.s64 + 784;
loc_826B6150:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r24,24(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r22,0(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,16(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// lwz r23,8(r9)
	r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_826B6168:
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_826B616C:
	// lbz r11,56(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 56);
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b61bc
	if (cr6.eq) goto loc_826B61BC;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,64(r29)
	PPC_STORE_U32(r29.u32 + 64, ctx.r10.u32);
	// beq 0x826b61a0
	if (cr0.eq) goto loc_826B61A0;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b61bc
	if (cr6.eq) goto loc_826B61BC;
loc_826B61A0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5230
	sub_826B5230(ctx, base);
	// lbz r11,6(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x826b7264
	if (cr6.eq) goto loc_826B7264;
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_826B61BC:
	// rlwinm r28,r30,30,20,27
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0xFF0;
	// clrlwi r11,r30,26
	r11.u64 = r30.u32 & 0x3F;
	// rlwinm r27,r30,26,24,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0xFF;
	// add r31,r28,r25
	r31.u64 = r28.u64 + r25.u64;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bgt cr6,0x826b616c
	if (cr6.gt) goto loc_826B616C;
	// lis r12,-32149
	r12.s64 = -2106916864;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25068
	r12.s64 = r12.s64 + 25068;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826B6284;
	case 1:
		goto loc_826B62A0;
	case 2:
		goto loc_826B62BC;
	case 3:
		goto loc_826B62DC;
	case 4:
		goto loc_826B62F8;
	case 5:
		goto loc_826B6320;
	case 6:
		goto loc_826B634C;
	case 7:
		goto loc_826B638C;
	case 8:
		goto loc_826B63B8;
	case 9:
		goto loc_826B6418;
	case 10:
		goto loc_826B6480;
	case 11:
		goto loc_826B64D0;
	case 12:
		goto loc_826B652C;
	case 13:
		goto loc_826B65BC;
	case 14:
		goto loc_826B664C;
	case 15:
		goto loc_826B66DC;
	case 16:
		goto loc_826B676C;
	case 17:
		goto loc_826B6804;
	case 18:
		goto loc_826B6894;
	case 19:
		goto loc_826B68D8;
	case 20:
		goto loc_826B6920;
	case 21:
		goto loc_826B69BC;
	case 22:
		goto loc_826B6A1C;
	case 23:
		goto loc_826B6A30;
	case 24:
		goto loc_826B6AC8;
	case 25:
		goto loc_826B6B40;
	case 26:
		goto loc_826B6BB8;
	case 27:
		goto loc_826B6C0C;
	case 28:
		goto loc_826B6C78;
	case 29:
		goto loc_826B6CD0;
	case 30:
		goto loc_826B71F8;
	case 31:
		goto loc_826B6D0C;
	case 32:
		goto loc_826B6D58;
	case 33:
		goto loc_826B6E0C;
	case 34:
		goto loc_826B6EAC;
	case 35:
		goto loc_826B6FA0;
	case 36:
		goto loc_826B6FB0;
	case 37:
		goto loc_826B7060;
	default:
		__builtin_unreachable();
	}
	// lwz r19,25220(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25220);
	// lwz r19,25248(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25248);
	// lwz r19,25276(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25276);
	// lwz r19,25308(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25308);
	// lwz r19,25336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25336);
	// lwz r19,25376(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25376);
	// lwz r19,25420(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25420);
	// lwz r19,25484(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25484);
	// lwz r19,25528(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25528);
	// lwz r19,25624(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r19,25728(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25728);
	// lwz r19,25808(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25808);
	// lwz r19,25900(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 25900);
	// lwz r19,26044(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26044);
	// lwz r19,26188(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26188);
	// lwz r19,26332(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26332);
	// lwz r19,26476(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26476);
	// lwz r19,26628(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26628);
	// lwz r19,26772(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26772);
	// lwz r19,26840(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26840);
	// lwz r19,26912(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 26912);
	// lwz r19,27068(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27068);
	// lwz r19,27164(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27164);
	// lwz r19,27184(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27184);
	// lwz r19,27336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27336);
	// lwz r19,27456(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27456);
	// lwz r19,27576(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27576);
	// lwz r19,27660(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27660);
	// lwz r19,27768(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27768);
	// lwz r19,27856(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27856);
	// lwz r19,29176(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 29176);
	// lwz r19,27916(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27916);
	// lwz r19,27992(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27992);
	// lwz r19,28172(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 28172);
	// lwz r19,28332(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 28332);
	// lwz r19,28576(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 28576);
	// lwz r19,28592(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 28592);
	// lwz r19,28768(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 28768);
loc_826B6284:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B62A0:
	// rlwinm r11,r30,22,10,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0x3FFFF0;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B62BC:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// stw r17,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r17.u32);
	// rlwinm r10,r30,0,9,17
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FC000;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b616c
	if (cr6.eq) goto loc_826B616C;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B62DC:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_826B62E4:
	// stw r18,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r18.u32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x826b62e4
	if (!cr6.lt) goto loc_826B62E4;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B62F8:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6320:
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// rlwinm r11,r30,22,10,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0x3FFFF0;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826b54a8
	sub_826B54A8(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B634C:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b636c
	if (cr6.eq) goto loc_826B636C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6374
	goto loc_826B6374;
loc_826B636C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6374:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b54a8
	sub_826B54A8(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B638C:
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// rlwinm r11,r30,22,10,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0x3FFFF0;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x826b5660
	sub_826B5660(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B63B8:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r9,r11,5
	ctx.r9.s64 = r11.s64 + 5;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r22
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + r22.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x826b616c
	if (cr6.lt) goto loc_826B616C;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,5(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b616c
	if (cr6.eq) goto loc_826B616C;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b616c
	if (cr6.eq) goto loc_826B616C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3940
	sub_826B3940(ctx, base);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6418:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6438
	if (cr6.eq) goto loc_826B6438;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b6440
	goto loc_826B6440;
loc_826B6438:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B6440:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6468
	if (cr6.eq) goto loc_826B6468;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5660
	sub_826B5660(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6468:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5660
	sub_826B5660(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6480:
	// rlwinm r3,r30,18,23,31
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// bl 0x826af6f8
	sub_826AF6F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r3,r30,9,23,31
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// bl 0x826af6f8
	sub_826AF6F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826b7a60
	sub_826B7A60(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r19,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r19.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b6168
	if (cr6.lt) goto loc_826B6168;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3668
	sub_826B3668(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B64D0:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r9,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// beq cr6,0x826b6514
	if (cr6.eq) goto loc_826B6514;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b54a8
	sub_826B54A8(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6514:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b54a8
	sub_826B54A8(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B652C:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6548
	if (cr6.eq) goto loc_826B6548;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6550
	goto loc_826B6550;
loc_826B6548:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6550:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b656c
	if (cr6.eq) goto loc_826B656C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b6574
	goto loc_826B6574;
loc_826B656C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B6574:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b65a4
	if (!cr6.eq) goto loc_826B65A4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b65a4
	if (!cr6.eq) goto loc_826B65A4;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// fadd f12,f0,f13
	ctx.f12.f64 = f0.f64 + ctx.f13.f64;
	// stfd f12,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f12.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B65A4:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B65BC:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b65d8
	if (cr6.eq) goto loc_826B65D8;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b65e0
	goto loc_826B65E0;
loc_826B65D8:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B65E0:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b65fc
	if (cr6.eq) goto loc_826B65FC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b6604
	goto loc_826B6604;
loc_826B65FC:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B6604:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b6634
	if (!cr6.eq) goto loc_826B6634;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b6634
	if (!cr6.eq) goto loc_826B6634;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// fsub f12,f0,f13
	ctx.f12.f64 = f0.f64 - ctx.f13.f64;
	// stfd f12,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f12.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6634:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B664C:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6668
	if (cr6.eq) goto loc_826B6668;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6670
	goto loc_826B6670;
loc_826B6668:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6670:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b668c
	if (cr6.eq) goto loc_826B668C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b6694
	goto loc_826B6694;
loc_826B668C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B6694:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b66c4
	if (!cr6.eq) goto loc_826B66C4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b66c4
	if (!cr6.eq) goto loc_826B66C4;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// fmul f12,f0,f13
	ctx.f12.f64 = f0.f64 * ctx.f13.f64;
	// stfd f12,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f12.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B66C4:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B66DC:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b66f8
	if (cr6.eq) goto loc_826B66F8;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6700
	goto loc_826B6700;
loc_826B66F8:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6700:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b671c
	if (cr6.eq) goto loc_826B671C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b6724
	goto loc_826B6724;
loc_826B671C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B6724:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b6754
	if (!cr6.eq) goto loc_826B6754;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b6754
	if (!cr6.eq) goto loc_826B6754;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// fdiv f12,f0,f13
	ctx.f12.f64 = f0.f64 / ctx.f13.f64;
	// stfd f12,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f12.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6754:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B676C:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6788
	if (cr6.eq) goto loc_826B6788;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6790
	goto loc_826B6790;
loc_826B6788:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6790:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b67ac
	if (cr6.eq) goto loc_826B67AC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b67b4
	goto loc_826B67B4;
loc_826B67AC:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B67B4:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b67ec
	if (!cr6.eq) goto loc_826B67EC;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b67ec
	if (!cr6.eq) goto loc_826B67EC;
	// lfd f30,0(r5)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f29,0(r6)
	f29.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fdiv f1,f30,f29
	ctx.f1.f64 = f30.f64 / f29.f64;
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// fnmsub f0,f1,f29,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = -(ctx.f1.f64 * f29.f64 - f30.f64);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B67EC:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6804:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6820
	if (cr6.eq) goto loc_826B6820;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6828
	goto loc_826B6828;
loc_826B6820:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6828:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6844
	if (cr6.eq) goto loc_826B6844;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x826b684c
	goto loc_826B684C;
loc_826B6844:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_826B684C:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b687c
	if (!cr6.eq) goto loc_826B687C;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b687c
	if (!cr6.eq) goto loc_826B687C;
	// lfd f1,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f2,0(r6)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B687C:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6894:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b68bc
	if (!cr6.eq) goto loc_826B68BC;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfd f13,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B68BC:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5f20
	sub_826B5F20(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B68D8:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r10,r11,r25
	ctx.r10.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b6910
	if (cr6.eq) goto loc_826B6910;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826b6900
	if (!cr6.eq) goto loc_826B6900;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b6910
	if (cr6.eq) goto loc_826B6910;
loc_826B6900:
	// mr r11,r18
	r11.u64 = r18.u64;
	// stw r18,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r18.u32);
	// stw r17,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r17.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6910:
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r17,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r17.u32);
	// stw r17,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r17.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6920:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x826b6998
	if (cr6.eq) goto loc_826B6998;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x826b6974
	if (cr6.eq) goto loc_826B6974;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b57c8
	sub_826B57C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b6168
	if (!cr6.eq) goto loc_826B6168;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4df0
	sub_826B4DF0(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6974:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826b8048
	sub_826B8048(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6998:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B69BC:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// rlwinm r11,r30,18,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// rlwinm r31,r30,9,23,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x826b5d18
	sub_826B5D18(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x826b69f8
	if (cr6.lt) goto loc_826B69F8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3668
	sub_826B3668(ctx, base);
loc_826B69F8:
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r28,r25
	ctx.r10.u64 = r28.u64 + r25.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// stdx r9,r28,r25
	PPC_STORE_U64(r28.u32 + r25.u32, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6A1C:
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// subf r10,r21,r11
	ctx.r10.s64 = r11.s64 - r21.s64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6A30:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6a4c
	if (cr6.eq) goto loc_826B6A4C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// b 0x826b6a54
	goto loc_826B6A54;
loc_826B6A4C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
loc_826B6A54:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6a70
	if (cr6.eq) goto loc_826B6A70;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6a78
	goto loc_826B6A78;
loc_826B6A70:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6A78:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826b6aa0
	if (!cr6.eq) goto loc_826B6AA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5c08
	sub_826B5C08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r17
	r11.u64 = r17.u64;
	// bne cr6,0x826b6aa4
	if (!cr6.eq) goto loc_826B6AA4;
loc_826B6AA0:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_826B6AA4:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bne cr6,0x826b6bb0
	if (!cr6.eq) goto loc_826B6BB0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r9,r21,r10
	ctx.r9.s64 = ctx.r10.s64 - r21.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6AC8:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6ae8
	if (cr6.eq) goto loc_826B6AE8;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6af0
	goto loc_826B6AF0;
loc_826B6AE8:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6AF0:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6b0c
	if (cr6.eq) goto loc_826B6B0C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// b 0x826b6b14
	goto loc_826B6B14;
loc_826B6B0C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
loc_826B6B14:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5a88
	sub_826B5A88(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// bne cr6,0x826b6bb0
	if (!cr6.eq) goto loc_826B6BB0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r9,r21,r10
	ctx.r9.s64 = ctx.r10.s64 - r21.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6B40:
	// rlwinm r10,r30,18,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x100;
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6b60
	if (cr6.eq) goto loc_826B6B60;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x826b6b68
	goto loc_826B6B68;
loc_826B6B60:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_826B6B68:
	// rlwinm r10,r30,9,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x100;
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6b84
	if (cr6.eq) goto loc_826B6B84;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// b 0x826b6b8c
	goto loc_826B6B8C;
loc_826B6B84:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
loc_826B6B8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b5b30
	sub_826B5B30(ctx, base);
	// cmpw cr6,r3,r27
	cr6.compare<int32_t>(ctx.r3.s32, r27.s32, xer);
	// bne cr6,0x826b6bb0
	if (!cr6.eq) goto loc_826B6BB0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r9,r21,r10
	ctx.r9.s64 = ctx.r10.s64 - r21.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_826B6BB0:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6BB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b6be0
	if (cr6.eq) goto loc_826B6BE0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826b6bd8
	if (!cr6.eq) goto loc_826B6BD8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b6be0
	if (cr6.eq) goto loc_826B6BE0;
loc_826B6BD8:
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x826b6be4
	goto loc_826B6BE4;
loc_826B6BE0:
	// mr r11,r17
	r11.u64 = r17.u64;
loc_826B6BE4:
	// rlwinm r10,r30,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x826b6c04
	if (cr6.eq) goto loc_826B6C04;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r9,r21,r10
	ctx.r9.s64 = ctx.r10.s64 - r21.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_826B6C04:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6C0C:
	// rlwinm r11,r30,13,19,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b6c3c
	if (cr6.eq) goto loc_826B6C3C;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x826b6c34
	if (!cr6.eq) goto loc_826B6C34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b6c3c
	if (cr6.eq) goto loc_826B6C3C;
loc_826B6C34:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x826b6c40
	goto loc_826B6C40;
loc_826B6C3C:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_826B6C40:
	// rlwinm r9,r30,18,23,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x826b6c70
	if (cr6.eq) goto loc_826B6C70;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// subf r6,r21,r7
	ctx.r6.s64 = ctx.r7.s64 - r21.s64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_826B6C70:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6C78:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// rlwinm r10,r30,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x826b6c98
	if (cr6.eq) goto loc_826B6C98;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_826B6C98:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b0c18
	sub_826B0C18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x826b7128
	if (cr6.lt) goto loc_826B7128;
	// bne cr6,0x826b726c
	if (!cr6.eq) goto loc_826B726C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b6168
	if (cr6.lt) goto loc_826B6168;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6CD0:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b6ce8
	if (cr6.eq) goto loc_826B6CE8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_826B6CE8:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b0c18
	sub_826B0C18(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x826b7138
	if (cr6.lt) goto loc_826B7138;
	// bne cr6,0x826b726c
	if (!cr6.eq) goto loc_826B726C;
	// b 0x826b6168
	goto loc_826B6168;
loc_826B6D0C:
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// lfd f12,0(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// lfd f13,16(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// fadd f0,f0,f12
	f0.f64 = f0.f64 + ctx.f12.f64;
	// ble cr6,0x826b6d2c
	if (!cr6.gt) goto loc_826B6D2C;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// b 0x826b6d30
	goto loc_826B6D30;
loc_826B6D2C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
loc_826B6D30:
	// bgt cr6,0x826b616c
	if (cr6.gt) goto loc_826B616C;
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// stfd f0,48(r31)
	PPC_STORE_U64(r31.u32 + 48, f0.u64);
	// subf r10,r21,r11
	ctx.r10.s64 = r11.s64 - r21.s64;
	// stw r20,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r20.u32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6D58:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b6d8c
	if (cr6.eq) goto loc_826B6D8C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b6d8c
	if (!cr6.eq) goto loc_826B6D8C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826b6ddc
	goto loc_826B6DDC;
loc_826B6D8C:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b6db4
	if (cr6.eq) goto loc_826B6DB4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b6db4
	if (!cr6.eq) goto loc_826B6DB4;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826b6ddc
	goto loc_826B6DDC;
loc_826B6DB4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b6de4
	if (cr6.eq) goto loc_826B6DE4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b50f0
	sub_826B50F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b6de4
	if (!cr6.eq) goto loc_826B6DE4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B6DDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B6DE4:
	// rlwinm r11,r30,18,14,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x3FFFF;
	// lfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// lfd f13,0(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// subf r10,r21,r11
	ctx.r10.s64 = r11.s64 - r21.s64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - f0.f64;
	// stfd f12,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f12.u64);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6E0C:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// rlwinm r5,r30,18,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r8,64(r31)
	PPC_STORE_U64(r31.u32 + 64, ctx.r8.u64);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r7,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r7.u32);
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r6,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r6.u64);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// bl 0x826b0eb0
	sub_826B0EB0(ctx, base);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r10,r27,3
	ctx.r10.s64 = r27.s64 + 3;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826b6ea4
	if (cr6.eq) goto loc_826B6EA4;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,-16(r11)
	PPC_STORE_U64(r11.u32 + -16, ctx.r10.u64);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r7,r8,18,14,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3FFFF;
	// subf r6,r21,r7
	ctx.r6.s64 = ctx.r7.s64 - r21.s64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_826B6EA4:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6EAC:
	// rlwinm r27,r30,9,23,31
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// rlwinm r11,r30,18,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x1FF;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x826b6ed8
	if (!cr6.eq) goto loc_826B6ED8;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - r31.s64;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// stw r7,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r7.u32);
loc_826B6ED8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b6ee8
	if (!cr6.eq) goto loc_826B6EE8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_826B6EE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x826b616c
	if (!cr6.eq) goto loc_826B616C;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,50
	r11.s64 = r11.s64 * 50;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r30,r11,-50
	r30.s64 = r11.s64 + -50;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x826b6f20
	if (!cr6.gt) goto loc_826B6F20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b82c0
	sub_826B82C0(ctx, base);
loc_826B6F20:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x826b616c
	if (!cr6.gt) goto loc_826B616C;
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_826B6F30:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b7e48
	sub_826B7E48(ctx, base);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x826b6f90
	if (cr6.lt) goto loc_826B6F90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b6f90
	if (cr6.eq) goto loc_826B6F90;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b6f90
	if (cr6.eq) goto loc_826B6F90;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3978
	sub_826B3978(ctx, base);
loc_826B6F90:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// bgt 0x826b6f30
	if (cr0.gt) goto loc_826B6F30;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6FA0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b8c30
	sub_826B8C30(ctx, base);
	// b 0x826b616c
	goto loc_826B616C;
loc_826B6FB0:
	// lwz r11,16(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// rlwinm r10,r30,20,12,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwzx r30,r10,r9
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbz r28,72(r30)
	r28.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b8a28
	sub_826B8A28(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// ble cr6,0x826b7034
	if (!cr6.gt) goto loc_826B7034;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_826B6FE8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x826b7010
	if (!cr6.eq) goto loc_826B7010;
	// rlwinm r11,r11,9,23,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1FF;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// b 0x826b7024
	goto loc_826B7024;
loc_826B7010:
	// rlwinm r11,r11,13,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1FF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// bl 0x826b8b08
	sub_826B8B08(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_826B7024:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bne 0x826b6fe8
	if (!cr0.eq) goto loc_826B6FE8;
loc_826B7034:
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r14,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r14.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b6168
	if (cr6.lt) goto loc_826B6168;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b3668
	sub_826B3668(ctx, base);
	// b 0x826b6168
	goto loc_826B6168;
loc_826B7060:
	// lwz r26,20(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lbz r7,73(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// subf r10,r7,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r7.s64;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x826b70d0
	if (!cr6.eq) goto loc_826B70D0;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r30,r27,4,0,27
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// bgt cr6,0x826b70bc
	if (cr6.gt) goto loc_826B70BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826B70BC:
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r11,r27
	r11.u64 = r27.u64;
	// add r31,r28,r25
	r31.u64 = r28.u64 + r25.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
loc_826B70D0:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b616c
	if (!cr6.gt) goto loc_826B616C;
	// neg r10,r27
	ctx.r10.s64 = -r27.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_826B70EC:
	// cmpw cr6,r8,r27
	cr6.compare<int32_t>(ctx.r8.s32, r27.s32, xer);
	// bge cr6,0x826b7110
	if (!cr6.lt) goto loc_826B7110;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r7.u64);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// b 0x826b7114
	goto loc_826B7114;
loc_826B7110:
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
loc_826B7114:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x826b70ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B70EC;
	// b 0x826b616c
	goto loc_826B616C;
loc_826B7128:
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// b 0x826b6150
	goto loc_826B6150;
loc_826B7138:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,104(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// addi r31,r11,-24
	r31.s64 = r11.s64 + -24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r28,-20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -20);
	// beq cr6,0x826b7160
	if (cr6.eq) goto loc_826B7160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b8c30
	sub_826B8C30(ctx, base);
loc_826B7160:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r8,r30,r11
	ctx.r8.s64 = r11.s64 - r30.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// bge cr6,0x826b71c4
	if (!cr6.lt) goto loc_826B71C4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
loc_826B7198:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stdx r7,r11,r28
	PPC_STORE_U64(r11.u32 + r28.u32, ctx.r7.u64);
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x826b7198
	if (cr6.lt) goto loc_826B7198;
loc_826B71C4:
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r8,r11,-24
	ctx.r8.s64 = r11.s64 + -24;
	// stw r8,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// b 0x826b6150
	goto loc_826B6150;
loc_826B71F8:
	// rlwinm r11,r30,9,23,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7214
	if (cr6.eq) goto loc_826B7214;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_826B7214:
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b722c
	if (cr6.eq) goto loc_826B722C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b8c30
	sub_826B8C30(ctx, base);
loc_826B722C:
	// stw r24,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b06d8
	sub_826B06D8(ctx, base);
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// beq 0x826b726c
	if (cr0.eq) goto loc_826B726C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b6150
	if (cr6.eq) goto loc_826B6150;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// b 0x826b6150
	goto loc_826B6150;
loc_826B7264:
	// addi r11,r24,-4
	r11.s64 = r24.s64 + -4;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
loc_826B726C:
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

__attribute__((alias("__imp__sub_826B727C"))) PPC_WEAK_FUNC(sub_826B727C);
PPC_FUNC_IMPL(__imp__sub_826B727C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826B7280"))) PPC_WEAK_FUNC(sub_826B7280);
PPC_FUNC_IMPL(__imp__sub_826B7280) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfd f1,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lfd f0,16944(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x826b729c
	if (!cr6.eq) goto loc_826B729C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_826B729C:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r11,24(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// divwu r6,r11,r7
	ctx.r6.u32 = r11.u32 / ctx.r7.u32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B72D8"))) PPC_WEAK_FUNC(sub_826B72D8);
PPC_FUNC_IMPL(__imp__sub_826B72D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x826b7358
	if (cr6.gt) goto loc_826B7358;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7330
	if (cr6.eq) goto loc_826B7330;
	// bdz 0x826b7358
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_826B7358;
	// bdnz 0x826b7304
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B7304;
	// lfd f1,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x826b7280
	sub_826B7280(ctx, base);
	return;
loc_826B7304:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r11,r6,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_826B7330:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rlwinm r11,r7,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_826B7358:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// divwu r6,r9,r7
	ctx.r6.u32 = ctx.r9.u32 / ctx.r7.u32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_826B7388"))) PPC_WEAK_FUNC(sub_826B7388);
PPC_FUNC_IMPL(__imp__sub_826B7388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B738C"))) PPC_WEAK_FUNC(sub_826B738C);
PPC_FUNC_IMPL(__imp__sub_826B738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7390"))) PPC_WEAK_FUNC(sub_826B7390);
PPC_FUNC_IMPL(__imp__sub_826B7390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b73c4
	if (!cr6.eq) goto loc_826B73C4;
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_826B73C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B73CC"))) PPC_WEAK_FUNC(sub_826B73CC);
PPC_FUNC_IMPL(__imp__sub_826B73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B73D0"))) PPC_WEAK_FUNC(sub_826B73D0);
PPC_FUNC_IMPL(__imp__sub_826B73D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b7400
	if (!cr6.eq) goto loc_826B7400;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_826B7400:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b7450
	if (!cr6.eq) goto loc_826B7450;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x826b7450
	if (!cr6.eq) goto loc_826B7450;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b7450
	if (!cr6.gt) goto loc_826B7450;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x826b7450
	if (cr6.gt) goto loc_826B7450;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_826B7450:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b72d8
	sub_826B72D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B7460:
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826af750
	sub_826AF750(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b74c8
	if (!cr6.eq) goto loc_826B74C8;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x826b74a0
	if (!cr6.eq) goto loc_826B74A0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x826b74a0
	if (cr6.lt) goto loc_826B74A0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b74c8
	if (cr6.eq) goto loc_826B74C8;
loc_826B74A0:
	// lwz r30,28(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b7460
	if (!cr6.eq) goto loc_826B7460;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,1952
	ctx.r4.s64 = r11.s64 + 1952;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_826B74C8:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// srawi r10,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B74E0"))) PPC_WEAK_FUNC(sub_826B74E0);
PPC_FUNC_IMPL(__imp__sub_826B74E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B74E4"))) PPC_WEAK_FUNC(sub_826B74E4);
PPC_FUNC_IMPL(__imp__sub_826B74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B74E8"))) PPC_WEAK_FUNC(sub_826B74E8);
PPC_FUNC_IMPL(__imp__sub_826B74E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826b73d0
	sub_826B73D0(ctx, base);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x826b7544
	if (!cr6.lt) goto loc_826B7544;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826B7524:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x826b75a4
	if (!cr6.eq) goto loc_826B75A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x826b7524
	if (cr6.lt) goto loc_826B7524;
loc_826B7544:
	// lbz r10,7(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x826b7588
	if (!cr6.lt) goto loc_826B7588;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_826B7568:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x826b75e8
	if (!cr6.eq) goto loc_826B75E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x826b7568
	if (cr6.lt) goto loc_826B7568;
loc_826B7588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B758C:
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
loc_826B75A4:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// b 0x826b758c
	goto loc_826B758C;
loc_826B75E8:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r7,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r7.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
}

__attribute__((alias("__imp__sub_826B7620"))) PPC_WEAK_FUNC(sub_826B7620);
PPC_FUNC_IMPL(__imp__sub_826B7620) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b758c
	// ERROR 826B758C
	return;
}

__attribute__((alias("__imp__sub_826B7624"))) PPC_WEAK_FUNC(sub_826B7624);
PPC_FUNC_IMPL(__imp__sub_826B7624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7628"))) PPC_WEAK_FUNC(sub_826B7628);
PPC_FUNC_IMPL(__imp__sub_826B7628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x826b7698
	if (!cr6.gt) goto loc_826B7698;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_826B764C:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826b7674
	if (!cr6.gt) goto loc_826B7674;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x826b7674
	if (!cr6.gt) goto loc_826B7674;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_826B7674:
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// beq cr6,0x826b7698
	if (cr6.eq) goto loc_826B7698;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// blt cr6,0x826b764c
	if (cr6.lt) goto loc_826B764C;
loc_826B7698:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_826B769C"))) PPC_WEAK_FUNC(sub_826B769C);
PPC_FUNC_IMPL(__imp__sub_826B769C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B76A0"))) PPC_WEAK_FUNC(sub_826B76A0);
PPC_FUNC_IMPL(__imp__sub_826B76A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b7730
	if (!cr6.eq) goto loc_826B7730;
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x826b7730
	if (!cr6.eq) goto loc_826B7730;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b7730
	if (!cr6.gt) goto loc_826B7730;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x826b7730
	if (cr6.gt) goto loc_826B7730;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// bl 0x826af720
	sub_826AF720(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B7730:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B7744"))) PPC_WEAK_FUNC(sub_826B7744);
PPC_FUNC_IMPL(__imp__sub_826B7744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7748"))) PPC_WEAK_FUNC(sub_826B7748);
PPC_FUNC_IMPL(__imp__sub_826B7748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_826B7768:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x826b778c
	if (!cr6.gt) goto loc_826B778C;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bgt cr6,0x826b77ec
	if (cr6.gt) goto loc_826B77EC;
	// b 0x826b7794
	goto loc_826B7794;
loc_826B778C:
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bgt cr6,0x826b77cc
	if (cr6.gt) goto loc_826B77CC;
loc_826B7794:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826B77B0:
	// lwz r10,-8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b77c0
	if (cr6.eq) goto loc_826B77C0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_826B77C0:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// bdnz 0x826b77b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B77B0;
loc_826B77CC:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(r31.s32, 26, xer);
	// ble cr6,0x826b7768
	if (!cr6.gt) goto loc_826B7768;
loc_826B77EC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_826B77F4"))) PPC_WEAK_FUNC(sub_826B77F4);
PPC_FUNC_IMPL(__imp__sub_826B77F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B77F8"))) PPC_WEAK_FUNC(sub_826B77F8);
PPC_FUNC_IMPL(__imp__sub_826B77F8) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// slw. r31,r10,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x826b78c8
	if (cr0.eq) goto loc_826B78C8;
	// rlwinm r30,r31,5,0,26
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r24,1024
	r24.s64 = 67108864;
loc_826B7830:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b78c0
	if (cr6.eq) goto loc_826B78C0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x826b78b4
	if (!cr6.eq) goto loc_826B78B4;
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x826b78b4
	if (!cr6.eq) goto loc_826B78B4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b78b4
	if (!cr6.gt) goto loc_826B78B4;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// bgt cr6,0x826b78b4
	if (cr6.gt) goto loc_826B78B4;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// bl 0x826af720
	sub_826AF720(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// b 0x826b78b8
	goto loc_826B78B8;
loc_826B78B4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_826B78B8:
	// add r27,r9,r27
	r27.u64 = ctx.r9.u64 + r27.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_826B78C0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x826b7830
	if (!cr6.eq) goto loc_826B7830;
loc_826B78C8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826B78DC"))) PPC_WEAK_FUNC(sub_826B78DC);
PPC_FUNC_IMPL(__imp__sub_826B78DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826B78E0"))) PPC_WEAK_FUNC(sub_826B78E0);
PPC_FUNC_IMPL(__imp__sub_826B78E0) {
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
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826b7928
	if (cr6.gt) goto loc_826B7928;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b792c
	goto loc_826B792C;
loc_826B7928:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B792C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x826b7960
	if (!cr6.lt) goto loc_826B7960;
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826B794C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bdnz 0x826b794c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B794C;
loc_826B7960:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
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

__attribute__((alias("__imp__sub_826B7978"))) PPC_WEAK_FUNC(sub_826B7978);
PPC_FUNC_IMPL(__imp__sub_826B7978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B797C"))) PPC_WEAK_FUNC(sub_826B797C);
PPC_FUNC_IMPL(__imp__sub_826B797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7980"))) PPC_WEAK_FUNC(sub_826B7980);
PPC_FUNC_IMPL(__imp__sub_826B7980) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826b79b4
	if (!cr6.eq) goto loc_826B79B4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,1920
	ctx.r10.s64 = r11.s64 + 1920;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// b 0x826b7a44
	goto loc_826B7A44;
loc_826B79B4:
	// addi r3,r30,-1
	ctx.r3.s64 = r30.s64 + -1;
	// bl 0x826af720
	sub_826AF720(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r28,26
	cr6.compare<int32_t>(r28.s32, 26, xer);
	// ble cr6,0x826b79d8
	if (!cr6.gt) goto loc_826B79D8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,1976
	ctx.r4.s64 = r11.s64 + 1976;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B79D8:
	// li r11,1
	r11.s64 = 1;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// slw r30,r11,r28
	r30.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826b7a0c
	if (cr6.gt) goto loc_826B7A0C;
	// rlwinm r6,r30,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b7a10
	goto loc_826B7A10;
loc_826B7A0C:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B7A10:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// ble cr6,0x826b7a44
	if (!cr6.gt) goto loc_826B7A44;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826B7A28:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x826b7a28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B7A28;
loc_826B7A44:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r28,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r28.u8);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B7A5C"))) PPC_WEAK_FUNC(sub_826B7A5C);
PPC_FUNC_IMPL(__imp__sub_826B7A5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B7A60"))) PPC_WEAK_FUNC(sub_826B7A60);
PPC_FUNC_IMPL(__imp__sub_826B7A60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x826b39a0
	sub_826B39A0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,1920
	ctx.r9.s64 = ctx.r10.s64 + 1920;
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r8,6(r28)
	PPC_STORE_U8(r28.u32 + 6, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
	// stb r11,7(r28)
	PPC_STORE_U8(r28.u32 + 7, r11.u8);
	// bl 0x826b78e0
	sub_826B78E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b7980
	sub_826B7980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B7AEC"))) PPC_WEAK_FUNC(sub_826B7AEC);
PPC_FUNC_IMPL(__imp__sub_826B7AEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B7AF0"))) PPC_WEAK_FUNC(sub_826B7AF0);
PPC_FUNC_IMPL(__imp__sub_826B7AF0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r10,r11,1920
	ctx.r10.s64 = r11.s64 + 1920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b7b38
	if (cr6.eq) goto loc_826B7B38;
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// slw r9,r10,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
loc_826B7B38:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
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

__attribute__((alias("__imp__sub_826B7B78"))) PPC_WEAK_FUNC(sub_826B7B78);
PPC_FUNC_IMPL(__imp__sub_826B7B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7B7C"))) PPC_WEAK_FUNC(sub_826B7B7C);
PPC_FUNC_IMPL(__imp__sub_826B7B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7B80"))) PPC_WEAK_FUNC(sub_826B7B80);
PPC_FUNC_IMPL(__imp__sub_826B7B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x826b7bbc
	if (!cr6.gt) goto loc_826B7BBC;
loc_826B7B94:
	// addi r3,r10,-32
	ctx.r3.s64 = ctx.r10.s64 + -32;
	// stw r3,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x826b7b94
	if (cr6.gt) goto loc_826B7B94;
loc_826B7BBC:
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_826B7BC8"))) PPC_WEAK_FUNC(sub_826B7BC8);
PPC_FUNC_IMPL(__imp__sub_826B7BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7BCC"))) PPC_WEAK_FUNC(sub_826B7BCC);
PPC_FUNC_IMPL(__imp__sub_826B7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7BD0"))) PPC_WEAK_FUNC(sub_826B7BD0);
PPC_FUNC_IMPL(__imp__sub_826B7BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x826b7bf4
	if (!cr6.lt) goto loc_826B7BF4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// blr 
	return;
loc_826B7BF4:
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lfd f13,16944(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x826b7c20
	if (!cr6.eq) goto loc_826B7C20;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x826b7c58
	goto loc_826B7C58;
loc_826B7C20:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// divwu r6,r11,r7
	ctx.r6.u32 = r11.u32 / ctx.r7.u32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_826B7C58:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b7c80
	if (!cr6.eq) goto loc_826B7C80;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_826B7C80:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b7c58
	if (!cr6.eq) goto loc_826B7C58;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,784
	ctx.r3.s64 = r11.s64 + 784;
}

__attribute__((alias("__imp__sub_826B7C94"))) PPC_WEAK_FUNC(sub_826B7C94);
PPC_FUNC_IMPL(__imp__sub_826B7C94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7C98"))) PPC_WEAK_FUNC(sub_826B7C98);
PPC_FUNC_IMPL(__imp__sub_826B7C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// rlwinm r11,r7,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_826B7CBC:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b7cd4
	if (!cr6.eq) goto loc_826B7CD4;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_826B7CD4:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b7cbc
	if (!cr6.eq) goto loc_826B7CBC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,784
	ctx.r3.s64 = r11.s64 + 784;
}

__attribute__((alias("__imp__sub_826B7CE8"))) PPC_WEAK_FUNC(sub_826B7CE8);
PPC_FUNC_IMPL(__imp__sub_826B7CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7CEC"))) PPC_WEAK_FUNC(sub_826B7CEC);
PPC_FUNC_IMPL(__imp__sub_826B7CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7CF0"))) PPC_WEAK_FUNC(sub_826B7CF0);
PPC_FUNC_IMPL(__imp__sub_826B7CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7d8c
	if (cr6.eq) goto loc_826B7D8C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b7d30
	if (cr6.eq) goto loc_826B7D30;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b7d60
	if (!cr6.eq) goto loc_826B7D60;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x826b7c98
	sub_826B7C98(ctx, base);
	// b 0x826b7d94
	goto loc_826B7D94;
loc_826B7D30:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bne cr6,0x826b7d60
	if (!cr6.eq) goto loc_826B7D60;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// b 0x826b7d94
	goto loc_826B7D94;
loc_826B7D60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b72d8
	sub_826B72D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826B7D6C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826af750
	sub_826AF750(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b7dac
	if (!cr6.eq) goto loc_826B7DAC;
	// lwz r31,28(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826b7d6c
	if (!cr6.eq) goto loc_826B7D6C;
loc_826B7D8C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,784
	ctx.r3.s64 = r11.s64 + 784;
loc_826B7D94:
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
loc_826B7DAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
}

__attribute__((alias("__imp__sub_826B7DB0"))) PPC_WEAK_FUNC(sub_826B7DB0);
PPC_FUNC_IMPL(__imp__sub_826B7DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b7d94
	// ERROR 826B7D94
	return;
}

__attribute__((alias("__imp__sub_826B7DB4"))) PPC_WEAK_FUNC(sub_826B7DB4);
PPC_FUNC_IMPL(__imp__sub_826B7DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7DB8"))) PPC_WEAK_FUNC(sub_826B7DB8);
PPC_FUNC_IMPL(__imp__sub_826B7DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826b7cf0
	sub_826B7CF0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,784
	ctx.r10.s64 = r11.s64 + 784;
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b7e40
	if (!cr6.eq) goto loc_826B7E40;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b7e0c
	if (!cr6.eq) goto loc_826B7E0C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,2012
	ctx.r4.s64 = r11.s64 + 2012;
	// b 0x826b7e28
	goto loc_826B7E28;
loc_826B7E0C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b7e30
	if (!cr6.eq) goto loc_826B7E30;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x826b7e30
	if (cr6.eq) goto loc_826B7E30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,1992
	ctx.r4.s64 = r11.s64 + 1992;
loc_826B7E28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B7E30:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b83a8
	sub_826B83A8(ctx, base);
loc_826B7E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B7E44"))) PPC_WEAK_FUNC(sub_826B7E44);
PPC_FUNC_IMPL(__imp__sub_826B7E44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B7E48"))) PPC_WEAK_FUNC(sub_826B7E48);
PPC_FUNC_IMPL(__imp__sub_826B7E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,784
	ctx.r10.s64 = r11.s64 + 784;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b7ea8
	if (!cr6.eq) goto loc_826B7EA8;
	// extsw r11,r30
	r11.s64 = r30.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b83a8
	sub_826B83A8(ctx, base);
loc_826B7EA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B7EAC"))) PPC_WEAK_FUNC(sub_826B7EAC);
PPC_FUNC_IMPL(__imp__sub_826B7EAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B7EB0"))) PPC_WEAK_FUNC(sub_826B7EB0);
PPC_FUNC_IMPL(__imp__sub_826B7EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfd f13,16944(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// li r31,1
	r31.s64 = 1;
	// ori r8,r9,65533
	ctx.r8.u64 = ctx.r9.u64 | 65533;
	// addi r7,r11,784
	ctx.r7.s64 = r11.s64 + 784;
loc_826B7EE8:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x826b7f08
	if (!cr6.lt) goto loc_826B7F08;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// b 0x826b7f98
	goto loc_826B7F98;
loc_826B7F08:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x826b7f2c
	if (!cr6.eq) goto loc_826B7F2C;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// b 0x826b7f60
	goto loc_826B7F60;
loc_826B7F2C:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r9,r31,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// divwu r4,r11,r5
	ctx.r4.u32 = r11.u32 / ctx.r5.u32;
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_826B7F60:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x826b7f88
	if (!cr6.eq) goto loc_826B7F88;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x826b7f98
	if (cr6.eq) goto loc_826B7F98;
loc_826B7F88:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b7f60
	if (!cr6.eq) goto loc_826B7F60;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_826B7F98:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7ff4
	if (cr6.eq) goto loc_826B7FF4;
	// mr r28,r29
	r28.u64 = r29.u64;
	// rlwinm r29,r29,1,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// ble cr6,0x826b7ee8
	if (!cr6.gt) goto loc_826B7EE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7fe8
	if (cr6.eq) goto loc_826B7FE8;
loc_826B7FCC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b7fcc
	if (!cr6.eq) goto loc_826B7FCC;
loc_826B7FE8:
	// addi r3,r31,-1
	ctx.r3.s64 = r31.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_826B7FF4:
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x826b8038
	if (!cr6.gt) goto loc_826B8038;
loc_826B8000:
	// add r11,r28,r29
	r11.u64 = r28.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b8028
	if (!cr6.eq) goto loc_826B8028;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x826b802c
	goto loc_826B802C;
loc_826B8028:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_826B802C:
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x826b8000
	if (cr6.gt) goto loc_826B8000;
loc_826B8038:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B8040"))) PPC_WEAK_FUNC(sub_826B8040);
PPC_FUNC_IMPL(__imp__sub_826B8040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B8044"))) PPC_WEAK_FUNC(sub_826B8044);
PPC_FUNC_IMPL(__imp__sub_826B8044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8048"))) PPC_WEAK_FUNC(sub_826B8048);
PPC_FUNC_IMPL(__imp__sub_826B8048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b80b0
	if (cr6.eq) goto loc_826B80B0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b80b0
	if (!cr6.eq) goto loc_826B80B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// ble cr6,0x826b80ac
	if (!cr6.gt) goto loc_826B80AC;
loc_826B8078:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x826b809c
	if (!cr6.eq) goto loc_826B809C;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x826b80a0
	goto loc_826B80A0;
loc_826B809C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_826B80A0:
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x826b8078
	if (cr6.gt) goto loc_826B8078;
loc_826B80AC:
	// blr 
	return;
loc_826B80B0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,1920
	ctx.r9.s64 = r11.s64 + 1920;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b80cc
	if (!cr6.eq) {
		sub_826B80CC(ctx, base);
		return;
	}
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B80CC"))) PPC_WEAK_FUNC(sub_826B80CC);
PPC_FUNC_IMPL(__imp__sub_826B80CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b7eb0
	sub_826B7EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B80D0"))) PPC_WEAK_FUNC(sub_826B80D0);
PPC_FUNC_IMPL(__imp__sub_826B80D0) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,28(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lbz r21,7(r4)
	r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r19,16(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r26
	cr6.compare<int32_t>(ctx.r5.s32, r26.s32, xer);
	// ble cr6,0x826b8104
	if (!cr6.gt) goto loc_826B8104;
	// bl 0x826b78e0
	sub_826B78E0(ctx, base);
loc_826B8104:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b7980
	sub_826B7980(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// addi r20,r11,784
	r20.s64 = r11.s64 + 784;
	// bge cr6,0x826b81e0
	if (!cr6.lt) goto loc_826B81E0;
	// addi r23,r31,1
	r23.s64 = r31.s64 + 1;
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// rlwinm r24,r31,4,0,27
	r24.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// subf r27,r31,r26
	r27.s64 = r26.s64 - r31.s64;
	// li r25,3
	r25.s64 = 3;
loc_826B8140:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b81a0
	if (cr6.eq) goto loc_826B81A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b7bd0
	sub_826B7BD0(ctx, base);
	// cmplw cr6,r3,r20
	cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, xer);
	// bne cr6,0x826b8190
	if (!cr6.eq) goto loc_826B8190;
	// extsw r11,r29
	r11.s64 = r29.s32;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b83a8
	sub_826B83A8(ctx, base);
loc_826B8190:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_826B81A0:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x826b8140
	if (!cr0.eq) goto loc_826B8140;
	// lis r11,4095
	r11.s64 = 268369920;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, xer);
	// bgt cr6,0x826b81d8
	if (cr6.gt) goto loc_826B81D8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b81dc
	goto loc_826B81DC;
loc_826B81D8:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B81DC:
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_826B81E0:
	// li r11,1
	r11.s64 = 1;
	// slw r25,r11,r21
	r25.u64 = r21.u8 & 0x20 ? 0 : (r11.u32 << (r21.u8 & 0x3F));
	// addic. r29,r25,-1
	xer.ca = r25.u32 > 0;
	r29.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x826b8294
	if (cr0.lt) goto loc_826B8294;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r11,r19
	r11.u64 = r11.u64 + r19.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r10,1992
	r27.s64 = ctx.r10.s64 + 1992;
	// addi r26,r11,2012
	r26.s64 = r11.s64 + 2012;
loc_826B8210:
	// lwz r11,-8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8288
	if (cr6.eq) goto loc_826B8288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b7cf0
	sub_826B7CF0(ctx, base);
	// stb r28,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r28.u8);
	// cmplw cr6,r3,r20
	cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, xer);
	// bne cr6,0x826b8278
	if (!cr6.eq) goto loc_826B8278;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b8248
	if (!cr6.eq) goto loc_826B8248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x826b8260
	goto loc_826B8260;
loc_826B8248:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826b8268
	if (!cr6.eq) goto loc_826B8268;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x826b8268
	if (cr6.eq) goto loc_826B8268;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826B8260:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
loc_826B8268:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b83a8
	sub_826B83A8(ctx, base);
loc_826B8278:
	// ld r11,-16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_826B8288:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-32
	r31.s64 = r31.s64 + -32;
	// bge 0x826b8210
	if (!cr0.lt) goto loc_826B8210;
loc_826B8294:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,1920
	ctx.r10.s64 = r11.s64 + 1920;
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b82b8
	if (cr6.eq) goto loc_826B82B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r25,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
loc_826B82B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_826B82BC"))) PPC_WEAK_FUNC(sub_826B82BC);
PPC_FUNC_IMPL(__imp__sub_826B82BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_826B82C0"))) PPC_WEAK_FUNC(sub_826B82C0);
PPC_FUNC_IMPL(__imp__sub_826B82C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r9,r11,1920
	ctx.r9.s64 = r11.s64 + 1920;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b82dc
	if (!cr6.eq) goto loc_826B82DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x826b82e8
	sub_826B82E8(ctx, base);
	return;
loc_826B82DC:
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
}

__attribute__((alias("__imp__sub_826B82E8"))) PPC_WEAK_FUNC(sub_826B82E8);
PPC_FUNC_IMPL(__imp__sub_826B82E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b80d0
	sub_826B80D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B82EC"))) PPC_WEAK_FUNC(sub_826B82EC);
PPC_FUNC_IMPL(__imp__sub_826B82EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B82F0"))) PPC_WEAK_FUNC(sub_826B82F0);
PPC_FUNC_IMPL(__imp__sub_826B82F0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r7,24192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
loc_826B8324:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x826b8324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B8324;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b7748
	sub_826B7748(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// bl 0x826b77f8
	sub_826B77F8(ctx, base);
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b76a0
	sub_826B76A0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826b7628
	sub_826B7628(ctx, base);
	// subf r11,r3,r28
	r11.s64 = r28.s64 - ctx.r3.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b80d0
	sub_826B80D0(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_826B83A0"))) PPC_WEAK_FUNC(sub_826B83A0);
PPC_FUNC_IMPL(__imp__sub_826B83A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B83A4"))) PPC_WEAK_FUNC(sub_826B83A4);
PPC_FUNC_IMPL(__imp__sub_826B83A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B83A8"))) PPC_WEAK_FUNC(sub_826B83A8);
PPC_FUNC_IMPL(__imp__sub_826B83A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826b72d8
	sub_826B72D8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b83ec
	if (!cr6.eq) goto loc_826B83EC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,1920
	ctx.r10.s64 = r11.s64 + 1920;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b84a4
	if (!cr6.eq) goto loc_826B84A4;
loc_826B83EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b7b80
	sub_826B7B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b8428
	if (!cr6.eq) goto loc_826B8428;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b82f0
	sub_826B82F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b7db8
	sub_826B7DB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826B8428:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b72d8
	sub_826B72D8(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x826b8494
	if (cr6.eq) goto loc_826B8494;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x826b8460
	if (cr6.eq) goto loc_826B8460;
loc_826B844C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x826b844c
	if (!cr6.eq) goto loc_826B844C;
loc_826B8460:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r9,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r8,16(r30)
	PPC_STORE_U64(r30.u32 + 16, ctx.r8.u64);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r7,24(r30)
	PPC_STORE_U64(r30.u32 + 24, ctx.r7.u64);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826b84a4
	goto loc_826B84A4;
loc_826B8494:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_826B84A4:
	// ld r11,0(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x826b84f0
	if (cr6.lt) goto loc_826B84F0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b84f0
	if (cr6.eq) goto loc_826B84F0;
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b84f0
	if (cr6.eq) goto loc_826B84F0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b3978
	sub_826B3978(ctx, base);
loc_826B84F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B84F8"))) PPC_WEAK_FUNC(sub_826B84F8);
PPC_FUNC_IMPL(__imp__sub_826B84F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B84FC"))) PPC_WEAK_FUNC(sub_826B84FC);
PPC_FUNC_IMPL(__imp__sub_826B84FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8500"))) PPC_WEAK_FUNC(sub_826B8500);
PPC_FUNC_IMPL(__imp__sub_826B8500) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x826b7c98
	sub_826B7C98(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,784
	ctx.r10.s64 = r11.s64 + 784;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b8550
	if (!cr6.eq) goto loc_826B8550;
	// li r11,4
	r11.s64 = 4;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b83a8
	sub_826B83A8(ctx, base);
loc_826B8550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B8560"))) PPC_WEAK_FUNC(sub_826B8560);
PPC_FUNC_IMPL(__imp__sub_826B8560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8564"))) PPC_WEAK_FUNC(sub_826B8564);
PPC_FUNC_IMPL(__imp__sub_826B8564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8568"))) PPC_WEAK_FUNC(sub_826B8568);
PPC_FUNC_IMPL(__imp__sub_826B8568) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x826b8668
	if (cr6.eq) goto loc_826B8668;
	// lis r11,16383
	r11.s64 = 1073676288;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826b85b4
	if (cr6.gt) goto loc_826B85B4;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b85b8
	goto loc_826B85B8;
loc_826B85B4:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B85B8:
	// lwz r30,16(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826b85e4
	if (!cr6.gt) goto loc_826B85E4;
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826b85e4
	if (cr6.eq) goto loc_826B85E4;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_826B85DC:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x826b85dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B85DC;
loc_826B85E4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826b8648
	if (!cr6.gt) goto loc_826B8648;
	// li r7,0
	ctx.r7.s64 = 0;
loc_826B85F8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8634
	if (cr6.eq) goto loc_826B8634;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
loc_826B860C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne cr6,0x826b860c
	if (!cr6.eq) goto loc_826B860C;
loc_826B8634:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x826b85f8
	if (cr6.lt) goto loc_826B85F8;
loc_826B8648:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_826B8668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B866C"))) PPC_WEAK_FUNC(sub_826B866C);
PPC_FUNC_IMPL(__imp__sub_826B866C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B8670"))) PPC_WEAK_FUNC(sub_826B8670);
PPC_FUNC_IMPL(__imp__sub_826B8670) {
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
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// li r10,-19
	ctx.r10.s64 = -19;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b86a0
	if (!cr6.gt) goto loc_826B86A0;
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B86A0:
	// addi r6,r30,17
	ctx.r6.s64 = r30.s64 + 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r11,4
	r11.s64 = 4;
	// li r27,0
	r27.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r8,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r8.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stb r27,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r27.u8);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r7,r31,r30
	ctx.r7.u64 = r31.u64 + r30.u64;
	// stb r27,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, r27.u8);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// and r3,r4,r28
	ctx.r3.u64 = ctx.r4.u64 & r28.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r31.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b8754
	if (!cr6.gt) goto loc_826B8754;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r9,r11,65534
	ctx.r9.u64 = r11.u64 | 65534;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x826b8754
	if (cr6.gt) goto loc_826B8754;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b8568
	sub_826B8568(ctx, base);
loc_826B8754:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B875C"))) PPC_WEAK_FUNC(sub_826B875C);
PPC_FUNC_IMPL(__imp__sub_826B875C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826B8760"))) PPC_WEAK_FUNC(sub_826B8760);
PPC_FUNC_IMPL(__imp__sub_826B8760) {
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
	// rlwinm r11,r5,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b87b8
	if (cr6.lt) goto loc_826B87B8;
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
loc_826B8794:
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r29,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// xor r29,r9,r29
	r29.u64 = ctx.r9.u64 ^ r29.u64;
	// bge cr6,0x826b8794
	if (!cr6.lt) goto loc_826B8794;
loc_826B87B8:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// and r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 & r29.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b8838
	if (cr6.eq) goto loc_826B8838;
loc_826B87E0:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x826b882c
	if (!cr6.eq) goto loc_826B882C;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b8824
	if (cr6.eq) goto loc_826B8824;
	// add r8,r26,r30
	ctx.r8.u64 = r26.u64 + r30.u64;
loc_826B8804:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826b8824
	if (!cr0.eq) goto loc_826B8824;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x826b8804
	if (!cr6.eq) goto loc_826B8804;
loc_826B8824:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826b890c
	if (cr6.eq) goto loc_826B890C;
loc_826B882C:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b87e0
	if (!cr6.eq) goto loc_826B87E0;
loc_826B8838:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// li r10,-19
	ctx.r10.s64 = -19;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b8850
	if (!cr6.gt) goto loc_826B8850;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B8850:
	// addi r6,r30,17
	ctx.r6.s64 = r30.s64 + 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,4
	r11.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r8,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r8.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stb r28,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r28.u8);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r7,r31,r30
	ctx.r7.u64 = r31.u64 + r30.u64;
	// stb r28,16(r7)
	PPC_STORE_U8(ctx.r7.u32 + 16, r28.u8);
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// and r3,r4,r29
	ctx.r3.u64 = ctx.r4.u64 & r29.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r31,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r31.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b8900
	if (!cr6.gt) goto loc_826B8900;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r9,r11,65534
	ctx.r9.u64 = r11.u64 | 65534;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x826b8900
	if (cr6.gt) goto loc_826B8900;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b8568
	sub_826B8568(ctx, base);
loc_826B8900:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826B8904:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826B890C:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// andc r8,r11,r9
	ctx.r8.u64 = r11.u64 & ~ctx.r9.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826b8904
	if (cr6.eq) goto loc_826B8904;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r10,r11,3
	ctx.r10.u64 = r11.u64 ^ 3;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B8938"))) PPC_WEAK_FUNC(sub_826B8938);
PPC_FUNC_IMPL(__imp__sub_826B8938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826B893C"))) PPC_WEAK_FUNC(sub_826B893C);
PPC_FUNC_IMPL(__imp__sub_826B893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8940"))) PPC_WEAK_FUNC(sub_826B8940);
PPC_FUNC_IMPL(__imp__sub_826B8940) {
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
	// li r11,-27
	r11.s64 = -27;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x826b8968
	if (!cr6.gt) goto loc_826B8968;
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B8968:
	// addi r6,r30,24
	ctx.r6.s64 = r30.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r7,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r7.u8);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B89C4"))) PPC_WEAK_FUNC(sub_826B89C4);
PPC_FUNC_IMPL(__imp__sub_826B89C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B89C8"))) PPC_WEAK_FUNC(sub_826B89C8);
PPC_FUNC_IMPL(__imp__sub_826B89C8) {
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
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b39a0
	sub_826B39A0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,6(r28)
	PPC_STORE_U8(r28.u32 + 6, r11.u8);
	// stb r30,7(r28)
	PPC_STORE_U8(r28.u32 + 7, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B8A20"))) PPC_WEAK_FUNC(sub_826B8A20);
PPC_FUNC_IMPL(__imp__sub_826B8A20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B8A24"))) PPC_WEAK_FUNC(sub_826B8A24);
PPC_FUNC_IMPL(__imp__sub_826B8A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8A28"))) PPC_WEAK_FUNC(sub_826B8A28);
PPC_FUNC_IMPL(__imp__sub_826B8A28) {
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
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b39a0
	sub_826B39A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stb r10,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r10.u8);
	// stb r31,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r31.u8);
	// beq cr6,0x826b8a94
	if (cr6.eq) goto loc_826B8A94;
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_826B8A8C:
	// stwu r10,-4(r11)
	ea = -4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x826b8a8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B8A8C;
loc_826B8A94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B8A9C"))) PPC_WEAK_FUNC(sub_826B8A9C);
PPC_FUNC_IMPL(__imp__sub_826B8A9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B8AA0"))) PPC_WEAK_FUNC(sub_826B8AA0);
PPC_FUNC_IMPL(__imp__sub_826B8AA0) {
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
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b39a0
	sub_826B39A0(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826B8B04"))) PPC_WEAK_FUNC(sub_826B8B04);
PPC_FUNC_IMPL(__imp__sub_826B8B04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8B08"))) PPC_WEAK_FUNC(sub_826B8B08);
PPC_FUNC_IMPL(__imp__sub_826B8B08) {
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
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r31,r3,104
	r31.s64 = ctx.r3.s64 + 104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8b50
	if (cr6.eq) goto loc_826B8B50;
loc_826B8B2C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// blt cr6,0x826b8b50
	if (cr6.lt) goto loc_826B8B50;
	// beq cr6,0x826b8ba4
	if (cr6.eq) goto loc_826B8BA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b8b2c
	if (!cr6.eq) goto loc_826B8B2C;
loc_826B8B50:
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// li r11,10
	r11.s64 = 10;
	// addi r10,r29,120
	ctx.r10.s64 = r29.s64 + 120;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// lbz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// stw r3,140(r29)
	PPC_STORE_U32(r29.u32 + 140, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826B8BA4:
	// lbz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826b8bc8
	if (cr6.eq) goto loc_826B8BC8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 ^ 3;
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
loc_826B8BC8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B8BD0"))) PPC_WEAK_FUNC(sub_826B8BD0);
PPC_FUNC_IMPL(__imp__sub_826B8BD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B8BD4"))) PPC_WEAK_FUNC(sub_826B8BD4);
PPC_FUNC_IMPL(__imp__sub_826B8BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8BD8"))) PPC_WEAK_FUNC(sub_826B8BD8);
PPC_FUNC_IMPL(__imp__sub_826B8BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8BF4"))) PPC_WEAK_FUNC(sub_826B8BF4);
PPC_FUNC_IMPL(__imp__sub_826B8BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8BF8"))) PPC_WEAK_FUNC(sub_826B8BF8);
PPC_FUNC_IMPL(__imp__sub_826B8BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b8c20
	if (cr6.eq) goto loc_826B8C20;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
loc_826B8C20:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
}

__attribute__((alias("__imp__sub_826B8C28"))) PPC_WEAK_FUNC(sub_826B8C28);
PPC_FUNC_IMPL(__imp__sub_826B8C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b9a48
	sub_826B9A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8C2C"))) PPC_WEAK_FUNC(sub_826B8C2C);
PPC_FUNC_IMPL(__imp__sub_826B8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8C30"))) PPC_WEAK_FUNC(sub_826B8C30);
PPC_FUNC_IMPL(__imp__sub_826B8C30) {
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
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8d04
	if (cr6.eq) goto loc_826B8D04;
loc_826B8C54:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x826b8d04
	if (cr6.lt) goto loc_826B8D04;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826b8cc0
	if (cr6.eq) goto loc_826B8CC0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b8cac
	if (cr6.eq) goto loc_826B8CAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
loc_826B8CAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b8cf8
	goto loc_826B8CF8;
loc_826B8CC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// bl 0x826b39c8
	sub_826B39C8(ctx, base);
loc_826B8CF8:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b8c54
	if (!cr6.eq) goto loc_826B8C54;
loc_826B8D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B8D08"))) PPC_WEAK_FUNC(sub_826B8D08);
PPC_FUNC_IMPL(__imp__sub_826B8D08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B8D0C"))) PPC_WEAK_FUNC(sub_826B8D0C);
PPC_FUNC_IMPL(__imp__sub_826B8D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8D10"))) PPC_WEAK_FUNC(sub_826B8D10);
PPC_FUNC_IMPL(__imp__sub_826B8D10) {
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
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b39a0
	sub_826B39A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stb r11,72(r30)
	PPC_STORE_U8(r30.u32 + 72, r11.u8);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stb r11,73(r30)
	PPC_STORE_U8(r30.u32 + 73, r11.u8);
	// stb r11,74(r30)
	PPC_STORE_U8(r30.u32 + 74, r11.u8);
	// stb r11,75(r30)
	PPC_STORE_U8(r30.u32 + 75, r11.u8);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
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

__attribute__((alias("__imp__sub_826B8DB4"))) PPC_WEAK_FUNC(sub_826B8DB4);
PPC_FUNC_IMPL(__imp__sub_826B8DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8DB8"))) PPC_WEAK_FUNC(sub_826B8DB8);
PPC_FUNC_IMPL(__imp__sub_826B8DB8) {
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
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
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

__attribute__((alias("__imp__sub_826B8E90"))) PPC_WEAK_FUNC(sub_826B8E90);
PPC_FUNC_IMPL(__imp__sub_826B8E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8E94"))) PPC_WEAK_FUNC(sub_826B8E94);
PPC_FUNC_IMPL(__imp__sub_826B8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8E98"))) PPC_WEAK_FUNC(sub_826B8E98);
PPC_FUNC_IMPL(__imp__sub_826B8E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,6(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8eb4
	if (cr6.eq) goto loc_826B8EB4;
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// b 0x826b8ec0
	goto loc_826B8EC0;
loc_826B8EB4:
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_826B8EC0:
	// li r6,0
	ctx.r6.s64 = 0;
}

__attribute__((alias("__imp__sub_826B8EC4"))) PPC_WEAK_FUNC(sub_826B8EC4);
PPC_FUNC_IMPL(__imp__sub_826B8EC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b9a48
	sub_826B9A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8EC8"))) PPC_WEAK_FUNC(sub_826B8EC8);
PPC_FUNC_IMPL(__imp__sub_826B8EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x826b8f14
	if (!cr6.gt) goto loc_826B8F14;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
loc_826B8EE0:
	// add r11,r10,r8
	r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bgt cr6,0x826b8f14
	if (cr6.gt) goto loc_826B8F14;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bge cr6,0x826b8f04
	if (!cr6.lt) goto loc_826B8F04;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x826b8f1c
	if (cr0.eq) goto loc_826B8F1C;
loc_826B8F04:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x826b8ee0
	if (cr6.lt) goto loc_826B8EE0;
loc_826B8F14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B8F1C:
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_826B8F30"))) PPC_WEAK_FUNC(sub_826B8F30);
PPC_FUNC_IMPL(__imp__sub_826B8F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8F34"))) PPC_WEAK_FUNC(sub_826B8F34);
PPC_FUNC_IMPL(__imp__sub_826B8F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8F38"))) PPC_WEAK_FUNC(sub_826B8F38);
PPC_FUNC_IMPL(__imp__sub_826B8F38) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b8fa4
	if (cr6.eq) goto loc_826B8FA4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8fa4
	if (cr6.eq) goto loc_826B8FA4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B8FA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B8FB8"))) PPC_WEAK_FUNC(sub_826B8FB8);
PPC_FUNC_IMPL(__imp__sub_826B8FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8FBC"))) PPC_WEAK_FUNC(sub_826B8FBC);
PPC_FUNC_IMPL(__imp__sub_826B8FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8FC0"))) PPC_WEAK_FUNC(sub_826B8FC0);
PPC_FUNC_IMPL(__imp__sub_826B8FC0) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b9018
	if (!cr6.eq) goto loc_826B9018;
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x826b9000
	if (!cr6.eq) goto loc_826B9000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B9000:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_826B9018:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9030"))) PPC_WEAK_FUNC(sub_826B9030);
PPC_FUNC_IMPL(__imp__sub_826B9030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9034"))) PPC_WEAK_FUNC(sub_826B9034);
PPC_FUNC_IMPL(__imp__sub_826B9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9038"))) PPC_WEAK_FUNC(sub_826B9038);
PPC_FUNC_IMPL(__imp__sub_826B9038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_826B9050"))) PPC_WEAK_FUNC(sub_826B9050);
PPC_FUNC_IMPL(__imp__sub_826B9050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9054"))) PPC_WEAK_FUNC(sub_826B9054);
PPC_FUNC_IMPL(__imp__sub_826B9054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9058"))) PPC_WEAK_FUNC(sub_826B9058);
PPC_FUNC_IMPL(__imp__sub_826B9058) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826b9130
	if (cr6.eq) goto loc_826B9130;
loc_826B9078:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b90e0
	if (!cr6.eq) goto loc_826B90E0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b913c
	if (cr6.eq) goto loc_826B913C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b913c
	if (cr6.eq) goto loc_826B913C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826b913c
	if (cr6.eq) goto loc_826B913C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_826B90E0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x826b913c
	if (cr6.eq) goto loc_826B913C;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bgt cr6,0x826b9100
	if (cr6.gt) goto loc_826B9100;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826B9100:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - r30.s64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bne 0x826b9078
	if (!cr0.eq) goto loc_826B9078;
loc_826B9130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826B913C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B9144"))) PPC_WEAK_FUNC(sub_826B9144);
PPC_FUNC_IMPL(__imp__sub_826B9144) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B9148"))) PPC_WEAK_FUNC(sub_826B9148);
PPC_FUNC_IMPL(__imp__sub_826B9148) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, xer);
	// ble cr6,0x826b91a8
	if (!cr6.gt) goto loc_826B91A8;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// bge cr6,0x826b917c
	if (!cr6.lt) goto loc_826B917C;
	// li r30,32
	r30.s64 = 32;
loc_826B917C:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// li r10,-3
	ctx.r10.s64 = -3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x826b919c
	if (cr6.gt) goto loc_826B919C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826b91a0
	goto loc_826B91A0;
loc_826B919C:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826B91A0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_826B91A8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
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

__attribute__((alias("__imp__sub_826B91C0"))) PPC_WEAK_FUNC(sub_826B91C0);
PPC_FUNC_IMPL(__imp__sub_826B91C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B91C4"))) PPC_WEAK_FUNC(sub_826B91C4);
PPC_FUNC_IMPL(__imp__sub_826B91C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B91C8"))) PPC_WEAK_FUNC(sub_826B91C8);
PPC_FUNC_IMPL(__imp__sub_826B91C8) {
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
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9208
	if (!cr6.eq) goto loc_826B9208;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9208:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9218"))) PPC_WEAK_FUNC(sub_826B9218);
PPC_FUNC_IMPL(__imp__sub_826B9218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B921C"))) PPC_WEAK_FUNC(sub_826B921C);
PPC_FUNC_IMPL(__imp__sub_826B921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9220"))) PPC_WEAK_FUNC(sub_826B9220);
PPC_FUNC_IMPL(__imp__sub_826B9220) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826b9264
	if (!cr6.eq) goto loc_826B9264;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9274"))) PPC_WEAK_FUNC(sub_826B9274);
PPC_FUNC_IMPL(__imp__sub_826B9274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9278"))) PPC_WEAK_FUNC(sub_826B9278);
PPC_FUNC_IMPL(__imp__sub_826B9278) {
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
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b92bc
	if (!cr6.eq) goto loc_826B92BC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B92BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B92CC"))) PPC_WEAK_FUNC(sub_826B92CC);
PPC_FUNC_IMPL(__imp__sub_826B92CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B92D0"))) PPC_WEAK_FUNC(sub_826B92D0);
PPC_FUNC_IMPL(__imp__sub_826B92D0) {
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
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9314
	if (!cr6.eq) goto loc_826B9314;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9314:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9324"))) PPC_WEAK_FUNC(sub_826B9324);
PPC_FUNC_IMPL(__imp__sub_826B9324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9328"))) PPC_WEAK_FUNC(sub_826B9328);
PPC_FUNC_IMPL(__imp__sub_826B9328) {
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
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9374
	if (!cr6.eq) goto loc_826B9374;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9374:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b93a0
	if (!cr6.eq) goto loc_826B93A0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r5,r30,r28
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B93A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B93A4"))) PPC_WEAK_FUNC(sub_826B93A4);
PPC_FUNC_IMPL(__imp__sub_826B93A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

