#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8258EF64"))) PPC_WEAK_FUNC(sub_8258EF64);
PPC_FUNC_IMPL(__imp__sub_8258EF64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258EF68"))) PPC_WEAK_FUNC(sub_8258EF68);
PPC_FUNC_IMPL(__imp__sub_8258EF68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8258EF6C"))) PPC_WEAK_FUNC(sub_8258EF6C);
PPC_FUNC_IMPL(__imp__sub_8258EF6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8258ef00
	sub_8258EF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EF70"))) PPC_WEAK_FUNC(sub_8258EF70);
PPC_FUNC_IMPL(__imp__sub_8258EF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258ef84
	if (cr6.eq) goto loc_8258EF84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258EF84:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8258efa0
	if (cr6.gt) goto loc_8258EFA0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8258EFA0:
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r7,r9
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8258EFB4"))) PPC_WEAK_FUNC(sub_8258EFB4);
PPC_FUNC_IMPL(__imp__sub_8258EFB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258EFB8"))) PPC_WEAK_FUNC(sub_8258EFB8);
PPC_FUNC_IMPL(__imp__sub_8258EFB8) {
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
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8258eff8
	if (cr6.lt) goto loc_8258EFF8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8258EFF8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8258f028
	if (!cr6.eq) goto loc_8258F028;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// b 0x8258f068
	goto loc_8258F068;
loc_8258F028:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258f050
	if (cr6.eq) goto loc_8258F050;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8258f068
	if (!cr6.eq) goto loc_8258F068;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x8258f068
	goto loc_8258F068;
loc_8258F050:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x8258f068
	if (!cr6.eq) goto loc_8258F068;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_8258F068:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258f18c
	if (!cr6.eq) goto loc_8258F18C;
	// li r28,0
	r28.s64 = 0;
loc_8258F084:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x8258f10c
	if (!cr6.eq) goto loc_8258F10C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258f0cc
	if (!cr6.eq) goto loc_8258F0CC;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8258f17c
	goto loc_8258F17C;
loc_8258F0CC:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8258f0e4
	if (!cr6.eq) goto loc_8258F0E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825c40e8
	sub_825C40E8(ctx, base);
loc_8258F0E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x826d9f70
	sub_826D9F70(ctx, base);
	// b 0x8258f17c
	goto loc_8258F17C;
loc_8258F10C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258f140
	if (!cr6.eq) goto loc_8258F140;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x8258f17c
	goto loc_8258F17C;
loc_8258F140:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8258f158
	if (!cr6.eq) goto loc_8258F158;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826d9f70
	sub_826D9F70(ctx, base);
loc_8258F158:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x825c40e8
	sub_825C40E8(ctx, base);
loc_8258F17C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258f084
	if (cr6.eq) goto loc_8258F084;
loc_8258F18C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8258F1A4"))) PPC_WEAK_FUNC(sub_8258F1A4);
PPC_FUNC_IMPL(__imp__sub_8258F1A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8258F1A8"))) PPC_WEAK_FUNC(sub_8258F1A8);
PPC_FUNC_IMPL(__imp__sub_8258F1A8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8258f1e0
	if (!cr6.lt) goto loc_8258F1E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,32456
	ctx.r3.s64 = r11.s64 + 32456;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_8258F1E0:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x8258f1f0
	if (!cr6.lt) goto loc_8258F1F0;
	// li r10,8
	ctx.r10.s64 = 8;
loc_8258F1F0:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8258f208
	if (!cr6.lt) goto loc_8258F208;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8258f208
	if (cr6.gt) goto loc_8258F208;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8258F208:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// addi r3,r31,21
	ctx.r3.s64 = r31.s64 + 21;
	// rlwinm r28,r10,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x822e9460
	sub_822E9460(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r11.s64 = ctx.r7.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x8258f2bc
	if (cr6.gt) goto loc_8258F2BC;
	// subf r11,r4,r30
	r11.s64 = r30.s64 - ctx.r4.s64;
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8258f29c
	if (cr6.eq) goto loc_8258F29C;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r27
	ctr.u64 = r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8258F294:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8258f294
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8258F294;
loc_8258F29C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8258f318
	if (cr6.eq) goto loc_8258F318;
	// addi r11,r26,-4
	r11.s64 = r26.s64 + -4;
	// mtctr r28
	ctr.u64 = r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8258F2B0:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8258f2b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8258F2B0;
	// b 0x8258f318
	goto loc_8258F318;
loc_8258F2BC:
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r28
	r11.s64 = r28.s64 - ctx.r4.s64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// srawi r10,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r10.s64 = r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// subf r10,r4,r30
	ctx.r10.s64 = r30.s64 - ctx.r4.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8258f318
	if (cr6.eq) goto loc_8258F318;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r29
	ctr.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8258F310:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8258f310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8258F310;
loc_8258F318:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f328
	if (cr6.eq) goto loc_8258F328;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8258F328:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8258F33C"))) PPC_WEAK_FUNC(sub_8258F33C);
PPC_FUNC_IMPL(__imp__sub_8258F33C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8258F340"))) PPC_WEAK_FUNC(sub_8258F340);
PPC_FUNC_IMPL(__imp__sub_8258F340) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258f388
	if (cr6.eq) goto loc_8258F388;
loc_8258F360:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258f37c
	if (cr6.eq) goto loc_8258F37C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bne 0x8258f37c
	if (!cr0.eq) goto loc_8258F37C;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
loc_8258F37C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f360
	if (!cr6.eq) goto loc_8258F360;
loc_8258F388:
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8258f3c0
	if (cr6.eq) goto loc_8258F3C0;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8258F398:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258f3b8
	if (cr6.eq) goto loc_8258F3B8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8258F3B8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8258f398
	if (!cr6.eq) goto loc_8258F398;
loc_8258F3C0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f3d0
	if (cr6.eq) goto loc_8258F3D0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8258F3D0:
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8258F3DC"))) PPC_WEAK_FUNC(sub_8258F3DC);
PPC_FUNC_IMPL(__imp__sub_8258F3DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8258F3E0"))) PPC_WEAK_FUNC(sub_8258F3E0);
PPC_FUNC_IMPL(__imp__sub_8258F3E0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258f424
	if (!cr6.eq) goto loc_8258F424;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8258f424
	if (cr6.gt) goto loc_8258F424;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258f1a8
	sub_8258F1A8(ctx, base);
loc_8258F424:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f438
	if (!cr6.eq) goto loc_8258F438;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8258F438:
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r29,1,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258f468
	if (!cr6.eq) goto loc_8258F468;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f4a4
	if (cr6.eq) goto loc_8258F4A4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r3.u32);
loc_8258F468:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0x8;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258f48c
	if (cr0.eq) goto loc_8258F48C;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8258F48C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8258F4A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,10736
	ctx.r9.s64 = r11.s64 + 10736;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8258F4BC"))) PPC_WEAK_FUNC(sub_8258F4BC);
PPC_FUNC_IMPL(__imp__sub_8258F4BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x822d40a8
	sub_822D40A8(ctx, base);
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f5e4
	if (!cr6.eq) goto loc_8258F5E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x82425198
	sub_82425198(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f588
	if (!cr6.eq) goto loc_8258F588;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// bl 0x82425350
	sub_82425350(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-20456
	r30.s64 = r11.s64 + -20456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826f7a98
	sub_826F7A98(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8258f56c
	if (cr6.eq) goto loc_8258F56C;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258f580
	if (cr6.eq) goto loc_8258F580;
loc_8258F56C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r11,-20460(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20460);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8258f588
	if (!cr6.eq) goto loc_8258F588;
loc_8258F580:
	// li r11,1
	r11.s64 = 1;
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
loc_8258F588:
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8258f5f4
	if (!cr6.eq) goto loc_8258F5F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
	// lwz r30,144(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8258F5E4:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_8258F5F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258F4C0"))) PPC_WEAK_FUNC(sub_8258F4C0);
PPC_FUNC_IMPL(__imp__sub_8258F4C0) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f5e4
	if (!cr6.eq) goto loc_8258F5E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x82425198
	sub_82425198(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8258f5e4
	if (cr6.eq) goto loc_8258F5E4;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258f588
	if (!cr6.eq) goto loc_8258F588;
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// bl 0x82425350
	sub_82425350(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-20456
	r30.s64 = r11.s64 + -20456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826f7a98
	sub_826F7A98(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8258f56c
	if (cr6.eq) goto loc_8258F56C;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258f580
	if (cr6.eq) goto loc_8258F580;
loc_8258F56C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r11,-20460(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20460);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8258f588
	if (!cr6.eq) goto loc_8258F588;
loc_8258F580:
	// li r11,1
	r11.s64 = 1;
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
loc_8258F588:
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8258f5f4
	if (!cr6.eq) goto loc_8258F5F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
	// lwz r30,144(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8258F5E4:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_8258F5F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8258F5FC"))) PPC_WEAK_FUNC(sub_8258F5FC);
PPC_FUNC_IMPL(__imp__sub_8258F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258F600"))) PPC_WEAK_FUNC(sub_8258F600);
PPC_FUNC_IMPL(__imp__sub_8258F600) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8258e9d8
	sub_8258E9D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14796
	ctx.r9.s64 = r11.s64 + -14796;
	// addi r8,r10,-14852
	ctx.r8.s64 = ctx.r10.s64 + -14852;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r11,-9852
	r30.s64 = r11.s64 + -9852;
	// stw r7,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8258f6c0
	if (cr6.eq) goto loc_8258F6C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8258F6C0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-20460(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20460);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8258F6D4"))) PPC_WEAK_FUNC(sub_8258F6D4);
PPC_FUNC_IMPL(__imp__sub_8258F6D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8258F6D8"))) PPC_WEAK_FUNC(sub_8258F6D8);
PPC_FUNC_IMPL(__imp__sub_8258F6D8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8258f720
	if (!cr6.eq) goto loc_8258F720;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8258f720
	if (cr6.gt) goto loc_8258F720;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8258f1a8
	sub_8258F1A8(ctx, base);
loc_8258F720:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r29,r11,r9
	r29.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,31,1,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8258f740
	if (cr6.gt) goto loc_8258F740;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_8258F740:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8258f76c
	if (!cr6.eq) goto loc_8258F76C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258f7a4
	if (cr6.eq) goto loc_8258F7A4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r3.u32);
loc_8258F76C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0x8;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258f790
	if (cr0.eq) goto loc_8258F790;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8258F790:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8258F7A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,10736
	ctx.r9.s64 = r11.s64 + 10736;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8258F7BC"))) PPC_WEAK_FUNC(sub_8258F7BC);
PPC_FUNC_IMPL(__imp__sub_8258F7BC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x822d40a8
	sub_822D40A8(ctx, base);
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a6cc8
	sub_826A6CC8(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8258f81c
	if (cr6.eq) goto loc_8258F81C;
	// bl 0x826a75e8
	sub_826A75E8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
loc_8258F81C:
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
}

__attribute__((alias("__imp__sub_8258F7C0"))) PPC_WEAK_FUNC(sub_8258F7C0);
PPC_FUNC_IMPL(__imp__sub_8258F7C0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a6cc8
	sub_826A6CC8(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8258f81c
	if (cr6.eq) goto loc_8258F81C;
	// bl 0x826a75e8
	sub_826A75E8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
loc_8258F81C:
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

__attribute__((alias("__imp__sub_8258F834"))) PPC_WEAK_FUNC(sub_8258F834);
PPC_FUNC_IMPL(__imp__sub_8258F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258F838"))) PPC_WEAK_FUNC(sub_8258F838);
PPC_FUNC_IMPL(__imp__sub_8258F838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r6,24(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8258f860
	if (cr6.gt) goto loc_8258F860;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8258F860:
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x8258f880
	if (cr6.gt) goto loc_8258F880;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
loc_8258F880:
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r3,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_8258F8D0"))) PPC_WEAK_FUNC(sub_8258F8D0);
PPC_FUNC_IMPL(__imp__sub_8258F8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F8D4"))) PPC_WEAK_FUNC(sub_8258F8D4);
PPC_FUNC_IMPL(__imp__sub_8258F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258F8D8"))) PPC_WEAK_FUNC(sub_8258F8D8);
PPC_FUNC_IMPL(__imp__sub_8258F8D8) {
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
	// mflr r12
	// bl 0x828e9410
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r30,36(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r28,20(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
	// subf r9,r28,r30
	ctx.r9.s64 = r30.s64 - r28.s64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8258f930
	if (cr6.eq) goto loc_8258F930;
loc_8258F918:
	// divw r10,r26,r11
	ctx.r10.s32 = r26.s32 / r11.s32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf. r10,r8,r26
	ctx.r10.s64 = r26.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r26,r11
	r26.u64 = r11.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8258f918
	if (!cr0.eq) goto loc_8258F918;
loc_8258F930:
	// cmpw cr6,r26,r9
	cr6.compare<int32_t>(r26.s32, ctx.r9.s32, xer);
	// bge cr6,0x8258fa7c
	if (!cr6.lt) {
		sub_8258FA7C(ctx, base);
		return;
	}
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8258fa7c
	if (!cr6.gt) {
		sub_8258FA7C(ctx, base);
		return;
	}
loc_8258F940:
	// add r27,r28,r26
	r27.u64 = r28.u64 + r26.u64;
	// std r3,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r3.u64);
	// stw r27,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, r27.u32);
	// add r11,r27,r29
	r11.u64 = r27.u64 + r29.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// bne cr6,0x8258f968
	if (!cr6.eq) goto loc_8258F968;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// b 0x8258f97c
	goto loc_8258F97C;
loc_8258F968:
	// std r10,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, r11.u32);
	// ld r11,-96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, r11.u64);
loc_8258F97C:
	// ld r31,0(r10)
	r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r31.u64);
	// lwz r4,-92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
loc_8258F988:
	// lwz r6,-96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8258f9a4
	if (cr6.gt) goto loc_8258F9A4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8258F9A4:
	// lwz r9,-88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r8,-84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x8258f9c4
	if (cr6.gt) goto loc_8258F9C4;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
loc_8258F9C4:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8258fa14
	if (cr6.eq) goto loc_8258FA14;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
loc_8258FA14:
	// subf r11,r4,r30
	r11.s64 = r30.s64 - ctx.r4.s64;
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, r31.u64);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x8258fa44
	if (!cr6.lt) goto loc_8258FA44;
	// add r10,r4,r29
	ctx.r10.u64 = ctx.r4.u64 + r29.u64;
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r31.u64);
	// addi r11,r1,-72
	r11.s64 = ctx.r1.s64 + -72;
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// ld r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// b 0x8258fa60
	goto loc_8258FA60;
loc_8258FA44:
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// std r3,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r3.u64);
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// ld r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r9,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
loc_8258FA60:
	// ld r31,0(r11)
	r31.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, r31.u64);
	// lwz r4,-92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// cmplw cr6,r4,r27
	cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, xer);
	// bne cr6,0x8258f988
	if (!cr6.eq) goto loc_8258F988;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bgt 0x8258f940
	if (cr0.gt) goto loc_8258F940;
}

__attribute__((alias("__imp__sub_8258FA7C"))) PPC_WEAK_FUNC(sub_8258FA7C);
PPC_FUNC_IMPL(__imp__sub_8258FA7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8258FA80"))) PPC_WEAK_FUNC(sub_8258FA80);
PPC_FUNC_IMPL(__imp__sub_8258FA80) {
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
	// lbz r11,21(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258fb0c
	if (!cr6.eq) goto loc_8258FB0C;
	// bl 0x826a2968
	sub_826A2968(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258fac8
	if (cr0.eq) goto loc_8258FAC8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8258FAC8:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// lbz r10,21(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258fae4
	if (cr6.eq) goto loc_8258FAE4;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8258FAE4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8258fa80
	sub_8258FA80(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8258fa80
	sub_8258FA80(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8258FB0C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8258FB14"))) PPC_WEAK_FUNC(sub_8258FB14);
PPC_FUNC_IMPL(__imp__sub_8258FB14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8258FB18"))) PPC_WEAK_FUNC(sub_8258FB18);
PPC_FUNC_IMPL(__imp__sub_8258FB18) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,140(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8258fb70
	if (cr6.eq) goto loc_8258FB70;
loc_8258FB44:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x8258fb70
	if (cr6.eq) goto loc_8258FB70;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x8258f838
	sub_8258F838(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8258fb44
	if (!cr6.eq) goto loc_8258FB44;
loc_8258FB70:
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

__attribute__((alias("__imp__sub_8258FB84"))) PPC_WEAK_FUNC(sub_8258FB84);
PPC_FUNC_IMPL(__imp__sub_8258FB84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FB88"))) PPC_WEAK_FUNC(sub_8258FB88);
PPC_FUNC_IMPL(__imp__sub_8258FB88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8258fa80
	sub_8258FA80(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8258fc30
	if (!cr6.eq) goto loc_8258FC30;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8258fbf4
	if (!cr6.eq) goto loc_8258FBF4;
loc_8258FBE0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258fbe0
	if (cr6.eq) goto loc_8258FBE0;
loc_8258FBF4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8258fc24
	if (!cr6.eq) goto loc_8258FC24;
loc_8258FC10:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258fc10
	if (cr6.eq) goto loc_8258FC10;
loc_8258FC24:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8258FC30:
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8258FC40"))) PPC_WEAK_FUNC(sub_8258FC40);
PPC_FUNC_IMPL(__imp__sub_8258FC40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258FC44"))) PPC_WEAK_FUNC(sub_8258FC44);
PPC_FUNC_IMPL(__imp__sub_8258FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258FC48"))) PPC_WEAK_FUNC(sub_8258FC48);
PPC_FUNC_IMPL(__imp__sub_8258FC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fc78
	if (cr6.eq) goto loc_8258FC78;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fc78
	if (cr6.eq) goto loc_8258FC78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FC78:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x8258fc8c
	if (cr6.eq) goto loc_8258FC8C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8258FC8C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fcb4
	if (cr6.eq) goto loc_8258FCB4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fcb4
	if (cr6.eq) goto loc_8258FCB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FCB4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8258fcc8
	if (cr6.eq) goto loc_8258FCC8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8258FCC8:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8258fb18
	sub_8258FB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8258FCE8"))) PPC_WEAK_FUNC(sub_8258FCE8);
PPC_FUNC_IMPL(__imp__sub_8258FCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FCEC"))) PPC_WEAK_FUNC(sub_8258FCEC);
PPC_FUNC_IMPL(__imp__sub_8258FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258FCF0"))) PPC_WEAK_FUNC(sub_8258FCF0);
PPC_FUNC_IMPL(__imp__sub_8258FCF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x8258fe0c
	if (cr6.eq) goto loc_8258FE0C;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8258fe0c
	if (cr6.eq) goto loc_8258FE0C;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fd4c
	if (cr6.eq) goto loc_8258FD4C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fd4c
	if (cr6.eq) goto loc_8258FD4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FD4C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258fd5c
	if (!cr6.eq) goto loc_8258FD5C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8258fd60
	goto loc_8258FD60;
loc_8258FD5C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8258FD60:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fd88
	if (cr6.eq) goto loc_8258FD88;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fd88
	if (cr6.eq) goto loc_8258FD88;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FD88:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq cr6,0x8258fd98
	if (cr6.eq) goto loc_8258FD98;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8258FD98:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fdc0
	if (cr6.eq) goto loc_8258FDC0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fdc0
	if (cr6.eq) goto loc_8258FDC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FDC0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x8258fdd0
	if (cr6.eq) goto loc_8258FDD0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8258FDD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8258f8d8
	sub_8258F8D8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_8258FE0C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// beq cr6,0x8258fe34
	if (cr6.eq) goto loc_8258FE34;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258fe34
	if (cr6.eq) goto loc_8258FE34;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8258FE34:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8258FE44"))) PPC_WEAK_FUNC(sub_8258FE44);
PPC_FUNC_IMPL(__imp__sub_8258FE44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8258FE48"))) PPC_WEAK_FUNC(sub_8258FE48);
PPC_FUNC_IMPL(__imp__sub_8258FE48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x826a2968
	sub_826A2968(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258fe8c
	if (cr0.eq) goto loc_8258FE8C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8258FE8C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258efb8
	sub_8258EFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8258FEA8"))) PPC_WEAK_FUNC(sub_8258FEA8);
PPC_FUNC_IMPL(__imp__sub_8258FEA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8258FEAC"))) PPC_WEAK_FUNC(sub_8258FEAC);
PPC_FUNC_IMPL(__imp__sub_8258FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8258FEB0"))) PPC_WEAK_FUNC(sub_8258FEB0);
PPC_FUNC_IMPL(__imp__sub_8258FEB0) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r28,16(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// subf r27,r10,r11
	r27.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259018c
	if (cr6.eq) goto loc_8259018C;
	// rlwinm r11,r28,31,1,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bgt cr6,0x82590098
	if (cr6.gt) goto loc_82590098;
loc_8258FEF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258ef70
	sub_8258EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258f3e0
	sub_8258F3E0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8258fef8
	if (!cr6.eq) goto loc_8258FEF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r30
	r11.u64 = r30.u64;
	// subf r29,r28,r8
	r29.s64 = ctx.r8.s64 - r28.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258ff58
	if (cr6.eq) goto loc_8258FF58;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258ff58
	if (cr6.eq) goto loc_8258FF58;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_8258FF58:
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258ff80
	if (cr6.eq) goto loc_8258FF80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258ff80
	if (cr6.eq) goto loc_8258FF80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8258FF80:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8258fc48
	sub_8258FC48(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258ffc0
	if (cr6.eq) goto loc_8258FFC0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258ffc0
	if (cr6.eq) goto loc_8258FFC0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8258FFC0:
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258ffe0
	if (cr6.eq) goto loc_8258FFE0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258ffe0
	if (cr6.eq) goto loc_8258FFE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258FFE0:
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258fffc
	if (cr6.eq) goto loc_8258FFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8258fffc
	if (cr6.eq) goto loc_8258FFFC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8258FFFC:
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590024
	if (cr6.eq) goto loc_82590024;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590024
	if (cr6.eq) goto loc_82590024;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82590024:
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82590044
	if (cr6.eq) goto loc_82590044;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82590044
	if (cr6.eq) goto loc_82590044;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82590044:
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259006c
	if (cr6.eq) goto loc_8259006C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259006c
	if (cr6.eq) goto loc_8259006C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_8259006C:
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8258fcf0
	sub_8258FCF0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9464
	return;
loc_82590098:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258ef70
	sub_8258EF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258f6d8
	sub_8258F6D8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82590098
	if (!cr6.eq) goto loc_82590098;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// beq cr6,0x82590104
	if (cr6.eq) goto loc_82590104;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82590104
	if (cr6.eq) goto loc_82590104;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82590104:
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259012c
	if (cr6.eq) goto loc_8259012C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259012c
	if (cr6.eq) goto loc_8259012C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8259012C:
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259014c
	if (cr6.eq) goto loc_8259014C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259014c
	if (cr6.eq) goto loc_8259014C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8259014C:
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82590174
	if (cr6.eq) goto loc_82590174;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590174
	if (cr6.eq) goto loc_82590174;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82590174:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8258fcf0
	sub_8258FCF0(ctx, base);
loc_8259018C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82590190"))) PPC_WEAK_FUNC(sub_82590190);
PPC_FUNC_IMPL(__imp__sub_82590190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82590194"))) PPC_WEAK_FUNC(sub_82590194);
PPC_FUNC_IMPL(__imp__sub_82590194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590198"))) PPC_WEAK_FUNC(sub_82590198);
PPC_FUNC_IMPL(__imp__sub_82590198) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,1
	r26.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82590230
	if (!cr6.eq) goto loc_82590230;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_825901D4:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825901f8
	if (cr6.eq) goto loc_825901F8;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r10.s64;
	// adde r31,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	r31.u64 = ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8259020c
	goto loc_8259020C;
loc_825901F8:
	// subfc r7,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// eqv r6,r8,r10
	ctx.r6.u64 = ~(ctx.r8.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r31,r4,31
	r31.u64 = ctx.r4.u32 & 0x1;
loc_8259020C:
	// clrlwi r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82590220
	if (cr6.eq) goto loc_82590220;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82590224
	goto loc_82590224;
loc_82590220:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82590224:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825901d4
	if (cr6.eq) goto loc_825901D4;
loc_82590230:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82590290
	if (cr6.eq) goto loc_82590290;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82590288
	if (!cr6.eq) goto loc_82590288;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r26.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82590288:
	// bl 0x82727590
	sub_82727590(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82590290:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x825902d4
	if (!cr6.lt) goto loc_825902D4;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r26.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_825902D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825902E8"))) PPC_WEAK_FUNC(sub_825902E8);
PPC_FUNC_IMPL(__imp__sub_825902E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825902EC"))) PPC_WEAK_FUNC(sub_825902EC);
PPC_FUNC_IMPL(__imp__sub_825902EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825902F0"))) PPC_WEAK_FUNC(sub_825902F0);
PPC_FUNC_IMPL(__imp__sub_825902F0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-15060
	ctx.r9.s64 = r11.s64 + -15060;
	// addi r8,r10,-15116
	ctx.r8.s64 = ctx.r10.s64 + -15116;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8259034c
	if (cr6.eq) goto loc_8259034C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259034C:
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

__attribute__((alias("__imp__sub_82590360"))) PPC_WEAK_FUNC(sub_82590360);
PPC_FUNC_IMPL(__imp__sub_82590360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590364"))) PPC_WEAK_FUNC(sub_82590364);
PPC_FUNC_IMPL(__imp__sub_82590364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590368"))) PPC_WEAK_FUNC(sub_82590368);
PPC_FUNC_IMPL(__imp__sub_82590368) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259036C"))) PPC_WEAK_FUNC(sub_8259036C);
PPC_FUNC_IMPL(__imp__sub_8259036C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825902f0
	sub_825902F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590370"))) PPC_WEAK_FUNC(sub_82590370);
PPC_FUNC_IMPL(__imp__sub_82590370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x825903a8
	if (cr6.eq) goto loc_825903A8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825903a8
	if (cr6.eq) goto loc_825903A8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825903A8:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x825903d8
	if (cr6.eq) goto loc_825903D8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825903d8
	if (cr6.eq) goto loc_825903D8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_825903D8:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82590408
	if (cr6.eq) goto loc_82590408;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590408
	if (cr6.eq) goto loc_82590408;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_82590408:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x8258feb0
	sub_8258FEB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82590430"))) PPC_WEAK_FUNC(sub_82590430);
PPC_FUNC_IMPL(__imp__sub_82590430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590434"))) PPC_WEAK_FUNC(sub_82590434);
PPC_FUNC_IMPL(__imp__sub_82590434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590438"))) PPC_WEAK_FUNC(sub_82590438);
PPC_FUNC_IMPL(__imp__sub_82590438) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825904a8
	if (!cr6.eq) goto loc_825904A8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x826a2968
	sub_826A2968(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82590488
	if (cr0.eq) goto loc_82590488;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82590488:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258efb8
	sub_8258EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825904A8:
	// lwz r25,4(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825904ec
	if (!cr6.eq) goto loc_825904EC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825905e8
	if (!cr6.lt) goto loc_825905E8;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825904EC:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82590528
	if (!cr6.eq) goto loc_82590528;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x825905e8
	if (!cr6.lt) goto loc_825905E8;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82590528:
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// ble cr6,0x8259058c
	if (!cr6.gt) goto loc_8259058C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82727590
	sub_82727590(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82590588
	if (!cr6.lt) goto loc_82590588;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825905d4
	if (!cr6.eq) goto loc_825905D4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82590574:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82590588:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
loc_8259058C:
	// bge cr6,0x825905e8
	if (!cr6.lt) goto loc_825905E8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x825905b4
	if (cr6.eq) goto loc_825905B4;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x825905e8
	if (!cr6.lt) goto loc_825905E8;
loc_825905B4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82590574
	if (cr6.eq) goto loc_82590574;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_825905D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8258fe48
	sub_8258FE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_825905E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82590198
	sub_82590198(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82590610"))) PPC_WEAK_FUNC(sub_82590610);
PPC_FUNC_IMPL(__imp__sub_82590610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82590614"))) PPC_WEAK_FUNC(sub_82590614);
PPC_FUNC_IMPL(__imp__sub_82590614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590618"))) PPC_WEAK_FUNC(sub_82590618);
PPC_FUNC_IMPL(__imp__sub_82590618) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824207a8
	sub_824207A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x82590694
	if (cr6.eq) goto loc_82590694;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590694
	if (cr6.eq) goto loc_82590694;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_82590694:
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82590370
	sub_82590370(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_825906C4"))) PPC_WEAK_FUNC(sub_825906C4);
PPC_FUNC_IMPL(__imp__sub_825906C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825906C8"))) PPC_WEAK_FUNC(sub_825906C8);
PPC_FUNC_IMPL(__imp__sub_825906C8) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259073c
	if (cr6.eq) goto loc_8259073C;
loc_825906F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258ef70
	sub_8258EF70(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82590438
	sub_82590438(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x825906f0
	if (!cr6.eq) goto loc_825906F0;
loc_8259073C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82590740"))) PPC_WEAK_FUNC(sub_82590740);
PPC_FUNC_IMPL(__imp__sub_82590740) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590744"))) PPC_WEAK_FUNC(sub_82590744);
PPC_FUNC_IMPL(__imp__sub_82590744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590748"))) PPC_WEAK_FUNC(sub_82590748);
PPC_FUNC_IMPL(__imp__sub_82590748) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826a6cc8
	sub_826A6CC8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x82590798
	if (cr6.eq) goto loc_82590798;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82590798
	if (cr6.eq) goto loc_82590798;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82590798:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x825907c8
	if (cr6.eq) goto loc_825907C8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825907c8
	if (cr6.eq) goto loc_825907C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_825907C8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x825906c8
	sub_825906C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825907E8"))) PPC_WEAK_FUNC(sub_825907E8);
PPC_FUNC_IMPL(__imp__sub_825907E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825907EC"))) PPC_WEAK_FUNC(sub_825907EC);
PPC_FUNC_IMPL(__imp__sub_825907EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825907F0"))) PPC_WEAK_FUNC(sub_825907F0);
PPC_FUNC_IMPL(__imp__sub_825907F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82590748
	sub_82590748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258f7c0
	sub_8258F7C0(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826a7a38
	sub_826A7A38(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259087C"))) PPC_WEAK_FUNC(sub_8259087C);
PPC_FUNC_IMPL(__imp__sub_8259087C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590880"))) PPC_WEAK_FUNC(sub_82590880);
PPC_FUNC_IMPL(__imp__sub_82590880) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-14644
	ctx.r8.s64 = ctx.r10.s64 + -14644;
	// addi r7,r9,-14700
	ctx.r7.s64 = ctx.r9.s64 + -14700;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825908D0"))) PPC_WEAK_FUNC(sub_825908D0);
PPC_FUNC_IMPL(__imp__sub_825908D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825908D4"))) PPC_WEAK_FUNC(sub_825908D4);
PPC_FUNC_IMPL(__imp__sub_825908D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825908D8"))) PPC_WEAK_FUNC(sub_825908D8);
PPC_FUNC_IMPL(__imp__sub_825908D8) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590984
	if (cr6.eq) goto loc_82590984;
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590984
	if (cr6.eq) goto loc_82590984;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82590984
	if (!cr6.eq) goto loc_82590984;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// bl 0x824250e8
	sub_824250E8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82590988
	if (cr6.eq) goto loc_82590988;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82590984:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82590988:
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82590990"))) PPC_WEAK_FUNC(sub_82590990);
PPC_FUNC_IMPL(__imp__sub_82590990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590994"))) PPC_WEAK_FUNC(sub_82590994);
PPC_FUNC_IMPL(__imp__sub_82590994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590998"))) PPC_WEAK_FUNC(sub_82590998);
PPC_FUNC_IMPL(__imp__sub_82590998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825909A8"))) PPC_WEAK_FUNC(sub_825909A8);
PPC_FUNC_IMPL(__imp__sub_825909A8) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82590a20
	if (cr6.eq) goto loc_82590A20;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,17676
	ctx.r4.s64 = ctx.r6.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82590A20:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82590A38"))) PPC_WEAK_FUNC(sub_82590A38);
PPC_FUNC_IMPL(__imp__sub_82590A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590A3C"))) PPC_WEAK_FUNC(sub_82590A3C);
PPC_FUNC_IMPL(__imp__sub_82590A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590A40"))) PPC_WEAK_FUNC(sub_82590A40);
PPC_FUNC_IMPL(__imp__sub_82590A40) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14644
	ctx.r9.s64 = r11.s64 + -14644;
	// addi r8,r10,-14700
	ctx.r8.s64 = ctx.r10.s64 + -14700;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82590a90
	if (cr6.eq) goto loc_82590A90;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82590A90:
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

__attribute__((alias("__imp__sub_82590AA4"))) PPC_WEAK_FUNC(sub_82590AA4);
PPC_FUNC_IMPL(__imp__sub_82590AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590AA8"))) PPC_WEAK_FUNC(sub_82590AA8);
PPC_FUNC_IMPL(__imp__sub_82590AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82590AAC"))) PPC_WEAK_FUNC(sub_82590AAC);
PPC_FUNC_IMPL(__imp__sub_82590AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82590a40
	sub_82590A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590AB0"))) PPC_WEAK_FUNC(sub_82590AB0);
PPC_FUNC_IMPL(__imp__sub_82590AB0) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-14524
	ctx.r8.s64 = ctx.r10.s64 + -14524;
	// addi r7,r9,-14580
	ctx.r7.s64 = ctx.r9.s64 + -14580;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_82590B08"))) PPC_WEAK_FUNC(sub_82590B08);
PPC_FUNC_IMPL(__imp__sub_82590B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590B0C"))) PPC_WEAK_FUNC(sub_82590B0C);
PPC_FUNC_IMPL(__imp__sub_82590B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590B10"))) PPC_WEAK_FUNC(sub_82590B10);
PPC_FUNC_IMPL(__imp__sub_82590B10) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590b80
	if (cr6.eq) goto loc_82590B80;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82590b80
	if (!cr6.eq) goto loc_82590B80;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82590B80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82590B84"))) PPC_WEAK_FUNC(sub_82590B84);
PPC_FUNC_IMPL(__imp__sub_82590B84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590B88"))) PPC_WEAK_FUNC(sub_82590B88);
PPC_FUNC_IMPL(__imp__sub_82590B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590B98"))) PPC_WEAK_FUNC(sub_82590B98);
PPC_FUNC_IMPL(__imp__sub_82590B98) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590bf8
	if (cr6.eq) goto loc_82590BF8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x82590bf8
	if (!cr6.eq) goto loc_82590BF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_82590BF8:
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

__attribute__((alias("__imp__sub_82590C0C"))) PPC_WEAK_FUNC(sub_82590C0C);
PPC_FUNC_IMPL(__imp__sub_82590C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590C10"))) PPC_WEAK_FUNC(sub_82590C10);
PPC_FUNC_IMPL(__imp__sub_82590C10) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82590c88
	if (cr6.eq) goto loc_82590C88;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,17676
	ctx.r4.s64 = ctx.r6.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82590C88:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82590CA0"))) PPC_WEAK_FUNC(sub_82590CA0);
PPC_FUNC_IMPL(__imp__sub_82590CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590CA4"))) PPC_WEAK_FUNC(sub_82590CA4);
PPC_FUNC_IMPL(__imp__sub_82590CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590CA8"))) PPC_WEAK_FUNC(sub_82590CA8);
PPC_FUNC_IMPL(__imp__sub_82590CA8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82590cd8
	if (cr6.eq) goto loc_82590CD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82590cdc
	if (!cr6.eq) goto loc_82590CDC;
loc_82590CD8:
	// li r11,0
	r11.s64 = 0;
loc_82590CDC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19140);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,148
	ctx.r4.s64 = r28.s64 + 148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82590d30
	if (!cr6.eq) goto loc_82590D30;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82590d30
	if (!cr6.eq) goto loc_82590D30;
	// lwz r11,19140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82590D30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82590D34"))) PPC_WEAK_FUNC(sub_82590D34);
PPC_FUNC_IMPL(__imp__sub_82590D34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82590D38"))) PPC_WEAK_FUNC(sub_82590D38);
PPC_FUNC_IMPL(__imp__sub_82590D38) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,2968
	r30.s64 = r11.s64 + 2968;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82590d70
	if (cr6.eq) goto loc_82590D70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82590d74
	if (!cr6.eq) goto loc_82590D74;
loc_82590D70:
	// li r11,0
	r11.s64 = 0;
loc_82590D74:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,5148
	ctx.r3.s64 = ctx.r9.s64 + 5148;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19140(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19140);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82590DC4"))) PPC_WEAK_FUNC(sub_82590DC4);
PPC_FUNC_IMPL(__imp__sub_82590DC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590DC8"))) PPC_WEAK_FUNC(sub_82590DC8);
PPC_FUNC_IMPL(__imp__sub_82590DC8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14524
	ctx.r9.s64 = r11.s64 + -14524;
	// addi r8,r10,-14580
	ctx.r8.s64 = ctx.r10.s64 + -14580;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82590e24
	if (cr6.eq) goto loc_82590E24;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82590E24:
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

__attribute__((alias("__imp__sub_82590E38"))) PPC_WEAK_FUNC(sub_82590E38);
PPC_FUNC_IMPL(__imp__sub_82590E38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590E3C"))) PPC_WEAK_FUNC(sub_82590E3C);
PPC_FUNC_IMPL(__imp__sub_82590E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590E40"))) PPC_WEAK_FUNC(sub_82590E40);
PPC_FUNC_IMPL(__imp__sub_82590E40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82590E44"))) PPC_WEAK_FUNC(sub_82590E44);
PPC_FUNC_IMPL(__imp__sub_82590E44) {
	PPC_FUNC_PROLOGUE();
	// b 0x82590dc8
	sub_82590DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590E48"))) PPC_WEAK_FUNC(sub_82590E48);
PPC_FUNC_IMPL(__imp__sub_82590E48) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14404
	ctx.r9.s64 = r11.s64 + -14404;
	// addi r8,r10,-14460
	ctx.r8.s64 = ctx.r10.s64 + -14460;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,196(r31)
	PPC_STORE_U8(r31.u32 + 196, r11.u8);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82590EB0"))) PPC_WEAK_FUNC(sub_82590EB0);
PPC_FUNC_IMPL(__imp__sub_82590EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590EB4"))) PPC_WEAK_FUNC(sub_82590EB4);
PPC_FUNC_IMPL(__imp__sub_82590EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590EB8"))) PPC_WEAK_FUNC(sub_82590EB8);
PPC_FUNC_IMPL(__imp__sub_82590EB8) {
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
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590f40
	if (cr6.eq) goto loc_82590F40;
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590f40
	if (cr6.eq) goto loc_82590F40;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82590f40
	if (!cr6.eq) goto loc_82590F40;
	// lbz r11,196(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82590f48
	if (!cr6.eq) goto loc_82590F48;
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r30,200(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82590F40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82590F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82590F4C"))) PPC_WEAK_FUNC(sub_82590F4C);
PPC_FUNC_IMPL(__imp__sub_82590F4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82590F50"))) PPC_WEAK_FUNC(sub_82590F50);
PPC_FUNC_IMPL(__imp__sub_82590F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590F64"))) PPC_WEAK_FUNC(sub_82590F64);
PPC_FUNC_IMPL(__imp__sub_82590F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82590F68"))) PPC_WEAK_FUNC(sub_82590F68);
PPC_FUNC_IMPL(__imp__sub_82590F68) {
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
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82590fc8
	if (cr6.eq) goto loc_82590FC8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x82590fc8
	if (!cr6.eq) goto loc_82590FC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_82590FC8:
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

__attribute__((alias("__imp__sub_82590FDC"))) PPC_WEAK_FUNC(sub_82590FDC);
PPC_FUNC_IMPL(__imp__sub_82590FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590FE0"))) PPC_WEAK_FUNC(sub_82590FE0);
PPC_FUNC_IMPL(__imp__sub_82590FE0) {
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
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591040
	if (cr6.eq) goto loc_82591040;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x82591040
	if (!cr6.eq) goto loc_82591040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82591040:
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

__attribute__((alias("__imp__sub_82591054"))) PPC_WEAK_FUNC(sub_82591054);
PPC_FUNC_IMPL(__imp__sub_82591054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591058"))) PPC_WEAK_FUNC(sub_82591058);
PPC_FUNC_IMPL(__imp__sub_82591058) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825910f4
	if (cr6.eq) goto loc_825910F4;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,200(r30)
	PPC_STORE_U32(r30.u32 + 200, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,20536
	ctx.r4.s64 = ctx.r6.s64 + 20536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r3.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17676
	ctx.r4.s64 = r11.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,208(r30)
	PPC_STORE_U32(r30.u32 + 208, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825910F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259110C"))) PPC_WEAK_FUNC(sub_8259110C);
PPC_FUNC_IMPL(__imp__sub_8259110C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591110"))) PPC_WEAK_FUNC(sub_82591110);
PPC_FUNC_IMPL(__imp__sub_82591110) {
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
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82591140
	if (cr6.eq) goto loc_82591140;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82591144
	if (!cr6.eq) goto loc_82591144;
loc_82591140:
	// li r11,0
	r11.s64 = 0;
loc_82591144:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19144);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,140
	ctx.r4.s64 = r28.s64 + 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591198
	if (!cr6.eq) goto loc_82591198;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591198
	if (!cr6.eq) goto loc_82591198;
	// lwz r11,19144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19144);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82591198:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825911b4
	if (cr6.eq) goto loc_825911B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825911b8
	if (!cr6.eq) goto loc_825911B8;
loc_825911B4:
	// li r11,0
	r11.s64 = 0;
loc_825911B8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,168
	ctx.r4.s64 = r28.s64 + 168;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8259120c
	if (!cr6.eq) goto loc_8259120C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8259120c
	if (!cr6.eq) goto loc_8259120C;
	// lwz r11,19148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8259120C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82591210"))) PPC_WEAK_FUNC(sub_82591210);
PPC_FUNC_IMPL(__imp__sub_82591210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82591214"))) PPC_WEAK_FUNC(sub_82591214);
PPC_FUNC_IMPL(__imp__sub_82591214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591218"))) PPC_WEAK_FUNC(sub_82591218);
PPC_FUNC_IMPL(__imp__sub_82591218) {
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
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r28,r11,3944
	r28.s64 = r11.s64 + 3944;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82591250
	if (cr6.eq) goto loc_82591250;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82591254
	if (!cr6.eq) goto loc_82591254;
loc_82591250:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82591254:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,5100
	ctx.r3.s64 = ctx.r10.s64 + 5100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19144(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19144);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32167
	r11.s64 = -2108096512;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,4064
	r28.s64 = r11.s64 + 4064;
	// beq cr6,0x825912c8
	if (cr6.eq) goto loc_825912C8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825912cc
	if (!cr6.eq) goto loc_825912CC;
loc_825912C8:
	// li r11,0
	r11.s64 = 0;
loc_825912CC:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,5052
	ctx.r3.s64 = ctx.r10.s64 + 5052;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,168
	ctx.r4.s64 = r31.s64 + 168;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82591318"))) PPC_WEAK_FUNC(sub_82591318);
PPC_FUNC_IMPL(__imp__sub_82591318) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8259131C"))) PPC_WEAK_FUNC(sub_8259131C);
PPC_FUNC_IMPL(__imp__sub_8259131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591320"))) PPC_WEAK_FUNC(sub_82591320);
PPC_FUNC_IMPL(__imp__sub_82591320) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14404
	ctx.r9.s64 = r11.s64 + -14404;
	// addi r8,r10,-14460
	ctx.r8.s64 = ctx.r10.s64 + -14460;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82591384
	if (cr6.eq) goto loc_82591384;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82591384:
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

__attribute__((alias("__imp__sub_82591398"))) PPC_WEAK_FUNC(sub_82591398);
PPC_FUNC_IMPL(__imp__sub_82591398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259139C"))) PPC_WEAK_FUNC(sub_8259139C);
PPC_FUNC_IMPL(__imp__sub_8259139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825913A0"))) PPC_WEAK_FUNC(sub_825913A0);
PPC_FUNC_IMPL(__imp__sub_825913A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_825913A4"))) PPC_WEAK_FUNC(sub_825913A4);
PPC_FUNC_IMPL(__imp__sub_825913A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82591320
	sub_82591320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825913A8"))) PPC_WEAK_FUNC(sub_825913A8);
PPC_FUNC_IMPL(__imp__sub_825913A8) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-14284
	ctx.r8.s64 = ctx.r10.s64 + -14284;
	// addi r7,r9,-14340
	ctx.r7.s64 = ctx.r9.s64 + -14340;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_82591400"))) PPC_WEAK_FUNC(sub_82591400);
PPC_FUNC_IMPL(__imp__sub_82591400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591404"))) PPC_WEAK_FUNC(sub_82591404);
PPC_FUNC_IMPL(__imp__sub_82591404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591408"))) PPC_WEAK_FUNC(sub_82591408);
PPC_FUNC_IMPL(__imp__sub_82591408) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591478
	if (cr6.eq) goto loc_82591478;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591478
	if (!cr6.eq) goto loc_82591478;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82591478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259147C"))) PPC_WEAK_FUNC(sub_8259147C);
PPC_FUNC_IMPL(__imp__sub_8259147C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591480"))) PPC_WEAK_FUNC(sub_82591480);
PPC_FUNC_IMPL(__imp__sub_82591480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591490"))) PPC_WEAK_FUNC(sub_82591490);
PPC_FUNC_IMPL(__imp__sub_82591490) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825914f0
	if (cr6.eq) goto loc_825914F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x825914f0
	if (!cr6.eq) goto loc_825914F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_825914F0:
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

__attribute__((alias("__imp__sub_82591504"))) PPC_WEAK_FUNC(sub_82591504);
PPC_FUNC_IMPL(__imp__sub_82591504) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591508"))) PPC_WEAK_FUNC(sub_82591508);
PPC_FUNC_IMPL(__imp__sub_82591508) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82591580
	if (cr6.eq) goto loc_82591580;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,17676
	ctx.r4.s64 = ctx.r6.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82591580:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82591598"))) PPC_WEAK_FUNC(sub_82591598);
PPC_FUNC_IMPL(__imp__sub_82591598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259159C"))) PPC_WEAK_FUNC(sub_8259159C);
PPC_FUNC_IMPL(__imp__sub_8259159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825915A0"))) PPC_WEAK_FUNC(sub_825915A0);
PPC_FUNC_IMPL(__imp__sub_825915A0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825915d0
	if (cr6.eq) goto loc_825915D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825915d4
	if (!cr6.eq) goto loc_825915D4;
loc_825915D0:
	// li r11,0
	r11.s64 = 0;
loc_825915D4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19136);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,148
	ctx.r4.s64 = r28.s64 + 148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591628
	if (!cr6.eq) goto loc_82591628;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591628
	if (!cr6.eq) goto loc_82591628;
	// lwz r11,19136(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82591628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259162C"))) PPC_WEAK_FUNC(sub_8259162C);
PPC_FUNC_IMPL(__imp__sub_8259162C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82591630"))) PPC_WEAK_FUNC(sub_82591630);
PPC_FUNC_IMPL(__imp__sub_82591630) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,5264
	r30.s64 = r11.s64 + 5264;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82591668
	if (cr6.eq) goto loc_82591668;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259166c
	if (!cr6.eq) goto loc_8259166C;
loc_82591668:
	// li r11,0
	r11.s64 = 0;
loc_8259166C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,5192
	ctx.r3.s64 = ctx.r9.s64 + 5192;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19136(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19136);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825916BC"))) PPC_WEAK_FUNC(sub_825916BC);
PPC_FUNC_IMPL(__imp__sub_825916BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825916C0"))) PPC_WEAK_FUNC(sub_825916C0);
PPC_FUNC_IMPL(__imp__sub_825916C0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14284
	ctx.r9.s64 = r11.s64 + -14284;
	// addi r8,r10,-14340
	ctx.r8.s64 = ctx.r10.s64 + -14340;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8259171c
	if (cr6.eq) goto loc_8259171C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259171C:
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

__attribute__((alias("__imp__sub_82591730"))) PPC_WEAK_FUNC(sub_82591730);
PPC_FUNC_IMPL(__imp__sub_82591730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591734"))) PPC_WEAK_FUNC(sub_82591734);
PPC_FUNC_IMPL(__imp__sub_82591734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591738"))) PPC_WEAK_FUNC(sub_82591738);
PPC_FUNC_IMPL(__imp__sub_82591738) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259173C"))) PPC_WEAK_FUNC(sub_8259173C);
PPC_FUNC_IMPL(__imp__sub_8259173C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825916c0
	sub_825916C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591740"))) PPC_WEAK_FUNC(sub_82591740);
PPC_FUNC_IMPL(__imp__sub_82591740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591744"))) PPC_WEAK_FUNC(sub_82591744);
PPC_FUNC_IMPL(__imp__sub_82591744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591748"))) PPC_WEAK_FUNC(sub_82591748);
PPC_FUNC_IMPL(__imp__sub_82591748) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259174C"))) PPC_WEAK_FUNC(sub_8259174C);
PPC_FUNC_IMPL(__imp__sub_8259174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591750"))) PPC_WEAK_FUNC(sub_82591750);
PPC_FUNC_IMPL(__imp__sub_82591750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591764"))) PPC_WEAK_FUNC(sub_82591764);
PPC_FUNC_IMPL(__imp__sub_82591764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591768"))) PPC_WEAK_FUNC(sub_82591768);
PPC_FUNC_IMPL(__imp__sub_82591768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259176C"))) PPC_WEAK_FUNC(sub_8259176C);
PPC_FUNC_IMPL(__imp__sub_8259176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591770"))) PPC_WEAK_FUNC(sub_82591770);
PPC_FUNC_IMPL(__imp__sub_82591770) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8259180c
	if (cr6.eq) goto loc_8259180C;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,20536
	ctx.r4.s64 = ctx.r6.s64 + 20536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,17676
	ctx.r4.s64 = r11.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8259180C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82591824"))) PPC_WEAK_FUNC(sub_82591824);
PPC_FUNC_IMPL(__imp__sub_82591824) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591828"))) PPC_WEAK_FUNC(sub_82591828);
PPC_FUNC_IMPL(__imp__sub_82591828) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,-14148
	ctx.r9.s64 = r11.s64 + -14148;
	// addi r8,r10,-14208
	ctx.r8.s64 = ctx.r10.s64 + -14208;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-14224
	r29.s64 = r11.s64 + -14224;
	// stw r7,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r30,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r30.u8);
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825918f0
	if (cr6.eq) goto loc_825918F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825918F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825918F8"))) PPC_WEAK_FUNC(sub_825918F8);
PPC_FUNC_IMPL(__imp__sub_825918F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825918FC"))) PPC_WEAK_FUNC(sub_825918FC);
PPC_FUNC_IMPL(__imp__sub_825918FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591900"))) PPC_WEAK_FUNC(sub_82591900);
PPC_FUNC_IMPL(__imp__sub_82591900) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14148
	ctx.r9.s64 = r11.s64 + -14148;
	// addi r8,r10,-14208
	ctx.r8.s64 = ctx.r10.s64 + -14208;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82591950
	if (cr6.eq) goto loc_82591950;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82591950:
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

__attribute__((alias("__imp__sub_82591964"))) PPC_WEAK_FUNC(sub_82591964);
PPC_FUNC_IMPL(__imp__sub_82591964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591968"))) PPC_WEAK_FUNC(sub_82591968);
PPC_FUNC_IMPL(__imp__sub_82591968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259196C"))) PPC_WEAK_FUNC(sub_8259196C);
PPC_FUNC_IMPL(__imp__sub_8259196C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82591900
	sub_82591900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591970"))) PPC_WEAK_FUNC(sub_82591970);
PPC_FUNC_IMPL(__imp__sub_82591970) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14028
	ctx.r9.s64 = r11.s64 + -14028;
	// addi r8,r10,-14084
	ctx.r8.s64 = ctx.r10.s64 + -14084;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825919BC"))) PPC_WEAK_FUNC(sub_825919BC);
PPC_FUNC_IMPL(__imp__sub_825919BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825919C0"))) PPC_WEAK_FUNC(sub_825919C0);
PPC_FUNC_IMPL(__imp__sub_825919C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825919CC"))) PPC_WEAK_FUNC(sub_825919CC);
PPC_FUNC_IMPL(__imp__sub_825919CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825919D0"))) PPC_WEAK_FUNC(sub_825919D0);
PPC_FUNC_IMPL(__imp__sub_825919D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825919D0"))) PPC_WEAK_FUNC(sub_825919D0);
PPC_FUNC_IMPL(__imp__sub_825919D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825919D4"))) PPC_WEAK_FUNC(sub_825919D4);
PPC_FUNC_IMPL(__imp__sub_825919D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825919D8"))) PPC_WEAK_FUNC(sub_825919D8);
PPC_FUNC_IMPL(__imp__sub_825919D8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825919D8"))) PPC_WEAK_FUNC(sub_825919D8);
PPC_FUNC_IMPL(__imp__sub_825919D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585bd0
	sub_82585BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825919DC"))) PPC_WEAK_FUNC(sub_825919DC);
PPC_FUNC_IMPL(__imp__sub_825919DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825919E0"))) PPC_WEAK_FUNC(sub_825919E0);
PPC_FUNC_IMPL(__imp__sub_825919E0) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591a40
	if (cr6.eq) goto loc_82591A40;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
loc_82591A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82591A44"))) PPC_WEAK_FUNC(sub_82591A44);
PPC_FUNC_IMPL(__imp__sub_82591A44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591A48"))) PPC_WEAK_FUNC(sub_82591A48);
PPC_FUNC_IMPL(__imp__sub_82591A48) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591aa8
	if (cr6.eq) goto loc_82591AA8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82591AA8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82591ACC"))) PPC_WEAK_FUNC(sub_82591ACC);
PPC_FUNC_IMPL(__imp__sub_82591ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591AD0"))) PPC_WEAK_FUNC(sub_82591AD0);
PPC_FUNC_IMPL(__imp__sub_82591AD0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-14028
	ctx.r9.s64 = r11.s64 + -14028;
	// addi r8,r10,-14084
	ctx.r8.s64 = ctx.r10.s64 + -14084;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82591b20
	if (cr6.eq) goto loc_82591B20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82591B20:
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

__attribute__((alias("__imp__sub_82591B34"))) PPC_WEAK_FUNC(sub_82591B34);
PPC_FUNC_IMPL(__imp__sub_82591B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591B38"))) PPC_WEAK_FUNC(sub_82591B38);
PPC_FUNC_IMPL(__imp__sub_82591B38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82591B3C"))) PPC_WEAK_FUNC(sub_82591B3C);
PPC_FUNC_IMPL(__imp__sub_82591B3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82591ad0
	sub_82591AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591B40"))) PPC_WEAK_FUNC(sub_82591B40);
PPC_FUNC_IMPL(__imp__sub_82591B40) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13908
	ctx.r9.s64 = r11.s64 + -13908;
	// addi r8,r10,-13964
	ctx.r8.s64 = ctx.r10.s64 + -13964;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82591B8C"))) PPC_WEAK_FUNC(sub_82591B8C);
PPC_FUNC_IMPL(__imp__sub_82591B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591B90"))) PPC_WEAK_FUNC(sub_82591B90);
PPC_FUNC_IMPL(__imp__sub_82591B90) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591c10
	if (cr6.eq) goto loc_82591C10;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591c10
	if (!cr6.eq) goto loc_82591C10;
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591bc8
	if (!cr6.eq) goto loc_82591BC8;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_82591BC8:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82591C10:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82591c24
	if (!cr6.eq) goto loc_82591C24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82591C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82591C28"))) PPC_WEAK_FUNC(sub_82591C28);
PPC_FUNC_IMPL(__imp__sub_82591C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591C2C"))) PPC_WEAK_FUNC(sub_82591C2C);
PPC_FUNC_IMPL(__imp__sub_82591C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591C30"))) PPC_WEAK_FUNC(sub_82591C30);
PPC_FUNC_IMPL(__imp__sub_82591C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591C3C"))) PPC_WEAK_FUNC(sub_82591C3C);
PPC_FUNC_IMPL(__imp__sub_82591C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591C40"))) PPC_WEAK_FUNC(sub_82591C40);
PPC_FUNC_IMPL(__imp__sub_82591C40) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591ca0
	if (cr6.eq) goto loc_82591CA0;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82591CA0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82591CC4"))) PPC_WEAK_FUNC(sub_82591CC4);
PPC_FUNC_IMPL(__imp__sub_82591CC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591CC8"))) PPC_WEAK_FUNC(sub_82591CC8);
PPC_FUNC_IMPL(__imp__sub_82591CC8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13908
	ctx.r9.s64 = r11.s64 + -13908;
	// addi r8,r10,-13964
	ctx.r8.s64 = ctx.r10.s64 + -13964;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82591d18
	if (cr6.eq) goto loc_82591D18;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82591D18:
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

__attribute__((alias("__imp__sub_82591D2C"))) PPC_WEAK_FUNC(sub_82591D2C);
PPC_FUNC_IMPL(__imp__sub_82591D2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591D30"))) PPC_WEAK_FUNC(sub_82591D30);
PPC_FUNC_IMPL(__imp__sub_82591D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82591D34"))) PPC_WEAK_FUNC(sub_82591D34);
PPC_FUNC_IMPL(__imp__sub_82591D34) {
	PPC_FUNC_PROLOGUE();
	// b 0x82591cc8
	sub_82591CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591D38"))) PPC_WEAK_FUNC(sub_82591D38);
PPC_FUNC_IMPL(__imp__sub_82591D38) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13780
	ctx.r9.s64 = r11.s64 + -13780;
	// addi r8,r10,-13840
	ctx.r8.s64 = ctx.r10.s64 + -13840;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r7,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r7.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_82591D8C"))) PPC_WEAK_FUNC(sub_82591D8C);
PPC_FUNC_IMPL(__imp__sub_82591D8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591D90"))) PPC_WEAK_FUNC(sub_82591D90);
PPC_FUNC_IMPL(__imp__sub_82591D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591D9C"))) PPC_WEAK_FUNC(sub_82591D9C);
PPC_FUNC_IMPL(__imp__sub_82591D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591DA0"))) PPC_WEAK_FUNC(sub_82591DA0);
PPC_FUNC_IMPL(__imp__sub_82591DA0) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591e10
	if (cr6.eq) goto loc_82591E10;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591e10
	if (!cr6.eq) goto loc_82591E10;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82591E10:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82591e24
	if (!cr6.eq) goto loc_82591E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82591E24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82591E28"))) PPC_WEAK_FUNC(sub_82591E28);
PPC_FUNC_IMPL(__imp__sub_82591E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82591E2C"))) PPC_WEAK_FUNC(sub_82591E2C);
PPC_FUNC_IMPL(__imp__sub_82591E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591E30"))) PPC_WEAK_FUNC(sub_82591E30);
PPC_FUNC_IMPL(__imp__sub_82591E30) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82591e90
	if (cr6.eq) goto loc_82591E90;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82591E90:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82591EB4"))) PPC_WEAK_FUNC(sub_82591EB4);
PPC_FUNC_IMPL(__imp__sub_82591EB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591EB8"))) PPC_WEAK_FUNC(sub_82591EB8);
PPC_FUNC_IMPL(__imp__sub_82591EB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,220(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
}

__attribute__((alias("__imp__sub_82591EDC"))) PPC_WEAK_FUNC(sub_82591EDC);
PPC_FUNC_IMPL(__imp__sub_82591EDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82585ad0
	sub_82585AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591EE0"))) PPC_WEAK_FUNC(sub_82591EE0);
PPC_FUNC_IMPL(__imp__sub_82591EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591EE4"))) PPC_WEAK_FUNC(sub_82591EE4);
PPC_FUNC_IMPL(__imp__sub_82591EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82591EE8"))) PPC_WEAK_FUNC(sub_82591EE8);
PPC_FUNC_IMPL(__imp__sub_82591EE8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82591f18
	if (cr6.eq) goto loc_82591F18;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82591f1c
	if (!cr6.eq) goto loc_82591F1C;
loc_82591F18:
	// li r11,0
	r11.s64 = 0;
loc_82591F1C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,22004(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22004);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,144
	ctx.r4.s64 = r28.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591f70
	if (!cr6.eq) goto loc_82591F70;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82591f70
	if (!cr6.eq) goto loc_82591F70;
	// lwz r11,22004(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22004);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82591F70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82591F74"))) PPC_WEAK_FUNC(sub_82591F74);
PPC_FUNC_IMPL(__imp__sub_82591F74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82591F78"))) PPC_WEAK_FUNC(sub_82591F78);
PPC_FUNC_IMPL(__imp__sub_82591F78) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,7864
	r30.s64 = r11.s64 + 7864;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82591fb0
	if (cr6.eq) goto loc_82591FB0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82591fb4
	if (!cr6.eq) goto loc_82591FB4;
loc_82591FB0:
	// li r11,0
	r11.s64 = 0;
loc_82591FB4:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-26640
	ctx.r3.s64 = ctx.r9.s64 + -26640;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,22004(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22004);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82592004"))) PPC_WEAK_FUNC(sub_82592004);
PPC_FUNC_IMPL(__imp__sub_82592004) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82592008"))) PPC_WEAK_FUNC(sub_82592008);
PPC_FUNC_IMPL(__imp__sub_82592008) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13780
	ctx.r9.s64 = r11.s64 + -13780;
	// addi r8,r10,-13840
	ctx.r8.s64 = ctx.r10.s64 + -13840;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82592064
	if (cr6.eq) goto loc_82592064;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82592064:
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

__attribute__((alias("__imp__sub_82592078"))) PPC_WEAK_FUNC(sub_82592078);
PPC_FUNC_IMPL(__imp__sub_82592078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259207C"))) PPC_WEAK_FUNC(sub_8259207C);
PPC_FUNC_IMPL(__imp__sub_8259207C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592080"))) PPC_WEAK_FUNC(sub_82592080);
PPC_FUNC_IMPL(__imp__sub_82592080) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82592084"))) PPC_WEAK_FUNC(sub_82592084);
PPC_FUNC_IMPL(__imp__sub_82592084) {
	PPC_FUNC_PROLOGUE();
	// b 0x82592008
	sub_82592008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592088"))) PPC_WEAK_FUNC(sub_82592088);
PPC_FUNC_IMPL(__imp__sub_82592088) {
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
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-13660
	ctx.r8.s64 = ctx.r10.s64 + -13660;
	// addi r7,r9,-13716
	ctx.r7.s64 = ctx.r9.s64 + -13716;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
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

__attribute__((alias("__imp__sub_825920E0"))) PPC_WEAK_FUNC(sub_825920E0);
PPC_FUNC_IMPL(__imp__sub_825920E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825920E4"))) PPC_WEAK_FUNC(sub_825920E4);
PPC_FUNC_IMPL(__imp__sub_825920E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825920E8"))) PPC_WEAK_FUNC(sub_825920E8);
PPC_FUNC_IMPL(__imp__sub_825920E8) {
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
	// lwz r11,140(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82592158
	if (cr6.eq) goto loc_82592158;
	// lbz r11,17(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82592158
	if (!cr6.eq) goto loc_82592158;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82585c70
	sub_82585C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585bd0
	sub_82585BD0(ctx, base);
loc_82592158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259215C"))) PPC_WEAK_FUNC(sub_8259215C);
PPC_FUNC_IMPL(__imp__sub_8259215C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82592160"))) PPC_WEAK_FUNC(sub_82592160);
PPC_FUNC_IMPL(__imp__sub_82592160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592170"))) PPC_WEAK_FUNC(sub_82592170);
PPC_FUNC_IMPL(__imp__sub_82592170) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825921d0
	if (cr6.eq) goto loc_825921D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// bne cr6,0x825921d0
	if (!cr6.eq) goto loc_825921D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585ad0
	sub_82585AD0(ctx, base);
loc_825921D0:
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

__attribute__((alias("__imp__sub_825921E4"))) PPC_WEAK_FUNC(sub_825921E4);
PPC_FUNC_IMPL(__imp__sub_825921E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825921E8"))) PPC_WEAK_FUNC(sub_825921E8);
PPC_FUNC_IMPL(__imp__sub_825921E8) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82592260
	if (cr6.eq) goto loc_82592260;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,17676
	ctx.r4.s64 = ctx.r6.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82592260:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82592278"))) PPC_WEAK_FUNC(sub_82592278);
PPC_FUNC_IMPL(__imp__sub_82592278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259227C"))) PPC_WEAK_FUNC(sub_8259227C);
PPC_FUNC_IMPL(__imp__sub_8259227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592280"))) PPC_WEAK_FUNC(sub_82592280);
PPC_FUNC_IMPL(__imp__sub_82592280) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825922b0
	if (cr6.eq) goto loc_825922B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825922b4
	if (!cr6.eq) goto loc_825922B4;
loc_825922B0:
	// li r11,0
	r11.s64 = 0;
loc_825922B4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19320);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,148
	ctx.r4.s64 = r28.s64 + 148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82592308
	if (!cr6.eq) goto loc_82592308;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82592308
	if (!cr6.eq) goto loc_82592308;
	// lwz r11,19320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19320);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82592308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259230C"))) PPC_WEAK_FUNC(sub_8259230C);
PPC_FUNC_IMPL(__imp__sub_8259230C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82592310"))) PPC_WEAK_FUNC(sub_82592310);
PPC_FUNC_IMPL(__imp__sub_82592310) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32167
	r11.s64 = -2108096512;
	// addi r30,r11,8560
	r30.s64 = r11.s64 + 8560;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82592348
	if (cr6.eq) goto loc_82592348;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259234c
	if (!cr6.eq) goto loc_8259234C;
loc_82592348:
	// li r11,0
	r11.s64 = 0;
loc_8259234C:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,2808
	ctx.r3.s64 = ctx.r9.s64 + 2808;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19320(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19320);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259239C"))) PPC_WEAK_FUNC(sub_8259239C);
PPC_FUNC_IMPL(__imp__sub_8259239C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825923A0"))) PPC_WEAK_FUNC(sub_825923A0);
PPC_FUNC_IMPL(__imp__sub_825923A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13660
	ctx.r9.s64 = r11.s64 + -13660;
	// addi r8,r10,-13716
	ctx.r8.s64 = ctx.r10.s64 + -13716;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825923fc
	if (cr6.eq) goto loc_825923FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825923FC:
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

__attribute__((alias("__imp__sub_82592410"))) PPC_WEAK_FUNC(sub_82592410);
PPC_FUNC_IMPL(__imp__sub_82592410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592414"))) PPC_WEAK_FUNC(sub_82592414);
PPC_FUNC_IMPL(__imp__sub_82592414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592418"))) PPC_WEAK_FUNC(sub_82592418);
PPC_FUNC_IMPL(__imp__sub_82592418) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8259241C"))) PPC_WEAK_FUNC(sub_8259241C);
PPC_FUNC_IMPL(__imp__sub_8259241C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825923a0
	sub_825923A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592420"))) PPC_WEAK_FUNC(sub_82592420);
PPC_FUNC_IMPL(__imp__sub_82592420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592424"))) PPC_WEAK_FUNC(sub_82592424);
PPC_FUNC_IMPL(__imp__sub_82592424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592428"))) PPC_WEAK_FUNC(sub_82592428);
PPC_FUNC_IMPL(__imp__sub_82592428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259242C"))) PPC_WEAK_FUNC(sub_8259242C);
PPC_FUNC_IMPL(__imp__sub_8259242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592430"))) PPC_WEAK_FUNC(sub_82592430);
PPC_FUNC_IMPL(__imp__sub_82592430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592448"))) PPC_WEAK_FUNC(sub_82592448);
PPC_FUNC_IMPL(__imp__sub_82592448) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,220(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82592508
	if (cr6.eq) goto loc_82592508;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,18232
	ctx.r4.s64 = ctx.r9.s64 + 18232;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r4,r6,20536
	ctx.r4.s64 = ctx.r6.s64 + 20536;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r4,r11,20576
	ctx.r4.s64 = r11.s64 + 20576;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r3.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,27112
	ctx.r4.s64 = ctx.r8.s64 + 27112;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// stw r3,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82592508:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82592520"))) PPC_WEAK_FUNC(sub_82592520);
PPC_FUNC_IMPL(__imp__sub_82592520) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82592524"))) PPC_WEAK_FUNC(sub_82592524);
PPC_FUNC_IMPL(__imp__sub_82592524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592528"))) PPC_WEAK_FUNC(sub_82592528);
PPC_FUNC_IMPL(__imp__sub_82592528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
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
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf8
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,184(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8259289c
	if (!cr6.eq) goto loc_8259289C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825925ac
	if (cr6.eq) goto loc_825925AC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x825925bc
	goto loc_825925BC;
loc_825925AC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-29908
	ctx.r3.s64 = r11.s64 + -29908;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_825925BC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// subf r10,r6,r11
	ctx.r10.s64 = r11.s64 - ctx.r6.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82592640
	if (!cr6.eq) goto loc_82592640;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82592640
	if (!cr6.gt) goto loc_82592640;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r11,r31,156
	r11.s64 = r31.s64 + 156;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82592640
	if (cr6.eq) goto loc_82592640;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_82592620:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259263c
	if (cr6.eq) goto loc_8259263C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82592620
	if (!cr6.eq) goto loc_82592620;
	// b 0x82592640
	goto loc_82592640;
loc_8259263C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_82592640:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259288c
	if (cr6.eq) goto loc_8259288C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x823ede80
	sub_823EDE80(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// bgt cr6,0x825926d8
	if (cr6.gt) goto loc_825926D8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825926D8:
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82592700
	if (cr6.eq) goto loc_82592700;
	// clrlwi r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82592700
	if (cr6.eq) goto loc_82592700;
	// lbz r9,189(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82592740
	if (cr6.eq) goto loc_82592740;
loc_82592700:
	// lbz r9,188(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 188);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82592740
	if (!cr6.eq) goto loc_82592740;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82592738
	if (!cr6.eq) goto loc_82592738;
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82592738
	if (cr6.eq) goto loc_82592738;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82592738
	if (cr6.eq) goto loc_82592738;
	// lbz r11,189(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82592740
	if (!cr6.eq) goto loc_82592740;
loc_82592738:
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x82592744
	goto loc_82592744;
loc_82592740:
	// li r11,1
	r11.s64 = 1;
loc_82592744:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,140(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f28.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82339968
	sub_82339968(ctx, base);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d3698
	sub_822D3698(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 + f31.f64));
	// lfs f11,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f9,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 + f29.f64));
	// fadds f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 + f28.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r4,-31965
	ctx.r4.s64 = -2094858240;
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r4,9312
	ctx.r6.s64 = ctx.r4.s64 + 9312;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stb r30,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r30.u8);
	// bl 0x82585998
	sub_82585998(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-13592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// stfs f4,96(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f2,104(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f1,108(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f6,80(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f5,84(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x825928b8
	goto loc_825928B8;
loc_8259288C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// b 0x825928ac
	goto loc_825928AC;
loc_8259289C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825928c0
	if (cr6.eq) goto loc_825928C0;
	// li r28,0
	r28.s64 = 0;
loc_825928AC:
	// stb r28,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r28.u8);
	// stb r28,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r28.u8);
	// stb r28,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r28.u8);
loc_825928B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585998
	sub_82585998(ctx, base);
loc_825928C0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825928CC"))) PPC_WEAK_FUNC(sub_825928CC);
PPC_FUNC_IMPL(__imp__sub_825928CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825928D0"))) PPC_WEAK_FUNC(sub_825928D0);
PPC_FUNC_IMPL(__imp__sub_825928D0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82585df8
	sub_82585DF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r8,r11,-13452
	ctx.r8.s64 = r11.s64 + -13452;
	// addi r7,r10,-13512
	ctx.r7.s64 = ctx.r10.s64 + -13512;
	// stw r28,140(r29)
	PPC_STORE_U32(r29.u32 + 140, r28.u32);
	// addi r6,r9,-20080
	ctx.r6.s64 = ctx.r9.s64 + -20080;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r7,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r7.u32);
	// addi r31,r29,156
	r31.s64 = r29.s64 + 156;
	// stw r28,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r28.u32);
	// stw r28,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r28.u32);
	// stw r28,152(r29)
	PPC_STORE_U32(r29.u32 + 152, r28.u32);
	// stw r6,156(r29)
	PPC_STORE_U32(r29.u32 + 156, ctx.r6.u32);
	// stw r28,160(r29)
	PPC_STORE_U32(r29.u32 + 160, r28.u32);
	// stw r28,168(r29)
	PPC_STORE_U32(r29.u32 + 168, r28.u32);
	// stw r28,164(r29)
	PPC_STORE_U32(r29.u32 + 164, r28.u32);
	// stw r28,172(r29)
	PPC_STORE_U32(r29.u32 + 172, r28.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r4,172(r29)
	PPC_STORE_U32(r29.u32 + 172, ctx.r4.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,-1
	r22.s64 = -1;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-18820
	r30.s64 = r11.s64 + -18820;
	// stw r3,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r3.u32);
	// stw r22,184(r29)
	PPC_STORE_U32(r29.u32 + 184, r22.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,188(r29)
	PPC_STORE_U8(r29.u32 + 188, r28.u8);
	// stb r28,189(r29)
	PPC_STORE_U8(r29.u32 + 189, r28.u8);
	// lwz r25,4(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825929d8
	if (cr6.eq) goto loc_825929D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r29)
	PPC_STORE_U32(r29.u32 + 180, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825929D8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-13540
	r30.s64 = r11.s64 + -13540;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82592b58
	if (cr6.eq) goto loc_82592B58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82592a74
	if (!cr6.gt) goto loc_82592A74;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82592A74:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x82592b58
	if (!cr6.gt) goto loc_82592B58;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r23,r11,18440
	r23.s64 = r11.s64 + 18440;
loc_82592A94:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82592aec
	if (cr6.eq) goto loc_82592AEC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82592aec
	if (cr6.eq) goto loc_82592AEC;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82592af0
	if (!cr6.eq) goto loc_82592AF0;
loc_82592AEC:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82592AF0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82592b2c
	if (!cr6.gt) goto loc_82592B2C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82592B2C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82592b4c
	if (cr0.eq) goto loc_82592B4C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82592B4C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x82592a94
	if (cr6.lt) goto loc_82592A94;
loc_82592B58:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// addi r3,r11,-13552
	ctx.r3.s64 = r11.s64 + -13552;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82592bc0
	if (cr6.eq) goto loc_82592BC0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82592bc0
	if (cr6.eq) goto loc_82592BC0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82592bc4
	if (!cr6.eq) goto loc_82592BC4;
loc_82592BC0:
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
loc_82592BC4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,184(r29)
	PPC_STORE_U32(r29.u32 + 184, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r10,-13568
	ctx.r3.s64 = ctx.r10.s64 + -13568;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82592c3c
	if (cr6.eq) goto loc_82592C3C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82592c3c
	if (cr6.eq) goto loc_82592C3C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82592c40
	if (!cr6.eq) goto loc_82592C40;
loc_82592C3C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82592C40:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r11,188(r29)
	PPC_STORE_U8(r29.u32 + 188, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r3,r10,-13584
	ctx.r3.s64 = ctx.r10.s64 + -13584;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82592cb4
	if (cr6.eq) goto loc_82592CB4;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82592cb4
	if (cr6.eq) goto loc_82592CB4;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82592cb8
	if (!cr6.eq) goto loc_82592CB8;
loc_82592CB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82592CB8:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r11,189(r29)
	PPC_STORE_U8(r29.u32 + 189, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82592CD0"))) PPC_WEAK_FUNC(sub_82592CD0);
PPC_FUNC_IMPL(__imp__sub_82592CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82592CD4"))) PPC_WEAK_FUNC(sub_82592CD4);
PPC_FUNC_IMPL(__imp__sub_82592CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592CD8"))) PPC_WEAK_FUNC(sub_82592CD8);
PPC_FUNC_IMPL(__imp__sub_82592CD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82592CDC"))) PPC_WEAK_FUNC(sub_82592CDC);
PPC_FUNC_IMPL(__imp__sub_82592CDC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82592ce0
	goto loc_82592CE0;
loc_82592CE0:
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13452
	ctx.r9.s64 = r11.s64 + -13452;
	// addi r8,r10,-13512
	ctx.r8.s64 = ctx.r10.s64 + -13512;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824629f8
	sub_824629F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82592d3c
	if (cr6.eq) goto loc_82592D3C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82592D3C:
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
}

__attribute__((alias("__imp__sub_82592CE0"))) PPC_WEAK_FUNC(sub_82592CE0);
PPC_FUNC_IMPL(__imp__sub_82592CE0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-13452
	ctx.r9.s64 = r11.s64 + -13452;
	// addi r8,r10,-13512
	ctx.r8.s64 = ctx.r10.s64 + -13512;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824629f8
	sub_824629F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825857b0
	sub_825857B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82592d3c
	if (cr6.eq) goto loc_82592D3C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82592D3C:
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

__attribute__((alias("__imp__sub_82592D54"))) PPC_WEAK_FUNC(sub_82592D54);
PPC_FUNC_IMPL(__imp__sub_82592D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592D58"))) PPC_WEAK_FUNC(sub_82592D58);
PPC_FUNC_IMPL(__imp__sub_82592D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592D5C"))) PPC_WEAK_FUNC(sub_82592D5C);
PPC_FUNC_IMPL(__imp__sub_82592D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82592D60"))) PPC_WEAK_FUNC(sub_82592D60);
PPC_FUNC_IMPL(__imp__sub_82592D60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

