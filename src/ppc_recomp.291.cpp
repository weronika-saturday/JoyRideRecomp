#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8283BF0C"))) PPC_WEAK_FUNC(sub_8283BF0C);
PPC_FUNC_IMPL(__imp__sub_8283BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283BF10"))) PPC_WEAK_FUNC(sub_8283BF10);
PPC_FUNC_IMPL(__imp__sub_8283BF10) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283bf4c
	if (cr6.lt) goto loc_8283BF4C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8283bf50
	if (cr6.lt) goto loc_8283BF50;
loc_8283BF4C:
	// li r11,1
	r11.s64 = 1;
loc_8283BF50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283bfc8
	if (!cr6.eq) goto loc_8283BFC8;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x8283bfa8
	if (!cr6.lt) goto loc_8283BFA8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// b 0x8283bff0
	goto loc_8283BFF0;
loc_8283BFA8:
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82841a48
	sub_82841A48(ctx, base);
	// b 0x8283c008
	goto loc_8283C008;
loc_8283BFC8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8283BFF0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283c000
	if (cr6.eq) goto loc_8283C000;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283C000:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8283C008:
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

__attribute__((alias("__imp__sub_8283C01C"))) PPC_WEAK_FUNC(sub_8283C01C);
PPC_FUNC_IMPL(__imp__sub_8283C01C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C020"))) PPC_WEAK_FUNC(sub_8283C020);
PPC_FUNC_IMPL(__imp__sub_8283C020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283c044
	if (cr6.lt) goto loc_8283C044;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8283c048
	if (cr6.lt) goto loc_8283C048;
loc_8283C044:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8283C048:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8283c0b0
	if (!cr6.eq) goto loc_8283C0B0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8283c084
	if (!cr6.lt) goto loc_8283C084;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
loc_8283C084:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8283C0B0:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8283C0BC"))) PPC_WEAK_FUNC(sub_8283C0BC);
PPC_FUNC_IMPL(__imp__sub_8283C0BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C0C0"))) PPC_WEAK_FUNC(sub_8283C0C0);
PPC_FUNC_IMPL(__imp__sub_8283C0C0) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283c120
	if (!cr6.lt) goto loc_8283C120;
loc_8283C0F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x8283c120
	if (!cr6.lt) goto loc_8283C120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283c020
	sub_8283C020(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8283c0f0
	if (cr6.lt) goto loc_8283C0F0;
loc_8283C120:
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

__attribute__((alias("__imp__sub_8283C134"))) PPC_WEAK_FUNC(sub_8283C134);
PPC_FUNC_IMPL(__imp__sub_8283C134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C138"))) PPC_WEAK_FUNC(sub_8283C138);
PPC_FUNC_IMPL(__imp__sub_8283C138) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r4,16
	r31.s64 = ctx.r4.s64 + 16;
	// li r26,0
	r26.s64 = 0;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r26,8(r29)
	PPC_STORE_U16(r29.u32 + 8, r26.u16);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// bl 0x82841cb0
	sub_82841CB0(ctx, base);
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r26,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r26.u32);
	// bge cr6,0x8283c190
	if (!cr6.lt) goto loc_8283C190;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x8283c1ac
	goto loc_8283C1AC;
loc_8283C190:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8283c1a8
	if (cr6.lt) goto loc_8283C1A8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8283c1ac
	goto loc_8283C1AC;
loc_8283C1A8:
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_8283C1AC:
	// stw r27,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r27.u32);
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8283c1d4
	if (cr6.lt) goto loc_8283C1D4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8283c1d8
	if (cr6.lt) goto loc_8283C1D8;
loc_8283C1D4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8283C1D8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283c264
	if (!cr6.eq) goto loc_8283C264;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8283c220
	if (cr6.lt) goto loc_8283C220;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x8283c224
	if (!cr6.gt) goto loc_8283C224;
loc_8283C220:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283C224:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283c264
	if (!cr6.eq) goto loc_8283C264;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x8283c264
	if (!cr6.gt) goto loc_8283C264;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8283c268
	if (!cr6.lt) goto loc_8283C268;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8283C264:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8283C268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8283C26C"))) PPC_WEAK_FUNC(sub_8283C26C);
PPC_FUNC_IMPL(__imp__sub_8283C26C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8283C270"))) PPC_WEAK_FUNC(sub_8283C270);
PPC_FUNC_IMPL(__imp__sub_8283C270) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c2a4
	if (cr6.eq) goto loc_8283C2A4;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// blt cr6,0x8283c2a8
	if (cr6.lt) goto loc_8283C2A8;
loc_8283C2A4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8283C2A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283c354
	if (!cr6.eq) goto loc_8283C354;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// sth r8,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r8.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8283c2ec
	if (cr6.lt) goto loc_8283C2EC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8283c2f0
	if (cr6.lt) goto loc_8283C2F0;
loc_8283C2EC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8283C2F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283c360
	if (!cr6.eq) goto loc_8283C360;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8283c360
	if (cr6.lt) goto loc_8283C360;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8283c330
	if (cr6.eq) goto loc_8283C330;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283C330:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283c340
	if (cr6.eq) goto loc_8283C340;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283C340:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8283C354:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// sth r29,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r29.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8283C360:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283c370
	if (cr6.eq) goto loc_8283C370;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283C370:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8283C37C"))) PPC_WEAK_FUNC(sub_8283C37C);
PPC_FUNC_IMPL(__imp__sub_8283C37C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8283C380"))) PPC_WEAK_FUNC(sub_8283C380);
PPC_FUNC_IMPL(__imp__sub_8283C380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c3a0
	if (cr6.eq) goto loc_8283C3A0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blt cr6,0x8283c3a4
	if (cr6.lt) goto loc_8283C3A4;
loc_8283C3A0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8283C3A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283c43c
	if (!cr6.eq) goto loc_8283C43C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8283c3e0
	if (cr6.lt) goto loc_8283C3E0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8283c3e4
	if (cr6.lt) goto loc_8283C3E4;
loc_8283C3E0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8283C3E4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// blr 
	return;
loc_8283C43C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
}

__attribute__((alias("__imp__sub_8283C444"))) PPC_WEAK_FUNC(sub_8283C444);
PPC_FUNC_IMPL(__imp__sub_8283C444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C448"))) PPC_WEAK_FUNC(sub_8283C448);
PPC_FUNC_IMPL(__imp__sub_8283C448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_8283C454:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283c474
	if (cr6.eq) goto loc_8283C474;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283c478
	if (cr6.lt) goto loc_8283C478;
loc_8283C474:
	// li r11,1
	r11.s64 = 1;
loc_8283C478:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283c510
	if (!cr6.eq) goto loc_8283C510;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8283c4b4
	if (cr6.lt) goto loc_8283C4B4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8283c4b8
	if (cr6.lt) goto loc_8283C4B8;
loc_8283C4B4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8283C4B8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8283c518
	if (!cr6.eq) goto loc_8283C518;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x8283c518
	if (cr6.lt) goto loc_8283C518;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x8283c518
	if (!cr6.lt) goto loc_8283C518;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8283c518
	goto loc_8283C518;
loc_8283C510:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_8283C518:
	// bdnz 0x8283c454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8283C454;
}

__attribute__((alias("__imp__sub_8283C51C"))) PPC_WEAK_FUNC(sub_8283C51C);
PPC_FUNC_IMPL(__imp__sub_8283C51C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C520"))) PPC_WEAK_FUNC(sub_8283C520);
PPC_FUNC_IMPL(__imp__sub_8283C520) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x8283c548
	if (!cr6.eq) goto loc_8283C548;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8283C548:
	// subf r31,r30,r6
	r31.s64 = ctx.r6.s64 - r30.s64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// bl 0x8283a810
	sub_8283A810(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r31
	r29.u64 = r31.u64;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r24,r28,2,0,29
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283C58C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8283c5ac
	if (cr6.eq) goto loc_8283C5AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x8283c5ac
	if (cr6.lt) goto loc_8283C5AC;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// blt cr6,0x8283c5b0
	if (cr6.lt) goto loc_8283C5B0;
loc_8283C5AC:
	// li r11,1
	r11.s64 = 1;
loc_8283C5B0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283c678
	if (!cr6.eq) goto loc_8283C678;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283c678
	if (cr6.eq) goto loc_8283C678;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwzx r8,r11,r24
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283c624
	if (cr6.eq) goto loc_8283C624;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c5fc
	if (cr6.eq) goto loc_8283C5FC;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283c5fc
	if (!cr6.lt) goto loc_8283C5FC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283c600
	goto loc_8283C600;
loc_8283C5FC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8283C600:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283c614
	if (cr6.eq) goto loc_8283C614;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8283C614:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c624
	if (cr6.eq) goto loc_8283C624;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283C624:
	// subf r31,r7,r9
	r31.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x8283c634
	if (!cr6.gt) goto loc_8283C634;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8283C634:
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// subf r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x8283c58c
	if (!cr6.lt) goto loc_8283C58C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x8283c58c
	goto loc_8283C58C;
loc_8283C678:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r25.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8283C688"))) PPC_WEAK_FUNC(sub_8283C688);
PPC_FUNC_IMPL(__imp__sub_8283C688) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8283C68C"))) PPC_WEAK_FUNC(sub_8283C68C);
PPC_FUNC_IMPL(__imp__sub_8283C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C690"))) PPC_WEAK_FUNC(sub_8283C690);
PPC_FUNC_IMPL(__imp__sub_8283C690) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8283c270
	sub_8283C270(ctx, base);
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// sth r10,60(r31)
	PPC_STORE_U16(r31.u32 + 60, ctx.r10.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8283c6d8
	if (cr6.eq) goto loc_8283C6D8;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283C6D8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283c6e8
	if (cr6.eq) goto loc_8283C6E8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283C6E8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8283C710"))) PPC_WEAK_FUNC(sub_8283C710);
PPC_FUNC_IMPL(__imp__sub_8283C710) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8283C714"))) PPC_WEAK_FUNC(sub_8283C714);
PPC_FUNC_IMPL(__imp__sub_8283C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C718"))) PPC_WEAK_FUNC(sub_8283C718);
PPC_FUNC_IMPL(__imp__sub_8283C718) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8283c380
	sub_8283C380(ctx, base);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c758
	if (cr6.eq) goto loc_8283C758;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8283c75c
	if (cr6.lt) goto loc_8283C75C;
loc_8283C758:
	// li r11,1
	r11.s64 = 1;
loc_8283C75C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c7fc
	if (cr6.eq) goto loc_8283C7FC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283c7a8
	if (cr6.eq) goto loc_8283C7A8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x8283c78c
	if (!cr6.lt) goto loc_8283C78C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8283C78C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8283c7a8
	if (cr6.lt) goto loc_8283C7A8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// blt cr6,0x8283c7ac
	if (cr6.lt) goto loc_8283C7AC;
loc_8283C7A8:
	// li r11,1
	r11.s64 = 1;
loc_8283C7AC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283c7fc
	if (!cr6.eq) goto loc_8283C7FC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// bl 0x82839488
	sub_82839488(ctx, base);
loc_8283C7FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283C80C"))) PPC_WEAK_FUNC(sub_8283C80C);
PPC_FUNC_IMPL(__imp__sub_8283C80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C810"))) PPC_WEAK_FUNC(sub_8283C810);
PPC_FUNC_IMPL(__imp__sub_8283C810) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
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

__attribute__((alias("__imp__sub_8283C848"))) PPC_WEAK_FUNC(sub_8283C848);
PPC_FUNC_IMPL(__imp__sub_8283C848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283C84C"))) PPC_WEAK_FUNC(sub_8283C84C);
PPC_FUNC_IMPL(__imp__sub_8283C84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C850"))) PPC_WEAK_FUNC(sub_8283C850);
PPC_FUNC_IMPL(__imp__sub_8283C850) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8283c87c
	if (!cr6.eq) goto loc_8283C87C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8283C87C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8283C8B4"))) PPC_WEAK_FUNC(sub_8283C8B4);
PPC_FUNC_IMPL(__imp__sub_8283C8B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8283C8B8"))) PPC_WEAK_FUNC(sub_8283C8B8);
PPC_FUNC_IMPL(__imp__sub_8283C8B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8283c96c
	if (cr6.eq) goto loc_8283C96C;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x8283c904
	if (!cr6.eq) goto loc_8283C904;
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283c904
	if (cr6.eq) goto loc_8283C904;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8283C8F4:
	// lhzu r10,2(r11)
	ea = 2 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283c8f4
	if (!cr6.eq) goto loc_8283C8F4;
loc_8283C904:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283c96c
	if (cr6.eq) goto loc_8283C96C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r11.u16);
	// beq cr6,0x8283c96c
	if (cr6.eq) goto loc_8283C96C;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r11.u16);
loc_8283C96C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8283C970"))) PPC_WEAK_FUNC(sub_8283C970);
PPC_FUNC_IMPL(__imp__sub_8283C970) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8283C974"))) PPC_WEAK_FUNC(sub_8283C974);
PPC_FUNC_IMPL(__imp__sub_8283C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283C978"))) PPC_WEAK_FUNC(sub_8283C978);
PPC_FUNC_IMPL(__imp__sub_8283C978) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8283ca20
	if (cr6.eq) goto loc_8283CA20;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// beq cr6,0x8283c9ac
	if (cr6.eq) goto loc_8283C9AC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_8283C9AC:
	// bl 0x82795988
	sub_82795988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8283ca20
	if (cr6.eq) goto loc_8283CA20;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// beq cr6,0x8283ca20
	if (cr6.eq) goto loc_8283CA20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827958c8
	sub_827958C8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
loc_8283CA20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8283CA24"))) PPC_WEAK_FUNC(sub_8283CA24);
PPC_FUNC_IMPL(__imp__sub_8283CA24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8283CA28"))) PPC_WEAK_FUNC(sub_8283CA28);
PPC_FUNC_IMPL(__imp__sub_8283CA28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// sth r11,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r11.u16);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// beq cr6,0x8283ca88
	if (cr6.eq) goto loc_8283CA88;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
loc_8283CA88:
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// sth r11,60(r31)
	PPC_STORE_U16(r31.u32 + 60, r11.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283cac4
	if (cr6.eq) goto loc_8283CAC4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8283cac4
	if (cr6.lt) goto loc_8283CAC4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x8283cac8
	if (cr6.lt) goto loc_8283CAC8;
loc_8283CAC4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8283CAC8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8283cb18
	if (!cr6.eq) goto loc_8283CB18;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// bl 0x82839488
	sub_82839488(ctx, base);
loc_8283CB18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283CB2C"))) PPC_WEAK_FUNC(sub_8283CB2C);
PPC_FUNC_IMPL(__imp__sub_8283CB2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CB30"))) PPC_WEAK_FUNC(sub_8283CB30);
PPC_FUNC_IMPL(__imp__sub_8283CB30) {
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
	// li r30,0
	r30.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r30.u16);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// beq cr6,0x8283cb88
	if (cr6.eq) goto loc_8283CB88;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_8283CB88:
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// sth r30,60(r31)
	PPC_STORE_U16(r31.u32 + 60, r30.u16);
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8283cbd8
	if (cr6.eq) goto loc_8283CBD8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283cbd8
	if (cr6.lt) goto loc_8283CBD8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8283cbdc
	if (cr6.lt) goto loc_8283CBDC;
loc_8283CBD8:
	// li r30,1
	r30.s64 = 1;
loc_8283CBDC:
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283cc28
	if (!cr6.eq) goto loc_8283CC28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// bl 0x8283c138
	sub_8283C138(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82839488
	sub_82839488(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283cc28
	if (cr6.eq) goto loc_8283CC28;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283CC28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8283CC30"))) PPC_WEAK_FUNC(sub_8283CC30);
PPC_FUNC_IMPL(__imp__sub_8283CC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8283CC34"))) PPC_WEAK_FUNC(sub_8283CC34);
PPC_FUNC_IMPL(__imp__sub_8283CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CC38"))) PPC_WEAK_FUNC(sub_8283CC38);
PPC_FUNC_IMPL(__imp__sub_8283CC38) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x8283cc74
	if (!cr6.lt) goto loc_8283CC74;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8283CC74:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x8283cc88
	if (!cr6.eq) goto loc_8283CC88;
	// lis r31,32767
	r31.s64 = 2147418112;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
	// b 0x8283cc8c
	goto loc_8283CC8C;
loc_8283CC88:
	// subf r31,r31,r30
	r31.s64 = r30.s64 - r31.s64;
loc_8283CC8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8283cd28
	if (!cr6.gt) goto loc_8283CD28;
loc_8283CCAC:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283cd28
	if (!cr6.lt) goto loc_8283CD28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8283cd10
	if (cr6.eq) goto loc_8283CD10;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne cr6,0x8283ccf0
	if (!cr6.eq) goto loc_8283CCF0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// b 0x8283cd10
	goto loc_8283CD10;
loc_8283CCF0:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828007c0
	sub_828007C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
loc_8283CD10:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// bl 0x8283c020
	sub_8283C020(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x8283ccac
	if (cr6.gt) goto loc_8283CCAC;
loc_8283CD28:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828021a8
	sub_828021A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283cd50
	if (cr6.eq) goto loc_8283CD50;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283CD50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8283CD58"))) PPC_WEAK_FUNC(sub_8283CD58);
PPC_FUNC_IMPL(__imp__sub_8283CD58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8283CD5C"))) PPC_WEAK_FUNC(sub_8283CD5C);
PPC_FUNC_IMPL(__imp__sub_8283CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CD60"))) PPC_WEAK_FUNC(sub_8283CD60);
PPC_FUNC_IMPL(__imp__sub_8283CD60) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283cdb4
	if (!cr6.lt) goto loc_8283CDB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8283cdb4
	if (cr6.eq) goto loc_8283CDB4;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8283CDB4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283cdc4
	if (cr6.eq) goto loc_8283CDC4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283CDC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283CDD8"))) PPC_WEAK_FUNC(sub_8283CDD8);
PPC_FUNC_IMPL(__imp__sub_8283CDD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283CDDC"))) PPC_WEAK_FUNC(sub_8283CDDC);
PPC_FUNC_IMPL(__imp__sub_8283CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283CDE0"))) PPC_WEAK_FUNC(sub_8283CDE0);
PPC_FUNC_IMPL(__imp__sub_8283CDE0) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// subf r28,r6,r7
	r28.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r29,0
	r29.s64 = 0;
	// addi r23,r11,12292
	r23.s64 = r11.s64 + 12292;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, r29.u16);
	// mr r21,r29
	r21.u64 = r29.u64;
	// sth r29,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, r29.u16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r29.u16);
	// mr r22,r29
	r22.u64 = r29.u64;
	// sth r29,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r29.u16);
	// sth r29,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r29.u16);
	// sth r29,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r29.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// beq cr6,0x8283d004
	if (cr6.eq) goto loc_8283D004;
	// lwz r26,116(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r25,104(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r27,112(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r24,r26,2,0,29
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283CE7C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8283ce9c
	if (cr6.eq) goto loc_8283CE9C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x8283ce9c
	if (cr6.lt) goto loc_8283CE9C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// blt cr6,0x8283cea0
	if (cr6.lt) goto loc_8283CEA0;
loc_8283CE9C:
	// li r11,1
	r11.s64 = 1;
loc_8283CEA0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283d004
	if (!cr6.eq) goto loc_8283D004;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwzx r30,r11,r24
	r30.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283cf0c
	if (cr6.eq) goto loc_8283CF0C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283cee4
	if (cr6.eq) goto loc_8283CEE4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283cee4
	if (!cr6.lt) goto loc_8283CEE4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283cee8
	goto loc_8283CEE8;
loc_8283CEE4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8283CEE8:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283cefc
	if (cr6.eq) goto loc_8283CEFC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8283CEFC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283cf0c
	if (cr6.eq) goto loc_8283CF0C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283CF0C:
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// mr r31,r28
	r31.u64 = r28.u64;
	// blt cr6,0x8283cf1c
	if (cr6.lt) goto loc_8283CF1C;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_8283CF1C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283d004
	if (cr6.eq) goto loc_8283D004;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// add r6,r31,r25
	ctx.r6.u64 = r31.u64 + r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bne cr6,0x8283cf58
	if (!cr6.eq) goto loc_8283CF58;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8283cc38
	sub_8283CC38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x8283cf88
	goto loc_8283CF88;
loc_8283CF58:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8283cc38
	sub_8283CC38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x828007c0
	sub_828007C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_8283CF88:
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8283cfe4
	if (!cr6.eq) goto loc_8283CFE4;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8283cfe4
	if (cr6.eq) goto loc_8283CFE4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// bne cr6,0x8283cfb8
	if (!cr6.eq) goto loc_8283CFB8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
	// b 0x8283cfe4
	goto loc_8283CFE4;
loc_8283CFB8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827ffc58
	sub_827FFC58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
loc_8283CFE4:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r28,r31,r28
	r28.s64 = r28.s64 - r31.s64;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// bge cr6,0x8283cffc
	if (!cr6.lt) goto loc_8283CFFC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_8283CFFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8283ce7c
	if (!cr6.eq) goto loc_8283CE7C;
loc_8283D004:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8283d018
	if (cr6.eq) goto loc_8283D018;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
loc_8283D018:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8283d02c
	if (cr6.eq) goto loc_8283D02C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x827ff6d0
	sub_827FF6D0(ctx, base);
loc_8283D02C:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
}

__attribute__((alias("__imp__sub_8283D04C"))) PPC_WEAK_FUNC(sub_8283D04C);
PPC_FUNC_IMPL(__imp__sub_8283D04C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8283D050"))) PPC_WEAK_FUNC(sub_8283D050);
PPC_FUNC_IMPL(__imp__sub_8283D050) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d0ac
	if (cr6.eq) goto loc_8283D0AC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8283d0ac
	if (cr6.lt) goto loc_8283D0AC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// blt cr6,0x8283d0b0
	if (cr6.lt) goto loc_8283D0B0;
loc_8283D0AC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8283D0B0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8283d0e8
	if (!cr6.eq) goto loc_8283D0E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r28,r10,r11
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8283cd60
	sub_8283CD60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283d0ec
	if (!cr6.eq) goto loc_8283D0EC;
loc_8283D0E8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
loc_8283D0EC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283d0f8
	if (!cr6.eq) goto loc_8283D0F8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_8283D0F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8283d104
	if (cr6.eq) goto loc_8283D104;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8283D104:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283d110
	if (cr6.eq) goto loc_8283D110;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_8283D110:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8283D114"))) PPC_WEAK_FUNC(sub_8283D114);
PPC_FUNC_IMPL(__imp__sub_8283D114) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8283D118"))) PPC_WEAK_FUNC(sub_8283D118);
PPC_FUNC_IMPL(__imp__sub_8283D118) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-15440(r1)
	ea = -15440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r3,15460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 15460, ctx.r3.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r4,15468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 15468, ctx.r4.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r4,27508(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27508);
	// stw r9,15264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 15264, ctx.r9.u32);
	// bl 0x82760cf8
	sub_82760CF8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r16,-32248
	r16.s64 = -2113404928;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// lis r18,-32248
	r18.s64 = -2113404928;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r11,r16,26084
	r11.s64 = r16.s64 + 26084;
	// lis r16,-32248
	r16.s64 = -2113404928;
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// lis r19,-32248
	r19.s64 = -2113404928;
	// addi r10,r16,26076
	ctx.r10.s64 = r16.s64 + 26076;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// lis r16,-32248
	r16.s64 = -2113404928;
	// lis r23,-32248
	r23.s64 = -2113404928;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// addi r9,r16,26068
	ctx.r9.s64 = r16.s64 + 26068;
	// lis r16,-32248
	r16.s64 = -2113404928;
	// lis r15,-32248
	r15.s64 = -2113404928;
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// addi r8,r16,26056
	ctx.r8.s64 = r16.s64 + 26056;
	// lis r16,-32248
	r16.s64 = -2113404928;
	// lis r17,-32248
	r17.s64 = -2113404928;
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// addi r7,r16,26044
	ctx.r7.s64 = r16.s64 + 26044;
	// lis r16,-32248
	r16.s64 = -2113404928;
	// lis r20,-32248
	r20.s64 = -2113404928;
	// stw r7,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r7.u32);
	// addi r6,r16,26036
	ctx.r6.s64 = r16.s64 + 26036;
	// lis r21,-32248
	r21.s64 = -2113404928;
	// lis r22,-32248
	r22.s64 = -2113404928;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// lis r16,-32248
	r16.s64 = -2113404928;
	// addi r5,r18,-26016
	ctx.r5.s64 = r18.s64 + -26016;
	// addi r4,r19,-26040
	ctx.r4.s64 = r19.s64 + -26040;
	// addi r6,r23,26064
	ctx.r6.s64 = r23.s64 + 26064;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// addi r3,r15,26052
	ctx.r3.s64 = r15.s64 + 26052;
	// stw r4,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r4.u32);
	// addi r11,r16,-26024
	r11.s64 = r16.s64 + -26024;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// addi r10,r17,-26032
	ctx.r10.s64 = r17.s64 + -26032;
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// addi r9,r20,-26048
	ctx.r9.s64 = r20.s64 + -26048;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// addi r8,r21,26032
	ctx.r8.s64 = r21.s64 + 26032;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// addi r7,r22,26028
	ctx.r7.s64 = r22.s64 + 26028;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// lis r24,-32249
	r24.s64 = -2113470464;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lis r25,-32248
	r25.s64 = -2113404928;
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// lis r26,-32248
	r26.s64 = -2113404928;
	// lis r27,-32248
	r27.s64 = -2113404928;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r30,-32248
	r30.s64 = -2113404928;
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r23,-32255
	r23.s64 = -2113863680;
	// addi r19,r24,-676
	r19.s64 = r24.s64 + -676;
	// addi r18,r25,26004
	r18.s64 = r25.s64 + 26004;
	// addi r26,r26,25984
	r26.s64 = r26.s64 + 25984;
	// addi r4,r4,25888
	ctx.r4.s64 = ctx.r4.s64 + 25888;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r26.u32);
	// addi r6,r6,-10132
	ctx.r6.s64 = ctx.r6.s64 + -10132;
	// lfs f31,-31316(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + -31316);
	f31.f64 = double(temp.f32);
	// stw r4,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r4.u32);
	// addi r4,r7,25876
	ctx.r4.s64 = ctx.r7.s64 + 25876;
	// addi r5,r5,-10140
	ctx.r5.s64 = ctx.r5.s64 + -10140;
	// stw r6,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r6.u32);
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// addi r3,r3,25900
	ctx.r3.s64 = ctx.r3.s64 + 25900;
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// addi r27,r27,25960
	r27.s64 = r27.s64 + 25960;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r29,r29,25928
	r29.s64 = r29.s64 + 25928;
	// addi r30,r30,25916
	r30.s64 = r30.s64 + 25916;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r27.u32);
	// addi r31,r31,25908
	r31.s64 = r31.s64 + 25908;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r29.u32);
	// lis r24,-32248
	r24.s64 = -2113404928;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r30.u32);
	// lis r25,-32248
	r25.s64 = -2113404928;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// addi r14,r11,25812
	r14.s64 = r11.s64 + 25812;
	// addi r4,r4,25796
	ctx.r4.s64 = ctx.r4.s64 + 25796;
	// addi r11,r24,25788
	r11.s64 = r24.s64 + 25788;
	// addi r3,r25,25780
	ctx.r3.s64 = r25.s64 + 25780;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r17,r8,25860
	r17.s64 = ctx.r8.s64 + 25860;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r11.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r28,r28,25940
	r28.s64 = r28.s64 + 25940;
	// addi r6,r6,25764
	ctx.r6.s64 = ctx.r6.s64 + 25764;
	// addi r16,r9,25844
	r16.s64 = ctx.r9.s64 + 25844;
	// stw r28,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r28.u32);
	// addi r15,r10,25828
	r15.s64 = ctx.r10.s64 + 25828;
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r26,-32254
	r26.s64 = -2113798144;
	// lis r27,-32254
	r27.s64 = -2113798144;
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lis r30,-32248
	r30.s64 = -2113404928;
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r5,25732
	ctx.r5.s64 = ctx.r5.s64 + 25732;
	// addi r4,r7,25744
	ctx.r4.s64 = ctx.r7.s64 + 25744;
	// lis r21,-32248
	r21.s64 = -2113404928;
	// stw r5,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// lis r22,-32248
	r22.s64 = -2113404928;
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// lis r23,-32248
	r23.s64 = -2113404928;
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r26,15816
	r26.s64 = r26.s64 + 15816;
	// addi r27,r27,15836
	r27.s64 = r27.s64 + 15836;
	// addi r29,r29,25728
	r29.s64 = r29.s64 + 25728;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r26.u32);
	// addi r30,r30,25724
	r30.s64 = r30.s64 + 25724;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r27.u32);
	// addi r31,r31,25720
	r31.s64 = r31.s64 + 25720;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// addi r8,r8,25700
	ctx.r8.s64 = ctx.r8.s64 + 25700;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r7,r9,25680
	ctx.r7.s64 = ctx.r9.s64 + 25680;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// addi r6,r10,25664
	ctx.r6.s64 = ctx.r10.s64 + 25664;
	// stw r8,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r8.u32);
	// li r20,1
	r20.s64 = 1;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r21,r21,25652
	r21.s64 = r21.s64 + 25652;
	// stw r6,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
	// addi r22,r22,25636
	r22.s64 = r22.s64 + 25636;
	// addi r23,r23,25632
	r23.s64 = r23.s64 + 25632;
	// addi r24,r28,25620
	r24.s64 = r28.s64 + 25620;
	// addi r25,r3,3696
	r25.s64 = ctx.r3.s64 + 3696;
	// addi r5,r11,25608
	ctx.r5.s64 = r11.s64 + 25608;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r26,0
	r26.s64 = 0;
	// lwz r28,140(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,15468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15468);
	// stw r5,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r5.u32);
loc_8283D3D0:
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d3f4
	if (cr6.eq) goto loc_8283D3F4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x8283d3f4
	if (cr6.lt) goto loc_8283D3F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// blt cr6,0x8283d3f8
	if (cr6.lt) goto loc_8283D3F8;
loc_8283D3F4:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8283D3F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283e200
	if (!cr6.eq) goto loc_8283E200;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// lwzx r29,r8,r10
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bne cr6,0x8283d484
	if (!cr6.eq) goto loc_8283D484;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e1dc
	if (cr6.eq) goto loc_8283E1DC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d454
	if (cr6.eq) goto loc_8283D454;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283d454
	if (!cr6.lt) goto loc_8283D454;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283d458
	goto loc_8283D458;
loc_8283D454:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283D458:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq cr6,0x8283d46c
	if (cr6.eq) goto loc_8283D46C;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283D46C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d47c
	if (cr6.eq) goto loc_8283D47C;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283D47C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e1dc
	if (cr6.eq) goto loc_8283E1DC;
loc_8283D484:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d4f8
	if (cr6.eq) goto loc_8283D4F8;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,14(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 14);
	// stw r20,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r20.u32);
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r3,r1,13728
	ctx.r3.s64 = ctx.r1.s64 + 13728;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,13728
	ctx.r3.s64 = ctx.r1.s64 + 13728;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,13728
	ctx.r3.s64 = ctx.r1.s64 + 13728;
	// bl 0x82771580
	sub_82771580(ctx, base);
	// addi r3,r1,13728
	ctx.r3.s64 = ctx.r1.s64 + 13728;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,13728
	ctx.r3.s64 = ctx.r1.s64 + 13728;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D4F8:
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d554
	if (cr6.eq) goto loc_8283D554;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 12);
	// stw r20,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r20.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r11.u32);
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,2976
	ctx.r3.s64 = ctx.r1.s64 + 2976;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D554:
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d5b0
	if (cr6.eq) goto loc_8283D5B0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,18(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 18);
	// stw r20,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, r20.u32);
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, r11.u32);
	// addi r3,r1,9120
	ctx.r3.s64 = ctx.r1.s64 + 9120;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,9120
	ctx.r3.s64 = ctx.r1.s64 + 9120;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,9120
	ctx.r3.s64 = ctx.r1.s64 + 9120;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,9120
	ctx.r3.s64 = ctx.r1.s64 + 9120;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,9120
	ctx.r3.s64 = ctx.r1.s64 + 9120;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D5B0:
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d60c
	if (cr6.eq) goto loc_8283D60C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 20);
	// stw r20,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, r20.u32);
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, r11.u32);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,4512
	ctx.r3.s64 = ctx.r1.s64 + 4512;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D60C:
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d66c
	if (cr6.eq) goto loc_8283D66C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 16);
	// stw r20,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r20.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r3,r1,12192
	ctx.r3.s64 = ctx.r1.s64 + 12192;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,12192
	ctx.r3.s64 = ctx.r1.s64 + 12192;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,12192
	ctx.r3.s64 = ctx.r1.s64 + 12192;
	// bl 0x82771580
	sub_82771580(ctx, base);
	// addi r3,r1,12192
	ctx.r3.s64 = ctx.r1.s64 + 12192;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,12192
	ctx.r3.s64 = ctx.r1.s64 + 12192;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D66C:
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d72c
	if (cr6.eq) goto loc_8283D72C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827ff0e0
	sub_827FF0E0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d71c
	if (cr6.eq) goto loc_8283D71C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8283D6B0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r20,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r20.u32);
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, r11.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// subfe r9,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82843388
	sub_82843388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x8283d6b0
	if (cr6.lt) goto loc_8283D6B0;
loc_8283D71C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283D72C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d760
	if (cr6.eq) goto loc_8283D760;
	// rlwinm r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283d764
	if (!cr6.eq) goto loc_8283D764;
loc_8283D760:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283D764:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8283d780
	if (cr6.eq) goto loc_8283D780;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8283D780:
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r11,r11,23,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8283d7e0
	if (cr6.gt) goto loc_8283D7E0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8283d7c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8283D7C0;
	// bdzf 4*cr6+eq,0x8283d7d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8283D7D0;
	// bne cr6,0x8283d7c8
	if (!cr6.eq) goto loc_8283D7C8;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x8283d7d4
	goto loc_8283D7D4;
loc_8283D7C0:
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// b 0x8283d7d4
	goto loc_8283D7D4;
loc_8283D7C8:
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x8283d7d4
	goto loc_8283D7D4;
loc_8283D7D0:
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
loc_8283D7D4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283D7E0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r26.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8283e164
	if (!cr6.gt) goto loc_8283E164;
loc_8283D824:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8283d868
	if (!cr6.eq) goto loc_8283D868;
	// lwz r11,15468(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15468);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,30
	r11.u64 = ctx.r5.u32 & 0x3;
	// addi r4,r11,10
	ctx.r4.s64 = r11.s64 + 10;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x8283e164
	if (cr6.eq) goto loc_8283E164;
loc_8283D868:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8283dba8
	if (cr6.eq) goto loc_8283DBA8;
	// bl 0x828013d0
	sub_828013D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283dc28
	if (cr6.eq) goto loc_8283DC28;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r20
	r28.u64 = r20.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283d8c0
	if (cr6.eq) goto loc_8283D8C0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283d8c4
	if (!cr6.eq) goto loc_8283D8C4;
loc_8283D8C0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283D8C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d914
	if (cr6.eq) goto loc_8283D914;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r20,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r20.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, r11.u32);
	// addi r3,r1,6048
	ctx.r3.s64 = ctx.r1.s64 + 6048;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,6048
	ctx.r3.s64 = ctx.r1.s64 + 6048;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,6048
	ctx.r3.s64 = ctx.r1.s64 + 6048;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,6048
	ctx.r3.s64 = ctx.r1.s64 + 6048;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,6048
	ctx.r3.s64 = ctx.r1.s64 + 6048;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D914:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r5,r10,1
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r31,20
	r31.s64 = 20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d9a8
	if (cr6.eq) goto loc_8283D9A8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, r20.u32);
	// divwu r9,r11,r31
	ctx.r9.u32 = r11.u32 / r31.u32;
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,10656
	ctx.r3.s64 = ctx.r1.s64 + 10656;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,10656
	ctx.r3.s64 = ctx.r1.s64 + 10656;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,10656
	ctx.r3.s64 = ctx.r1.s64 + 10656;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,10656
	ctx.r3.s64 = ctx.r1.s64 + 10656;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,10656
	ctx.r3.s64 = ctx.r1.s64 + 10656;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D9A8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283d9fc
	if (cr6.eq) goto loc_8283D9FC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r20.u32);
	// divwu r9,r11,r31
	ctx.r9.u32 = r11.u32 / r31.u32;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,7584
	ctx.r3.s64 = ctx.r1.s64 + 7584;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,7584
	ctx.r3.s64 = ctx.r1.s64 + 7584;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,7584
	ctx.r3.s64 = ctx.r1.s64 + 7584;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,7584
	ctx.r3.s64 = ctx.r1.s64 + 7584;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,7584
	ctx.r3.s64 = ctx.r1.s64 + 7584;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283D9FC:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8283da50
	if (cr6.eq) goto loc_8283DA50;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r20.u32);
	// divw r9,r11,r31
	ctx.r9.s32 = r11.s32 / r31.s32;
	// stw r10,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r10.u32);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x82771580
	sub_82771580(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DA50:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8283daa4
	if (cr6.eq) goto loc_8283DAA4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r20.u32);
	// divw r9,r11,r31
	ctx.r9.s32 = r11.s32 / r31.s32;
	// stw r10,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r10.u32);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x82771580
	sub_82771580(ctx, base);
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DAA4:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283db00
	if (cr6.eq) goto loc_8283DB00;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r20,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r20.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r11.u32);
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,3744
	ctx.r3.s64 = ctx.r1.s64 + 3744;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DB00:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lbz r11,76(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8283db38
	if (cr6.lt) goto loc_8283DB38;
	// beq cr6,0x8283db30
	if (cr6.eq) goto loc_8283DB30;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8283db48
	if (!cr6.lt) goto loc_8283DB48;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// b 0x8283db3c
	goto loc_8283DB3C;
loc_8283DB30:
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// b 0x8283db3c
	goto loc_8283DB3C;
loc_8283DB38:
	// lwz r4,324(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_8283DB3C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283DB48:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283db80
	if (cr6.eq) goto loc_8283DB80;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283db84
	if (!cr6.eq) goto loc_8283DB84;
loc_8283DB80:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283DB84:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283dba0
	if (cr6.eq) goto loc_8283DBA0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283DBA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283DBA8:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283e0d0
	if (!cr6.eq) goto loc_8283E0D0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8283e004
	if (!cr6.gt) goto loc_8283E004;
	// lwz r28,15468(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15468);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8283DBCC:
	// lbz r11,32(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + ctx.r10.u32);
	// clrlwi r11,r7,30
	r11.u64 = ctx.r7.u32 & 0x3;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// beq cr6,0x8283dff0
	if (cr6.eq) goto loc_8283DFF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8283dff0
	if (cr6.eq) goto loc_8283DFF0;
	// cmplwi cr6,r4,60
	cr6.compare<uint32_t>(ctx.r4.u32, 60, xer);
	// bgt cr6,0x8283dfbc
	if (cr6.gt) goto loc_8283DFBC;
	// beq cr6,0x8283dfb4
	if (cr6.eq) goto loc_8283DFB4;
	// cmplwi cr6,r4,34
	cr6.compare<uint32_t>(ctx.r4.u32, 34, xer);
	// beq cr6,0x8283dfac
	if (cr6.eq) goto loc_8283DFAC;
	// cmplwi cr6,r4,38
	cr6.compare<uint32_t>(ctx.r4.u32, 38, xer);
	// beq cr6,0x8283dfa4
	if (cr6.eq) goto loc_8283DFA4;
	// cmplwi cr6,r4,39
	cr6.compare<uint32_t>(ctx.r4.u32, 39, xer);
	// bne cr6,0x8283dfcc
	if (!cr6.eq) goto loc_8283DFCC;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x8283dfe4
	goto loc_8283DFE4;
loc_8283DC28:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283dc9c
	if (cr6.eq) goto loc_8283DC9C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r20,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r20.u32);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r11.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x827ff878
	sub_827FF878(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,5280
	ctx.r3.s64 = ctx.r1.s64 + 5280;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DC9C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283dd20
	if (cr6.eq) goto loc_8283DD20;
	// lhz r11,38(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r20.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// stw r10,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r10.u32);
	// addi r3,r1,6816
	ctx.r3.s64 = ctx.r1.s64 + 6816;
	// std r9,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r9.u64);
	// lfd f0,360(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,6816
	ctx.r3.s64 = ctx.r1.s64 + 6816;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,6816
	ctx.r3.s64 = ctx.r1.s64 + 6816;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,6816
	ctx.r3.s64 = ctx.r1.s64 + 6816;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,6816
	ctx.r3.s64 = ctx.r1.s64 + 6816;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DD20:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283dd80
	if (cr6.eq) goto loc_8283DD80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r20,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r20.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r10,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// clrlwi r8,r9,8
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFFF;
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x827b3538
	sub_827B3538(ctx, base);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DD80:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283ddf8
	if (cr6.eq) goto loc_8283DDF8;
	// lhz r11,36(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r20,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r20.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// extsh r8,r11
	ctx.r8.s64 = r11.s16;
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// addi r3,r1,9888
	ctx.r3.s64 = ctx.r1.s64 + 9888;
	// std r8,624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 624, ctx.r8.u64);
	// lfd f0,624(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 624);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,9888
	ctx.r3.s64 = ctx.r1.s64 + 9888;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,9888
	ctx.r3.s64 = ctx.r1.s64 + 9888;
	// bl 0x827642b0
	sub_827642B0(ctx, base);
	// addi r3,r1,9888
	ctx.r3.s64 = ctx.r1.s64 + 9888;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,9888
	ctx.r3.s64 = ctx.r1.s64 + 9888;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DDF8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283de58
	if (cr6.eq) goto loc_8283DE58;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// stw r20,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r20.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// addi r3,r1,11424
	ctx.r3.s64 = ctx.r1.s64 + 11424;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// addi r3,r1,11424
	ctx.r3.s64 = ctx.r1.s64 + 11424;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,11424
	ctx.r3.s64 = ctx.r1.s64 + 11424;
	// bl 0x828432a0
	sub_828432A0(ctx, base);
	// addi r3,r1,11424
	ctx.r3.s64 = ctx.r1.s64 + 11424;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,11424
	ctx.r3.s64 = ctx.r1.s64 + 11424;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DE58:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,12960
	ctx.r3.s64 = ctx.r1.s64 + 12960;
	// lbz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// stw r20,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r20.u32);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// rlwinm r8,r9,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,12960
	ctx.r3.s64 = ctx.r1.s64 + 12960;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,12960
	ctx.r3.s64 = ctx.r1.s64 + 12960;
	// bl 0x82843388
	sub_82843388(ctx, base);
	// addi r3,r1,12960
	ctx.r3.s64 = ctx.r1.s64 + 12960;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,12960
	ctx.r3.s64 = ctx.r1.s64 + 12960;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r7,42(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r6,r7,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8283dee0
	if (cr6.eq) goto loc_8283DEE0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283dee4
	if (!cr6.eq) goto loc_8283DEE4;
loc_8283DEE0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283DEE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283df34
	if (cr6.eq) goto loc_8283DF34;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r20,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r20.u32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, r11.u32);
	// addi r3,r1,14496
	ctx.r3.s64 = ctx.r1.s64 + 14496;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8279d530
	sub_8279D530(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,14496
	ctx.r3.s64 = ctx.r1.s64 + 14496;
	// bl 0x8279d640
	sub_8279D640(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,14496
	ctx.r3.s64 = ctx.r1.s64 + 14496;
	// bl 0x82843470
	sub_82843470(ctx, base);
	// addi r3,r1,14496
	ctx.r3.s64 = ctx.r1.s64 + 14496;
	// bl 0x8279c9e0
	sub_8279C9E0(ctx, base);
	// addi r3,r1,14496
	ctx.r3.s64 = ctx.r1.s64 + 14496;
	// bl 0x8279d3d8
	sub_8279D3D8(ctx, base);
loc_8283DF34:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283df58
	if (cr6.eq) goto loc_8283DF58;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283DF58:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283df7c
	if (cr6.eq) goto loc_8283DF7C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283DF7C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283dba8
	if (cr6.eq) goto loc_8283DBA8;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// b 0x8283dba8
	goto loc_8283DBA8;
loc_8283DFA4:
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x8283dfe4
	goto loc_8283DFE4;
loc_8283DFAC:
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// b 0x8283dfe4
	goto loc_8283DFE4;
loc_8283DFB4:
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// b 0x8283dfe4
	goto loc_8283DFE4;
loc_8283DFBC:
	// cmplwi cr6,r4,62
	cr6.compare<uint32_t>(ctx.r4.u32, 62, xer);
	// beq cr6,0x8283dfe0
	if (cr6.eq) goto loc_8283DFE0;
	// cmplwi cr6,r4,160
	cr6.compare<uint32_t>(ctx.r4.u32, 160, xer);
	// beq cr6,0x8283dfd8
	if (cr6.eq) goto loc_8283DFD8;
loc_8283DFCC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827610d0
	sub_827610D0(ctx, base);
	// b 0x8283dff0
	goto loc_8283DFF0;
loc_8283DFD8:
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x8283dfe4
	goto loc_8283DFE4;
loc_8283DFE0:
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_8283DFE4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283DFF0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8283dbcc
	if (cr6.lt) goto loc_8283DBCC;
loc_8283E004:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8283e0d0
	if (cr6.eq) goto loc_8283E0D0;
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283e030
	if (cr6.eq) goto loc_8283E030;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283E030:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e054
	if (cr6.eq) goto loc_8283E054;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283E054:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e078
	if (cr6.eq) goto loc_8283E078;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283E078:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e0a0
	if (cr6.eq) goto loc_8283E0A0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283e0a4
	if (!cr6.eq) goto loc_8283E0A4;
loc_8283E0A0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283E0A4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e0c0
	if (cr6.eq) goto loc_8283E0C0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283E0C0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
loc_8283E0D0:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283e0f0
	if (cr6.lt) goto loc_8283E0F0;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x8283e0f4
	if (cr6.lt) goto loc_8283E0F4;
loc_8283E0F0:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8283E0F4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283e14c
	if (!cr6.eq) goto loc_8283E14C;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x8283e150
	if (cr6.lt) goto loc_8283E150;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8283e154
	if (!cr6.lt) goto loc_8283E154;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// b 0x8283e154
	goto loc_8283E154;
loc_8283E14C:
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8283E150:
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
loc_8283E154:
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,140(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x8283d824
	if (cr6.lt) goto loc_8283D824;
loc_8283E164:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lhz r11,22(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 22);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e198
	if (cr6.eq) goto loc_8283E198;
	// rlwinm r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// bne cr6,0x8283e19c
	if (!cr6.eq) goto loc_8283E19C;
loc_8283E198:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8283E19C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8283e1b8
	if (cr6.eq) goto loc_8283E1B8;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8283E1B8:
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x827611b8
	sub_827611B8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e1dc
	if (cr6.eq) goto loc_8283E1DC;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283E1DC:
	// lwz r10,15468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15468);
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// bge cr6,0x8283e1f8
	if (!cr6.lt) goto loc_8283E1F8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
loc_8283E1F8:
	// lwz r9,312(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// b 0x8283d3d0
	goto loc_8283D3D0;
loc_8283E200:
	// lwz r31,15460(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15460);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82763398
	sub_82763398(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82760d20
	sub_82760D20(ctx, base);
	// lwz r3,15264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 15264);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,15440
	ctx.r1.s64 = ctx.r1.s64 + 15440;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8283E22C"))) PPC_WEAK_FUNC(sub_8283E22C);
PPC_FUNC_IMPL(__imp__sub_8283E22C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8283E230"))) PPC_WEAK_FUNC(sub_8283E230);
PPC_FUNC_IMPL(__imp__sub_8283E230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r11.u16);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E26C"))) PPC_WEAK_FUNC(sub_8283E26C);
PPC_FUNC_IMPL(__imp__sub_8283E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283E270"))) PPC_WEAK_FUNC(sub_8283E270);
PPC_FUNC_IMPL(__imp__sub_8283E270) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e2e8
	if (cr6.eq) goto loc_8283E2E8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// sth r11,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, r11.u16);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8283E2E8:
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

__attribute__((alias("__imp__sub_8283E2FC"))) PPC_WEAK_FUNC(sub_8283E2FC);
PPC_FUNC_IMPL(__imp__sub_8283E2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E300"))) PPC_WEAK_FUNC(sub_8283E300);
PPC_FUNC_IMPL(__imp__sub_8283E300) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x828013d0
	sub_828013D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e394
	if (cr6.eq) goto loc_8283E394;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828021a8
	sub_828021A8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e34c
	if (cr6.eq) goto loc_8283E34C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283E34C:
	// lhz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// sth r8,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r8.u16);
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e384
	if (cr6.eq) goto loc_8283E384;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283E384:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// b 0x8283e3bc
	goto loc_8283E3BC;
loc_8283E394:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e3b8
	if (cr6.eq) goto loc_8283E3B8;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283E3B8:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_8283E3BC:
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

__attribute__((alias("__imp__sub_8283E3D0"))) PPC_WEAK_FUNC(sub_8283E3D0);
PPC_FUNC_IMPL(__imp__sub_8283E3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E3D4"))) PPC_WEAK_FUNC(sub_8283E3D4);
PPC_FUNC_IMPL(__imp__sub_8283E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283E3D8"))) PPC_WEAK_FUNC(sub_8283E3D8);
PPC_FUNC_IMPL(__imp__sub_8283E3D8) {
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
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828011e0
	sub_828011E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e414
	if (cr6.eq) goto loc_8283E414;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283E414:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
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

__attribute__((alias("__imp__sub_8283E42C"))) PPC_WEAK_FUNC(sub_8283E42C);
PPC_FUNC_IMPL(__imp__sub_8283E42C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E430"))) PPC_WEAK_FUNC(sub_8283E430);
PPC_FUNC_IMPL(__imp__sub_8283E430) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x828013d0
	sub_828013D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e46c
	if (cr6.eq) goto loc_8283E46C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283e300
	sub_8283E300(ctx, base);
	// b 0x8283e490
	goto loc_8283E490;
loc_8283E46C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283e47c
	if (cr6.eq) goto loc_8283E47C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283E47C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283e48c
	if (cr6.eq) goto loc_8283E48C;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283E48C:
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
loc_8283E490:
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

__attribute__((alias("__imp__sub_8283E4A4"))) PPC_WEAK_FUNC(sub_8283E4A4);
PPC_FUNC_IMPL(__imp__sub_8283E4A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E4A8"))) PPC_WEAK_FUNC(sub_8283E4A8);
PPC_FUNC_IMPL(__imp__sub_8283E4A8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x828441e0
	sub_828441E0(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,36(r31)
	PPC_STORE_U16(r31.u32 + 36, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283E4EC"))) PPC_WEAK_FUNC(sub_8283E4EC);
PPC_FUNC_IMPL(__imp__sub_8283E4EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E4F0"))) PPC_WEAK_FUNC(sub_8283E4F0);
PPC_FUNC_IMPL(__imp__sub_8283E4F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,16
	r26.s64 = ctx.r3.s64 + 16;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bge cr6,0x8283e52c
	if (!cr6.lt) goto loc_8283E52C;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8283E52C:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x8283e540
	if (!cr6.eq) goto loc_8283E540;
	// lis r31,32767
	r31.s64 = 2147418112;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
	// b 0x8283e548
	goto loc_8283E548;
loc_8283E540:
	// subf. r31,r27,r31
	r31.s64 = r31.s64 - r27.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x8283e5b4
	if (!cr0.gt) goto loc_8283E5B4;
loc_8283E548:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283e5b4
	if (!cr6.lt) goto loc_8283E5B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// bgt cr6,0x8283e57c
	if (cr6.gt) goto loc_8283E57C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8283E57C:
	// subf r11,r4,r28
	r11.s64 = r28.s64 - ctx.r4.s64;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x8283e590
	if (cr6.lt) goto loc_8283E590;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8283E590:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82844d00
	sub_82844D00(ctx, base);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// bl 0x8283c0c0
	sub_8283C0C0(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x8283e548
	if (cr6.gt) goto loc_8283E548;
loc_8283E5B4:
	// lhz r11,36(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 36);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r11,36(r25)
	PPC_STORE_U16(r25.u32 + 36, r11.u16);
	// beq cr6,0x8283e5d0
	if (cr6.eq) goto loc_8283E5D0;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283E5D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8283E5D4"))) PPC_WEAK_FUNC(sub_8283E5D4);
PPC_FUNC_IMPL(__imp__sub_8283E5D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8283E5D8"))) PPC_WEAK_FUNC(sub_8283E5D8);
PPC_FUNC_IMPL(__imp__sub_8283E5D8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e634
	if (cr6.eq) goto loc_8283E634;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283e620
	if (cr6.eq) goto loc_8283E620;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8283e620
	if (!cr6.lt) goto loc_8283E620;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8283e624
	goto loc_8283E624;
loc_8283E620:
	// li r11,0
	r11.s64 = 0;
loc_8283E624:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283e638
	if (cr6.eq) goto loc_8283E638;
loc_8283E634:
	// li r11,0
	r11.s64 = 0;
loc_8283E638:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e674
	if (cr6.eq) goto loc_8283E674;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r8,16
	r31.s64 = ctx.r8.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82845110
	sub_82845110(ctx, base);
loc_8283E674:
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

__attribute__((alias("__imp__sub_8283E688"))) PPC_WEAK_FUNC(sub_8283E688);
PPC_FUNC_IMPL(__imp__sub_8283E688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E68C"))) PPC_WEAK_FUNC(sub_8283E68C);
PPC_FUNC_IMPL(__imp__sub_8283E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283E690"))) PPC_WEAK_FUNC(sub_8283E690);
PPC_FUNC_IMPL(__imp__sub_8283E690) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e6e8
	if (cr6.eq) goto loc_8283E6E8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283e6d4
	if (cr6.eq) goto loc_8283E6D4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8283e6d4
	if (!cr6.lt) goto loc_8283E6D4;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8283e6d8
	goto loc_8283E6D8;
loc_8283E6D4:
	// li r11,0
	r11.s64 = 0;
loc_8283E6D8:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283e6ec
	if (cr6.eq) goto loc_8283E6EC;
loc_8283E6E8:
	// li r11,0
	r11.s64 = 0;
loc_8283E6EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e73c
	if (cr6.eq) goto loc_8283E73C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82845110
	sub_82845110(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e73c
	if (cr6.eq) goto loc_8283E73C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8283e73c
	if (!cr6.eq) goto loc_8283E73C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8283E73C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283E74C"))) PPC_WEAK_FUNC(sub_8283E74C);
PPC_FUNC_IMPL(__imp__sub_8283E74C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283E750"))) PPC_WEAK_FUNC(sub_8283E750);
PPC_FUNC_IMPL(__imp__sub_8283E750) {
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
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x8283e774
	if (!cr6.eq) goto loc_8283E774;
	// li r30,-1
	r30.s64 = -1;
	// b 0x8283e77c
	goto loc_8283E77C;
loc_8283E774:
	// subf. r30,r29,r5
	r30.s64 = ctx.r5.s64 - r29.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8283e7b0
	if (cr0.eq) goto loc_8283E7B0;
loc_8283E77C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283af60
	sub_8283AF60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82845110
	sub_82845110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283e5d8
	sub_8283E5D8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
loc_8283E7B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8283E7B4"))) PPC_WEAK_FUNC(sub_8283E7B4);
PPC_FUNC_IMPL(__imp__sub_8283E7B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8283E7B8"))) PPC_WEAK_FUNC(sub_8283E7B8);
PPC_FUNC_IMPL(__imp__sub_8283E7B8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8283e7d8
	if (cr6.lt) goto loc_8283E7D8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_8283E7D8:
	// subf r29,r4,r11
	r29.s64 = r11.s64 - ctx.r4.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8283e7ec
	if (!cr6.eq) goto loc_8283E7EC;
	// li r30,-1
	r30.s64 = -1;
	// b 0x8283e7f4
	goto loc_8283E7F4;
loc_8283E7EC:
	// subf. r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8283e828
	if (cr0.eq) goto loc_8283E828;
loc_8283E7F4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283af60
	sub_8283AF60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82845110
	sub_82845110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283e5d8
	sub_8283E5D8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
loc_8283E828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8283E82C"))) PPC_WEAK_FUNC(sub_8283E82C);
PPC_FUNC_IMPL(__imp__sub_8283E82C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8283E830"))) PPC_WEAK_FUNC(sub_8283E830);
PPC_FUNC_IMPL(__imp__sub_8283E830) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// subf r29,r31,r30
	r29.s64 = r30.s64 - r31.s64;
	// lwz r27,92(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r26,r27,2,0,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283E86C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8283e88c
	if (cr6.eq) goto loc_8283E88C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8283e88c
	if (cr6.lt) goto loc_8283E88C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283e890
	if (cr6.lt) goto loc_8283E890;
loc_8283E88C:
	// li r11,1
	r11.s64 = 1;
loc_8283E890:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283e9b0
	if (!cr6.eq) goto loc_8283E9B0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e900
	if (cr6.eq) goto loc_8283E900;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e8d8
	if (cr6.eq) goto loc_8283E8D8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283e8d8
	if (!cr6.lt) goto loc_8283E8D8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283e8dc
	goto loc_8283E8DC;
loc_8283E8D8:
	// li r11,0
	r11.s64 = 0;
loc_8283E8DC:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283e8f0
	if (cr6.eq) goto loc_8283E8F0;
	// li r11,0
	r11.s64 = 0;
loc_8283E8F0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e900
	if (cr6.eq) goto loc_8283E900;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8283E900:
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8283e914
	if (!cr6.gt) goto loc_8283E914;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// b 0x8283e920
	goto loc_8283E920;
loc_8283E914:
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8283e980
	if (!cr6.eq) goto loc_8283E980;
loc_8283E920:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283e960
	if (cr6.eq) goto loc_8283E960;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e94c
	if (cr6.eq) goto loc_8283E94C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283e94c
	if (!cr6.lt) goto loc_8283E94C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283e950
	goto loc_8283E950;
loc_8283E94C:
	// li r11,0
	r11.s64 = 0;
loc_8283E950:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283e964
	if (cr6.eq) goto loc_8283E964;
loc_8283E960:
	// li r11,0
	r11.s64 = 0;
loc_8283E964:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283e980
	if (cr6.eq) goto loc_8283E980;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8283e980
	if (cr6.eq) goto loc_8283E980;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8283E980:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8283e4f0
	sub_8283E4F0(ctx, base);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x8283e86c
	if (!cr6.lt) goto loc_8283E86C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8283e86c
	goto loc_8283E86C;
loc_8283E9B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8283E9B4"))) PPC_WEAK_FUNC(sub_8283E9B4);
PPC_FUNC_IMPL(__imp__sub_8283E9B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8283E9B8"))) PPC_WEAK_FUNC(sub_8283E9B8);
PPC_FUNC_IMPL(__imp__sub_8283E9B8) {
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
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// stw r24,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r24.u32);
	// stw r24,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r24.u32);
	// stw r24,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r24.u32);
	// stw r24,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r24.u32);
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r26,16(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// beq cr6,0x8283ea60
	if (cr6.eq) goto loc_8283EA60;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r5,r28,r29
	ctx.r5.u64 = r28.u64 + r29.u64;
	// bl 0x82844010
	sub_82844010(ctx, base);
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82843080
	sub_82843080(ctx, base);
loc_8283EA60:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// sth r24,36(r27)
	PPC_STORE_U16(r27.u32 + 36, r24.u16);
	// stw r11,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r11.u32);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,24(r25)
	PPC_STORE_U32(r25.u32 + 24, ctx.r10.u32);
	// stw r11,32(r27)
	PPC_STORE_U32(r27.u32 + 32, r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x828011e0
	sub_828011E0(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283eaa0
	if (cr6.eq) goto loc_8283EAA0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283EAA0:
	// stw r31,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r31.u32);
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_8283EAAC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x8283eac4
	if (cr6.lt) goto loc_8283EAC4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// mr r11,r24
	r11.u64 = r24.u64;
	// blt cr6,0x8283eac8
	if (cr6.lt) goto loc_8283EAC8;
loc_8283EAC4:
	// li r11,1
	r11.s64 = 1;
loc_8283EAC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283eb34
	if (!cr6.eq) goto loc_8283EB34;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283eaf8
	if (cr6.eq) goto loc_8283EAF8;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283EAF8:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283eb08
	if (cr6.eq) goto loc_8283EB08;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283EB08:
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283eb1c
	if (cr6.eq) goto loc_8283EB1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283EB1C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// bge cr6,0x8283eaac
	if (!cr6.lt) goto loc_8283EAAC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// b 0x8283eaac
	goto loc_8283EAAC;
loc_8283EB34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8283EB3C"))) PPC_WEAK_FUNC(sub_8283EB3C);
PPC_FUNC_IMPL(__imp__sub_8283EB3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8283EB40"))) PPC_WEAK_FUNC(sub_8283EB40);
PPC_FUNC_IMPL(__imp__sub_8283EB40) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r17,r3,16
	r17.s64 = ctx.r3.s64 + 16;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// bge cr6,0x8283eb80
	if (!cr6.lt) goto loc_8283EB80;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_8283EB80:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x8283eb94
	if (!cr6.eq) goto loc_8283EB94;
	// lis r26,32767
	r26.s64 = 2147418112;
	// ori r26,r26,65535
	r26.u64 = r26.u64 | 65535;
	// b 0x8283eb9c
	goto loc_8283EB9C;
loc_8283EB94:
	// subf. r26,r23,r31
	r26.s64 = r31.s64 - r23.s64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x8283ecec
	if (!cr0.gt) goto loc_8283ECEC;
loc_8283EB9C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r20,1
	r20.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lis r21,-256
	r21.s64 = -16777216;
	// addi r22,r11,-300
	r22.s64 = r11.s64 + -300;
loc_8283EBB0:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283ecec
	if (!cr6.lt) goto loc_8283ECEC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r25,8(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r27
	cr6.compare<uint32_t>(r23.u32, r27.u32, xer);
	// mr r28,r23
	r28.u64 = r23.u64;
	// bgt cr6,0x8283ebe8
	if (cr6.gt) goto loc_8283EBE8;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_8283EBE8:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// lwz r30,28(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// sth r29,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, r29.u16);
	// sth r29,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, r29.u16);
	// stb r29,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r29.u8);
	// sth r29,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, r29.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8283ec5c
	if (cr6.eq) goto loc_8283EC5C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x828004b0
	sub_828004B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827e9590
	sub_827E9590(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x8283ec60
	goto loc_8283EC60;
loc_8283EC5C:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_8283EC60:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// blt cr6,0x8283ec84
	if (cr6.lt) goto loc_8283EC84;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8283EC84:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// beq cr6,0x8283ec9c
	if (cr6.eq) goto loc_8283EC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283EC9C:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82844650
	sub_82844650(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283ecbc
	if (cr6.eq) goto loc_8283ECBC;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283ECBC:
	// add r4,r25,r27
	ctx.r4.u64 = r25.u64 + r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// subf r26,r30,r26
	r26.s64 = r26.s64 - r30.s64;
	// bl 0x8283c0c0
	sub_8283C0C0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283ecdc
	if (cr6.eq) goto loc_8283ECDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283ECDC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b3930
	sub_827B3930(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bgt cr6,0x8283ebb0
	if (cr6.gt) goto loc_8283EBB0;
loc_8283ECEC:
	// lhz r11,36(r18)
	r11.u64 = PPC_LOAD_U16(r18.u32 + 36);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r11,36(r18)
	PPC_STORE_U16(r18.u32 + 36, r11.u16);
	// beq cr6,0x8283ed08
	if (cr6.eq) goto loc_8283ED08;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283ED08:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
}

__attribute__((alias("__imp__sub_8283ED0C"))) PPC_WEAK_FUNC(sub_8283ED0C);
PPC_FUNC_IMPL(__imp__sub_8283ED0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8283ED10"))) PPC_WEAK_FUNC(sub_8283ED10);
PPC_FUNC_IMPL(__imp__sub_8283ED10) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8283edfc
	if (cr6.eq) goto loc_8283EDFC;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x8283ed64
	if (!cr6.eq) goto loc_8283ED64;
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283ed64
	if (cr6.eq) goto loc_8283ED64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8283ED54:
	// lhzu r10,2(r11)
	ea = 2 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283ed54
	if (!cr6.eq) goto loc_8283ED54;
loc_8283ED64:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283edfc
	if (cr6.eq) goto loc_8283EDFC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r29)
	PPC_STORE_U16(r29.u32 + 36, r11.u16);
	// beq cr6,0x8283edfc
	if (cr6.eq) goto loc_8283EDFC;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8283ede8
	if (cr6.eq) goto loc_8283EDE8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82845648
	sub_82845648(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283EDE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283e5d8
	sub_8283E5D8(ctx, base);
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r29)
	PPC_STORE_U16(r29.u32 + 36, r11.u16);
loc_8283EDFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8283EE00"))) PPC_WEAK_FUNC(sub_8283EE00);
PPC_FUNC_IMPL(__imp__sub_8283EE00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8283EE04"))) PPC_WEAK_FUNC(sub_8283EE04);
PPC_FUNC_IMPL(__imp__sub_8283EE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283EE08"))) PPC_WEAK_FUNC(sub_8283EE08);
PPC_FUNC_IMPL(__imp__sub_8283EE08) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283ee64
	if (cr6.eq) goto loc_8283EE64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283ee50
	if (cr6.eq) goto loc_8283EE50;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8283ee50
	if (!cr6.lt) goto loc_8283EE50;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8283ee54
	goto loc_8283EE54;
loc_8283EE50:
	// li r11,0
	r11.s64 = 0;
loc_8283EE54:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283ee68
	if (cr6.eq) goto loc_8283EE68;
loc_8283EE64:
	// li r11,0
	r11.s64 = 0;
loc_8283EE68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283ef14
	if (!cr6.eq) goto loc_8283EF14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// beq cr6,0x8283ef14
	if (cr6.eq) goto loc_8283EF14;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283ef14
	if (!cr6.eq) goto loc_8283EF14;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8283ef14
	if (cr6.eq) goto loc_8283EF14;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82845648
	sub_82845648(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283ef14
	if (cr6.eq) goto loc_8283EF14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283EF14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8283EF18"))) PPC_WEAK_FUNC(sub_8283EF18);
PPC_FUNC_IMPL(__imp__sub_8283EF18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8283EF1C"))) PPC_WEAK_FUNC(sub_8283EF1C);
PPC_FUNC_IMPL(__imp__sub_8283EF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283EF20"))) PPC_WEAK_FUNC(sub_8283EF20);
PPC_FUNC_IMPL(__imp__sub_8283EF20) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// subf r29,r5,r30
	r29.s64 = r30.s64 - ctx.r5.s64;
	// lwz r27,92(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283EF60:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8283ef80
	if (cr6.eq) goto loc_8283EF80;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8283ef80
	if (cr6.lt) goto loc_8283EF80;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283ef84
	if (cr6.lt) goto loc_8283EF84;
loc_8283EF80:
	// li r11,1
	r11.s64 = 1;
loc_8283EF84:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283f0ac
	if (!cr6.eq) goto loc_8283F0AC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283eff4
	if (cr6.eq) goto loc_8283EFF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283efcc
	if (cr6.eq) goto loc_8283EFCC;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283efcc
	if (!cr6.lt) goto loc_8283EFCC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283efd0
	goto loc_8283EFD0;
loc_8283EFCC:
	// li r11,0
	r11.s64 = 0;
loc_8283EFD0:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283efe4
	if (cr6.eq) goto loc_8283EFE4;
	// li r11,0
	r11.s64 = 0;
loc_8283EFE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283eff4
	if (cr6.eq) goto loc_8283EFF4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8283EFF4:
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x8283f008
	if (!cr6.gt) goto loc_8283F008;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// b 0x8283f014
	goto loc_8283F014;
loc_8283F008:
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8283f074
	if (!cr6.eq) goto loc_8283F074;
loc_8283F014:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283f054
	if (cr6.eq) goto loc_8283F054;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f040
	if (cr6.eq) goto loc_8283F040;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283f040
	if (!cr6.lt) goto loc_8283F040;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283f044
	goto loc_8283F044;
loc_8283F040:
	// li r11,0
	r11.s64 = 0;
loc_8283F044:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283f058
	if (cr6.eq) goto loc_8283F058;
loc_8283F054:
	// li r11,0
	r11.s64 = 0;
loc_8283F058:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f074
	if (cr6.eq) goto loc_8283F074;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x8283f074
	if (cr6.eq) goto loc_8283F074;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8283F074:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8283eb40
	sub_8283EB40(ctx, base);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x8283ef60
	if (!cr6.lt) goto loc_8283EF60;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x8283ef60
	goto loc_8283EF60;
loc_8283F0AC:
	// lhz r11,42(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 42);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283f0d0
	if (cr6.eq) goto loc_8283F0D0;
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8283f0d4
	if (!cr6.eq) goto loc_8283F0D4;
loc_8283F0D0:
	// li r11,0
	r11.s64 = 0;
loc_8283F0D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f0ec
	if (cr6.eq) goto loc_8283F0EC;
	// lbz r11,32(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r25)
	PPC_STORE_U8(r25.u32 + 32, ctx.r10.u8);
loc_8283F0EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8283F0F0"))) PPC_WEAK_FUNC(sub_8283F0F0);
PPC_FUNC_IMPL(__imp__sub_8283F0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8283F0F4"))) PPC_WEAK_FUNC(sub_8283F0F4);
PPC_FUNC_IMPL(__imp__sub_8283F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283F0F8"))) PPC_WEAK_FUNC(sub_8283F0F8);
PPC_FUNC_IMPL(__imp__sub_8283F0F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f13c
	if (cr6.eq) goto loc_8283F13C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8283e9b8
	sub_8283E9B8(ctx, base);
	// b 0x8283f140
	goto loc_8283F140;
loc_8283F13C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8283F140:
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

__attribute__((alias("__imp__sub_8283F154"))) PPC_WEAK_FUNC(sub_8283F154);
PPC_FUNC_IMPL(__imp__sub_8283F154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283F158"))) PPC_WEAK_FUNC(sub_8283F158);
PPC_FUNC_IMPL(__imp__sub_8283F158) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8283f2b4
	if (cr6.eq) goto loc_8283F2B4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8283ed10
	sub_8283ED10(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8283bda0
	sub_8283BDA0(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283f290
	if (!cr6.lt) goto loc_8283F290;
loc_8283F1CC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8283f290
	if (cr6.eq) goto loc_8283F290;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8283bf10
	sub_8283BF10(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x8283f1fc
	if (!cr6.lt) goto loc_8283F1FC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283f204
	goto loc_8283F204;
loc_8283F1FC:
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
loc_8283F204:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x8283f210
	if (cr6.lt) goto loc_8283F210;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8283F210:
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8283f270
	if (cr6.eq) goto loc_8283F270;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// add r11,r29,r25
	r11.u64 = r29.u64 + r25.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8283f240
	if (cr6.eq) goto loc_8283F240;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8283F240:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r24,16
	ctx.r3.s64 = r24.s64 + 16;
	// bl 0x82844650
	sub_82844650(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f260
	if (cr6.eq) goto loc_8283F260;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283F260:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283f270
	if (cr6.eq) goto loc_8283F270;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283F270:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
	// bl 0x8283c020
	sub_8283C020(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8283f1cc
	if (cr6.lt) goto loc_8283F1CC;
loc_8283F290:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8283e5d8
	sub_8283E5D8(ctx, base);
	// lhz r11,36(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 36);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// sth r11,36(r24)
	PPC_STORE_U16(r24.u32 + 36, r11.u16);
	// beq cr6,0x8283f2b4
	if (cr6.eq) goto loc_8283F2B4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8283F2B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8283F2B8"))) PPC_WEAK_FUNC(sub_8283F2B8);
PPC_FUNC_IMPL(__imp__sub_8283F2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8283F2BC"))) PPC_WEAK_FUNC(sub_8283F2BC);
PPC_FUNC_IMPL(__imp__sub_8283F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283F2C0"))) PPC_WEAK_FUNC(sub_8283F2C0);
PPC_FUNC_IMPL(__imp__sub_8283F2C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f304
	if (cr6.eq) goto loc_8283F304;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r27,r3,r8
	r27.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_8283F304:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// bl 0x8283e270
	sub_8283E270(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x828456b8
	sub_828456B8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r10,-4
	xer.ca = ctx.r10.u32 > 3;
	r11.s64 = ctx.r10.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8283f34c
	if (cr0.eq) goto loc_8283F34C;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x8283f380
	goto loc_8283F380;
loc_8283F34C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283f380
	if (cr6.eq) goto loc_8283F380;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f378
	if (cr6.eq) goto loc_8283F378;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283F378:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8283F380:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bne cr6,0x8283f3a4
	if (!cr6.eq) goto loc_8283F3A4;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x8283f3a8
	goto loc_8283F3A8;
loc_8283F3A4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8283F3A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8283b608
	sub_8283B608(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8283F3C0"))) PPC_WEAK_FUNC(sub_8283F3C0);
PPC_FUNC_IMPL(__imp__sub_8283F3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8283F3C4"))) PPC_WEAK_FUNC(sub_8283F3C4);
PPC_FUNC_IMPL(__imp__sub_8283F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283F3C8"))) PPC_WEAK_FUNC(sub_8283F3C8);
PPC_FUNC_IMPL(__imp__sub_8283F3C8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f40c
	if (cr6.eq) goto loc_8283F40C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r28,r3,r8
	r28.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_8283F40C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f444
	if (cr6.eq) goto loc_8283F444;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8283e9b8
	sub_8283E9B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8283f448
	goto loc_8283F448;
loc_8283F444:
	// li r29,0
	r29.s64 = 0;
loc_8283F448:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x828456b8
	sub_828456B8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r10,-4
	xer.ca = ctx.r10.u32 > 3;
	r11.s64 = ctx.r10.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8283f480
	if (cr0.eq) goto loc_8283F480;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x8283f4b4
	goto loc_8283F4B4;
loc_8283F480:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283f4b4
	if (cr6.eq) goto loc_8283F4B4;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f4ac
	if (cr6.eq) goto loc_8283F4AC;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283F4AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8283F4B4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8283F4D0"))) PPC_WEAK_FUNC(sub_8283F4D0);
PPC_FUNC_IMPL(__imp__sub_8283F4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8283F4D4"))) PPC_WEAK_FUNC(sub_8283F4D4);
PPC_FUNC_IMPL(__imp__sub_8283F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283F4D8"))) PPC_WEAK_FUNC(sub_8283F4D8);
PPC_FUNC_IMPL(__imp__sub_8283F4D8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f514
	if (cr6.eq) goto loc_8283F514;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283f514
	if (cr6.lt) goto loc_8283F514;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283f518
	if (cr6.lt) goto loc_8283F518;
loc_8283F514:
	// li r11,1
	r11.s64 = 1;
loc_8283F518:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f538
	if (cr6.eq) goto loc_8283F538;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8283F538:
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283f568
	if (cr6.eq) goto loc_8283F568;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r27,r3,r8
	r27.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_8283F568:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// bl 0x8283e270
	sub_8283E270(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828457a0
	sub_828457A0(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8283f5c4
	if (cr6.eq) goto loc_8283F5C4;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f5bc
	if (cr6.eq) goto loc_8283F5BC;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283F5BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8283F5C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bne cr6,0x8283f5e0
	if (!cr6.eq) goto loc_8283F5E0;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// b 0x8283f5e4
	goto loc_8283F5E4;
loc_8283F5E0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8283F5E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x8283b608
	sub_8283B608(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8283F5FC"))) PPC_WEAK_FUNC(sub_8283F5FC);
PPC_FUNC_IMPL(__imp__sub_8283F5FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8283F600"))) PPC_WEAK_FUNC(sub_8283F600);
PPC_FUNC_IMPL(__imp__sub_8283F600) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f63c
	if (cr6.eq) goto loc_8283F63C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8283f63c
	if (cr6.lt) goto loc_8283F63C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283f640
	if (cr6.lt) goto loc_8283F640;
loc_8283F63C:
	// li r11,1
	r11.s64 = 1;
loc_8283F640:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f660
	if (cr6.eq) goto loc_8283F660;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283f3c8
	sub_8283F3C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8283F660:
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283f690
	if (cr6.eq) goto loc_8283F690;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r28,r3,r8
	r28.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_8283F690:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f6c4
	if (cr6.eq) goto loc_8283F6C4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8283e9b8
	sub_8283E9B8(ctx, base);
	// b 0x8283f6c8
	goto loc_8283F6C8;
loc_8283F6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8283F6C8:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828457a0
	sub_828457A0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8283f718
	if (cr6.eq) goto loc_8283F718;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82839300
	sub_82839300(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283f710
	if (cr6.eq) goto loc_8283F710;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8283F710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_8283F718:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8283F72C"))) PPC_WEAK_FUNC(sub_8283F72C);
PPC_FUNC_IMPL(__imp__sub_8283F72C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8283F730"))) PPC_WEAK_FUNC(sub_8283F730);
PPC_FUNC_IMPL(__imp__sub_8283F730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x8283f778
	if (!cr6.eq) goto loc_8283F778;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8283F75C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283f75c
	if (!cr6.eq) goto loc_8283F75C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_8283F778:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// add r22,r4,r5
	r22.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r21,0
	r21.s64 = 0;
	// blt 0x8283f79c
	if (cr0.lt) goto loc_8283F79C;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283f7a0
	if (cr6.lt) goto loc_8283F7A0;
loc_8283F79C:
	// li r11,1
	r11.s64 = 1;
loc_8283F7A0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283f7c8
	if (!cr6.eq) goto loc_8283F7C8;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8283f7d4
	if (!cr6.eq) goto loc_8283F7D4;
	// li r23,0
	r23.s64 = 0;
	// b 0x8283f7d8
	goto loc_8283F7D8;
loc_8283F7C8:
	// li r29,0
	r29.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// b 0x8283f7d8
	goto loc_8283F7D8;
loc_8283F7D4:
	// lwz r23,28(r29)
	r23.u64 = PPC_LOAD_U32(r29.u32 + 28);
loc_8283F7D8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r20,0
	r20.s64 = 0;
	// li r24,-1
	r24.s64 = -1;
loc_8283F7FC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// bne cr6,0x8283f878
	if (!cr6.eq) goto loc_8283F878;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283f878
	if (cr6.eq) goto loc_8283F878;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283e690
	sub_8283E690(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283f870
	if (cr6.eq) goto loc_8283F870;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f848
	if (cr6.eq) goto loc_8283F848;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283f848
	if (!cr6.lt) goto loc_8283F848;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283f84c
	goto loc_8283F84C;
loc_8283F848:
	// li r11,0
	r11.s64 = 0;
loc_8283F84C:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283f860
	if (cr6.eq) goto loc_8283F860;
	// li r11,0
	r11.s64 = 0;
loc_8283F860:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283f870
	if (cr6.eq) goto loc_8283F870;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283F870:
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// b 0x8283f890
	goto loc_8283F890;
loc_8283F878:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// stw r23,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r23.u32);
loc_8283F890:
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(r25.u32, r22.u32, xer);
	// bge cr6,0x8283fa10
	if (!cr6.lt) goto loc_8283FA10;
loc_8283F8A8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8283f908
	if (cr6.eq) goto loc_8283F908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x8283f8e4
	if (!cr6.eq) goto loc_8283F8E4;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(r31.u32, 13, xer);
	// bne cr6,0x8283f8e4
	if (!cr6.eq) goto loc_8283F8E4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8283f8e4
	if (!cr6.eq) goto loc_8283F8E4;
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x8283f8e4
	if (!cr6.eq) goto loc_8283F8E4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x8283f8fc
	goto loc_8283F8FC;
loc_8283F8E4:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x8283f918
	if (cr6.eq) goto loc_8283F918;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x8283f908
	if (cr6.eq) goto loc_8283F908;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8283F8FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// blt cr6,0x8283f8a8
	if (cr6.lt) goto loc_8283F8A8;
loc_8283F908:
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(r28.u32, 10, xer);
	// beq cr6,0x8283f918
	if (cr6.eq) goto loc_8283F918;
	// cmplwi cr6,r28,13
	cr6.compare<uint32_t>(r28.u32, 13, xer);
	// bne cr6,0x8283f91c
	if (!cr6.eq) goto loc_8283F91C;
loc_8283F918:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8283F91C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8283fa00
	if (cr6.eq) goto loc_8283FA00;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(r25.u32, r22.u32, xer);
	// sth r11,36(r29)
	PPC_STORE_U16(r29.u32 + 36, r11.u16);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// bge cr6,0x8283f9d8
	if (!cr6.lt) goto loc_8283F9D8;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
loc_8283F96C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8283f9d8
	if (cr6.eq) goto loc_8283F9D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794ee8
	sub_82794EE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x8283f990
	if (cr6.eq) goto loc_8283F990;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x8283f9a8
	if (!cr6.eq) goto loc_8283F9A8;
loc_8283F990:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// addi r28,r11,10
	r28.s64 = r11.s64 + 10;
loc_8283F9A8:
	// sthu r28,2(r31)
	ea = 2 + r31.u32;
	PPC_STORE_U16(ea, r28.u16);
	r31.u32 = ea;
	// lbz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,30
	r11.u64 = ctx.r7.u32 & 0x3;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, xer);
	// beq cr6,0x8283f9d8
	if (cr6.eq) goto loc_8283F9D8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// blt cr6,0x8283f96c
	if (cr6.lt) goto loc_8283F96C;
loc_8283F9D8:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283eb40
	sub_8283EB40(ctx, base);
	// add r11,r30,r27
	r11.u64 = r30.u64 + r27.u64;
	// add r21,r30,r21
	r21.u64 = r30.u64 + r21.u64;
	// add r23,r11,r23
	r23.u64 = r11.u64 + r23.u64;
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8283FA00:
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(r25.u32, r22.u32, xer);
	// bge cr6,0x8283fa10
	if (!cr6.lt) goto loc_8283FA10;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8283f7fc
	if (!cr6.eq) goto loc_8283F7FC;
loc_8283FA10:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r11,10
	ctx.r7.s64 = r11.s64 + 10;
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, xer);
	// bne cr6,0x8283fa40
	if (!cr6.eq) goto loc_8283FA40;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8283FA40:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283ee08
	sub_8283EE08(ctx, base);
	// lhz r11,42(r19)
	r11.u64 = PPC_LOAD_U16(r19.u32 + 42);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283fa74
	if (cr6.eq) goto loc_8283FA74;
	// addi r3,r19,16
	ctx.r3.s64 = r19.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8283fa78
	if (!cr6.eq) goto loc_8283FA78;
loc_8283FA74:
	// li r11,0
	r11.s64 = 0;
loc_8283FA78:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fa94
	if (cr6.eq) goto loc_8283FA94;
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r26)
	PPC_STORE_U8(r26.u32 + 32, ctx.r10.u8);
loc_8283FA94:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8283FA98"))) PPC_WEAK_FUNC(sub_8283FA98);
PPC_FUNC_IMPL(__imp__sub_8283FA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8283FA9C"))) PPC_WEAK_FUNC(sub_8283FA9C);
PPC_FUNC_IMPL(__imp__sub_8283FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283FAA0"))) PPC_WEAK_FUNC(sub_8283FAA0);
PPC_FUNC_IMPL(__imp__sub_8283FAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x8283fadc
	if (!cr6.eq) goto loc_8283FADC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827994f0
	sub_827994F0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8283FADC:
	// rlwinm r11,r23,1,0,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r11,r25
	r20.u64 = r11.u64 + r25.u64;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8283fafc
	if (cr0.lt) goto loc_8283FAFC;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283fb00
	if (cr6.lt) goto loc_8283FB00;
loc_8283FAFC:
	// li r11,1
	r11.s64 = 1;
loc_8283FB00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283fb28
	if (!cr6.eq) goto loc_8283FB28;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8283fb34
	if (!cr6.eq) goto loc_8283FB34;
	// li r24,0
	r24.s64 = 0;
	// b 0x8283fb38
	goto loc_8283FB38;
loc_8283FB28:
	// li r29,0
	r29.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// b 0x8283fb38
	goto loc_8283FB38;
loc_8283FB34:
	// lwz r24,28(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 28);
loc_8283FB38:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r22,0
	r22.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r21,-1
	r21.s64 = -1;
loc_8283FB64:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// bne cr6,0x8283fbe0
	if (!cr6.eq) goto loc_8283FBE0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8283fbe0
	if (cr6.eq) goto loc_8283FBE0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283e690
	sub_8283E690(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283fbd8
	if (cr6.eq) goto loc_8283FBD8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fbb0
	if (cr6.eq) goto loc_8283FBB0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283fbb0
	if (!cr6.lt) goto loc_8283FBB0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283fbb4
	goto loc_8283FBB4;
loc_8283FBB0:
	// li r11,0
	r11.s64 = 0;
loc_8283FBB4:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283fbc8
	if (cr6.eq) goto loc_8283FBC8;
	// li r11,0
	r11.s64 = 0;
loc_8283FBC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fbd8
	if (cr6.eq) goto loc_8283FBD8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283FBD8:
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// b 0x8283fbf8
	goto loc_8283FBF8;
loc_8283FBE0:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// stw r24,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r24.u32);
loc_8283FBF8:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// bne cr6,0x8283fc24
	if (!cr6.eq) goto loc_8283FC24;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(r27.u32, 13, xer);
	// bne cr6,0x8283fc24
	if (!cr6.eq) goto loc_8283FC24;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8283fc24
	if (!cr6.eq) goto loc_8283FC24;
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// beq 0x8283fdcc
	if (cr0.eq) goto loc_8283FDCC;
loc_8283FC24:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8283fc5c
	if (cr6.eq) goto loc_8283FC5C;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8283FC30:
	// lhz r27,0(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(r27.u32, 10, xer);
	// beq cr6,0x8283fc6c
	if (cr6.eq) goto loc_8283FC6C;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(r27.u32, 13, xer);
	// beq cr6,0x8283fc5c
	if (cr6.eq) goto loc_8283FC5C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8283fc5c
	if (cr6.eq) goto loc_8283FC5C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// blt cr6,0x8283fc30
	if (cr6.lt) goto loc_8283FC30;
loc_8283FC5C:
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(r27.u32, 10, xer);
	// beq cr6,0x8283fc6c
	if (cr6.eq) goto loc_8283FC6C;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(r27.u32, 13, xer);
	// bne cr6,0x8283fc70
	if (!cr6.eq) goto loc_8283FC70;
loc_8283FC6C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8283FC70:
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8283fc84
	if (!cr6.eq) goto loc_8283FC84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8283fcb8
	goto loc_8283FCB8;
loc_8283FC84:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283aeb0
	sub_8283AEB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x828430e8
	sub_828430E8(ctx, base);
	// lhz r11,36(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r29)
	PPC_STORE_U16(r29.u32 + 36, r11.u16);
loc_8283FCB8:
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// subf r23,r31,r23
	r23.s64 = r23.s64 - r31.s64;
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(r27.u32, 10, xer);
	// beq cr6,0x8283fce0
	if (cr6.eq) goto loc_8283FCE0;
	// cmplwi cr6,r27,13
	cr6.compare<uint32_t>(r27.u32, 13, xer);
	// bne cr6,0x8283fd98
	if (!cr6.eq) goto loc_8283FD98;
loc_8283FCE0:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r8,r11,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// subfic r10,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	r11.u64 = ctx.r9.u32 & 0x3;
	// addi r7,r11,10
	ctx.r7.s64 = r11.s64 + 10;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x8283fd98
	if (cr6.eq) goto loc_8283FD98;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283fd80
	if (cr6.eq) goto loc_8283FD80;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fd30
	if (cr6.eq) goto loc_8283FD30;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8283fd30
	if (!cr6.lt) goto loc_8283FD30;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8283fd34
	goto loc_8283FD34;
loc_8283FD30:
	// li r11,0
	r11.s64 = 0;
loc_8283FD34:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8283fd48
	if (cr6.eq) goto loc_8283FD48;
	// li r11,0
	r11.s64 = 0;
loc_8283FD48:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fd58
	if (cr6.eq) goto loc_8283FD58;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8283FD58:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8283fd80
	if (cr6.eq) goto loc_8283FD80;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r11,r7,30
	r11.u64 = ctx.r7.u32 & 0x3;
	// addi r5,r11,10
	ctx.r5.s64 = r11.s64 + 10;
	// sth r5,-2(r6)
	PPC_STORE_U16(ctx.r6.u32 + -2, ctx.r5.u16);
loc_8283FD80:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// addi r27,r11,10
	r27.s64 = r11.s64 + 10;
loc_8283FD98:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283eb40
	sub_8283EB40(ctx, base);
	// add r11,r31,r28
	r11.u64 = r31.u64 + r28.u64;
	// add r22,r31,r22
	r22.u64 = r31.u64 + r22.u64;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// cmplw cr6,r25,r20
	cr6.compare<uint32_t>(r25.u32, r20.u32, xer);
	// bge cr6,0x8283fdcc
	if (!cr6.lt) goto loc_8283FDCC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8283fb64
	if (!cr6.eq) goto loc_8283FB64;
loc_8283FDCC:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// addi r7,r11,10
	ctx.r7.s64 = r11.s64 + 10;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// bne cr6,0x8283fdfc
	if (!cr6.eq) goto loc_8283FDFC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8283FDFC:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283ee08
	sub_8283EE08(ctx, base);
	// lhz r11,42(r19)
	r11.u64 = PPC_LOAD_U16(r19.u32 + 42);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8283fe30
	if (cr6.eq) goto loc_8283FE30;
	// addi r3,r19,16
	ctx.r3.s64 = r19.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8283fe34
	if (!cr6.eq) goto loc_8283FE34;
loc_8283FE30:
	// li r11,0
	r11.s64 = 0;
loc_8283FE34:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283fe50
	if (cr6.eq) goto loc_8283FE50;
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r26)
	PPC_STORE_U8(r26.u32 + 32, ctx.r10.u8);
loc_8283FE50:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8283FE54"))) PPC_WEAK_FUNC(sub_8283FE54);
PPC_FUNC_IMPL(__imp__sub_8283FE54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8283FE58"))) PPC_WEAK_FUNC(sub_8283FE58);
PPC_FUNC_IMPL(__imp__sub_8283FE58) {
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
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x8283fe84
	if (cr0.lt) goto loc_8283FE84;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x8283fe88
	if (cr6.lt) goto loc_8283FE88;
loc_8283FE84:
	// li r11,1
	r11.s64 = 1;
loc_8283FE88:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283fea8
	if (!cr6.eq) goto loc_8283FEA8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8283fec0
	if (!cr6.eq) goto loc_8283FEC0;
loc_8283FEA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8283fee4
	if (cr6.eq) goto loc_8283FEE4;
loc_8283FEC0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8283b1f0
	sub_8283B1F0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8283fee4
	if (!cr6.eq) goto loc_8283FEE4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8283ee08
	sub_8283EE08(ctx, base);
loc_8283FEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8283FEF4"))) PPC_WEAK_FUNC(sub_8283FEF4);
PPC_FUNC_IMPL(__imp__sub_8283FEF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283FEF8"))) PPC_WEAK_FUNC(sub_8283FEF8);
PPC_FUNC_IMPL(__imp__sub_8283FEF8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8283ff34
	if (!cr6.eq) goto loc_8283FF34;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9430
	return;
loc_8283FF34:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// ble cr6,0x8283ff50
	if (!cr6.gt) goto loc_8283FF50;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8283FF50:
	// li r16,0
	r16.s64 = 0;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x8283ff80
	if (!cr6.eq) goto loc_8283FF80;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8283ff80
	if (cr6.eq) goto loc_8283FF80;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_8283FF70:
	// lhzu r10,2(r11)
	ea = 2 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8283ff70
	if (!cr6.eq) goto loc_8283FF70;
loc_8283FF80:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r22,r31
	r22.u64 = r31.u64;
	// bl 0x8283b8b0
	sub_8283B8B0(ctx, base);
	// lwz r21,88(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,92(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8283ffe4
	if (cr6.eq) goto loc_8283FFE4;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8283ffe4
	if (cr6.lt) goto loc_8283FFE4;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// blt cr6,0x8283ffe8
	if (cr6.lt) goto loc_8283FFE8;
loc_8283FFE4:
	// li r11,1
	r11.s64 = 1;
loc_8283FFE8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82840008
	if (!cr6.eq) goto loc_82840008;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x8284000c
	goto loc_8284000C;
loc_82840008:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_8284000C:
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r20,r11
	r20.u64 = r11.u64;
	// mr r19,r16
	r19.u64 = r16.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// li r17,-1
	r17.s64 = -1;
loc_82840020:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82840040
	if (cr6.eq) goto loc_82840040;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82840040
	if (cr6.lt) goto loc_82840040;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// blt cr6,0x82840044
	if (cr6.lt) goto loc_82840044;
loc_82840040:
	// li r11,1
	r11.s64 = 1;
loc_82840044:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284007c
	if (cr6.eq) goto loc_8284007C;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// addi r11,r23,12
	r11.s64 = r23.s64 + 12;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r27,r16
	r27.u64 = r16.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r24,92(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,88(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8284007C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828400e8
	if (cr6.eq) goto loc_828400E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828400b8
	if (cr6.eq) goto loc_828400B8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x828400b8
	if (!cr6.lt) goto loc_828400B8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x828400bc
	goto loc_828400BC;
loc_828400B8:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_828400BC:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x828400d0
	if (cr6.eq) goto loc_828400D0;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_828400D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828400e0
	if (cr6.eq) goto loc_828400E0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_828400E0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x828400f8
	if (!cr6.eq) goto loc_828400F8;
loc_828400E8:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b608
	sub_8283B608(ctx, base);
loc_828400F8:
	// mr r28,r16
	r28.u64 = r16.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x8284012c
	if (!cr6.eq) goto loc_8284012C;
	// clrlwi r11,r19,16
	r11.u64 = r19.u32 & 0xFFFF;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x8284012c
	if (!cr6.eq) goto loc_8284012C;
	// lhz r11,0(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x8284012c
	if (!cr6.eq) goto loc_8284012C;
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// beq 0x8284039c
	if (cr0.eq) goto loc_8284039C;
loc_8284012C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82840170
	if (cr6.eq) goto loc_82840170;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82840138:
	// lhz r19,0(r11)
	r19.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmplwi cr6,r19,10
	cr6.compare<uint32_t>(r19.u32, 10, xer);
	// beq cr6,0x8284016c
	if (cr6.eq) goto loc_8284016C;
	// cmplwi cr6,r19,13
	cr6.compare<uint32_t>(r19.u32, 13, xer);
	// beq cr6,0x8284016c
	if (cr6.eq) goto loc_8284016C;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82840170
	if (cr6.eq) goto loc_82840170;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r28,r22
	cr6.compare<uint32_t>(r28.u32, r22.u32, xer);
	// blt cr6,0x82840138
	if (cr6.lt) goto loc_82840138;
	// b 0x82840170
	goto loc_82840170;
loc_8284016C:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82840170:
	// clrlwi r26,r19,16
	r26.u64 = r19.u32 & 0xFFFF;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(r26.u32, 10, xer);
	// beq cr6,0x82840184
	if (cr6.eq) goto loc_82840184;
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(r26.u32, 13, xer);
	// bne cr6,0x82840188
	if (!cr6.eq) goto loc_82840188;
loc_82840184:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82840188:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x828402e8
	if (cr6.eq) goto loc_828402E8;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bge cr6,0x828401ac
	if (!cr6.lt) goto loc_828401AC;
	// addi r11,r24,1
	r11.s64 = r24.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_828401AC:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283f4d8
	sub_8283F4D8(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x828401d8
	if (cr6.eq) goto loc_828401D8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_828401D8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828401e8
	if (cr6.eq) goto loc_828401E8;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_828401E8:
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r30)
	PPC_STORE_U16(r30.u32 + 36, r11.u16);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r30,r27,r11
	r30.s64 = r11.s64 - r27.s64;
	// bl 0x8283ed10
	sub_8283ED10(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82840304
	if (cr6.eq) goto loc_82840304;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82840258
	if (cr6.lt) goto loc_82840258;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82840258:
	// subf r30,r10,r11
	r30.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8284026c
	if (!cr6.eq) goto loc_8284026C;
	// mr r29,r17
	r29.u64 = r17.u64;
	// b 0x82840274
	goto loc_82840274;
loc_8284026C:
	// subf. r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82840304
	if (cr0.eq) goto loc_82840304;
loc_82840274:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x828402c0
	if (!cr6.lt) goto loc_828402C0;
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82840290
	if (cr6.lt) goto loc_82840290;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x828402c0
	goto loc_828402C0;
loc_82840290:
	// subf r8,r29,r11
	ctx.r8.s64 = r11.s64 - r29.s64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r30,r8
	ctx.r7.s64 = ctx.r8.s64 - r30.s64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r5,r29,r6
	ctx.r5.s64 = ctx.r6.s64 - r29.s64;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
loc_828402C0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82845110
	sub_82845110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283e5d8
	sub_8283E5D8(ctx, base);
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// b 0x82840304
	goto loc_82840304;
loc_828402E8:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283ed10
	sub_8283ED10(ctx, base);
loc_82840304:
	// cmplwi cr6,r26,13
	cr6.compare<uint32_t>(r26.u32, 13, xer);
	// beq cr6,0x82840314
	if (cr6.eq) goto loc_82840314;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(r26.u32, 10, xer);
	// bne cr6,0x82840358
	if (!cr6.eq) goto loc_82840358;
loc_82840314:
	// lbz r11,32(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 32);
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// addi r8,r10,10
	ctx.r8.s64 = ctx.r10.s64 + 10;
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(r26.s32, ctx.r8.s32, xer);
	// beq cr6,0x82840358
	if (cr6.eq) goto loc_82840358;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// subfe r8,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r8,30
	r11.u64 = ctx.r8.u32 & 0x3;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
	// sth r6,-2(r7)
	PPC_STORE_U16(ctx.r7.u32 + -2, ctx.r6.u16);
loc_82840358:
	// stw r20,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r20.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r22,r28,r22
	r22.s64 = r22.s64 - r28.s64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// add r15,r28,r15
	r15.u64 = r28.u64 + r15.u64;
	// mr r27,r16
	r27.u64 = r16.u64;
	// add r20,r11,r20
	r20.u64 = r11.u64 + r20.u64;
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r9
	cr6.compare<int32_t>(r24.s32, ctx.r9.s32, xer);
	// bge cr6,0x8284038c
	if (!cr6.lt) goto loc_8284038C;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
loc_8284038C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8284039c
	if (cr6.eq) goto loc_8284039C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82840020
	if (!cr6.eq) goto loc_82840020;
loc_8284039C:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_828403A0:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x828403b8
	if (cr6.lt) goto loc_828403B8;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// blt cr6,0x828403bc
	if (cr6.lt) goto loc_828403BC;
loc_828403B8:
	// li r11,1
	r11.s64 = 1;
loc_828403BC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828403f4
	if (!cr6.eq) goto loc_828403F4;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r20,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, r20.u32);
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// add r20,r11,r20
	r20.u64 = r11.u64 + r20.u64;
	// cmpw cr6,r24,r8
	cr6.compare<int32_t>(r24.s32, ctx.r8.s32, xer);
	// bge cr6,0x828403a0
	if (!cr6.lt) goto loc_828403A0;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x828403a0
	goto loc_828403A0;
loc_828403F4:
	// lwz r10,16(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// addi r11,r23,12
	r11.s64 = r23.s64 + 12;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840420
	if (cr6.eq) goto loc_82840420;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82840420
	if (cr6.lt) goto loc_82840420;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// blt cr6,0x82840424
	if (cr6.lt) goto loc_82840424;
loc_82840420:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82840424:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82840444
	if (!cr6.eq) goto loc_82840444;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82840458
	if (!cr6.eq) goto loc_82840458;
loc_82840444:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828404cc
	if (cr6.eq) goto loc_828404CC;
loc_82840458:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828404b0
	if (cr6.eq) goto loc_828404B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840488
	if (cr6.eq) goto loc_82840488;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82840488
	if (!cr6.lt) goto loc_82840488;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8284048c
	goto loc_8284048C;
loc_82840488:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_8284048C:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x828404a4
	if (cr6.eq) goto loc_828404A4;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x828404a8
	if (!cr6.eq) goto loc_828404A8;
loc_828404A4:
	// li r11,1
	r11.s64 = 1;
loc_828404A8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x828404b4
	goto loc_828404B4;
loc_828404B0:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_828404B4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828404cc
	if (!cr6.eq) goto loc_828404CC;
	// lwz r5,28(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// lwz r4,8(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// bl 0x8283ee08
	sub_8283EE08(ctx, base);
loc_828404CC:
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828404f4
	if (cr6.eq) goto loc_828404F4;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82760a08
	sub_82760A08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x828404f8
	if (!cr6.eq) goto loc_828404F8;
loc_828404F4:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_828404F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840510
	if (cr6.eq) goto loc_82840510;
	// lbz r11,32(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r23)
	PPC_STORE_U8(r23.u32 + 32, ctx.r10.u8);
loc_82840510:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82840518"))) PPC_WEAK_FUNC(sub_82840518);
PPC_FUNC_IMPL(__imp__sub_82840518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8284051C"))) PPC_WEAK_FUNC(sub_8284051C);
PPC_FUNC_IMPL(__imp__sub_8284051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82840520"))) PPC_WEAK_FUNC(sub_82840520);
PPC_FUNC_IMPL(__imp__sub_82840520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// cmpwi cr6,r18,-1
	cr6.compare<int32_t>(r18.s32, -1, xer);
	// beq cr6,0x82840554
	if (cr6.eq) goto loc_82840554;
	// cmplw cr6,r18,r3
	cr6.compare<uint32_t>(r18.u32, ctx.r3.u32, xer);
	// ble cr6,0x82840558
	if (!cr6.gt) goto loc_82840558;
loc_82840554:
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
loc_82840558:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82840998
	if (cr6.eq) goto loc_82840998;
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840998
	if (cr6.eq) goto loc_82840998;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r6,r10,13435
	ctx.r6.s64 = ctx.r10.s64 + 13435;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r19,0
	r19.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8283b8b0
	sub_8283B8B0(ctx, base);
	// lwz r21,88(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r22,92(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x828405d4
	if (cr6.eq) goto loc_828405D4;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x828405d4
	if (cr6.lt) goto loc_828405D4;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// blt cr6,0x828405d8
	if (cr6.lt) goto loc_828405D8;
loc_828405D4:
	// li r11,1
	r11.s64 = 1;
loc_828405D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840614
	if (cr6.eq) goto loc_82840614;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// addi r11,r20,12
	r11.s64 = r20.s64 + 12;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r30,r19
	r30.u64 = r19.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r22,92(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,88(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82840618
	goto loc_82840618;
loc_82840614:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82840618:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82840638
	if (cr6.eq) goto loc_82840638;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x82840638
	if (cr6.lt) goto loc_82840638;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// blt cr6,0x8284063c
	if (cr6.lt) goto loc_8284063C;
loc_82840638:
	// li r11,1
	r11.s64 = 1;
loc_8284063C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284065c
	if (!cr6.eq) goto loc_8284065C;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r24,28(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x82840660
	goto loc_82840660;
loc_8284065C:
	// mr r24,r19
	r24.u64 = r19.u64;
loc_82840660:
	// lwz r11,16(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x828406c8
	if (!cr6.eq) goto loc_828406C8;
	// lwz r11,12(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r29,r10,r9
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x828406bc
	if (!cr6.eq) goto loc_828406BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// bl 0x8283b608
	sub_8283B608(ctx, base);
loc_828406BC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// b 0x828408f8
	goto loc_828408F8;
loc_828406C8:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r26,r17,12
	r26.s64 = r17.s64 + 12;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwz r8,4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r22,r8
	cr6.compare<int32_t>(r22.s32, ctx.r8.s32, xer);
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bge cr6,0x828406f4
	if (!cr6.lt) goto loc_828406F4;
	// addi r11,r22,1
	r11.s64 = r22.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_828406F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f4d8
	sub_8283F4D8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// subf r8,r30,r11
	ctx.r8.s64 = r11.s64 - r30.s64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r27,r30,r9
	r27.s64 = ctx.r9.s64 - r30.s64;
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// subf r28,r3,r18
	r28.s64 = r18.s64 - ctx.r3.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8284077c
	if (!cr6.eq) goto loc_8284077C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// bl 0x8283b608
	sub_8283B608(ctx, base);
loc_8284077C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82840790
	if (cr6.eq) goto loc_82840790;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283e7b8
	sub_8283E7B8(ctx, base);
loc_82840790:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// add r27,r3,r24
	r27.u64 = ctx.r3.u64 + r24.u64;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// bge cr6,0x828407b0
	if (!cr6.lt) goto loc_828407B0;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
loc_828407B0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x828407c0
	if (!cr6.gt) goto loc_828407C0;
	// li r25,1
	r25.s64 = 1;
loc_828407C0:
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_828407C4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x828407d8
	if (cr6.lt) goto loc_828407D8;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// blt cr6,0x828407dc
	if (cr6.lt) goto loc_828407DC;
loc_828407D8:
	// li r11,1
	r11.s64 = 1;
loc_828407DC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82840894
	if (!cr6.eq) goto loc_82840894;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82840894
	if (cr6.eq) goto loc_82840894;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r30,r29,r11
	r30.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// bgt cr6,0x82840868
	if (cr6.gt) goto loc_82840868;
	// bne cr6,0x82840824
	if (!cr6.eq) goto loc_82840824;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8283b1f0
	sub_8283B1F0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840868
	if (cr6.eq) goto loc_82840868;
loc_82840824:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283f600
	sub_8283F600(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r28,r31,r28
	r28.s64 = r28.s64 - r31.s64;
	// add r27,r31,r27
	r27.u64 = r31.u64 + r27.u64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bge cr6,0x82840850
	if (!cr6.lt) goto loc_82840850;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82840850:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r22,r10
	cr6.compare<int32_t>(r22.s32, ctx.r10.s32, xer);
	// bge cr6,0x828407c4
	if (!cr6.lt) goto loc_828407C4;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// b 0x828407c4
	goto loc_828407C4;
loc_82840868:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// bl 0x8283b608
	sub_8283B608(ctx, base);
loc_82840894:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// stw r27,28(r23)
	PPC_STORE_U32(r23.u32 + 28, r27.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828408f4
	if (cr6.eq) goto loc_828408F4;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828408cc
	if (cr6.eq) goto loc_828408CC;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x828408cc
	if (!cr6.lt) goto loc_828408CC;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x828408d0
	goto loc_828408D0;
loc_828408CC:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_828408D0:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x828408e4
	if (cr6.eq) goto loc_828408E4;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_828408E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828408f4
	if (cr6.eq) goto loc_828408F4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_828408F4:
	// add r10,r8,r27
	ctx.r10.u64 = ctx.r8.u64 + r27.u64;
loc_828408F8:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// bge cr6,0x82840908
	if (!cr6.lt) goto loc_82840908;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_82840908:
	// rlwinm r8,r22,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_8284090C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// blt cr6,0x82840920
	if (cr6.lt) goto loc_82840920;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// blt cr6,0x82840924
	if (cr6.lt) goto loc_82840924;
loc_82840920:
	// li r11,1
	r11.s64 = 1;
loc_82840924:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82840968
	if (!cr6.eq) goto loc_82840968;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82840968
	if (cr6.eq) goto loc_82840968;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// bge cr6,0x8284090c
	if (!cr6.lt) goto loc_8284090C;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x8284090c
	goto loc_8284090C;
loc_82840968:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8283fe58
	sub_8283FE58(ctx, base);
	// lbz r11,32(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284098c
	if (cr6.eq) goto loc_8284098C;
	// lbz r11,32(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r20)
	PPC_STORE_U8(r20.u32 + 32, ctx.r10.u8);
loc_8284098C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e943c
	return;
loc_82840998:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_828409A0"))) PPC_WEAK_FUNC(sub_828409A0);
PPC_FUNC_IMPL(__imp__sub_828409A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_828409A4"))) PPC_WEAK_FUNC(sub_828409A4);
PPC_FUNC_IMPL(__imp__sub_828409A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828409A8"))) PPC_WEAK_FUNC(sub_828409A8);
PPC_FUNC_IMPL(__imp__sub_828409A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840a84
	if (cr6.eq) goto loc_82840A84;
	// mr r25,r11
	r25.u64 = r11.u64;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r24,r30
	r24.u64 = r30.u64;
	// li r26,1
	r26.s64 = 1;
	// li r27,100
	r27.s64 = 100;
	// addi r23,r11,-76
	r23.s64 = r11.s64 + -76;
loc_828409E0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82840a5c
	if (!cr6.eq) goto loc_82840A5C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840a44
	if (cr6.eq) goto loc_82840A44;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// stb r30,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r30.u8);
	// b 0x82840a48
	goto loc_82840A48;
loc_82840A44:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82840A48:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840a58
	if (cr6.eq) goto loc_82840A58;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82840A58:
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82840A5C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwzx r31,r11,r24
	r31.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bne 0x828409e0
	if (!cr0.eq) goto loc_828409E0;
loc_82840A84:
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r31,r28,12
	r31.s64 = r28.s64 + 12;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82840ac8
	if (cr6.eq) goto loc_82840AC8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8283a610
	sub_8283A610(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82840ae4
	if (cr6.eq) goto loc_82840AE4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840ac0
	if (cr6.eq) goto loc_82840AC0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82840AC0:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82840ae4
	goto loc_82840AE4;
loc_82840AC8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x82840ae4
	if (cr6.gt) goto loc_82840AE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793b58
	sub_82793B58(ctx, base);
loc_82840AE4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lbz r11,32(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,32(r28)
	PPC_STORE_U8(r28.u32 + 32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82840AF8"))) PPC_WEAK_FUNC(sub_82840AF8);
PPC_FUNC_IMPL(__imp__sub_82840AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82840AFC"))) PPC_WEAK_FUNC(sub_82840AFC);
PPC_FUNC_IMPL(__imp__sub_82840AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82840B00"))) PPC_WEAK_FUNC(sub_82840B00);
PPC_FUNC_IMPL(__imp__sub_82840B00) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r29,1
	r29.s64 = 1;
	// addi r10,r11,25500
	ctx.r10.s64 = r11.s64 + 25500;
	// li r30,0
	r30.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r30.u8);
	// bl 0x8274e3a0
	sub_8274E3A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840b94
	if (cr6.eq) goto loc_82840B94;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,12292
	ctx.r10.s64 = r11.s64 + 12292;
	// sth r30,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r30.u16);
	// sth r30,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, r30.u16);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r30.u16);
	// sth r30,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, r30.u16);
	// sth r30,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, r30.u16);
	// sth r30,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, r30.u16);
	// b 0x82840b98
	goto loc_82840B98;
loc_82840B94:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82840B98:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840ba8
	if (cr6.eq) goto loc_82840BA8;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82840BA8:
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840bd0
	if (cr6.eq) goto loc_82840BD0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x827b38a8
	sub_827B38A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82840BD0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82840be0
	if (cr6.eq) goto loc_82840BE0;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82840BE0:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82840BEC"))) PPC_WEAK_FUNC(sub_82840BEC);
PPC_FUNC_IMPL(__imp__sub_82840BEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82840BF0"))) PPC_WEAK_FUNC(sub_82840BF0);
PPC_FUNC_IMPL(__imp__sub_82840BF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,25500
	ctx.r10.s64 = r11.s64 + 25500;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82840c2c
	if (cr6.eq) goto loc_82840C2C;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_82840C2C:
	// li r11,0
	r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r29,r10,12292
	r29.s64 = ctx.r10.s64 + 12292;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, r11.u16);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, r11.u16);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r11.u16);
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r11.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// bl 0x828011e0
	sub_828011E0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840c9c
	if (cr6.eq) goto loc_82840C9C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82840C9C:
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x827ff138
	sub_827FF138(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828010c8
	sub_828010C8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840cd8
	if (cr6.eq) goto loc_82840CD8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82840CD8:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82840CE4"))) PPC_WEAK_FUNC(sub_82840CE4);
PPC_FUNC_IMPL(__imp__sub_82840CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82840CE8"))) PPC_WEAK_FUNC(sub_82840CE8);
PPC_FUNC_IMPL(__imp__sub_82840CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_82840CF0"))) PPC_WEAK_FUNC(sub_82840CF0);
PPC_FUNC_IMPL(__imp__sub_82840CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8283f730
	sub_8283F730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82840CF4"))) PPC_WEAK_FUNC(sub_82840CF4);
PPC_FUNC_IMPL(__imp__sub_82840CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82840CF8"))) PPC_WEAK_FUNC(sub_82840CF8);
PPC_FUNC_IMPL(__imp__sub_82840CF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_82840D00"))) PPC_WEAK_FUNC(sub_82840D00);
PPC_FUNC_IMPL(__imp__sub_82840D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8283faa0
	sub_8283FAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82840D04"))) PPC_WEAK_FUNC(sub_82840D04);
PPC_FUNC_IMPL(__imp__sub_82840D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82840D08"))) PPC_WEAK_FUNC(sub_82840D08);
PPC_FUNC_IMPL(__imp__sub_82840D08) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x828409a8
	sub_828409A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283f730
	sub_8283F730(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82840D44"))) PPC_WEAK_FUNC(sub_82840D44);
PPC_FUNC_IMPL(__imp__sub_82840D44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82840D48"))) PPC_WEAK_FUNC(sub_82840D48);
PPC_FUNC_IMPL(__imp__sub_82840D48) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x828409a8
	sub_828409A8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8283faa0
	sub_8283FAA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82840D84"))) PPC_WEAK_FUNC(sub_82840D84);
PPC_FUNC_IMPL(__imp__sub_82840D84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82840D88"))) PPC_WEAK_FUNC(sub_82840D88);
PPC_FUNC_IMPL(__imp__sub_82840D88) {
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82840db0
	if (!cr6.eq) goto loc_82840DB0;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82840DB0:
	// subf r31,r30,r6
	r31.s64 = ctx.r6.s64 - r30.s64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x828409a8
	sub_828409A8(ctx, base);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r6,r10,13435
	ctx.r6.s64 = ctx.r10.s64 + 13435;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// lwz r26,88(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82840e28
	if (cr6.eq) goto loc_82840E28;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x82840e28
	if (cr6.lt) goto loc_82840E28;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82840e2c
	if (cr6.lt) goto loc_82840E2C;
loc_82840E28:
	// li r11,1
	r11.s64 = 1;
loc_82840E2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82840fb0
	if (!cr6.eq) goto loc_82840FB0;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82840eb0
	if (cr6.eq) goto loc_82840EB0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8283b250
	sub_8283B250(ctx, base);
	// subf r30,r28,r3
	r30.s64 = ctx.r3.s64 - r28.s64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x82840e78
	if (cr6.lt) goto loc_82840E78;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82840E78:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r29,r30,r31
	r29.s64 = r31.s64 - r30.s64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bge cr6,0x82840eb0
	if (!cr6.lt) goto loc_82840EB0;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_82840EB0:
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82840EB4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82840ed4
	if (cr6.eq) goto loc_82840ED4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x82840ed4
	if (cr6.lt) goto loc_82840ED4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82840ed8
	if (cr6.lt) goto loc_82840ED8;
loc_82840ED4:
	// li r11,1
	r11.s64 = 1;
loc_82840ED8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82840fb0
	if (!cr6.eq) goto loc_82840FB0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82840fb0
	if (cr6.eq) goto loc_82840FB0;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r31,4(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82840f4c
	if (cr6.eq) goto loc_82840F4C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840f24
	if (cr6.eq) goto loc_82840F24;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bge cr6,0x82840f24
	if (!cr6.lt) goto loc_82840F24;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82840f28
	goto loc_82840F28;
loc_82840F24:
	// li r11,0
	r11.s64 = 0;
loc_82840F28:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82840f3c
	if (cr6.eq) goto loc_82840F3C;
	// li r11,0
	r11.s64 = 0;
loc_82840F3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82840f4c
	if (cr6.eq) goto loc_82840F4C;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82840F4C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bgt cr6,0x82840f78
	if (cr6.gt) goto loc_82840F78;
	// bl 0x8283f3c8
	sub_8283F3C8(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bge cr6,0x82840eb4
	if (!cr6.lt) goto loc_82840EB4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82840eb4
	goto loc_82840EB4;
loc_82840F78:
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
loc_82840FB0:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82840fc8
	if (cr0.lt) goto loc_82840FC8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82840fcc
	if (cr6.lt) goto loc_82840FCC;
loc_82840FC8:
	// li r11,1
	r11.s64 = 1;
loc_82840FCC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841060
	if (!cr6.eq) goto loc_82841060;
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82841060
	if (cr6.eq) goto loc_82841060;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82841044
	if (cr6.eq) goto loc_82841044;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284101c
	if (cr6.eq) goto loc_8284101C;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8284101c
	if (!cr6.lt) goto loc_8284101C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82841020
	goto loc_82841020;
loc_8284101C:
	// li r11,0
	r11.s64 = 0;
loc_82841020:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82841038
	if (cr6.eq) goto loc_82841038;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8284103c
	if (!cr6.eq) goto loc_8284103C;
loc_82841038:
	// li r11,1
	r11.s64 = 1;
loc_8284103C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// b 0x82841048
	goto loc_82841048;
loc_82841044:
	// li r11,0
	r11.s64 = 0;
loc_82841048:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82841060
	if (cr6.eq) goto loc_82841060;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x8283f2c0
	sub_8283F2C0(ctx, base);
loc_82841060:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8283fe58
	sub_8283FE58(ctx, base);
	// lbz r11,32(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82841084
	if (cr6.eq) goto loc_82841084;
	// lbz r11,32(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r10,32(r24)
	PPC_STORE_U8(r24.u32 + 32, ctx.r10.u8);
loc_82841084:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82841088"))) PPC_WEAK_FUNC(sub_82841088);
PPC_FUNC_IMPL(__imp__sub_82841088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8284108C"))) PPC_WEAK_FUNC(sub_8284108C);
PPC_FUNC_IMPL(__imp__sub_8284108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841090"))) PPC_WEAK_FUNC(sub_82841090);
PPC_FUNC_IMPL(__imp__sub_82841090) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_82841098"))) PPC_WEAK_FUNC(sub_82841098);
PPC_FUNC_IMPL(__imp__sub_82841098) {
	PPC_FUNC_PROLOGUE();
	// b 0x8283fef8
	sub_8283FEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284109C"))) PPC_WEAK_FUNC(sub_8284109C);
PPC_FUNC_IMPL(__imp__sub_8284109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828410A0"))) PPC_WEAK_FUNC(sub_828410A0);
PPC_FUNC_IMPL(__imp__sub_828410A0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284110c
	if (cr6.eq) goto loc_8284110C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8284110c
	if (cr6.lt) goto loc_8284110C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82841110
	if (cr6.lt) goto loc_82841110;
loc_8284110C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82841110:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841124
	if (!cr6.eq) goto loc_82841124;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82845820
	sub_82845820(ctx, base);
loc_82841124:
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

__attribute__((alias("__imp__sub_82841138"))) PPC_WEAK_FUNC(sub_82841138);
PPC_FUNC_IMPL(__imp__sub_82841138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284113C"))) PPC_WEAK_FUNC(sub_8284113C);
PPC_FUNC_IMPL(__imp__sub_8284113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841140"))) PPC_WEAK_FUNC(sub_82841140);
PPC_FUNC_IMPL(__imp__sub_82841140) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82841168
	if (!cr6.eq) goto loc_82841168;
	// bl 0x8283bab0
	sub_8283BAB0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82841168:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8283b7b8
	sub_8283B7B8(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828411d0
	if (cr6.eq) goto loc_828411D0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x828411d0
	if (cr6.lt) goto loc_828411D0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// blt cr6,0x828411d4
	if (cr6.lt) goto loc_828411D4;
loc_828411D0:
	// li r11,1
	r11.s64 = 1;
loc_828411D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8284123c
	if (!cr6.eq) goto loc_8284123C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	// cmplw cr6,r23,r31
	cr6.compare<uint32_t>(r23.u32, r31.u32, xer);
	// bge cr6,0x82841204
	if (!cr6.lt) goto loc_82841204;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82841204:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x8284123c
	if (cr6.gt) goto loc_8284123C;
	// add r5,r31,r4
	ctx.r5.u64 = r31.u64 + ctx.r4.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r5
	xer.ca = ctx.r5.u32 >= r11.u32;
	r11.s64 = ctx.r5.s64 - r11.s64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subfze r24,r10
	temp.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r24.u64 = temp.u64;
	// bl 0x8283e750
	sub_8283E750(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r27,r31,r23
	r27.s64 = r23.s64 - r31.s64;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// bge cr6,0x8284123c
	if (!cr6.lt) goto loc_8284123C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
loc_8284123C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8284125c
	if (cr6.eq) goto loc_8284125C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8284125c
	if (cr6.lt) goto loc_8284125C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// blt cr6,0x82841260
	if (cr6.lt) goto loc_82841260;
loc_8284125C:
	// li r11,1
	r11.s64 = 1;
loc_82841260:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841334
	if (!cr6.eq) goto loc_82841334;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// blt cr6,0x828412f0
	if (cr6.lt) goto loc_828412F0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r22,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r22.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r22.u32);
	// blt cr6,0x828412c8
	if (cr6.lt) goto loc_828412C8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// blt cr6,0x828412cc
	if (cr6.lt) goto loc_828412CC;
loc_828412C8:
	// li r11,1
	r11.s64 = 1;
loc_828412CC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828412e4
	if (!cr6.eq) goto loc_828412E4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82845820
	sub_82845820(ctx, base);
loc_828412E4:
	// subf. r27,r29,r27
	r27.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8284123c
	if (!cr0.eq) goto loc_8284123C;
	// b 0x82841334
	goto loc_82841334;
loc_828412F0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82841334
	if (cr6.eq) goto loc_82841334;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82841334
	if (cr6.eq) goto loc_82841334;
	// subf r8,r27,r29
	ctx.r8.s64 = r29.s64 - r27.s64;
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x828410a0
	sub_828410A0(ctx, base);
	// mr r24,r22
	r24.u64 = r22.u64;
loc_82841334:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82841354
	if (cr6.eq) goto loc_82841354;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82841354
	if (cr6.lt) goto loc_82841354;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// blt cr6,0x82841358
	if (cr6.lt) goto loc_82841358;
loc_82841354:
	// li r11,1
	r11.s64 = 1;
loc_82841358:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828413b8
	if (!cr6.eq) goto loc_828413B8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828413a8
	if (cr6.eq) goto loc_828413A8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x828413b8
	if (cr6.eq) goto loc_828413B8;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828413b8
	if (cr6.eq) goto loc_828413B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8283f158
	sub_8283F158(ctx, base);
loc_828413A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x828410a0
	sub_828410A0(ctx, base);
loc_828413B8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_828413BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x828413dc
	if (cr6.eq) goto loc_828413DC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x828413dc
	if (cr6.lt) goto loc_828413DC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// blt cr6,0x828413e0
	if (cr6.lt) goto loc_828413E0;
loc_828413DC:
	// li r11,1
	r11.s64 = 1;
loc_828413E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841418
	if (!cr6.eq) goto loc_82841418;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// subf r7,r23,r8
	ctx.r7.s64 = ctx.r8.s64 - r23.s64;
	// stw r7,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r7.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(r30.s32, ctx.r6.s32, xer);
	// bge cr6,0x828413bc
	if (!cr6.lt) goto loc_828413BC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x828413bc
	goto loc_828413BC;
loc_82841418:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8283fe58
	sub_8283FE58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82841424"))) PPC_WEAK_FUNC(sub_82841424);
PPC_FUNC_IMPL(__imp__sub_82841424) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82841428"))) PPC_WEAK_FUNC(sub_82841428);
PPC_FUNC_IMPL(__imp__sub_82841428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82839f98
	sub_82839F98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82841470
	if (cr6.eq) goto loc_82841470;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82840bf0
	sub_82840BF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82841474
	goto loc_82841474;
loc_82841470:
	// li r31,0
	r31.s64 = 0;
loc_82841474:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82840d88
	sub_82840D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82841490"))) PPC_WEAK_FUNC(sub_82841490);
PPC_FUNC_IMPL(__imp__sub_82841490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82841494"))) PPC_WEAK_FUNC(sub_82841494);
PPC_FUNC_IMPL(__imp__sub_82841494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841498"))) PPC_WEAK_FUNC(sub_82841498);
PPC_FUNC_IMPL(__imp__sub_82841498) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,27508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 27508);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x827958c8
	sub_827958C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828458c8
	sub_828458C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8284151C"))) PPC_WEAK_FUNC(sub_8284151C);
PPC_FUNC_IMPL(__imp__sub_8284151C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82841520"))) PPC_WEAK_FUNC(sub_82841520);
PPC_FUNC_IMPL(__imp__sub_82841520) {
	PPC_FUNC_PROLOGUE();
	// b 0x828458c8
	sub_828458C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82841520"))) PPC_WEAK_FUNC(sub_82841520);
PPC_FUNC_IMPL(__imp__sub_82841520) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82841524"))) PPC_WEAK_FUNC(sub_82841524);
PPC_FUNC_IMPL(__imp__sub_82841524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841528"))) PPC_WEAK_FUNC(sub_82841528);
PPC_FUNC_IMPL(__imp__sub_82841528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// rlwinm r8,r3,25,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FE;
	// addi r10,r11,-10752
	ctx.r10.s64 = r11.s64 + -10752;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lhzx r11,r8,r10
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841550
	if (!cr6.eq) goto loc_82841550;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82841550:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82841564
	if (!cr6.eq) goto loc_82841564;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82841564:
	// rlwinm r8,r9,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r7,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lhzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_82841594"))) PPC_WEAK_FUNC(sub_82841594);
PPC_FUNC_IMPL(__imp__sub_82841594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841598"))) PPC_WEAK_FUNC(sub_82841598);
PPC_FUNC_IMPL(__imp__sub_82841598) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x828415c0
	if (!cr6.eq) goto loc_828415C0;
loc_828415B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_828415C0:
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x828415e0
	if (!cr6.eq) goto loc_828415E0;
	// li r27,-1
	r27.s64 = -1;
	// b 0x828415e8
	goto loc_828415E8;
loc_828415E0:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bne cr6,0x828415f0
	if (!cr6.eq) goto loc_828415F0;
loc_828415E8:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
loc_828415F0:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82841638
	if (cr6.eq) goto loc_82841638;
	// addi r29,r10,-2
	r29.s64 = ctx.r10.s64 + -2;
loc_82841600:
	// lhz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x828415b4
	if (cr6.eq) goto loc_828415B4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzu r11,2(r29)
	ea = 2 + r29.u32;
	r11.u64 = PPC_LOAD_U16(ea);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-48
	r30.s64 = r11.s64 + -48;
	// blt cr6,0x82841600
	if (cr6.lt) goto loc_82841600;
loc_82841638:
	// mullw r11,r27,r30
	r11.s64 = int64_t(r27.s32) * int64_t(r30.s32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82841648"))) PPC_WEAK_FUNC(sub_82841648);
PPC_FUNC_IMPL(__imp__sub_82841648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8284164C"))) PPC_WEAK_FUNC(sub_8284164C);
PPC_FUNC_IMPL(__imp__sub_8284164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841650"))) PPC_WEAK_FUNC(sub_82841650);
PPC_FUNC_IMPL(__imp__sub_82841650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82841684
	if (!cr6.eq) goto loc_82841684;
loc_82841670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
	// b 0x828e946c
	return;
loc_82841684:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r30,r10,r4
	r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfd f31,16944(r9)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16944);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// lfd f28,27392(r8)
	f28.u64 = PPC_LOAD_U64(ctx.r8.u32 + 27392);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// bne cr6,0x828416bc
	if (!cr6.eq) goto loc_828416BC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f28,23280(r11)
	f28.u64 = PPC_LOAD_U64(r11.u32 + 23280);
	// b 0x828416c4
	goto loc_828416C4;
loc_828416BC:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bne cr6,0x828416c8
	if (!cr6.eq) goto loc_828416C8;
loc_828416C4:
	// addi r31,r4,2
	r31.s64 = ctx.r4.s64 + 2;
loc_828416C8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x82841790
	if (!cr6.lt) goto loc_82841790;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f29,25576(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(r11.u32 + 25576);
loc_828416D8:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r3,46
	cr6.compare<uint32_t>(ctx.r3.u32, 46, xer);
	// beq cr6,0x82841724
	if (cr6.eq) goto loc_82841724;
	// cmplwi cr6,r3,44
	cr6.compare<uint32_t>(ctx.r3.u32, 44, xer);
	// beq cr6,0x82841724
	if (cr6.eq) goto loc_82841724;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82841670
	if (cr6.eq) goto loc_82841670;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fmadd f30,f30,f29,f13
	f30.f64 = f30.f64 * f29.f64 + ctx.f13.f64;
	// blt cr6,0x828416d8
	if (cr6.lt) goto loc_828416D8;
	// b 0x82841790
	goto loc_82841790;
loc_82841724:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x82841790
	if (!cr6.lt) goto loc_82841790;
	// cmplwi cr6,r3,46
	cr6.compare<uint32_t>(ctx.r3.u32, 46, xer);
	// beq cr6,0x8284173c
	if (cr6.eq) goto loc_8284173C;
	// cmplwi cr6,r3,44
	cr6.compare<uint32_t>(ctx.r3.u32, 44, xer);
	// bne cr6,0x82841790
	if (!cr6.eq) goto loc_82841790;
loc_8284173C:
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8284178c
	if (!cr6.lt) goto loc_8284178C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f29,25568(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(r11.u32 + 25568);
loc_82841750:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82841670
	if (cr6.eq) goto loc_82841670;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// fadd f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 + f31.f64;
	// fmul f31,f12,f29
	f31.f64 = ctx.f12.f64 * f29.f64;
	// blt cr6,0x82841750
	if (cr6.lt) goto loc_82841750;
loc_8284178C:
	// fadd f30,f31,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64 + f30.f64;
loc_82841790:
	// fmul f0,f28,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f28.f64 * f30.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_828417AC"))) PPC_WEAK_FUNC(sub_828417AC);
PPC_FUNC_IMPL(__imp__sub_828417AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_828417B0"))) PPC_WEAK_FUNC(sub_828417B0);
PPC_FUNC_IMPL(__imp__sub_828417B0) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x8284180c
	if (!cr6.gt) goto loc_8284180C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82841804
	if (!cr6.eq) goto loc_82841804;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82841808
	goto loc_82841808;
loc_82841804:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82841808:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_8284180C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82841838"))) PPC_WEAK_FUNC(sub_82841838);
PPC_FUNC_IMPL(__imp__sub_82841838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284183C"))) PPC_WEAK_FUNC(sub_8284183C);
PPC_FUNC_IMPL(__imp__sub_8284183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841840"))) PPC_WEAK_FUNC(sub_82841840);
PPC_FUNC_IMPL(__imp__sub_82841840) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x828418a0
	if (!cr6.gt) goto loc_828418A0;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82841898
	if (!cr6.eq) goto loc_82841898;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x8284189c
	goto loc_8284189C;
loc_82841898:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_8284189C:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_828418A0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r30.u16);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_828418D0"))) PPC_WEAK_FUNC(sub_828418D0);
PPC_FUNC_IMPL(__imp__sub_828418D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828418D4"))) PPC_WEAK_FUNC(sub_828418D4);
PPC_FUNC_IMPL(__imp__sub_828418D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828418D8"))) PPC_WEAK_FUNC(sub_828418D8);
PPC_FUNC_IMPL(__imp__sub_828418D8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82841998
	if (cr6.eq) goto loc_82841998;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r3,-2
	r29.s64 = ctx.r3.s64 + -2;
loc_82841900:
	// lhzu r3,2(r29)
	ea = 2 + r29.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	r29.u32 = ea;
	// bl 0x82799678
	sub_82799678(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82799678
	sub_82799678(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// beq 0x82841944
	if (cr0.eq) goto loc_82841944;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82841944
	if (cr6.eq) goto loc_82841944;
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bne cr6,0x8284198c
	if (!cr6.eq) goto loc_8284198C;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841900
	if (!cr6.eq) goto loc_82841900;
loc_82841944:
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bne cr6,0x8284198c
	if (!cr6.eq) goto loc_8284198C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82841960
	if (!cr6.eq) goto loc_82841960;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284198c
	if (cr6.eq) goto loc_8284198C;
loc_82841960:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82841964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82841964
	if (!cr6.eq) goto loc_82841964;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r3,r10,r26
	ctx.r3.s64 = r26.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8284198C:
	// subf r3,r3,r28
	ctx.r3.s64 = r28.s64 - ctx.r3.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82841998:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8284199C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8284199c
	if (!cr6.eq) goto loc_8284199C;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_828419C0"))) PPC_WEAK_FUNC(sub_828419C0);
PPC_FUNC_IMPL(__imp__sub_828419C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_828419C4"))) PPC_WEAK_FUNC(sub_828419C4);
PPC_FUNC_IMPL(__imp__sub_828419C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828419C8"))) PPC_WEAK_FUNC(sub_828419C8);
PPC_FUNC_IMPL(__imp__sub_828419C8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// subf. r30,r4,r5
	r30.s64 = ctx.r5.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ble 0x82841a38
	if (!cr0.gt) goto loc_82841A38;
loc_828419EC:
	// srawi r29,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r29.s64 = r30.s32 >> 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// add r31,r29,r28
	r31.u64 = r29.u64 + r28.u64;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82841a2c
	if (cr6.eq) goto loc_82841A2C;
	// subf r11,r29,r30
	r11.s64 = r30.s64 - r29.s64;
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// b 0x82841a30
	goto loc_82841A30;
loc_82841A2C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82841A30:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x828419ec
	if (cr6.gt) goto loc_828419EC;
loc_82841A38:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82841A40"))) PPC_WEAK_FUNC(sub_82841A40);
PPC_FUNC_IMPL(__imp__sub_82841A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82841A44"))) PPC_WEAK_FUNC(sub_82841A44);
PPC_FUNC_IMPL(__imp__sub_82841A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841A48"))) PPC_WEAK_FUNC(sub_82841A48);
PPC_FUNC_IMPL(__imp__sub_82841A48) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// beq cr6,0x82841a80
	if (cr6.eq) goto loc_82841A80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82841A80:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82841a90
	if (cr6.eq) goto loc_82841A90;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82841A90:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_82841AAC"))) PPC_WEAK_FUNC(sub_82841AAC);
PPC_FUNC_IMPL(__imp__sub_82841AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841AB0"))) PPC_WEAK_FUNC(sub_82841AB0);
PPC_FUNC_IMPL(__imp__sub_82841AB0) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82762a48
	sub_82762A48(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82841B04"))) PPC_WEAK_FUNC(sub_82841B04);
PPC_FUNC_IMPL(__imp__sub_82841B04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82841B08"))) PPC_WEAK_FUNC(sub_82841B08);
PPC_FUNC_IMPL(__imp__sub_82841B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82841b28
	if (cr6.lt) goto loc_82841B28;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x82841b2c
	if (cr6.lt) goto loc_82841B2C;
loc_82841B28:
	// li r11,1
	r11.s64 = 1;
loc_82841B2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_82841B30"))) PPC_WEAK_FUNC(sub_82841B30);
PPC_FUNC_IMPL(__imp__sub_82841B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841B34"))) PPC_WEAK_FUNC(sub_82841B34);
PPC_FUNC_IMPL(__imp__sub_82841B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841B38"))) PPC_WEAK_FUNC(sub_82841B38);
PPC_FUNC_IMPL(__imp__sub_82841B38) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82841b74
	if (cr6.eq) goto loc_82841B74;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82841B74:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82841B94"))) PPC_WEAK_FUNC(sub_82841B94);
PPC_FUNC_IMPL(__imp__sub_82841B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841B98"))) PPC_WEAK_FUNC(sub_82841B98);
PPC_FUNC_IMPL(__imp__sub_82841B98) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82841bd4
	if (cr6.eq) goto loc_82841BD4;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82841BD4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82841be4
	if (cr6.eq) goto loc_82841BE4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82841BE4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82841C04"))) PPC_WEAK_FUNC(sub_82841C04);
PPC_FUNC_IMPL(__imp__sub_82841C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841C08"))) PPC_WEAK_FUNC(sub_82841C08);
PPC_FUNC_IMPL(__imp__sub_82841C08) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82841c3c
	if (cr6.eq) goto loc_82841C3C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82841C3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82762d08
	sub_82762D08(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82762d08
	sub_82762D08(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r8,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r7,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r7.u32);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r6,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r6.u32);
	// lbz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// stb r5,40(r30)
	PPC_STORE_U8(r30.u32 + 40, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_82841CAC"))) PPC_WEAK_FUNC(sub_82841CAC);
PPC_FUNC_IMPL(__imp__sub_82841CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841CB0"))) PPC_WEAK_FUNC(sub_82841CB0);
PPC_FUNC_IMPL(__imp__sub_82841CB0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82841cdc
	if (!cr6.eq) goto loc_82841CDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82841CDC:
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// beq 0x82841d84
	if (cr0.eq) goto loc_82841D84;
loc_82841CEC:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82841d84
	if (cr6.eq) goto loc_82841D84;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82841d34
	if (cr6.lt) goto loc_82841D34;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x82841d38
	if (!cr6.gt) goto loc_82841D38;
loc_82841D34:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82841D38:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82841e44
	if (!cr6.eq) goto loc_82841E44;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82841d54
	if (!cr6.lt) goto loc_82841D54;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// b 0x82841d60
	goto loc_82841D60;
loc_82841D54:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82841D60:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82841e44
	if (cr6.eq) goto loc_82841E44;
	// bge cr6,0x82841d78
	if (!cr6.lt) goto loc_82841D78;
	// mr r27,r30
	r27.u64 = r30.u64;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// b 0x82841d7c
	goto loc_82841D7C;
loc_82841D78:
	// addi r28,r3,-1
	r28.s64 = ctx.r3.s64 + -1;
loc_82841D7C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x82841cec
	if (cr6.lt) goto loc_82841CEC;
loc_82841D84:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82841dbc
	if (!cr6.eq) goto loc_82841DBC;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8283ac90
	sub_8283AC90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82841dbc
	if (!cr6.eq) goto loc_82841DBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82841DBC:
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// bge cr6,0x82841e40
	if (!cr6.lt) goto loc_82841E40;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82841DD4:
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82841dfc
	if (cr6.lt) goto loc_82841DFC;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x82841e00
	if (!cr6.gt) goto loc_82841E00;
loc_82841DFC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82841E00:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82841e40
	if (!cr6.eq) goto loc_82841E40;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82841e1c
	if (!cr6.lt) goto loc_82841E1C;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// b 0x82841e28
	goto loc_82841E28;
loc_82841E1C:
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82841E28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82841e40
	if (!cr6.lt) goto loc_82841E40;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// blt cr6,0x82841dd4
	if (cr6.lt) goto loc_82841DD4;
loc_82841E40:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82841E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82841E48"))) PPC_WEAK_FUNC(sub_82841E48);
PPC_FUNC_IMPL(__imp__sub_82841E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82841E4C"))) PPC_WEAK_FUNC(sub_82841E4C);
PPC_FUNC_IMPL(__imp__sub_82841E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841E50"))) PPC_WEAK_FUNC(sub_82841E50);
PPC_FUNC_IMPL(__imp__sub_82841E50) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82841e78
	if (!cr6.eq) goto loc_82841E78;
loc_82841E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82841E78:
	// li r31,0
	r31.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82841ef8
	if (cr6.eq) goto loc_82841EF8;
loc_82841E8C:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// bl 0x828eb8a0
	sub_828EB8A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82841e6c
	if (cr6.eq) goto loc_82841E6C;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r31,r31,4,0,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82799678
	sub_82799678(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x82841ec8
	if (cr6.lt) goto loc_82841EC8;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x82841ec8
	if (cr6.gt) goto loc_82841EC8;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// or r31,r11,r31
	r31.u64 = r11.u64 | r31.u64;
	// b 0x82841ee8
	goto loc_82841EE8;
loc_82841EC8:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x82841ee8
	if (cr6.lt) goto loc_82841EE8;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bgt cr6,0x82841ee8
	if (cr6.gt) goto loc_82841EE8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// or r31,r10,r31
	r31.u64 = ctx.r10.u64 | r31.u64;
loc_82841EE8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82841e8c
	if (cr6.lt) goto loc_82841E8C;
loc_82841EF8:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82841F04"))) PPC_WEAK_FUNC(sub_82841F04);
PPC_FUNC_IMPL(__imp__sub_82841F04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82841F08"))) PPC_WEAK_FUNC(sub_82841F08);
PPC_FUNC_IMPL(__imp__sub_82841F08) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82842270
	if (!cr6.lt) goto loc_82842270;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// bne cr6,0x82842264
	if (!cr6.eq) goto loc_82842264;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r11,r3,10
	r11.s64 = ctx.r3.s64 + 10;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82842000
	if (cr6.gt) goto loc_82842000;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-26008
	ctx.r4.s64 = r11.s64 + -26008;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82841f88
	if (!cr6.eq) goto loc_82841F88;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r9,r11,10
	ctx.r9.s64 = r11.s64 + 10;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82841F88:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,-26000
	ctx.r4.s64 = r11.s64 + -26000;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82841fc4
	if (!cr6.eq) goto loc_82841FC4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r9,r11,10
	ctx.r9.s64 = r11.s64 + 10;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82841FC4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,25584
	ctx.r4.s64 = r11.s64 + 25584;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82842000
	if (!cr6.eq) goto loc_82842000;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,160
	ctx.r10.s64 = 160;
	// addi r9,r11,10
	ctx.r9.s64 = r11.s64 + 10;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82842000:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8284204c
	if (cr6.gt) goto loc_8284204C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-25992
	ctx.r4.s64 = r11.s64 + -25992;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8284204c
	if (!cr6.eq) goto loc_8284204C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,38
	ctx.r10.s64 = 38;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8284204C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x828420d4
	if (cr6.gt) goto loc_828420D4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-25984
	ctx.r4.s64 = r11.s64 + -25984;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82842098
	if (!cr6.eq) goto loc_82842098;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r9,r11,6
	ctx.r9.s64 = r11.s64 + 6;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82842098:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-25980
	ctx.r4.s64 = r11.s64 + -25980;
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x828420d4
	if (!cr6.eq) goto loc_828420D4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,62
	ctx.r10.s64 = 62;
	// addi r9,r11,6
	ctx.r9.s64 = r11.s64 + 6;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_828420D4:
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82842264
	if (cr6.gt) goto loc_82842264;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bne cr6,0x82842264
	if (!cr6.eq) goto loc_82842264;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// li r30,0
	r30.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r11,2(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// addi r11,r11,-120
	r11.s64 = r11.s64 + -120;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82799678
	sub_82799678(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828421c0
	if (cr6.eq) goto loc_828421C0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842238
	if (!cr6.lt) goto loc_82842238;
loc_82842134:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r3,59
	cr6.compare<uint32_t>(ctx.r3.u32, 59, xer);
	// beq cr6,0x82842230
	if (cr6.eq) goto loc_82842230;
	// bl 0x828eb8a0
	sub_828EB8A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82842260
	if (cr6.eq) goto loc_82842260;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// bl 0x82799678
	sub_82799678(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x82842180
	if (cr6.lt) goto loc_82842180;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x82842180
	if (cr6.gt) goto loc_82842180;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// or r30,r11,r30
	r30.u64 = r11.u64 | r30.u64;
	// b 0x828421a0
	goto loc_828421A0;
loc_82842180:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x828421a0
	if (cr6.lt) goto loc_828421A0;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bgt cr6,0x828421a0
	if (cr6.gt) goto loc_828421A0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// or r30,r10,r30
	r30.u64 = ctx.r10.u64 | r30.u64;
loc_828421A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82842134
	if (cr6.lt) goto loc_82842134;
	// b 0x82842230
	goto loc_82842230;
loc_828421C0:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82842260
	if (cr6.eq) goto loc_82842260;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842238
	if (!cr6.lt) goto loc_82842238;
loc_828421E0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r3,59
	cr6.compare<uint32_t>(ctx.r3.u32, 59, xer);
	// beq cr6,0x82842230
	if (cr6.eq) goto loc_82842230;
	// bl 0x828eb880
	sub_828EB880(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82842260
	if (cr6.eq) goto loc_82842260;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// addi r30,r11,-48
	r30.s64 = r11.s64 + -48;
	// blt cr6,0x828421e0
	if (cr6.lt) goto loc_828421E0;
loc_82842230:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82842260
	if (cr6.eq) goto loc_82842260;
loc_82842238:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,59
	cr6.compare<uint32_t>(ctx.r10.u32, 59, xer);
	// bne cr6,0x82842250
	if (!cr6.eq) goto loc_82842250;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82842250:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(r30.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82842260:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_82842264:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82842270:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82842278"))) PPC_WEAK_FUNC(sub_82842278);
PPC_FUNC_IMPL(__imp__sub_82842278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284227C"))) PPC_WEAK_FUNC(sub_8284227C);
PPC_FUNC_IMPL(__imp__sub_8284227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842280"))) PPC_WEAK_FUNC(sub_82842280);
PPC_FUNC_IMPL(__imp__sub_82842280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82842318
	if (cr6.eq) goto loc_82842318;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// subf r28,r5,r3
	r28.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_828422AC:
	// lhzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U16(r28.u32 + r31.u32);
	// bl 0x82799678
	sub_82799678(ctx, base);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82799678
	sub_82799678(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// beq 0x828422e8
	if (cr0.eq) goto loc_828422E8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x828422e8
	if (cr6.eq) goto loc_828422E8;
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x8284230c
	if (!cr6.eq) goto loc_8284230C;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x828422ac
	if (!cr0.eq) goto loc_828422AC;
loc_828422E8:
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bne cr6,0x8284230c
	if (!cr6.eq) goto loc_8284230C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82842300
	if (!cr6.eq) goto loc_82842300;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8284230c
	if (cr6.eq) goto loc_8284230C;
loc_82842300:
	// subf r3,r26,r25
	ctx.r3.s64 = r25.s64 - r26.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_8284230C:
	// subf r3,r3,r29
	ctx.r3.s64 = r29.s64 - ctx.r3.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_82842318:
	// neg r3,r27
	ctx.r3.s64 = -r27.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82842320"))) PPC_WEAK_FUNC(sub_82842320);
PPC_FUNC_IMPL(__imp__sub_82842320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82842324"))) PPC_WEAK_FUNC(sub_82842324);
PPC_FUNC_IMPL(__imp__sub_82842324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842328"))) PPC_WEAK_FUNC(sub_82842328);
PPC_FUNC_IMPL(__imp__sub_82842328) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8284235C"))) PPC_WEAK_FUNC(sub_8284235C);
PPC_FUNC_IMPL(__imp__sub_8284235C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842360"))) PPC_WEAK_FUNC(sub_82842360);
PPC_FUNC_IMPL(__imp__sub_82842360) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284238c
	if (cr6.eq) goto loc_8284238C;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8284238C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8284239c
	if (cr6.eq) goto loc_8284239C;
	// bl 0x8281ddf8
	sub_8281DDF8(ctx, base);
loc_8284239C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828423bc
	if (cr6.eq) goto loc_828423BC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_828423BC:
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

__attribute__((alias("__imp__sub_828423D0"))) PPC_WEAK_FUNC(sub_828423D0);
PPC_FUNC_IMPL(__imp__sub_828423D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828423D4"))) PPC_WEAK_FUNC(sub_828423D4);
PPC_FUNC_IMPL(__imp__sub_828423D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828423D8"))) PPC_WEAK_FUNC(sub_828423D8);
PPC_FUNC_IMPL(__imp__sub_828423D8) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,25596
	ctx.r9.s64 = r11.s64 + 25596;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// bl 0x82763970
	sub_82763970(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r7,r8,25604
	ctx.r7.s64 = ctx.r8.s64 + 25604;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x827627e8
	sub_827627E8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x827627e8
	sub_827627E8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r6.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r30.u8);
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

__attribute__((alias("__imp__sub_82842470"))) PPC_WEAK_FUNC(sub_82842470);
PPC_FUNC_IMPL(__imp__sub_82842470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842474"))) PPC_WEAK_FUNC(sub_82842474);
PPC_FUNC_IMPL(__imp__sub_82842474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842478"))) PPC_WEAK_FUNC(sub_82842478);
PPC_FUNC_IMPL(__imp__sub_82842478) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_828424A0:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x828424a0
	if (!cr0.eq) goto loc_828424A0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x828424cc
	if (!cr0.eq) goto loc_828424CC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_828424CC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_828424D8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x828424d8
	if (!cr0.eq) goto loc_828424D8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addic. r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82842504
	if (!cr0.eq) goto loc_82842504;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82842504:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82842514
	if (cr6.eq) goto loc_82842514;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82842514:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82842524
	if (cr6.eq) goto loc_82842524;
	// bl 0x8281ddf8
	sub_8281DDF8(ctx, base);
loc_82842524:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
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

__attribute__((alias("__imp__sub_82842540"))) PPC_WEAK_FUNC(sub_82842540);
PPC_FUNC_IMPL(__imp__sub_82842540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842544"))) PPC_WEAK_FUNC(sub_82842544);
PPC_FUNC_IMPL(__imp__sub_82842544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842548"))) PPC_WEAK_FUNC(sub_82842548);
PPC_FUNC_IMPL(__imp__sub_82842548) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82842478
	sub_82842478(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842580
	if (cr6.eq) goto loc_82842580;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82842580:
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

__attribute__((alias("__imp__sub_82842594"))) PPC_WEAK_FUNC(sub_82842594);
PPC_FUNC_IMPL(__imp__sub_82842594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842598"))) PPC_WEAK_FUNC(sub_82842598);
PPC_FUNC_IMPL(__imp__sub_82842598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq cr6,0x828425bc
	if (cr6.eq) goto loc_828425BC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x828425c0
	if (cr6.eq) goto loc_828425C0;
loc_828425BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828425C0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828425d0
	if (cr6.eq) goto loc_828425D0;
	// b 0x82841f08
	sub_82841F08(ctx, base);
	return;
loc_828425D0:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_828425EC"))) PPC_WEAK_FUNC(sub_828425EC);
PPC_FUNC_IMPL(__imp__sub_828425EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828425F0"))) PPC_WEAK_FUNC(sub_828425F0);
PPC_FUNC_IMPL(__imp__sub_828425F0) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82842630
	if (!cr6.eq) goto loc_82842630;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82842668
	if (cr6.eq) goto loc_82842668;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82842668
	goto loc_82842668;
loc_82842630:
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mulli r4,r30,44
	ctx.r4.s64 = r30.s64 * 44;
	// beq cr6,0x82842654
	if (cr6.eq) goto loc_82842654;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x82842664
	goto loc_82842664;
loc_82842654:
	// li r11,2
	r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_82842664:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82842668:
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

__attribute__((alias("__imp__sub_82842680"))) PPC_WEAK_FUNC(sub_82842680);
PPC_FUNC_IMPL(__imp__sub_82842680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842684"))) PPC_WEAK_FUNC(sub_82842684);
PPC_FUNC_IMPL(__imp__sub_82842684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842688"))) PPC_WEAK_FUNC(sub_82842688);
PPC_FUNC_IMPL(__imp__sub_82842688) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841cb0
	sub_82841CB0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// blt cr6,0x828426d4
	if (cr6.lt) goto loc_828426D4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x828426dc
	if (cr6.lt) goto loc_828426DC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_828426D4:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x828426e0
	goto loc_828426E0;
loc_828426DC:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_828426E0:
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

__attribute__((alias("__imp__sub_828426F8"))) PPC_WEAK_FUNC(sub_828426F8);
PPC_FUNC_IMPL(__imp__sub_828426F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828426FC"))) PPC_WEAK_FUNC(sub_828426FC);
PPC_FUNC_IMPL(__imp__sub_828426FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842700"))) PPC_WEAK_FUNC(sub_82842700);
PPC_FUNC_IMPL(__imp__sub_82842700) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32124
	r11.s64 = -2105278464;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,9000
	ctx.r7.s64 = r11.s64 + 9000;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x828419c8
	sub_828419C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bge cr6,0x8284277c
	if (!cr6.lt) goto loc_8284277C;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828418d8
	sub_828418D8(ctx, base);
	// neg. r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82842780
	if (cr0.eq) goto loc_82842780;
loc_8284277C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82842780:
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

__attribute__((alias("__imp__sub_82842794"))) PPC_WEAK_FUNC(sub_82842794);
PPC_FUNC_IMPL(__imp__sub_82842794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842798"))) PPC_WEAK_FUNC(sub_82842798);
PPC_FUNC_IMPL(__imp__sub_82842798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x828428a8
	if (!cr6.eq) goto loc_828428A8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x828428a8
	if (!cr6.lt) goto loc_828428A8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r29,1
	r29.s64 = 1;
	// addi r31,r11,-10752
	r31.s64 = r11.s64 + -10752;
loc_828427D4:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// beq cr6,0x828428a8
	if (cr6.eq) goto loc_828428A8;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x828428a8
	if (cr6.eq) goto loc_828428A8;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x828428a8
	if (cr6.eq) goto loc_828428A8;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x828428a8
	if (cr6.eq) goto loc_828428A8;
	// rlwinm r9,r11,25,23,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FE;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// lhzx r11,r9,r31
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284283c
	if (cr6.eq) goto loc_8284283C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x828428a8
	if (cr6.eq) goto loc_828428A8;
	// rlwinm r9,r10,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe. r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x828428a8
	if (!cr0.eq) goto loc_828428A8;
loc_8284283C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82842860
	if (cr6.eq) goto loc_82842860;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x82842864
	if (cr6.eq) goto loc_82842864;
loc_82842860:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82842864:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284287c
	if (cr6.eq) goto loc_8284287C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842898
	goto loc_82842898;
loc_8284287C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842898
	if (!cr6.lt) goto loc_82842898;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_82842898:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x828427d4
	if (cr6.lt) goto loc_828427D4;
loc_828428A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_828428AC"))) PPC_WEAK_FUNC(sub_828428AC);
PPC_FUNC_IMPL(__imp__sub_828428AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_828428B0"))) PPC_WEAK_FUNC(sub_828428B0);
PPC_FUNC_IMPL(__imp__sub_828428B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842994
	if (!cr6.lt) goto loc_82842994;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r29,1
	r29.s64 = 1;
	// addi r31,r11,-10752
	r31.s64 = r11.s64 + -10752;
loc_828428E0:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r10,25,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FE;
	// lhzx r11,r9,r31
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842994
	if (cr6.eq) goto loc_82842994;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82842928
	if (cr6.eq) goto loc_82842928;
	// rlwinm r9,r10,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// slw r8,r29,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe. r11,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82842994
	if (cr0.eq) goto loc_82842994;
loc_82842928:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x8284294c
	if (cr6.eq) goto loc_8284294C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x82842950
	if (cr6.eq) goto loc_82842950;
loc_8284294C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82842950:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82842968
	if (cr6.eq) goto loc_82842968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842984
	goto loc_82842984;
loc_82842968:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842984
	if (!cr6.lt) goto loc_82842984;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_82842984:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x828428e0
	if (cr6.lt) goto loc_828428E0;
loc_82842994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82842998"))) PPC_WEAK_FUNC(sub_82842998);
PPC_FUNC_IMPL(__imp__sub_82842998) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8284299C"))) PPC_WEAK_FUNC(sub_8284299C);
PPC_FUNC_IMPL(__imp__sub_8284299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828429A0"))) PPC_WEAK_FUNC(sub_828429A0);
PPC_FUNC_IMPL(__imp__sub_828429A0) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842a6c
	if (cr6.eq) goto loc_82842A6C;
loc_828429C8:
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// beq cr6,0x82842a6c
	if (cr6.eq) goto loc_82842A6C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq cr6,0x828429f8
	if (cr6.eq) goto loc_828429F8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x828429fc
	if (cr6.eq) goto loc_828429FC;
loc_828429F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828429FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82842a10
	if (cr6.eq) goto loc_82842A10;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842a2c
	goto loc_82842A2C;
loc_82842A10:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842a2c
	if (!cr6.lt) goto loc_82842A2C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_82842A2C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x82842a48
	if (!cr6.eq) goto loc_82842A48;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bge cr6,0x82842a64
	if (!cr6.lt) goto loc_82842A64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82842a64
	goto loc_82842A64;
loc_82842A48:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x82842a60
	if (!cr6.eq) goto loc_82842A60;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bne cr6,0x82842a64
	if (!cr6.eq) goto loc_82842A64;
	// li r31,3
	r31.s64 = 3;
	// b 0x82842a64
	goto loc_82842A64;
loc_82842A60:
	// li r31,0
	r31.s64 = 0;
loc_82842A64:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828429c8
	if (!cr6.eq) goto loc_828429C8;
loc_82842A6C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842a8c
	if (!cr6.lt) goto loc_82842A8C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// bne cr6,0x82842a8c
	if (!cr6.eq) goto loc_82842A8C;
	// bl 0x82842598
	sub_82842598(ctx, base);
loc_82842A8C:
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

__attribute__((alias("__imp__sub_82842AA0"))) PPC_WEAK_FUNC(sub_82842AA0);
PPC_FUNC_IMPL(__imp__sub_82842AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842AA4"))) PPC_WEAK_FUNC(sub_82842AA4);
PPC_FUNC_IMPL(__imp__sub_82842AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842AA8"))) PPC_WEAK_FUNC(sub_82842AA8);
PPC_FUNC_IMPL(__imp__sub_82842AA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,9
	r27.s64 = 9;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82842c00
	if (!cr6.eq) goto loc_82842C00;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82842bb0
	if (!cr6.lt) goto loc_82842BB0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r30,r11,-15104
	r30.s64 = r11.s64 + -15104;
loc_82842AEC:
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r9,25,23,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FE;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lhzx r11,r11,r30
	r11.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842ba8
	if (cr6.eq) goto loc_82842BA8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82842b34
	if (cr6.eq) goto loc_82842B34;
	// rlwinm r8,r10,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// slw r5,r28,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + r30.u32);
	// and r11,r5,r3
	r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82842ba8
	if (cr0.eq) goto loc_82842BA8;
loc_82842B34:
	// cmplwi cr6,r9,61
	cr6.compare<uint32_t>(ctx.r9.u32, 61, xer);
	// beq cr6,0x82842ba8
	if (cr6.eq) goto loc_82842BA8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82842b60
	if (cr6.eq) goto loc_82842B60;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq cr6,0x82842b64
	if (cr6.eq) goto loc_82842B64;
loc_82842B60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82842B64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82842b7c
	if (cr6.eq) goto loc_82842B7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842b98
	goto loc_82842B98;
loc_82842B7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842b98
	if (!cr6.lt) goto loc_82842B98;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82842B98:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82842aec
	if (cr6.lt) goto loc_82842AEC;
loc_82842BA8:
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x82842bbc
	if (cr6.lt) goto loc_82842BBC;
loc_82842BB0:
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82842BBC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x82842be4
	if (!cr6.eq) goto loc_82842BE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82842c00
	goto loc_82842C00;
loc_82842BE4:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82842bfc
	if (cr6.eq) goto loc_82842BFC;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82842bfc
	if (cr6.eq) goto loc_82842BFC;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// b 0x82842c00
	goto loc_82842C00;
loc_82842BFC:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
loc_82842C00:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82842cdc
	if (!cr6.eq) goto loc_82842CDC;
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r30,34
	cr6.compare<uint32_t>(r30.u32, 34, xer);
	// beq cr6,0x82842c20
	if (cr6.eq) goto loc_82842C20;
	// cmplwi cr6,r30,39
	cr6.compare<uint32_t>(r30.u32, 39, xer);
	// bne cr6,0x82842bb0
	if (!cr6.eq) goto loc_82842BB0;
loc_82842C20:
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
loc_82842C24:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82842c48
	if (cr6.eq) goto loc_82842C48;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// beq cr6,0x82842c4c
	if (cr6.eq) goto loc_82842C4C;
loc_82842C48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82842C4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82842c64
	if (cr6.eq) goto loc_82842C64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842c80
	goto loc_82842C80;
loc_82842C64:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842c80
	if (!cr6.lt) goto loc_82842C80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82842C80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842bb0
	if (!cr6.lt) goto loc_82842BB0;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// bne cr6,0x82842c24
	if (!cr6.eq) goto loc_82842C24;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842bb0
	if (!cr6.lt) goto loc_82842BB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82842cd8
	if (cr6.eq) goto loc_82842CD8;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82842cd8
	if (cr6.eq) goto loc_82842CD8;
	// li r11,7
	r11.s64 = 7;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82842CD8:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
loc_82842CDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82842CE0"))) PPC_WEAK_FUNC(sub_82842CE0);
PPC_FUNC_IMPL(__imp__sub_82842CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82842CE4"))) PPC_WEAK_FUNC(sub_82842CE4);
PPC_FUNC_IMPL(__imp__sub_82842CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842CE8"))) PPC_WEAK_FUNC(sub_82842CE8);
PPC_FUNC_IMPL(__imp__sub_82842CE8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r22,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r22.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842fb4
	if (!cr6.lt) goto loc_82842FB4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r25,1
	r25.s64 = 1;
	// addi r24,r11,-10752
	r24.s64 = r11.s64 + -10752;
loc_82842D34:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// beq cr6,0x82842fb4
	if (cr6.eq) goto loc_82842FB4;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82842fb4
	if (cr6.eq) goto loc_82842FB4;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x82842fb4
	if (cr6.eq) goto loc_82842FB4;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82842fb4
	if (cr6.eq) goto loc_82842FB4;
	// rlwinm r9,r11,25,23,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FE;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// lhzx r11,r9,r24
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842d9c
	if (cr6.eq) goto loc_82842D9C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82842fb4
	if (cr6.eq) goto loc_82842FB4;
	// rlwinm r9,r10,28,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// slw r7,r25,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r24
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + r24.u32);
	// and r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe. r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82842fb4
	if (!cr0.eq) goto loc_82842FB4;
loc_82842D9C:
	// lbz r11,16(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842db8
	if (cr6.eq) goto loc_82842DB8;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// beq cr6,0x82842dbc
	if (cr6.eq) goto loc_82842DBC;
loc_82842DB8:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82842DBC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// beq cr6,0x82842eb0
	if (cr6.eq) goto loc_82842EB0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82842e48
	if (!cr6.eq) goto loc_82842E48;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r22,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r22.u32);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lwz r29,0(r23)
	r29.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// ble cr6,0x82842e1c
	if (!cr6.gt) goto loc_82842E1C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82842e14
	if (!cr6.eq) goto loc_82842E14;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82842e18
	goto loc_82842E18;
loc_82842E14:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82842E18:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82842E1C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r27,r25
	r27.u64 = r25.u64;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_82842E48:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82842e90
	if (!cr6.gt) goto loc_82842E90;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82842e88
	if (!cr6.eq) goto loc_82842E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82842e8c
	goto loc_82842E8C;
loc_82842E88:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82842E8C:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82842E90:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, r30.u16);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// b 0x82842f48
	goto loc_82842F48;
loc_82842EB0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r9,r8,r11
	ctx.r9.s64 = r11.s64 - ctx.r8.s64;
	// beq cr6,0x82842f38
	if (cr6.eq) goto loc_82842F38;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// srawi r30,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r30.s64 = ctx.r9.s32 >> 1;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// ble cr6,0x82842f0c
	if (!cr6.gt) goto loc_82842F0C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82842f04
	if (!cr6.eq) goto loc_82842F04;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// b 0x82842f08
	goto loc_82842F08;
loc_82842F04:
	// bl 0x8274e160
	sub_8274E160(ctx, base);
loc_82842F08:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82842F0C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// b 0x82842f48
	goto loc_82842F48;
loc_82842F38:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r11.s64 = ctx.r9.s32 >> 1;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
loc_82842F48:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lbz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// beq cr6,0x82842f6c
	if (cr6.eq) goto loc_82842F6C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq cr6,0x82842f70
	if (cr6.eq) goto loc_82842F70;
loc_82842F6C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82842F70:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82842f88
	if (cr6.eq) goto loc_82842F88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82842fa4
	goto loc_82842FA4;
loc_82842F88:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82842fa4
	if (!cr6.lt) goto loc_82842FA4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r10,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r10.u32);
loc_82842FA4:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x82842d34
	if (cr6.lt) goto loc_82842D34;
loc_82842FB4:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82842fd0
	if (cr6.eq) goto loc_82842FD0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82842FD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82842FD4"))) PPC_WEAK_FUNC(sub_82842FD4);
PPC_FUNC_IMPL(__imp__sub_82842FD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82842FD8"))) PPC_WEAK_FUNC(sub_82842FD8);
PPC_FUNC_IMPL(__imp__sub_82842FD8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82843014
	if (!cr6.eq) goto loc_82843014;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82843064
	if (cr6.eq) goto loc_82843064;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82843064
	goto loc_82843064;
loc_82843014:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843040
	if (cr6.eq) goto loc_82843040;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x82843060
	goto loc_82843060;
loc_82843040:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8274e290
	sub_8274E290(ctx, base);
loc_82843060:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82843064:
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

__attribute__((alias("__imp__sub_8284307C"))) PPC_WEAK_FUNC(sub_8284307C);
PPC_FUNC_IMPL(__imp__sub_8284307C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843080"))) PPC_WEAK_FUNC(sub_82843080);
PPC_FUNC_IMPL(__imp__sub_82843080) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x828430e0
	if (cr6.eq) goto loc_828430E0;
	// addi r31,r5,8
	r31.s64 = ctx.r5.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_828430A0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x828430d0
	if (cr6.eq) goto loc_828430D0;
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828430c8
	if (cr6.eq) goto loc_828430C8;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_828430C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_828430D0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x828430a0
	if (!cr0.eq) goto loc_828430A0;
loc_828430E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_828430E4"))) PPC_WEAK_FUNC(sub_828430E4);
PPC_FUNC_IMPL(__imp__sub_828430E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_828430E8"))) PPC_WEAK_FUNC(sub_828430E8);
PPC_FUNC_IMPL(__imp__sub_828430E8) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82843208
	if (!cr6.gt) goto loc_82843208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842688
	sub_82842688(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x828431a0
	if (!cr6.lt) goto loc_828431A0;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828431a0
	if (cr6.eq) goto loc_828431A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82843174
	if (cr6.lt) goto loc_82843174;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// ble cr6,0x82843178
	if (!cr6.gt) goto loc_82843178;
loc_82843174:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82843178:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82843194
	if (!cr6.eq) goto loc_82843194;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// bne cr6,0x828431a0
	if (!cr6.eq) goto loc_828431A0;
loc_82843194:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_828431A0:
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x828431b0
	if (!cr6.lt) goto loc_828431B0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_828431B0:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_828431BC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x828431d0
	if (cr6.lt) goto loc_828431D0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// blt cr6,0x828431d4
	if (cr6.lt) goto loc_828431D4;
loc_828431D0:
	// li r11,1
	r11.s64 = 1;
loc_828431D4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82843208
	if (!cr6.eq) goto loc_82843208;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x828431bc
	if (!cr6.lt) goto loc_828431BC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// b 0x828431bc
	goto loc_828431BC;
loc_82843208:
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

__attribute__((alias("__imp__sub_8284321C"))) PPC_WEAK_FUNC(sub_8284321C);
PPC_FUNC_IMPL(__imp__sub_8284321C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843220"))) PPC_WEAK_FUNC(sub_82843220);
PPC_FUNC_IMPL(__imp__sub_82843220) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82843270
	if (!cr6.lt) goto loc_82843270;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 * 44;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x827ee150
	sub_827EE150(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843290
	if (!cr6.lt) goto loc_82843290;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x82843284
	goto loc_82843284;
loc_82843270:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82843290
	if (cr6.lt) goto loc_82843290;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_82843284:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828425f0
	sub_828425F0(ctx, base);
loc_82843290:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82843298"))) PPC_WEAK_FUNC(sub_82843298);
PPC_FUNC_IMPL(__imp__sub_82843298) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8284329C"))) PPC_WEAK_FUNC(sub_8284329C);
PPC_FUNC_IMPL(__imp__sub_8284329C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828432A0"))) PPC_WEAK_FUNC(sub_828432A0);
PPC_FUNC_IMPL(__imp__sub_828432A0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843374
	if (cr6.eq) goto loc_82843374;
	// addi r31,r30,244
	r31.s64 = r30.s64 + 244;
	// li r29,512
	r29.s64 = 512;
	// lis r28,-31933
	r28.s64 = -2092761088;
loc_828432D0:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(r11.u32, 80, xer);
	// blt cr6,0x82843314
	if (cr6.lt) goto loc_82843314;
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// addi r10,r11,79
	ctx.r10.s64 = r11.s64 + 79;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// stw r10,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r10.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// subfic r9,r10,512
	xer.ca = ctx.r10.u32 <= 512;
	ctx.r9.s64 = 512 - ctx.r10.s64;
	// subfc r8,r29,r10
	xer.ca = ctx.r10.u32 >= r29.u32;
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r5,520(r31)
	PPC_STORE_U32(r31.u32 + 520, ctx.r5.u32);
	// b 0x82843334
	goto loc_82843334;
loc_82843314:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,80
	ctx.r4.s64 = 80;
	// bne cr6,0x82843330
	if (!cr6.eq) goto loc_82843330;
	// lwz r3,27508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27508);
loc_82843330:
	// bl 0x8274d888
	sub_8274D888(ctx, base);
loc_82843334:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82843350
	if (cr6.eq) goto loc_82843350;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8279a8c0
	sub_8279A8C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82843354
	goto loc_82843354;
loc_82843350:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82843354:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b508
	sub_8279B508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828432d0
	if (!cr6.eq) goto loc_828432D0;
loc_82843374:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82843384"))) PPC_WEAK_FUNC(sub_82843384);
PPC_FUNC_IMPL(__imp__sub_82843384) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82843388"))) PPC_WEAK_FUNC(sub_82843388);
PPC_FUNC_IMPL(__imp__sub_82843388) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8284345c
	if (cr6.eq) goto loc_8284345C;
	// addi r31,r30,244
	r31.s64 = r30.s64 + 244;
	// li r29,512
	r29.s64 = 512;
	// lis r28,-31933
	r28.s64 = -2092761088;
loc_828433B8:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x828433fc
	if (cr6.lt) goto loc_828433FC;
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// addi r10,r11,23
	ctx.r10.s64 = r11.s64 + 23;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// stw r10,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r10.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// subfic r9,r10,512
	xer.ca = ctx.r10.u32 <= 512;
	ctx.r9.s64 = 512 - ctx.r10.s64;
	// subfc r8,r29,r10
	xer.ca = ctx.r10.u32 >= r29.u32;
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r5,520(r31)
	PPC_STORE_U32(r31.u32 + 520, ctx.r5.u32);
	// b 0x8284341c
	goto loc_8284341C;
loc_828433FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,24
	ctx.r4.s64 = 24;
	// bne cr6,0x82843418
	if (!cr6.eq) goto loc_82843418;
	// lwz r3,27508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27508);
loc_82843418:
	// bl 0x8274d888
	sub_8274D888(ctx, base);
loc_8284341C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82843438
	if (cr6.eq) goto loc_82843438;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// bl 0x8279a3b8
	sub_8279A3B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8284343c
	goto loc_8284343C;
loc_82843438:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8284343C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b508
	sub_8279B508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828433b8
	if (!cr6.eq) goto loc_828433B8;
loc_8284345C:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8284346C"))) PPC_WEAK_FUNC(sub_8284346C);
PPC_FUNC_IMPL(__imp__sub_8284346C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82843470"))) PPC_WEAK_FUNC(sub_82843470);
PPC_FUNC_IMPL(__imp__sub_82843470) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843544
	if (cr6.eq) goto loc_82843544;
	// addi r31,r30,244
	r31.s64 = r30.s64 + 244;
	// li r29,512
	r29.s64 = 512;
	// lis r28,-31933
	r28.s64 = -2092761088;
loc_828434A0:
	// lwz r11,520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// blt cr6,0x828434e4
	if (cr6.lt) goto loc_828434E4;
	// lwz r11,516(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 516);
	// addi r10,r11,19
	ctx.r10.s64 = r11.s64 + 19;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// stw r10,516(r31)
	PPC_STORE_U32(r31.u32 + 516, ctx.r10.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// subfic r9,r10,512
	xer.ca = ctx.r10.u32 <= 512;
	ctx.r9.s64 = 512 - ctx.r10.s64;
	// subfc r8,r29,r10
	xer.ca = ctx.r10.u32 >= r29.u32;
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r5,520(r31)
	PPC_STORE_U32(r31.u32 + 520, ctx.r5.u32);
	// b 0x82843504
	goto loc_82843504;
loc_828434E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,20
	ctx.r4.s64 = 20;
	// bne cr6,0x82843500
	if (!cr6.eq) goto loc_82843500;
	// lwz r3,27508(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 27508);
loc_82843500:
	// bl 0x8274d888
	sub_8274D888(ctx, base);
loc_82843504:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82843520
	if (cr6.eq) goto loc_82843520;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8279a378
	sub_8279A378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82843524
	goto loc_82843524;
loc_82843520:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82843524:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b508
	sub_8279B508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279b430
	sub_8279B430(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x828434a0
	if (!cr6.eq) goto loc_828434A0;
loc_82843544:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82843554"))) PPC_WEAK_FUNC(sub_82843554);
PPC_FUNC_IMPL(__imp__sub_82843554) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82843558"))) PPC_WEAK_FUNC(sub_82843558);
PPC_FUNC_IMPL(__imp__sub_82843558) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82843580
	if (!cr6.eq) goto loc_82843580;
loc_82843574:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82843580:
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x828436b4
	if (!cr6.eq) goto loc_828436B4;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x828436b4
	if (cr6.gt) goto loc_828436B4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82843608
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82843608;
	// bdzf 4*cr6+eq,0x82843650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82843650;
	// bdzf 4*cr6+eq,0x828436b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_828436B4;
	// bdzf 4*cr6+eq,0x828436b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_828436B4;
	// bdzf 4*cr6+eq,0x828435c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_828435C4;
	// bdzf 4*cr6+eq,0x828435c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_828435C4;
	// bne cr6,0x828435e4
	if (!cr6.eq) goto loc_828435E4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82842798
	sub_82842798(ctx, base);
loc_828435C4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x828435d8
	if (cr6.eq) goto loc_828435D8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x828435e4
	if (!cr6.eq) goto loc_828435E4;
loc_828435D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82842aa8
	sub_82842AA8(ctx, base);
	// b 0x828435c4
	goto loc_828435C4;
loc_828435E4:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x828436b4
	if (!cr6.eq) goto loc_828436B4;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// ori r10,r11,32770
	ctx.r10.u64 = r11.u64 | 32770;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// b 0x828436b4
	goto loc_828436B4;
loc_82843608:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843640
	if (!cr6.lt) goto loc_82843640;
loc_8284361C:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x82843640
	if (cr6.eq) goto loc_82843640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8284361c
	if (cr6.lt) goto loc_8284361C;
loc_82843640:
	// lis r11,0
	r11.s64 = 0;
	// ori r10,r11,32771
	ctx.r10.u64 = r11.u64 | 32771;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// b 0x828436b4
	goto loc_828436B4;
loc_82843650:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843688
	if (!cr6.lt) goto loc_82843688;
loc_82843664:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82843688
	if (cr6.eq) goto loc_82843688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82843664
	if (cr6.lt) goto loc_82843664;
loc_82843688:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x828436ac
	if (!cr6.eq) goto loc_828436AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// ori r10,r11,32772
	ctx.r10.u64 = r11.u64 | 32772;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// b 0x828436b4
	goto loc_828436B4;
loc_828436AC:
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_828436B4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82843574
	if (cr6.eq) goto loc_82843574;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x828437f8
	if (!cr6.lt) goto loc_828437F8;
loc_828436D8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82843810
	if (!cr6.eq) goto loc_82843810;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x828437dc
	if (cr6.eq) goto loc_828437DC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82843744
	if (cr6.eq) goto loc_82843744;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x82843704
	if (cr6.eq) goto loc_82843704;
	// li r31,3
	r31.s64 = 3;
	// b 0x828437e0
	goto loc_828437E0;
loc_82843704:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x82843724
	if (!cr6.eq) goto loc_82843724;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828429a0
	sub_828429A0(ctx, base);
	// b 0x828437e0
	goto loc_828437E0;
loc_82843724:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x8284373c
	if (!cr6.eq) goto loc_8284373C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// li r31,4
	r31.s64 = 4;
	// b 0x828437e0
	goto loc_828437E0;
loc_8284373C:
	// li r31,2
	r31.s64 = 2;
	// b 0x828437e0
	goto loc_828437E0;
loc_82843744:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82843760
	if (cr6.eq) goto loc_82843760;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82843760
	if (cr6.eq) goto loc_82843760;
	// li r31,3
	r31.s64 = 3;
	// b 0x828437e0
	goto loc_828437E0;
loc_82843760:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82843784
	if (cr6.eq) goto loc_82843784;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82843788
	if (cr6.eq) goto loc_82843788;
loc_82843784:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82843788:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828437a0
	if (cr6.eq) goto loc_828437A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x828437bc
	goto loc_828437BC;
loc_828437A0:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x828437bc
	if (!cr6.lt) goto loc_828437BC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_828437BC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x828437dc
	if (!cr6.eq) goto loc_828437DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// lis r31,0
	r31.s64 = 0;
	// ori r31,r31,32773
	r31.u64 = r31.u64 | 32773;
	// b 0x828437e0
	goto loc_828437E0;
loc_828437DC:
	// li r31,1
	r31.s64 = 1;
loc_828437E0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x828436d8
	if (cr6.lt) goto loc_828436D8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82843810
	if (!cr6.eq) goto loc_82843810;
loc_828437F8:
	// lis r11,0
	r11.s64 = 0;
	// ori r10,r11,32768
	ctx.r10.u64 = r11.u64 | 32768;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82843810:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// rotlwi r3,r31,0
	ctx.r3.u64 = __builtin_rotateleft32(r31.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8284381C"))) PPC_WEAK_FUNC(sub_8284381C);
PPC_FUNC_IMPL(__imp__sub_8284381C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82843820"))) PPC_WEAK_FUNC(sub_82843820);
PPC_FUNC_IMPL(__imp__sub_82843820) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82843850
	if (!cr6.eq) goto loc_82843850;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82843850:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82843860
	if (!cr6.eq) goto loc_82843860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842aa8
	sub_82842AA8(ctx, base);
loc_82843860:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82843950
	if (!cr6.eq) goto loc_82843950;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r28,8
	r28.s64 = 8;
loc_82843878:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843950
	if (!cr6.lt) goto loc_82843950;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842ce8
	sub_82842CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843944
	if (!cr6.lt) goto loc_82843944;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x8284393c
	if (!cr6.eq) goto loc_8284393C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x828438e0
	if (cr6.eq) goto loc_828438E0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x828438e4
	if (cr6.eq) goto loc_828438E4;
loc_828438E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828438E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8284390c
	if (cr6.eq) goto loc_8284390C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// b 0x82843944
	goto loc_82843944;
loc_8284390C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843928
	if (!cr6.lt) goto loc_82843928;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_82843928:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// b 0x82843944
	goto loc_82843944;
loc_8284393C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842aa8
	sub_82842AA8(ctx, base);
loc_82843944:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82843878
	if (cr6.eq) goto loc_82843878;
loc_82843950:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82843968
	if (cr6.lt) goto loc_82843968;
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82843968:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82843970"))) PPC_WEAK_FUNC(sub_82843970);
PPC_FUNC_IMPL(__imp__sub_82843970) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82843974"))) PPC_WEAK_FUNC(sub_82843974);
PPC_FUNC_IMPL(__imp__sub_82843974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843978"))) PPC_WEAK_FUNC(sub_82843978);
PPC_FUNC_IMPL(__imp__sub_82843978) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82843bf8
	if (!cr6.eq) goto loc_82843BF8;
	// lwz r24,20(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r24,34
	cr6.compare<uint32_t>(r24.u32, 34, xer);
	// beq cr6,0x828439c0
	if (cr6.eq) goto loc_828439C0;
	// cmplwi cr6,r24,39
	cr6.compare<uint32_t>(r24.u32, 39, xer);
	// beq cr6,0x828439c0
	if (cr6.eq) goto loc_828439C0;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// b 0x82843bf8
	goto loc_82843BF8;
loc_828439C0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq cr6,0x828439e8
	if (cr6.eq) goto loc_828439E8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq cr6,0x828439ec
	if (cr6.eq) goto loc_828439EC;
loc_828439E8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_828439EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843a04
	if (cr6.eq) goto loc_82843A04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82843a20
	goto loc_82843A20;
loc_82843A04:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843a20
	if (!cr6.lt) goto loc_82843A20;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82843A20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r25,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r25.u8);
	// bne cr6,0x82843a64
	if (!cr6.eq) goto loc_82843A64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r11,-38
	ctx.r10.s64 = r11.s64 + -38;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82843a64
	if (cr6.eq) goto loc_82843A64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
loc_82843A64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843b8c
	if (!cr6.lt) goto loc_82843B8C;
loc_82843A74:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, xer);
	// beq cr6,0x82843b8c
	if (cr6.eq) goto loc_82843B8C;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843a9c
	if (cr6.eq) goto loc_82843A9C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq cr6,0x82843aa0
	if (cr6.eq) goto loc_82843AA0;
loc_82843A9C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82843AA0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843ae0
	if (cr6.eq) goto loc_82843AE0;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82843ad0
	if (!cr6.eq) goto loc_82843AD0;
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x828417b0
	sub_828417B0(ctx, base);
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82843AD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82841840
	sub_82841840(ctx, base);
	// b 0x82843b20
	goto loc_82843B20;
loc_82843AE0:
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843b08
	if (cr6.eq) goto loc_82843B08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r5,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// bl 0x828417b0
	sub_828417B0(ctx, base);
	// b 0x82843b20
	goto loc_82843B20;
loc_82843B08:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r11.s64 = ctx.r8.s32 >> 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
loc_82843B20:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82843b44
	if (cr6.eq) goto loc_82843B44;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,38
	cr6.compare<uint32_t>(ctx.r10.u32, 38, xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq cr6,0x82843b48
	if (cr6.eq) goto loc_82843B48;
loc_82843B44:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82843B48:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82843b60
	if (cr6.eq) goto loc_82843B60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82841f08
	sub_82841F08(ctx, base);
	// b 0x82843b7c
	goto loc_82843B7C;
loc_82843B60:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82843b7c
	if (!cr6.lt) goto loc_82843B7C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82843B7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82843a74
	if (cr6.lt) goto loc_82843A74;
loc_82843B8C:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// stb r27,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r27.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82843bac
	if (cr6.eq) goto loc_82843BAC;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82843BAC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82843bc4
	if (cr6.lt) goto loc_82843BC4;
	// stw r25,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r25.u32);
	// b 0x82843bf8
	goto loc_82843BF8;
loc_82843BC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// bl 0x82842598
	sub_82842598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828428b0
	sub_828428B0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82843bf0
	if (cr6.eq) goto loc_82843BF0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// li r11,7
	r11.s64 = 7;
	// bne cr6,0x82843bf4
	if (!cr6.eq) goto loc_82843BF4;
loc_82843BF0:
	// li r11,9
	r11.s64 = 9;
loc_82843BF4:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82843BF8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82843c10
	if (cr6.lt) goto loc_82843C10;
	// stw r25,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r25.u32);
loc_82843C10:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82843C14"))) PPC_WEAK_FUNC(sub_82843C14);
PPC_FUNC_IMPL(__imp__sub_82843C14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82843C18"))) PPC_WEAK_FUNC(sub_82843C18);
PPC_FUNC_IMPL(__imp__sub_82843C18) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82843c98
	if (!cr6.eq) goto loc_82843C98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82842ce8
	sub_82842CE8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x82843c70
	if (!cr6.eq) goto loc_82843C70;
	// lis r11,0
	r11.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// ori r10,r11,32770
	ctx.r10.u64 = r11.u64 | 32770;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x82842598
	sub_82842598(ctx, base);
	// b 0x82843c94
	goto loc_82843C94;
loc_82843C70:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x82843c84
	if (!cr6.eq) goto loc_82843C84;
	// li r11,6
	r11.s64 = 6;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82843c94
	goto loc_82843C94;
loc_82843C84:
	// li r11,7
	r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x828428b0
	sub_828428B0(ctx, base);
loc_82843C94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82843C98:
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

__attribute__((alias("__imp__sub_82843CAC"))) PPC_WEAK_FUNC(sub_82843CAC);
PPC_FUNC_IMPL(__imp__sub_82843CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

