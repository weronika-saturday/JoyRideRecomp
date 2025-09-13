#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825E7220"))) PPC_WEAK_FUNC(sub_825E7220);
PPC_FUNC_IMPL(__imp__sub_825E7220) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e7250
	if (cr6.eq) goto loc_825E7250;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_825E7250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E7260"))) PPC_WEAK_FUNC(sub_825E7260);
PPC_FUNC_IMPL(__imp__sub_825E7260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E7264"))) PPC_WEAK_FUNC(sub_825E7264);
PPC_FUNC_IMPL(__imp__sub_825E7264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E7268"))) PPC_WEAK_FUNC(sub_825E7268);
PPC_FUNC_IMPL(__imp__sub_825E7268) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e7298
	if (cr6.eq) goto loc_825E7298;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_825E7298:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E72A8"))) PPC_WEAK_FUNC(sub_825E72A8);
PPC_FUNC_IMPL(__imp__sub_825E72A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E72AC"))) PPC_WEAK_FUNC(sub_825E72AC);
PPC_FUNC_IMPL(__imp__sub_825E72AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E72B0"))) PPC_WEAK_FUNC(sub_825E72B0);
PPC_FUNC_IMPL(__imp__sub_825E72B0) {
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
	// addi r30,r3,21968
	r30.s64 = ctx.r3.s64 + 21968;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x825e7338
	if (cr6.eq) goto loc_825E7338;
	// b 0x825e732c
	goto loc_825E732C;
loc_825E72D0:
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x825e7328
	if (!cr6.eq) goto loc_825E7328;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -1073741824;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x825e732c
	goto loc_825E732C;
loc_825E7328:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825E732C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e72d0
	if (!cr6.eq) goto loc_825E72D0;
loc_825E7338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E733C"))) PPC_WEAK_FUNC(sub_825E733C);
PPC_FUNC_IMPL(__imp__sub_825E733C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E7340"))) PPC_WEAK_FUNC(sub_825E7340);
PPC_FUNC_IMPL(__imp__sub_825E7340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
loc_825E7358:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825e7358
	if (!cr0.eq) goto loc_825E7358;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825e74c0
	if (!cr6.eq) goto loc_825E74C0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x825e7418
	if (!cr6.eq) goto loc_825E7418;
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825e74a4
	if (!cr6.gt) goto loc_825E74A4;
	// addi r31,r30,88
	r31.s64 = r30.s64 + 88;
loc_825E73A0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -60);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e7400
	if (!cr6.eq) goto loc_825E7400;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e7400
	if (!cr6.eq) goto loc_825E7400;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e72b0
	sub_825E72B0(ctx, base);
loc_825E7400:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825e73a0
	if (cr6.lt) goto loc_825E73A0;
	// b 0x825e74a4
	goto loc_825E74A4;
loc_825E7418:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x825e74a4
	if (!cr6.eq) goto loc_825E74A4;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e7460
	if (cr6.eq) goto loc_825E7460;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
loc_825E7460:
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e7484
	if (!cr6.eq) goto loc_825E7484;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e7484
	if (!cr6.eq) goto loc_825E7484;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e72b0
	sub_825E72B0(ctx, base);
loc_825E7484:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,0,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825e74a4
	if (!cr6.eq) goto loc_825E74A4;
	// lbz r11,11071(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 11071);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// stb r11,11071(r28)
	PPC_STORE_U8(r28.u32 + 11071, r11.u8);
loc_825E74A4:
	// lis r11,30840
	r11.s64 = 2021130240;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// ori r11,r11,30840
	r11.u64 = r11.u64 | 30840;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E74C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825E74C4"))) PPC_WEAK_FUNC(sub_825E74C4);
PPC_FUNC_IMPL(__imp__sub_825E74C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825E74C8"))) PPC_WEAK_FUNC(sub_825E74C8);
PPC_FUNC_IMPL(__imp__sub_825E74C8) {
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r4,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e7584
	if (cr0.eq) goto loc_825E7584;
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e74f8
	if (cr0.eq) goto loc_825E74F8;
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// b 0x825e74fc
	goto loc_825E74FC;
loc_825E74F8:
	// li r11,1
	r11.s64 = 1;
loc_825E74FC:
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x825e7520
	if (!cr6.eq) goto loc_825E7520;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fab80
	sub_825FAB80(ctx, base);
	// b 0x825e7578
	goto loc_825E7578;
loc_825E7520:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x825e7578
	if (!cr6.eq) goto loc_825E7578;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e753c
	if (cr0.eq) goto loc_825E753C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E753C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e7554
	if (!cr6.gt) goto loc_825E7554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E7554:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,25
	ctx.r10.s64 = 25;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
loc_825E7578:
	// li r11,2
	r11.s64 = 2;
	// stb r11,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r11.u8);
	// b 0x825e7770
	goto loc_825E7770;
loc_825E7584:
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e7770
	if (cr0.eq) goto loc_825E7770;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x825e775c
	if (cr6.eq) goto loc_825E775C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x825e76dc
	if (!cr6.eq) goto loc_825E76DC;
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// beq cr6,0x825e76b0
	if (cr6.eq) goto loc_825E76B0;
	// lbz r11,20(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e76b0
	if (!cr0.eq) goto loc_825E76B0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e75e0
	if (!cr6.gt) goto loc_825E75E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E75E0:
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r11,r11,15616
	r11.u64 = r11.u64 | 15616;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-275
	r11.s64 = -275;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r6,r6,15616
	ctx.r6.u64 = ctx.r6.u64 | 15616;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r8,-1
	ctx.r8.s64 = -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r6,19
	ctx.r6.s64 = 19;
	// li r30,256
	r30.s64 = 256;
	// lis r27,-16380
	r27.s64 = -1073479680;
	// li r26,19
	r26.s64 = 19;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r27,r27,15360
	r27.u64 = r27.u64 | 15360;
	// li r25,256
	r25.s64 = 256;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x825e76c8
	goto loc_825E76C8;
loc_825E76B0:
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// li r11,-275
	r11.s64 = -275;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,20(r29)
	PPC_STORE_U8(r29.u32 + 20, ctx.r10.u8);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_825E76C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fab80
	sub_825FAB80(ctx, base);
	// b 0x825e7754
	goto loc_825E7754;
loc_825E76DC:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x825e7754
	if (!cr6.eq) goto loc_825E7754;
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e76f8
	if (cr0.eq) goto loc_825E76F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E76F8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e7710
	if (!cr6.gt) goto loc_825E7710;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E7710:
	// lis r11,-16383
	r11.s64 = -1073676288;
	// li r10,26
	ctx.r10.s64 = 26;
	// ori r11,r11,23040
	r11.u64 = r11.u64 | 23040;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r10,0,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
loc_825E7754:
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r29)
	PPC_STORE_U8(r29.u32 + 16, r11.u8);
loc_825E775C:
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// stb r10,20(r29)
	PPC_STORE_U8(r29.u32 + 20, ctx.r10.u8);
loc_825E7770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E7774"))) PPC_WEAK_FUNC(sub_825E7774);
PPC_FUNC_IMPL(__imp__sub_825E7774) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825E7778"))) PPC_WEAK_FUNC(sub_825E7778);
PPC_FUNC_IMPL(__imp__sub_825E7778) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r21,20(r3)
	r21.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm. r11,r21,0,25,25
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e77ac
	if (!cr0.eq) goto loc_825E77AC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x825e7b2c
	goto loc_825E7B2C;
loc_825E77AC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x825e79bc
	if (!cr6.eq) goto loc_825E79BC;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e7818
	if (cr6.eq) goto loc_825E7818;
	// lwz r10,11024(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x825e7818
	if (!cr6.lt) goto loc_825E7818;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e77f0
	if (!cr6.eq) goto loc_825E77F0;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E77F0:
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(r22.u32, 16, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x825e7810
	if (cr6.lt) goto loc_825E7810;
	// li r24,0
	r24.s64 = 0;
loc_825E7804:
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_825E7810:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e7b2c
	goto loc_825E7B2C;
loc_825E7818:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(r22.u32, 16, xer);
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// blt cr6,0x825e7834
	if (cr6.lt) goto loc_825E7834;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r24,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r24.u32);
loc_825E7834:
	// lwz r23,148(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r27,r26,28
	r27.s64 = r26.s64 + 28;
loc_825E7840:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r11,r11,-16384
	r11.s64 = r11.s64 + -1073741824;
	// dcbf r0,r11
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r7,r11,52
	ctx.r7.s64 = r11.s64 + 52;
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r10,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// rlwimi r4,r10,24,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwimi r4,r10,8,8,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwimi r4,r10,24,0,7
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r4.u64 & 0xFFFFFFFF00FFFFFF);
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(r22.u32, 16, xer);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x825e7964
	if (cr6.lt) goto loc_825E7964;
	// addi r7,r11,40
	ctx.r7.s64 = r11.s64 + 40;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,32
	r30.s64 = r11.s64 + 32;
	// lwbrx r8,0,r11
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// addi r5,r11,56
	ctx.r5.s64 = r11.s64 + 56;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r11,44
	r28.s64 = r11.s64 + 44;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r18,r11,12
	r18.s64 = r11.s64 + 12;
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// addi r20,r11,60
	r20.s64 = r11.s64 + 60;
	// lwbrx r17,0,r30
	r17.u64 = __builtin_bswap32(PPC_LOAD_U32(r30.u32));
	// addi r19,r11,36
	r19.s64 = r11.s64 + 36;
	// lwbrx r5,0,r5
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// addi r16,r11,4
	r16.s64 = r11.s64 + 4;
	// lwbrx r15,0,r28
	r15.u64 = __builtin_bswap32(PPC_LOAD_U32(r28.u32));
	// addi r14,r11,8
	r14.s64 = r11.s64 + 8;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwbrx r7,0,r18
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(r18.u32));
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// lwbrx r20,0,r20
	r20.u64 = __builtin_bswap32(PPC_LOAD_U32(r20.u32));
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwbrx r19,0,r19
	r19.u64 = __builtin_bswap32(PPC_LOAD_U32(r19.u32));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r5,r15,r6
	ctx.r5.s64 = ctx.r6.s64 - r15.s64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r18,r17,r29
	r18.s64 = r29.s64 - r17.s64;
	// lwbrx r30,0,r30
	r30.u64 = __builtin_bswap32(PPC_LOAD_U32(r30.u32));
	// subf r29,r20,r4
	r29.s64 = ctx.r4.s64 - r20.s64;
	// lwbrx r28,0,r16
	r28.u64 = __builtin_bswap32(PPC_LOAD_U32(r16.u32));
	// subf r11,r19,r18
	r11.s64 = r18.s64 - r19.s64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lwbrx r4,0,r14
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(r14.u32));
	// add r7,r29,r30
	ctx.r7.u64 = r29.u64 + r30.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_825E7964:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(r25.u32, r23.u32, xer);
	// blt cr6,0x825e7840
	if (cr6.lt) goto loc_825E7840;
	// lbz r8,11069(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// li r11,1
	r11.s64 = 1;
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825e7990
	if (cr0.eq) goto loc_825E7990;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_825E7990:
	// cmpwi cr6,r10,-275
	cr6.compare<int32_t>(ctx.r10.s32, -275, xer);
	// bne cr6,0x825e79b0
	if (!cr6.eq) goto loc_825E79B0;
	// cmpwi cr6,r9,-275
	cr6.compare<int32_t>(ctx.r9.s32, -275, xer);
	// bne cr6,0x825e79b0
	if (!cr6.eq) goto loc_825E79B0;
	// cmplwi cr6,r22,16
	cr6.compare<uint32_t>(r22.u32, 16, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x825e7810
	if (cr6.lt) goto loc_825E7810;
	// b 0x825e7804
	goto loc_825E7804;
loc_825E79B0:
	// rlwimi r21,r11,7,0,24
	r21.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0xFFFFFF80) | (r21.u64 & 0xFFFFFFFF0000007F);
	// stb r21,20(r26)
	PPC_STORE_U8(r26.u32 + 20, r21.u8);
	// b 0x825e7b28
	goto loc_825E7B28;
loc_825E79BC:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x825e7af8
	if (!cr6.eq) goto loc_825E7AF8;
	// lbz r11,11069(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e79e4
	if (cr0.eq) goto loc_825E79E4;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x825e7b28
	goto loc_825E7B28;
loc_825E79E4:
	// lwz r10,11024(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x825e7a18
	if (!cr6.lt) goto loc_825E7A18;
loc_825E7A04:
	// lwz r10,11036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e7810
	if (!cr6.eq) goto loc_825E7810;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// b 0x825e7810
	goto loc_825E7810;
loc_825E7A18:
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// rlwinm r11,r10,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r30,r11,-16384
	r30.s64 = r11.s64 + -1073741824;
	// dcbf r0,r30
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r7,10376(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10376);
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825e7ab0
	if (!cr6.eq) goto loc_825E7AB0;
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// rlwinm r3,r11,21,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0xFFFFFFE0;
	// bl 0x825e6808
	sub_825E6808(ctx, base);
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// rlwinm r3,r11,21,0,10
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0xFFE00000;
	// bl 0x825e6808
	sub_825E6808(ctx, base);
	// b 0x825e7b28
	goto loc_825E7B28;
loc_825E7AB0:
	// lhz r11,10(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r10,13
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// rlwinm r11,r11,13,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x825e7b28
	goto loc_825E7B28;
loc_825E7AF8:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x825e7b28
	if (!cr6.eq) goto loc_825E7B28;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,11024(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r9,11036(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x825e7a04
	if (cr6.lt) goto loc_825E7A04;
loc_825E7B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E7B2C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825E7B30"))) PPC_WEAK_FUNC(sub_825E7B30);
PPC_FUNC_IMPL(__imp__sub_825E7B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825E7B34"))) PPC_WEAK_FUNC(sub_825E7B34);
PPC_FUNC_IMPL(__imp__sub_825E7B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E7B38"))) PPC_WEAK_FUNC(sub_825E7B38);
PPC_FUNC_IMPL(__imp__sub_825E7B38) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e7b60
	if (cr6.eq) goto loc_825E7B60;
	// bl 0x825e3390
	sub_825E3390(ctx, base);
loc_825E7B60:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r28,r31,31,31,31
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x1;
	// bne 0x825e7b78
	if (!cr0.eq) goto loc_825E7B78;
	// lbz r11,11072(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e7b80
	if (cr0.eq) goto loc_825E7B80;
loc_825E7B78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825E7B80:
	// rlwinm. r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e7bb8
	if (cr0.eq) goto loc_825E7BB8;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825e7ba0
	if (!cr6.gt) goto loc_825E7BA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E7BA0:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,9728
	r11.u64 = r11.u64 | 9728;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_825E7BB8:
	// li r4,360
	ctx.r4.s64 = 360;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// oris r5,r28,49153
	ctx.r5.u64 = r28.u64 | 3221291008;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// ori r5,r5,15872
	ctx.r5.u64 = ctx.r5.u64 | 15872;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r8,487
	ctx.r8.s64 = 487;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r31,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = r11.u64 | 2;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r7,488
	ctx.r7.s64 = 488;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,919
	ctx.r6.s64 = 919;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r28,920
	r28.s64 = 920;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,921
	r27.s64 = 921;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r26,922
	r26.s64 = 922;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3532
	ctx.r7.s64 = 3532;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,3534
	r27.s64 = 3534;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r7,3535
	ctx.r7.s64 = 3535;
	// ori r26,r11,2
	r26.u64 = r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r25,3536
	r25.s64 = 3536;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r6,3537
	ctx.r6.s64 = 3537;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r4,3538
	ctx.r4.s64 = 3538;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r28,3539
	r28.s64 = 3539;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r26,3148
	r26.s64 = 3148;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,60
	r11.s64 = r31.s64 + 60;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,68
	ctx.r10.s64 = r31.s64 + 68;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,3149
	ctx.r9.s64 = 3149;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,76
	r11.s64 = r31.s64 + 76;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r6,3150
	ctx.r6.s64 = 3150;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3151
	ctx.r4.s64 = 3151;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r27,3152
	r27.s64 = 3152;
	// li r23,3155
	r23.s64 = 3155;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3153
	r26.s64 = 3153;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3154
	r24.s64 = 3154;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,72
	r11.s64 = r31.s64 + 72;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,92
	ctx.r10.s64 = r31.s64 + 92;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r8,3658
	ctx.r8.s64 = 3658;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// li r4,3657
	ctx.r4.s64 = 3657;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3664
	r27.s64 = 3664;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3663
	r26.s64 = 3663;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3667
	r24.s64 = 3667;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3661
	ctx.r7.s64 = 3661;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,100
	r11.s64 = r31.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3660
	r28.s64 = 3660;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,108
	r11.s64 = r31.s64 + 108;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r10,512
	r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r8,3666
	ctx.r8.s64 = 3666;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,124
	r11.s64 = r31.s64 + 124;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,3212
	ctx.r6.s64 = 3212;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r4,3213
	ctx.r4.s64 = 3213;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,132
	r11.s64 = r31.s64 + 132;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,3214
	r28.s64 = 3214;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r27,3215
	r27.s64 = 3215;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = r11.u64 | 2;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,3216
	r26.s64 = 3216;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r7,3217
	ctx.r7.s64 = 3217;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,148
	r11.s64 = r31.s64 + 148;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r28,3219
	r28.s64 = 3219;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3218
	ctx.r6.s64 = 3218;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r8,r10,512
	ctx.r8.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,144
	r11.s64 = r31.s64 + 144;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r25,3228
	r25.s64 = 3228;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,156
	r11.s64 = r31.s64 + 156;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,152
	ctx.r10.s64 = r31.s64 + 152;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,164
	ctx.r9.s64 = r31.s64 + 164;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r4,r7,512
	ctx.r4.s64 = ctx.r7.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r24,r8,r11
	r24.u64 = ctx.r8.u64 + r11.u64;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// ori r4,r24,2
	ctx.r4.u64 = r24.u64 | 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// li r8,3229
	ctx.r8.s64 = 3229;
	// li r6,3230
	ctx.r6.s64 = 3230;
	// li r27,3232
	r27.s64 = 3232;
	// li r24,3234
	r24.s64 = 3234;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3231
	r28.s64 = 3231;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3233
	r25.s64 = 3233;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r26,r11,2
	r26.u64 = r11.u64 | 2;
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r11,3
	ctx.r8.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,180
	r11.s64 = r31.s64 + 180;
	// rlwinm r7,r10,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// ori r23,r9,2
	r23.u64 = ctx.r9.u64 | 2;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = r11.u64 | 2;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// li r6,3235
	ctx.r6.s64 = 3235;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,196
	ctx.r10.s64 = r31.s64 + 196;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// li r4,4102
	ctx.r4.s64 = 4102;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// ori r8,r11,2
	ctx.r8.u64 = r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r21,4101
	r21.s64 = 4101;
	// li r25,3591
	r25.s64 = 3591;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,4105
	ctx.r7.s64 = 4105;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,4104
	ctx.r6.s64 = 4104;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,200
	r11.s64 = r31.s64 + 200;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r4,3590
	ctx.r4.s64 = 3590;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r24,r11,2
	r24.u64 = r11.u64 | 2;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,212
	r11.s64 = r31.s64 + 212;
	// li r7,3594
	ctx.r7.s64 = 3594;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r27,3673
	r27.s64 = 3673;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3593
	ctx.r6.s64 = 3593;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3669
	r28.s64 = 3669;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3672
	r25.s64 = 3672;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,220
	r11.s64 = r31.s64 + 220;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,216
	r11.s64 = r31.s64 + 216;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3670
	ctx.r7.s64 = 3670;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r26,r11,2
	r26.u64 = r11.u64 | 2;
	// addi r11,r31,228
	r11.s64 = r31.s64 + 228;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r8,3676
	ctx.r8.s64 = 3676;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,236
	r11.s64 = r31.s64 + 236;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,232
	r11.s64 = r31.s64 + 232;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r7,3675
	ctx.r7.s64 = 3675;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,244
	r11.s64 = r31.s64 + 244;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r4,3679
	ctx.r4.s64 = 3679;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r6,3678
	ctx.r6.s64 = 3678;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r26,3682
	r26.s64 = 3682;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,252
	r11.s64 = r31.s64 + 252;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,248
	ctx.r10.s64 = r31.s64 + 248;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// ori r8,r11,2
	ctx.r8.u64 = r11.u64 | 2;
	// addi r11,r31,260
	r11.s64 = r31.s64 + 260;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r7,3681
	ctx.r7.s64 = 3681;
	// li r4,3685
	ctx.r4.s64 = 3685;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3684
	r27.s64 = 3684;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,256
	r11.s64 = r31.s64 + 256;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,268
	r11.s64 = r31.s64 + 268;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r25,3688
	r25.s64 = 3688;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,2
	r26.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,264
	r11.s64 = r31.s64 + 264;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r31,276
	ctx.r10.s64 = r31.s64 + 276;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r24,r9,2
	r24.u64 = ctx.r9.u64 | 2;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r9,r31,272
	ctx.r9.s64 = r31.s64 + 272;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r8,r6,512
	ctx.r8.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r23,3687
	r23.s64 = 3687;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// addi r11,r31,284
	r11.s64 = r31.s64 + 284;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r6,3691
	ctx.r6.s64 = 3691;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3690
	ctx.r4.s64 = 3690;
	// li r27,3694
	r27.s64 = 3694;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r25,3693
	r25.s64 = 3693;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3697
	r24.s64 = 3697;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,280
	r11.s64 = r31.s64 + 280;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r31,296
	ctx.r9.s64 = r31.s64 + 296;
	// ori r26,r10,2
	r26.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,292
	r11.s64 = r31.s64 + 292;
	// ori r23,r10,2
	r23.u64 = ctx.r10.u64 | 2;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r11,3
	ctx.r8.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,288
	r11.s64 = r31.s64 + 288;
	// rlwinm r7,r10,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,300
	ctx.r10.s64 = r31.s64 + 300;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r22,r8,2
	r22.u64 = ctx.r8.u64 | 2;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// li r8,3696
	ctx.r8.s64 = 3696;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ori r7,r11,2
	ctx.r7.u64 = r11.u64 | 2;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r6,3700
	ctx.r6.s64 = 3700;
	// li r28,3699
	r28.s64 = 3699;
	// ori r27,r9,2
	r27.u64 = ctx.r9.u64 | 2;
	// addi r11,r31,308
	r11.s64 = r31.s64 + 308;
	// li r26,3703
	r26.s64 = 3703;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r11,r31,304
	r11.s64 = r31.s64 + 304;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// li r23,3709
	r23.s64 = 3709;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3705
	r24.s64 = 3705;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,316
	r11.s64 = r31.s64 + 316;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3702
	ctx.r7.s64 = 3702;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,312
	r11.s64 = r31.s64 + 312;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3706
	ctx.r6.s64 = 3706;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r4,r9,2
	ctx.r4.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r22,r11,2
	r22.u64 = r11.u64 | 2;
	// addi r11,r31,324
	r11.s64 = r31.s64 + 324;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,320
	r11.s64 = r31.s64 + 320;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// addi r8,r10,512
	ctx.r8.s64 = ctx.r10.s64 + 512;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r7,3708
	ctx.r7.s64 = 3708;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,332
	r11.s64 = r31.s64 + 332;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r6,3617
	ctx.r6.s64 = 3617;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,328
	r11.s64 = r31.s64 + 328;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3616
	ctx.r4.s64 = 3616;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,340
	r11.s64 = r31.s64 + 340;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r27,3620
	r27.s64 = 3620;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,336
	r11.s64 = r31.s64 + 336;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r26,3619
	r26.s64 = 3619;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r7,3626
	ctx.r7.s64 = 3626;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,344
	r11.s64 = r31.s64 + 344;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r6,3625
	ctx.r6.s64 = 3625;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,356
	r11.s64 = r31.s64 + 356;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r4,3629
	ctx.r4.s64 = 3629;
	// addi r11,r31,352
	r11.s64 = r31.s64 + 352;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r27,3628
	r27.s64 = 3628;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r6,3635
	ctx.r6.s64 = 3635;
	// ori r26,r11,2
	r26.u64 = r11.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,364
	r11.s64 = r31.s64 + 364;
	// li r25,3634
	r25.s64 = 3634;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r7,3638
	ctx.r7.s64 = 3638;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,360
	r11.s64 = r31.s64 + 360;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,368
	r11.s64 = r31.s64 + 368;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r4,3637
	ctx.r4.s64 = 3637;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r28,3644
	r28.s64 = 3644;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,380
	r11.s64 = r31.s64 + 380;
	// ori r27,r10,2
	r27.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r26,3643
	r26.s64 = 3643;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,376
	r11.s64 = r31.s64 + 376;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,388
	r11.s64 = r31.s64 + 388;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r24,r10,2
	r24.u64 = ctx.r10.u64 | 2;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,384
	ctx.r10.s64 = r31.s64 + 384;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r9,r31,396
	ctx.r9.s64 = r31.s64 + 396;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// clrlwi r11,r9,3
	r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,3647
	ctx.r9.s64 = 3647;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,392
	r11.s64 = r31.s64 + 392;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r6,3646
	ctx.r6.s64 = 3646;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r4,3544
	ctx.r4.s64 = 3544;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// li r27,3545
	r27.s64 = 3545;
	// li r23,3850
	r23.s64 = 3850;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,3848
	r26.s64 = 3848;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,3849
	r24.s64 = 3849;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,404
	r11.s64 = r31.s64 + 404;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,400
	r11.s64 = r31.s64 + 400;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,412
	r11.s64 = r31.s64 + 412;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// addi r10,r9,512
	ctx.r10.s64 = ctx.r9.s64 + 512;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,408
	ctx.r10.s64 = r31.s64 + 408;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// li r8,3851
	ctx.r8.s64 = 3851;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// li r4,3852
	ctx.r4.s64 = 3852;
	// addi r11,r31,420
	r11.s64 = r31.s64 + 420;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// ori r28,r10,2
	r28.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// li r27,3855
	r27.s64 = 3855;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// li r26,2071
	r26.s64 = 2071;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// li r24,2070
	r24.s64 = 2070;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// li r7,3853
	ctx.r7.s64 = 3853;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r31,416
	r11.s64 = r31.s64 + 416;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r31,428
	r11.s64 = r31.s64 + 428;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// li r28,3854
	r28.s64 = 3854;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,424
	r11.s64 = r31.s64 + 424;
	// ori r4,r10,2
	ctx.r4.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,436
	r11.s64 = r31.s64 + 436;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,432
	r11.s64 = r31.s64 + 432;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// ori r25,r10,2
	r25.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r10,512
	r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r11,r31,444
	r11.s64 = r31.s64 + 444;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r8,2135
	ctx.r8.s64 = 2135;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,440
	r11.s64 = r31.s64 + 440;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r6,2134
	ctx.r6.s64 = 2134;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,452
	r11.s64 = r31.s64 + 452;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r4,2586
	ctx.r4.s64 = 2586;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,448
	r11.s64 = r31.s64 + 448;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r28,2585
	r28.s64 = 2585;
	// ori r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r27,2589
	r27.s64 = 2589;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,460
	r11.s64 = r31.s64 + 460;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r31,456
	ctx.r10.s64 = r31.s64 + 456;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// addi r9,r8,512
	ctx.r9.s64 = ctx.r8.s64 + 512;
	// ori r8,r11,2
	ctx.r8.u64 = r11.u64 | 2;
	// clrlwi r11,r10,3
	r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// li r26,2588
	r26.s64 = 2588;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r31,468
	r11.s64 = r31.s64 + 468;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r7,2591
	ctx.r7.s64 = 2591;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// li r4,74
	ctx.r4.s64 = 74;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,464
	r11.s64 = r31.s64 + 464;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r28,r10,512
	r28.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r8,2592
	ctx.r8.s64 = 2592;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r28,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r31,476
	r11.s64 = r31.s64 + 476;
	// ori r28,r9,2
	r28.u64 = ctx.r9.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r11,r31,472
	r11.s64 = r31.s64 + 472;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// li r8,73
	ctx.r8.s64 = 73;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11036);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825E907C"))) PPC_WEAK_FUNC(sub_825E907C);
PPC_FUNC_IMPL(__imp__sub_825E907C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825E9080"))) PPC_WEAK_FUNC(sub_825E9080);
PPC_FUNC_IMPL(__imp__sub_825E9080) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825e90a8
	if (cr6.eq) goto loc_825E90A8;
	// bl 0x825e3390
	sub_825E3390(ctx, base);
loc_825E90A8:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r31,480
	ctx.r4.s64 = r31.s64 + 480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825e90e0
	if (cr6.eq) goto loc_825E90E0;
	// lis r11,10922
	r11.s64 = 715784192;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825E90E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825E90E8"))) PPC_WEAK_FUNC(sub_825E90E8);
PPC_FUNC_IMPL(__imp__sub_825E90E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E90EC"))) PPC_WEAK_FUNC(sub_825E90EC);
PPC_FUNC_IMPL(__imp__sub_825E90EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E90F0"))) PPC_WEAK_FUNC(sub_825E90F0);
PPC_FUNC_IMPL(__imp__sub_825E90F0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,156
	ctx.r3.s64 = 156;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825e9124
	if (!cr0.eq) goto loc_825E9124;
loc_825E911C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e91d0
	goto loc_825E91D0;
loc_825E9124:
	// li r26,1
	r26.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r26.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r29.u32);
	// beq cr6,0x825e91bc
	if (cr6.eq) goto loc_825E91BC;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(r30.s32, 9, xer);
	// beq cr6,0x825e916c
	if (cr6.eq) goto loc_825E916C;
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e68e0
	sub_825E68E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825e91b0
	if (cr0.lt) goto loc_825E91B0;
loc_825E9164:
	// stb r26,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r26.u8);
	// b 0x825e91cc
	goto loc_825E91CC;
loc_825E916C:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825e9164
	if (cr6.eq) goto loc_825E9164;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
loc_825E917C:
	// addi r5,r30,-60
	ctx.r5.s64 = r30.s64 + -60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e68e0
	sub_825E68E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825e91ac
	if (cr0.lt) goto loc_825E91AC;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825e917c
	if (cr6.lt) goto loc_825E917C;
	// b 0x825e9164
	goto loc_825E9164;
loc_825E91AC:
	// stw r28,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r28.u32);
loc_825E91B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e7340
	sub_825E7340(ctx, base);
	// b 0x825e911c
	goto loc_825E911C;
loc_825E91BC:
	// lwz r11,11036(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 11036);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_825E91CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825E91D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825E91D4"))) PPC_WEAK_FUNC(sub_825E91D4);
PPC_FUNC_IMPL(__imp__sub_825E91D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825E91D8"))) PPC_WEAK_FUNC(sub_825E91D8);
PPC_FUNC_IMPL(__imp__sub_825E91D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lbz r11,11068(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// li r12,1
	r12.s64 = 1;
	// lwz r10,10548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// lbz r9,11071(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// ld r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,11068(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11068, r11.u8);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,13080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13080, ctx.r10.u32);
	// or r11,r8,r12
	r11.u64 = ctx.r8.u64 | r12.u64;
	// beq 0x825e922c
	if (cr0.eq) goto loc_825E922C;
	// lwz r10,10368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// lwz r9,13552(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13552);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x825e922c
	if (cr6.eq) goto loc_825E922C;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
loc_825E922C:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
}

__attribute__((alias("__imp__sub_825E9230"))) PPC_WEAK_FUNC(sub_825E9230);
PPC_FUNC_IMPL(__imp__sub_825E9230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9234"))) PPC_WEAK_FUNC(sub_825E9234);
PPC_FUNC_IMPL(__imp__sub_825E9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E9238"))) PPC_WEAK_FUNC(sub_825E9238);
PPC_FUNC_IMPL(__imp__sub_825E9238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// lbz r11,11071(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, r11.u8);
	// beq cr6,0x825e925c
	if (cr6.eq) goto loc_825E925C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, r11.u8);
loc_825E925C:
	// lhz r11,10368(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10368);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e9270
	if (!cr0.eq) goto loc_825E9270;
	// li r30,16
	r30.s64 = 16;
	// b 0x825e927c
	goto loc_825E927C;
loc_825E9270:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r30,8
	r30.s64 = 8;
	// bne cr6,0x825e9288
	if (!cr6.eq) goto loc_825E9288;
loc_825E927C:
	// li r11,32
	r11.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// b 0x825e9290
	goto loc_825E9290;
loc_825E9288:
	// li r11,16
	r11.s64 = 16;
	// li r29,40
	r29.s64 = 40;
loc_825E9290:
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// andc r31,r10,r9
	r31.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// divwu r4,r31,r11
	ctx.r4.u32 = r31.u32 / r11.u32;
	// beq cr6,0x825e92e4
	if (cr6.eq) goto loc_825E92E4;
	// addi r9,r3,13484
	ctx.r9.s64 = ctx.r3.s64 + 13484;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r10,r3,13364
	ctx.r10.s64 = ctx.r3.s64 + 13364;
loc_825E92BC:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// twllei r30,0
	if (r30.u32 <= 0) __builtin_debugtrap();
	// divwu r7,r7,r11
	ctx.r7.u32 = ctx.r7.u32 / r11.u32;
	// divwu r8,r8,r30
	ctx.r8.u32 = ctx.r8.u32 / r30.u32;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825e92bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E92BC;
loc_825E92E4:
	// lwz r10,10368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// add r11,r29,r6
	r11.u64 = r29.u64 + ctx.r6.u64;
	// stw r31,13548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13548, r31.u32);
	// twllei r29,0
	if (r29.u32 <= 0) __builtin_debugtrap();
	// rlwimi r10,r31,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// divwu r11,r11,r29
	r11.u32 = r11.u32 / r29.u32;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lbz r10,11071(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// stw r11,13552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13552, r11.u32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825e9348
	if (!cr0.eq) goto loc_825E9348;
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,12,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e9348
	if (!cr6.eq) goto loc_825E9348;
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	r12.s64 = -257;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// b 0x825e9350
	goto loc_825E9350;
loc_825E9348:
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_825E9350:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
}

__attribute__((alias("__imp__sub_825E9354"))) PPC_WEAK_FUNC(sub_825E9354);
PPC_FUNC_IMPL(__imp__sub_825E9354) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825E9358"))) PPC_WEAK_FUNC(sub_825E9358);
PPC_FUNC_IMPL(__imp__sub_825E9358) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x825e9460
	if (!cr6.eq) goto loc_825E9460;
	// lbz r10,11068(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// stw r9,13092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13092, ctx.r9.u32);
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e9448
	if (!cr0.eq) goto loc_825E9448;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e9448
	if (!cr0.eq) goto loc_825E9448;
	// lbz r11,12563(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12563);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825e9448
	if (!cr0.eq) goto loc_825E9448;
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e93ac
	if (cr0.eq) goto loc_825E93AC;
	// li r11,1
	r11.s64 = 1;
	// b 0x825e943c
	goto loc_825E943C;
loc_825E93AC:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9434
	if (cr0.eq) goto loc_825E9434;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r8,13104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x825e93cc
	if (cr6.eq) goto loc_825E93CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9434
	if (!cr6.eq) goto loc_825E9434;
loc_825E93CC:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r8,13108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x825e93e4
	if (cr6.eq) goto loc_825E93E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9434
	if (!cr6.eq) goto loc_825E9434;
loc_825E93E4:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r8,13112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x825e93fc
	if (cr6.eq) goto loc_825E93FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9434
	if (!cr6.eq) goto loc_825E9434;
loc_825E93FC:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r8,13116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x825e9414
	if (cr6.eq) goto loc_825E9414;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9434
	if (!cr6.eq) goto loc_825E9434;
loc_825E9414:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r8,13120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x825e942c
	if (cr6.eq) goto loc_825E942C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9434
	if (!cr6.eq) goto loc_825E9434;
loc_825E942C:
	// li r11,1
	r11.s64 = 1;
	// b 0x825e9438
	goto loc_825E9438;
loc_825E9434:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825E9438:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825E943C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825e944c
	if (!cr0.eq) goto loc_825E944C;
loc_825E9448:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825E944C:
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// li r11,-1
	r11.s64 = -1;
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// stw r11,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, r11.u32);
	// b 0x825e9478
	goto loc_825E9478;
loc_825E9460:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, ctx.r4.u32);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, ctx.r10.u32);
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
loc_825E9478:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r9,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, ctx.r9.u32);
	// stw r4,11060(r31)
	PPC_STORE_U32(r31.u32 + 11060, ctx.r4.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r9,11064(r31)
	PPC_STORE_U32(r31.u32 + 11064, ctx.r9.u32);
	// ble cr6,0x825e949c
	if (!cr6.gt) goto loc_825E949C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E949C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,24576
	r11.u64 = r11.u64 | 24576;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13084(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E94C4"))) PPC_WEAK_FUNC(sub_825E94C4);
PPC_FUNC_IMPL(__imp__sub_825E94C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E94C8"))) PPC_WEAK_FUNC(sub_825E94C8);
PPC_FUNC_IMPL(__imp__sub_825E94C8) {
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r5,13124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13124, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// beq cr6,0x825e9578
	if (cr6.eq) goto loc_825E9578;
	// addi r8,r3,13364
	ctx.r8.s64 = ctx.r3.s64 + 13364;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r24,-12
	r11.s64 = r24.s64 + -12;
	// addi r10,r3,13124
	ctx.r10.s64 = ctx.r3.s64 + 13124;
loc_825E951C:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825e952c
	if (cr6.gt) goto loc_825E952C;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_825E952C:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825e953c
	if (cr6.gt) goto loc_825E953C;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_825E953C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stwu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825e951c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E951C;
loc_825E9578:
	// rlwinm. r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9594
	if (cr0.eq) goto loc_825E9594;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r4,r25,30,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9238
	sub_825E9238(ctx, base);
loc_825E9594:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,13560(r31)
	PPC_STORE_U32(r31.u32 + 13560, r30.u32);
	// clrlwi. r10,r25,31
	ctx.r10.u64 = r25.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r6,13556(r31)
	PPC_STORE_U32(r31.u32 + 13556, ctx.r6.u32);
	// stw r25,13564(r31)
	PPC_STORE_U32(r31.u32 + 13564, r25.u32);
	// addi r30,r11,-492
	r30.s64 = r11.s64 + -492;
	// bne 0x825e96a8
	if (!cr0.eq) goto loc_825E96A8;
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e96a8
	if (!cr0.eq) goto loc_825E96A8;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825e9614
	if (cr6.eq) goto loc_825E9614;
	// addi r10,r31,13140
	ctx.r10.s64 = r31.s64 + 13140;
	// mtctr r29
	ctr.u64 = r29.u64;
	// addi r11,r31,13372
	r11.s64 = r31.s64 + 13372;
loc_825E95D8:
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825e95fc
	if (cr6.gt) goto loc_825E95FC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_825E95FC:
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bgt cr6,0x825e9608
	if (cr6.gt) goto loc_825E9608;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_825E9608:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x825e95d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825E95D8;
loc_825E9614:
	// addi r4,r31,13024
	ctx.r4.s64 = r31.s64 + 13024;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,13056(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13056);
	// lwz r8,13060(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13060);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,13064(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13064);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-468
	ctx.r4.s64 = r11.s64 + -468;
	// bl 0x825debc0
	sub_825DEBC0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc080
	sub_825FC080(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df598
	sub_825DF598(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825debc0
	sub_825DEBC0(ctx, base);
loc_825E96A8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825e96c0
	if (cr6.eq) goto loc_825E96C0;
	// li r11,13568
	r11.s64 = 13568;
	// lvx128 v63,r0,r28
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825e96c8
	goto loc_825E96C8;
loc_825E96C0:
	// std r27,13568(r31)
	PPC_STORE_U64(r31.u32 + 13568, r27.u64);
	// std r27,13576(r31)
	PPC_STORE_U64(r31.u32 + 13576, r27.u64);
loc_825E96C8:
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// stfs f31,13584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 13584, temp.u32);
	// stw r26,13588(r31)
	PPC_STORE_U32(r31.u32 + 13588, r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x825e96e4
	if (!cr6.eq) goto loc_825E96E4;
	// lwz r10,12832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12832);
loc_825E96E4:
	// lbz r9,11068(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,12820(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r6,12824(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// lwz r5,12828(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r4,12832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// rlwinm. r3,r9,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,13100(r31)
	PPC_STORE_U32(r31.u32 + 13100, ctx.r10.u32);
	// stw r11,13104(r31)
	PPC_STORE_U32(r31.u32 + 13104, r11.u32);
	// stw r7,13108(r31)
	PPC_STORE_U32(r31.u32 + 13108, ctx.r7.u32);
	// stw r6,13112(r31)
	PPC_STORE_U32(r31.u32 + 13112, ctx.r6.u32);
	// stw r5,13116(r31)
	PPC_STORE_U32(r31.u32 + 13116, ctx.r5.u32);
	// stw r4,13120(r31)
	PPC_STORE_U32(r31.u32 + 13120, ctx.r4.u32);
	// stw r8,13096(r31)
	PPC_STORE_U32(r31.u32 + 13096, ctx.r8.u32);
	// stb r9,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r9.u8);
	// stw r27,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r27.u32);
	// bne 0x825e976c
	if (!cr0.eq) goto loc_825E976C;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e976c
	if (!cr0.eq) goto loc_825E976C;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825e976c
	if (!cr0.eq) goto loc_825E976C;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9758
	if (cr0.eq) goto loc_825E9758;
	// li r11,1
	r11.s64 = 1;
	// b 0x825e9760
	goto loc_825E9760;
loc_825E9758:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_825E9760:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825e9770
	if (!cr0.eq) goto loc_825E9770;
loc_825E976C:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825E9770:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, ctx.r9.u32);
	// stw r27,11060(r31)
	PPC_STORE_U32(r31.u32 + 11060, r27.u32);
	// stw r27,11064(r31)
	PPC_STORE_U32(r31.u32 + 11064, r27.u32);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// bl 0x825f9790
	sub_825F9790(ctx, base);
	// lwz r11,13772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13772);
	// lwz r9,13776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13776);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x825e97b8
	if (!cr6.gt) goto loc_825E97B8;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E97B8:
	// lis r10,-31232
	ctx.r10.s64 = -2046820352;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r9,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e97e4
	if (!cr6.gt) goto loc_825E97E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E97E4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,25
	ctx.r9.s64 = 25;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825edcc8
	sub_825EDCC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df1b8
	sub_825DF1B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_825E9830"))) PPC_WEAK_FUNC(sub_825E9830);
PPC_FUNC_IMPL(__imp__sub_825E9830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825E9834"))) PPC_WEAK_FUNC(sub_825E9834);
PPC_FUNC_IMPL(__imp__sub_825E9834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E9838"))) PPC_WEAK_FUNC(sub_825E9838);
PPC_FUNC_IMPL(__imp__sub_825E9838) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r22,0
	r22.s64 = 0;
	// bne cr6,0x825e9884
	if (!cr6.eq) goto loc_825E9884;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825e99e4
	if (cr6.eq) goto loc_825E99E4;
	// addi r5,r3,13128
	ctx.r5.s64 = ctx.r3.s64 + 13128;
loc_825E9884:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825e99e4
	if (cr6.eq) goto loc_825E99E4;
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825e99e4
	if (!cr6.gt) goto loc_825E99E4;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_825E98A4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,13100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13100);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r10,r10,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825e98f0
	if (!cr6.eq) goto loc_825E98F0;
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_825E98F0:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,29,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825e9914
	if (!cr6.eq) goto loc_825E9914;
	// addi r11,r10,7
	r11.s64 = ctx.r10.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_825E9914:
	// li r11,3
	r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// slw r4,r11,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r4,r11,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// bl 0x825de050
	sub_825DE050(ctx, base);
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x825e99a0
	if (!cr6.lt) goto loc_825E99A0;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e995c
	if (cr6.eq) goto loc_825E995C;
	// ori r4,r26,256
	ctx.r4.u64 = r26.u64 | 256;
loc_825E995C:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825e996c
	if (cr6.eq) goto loc_825E996C;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
loc_825E996C:
	// lwz r11,13588(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13588);
	// addi r10,r31,13568
	ctx.r10.s64 = r31.s64 + 13568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,13584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13584);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// b 0x825e99cc
	goto loc_825E99CC;
loc_825E99A0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
loc_825E99CC:
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x825e98a4
	if (cr6.lt) goto loc_825E98A4;
loc_825E99E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de050
	sub_825DE050(ctx, base);
	// lwz r11,13564(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13564);
	// lwz r9,11464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11464);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm. r11,r11,0,2,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// slw r28,r10,r9
	r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// beq 0x825e9a18
	if (cr0.eq) goto loc_825E9A18;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_825E9A18:
	// lwz r11,13124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825e9b50
	if (cr6.eq) goto loc_825E9B50;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// lwz r11,13760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13760);
	// addi r30,r31,13760
	r30.s64 = r31.s64 + 13760;
	// lis r29,16384
	r29.s64 = 1073741824;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9a4c
	if (!cr6.eq) goto loc_825E9A4C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// b 0x825e9a64
	goto loc_825E9A64;
loc_825E9A4C:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r6,r29,r11
	ctx.r6.s64 = r11.s64 - r29.s64;
loc_825E9A64:
	// lis r11,-32160
	r11.s64 = -2107637760;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r11,-26880
	ctx.r5.s64 = r11.s64 + -26880;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4a78
	sub_825E4A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e9aa8
	if (!cr6.gt) goto loc_825E9AA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
loc_825E9AA8:
	// lis r11,-30720
	r11.s64 = -2013265920;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e9adc
	if (!cr6.gt) goto loc_825E9ADC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
loc_825E9ADC:
	// lis r11,-30464
	r11.s64 = -1996488704;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,13616(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13616);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9af8
	if (!cr6.eq) goto loc_825E9AF8;
	// mr r11,r22
	r11.u64 = r22.u64;
	// b 0x825e9b10
	goto loc_825E9B10;
loc_825E9AF8:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
loc_825E9B10:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,13736(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13736);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9b28
	if (!cr6.eq) goto loc_825E9B28;
	// mr r11,r22
	r11.u64 = r22.u64;
	// b 0x825e9b40
	goto loc_825E9B40;
loc_825E9B28:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
loc_825E9B40:
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, ctx.r10.u32);
	// b 0x825e9b54
	goto loc_825E9B54;
loc_825E9B50:
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825E9B54:
	// lwz r11,13772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13772);
	// addi r3,r31,13760
	ctx.r3.s64 = r31.s64 + 13760;
	// lwz r10,13776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13776);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x825e9b74
	if (!cr6.gt) goto loc_825E9B74;
	// bl 0x825e4030
	sub_825E4030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825E9B74:
	// lis r10,-30976
	ctx.r10.s64 = -2030043136;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r11,11071(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// andi. r11,r11,207
	r11.u64 = r11.u64 & 207;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// stw r9,13772(r31)
	PPC_STORE_U32(r31.u32 + 13772, ctx.r9.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,13100(r31)
	PPC_STORE_U32(r31.u32 + 13100, r22.u32);
	// stw r22,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r22.u32);
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// stb r11,11071(r31)
	PPC_STORE_U8(r31.u32 + 11071, r11.u8);
	// bne 0x825e9c78
	if (!cr0.eq) goto loc_825E9C78;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825e9c78
	if (!cr0.eq) goto loc_825E9C78;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825e9c78
	if (!cr0.eq) goto loc_825E9C78;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9bd8
	if (cr0.eq) goto loc_825E9BD8;
	// li r11,1
	r11.s64 = 1;
	// b 0x825e9c6c
	goto loc_825E9C6C;
loc_825E9BD8:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9c64
	if (cr0.eq) goto loc_825E9C64;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e9bfc
	if (cr6.eq) goto loc_825E9BFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9c64
	if (!cr6.eq) goto loc_825E9C64;
loc_825E9BFC:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e9c14
	if (cr6.eq) goto loc_825E9C14;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9c64
	if (!cr6.eq) goto loc_825E9C64;
loc_825E9C14:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e9c2c
	if (cr6.eq) goto loc_825E9C2C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9c64
	if (!cr6.eq) goto loc_825E9C64;
loc_825E9C2C:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e9c44
	if (cr6.eq) goto loc_825E9C44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9c64
	if (!cr6.eq) goto loc_825E9C64;
loc_825E9C44:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825e9c5c
	if (cr6.eq) goto loc_825E9C5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825e9c64
	if (!cr6.eq) goto loc_825E9C64;
loc_825E9C5C:
	// li r11,1
	r11.s64 = 1;
	// b 0x825e9c68
	goto loc_825E9C68;
loc_825E9C64:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825E9C68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825E9C6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825e9c7c
	if (!cr0.eq) goto loc_825E9C7C;
loc_825E9C78:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825E9C7C:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r22,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, r22.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, ctx.r9.u32);
	// stw r22,11060(r31)
	PPC_STORE_U32(r31.u32 + 11060, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r22,11064(r31)
	PPC_STORE_U32(r31.u32 + 11064, r22.u32);
	// stb r10,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r4,13124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// bl 0x825fa6e8
	sub_825FA6E8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-492
	ctx.r4.s64 = r11.s64 + -492;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x825e9ce0
	if (cr6.eq) goto loc_825E9CE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df1b8
	sub_825DF1B8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825e9ce4
	goto loc_825E9CE4;
loc_825E9CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E9CE4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_825E9CEC"))) PPC_WEAK_FUNC(sub_825E9CEC);
PPC_FUNC_IMPL(__imp__sub_825E9CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825E9CF0"))) PPC_WEAK_FUNC(sub_825E9CF0);
PPC_FUNC_IMPL(__imp__sub_825E9CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addis r11,r3,8178
	r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9D00"))) PPC_WEAK_FUNC(sub_825E9D00);
PPC_FUNC_IMPL(__imp__sub_825E9D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addis r11,r3,8178
	r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	PPC_MM_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9D14"))) PPC_WEAK_FUNC(sub_825E9D14);
PPC_FUNC_IMPL(__imp__sub_825E9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E9D18"))) PPC_WEAK_FUNC(sub_825E9D18);
PPC_FUNC_IMPL(__imp__sub_825E9D18) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r4.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d1fc
	__imp___vsnprintf(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x825e9d84
	if (cr6.eq) goto loc_825E9D84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825e9d88
	goto loc_825E9D88;
loc_825E9D84:
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
loc_825E9D88:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825E9D98"))) PPC_WEAK_FUNC(sub_825E9D98);
PPC_FUNC_IMPL(__imp__sub_825E9D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825E9D9C"))) PPC_WEAK_FUNC(sub_825E9D9C);
PPC_FUNC_IMPL(__imp__sub_825E9D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825E9DA0"))) PPC_WEAK_FUNC(sub_825E9DA0);
PPC_FUNC_IMPL(__imp__sub_825E9DA0) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,1104
	ctx.r5.s64 = r11.s64 + 1104;
	// addi r4,r10,1084
	ctx.r4.s64 = ctx.r10.s64 + 1084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r26,11
	r26.s64 = 11;
	// addi r27,r11,22992
	r27.s64 = r11.s64 + 22992;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r25,r11,21212
	r25.s64 = r11.s64 + 21212;
loc_825E9DFC:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825e9e2c
	if (cr0.eq) goto loc_825E9E2C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x825e9e1c
	if (cr6.eq) goto loc_825E9E1C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825E9E1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_825E9E2C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x825e9dfc
	if (!cr0.eq) goto loc_825E9DFC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x825e9e50
	if (!cr6.eq) goto loc_825E9E50;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1064
	ctx.r4.s64 = r11.s64 + 1064;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825E9E50:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1060
	ctx.r4.s64 = r11.s64 + 1060;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3857
	ctx.r3.s64 = 3857;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,3858
	ctx.r3.s64 = 3858;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r28,r11,1040
	r28.s64 = r11.s64 + 1040;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,1020
	ctx.r5.s64 = ctx.r10.s64 + 1020;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// addi r11,r27,88
	r11.s64 = r27.s64 + 88;
	// li r29,30
	r29.s64 = 30;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_825E9EB8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzu r5,8(r30)
	ea = 8 + r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x825e9eb8
	if (!cr0.eq) goto loc_825E9EB8;
	// addi r11,r27,328
	r11.s64 = r27.s64 + 328;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r23,5
	r23.s64 = 5;
	// addi r26,r11,1008
	r26.s64 = r11.s64 + 1008;
	// addi r27,r10,1012
	r27.s64 = ctx.r10.s64 + 1012;
	// addi r25,r9,996
	r25.s64 = ctx.r9.s64 + 996;
	// addi r24,r8,992
	r24.s64 = ctx.r8.s64 + 992;
loc_825E9F10:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825e9ff4
	if (!cr6.gt) goto loc_825E9FF4;
loc_825E9F2C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_825E9F48:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x825e9f58
	if (!cr6.lt) goto loc_825E9F58;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825E9F58:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x825e9fd8
	if (!cr6.lt) goto loc_825E9FD8;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// slw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// or r4,r11,r9
	ctx.r4.u64 = r11.u64 | ctx.r9.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82605c60
	sub_82605C60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,-12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825E9FA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825e9fa4
	if (!cr6.eq) goto loc_825E9FA4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x825e9f48
	goto loc_825E9F48;
loc_825E9FD8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825e9f2c
	if (cr6.lt) goto loc_825E9F2C;
loc_825E9FF4:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x825e9f10
	if (!cr0.eq) goto loc_825E9F10;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_825EA004"))) PPC_WEAK_FUNC(sub_825EA004);
PPC_FUNC_IMPL(__imp__sub_825EA004) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825EA008"))) PPC_WEAK_FUNC(sub_825EA008);
PPC_FUNC_IMPL(__imp__sub_825EA008) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,3120
	ctx.r3.s64 = 3120;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r28,r3,16,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x7;
	// mtctr r27
	ctr.u64 = r27.u64;
	// li r3,3333
	ctx.r3.s64 = 3333;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,3333
	ctx.r3.s64 = 3333;
	// rlwimi r4,r11,20,9,11
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0x700000) | (ctx.r4.u64 & 0xFFFFFFFFFF8FFFFF);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x825ea0b0
	if (cr6.gt) goto loc_825EA0B0;
	// addi r10,r31,3072
	ctx.r10.s64 = r31.s64 + 3072;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// mulli r29,r10,6
	r29.s64 = ctx.r10.s64 * 6;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_825EA07C:
	// mr r31,r26
	r31.u64 = r26.u64;
	// li r30,6
	r30.s64 = 6;
loc_825EA084:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825ea084
	if (!cr0.eq) goto loc_825EA084;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r26,r31
	r26.u64 = r31.u64;
	// addi r29,r29,6
	r29.s64 = r29.s64 + 6;
	// bne 0x825ea07c
	if (!cr0.eq) goto loc_825EA07C;
loc_825EA0B0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// li r3,3333
	ctx.r3.s64 = 3333;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825EA0C4"))) PPC_WEAK_FUNC(sub_825EA0C4);
PPC_FUNC_IMPL(__imp__sub_825EA0C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825EA0C8"))) PPC_WEAK_FUNC(sub_825EA0C8);
PPC_FUNC_IMPL(__imp__sub_825EA0C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x825ea128
	if (cr0.eq) goto loc_825EA128;
	// rlwinm. r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825ea128
	if (!cr0.eq) goto loc_825EA128;
	// rlwinm. r9,r4,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825ea128
	if (cr0.eq) goto loc_825EA128;
	// lwz r26,-1(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + -1);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x825ea118
	if (!cr6.eq) goto loc_825EA118;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,2288
	ctx.r4.s64 = r11.s64 + 2288;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// b 0x825ea1d4
	goto loc_825EA1D4;
loc_825EA118:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,2144
	ctx.r4.s64 = r11.s64 + 2144;
	// b 0x825ea1d0
	goto loc_825EA1D0;
loc_825EA128:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825ea1bc
	if (cr0.eq) goto loc_825EA1BC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825ea1bc
	if (!cr6.eq) goto loc_825EA1BC;
	// rlwinm. r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825ea1bc
	if (cr0.eq) goto loc_825EA1BC;
	// addi r31,r11,-2
	r31.s64 = r11.s64 + -2;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,2000
	ctx.r4.s64 = r11.s64 + 2000;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r4,r11,1920
	ctx.r4.s64 = r11.s64 + 1920;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825ea1d4
	if (!cr6.gt) goto loc_825EA1D4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,1852
	r27.s64 = r11.s64 + 1852;
loc_825EA188:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x825ea188
	if (cr6.lt) goto loc_825EA188;
	// b 0x825ea1d4
	goto loc_825EA1D4;
loc_825EA1BC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,1712
	ctx.r4.s64 = ctx.r10.s64 + 1712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_825EA1D0:
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EA1D4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x825ea2a0
	if (!cr6.eq) goto loc_825EA2A0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825ea2a0
	if (cr6.eq) goto loc_825EA2A0;
	// lwz r11,152(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ea208
	if (!cr6.eq) goto loc_825EA208;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r6,164(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,172(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 172);
	// addi r4,r11,1584
	ctx.r4.s64 = r11.s64 + 1584;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EA208:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1448
	ctx.r4.s64 = r11.s64 + 1448;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r29,116(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 116);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825ea274
	if (cr6.eq) goto loc_825EA274;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,1424
	r27.s64 = r11.s64 + 1424;
loc_825EA22C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825ea268
	if (!cr6.gt) goto loc_825EA268;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_825EA240:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzu r11,8(r31)
	ea = 8 + r31.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// clrlwi r6,r11,8
	ctx.r6.u64 = r11.u32 & 0xFFFFFF;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x825ea240
	if (cr6.lt) goto loc_825EA240;
loc_825EA268:
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x825ea22c
	if (!cr6.eq) goto loc_825EA22C;
loc_825EA274:
	// lwz r11,152(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ea2a0
	if (!cr6.eq) goto loc_825EA2A0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1280
	ctx.r4.s64 = r11.s64 + 1280;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,1136
	ctx.r4.s64 = r11.s64 + 1136;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EA2A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825EA2A4"))) PPC_WEAK_FUNC(sub_825EA2A4);
PPC_FUNC_IMPL(__imp__sub_825EA2A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825EA2A8"))) PPC_WEAK_FUNC(sub_825EA2A8);
PPC_FUNC_IMPL(__imp__sub_825EA2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6528(r1)
	ea = -6528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// li r14,1
	r14.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825ea2dc
	if (cr6.eq) goto loc_825EA2DC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825ea2f0
	if (!cr6.eq) goto loc_825EA2F0;
loc_825EA2DC:
	// lis r11,-32161
	r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r31,r11,-25360
	r31.s64 = r11.s64 + -25360;
	// addi r17,r10,-25344
	r17.s64 = ctx.r10.s64 + -25344;
	// li r14,0
	r14.s64 = 0;
loc_825EA2F0:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,3878
	ctx.r3.s64 = 3878;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,448
	ctx.r3.s64 = 448;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,1403
	ctx.r3.s64 = 1403;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r3,1404
	ctx.r3.s64 = 1404;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,1405
	ctx.r3.s64 = 1405;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r3,1402
	ctx.r3.s64 = 1402;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mtctr r17
	ctr.u64 = r17.u64;
	// li r3,3200
	ctx.r3.s64 = 3200;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r17.u32);
	// beq cr6,0x825ea44c
	if (cr6.eq) goto loc_825EA44C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,6688
	ctx.r4.s64 = r11.s64 + 6688;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r9,16968(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16968);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r7,r10,6680
	ctx.r7.s64 = ctx.r10.s64 + 6680;
	// addi r4,r8,6636
	ctx.r4.s64 = ctx.r8.s64 + 6636;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,21119
	ctx.r5.s64 = 21119;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,1884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1884);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r7,11028(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 11028);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,11024(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 11024);
	// addi r4,r11,6588
	ctx.r4.s64 = r11.s64 + 6588;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r5,11036(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 11036);
	// addi r4,r11,6552
	ctx.r4.s64 = r11.s64 + 6552;
	// lwz r11,11024(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11024);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EA44C:
	// lis r11,-32763
	r11.s64 = -2147155968;
	// ori r11,r11,272
	r11.u64 = r11.u64 | 272;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bne cr6,0x825ea490
	if (!cr6.eq) goto loc_825EA490;
	// lis r11,2989
	r11.s64 = 195887104;
	// ori r11,r11,61453
	r11.u64 = r11.u64 | 61453;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x825ea490
	if (cr6.eq) goto loc_825EA490;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825ea490
	if (cr6.eq) goto loc_825EA490;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r11,6392
	ctx.r4.s64 = r11.s64 + 6392;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// b 0x825eab5c
	goto loc_825EAB5C;
loc_825EA490:
	// rlwinm r11,r27,0,0,4
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xF8000000;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ea4e0
	if (!cr6.eq) goto loc_825EA4E0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825ea4d4
	if (cr6.eq) goto loc_825EA4D4;
	// lwz r11,24408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24408);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ea4d4
	if (cr6.eq) goto loc_825EA4D4;
	// rlwinm r10,r27,4,22,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0x3F0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r9,6216
	ctx.r4.s64 = ctx.r9.s64 + 6216;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// b 0x825eab5c
	goto loc_825EAB5C;
loc_825EA4D4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,6056
	ctx.r4.s64 = r11.s64 + 6056;
	// b 0x825eab54
	goto loc_825EAB54;
loc_825EA4E0:
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ea500
	if (!cr6.eq) goto loc_825EA500;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825eab5c
	if (cr6.eq) goto loc_825EAB5C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,5888
	ctx.r4.s64 = ctx.r10.s64 + 5888;
	// b 0x825ea51c
	goto loc_825EA51C;
loc_825EA500:
	// lis r10,6144
	ctx.r10.s64 = 402653184;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ea534
	if (!cr6.eq) goto loc_825EA534;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825eab5c
	if (cr6.eq) goto loc_825EAB5C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,5760
	ctx.r4.s64 = ctx.r10.s64 + 5760;
loc_825EA51C:
	// lis r11,0
	r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// ori r11,r11,53539
	r11.u64 = r11.u64 | 53539;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwimi r5,r11,16,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// b 0x825ea57c
	goto loc_825EA57C;
loc_825EA534:
	// rlwinm r11,r27,0,0,1
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ea564
	if (!cr6.eq) goto loc_825EA564;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,5608
	ctx.r4.s64 = r11.s64 + 5608;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,5504
	ctx.r4.s64 = r11.s64 + 5504;
	// b 0x825eab54
	goto loc_825EAB54;
loc_825EA564:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825ea584
	if (!cr6.eq) goto loc_825EA584;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,5368
	ctx.r4.s64 = r11.s64 + 5368;
loc_825EA57C:
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// b 0x825eab5c
	goto loc_825EAB5C;
loc_825EA584:
	// bl 0x825e9da0
	sub_825E9DA0(ctx, base);
	// lis r12,32763
	r12.s64 = 2147155968;
	// lis r11,1025
	r11.s64 = 67174400;
	// ori r12,r12,61664
	r12.u64 = r12.u64 | 61664;
	// and r30,r24,r12
	r30.u64 = r24.u64 & r12.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825ea5c4
	if (!cr6.eq) goto loc_825EA5C4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,5232
	ctx.r4.s64 = r11.s64 + 5232;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,5080
	ctx.r4.s64 = r11.s64 + 5080;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_825EA5C4:
	// rlwinm. r11,r22,0,26,26
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ea614
	if (cr0.eq) goto loc_825EA614;
	// rlwinm. r11,r22,0,21,25
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x7C0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825ea614
	if (!cr0.eq) goto loc_825EA614;
	// rlwinm r11,r22,21,28,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 21) & 0xC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,5,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F00000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825ea614
	if (!cr6.eq) goto loc_825EA614;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4944
	ctx.r4.s64 = r11.s64 + 4944;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4768
	ctx.r4.s64 = r11.s64 + 4768;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_825EA614:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825ea650
	if (!cr6.eq) goto loc_825EA650;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4624
	ctx.r4.s64 = r11.s64 + 4624;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4472
	ctx.r4.s64 = r11.s64 + 4472;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4420
	ctx.r4.s64 = r11.s64 + 4420;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r23,1
	r23.s64 = 1;
loc_825EA650:
	// lis r11,64
	r11.s64 = 4194304;
	// rlwinm r10,r30,0,9,26
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FFFE0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// rlwinm r10,r10,0,26,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0003F;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825eab20
	if (!cr6.eq) goto loc_825EAB20;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4344
	ctx.r4.s64 = r11.s64 + 4344;
	// li r24,0
	r24.s64 = 0;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4284
	ctx.r4.s64 = r11.s64 + 4284;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,4252
	ctx.r4.s64 = r11.s64 + 4252;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// addi r16,r1,224
	r16.s64 = ctx.r1.s64 + 224;
	// addi r23,r11,4168
	r23.s64 = r11.s64 + 4168;
	// addi r22,r10,4104
	r22.s64 = ctx.r10.s64 + 4104;
	// addi r21,r9,3984
	r21.s64 = ctx.r9.s64 + 3984;
	// addi r20,r8,3896
	r20.s64 = ctx.r8.s64 + 3896;
	// addi r19,r7,3816
	r19.s64 = ctx.r7.s64 + 3816;
	// addi r18,r6,22564
	r18.s64 = ctx.r6.s64 + 22564;
loc_825EA6D4:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x825ea6e8
	if (!cr6.eq) goto loc_825EA6E8;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EA6E8:
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// li r7,31
	ctx.r7.s64 = 31;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ea008
	sub_825EA008(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r25,r29,5,0,26
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
loc_825EA70C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825ea764
	if (!cr6.gt) goto loc_825EA764;
	// add r11,r25,r30
	r11.u64 = r25.u64 + r30.u64;
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
loc_825EA73C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825ea75c
	if (!cr0.eq) goto loc_825EA75C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825ea73c
	if (!cr6.eq) goto loc_825EA73C;
loc_825EA75C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825ea894
	if (cr0.eq) goto loc_825EA894;
loc_825EA764:
	// add r11,r25,r30
	r11.u64 = r25.u64 + r30.u64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// rlwinm. r7,r10,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// rlwinm r27,r10,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r26,r11,23,30,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	// beq 0x825ea7b8
	if (cr0.eq) goto loc_825EA7B8;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// beq cr6,0x825ea7b8
	if (cr6.eq) goto loc_825EA7B8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_825EA7B8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825ea7e0
	if (cr6.eq) goto loc_825EA7E0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x825ea7e0
	if (!cr6.eq) goto loc_825EA7E0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_825EA7E0:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bgt cr6,0x825ea808
	if (cr6.gt) goto loc_825EA808;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// beq cr6,0x825ea808
	if (cr6.eq) goto loc_825EA808;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_825EA808:
	// cmplwi cr6,r28,13
	cr6.compare<uint32_t>(r28.u32, 13, xer);
	// beq cr6,0x825ea828
	if (cr6.eq) goto loc_825EA828;
	// cmplwi cr6,r28,21
	cr6.compare<uint32_t>(r28.u32, 21, xer);
	// beq cr6,0x825ea828
	if (cr6.eq) goto loc_825EA828;
	// cmplwi cr6,r28,57
	cr6.compare<uint32_t>(r28.u32, 57, xer);
	// beq cr6,0x825ea828
	if (cr6.eq) goto loc_825EA828;
	// cmplwi cr6,r28,62
	cr6.compare<uint32_t>(r28.u32, 62, xer);
	// blt cr6,0x825ea840
	if (cr6.lt) goto loc_825EA840;
loc_825EA828:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_825EA840:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x825ea894
	if (!cr6.eq) goto loc_825EA894;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(r28.u32, 11, xer);
	// beq cr6,0x825ea878
	if (cr6.eq) goto loc_825EA878;
	// cmplwi cr6,r28,12
	cr6.compare<uint32_t>(r28.u32, 12, xer);
	// beq cr6,0x825ea878
	if (cr6.eq) goto loc_825EA878;
	// cmplwi cr6,r28,39
	cr6.compare<uint32_t>(r28.u32, 39, xer);
	// beq cr6,0x825ea878
	if (cr6.eq) goto loc_825EA878;
	// cmplwi cr6,r28,40
	cr6.compare<uint32_t>(r28.u32, 40, xer);
	// beq cr6,0x825ea878
	if (cr6.eq) goto loc_825EA878;
	// cmplwi cr6,r28,43
	cr6.compare<uint32_t>(r28.u32, 43, xer);
	// blt cr6,0x825ea894
	if (cr6.lt) goto loc_825EA894;
	// cmplwi cr6,r28,48
	cr6.compare<uint32_t>(r28.u32, 48, xer);
	// bgt cr6,0x825ea894
	if (cr6.gt) goto loc_825EA894;
loc_825EA878:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_825EA894:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,26
	cr6.compare<int32_t>(r30.s32, 26, xer);
	// blt cr6,0x825ea70c
	if (cr6.lt) goto loc_825EA70C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r16,r16,768
	r16.s64 = r16.s64 + 768;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// blt cr6,0x825ea6d4
	if (cr6.lt) goto loc_825EA6D4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,3672
	ctx.r4.s64 = r11.s64 + 3672;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r11,3496
	r25.s64 = r11.s64 + 3496;
loc_825EA8DC:
	// li r29,0
	r29.s64 = 0;
loc_825EA8E0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x825ea938
	if (!cr6.gt) goto loc_825EA938;
	// add r11,r29,r27
	r11.u64 = r29.u64 + r27.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
loc_825EA910:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825ea930
	if (!cr0.eq) goto loc_825EA930;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825ea910
	if (!cr6.eq) goto loc_825EA910;
loc_825EA930:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825eaa98
	if (cr0.eq) goto loc_825EAA98;
loc_825EA938:
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r27,256
	cr6.compare<int32_t>(r27.s32, 256, xer);
	// bge cr6,0x825eaa98
	if (!cr6.lt) goto loc_825EAA98;
loc_825EA944:
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// beq cr6,0x825ea954
	if (cr6.eq) goto loc_825EA954;
	// li r31,0
	r31.s64 = 0;
loc_825EA954:
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(r31.s32, 26, xer);
	// bge cr6,0x825eaa8c
	if (!cr6.lt) goto loc_825EAA8C;
	// rlwinm r30,r28,5,0,26
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
loc_825EA960:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825ea9b8
	if (!cr6.gt) goto loc_825EA9B8;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
loc_825EA990:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825ea9b0
	if (!cr0.eq) goto loc_825EA9B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825ea990
	if (!cr6.eq) goto loc_825EA990;
loc_825EA9B0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825eaa80
	if (cr0.eq) goto loc_825EAA80;
loc_825EA9B8:
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r8,r1,228
	ctx.r8.s64 = ctx.r1.s64 + 228;
	// rlwinm r9,r9,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r8,20,12,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x825eaa80
	if (!cr6.eq) goto loc_825EAA80;
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// addi r6,r1,244
	ctx.r6.s64 = ctx.r1.s64 + 244;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r6,r8,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r8,r5,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x825eaa80
	if (cr6.eq) goto loc_825EAA80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825eaa18
	if (!cr6.eq) goto loc_825EAA18;
	// li r24,1
	r24.s64 = 1;
	// b 0x825eaa34
	goto loc_825EAA34;
loc_825EAA18:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825eaa30
	if (cr6.eq) goto loc_825EAA30;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825eaa30
	if (cr6.eq) goto loc_825EAA30;
	// li r22,1
	r22.s64 = 1;
	// b 0x825eaa34
	goto loc_825EAA34;
loc_825EAA30:
	// li r23,1
	r23.s64 = 1;
loc_825EAA34:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwzx r11,r11,r5
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r3,r11,26,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// rlwinm r11,r11,30,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// rlwinm r10,r9,26,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xF;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// rlwinm r9,r9,30,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EAA80:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(r31.s32, 26, xer);
	// blt cr6,0x825ea960
	if (cr6.lt) goto loc_825EA960;
loc_825EAA8C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(r28.s32, 8, xer);
	// blt cr6,0x825ea944
	if (cr6.lt) goto loc_825EA944;
loc_825EAA98:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,26
	cr6.compare<int32_t>(r29.s32, 26, xer);
	// blt cr6,0x825ea8e0
	if (cr6.lt) goto loc_825EA8E0;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r27,256
	cr6.compare<int32_t>(r27.s32, 256, xer);
	// blt cr6,0x825ea8dc
	if (cr6.lt) goto loc_825EA8DC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x825eaadc
	if (cr6.eq) goto loc_825EAADC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,3328
	ctx.r4.s64 = r11.s64 + 3328;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,3144
	ctx.r4.s64 = r11.s64 + 3144;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EAADC:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x825eab04
	if (cr6.eq) goto loc_825EAB04;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2984
	ctx.r4.s64 = r11.s64 + 2984;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2848
	ctx.r4.s64 = r11.s64 + 2848;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EAB04:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x825eab1c
	if (cr6.eq) goto loc_825EAB1C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2696
	ctx.r4.s64 = r11.s64 + 2696;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EAB1C:
	// li r23,1
	r23.s64 = 1;
loc_825EAB20:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x825eab38
	if (cr6.eq) goto loc_825EAB38;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825ea0c8
	sub_825EA0C8(ctx, base);
loc_825EAB38:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x825eab4c
	if (cr6.eq) goto loc_825EAB4C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,2552
	ctx.r4.s64 = r11.s64 + 2552;
	// b 0x825eab54
	goto loc_825EAB54;
loc_825EAB4C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,2408
	ctx.r4.s64 = r11.s64 + 2408;
loc_825EAB54:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825e9d18
	sub_825E9D18(ctx, base);
loc_825EAB5C:
	// addi r1,r1,6528
	ctx.r1.s64 = ctx.r1.s64 + 6528;
}

__attribute__((alias("__imp__sub_825EAB60"))) PPC_WEAK_FUNC(sub_825EAB60);
PPC_FUNC_IMPL(__imp__sub_825EAB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825EAB64"))) PPC_WEAK_FUNC(sub_825EAB64);
PPC_FUNC_IMPL(__imp__sub_825EAB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EAB68"))) PPC_WEAK_FUNC(sub_825EAB68);
PPC_FUNC_IMPL(__imp__sub_825EAB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,7040
	ctx.r3.s64 = r11.s64 + 7040;
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,13832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 13832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ea2a8
	sub_825EA2A8(ctx, base);
	// lwz r11,13832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eabf4
	if (cr6.eq) goto loc_825EABF4;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-19192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19192);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825eabc0
	if (cr6.eq) goto loc_825EABC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825eac14
	goto loc_825EAC14;
loc_825EABC0:
	// lbz r10,11069(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11036);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r7,11024(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stb r10,11069(r31)
	PPC_STORE_U8(r31.u32 + 11069, ctx.r10.u8);
	// addi r3,r8,1116
	ctx.r3.s64 = ctx.r8.s64 + 1116;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r9,11152(r31)
	PPC_STORE_U32(r31.u32 + 11152, ctx.r9.u32);
	// bl 0x825ec840
	sub_825EC840(ctx, base);
	// b 0x825eac10
	goto loc_825EAC10;
loc_825EABF4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,6816
	ctx.r3.s64 = r11.s64 + 6816;
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,6720
	ctx.r3.s64 = r11.s64 + 6720;
	// bl 0x8314d1ec
	__imp__DbgPrint(ctx, base);
	// twi 31,r0,22
	if (r0.s32 < 22 || r0.s32 > 22 || r0.u32 == 22 || r0.u32 < 22 || r0.u32 > 22) __builtin_debugtrap();
loc_825EAC10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EAC14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EAC24"))) PPC_WEAK_FUNC(sub_825EAC24);
PPC_FUNC_IMPL(__imp__sub_825EAC24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAC28"))) PPC_WEAK_FUNC(sub_825EAC28);
PPC_FUNC_IMPL(__imp__sub_825EAC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eac4c
	if (cr6.eq) goto loc_825EAC4C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,24396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24396, r11.u32);
	// lwsync 
	// lwz r10,24400(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24400);
	// li r11,-1
	r11.s64 = -1;
	// std r11,544(r10)
	PPC_STORE_U64(ctx.r10.u32 + 544, r11.u64);
loc_825EAC4C:
	// lwz r11,24424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24424);
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eacc8
	if (cr6.eq) goto loc_825EACC8;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825EAC6C:
	// lwz r9,24432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24432);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r6,24424(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24424);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// oris r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 3221225472;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x825eac6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EAC6C;
	// sync 
	// li r10,63
	ctx.r10.s64 = 63;
	// li r11,0
	r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825EACB0:
	// lwz r10,24424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24424);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// stw r8,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r8.u32);
	// bdnz 0x825eacb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EACB0;
	// sync 
loc_825EACC8:
	// ld r11,24440(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24440);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// sync 
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,0
	r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825EACE4:
	// lwz r10,24448(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24448);
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825eace4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EACE4;
	// sync 
}

__attribute__((alias("__imp__sub_825EACF8"))) PPC_WEAK_FUNC(sub_825EACF8);
PPC_FUNC_IMPL(__imp__sub_825EACF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EACFC"))) PPC_WEAK_FUNC(sub_825EACFC);
PPC_FUNC_IMPL(__imp__sub_825EACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EAD00"))) PPC_WEAK_FUNC(sub_825EAD00);
PPC_FUNC_IMPL(__imp__sub_825EAD00) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,7120
	ctx.r3.s64 = r11.s64 + 7120;
	// bl 0x82606e88
	sub_82606E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825ead68
	if (cr6.eq) goto loc_825EAD68;
	// li r4,873
	ctx.r4.s64 = 873;
	// bl 0x82606e18
	sub_82606E18(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ead60
	if (cr0.eq) goto loc_825EAD60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82606de0
	sub_82606DE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x825ead70
	goto loc_825EAD70;
loc_825EAD60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82606de0
	sub_82606DE0(ctx, base);
loc_825EAD68:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_825EAD70:
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

__attribute__((alias("__imp__sub_825EAD84"))) PPC_WEAK_FUNC(sub_825EAD84);
PPC_FUNC_IMPL(__imp__sub_825EAD84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EAD88"))) PPC_WEAK_FUNC(sub_825EAD88);
PPC_FUNC_IMPL(__imp__sub_825EAD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,32712
	r11.s64 = 2143813632;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,12820(r11)
	PPC_MM_STORE_U32(r11.u32 + 12820, ctx.r10.u32);
	// eieio 
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,13320(r11)
	PPC_MM_STORE_U32(r11.u32 + 13320, ctx.r10.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EADA8"))) PPC_WEAK_FUNC(sub_825EADA8);
PPC_FUNC_IMPL(__imp__sub_825EADA8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eadd4
	if (cr6.eq) goto loc_825EADD4;
	// bl 0x825eac28
	sub_825EAC28(ctx, base);
loc_825EADD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825EADE0"))) PPC_WEAK_FUNC(sub_825EADE0);
PPC_FUNC_IMPL(__imp__sub_825EADE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EADE4"))) PPC_WEAK_FUNC(sub_825EADE4);
PPC_FUNC_IMPL(__imp__sub_825EADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EADE8"))) PPC_WEAK_FUNC(sub_825EADE8);
PPC_FUNC_IMPL(__imp__sub_825EADE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r25,14000(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14000);
	// li r23,0
	r23.s64 = 0;
	// lwz r24,24392(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,21528
	r29.s64 = r11.s64 + 21528;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_825EAE10:
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// addi r11,r11,137
	r11.s64 = r11.s64 + 137;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,404
	cr6.compare<uint32_t>(r30.u32, 404, xer);
	// blt cr6,0x825eae10
	if (cr6.lt) goto loc_825EAE10;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r28,r23
	r28.u64 = r23.u64;
	// addi r27,r31,1152
	r27.s64 = r31.s64 + 1152;
	// addi r26,r11,22744
	r26.s64 = r11.s64 + 22744;
loc_825EAE6C:
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r29,r26,8
	r29.s64 = r26.s64 + 8;
loc_825EAE74:
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// addi r8,r11,117
	ctx.r8.s64 = r11.s64 + 117;
	// addi r11,r11,238
	r11.s64 = r11.s64 + 238;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,468(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,80
	cr6.compare<uint32_t>(r30.u32, 80, xer);
	// blt cr6,0x825eae74
	if (cr6.lt) goto loc_825EAE74;
	// addi r11,r28,32
	r11.s64 = r28.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// cmplwi cr6,r28,26
	cr6.compare<uint32_t>(r28.u32, 26, xer);
	// blt cr6,0x825eae6c
	if (cr6.lt) goto loc_825EAE6C;
	// li r11,5
	r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12568(r31)
	PPC_STORE_U32(r31.u32 + 12568, r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6a08
	sub_825E6A08(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d9378
	sub_825D9378(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de168
	sub_825DE168(ctx, base);
	// clrlwi r4,r24,31
	ctx.r4.u64 = r24.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcff0
	sub_825DCFF0(ctx, base);
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// stw r23,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r23.u32);
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825eb008
	if (!cr0.eq) goto loc_825EB008;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825eb008
	if (!cr0.eq) goto loc_825EB008;
	// lbz r11,12563(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12563);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825eb008
	if (!cr0.eq) goto loc_825EB008;
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eaf6c
	if (cr0.eq) goto loc_825EAF6C;
	// li r11,1
	r11.s64 = 1;
	// b 0x825eaffc
	goto loc_825EAFFC;
loc_825EAF6C:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eaff4
	if (cr0.eq) goto loc_825EAFF4;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r9,13104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825eaf8c
	if (cr6.eq) goto loc_825EAF8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eaff4
	if (!cr6.eq) goto loc_825EAFF4;
loc_825EAF8C:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r9,13108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825eafa4
	if (cr6.eq) goto loc_825EAFA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eaff4
	if (!cr6.eq) goto loc_825EAFF4;
loc_825EAFA4:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r9,13112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825eafbc
	if (cr6.eq) goto loc_825EAFBC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eaff4
	if (!cr6.eq) goto loc_825EAFF4;
loc_825EAFBC:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r9,13116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825eafd4
	if (cr6.eq) goto loc_825EAFD4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eaff4
	if (!cr6.eq) goto loc_825EAFF4;
loc_825EAFD4:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r9,13120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x825eafec
	if (cr6.eq) goto loc_825EAFEC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eaff4
	if (!cr6.eq) goto loc_825EAFF4;
loc_825EAFEC:
	// li r11,1
	r11.s64 = 1;
	// b 0x825eaff8
	goto loc_825EAFF8;
loc_825EAFF4:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825EAFF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825EAFFC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x825eb00c
	if (!cr0.eq) goto loc_825EB00C;
loc_825EB008:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825EB00C:
	// rlwimi r11,r10,0,24,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r23,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, r23.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,11060(r31)
	PPC_STORE_U32(r31.u32 + 11060, r23.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r23,11064(r31)
	PPC_STORE_U32(r31.u32 + 11064, r23.u32);
	// stw r10,13084(r31)
	PPC_STORE_U32(r31.u32 + 13084, ctx.r10.u32);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,11068(r31)
	PPC_STORE_U8(r31.u32 + 11068, r11.u8);
	// bne 0x825eb048
	if (!cr0.eq) goto loc_825EB048;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
loc_825EB048:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825EB04C"))) PPC_WEAK_FUNC(sub_825EB04C);
PPC_FUNC_IMPL(__imp__sub_825EB04C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825EB050"))) PPC_WEAK_FUNC(sub_825EB050);
PPC_FUNC_IMPL(__imp__sub_825EB050) {
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
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb074
	if (cr6.eq) goto loc_825EB074;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f36e0
	sub_825F36E0(ctx, base);
loc_825EB074:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb0b8
	if (cr6.eq) goto loc_825EB0B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825EB094:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825eb094
	if (cr6.lt) goto loc_825EB094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
loc_825EB0B8:
	// lwz r3,15232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb0cc
	if (cr6.eq) goto loc_825EB0CC;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r29,15232(r31)
	PPC_STORE_U32(r31.u32 + 15232, r29.u32);
loc_825EB0CC:
	// lwz r3,15236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb0e0
	if (cr6.eq) goto loc_825EB0E0;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r29,15236(r31)
	PPC_STORE_U32(r31.u32 + 15236, r29.u32);
loc_825EB0E0:
	// lwz r3,15228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 15228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb0f4
	if (cr6.eq) goto loc_825EB0F4;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r29,15228(r31)
	PPC_STORE_U32(r31.u32 + 15228, r29.u32);
loc_825EB0F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825EB0F8"))) PPC_WEAK_FUNC(sub_825EB0F8);
PPC_FUNC_IMPL(__imp__sub_825EB0F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825EB0FC"))) PPC_WEAK_FUNC(sub_825EB0FC);
PPC_FUNC_IMPL(__imp__sub_825EB0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB100"))) PPC_WEAK_FUNC(sub_825EB100);
PPC_FUNC_IMPL(__imp__sub_825EB100) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb144
	if (cr6.eq) goto loc_825EB144;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x825eb100
	sub_825EB100(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825EB144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EB154"))) PPC_WEAK_FUNC(sub_825EB154);
PPC_FUNC_IMPL(__imp__sub_825EB154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB158"))) PPC_WEAK_FUNC(sub_825EB158);
PPC_FUNC_IMPL(__imp__sub_825EB158) {
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
	// lwz r11,24596(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24596);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eb1b0
	if (!cr6.eq) goto loc_825EB1B0;
	// lis r11,52
	r11.s64 = 3407872;
	// lis r4,-17280
	ctx.r4.s64 = -1132462080;
	// ori r31,r11,20480
	r31.u64 = r11.u64 | 20480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,24596(r30)
	PPC_STORE_U32(r30.u32 + 24596, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825eb1b4
	if (cr0.eq) goto loc_825EB1B4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x8314d23c
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
loc_825EB1B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EB1B4:
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

__attribute__((alias("__imp__sub_825EB1C8"))) PPC_WEAK_FUNC(sub_825EB1C8);
PPC_FUNC_IMPL(__imp__sub_825EB1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB1CC"))) PPC_WEAK_FUNC(sub_825EB1CC);
PPC_FUNC_IMPL(__imp__sub_825EB1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB1D0"))) PPC_WEAK_FUNC(sub_825EB1D0);
PPC_FUNC_IMPL(__imp__sub_825EB1D0) {
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
	// lwz r11,24596(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24596);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb21c
	if (cr6.eq) goto loc_825EB21C;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x8314d23c
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24596);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,24596(r31)
	PPC_STORE_U32(r31.u32 + 24596, r30.u32);
loc_825EB21C:
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

__attribute__((alias("__imp__sub_825EB230"))) PPC_WEAK_FUNC(sub_825EB230);
PPC_FUNC_IMPL(__imp__sub_825EB230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB234"))) PPC_WEAK_FUNC(sub_825EB234);
PPC_FUNC_IMPL(__imp__sub_825EB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB238"))) PPC_WEAK_FUNC(sub_825EB238);
PPC_FUNC_IMPL(__imp__sub_825EB238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x825eb380
	if (cr6.eq) goto loc_825EB380;
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x825eb274
	if (cr6.eq) goto loc_825EB274;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// bne cr6,0x825eb278
	if (!cr6.eq) goto loc_825EB278;
loc_825EB274:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_825EB278:
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	cr6.compare<uint32_t>(ctx.r8.u32, 720, xer);
	// or r31,r9,r10
	r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x825eb2ac
	if (!cr6.eq) goto loc_825EB2AC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,480
	cr6.compare<uint32_t>(r11.u32, 480, xer);
	// beq cr6,0x825eb2a8
	if (cr6.eq) goto loc_825EB2A8;
	// cmplwi cr6,r11,576
	cr6.compare<uint32_t>(r11.u32, 576, xer);
	// bne cr6,0x825eb2ac
	if (!cr6.eq) goto loc_825EB2AC;
loc_825EB2A8:
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_825EB2AC:
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm. r11,r11,0,26,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eb30c
	if (cr0.eq) goto loc_825EB30C;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x825eb2e8
	if (cr6.eq) goto loc_825EB2E8;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x825eb2d4
	if (cr6.eq) goto loc_825EB2D4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f1,7140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7140);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825eb2f0
	goto loc_825EB2F0;
loc_825EB2D4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,1920
	ctx.r3.s64 = 1920;
	// li r4,2205
	ctx.r4.s64 = 2205;
	// lfs f1,7136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7136);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825eb2f8
	goto loc_825EB2F8;
loc_825EB2E8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3660);
	ctx.f1.f64 = double(temp.f32);
loc_825EB2F0:
	// li r4,1470
	ctx.r4.s64 = 1470;
	// li r3,1280
	ctx.r3.s64 = 1280;
loc_825EB2F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x8314d27c
	__imp__VdSetDisplayModeOverride(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825eb374
	goto loc_825EB374;
loc_825EB30C:
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825EB31C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825eb31c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EB31C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d26c
	__imp__VdQueryVideoMode(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(r11.u32, 1280, xer);
	// bne cr6,0x825eb344
	if (!cr6.eq) goto loc_825EB344;
	// cmplwi cr6,r10,1470
	cr6.compare<uint32_t>(ctx.r10.u32, 1470, xer);
	// beq cr6,0x825eb354
	if (cr6.eq) goto loc_825EB354;
loc_825EB344:
	// cmplwi cr6,r11,1920
	cr6.compare<uint32_t>(r11.u32, 1920, xer);
	// bne cr6,0x825eb378
	if (!cr6.eq) goto loc_825EB378;
	// cmplwi cr6,r10,2205
	cr6.compare<uint32_t>(ctx.r10.u32, 2205, xer);
	// bne cr6,0x825eb378
	if (!cr6.eq) goto loc_825EB378;
loc_825EB354:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8314d27c
	__imp__VdSetDisplayModeOverride(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EB374:
	// bl 0x825ead00
	sub_825EAD00(ctx, base);
loc_825EB378:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d25c
	__imp__VdSetDisplayMode(ctx, base);
loc_825EB380:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8314d24c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,200(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// lhz r10,202(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 202);
	// lhz r9,214(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 214);
	// stw r11,21952(r30)
	PPC_STORE_U32(r30.u32 + 21952, r11.u32);
	// stw r10,21956(r30)
	PPC_STORE_U32(r30.u32 + 21956, ctx.r10.u32);
	// stw r9,21960(r30)
	PPC_STORE_U32(r30.u32 + 21960, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EB3B4"))) PPC_WEAK_FUNC(sub_825EB3B4);
PPC_FUNC_IMPL(__imp__sub_825EB3B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB3B8"))) PPC_WEAK_FUNC(sub_825EB3B8);
PPC_FUNC_IMPL(__imp__sub_825EB3B8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb3f0
	if (cr6.eq) goto loc_825EB3F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb3f0
	if (cr6.eq) goto loc_825EB3F0;
	// bl 0x825eb1d0
	sub_825EB1D0(ctx, base);
loc_825EB3F0:
	// bl 0x8314d28c
	__imp__VdShutdownEngines(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825EB400"))) PPC_WEAK_FUNC(sub_825EB400);
PPC_FUNC_IMPL(__imp__sub_825EB400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB404"))) PPC_WEAK_FUNC(sub_825EB404);
PPC_FUNC_IMPL(__imp__sub_825EB404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB408"))) PPC_WEAK_FUNC(sub_825EB408);
PPC_FUNC_IMPL(__imp__sub_825EB408) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r11,19536
	ctx.r7.s64 = r11.s64 + 19536;
	// addi r6,r10,28752
	ctx.r6.s64 = ctx.r10.s64 + 28752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-21112
	ctx.r4.s64 = ctx.r9.s64 + -21112;
	// lis r3,21119
	ctx.r3.s64 = 1384054784;
	// bl 0x8314d2ac
	__imp__VdInitializeEngines(ctx, base);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb46c
	if (cr6.eq) goto loc_825EB46C;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23440
	ctx.r3.s64 = r11.s64 + 23440;
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23456
	ctx.r3.s64 = r11.s64 + 23456;
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_825EB46C:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r11,17120(r31)
	PPC_STORE_U32(r31.u32 + 17120, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r10,12280
	ctx.r3.s64 = ctx.r10.s64 + 12280;
	// bl 0x8314d29c
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
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

__attribute__((alias("__imp__sub_825EB498"))) PPC_WEAK_FUNC(sub_825EB498);
PPC_FUNC_IMPL(__imp__sub_825EB498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB49C"))) PPC_WEAK_FUNC(sub_825EB49C);
PPC_FUNC_IMPL(__imp__sub_825EB49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB4A0"))) PPC_WEAK_FUNC(sub_825EB4A0);
PPC_FUNC_IMPL(__imp__sub_825EB4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// ld r11,22984(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 22984);
	// std r11,11008(r3)
	PPC_STORE_U64(ctx.r3.u32 + 11008, r11.u64);
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(r31.u32 + 11016, ctx.r3.u32);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r3,4800
	ctx.r3.s64 = 4800;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,11020(r31)
	PPC_STORE_U32(r31.u32 + 11020, r11.u32);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,17136(r31)
	PPC_STORE_U32(r31.u32 + 17136, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EB50C"))) PPC_WEAK_FUNC(sub_825EB50C);
PPC_FUNC_IMPL(__imp__sub_825EB50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB510"))) PPC_WEAK_FUNC(sub_825EB510);
PPC_FUNC_IMPL(__imp__sub_825EB510) {
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
	// bl 0x825e2c18
	sub_825E2C18(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21968(r31)
	PPC_STORE_U32(r31.u32 + 21968, r11.u32);
	// stw r11,21972(r31)
	PPC_STORE_U32(r31.u32 + 21972, r11.u32);
	// stw r11,15340(r31)
	PPC_STORE_U32(r31.u32 + 15340, r11.u32);
	// bl 0x825fad48
	sub_825FAD48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eade8
	sub_825EADE8(ctx, base);
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

__attribute__((alias("__imp__sub_825EB55C"))) PPC_WEAK_FUNC(sub_825EB55C);
PPC_FUNC_IMPL(__imp__sub_825EB55C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB560"))) PPC_WEAK_FUNC(sub_825EB560);
PPC_FUNC_IMPL(__imp__sub_825EB560) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb588
	if (cr6.eq) goto loc_825EB588;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
loc_825EB588:
	// lwz r3,22048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22048);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb5a4
	if (cr6.eq) goto loc_825EB5A4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,22048(r31)
	PPC_STORE_U32(r31.u32 + 22048, r30.u32);
loc_825EB5A4:
	// lwz r3,22044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22044);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb5c0
	if (cr6.eq) goto loc_825EB5C0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,22044(r31)
	PPC_STORE_U32(r31.u32 + 22044, r30.u32);
	// stw r30,22052(r31)
	PPC_STORE_U32(r31.u32 + 22052, r30.u32);
loc_825EB5C0:
	// stw r30,22056(r31)
	PPC_STORE_U32(r31.u32 + 22056, r30.u32);
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

__attribute__((alias("__imp__sub_825EB5D8"))) PPC_WEAK_FUNC(sub_825EB5D8);
PPC_FUNC_IMPL(__imp__sub_825EB5D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB5DC"))) PPC_WEAK_FUNC(sub_825EB5DC);
PPC_FUNC_IMPL(__imp__sub_825EB5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EB5E0"))) PPC_WEAK_FUNC(sub_825EB5E0);
PPC_FUNC_IMPL(__imp__sub_825EB5E0) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb608
	if (cr6.eq) goto loc_825EB608;
	// bl 0x825d1658
	sub_825D1658(ctx, base);
loc_825EB608:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825eb77c
	if (!cr0.eq) goto loc_825EB77C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1ce8
	sub_825F1CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eac28
	sub_825EAC28(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb640
	if (cr6.eq) goto loc_825EB640;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
loc_825EB640:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb560
	sub_825EB560(ctx, base);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb65c
	if (cr6.eq) goto loc_825EB65C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f3b00
	sub_825F3B00(ctx, base);
loc_825EB65C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825edb70
	sub_825EDB70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d1cc
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb688
	if (cr6.eq) goto loc_825EB688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb1d0
	sub_825EB1D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825ead00
	sub_825EAD00(ctx, base);
loc_825EB688:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb050
	sub_825EB050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1128
	sub_825D1128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1278
	sub_825D1278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9900
	sub_825F9900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7170
	sub_825D7170(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb6d0
	if (cr6.eq) goto loc_825EB6D0;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x825eb6d4
	goto loc_825EB6D4;
loc_825EB6D0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825EB6D4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eb6f8
	if (cr6.eq) goto loc_825EB6F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// ble cr6,0x825eb6f0
	if (!cr6.gt) goto loc_825EB6F0;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
loc_825EB6F0:
	// stw r30,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
loc_825EB6F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d29c
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4ad0
	sub_825E4AD0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,11028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11028);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,11024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,11028(r31)
	PPC_STORE_U32(r31.u32 + 11028, r30.u32);
	// stw r30,11024(r31)
	PPC_STORE_U32(r31.u32 + 11024, r30.u32);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eb76c
	if (cr6.eq) goto loc_825EB76C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,23440
	ctx.r3.s64 = ctx.r10.s64 + 23440;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,23456
	ctx.r3.s64 = r11.s64 + 23456;
	// bl 0x8314d21c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// b 0x825eb778
	goto loc_825EB778;
loc_825EB76C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825EB778:
	// bl 0x8314d28c
	__imp__VdShutdownEngines(ctx, base);
loc_825EB77C:
	// lwz r3,17136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 17136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb790
	if (cr6.eq) goto loc_825EB790;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825EB790:
	// lwz r3,21980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825eb7a0
	if (cr6.eq) goto loc_825EB7A0;
	// bl 0x825eb100
	sub_825EB100(ctx, base);
loc_825EB7A0:
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

__attribute__((alias("__imp__sub_825EB7B4"))) PPC_WEAK_FUNC(sub_825EB7B4);
PPC_FUNC_IMPL(__imp__sub_825EB7B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EB7B8"))) PPC_WEAK_FUNC(sub_825EB7B8);
PPC_FUNC_IMPL(__imp__sub_825EB7B8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r28,0(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lwz r25,16(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r22,40(r4)
	r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r26,8(r4)
	r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bne cr6,0x825eb7f4
	if (!cr6.eq) goto loc_825EB7F4;
	// clrlwi r11,r26,26
	r11.u64 = r26.u32 & 0x3F;
	// b 0x825eb804
	goto loc_825EB804;
loc_825EB7F4:
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,390
	r11.u64 = r11.u64 | 390;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x825eb80c
	if (!cr6.eq) goto loc_825EB80C;
loc_825EB804:
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x825eb820
	goto loc_825EB820;
loc_825EB80C:
	// lis r11,6184
	r11.s64 = 405274624;
	// ori r11,r11,390
	r11.u64 = r11.u64 | 390;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x825eb828
	if (!cr6.eq) goto loc_825EB828;
	// lis r30,6184
	r30.s64 = 405274624;
loc_825EB820:
	// ori r30,r30,262
	r30.u64 = r30.u64 | 262;
	// b 0x825eb858
	goto loc_825EB858;
loc_825EB828:
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,438
	r11.u64 = r11.u64 | 438;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x825eb840
	if (!cr6.eq) goto loc_825EB840;
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x825eb854
	goto loc_825EB854;
loc_825EB840:
	// lis r11,6184
	r11.s64 = 405274624;
	// ori r11,r11,438
	r11.u64 = r11.u64 | 438;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x825eb858
	if (!cr6.eq) goto loc_825EB858;
	// lis r30,6184
	r30.s64 = 405274624;
loc_825EB854:
	// ori r30,r30,310
	r30.u64 = r30.u64 | 310;
loc_825EB858:
	// clrlwi r23,r30,26
	r23.u64 = r30.u32 & 0x3F;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r23,50
	cr6.compare<uint32_t>(r23.u32, 50, xer);
	// bne cr6,0x825eb870
	if (!cr6.eq) goto loc_825EB870;
	// li r24,6
	r24.s64 = 6;
	// b 0x825eb87c
	goto loc_825EB87C;
loc_825EB870:
	// cmplwi cr6,r24,7
	cr6.compare<uint32_t>(r24.u32, 7, xer);
	// bne cr6,0x825eb87c
	if (!cr6.eq) goto loc_825EB87C;
	// li r24,54
	r24.s64 = 54;
loc_825EB87C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d26c
	__imp__VdQueryVideoMode(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,21964
	ctx.r9.s64 = 21964;
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stw r11,21952(r29)
	PPC_STORE_U32(r29.u32 + 21952, r11.u32);
	// stw r11,21960(r29)
	PPC_STORE_U32(r29.u32 + 21960, r11.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,r29,r9
	PPC_STORE_U32(r29.u32 + ctx.r9.u32, f0.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,21956(r29)
	PPC_STORE_U32(r29.u32 + 21956, r11.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825eb8f8
	if (!cr6.eq) goto loc_825EB8F8;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d5330
	sub_825D5330(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825eb8f4
	if (!cr0.eq) goto loc_825EB8F4;
loc_825EB8EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825eba2c
	goto loc_825EBA2C;
loc_825EB8F4:
	// stw r3,15232(r29)
	PPC_STORE_U32(r29.u32 + 15232, ctx.r3.u32);
loc_825EB8F8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825eb934
	if (!cr6.eq) goto loc_825EB934;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d5450
	sub_825D5450(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x825eb8ec
	if (cr0.eq) goto loc_825EB8EC;
	// stw r5,15236(r29)
	PPC_STORE_U32(r29.u32 + 15236, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
loc_825EB934:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825eb96c
	if (cr6.eq) goto loc_825EB96C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d5450
	sub_825D5450(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x825eb8ec
	if (cr0.eq) goto loc_825EB8EC;
	// stw r4,15228(r29)
	PPC_STORE_U32(r29.u32 + 15228, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
loc_825EB96C:
	// addi r3,r29,13948
	ctx.r3.s64 = r29.s64 + 13948;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// rlwinm r11,r30,0,2,13
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3FFC0000;
	// lis r10,9360
	ctx.r10.s64 = 613416960;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x825eb998
	if (cr6.eq) goto loc_825EB998;
	// oris r11,r23,10280
	r11.u64 = r23.u64 | 673710080;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// stw r11,14012(r29)
	PPC_STORE_U32(r29.u32 + 14012, r11.u32);
loc_825EB998:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f17e0
	sub_825F17E0(ctx, base);
	// cmplwi cr6,r24,7
	cr6.compare<uint32_t>(r24.u32, 7, xer);
	// beq cr6,0x825eb9d4
	if (cr6.eq) goto loc_825EB9D4;
	// cmplwi cr6,r24,54
	cr6.compare<uint32_t>(r24.u32, 54, xer);
	// beq cr6,0x825eb9d4
	if (cr6.eq) goto loc_825EB9D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825ec330
	sub_825EC330(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825def78
	sub_825DEF78(ctx, base);
	// b 0x825eb9f0
	goto loc_825EB9F0;
loc_825EB9D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825ec378
	sub_825EC378(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825df048
	sub_825DF048(ctx, base);
loc_825EB9F0:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,17116(r29)
	PPC_STORE_U32(r29.u32 + 17116, r11.u32);
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825eba28
	if (cr6.eq) goto loc_825EBA28;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm. r11,r11,0,26,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eba24
	if (cr0.eq) goto loc_825EBA24;
	// bl 0x825eb158
	sub_825EB158(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825eba28
	if (!cr0.eq) goto loc_825EBA28;
	// b 0x825eb8ec
	goto loc_825EB8EC;
loc_825EBA24:
	// bl 0x825eb1d0
	sub_825EB1D0(ctx, base);
loc_825EBA28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EBA2C:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
}

__attribute__((alias("__imp__sub_825EBA30"))) PPC_WEAK_FUNC(sub_825EBA30);
PPC_FUNC_IMPL(__imp__sub_825EBA30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825EBA34"))) PPC_WEAK_FUNC(sub_825EBA34);
PPC_FUNC_IMPL(__imp__sub_825EBA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EBA38"))) PPC_WEAK_FUNC(sub_825EBA38);
PPC_FUNC_IMPL(__imp__sub_825EBA38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,15348
	ctx.r3.s64 = ctx.r3.s64 + 15348;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,15376
	ctx.r3.s64 = r31.s64 + 15376;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r11,r31,24460
	r11.s64 = r31.s64 + 24460;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stb r30,24460(r31)
	PPC_STORE_U8(r31.u32 + 24460, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,24464(r31)
	PPC_STORE_U32(r31.u32 + 24464, r30.u32);
	// stw r11,24468(r31)
	PPC_STORE_U32(r31.u32 + 24468, r11.u32);
	// stw r11,24472(r31)
	PPC_STORE_U32(r31.u32 + 24472, r11.u32);
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,11070(r31)
	PPC_STORE_U8(r31.u32 + 11070, r11.u8);
	// bl 0x825eb408
	sub_825EB408(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825eba9c
	if (!cr0.eq) goto loc_825EBA9C;
loc_825EBA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825ebcac
	goto loc_825EBCAC;
loc_825EBA9C:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825ebab4
	if (cr6.eq) goto loc_825EBAB4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
	// b 0x825ebabc
	goto loc_825EBABC;
loc_825EBAB4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
loc_825EBABC:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lis r4,-23168
	ctx.r4.s64 = -1518338048;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,11024(r31)
	PPC_STORE_U32(r31.u32 + 11024, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825ebae4
	if (!cr0.eq) goto loc_825EBAE4;
loc_825EBAD8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825ebcac
	goto loc_825EBCAC;
loc_825EBAE4:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r4,-27264
	ctx.r4.s64 = -1786773504;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,11028(r31)
	PPC_STORE_U32(r31.u32 + 11028, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825ebad8
	if (cr0.eq) goto loc_825EBAD8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,17124
	ctx.r5.s64 = r31.s64 + 17124;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825eba94
	if (cr0.lt) goto loc_825EBA94;
	// addi r4,r29,72
	ctx.r4.s64 = r29.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4ad0
	sub_825E4AD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825eba94
	if (!cr0.eq) goto loc_825EBA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1910
	sub_825D1910(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825eba94
	if (cr0.eq) goto loc_825EBA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1178
	sub_825D1178(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825eba94
	if (cr0.eq) goto loc_825EBA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa988
	sub_825FA988(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825eba94
	if (cr0.eq) goto loc_825EBA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d8ef8
	sub_825D8EF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825eba94
	if (cr0.eq) goto loc_825EBA94;
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21968(r31)
	PPC_STORE_U32(r31.u32 + 21968, r11.u32);
	// stw r11,21972(r31)
	PPC_STORE_U32(r31.u32 + 21972, r11.u32);
	// bl 0x825fad48
	sub_825FAD48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eb7b8
	sub_825EB7B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825eba94
	if (cr0.eq) goto loc_825EBA94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eade8
	sub_825EADE8(ctx, base);
	// stw r30,13916(r31)
	PPC_STORE_U32(r31.u32 + 13916, r30.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ebbe8
	if (cr6.eq) goto loc_825EBBE8;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x825ebbec
	goto loc_825EBBEC;
loc_825EBBE8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825EBBEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ebc20
	if (cr6.eq) goto loc_825EBC20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// ble cr6,0x825ebc10
	if (!cr6.gt) goto loc_825EBC10;
	// addi r10,r31,17128
	ctx.r10.s64 = r31.s64 + 17128;
	// addi r9,r31,17132
	ctx.r9.s64 = r31.s64 + 17132;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_825EBC10:
	// addi r10,r31,16968
	ctx.r10.s64 = r31.s64 + 16968;
	// addi r9,r31,21984
	ctx.r9.s64 = r31.s64 + 21984;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
loc_825EBC20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82605a60
	sub_82605A60(ctx, base);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,21996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 21996, temp.u32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,22000(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 22000, temp.u32);
	// bl 0x825eda70
	sub_825EDA70(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f1828
	sub_825F1828(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df1b8
	sub_825DF1B8(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// lwz r11,-19228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -19228);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825ebc94
	if (!cr6.eq) goto loc_825EBC94;
	// bl 0x8314d2bc
	__imp__VdIsHSIOTrainingSucceeded(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,-19228(r30)
	PPC_STORE_U32(r30.u32 + -19228, r11.u32);
loc_825EBC94:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825ebca8
	if (cr6.eq) goto loc_825EBCA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f2aa8
	sub_825F2AA8(ctx, base);
loc_825EBCA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EBCAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825EBCB0"))) PPC_WEAK_FUNC(sub_825EBCB0);
PPC_FUNC_IMPL(__imp__sub_825EBCB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825EBCB4"))) PPC_WEAK_FUNC(sub_825EBCB4);
PPC_FUNC_IMPL(__imp__sub_825EBCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EBCB8"))) PPC_WEAK_FUNC(sub_825EBCB8);
PPC_FUNC_IMPL(__imp__sub_825EBCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r9,26,6,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,1023
	cr6.compare<uint32_t>(ctx.r9.u32, 1023, xer);
	// ble cr6,0x825ebcdc
	if (!cr6.gt) goto loc_825EBCDC;
	// li r11,1023
	r11.s64 = 1023;
loc_825EBCDC:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// rlwinm r11,r11,1,15,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lhzx r11,r11,r5
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r5.u32);
	// lhzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,6,16,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFC0;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
}

__attribute__((alias("__imp__sub_825EBD04"))) PPC_WEAK_FUNC(sub_825EBD04);
PPC_FUNC_IMPL(__imp__sub_825EBD04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EBD08"))) PPC_WEAK_FUNC(sub_825EBD08);
PPC_FUNC_IMPL(__imp__sub_825EBD08) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825ebd64
	if (cr6.eq) goto loc_825EBD64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,7200(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 7200);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825ebd38
	if (cr6.gt) goto loc_825EBD38;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,7192(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7192);
	f0.f64 = double(temp.f32);
	// b 0x825ebd7c
	goto loc_825EBD7C;
loc_825EBD38:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,7188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7188);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f0,7184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7184);
	f0.f64 = double(temp.f32);
	// lfd f2,7176(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7176);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x825ebda8
	goto loc_825EBDA8;
loc_825EBD64:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,7168(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 7168);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825ebd84
	if (cr6.gt) goto loc_825EBD84;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,7160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7160);
	f0.f64 = double(temp.f32);
loc_825EBD7C:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x825ebda8
	goto loc_825EBDA8;
loc_825EBD84:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f2,7152(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 7152);
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,7144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7144);
	f0.f64 = double(temp.f32);
	// lfs f13,7188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7188);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
loc_825EBDA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825EBDB4"))) PPC_WEAK_FUNC(sub_825EBDB4);
PPC_FUNC_IMPL(__imp__sub_825EBDB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EBDB8"))) PPC_WEAK_FUNC(sub_825EBDB8);
PPC_FUNC_IMPL(__imp__sub_825EBDB8) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825ebe14
	if (cr6.eq) goto loc_825EBE14;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,7264(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 7264);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x825ebde8
	if (!cr6.lt) goto loc_825EBDE8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,7256(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7256);
	f0.f64 = double(temp.f32);
	// b 0x825ebe2c
	goto loc_825EBE2C;
loc_825EBDE8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,7252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7252);
	f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f0,7248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7248);
	f0.f64 = double(temp.f32);
	// lfd f2,7240(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7240);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x825ebe58
	goto loc_825EBE58;
loc_825EBE14:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f0,7232(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 7232);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x825ebe34
	if (!cr6.lt) goto loc_825EBE34;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,7224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7224);
	f0.f64 = double(temp.f32);
loc_825EBE2C:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x825ebe58
	goto loc_825EBE58;
loc_825EBE34:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfd f2,7216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 7216);
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,7208(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7208);
	f0.f64 = double(temp.f32);
	// lfs f13,7252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7252);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
loc_825EBE58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825EBE64"))) PPC_WEAK_FUNC(sub_825EBE64);
PPC_FUNC_IMPL(__imp__sub_825EBE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EBE68"))) PPC_WEAK_FUNC(sub_825EBE68);
PPC_FUNC_IMPL(__imp__sub_825EBE68) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// subfe r31,r11,r30
	temp.u8 = (~r11.u32 + r30.u32 < ~r11.u32) | (~r11.u32 + r30.u32 + xer.ca < xer.ca);
	r31.u64 = ~r11.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8314d2dc
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23472
	ctx.r10.s64 = ctx.r10.s64 + 23472;
	// addi r9,r9,-19176
	ctx.r9.s64 = ctx.r9.s64 + -19176;
	// rlwinm r8,r31,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r7,-19188
	ctx.r9.s64 = ctx.r7.s64 + -19188;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x825ebed8
	if (!cr6.eq) goto loc_825EBED8;
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// beq cr6,0x825ebfd8
	if (cr6.eq) goto loc_825EBFD8;
loc_825EBED8:
	// stfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// lfd f29,7288(r11)
	f29.u64 = PPC_LOAD_U64(r11.u32 + 7288);
	// addi r29,r28,-2
	r29.s64 = r28.s64 + -2;
	// lfd f30,7280(r10)
	f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7280);
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lfs f28,7272(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7272);
	f28.f64 = double(temp.f32);
	// b 0x825ebf14
	goto loc_825EBF14;
loc_825EBF0C:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825EBF14:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(f0.f64 * f28.f64));
	// bne cr6,0x825ebf44
	if (!cr6.eq) goto loc_825EBF44;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825ebd08
	sub_825EBD08(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825EBF44:
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825ebf80
	if (cr6.eq) goto loc_825EBF80;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x825ebf74
	if (cr6.eq) goto loc_825EBF74;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bne cr6,0x825ebf74
	if (!cr6.eq) goto loc_825EBF74;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825ebf68
	if (!cr6.eq) goto loc_825EBF68;
	// fdivs f2,f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 / ctx.f2.f64));
loc_825EBF68:
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x825ebf88
	goto loc_825EBF88;
loc_825EBF74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825ebdb8
	sub_825EBDB8(ctx, base);
	// b 0x825ebf88
	goto loc_825EBF88;
loc_825EBF80:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825ebd08
	sub_825EBD08(ctx, base);
loc_825EBF88:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x825ebf98
	if (cr6.eq) goto loc_825EBF98;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ebd08
	sub_825EBD08(ctx, base);
loc_825EBF98:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64 + f29.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825ebfb8
	if (!cr6.lt) goto loc_825EBFB8;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ebfc4
	goto loc_825EBFC4;
loc_825EBFB8:
	// cmpwi cr6,r11,1023
	cr6.compare<int32_t>(r11.s32, 1023, xer);
	// ble cr6,0x825ebfc4
	if (!cr6.gt) goto loc_825EBFC4;
	// li r11,1023
	r11.s64 = 1023;
loc_825EBFC4:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sthu r11,2(r29)
	ea = 2 + r29.u32;
	PPC_STORE_U16(ea, r11.u16);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	cr6.compare<int32_t>(r31.s32, 1024, xer);
	// blt cr6,0x825ebf0c
	if (cr6.lt) goto loc_825EBF0C;
loc_825EBFD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825EBFE8"))) PPC_WEAK_FUNC(sub_825EBFE8);
PPC_FUNC_IMPL(__imp__sub_825EBFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825EBFEC"))) PPC_WEAK_FUNC(sub_825EBFEC);
PPC_FUNC_IMPL(__imp__sub_825EBFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EBFF0"))) PPC_WEAK_FUNC(sub_825EBFF0);
PPC_FUNC_IMPL(__imp__sub_825EBFF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825ebe68
	sub_825EBE68(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r31,1022
	ctx.r10.s64 = r31.s64 + 1022;
	// addi r11,r30,512
	r11.s64 = r30.s64 + 512;
	// subf r8,r30,r31
	ctx.r8.s64 = r31.s64 - r30.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825EC028:
	// lhz r9,-1022(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -1022);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-512(r11)
	PPC_STORE_U16(r11.u32 + -512, ctx.r9.u16);
	// lhzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,512(r11)
	PPC_STORE_U16(r11.u32 + 512, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x825ec028
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC028;
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

__attribute__((alias("__imp__sub_825EC080"))) PPC_WEAK_FUNC(sub_825EC080);
PPC_FUNC_IMPL(__imp__sub_825EC080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC084"))) PPC_WEAK_FUNC(sub_825EC084);
PPC_FUNC_IMPL(__imp__sub_825EC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC088"))) PPC_WEAK_FUNC(sub_825EC088);
PPC_FUNC_IMPL(__imp__sub_825EC088) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825ebe68
	sub_825EBE68(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r30,512
	ctx.r8.s64 = r30.s64 + 512;
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// li r6,128
	ctx.r6.s64 = 128;
loc_825EC0C0:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r8,-512
	ctx.r3.s64 = ctx.r8.s64 + -512;
	// bl 0x825ebcb8
	sub_825EBCB8(ctx, base);
	// add r4,r31,r8
	ctx.r4.u64 = r31.u64 + ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x825ebcb8
	sub_825EBCB8(ctx, base);
	// addi r4,r7,1024
	ctx.r4.s64 = ctx.r7.s64 + 1024;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// bl 0x825ebcb8
	sub_825EBCB8(ctx, base);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x825ec0c0
	if (!cr0.eq) goto loc_825EC0C0;
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

__attribute__((alias("__imp__sub_825EC108"))) PPC_WEAK_FUNC(sub_825EC108);
PPC_FUNC_IMPL(__imp__sub_825EC108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC10C"))) PPC_WEAK_FUNC(sub_825EC10C);
PPC_FUNC_IMPL(__imp__sub_825EC10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC110"))) PPC_WEAK_FUNC(sub_825EC110);
PPC_FUNC_IMPL(__imp__sub_825EC110) {
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
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6433
	r11.u64 = r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r10,256
	ctx.r10.s64 = 256;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r30,1024
	r11.s64 = r30.s64 + 1024;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_825EC16C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825ec194
	if (cr6.eq) goto loc_825EC194;
	// lhz r9,-1024(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -1024);
	// lhz r7,-512(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -512);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwimi r7,r9,10,6,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0x3FF0000) | (ctx.r7.u64 & 0xFFFFFFFFFC00FFFF);
	// rlwinm r9,r6,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r7,4,2,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x3FFFFC00;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// b 0x825ec198
	goto loc_825EC198;
loc_825EC194:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825EC198:
	// li r7,6437
	ctx.r7.s64 = 6437;
	// lis r6,-16379
	ctx.r6.s64 = -1073414144;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// li r5,7
	ctx.r5.s64 = 7;
	// ori r6,r6,17664
	ctx.r6.u64 = ctx.r6.u64 | 17664;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r29,6434
	r29.s64 = 6434;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bdnz 0x825ec16c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC16C;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825EC1F8"))) PPC_WEAK_FUNC(sub_825EC1F8);
PPC_FUNC_IMPL(__imp__sub_825EC1F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825EC1FC"))) PPC_WEAK_FUNC(sub_825EC1FC);
PPC_FUNC_IMPL(__imp__sub_825EC1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC200"))) PPC_WEAK_FUNC(sub_825EC200);
PPC_FUNC_IMPL(__imp__sub_825EC200) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1413
	ctx.r4.s64 = 1413;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,6433
	r11.u64 = r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,514
	r11.s64 = r31.s64 + 514;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_825EC264:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// ori r8,r8,39204
	ctx.r8.u64 = ctx.r8.u64 | 39204;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// beq cr6,0x825ec2a8
	if (cr6.eq) goto loc_825EC2A8;
	// lhz r7,-512(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -512);
	// lhz r8,-514(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -514);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,510(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 510);
	// lhz r7,512(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 512);
	// rlwimi r8,r7,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x825ec2b8
	goto loc_825EC2B8;
loc_825EC2A8:
	// li r8,512
	ctx.r8.s64 = 512;
	// li r7,64
	ctx.r7.s64 = 64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
loc_825EC2B8:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lis r8,-16379
	ctx.r8.s64 = -1073414144;
	// li r7,7
	ctx.r7.s64 = 7;
	// ori r8,r8,17664
	ctx.r8.u64 = ctx.r8.u64 | 17664;
	// li r6,6436
	ctx.r6.s64 = 6436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,6434
	ctx.r3.s64 = 6434;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// stwu r8,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r4.u32 = ea;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x825ec264
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC264;
	// stw r8,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_825EC328"))) PPC_WEAK_FUNC(sub_825EC328);
PPC_FUNC_IMPL(__imp__sub_825EC328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC32C"))) PPC_WEAK_FUNC(sub_825EC32C);
PPC_FUNC_IMPL(__imp__sub_825EC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC330"))) PPC_WEAK_FUNC(sub_825EC330);
PPC_FUNC_IMPL(__imp__sub_825EC330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1022
	r11.s64 = ctx.r3.s64 + 1022;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825EC340:
	// li r9,255
	ctx.r9.s64 = 255;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-1022(r11)
	PPC_STORE_U16(r11.u32 + -1022, ctx.r9.u16);
	// sth r9,-510(r11)
	PPC_STORE_U16(r11.u32 + -510, ctx.r9.u16);
	// sthu r9,2(r11)
	ea = 2 + r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	r11.u32 = ea;
	// bdnz 0x825ec340
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC340;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_825EC370"))) PPC_WEAK_FUNC(sub_825EC370);
PPC_FUNC_IMPL(__imp__sub_825EC370) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ebff0
	sub_825EBFF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EC374"))) PPC_WEAK_FUNC(sub_825EC374);
PPC_FUNC_IMPL(__imp__sub_825EC374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC378"))) PPC_WEAK_FUNC(sub_825EC378);
PPC_FUNC_IMPL(__imp__sub_825EC378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,128
	ctx.r9.s64 = 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1022
	r11.s64 = ctx.r3.s64 + 1022;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,127
	ctx.r9.s64 = 127;
loc_825EC38C:
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r8,-1022(r11)
	PPC_STORE_U16(r11.u32 + -1022, ctx.r8.u16);
	// divwu r7,r10,r9
	ctx.r7.u32 = ctx.r10.u32 / ctx.r9.u32;
	// sth r8,-510(r11)
	PPC_STORE_U16(r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r8.u16);
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,-1020(r11)
	PPC_STORE_U16(r11.u32 + -1020, ctx.r8.u16);
	// sth r8,-508(r11)
	PPC_STORE_U16(r11.u32 + -508, ctx.r8.u16);
	// sthu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	r11.u32 = ea;
	// bdnz 0x825ec38c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC38C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
}

__attribute__((alias("__imp__sub_825EC3D4"))) PPC_WEAK_FUNC(sub_825EC3D4);
PPC_FUNC_IMPL(__imp__sub_825EC3D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ec088
	sub_825EC088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825EC3D8"))) PPC_WEAK_FUNC(sub_825EC3D8);
PPC_FUNC_IMPL(__imp__sub_825EC3D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC3DC"))) PPC_WEAK_FUNC(sub_825EC3DC);
PPC_FUNC_IMPL(__imp__sub_825EC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC3E0"))) PPC_WEAK_FUNC(sub_825EC3E0);
PPC_FUNC_IMPL(__imp__sub_825EC3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,128
	ctx.r9.s64 = 128;
	// addi r11,r4,1022
	r11.s64 = ctx.r4.s64 + 1022;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// subf r7,r3,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825EC3F4:
	// lhz r9,-1022(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -1022);
	// sth r9,-2(r10)
	PPC_STORE_U16(ctx.r10.u32 + -2, ctx.r9.u16);
	// lhzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// lhz r9,-1022(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -1022);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r9,-510(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -510);
	// sth r9,510(r10)
	PPC_STORE_U16(ctx.r10.u32 + 510, ctx.r9.u16);
	// lhz r8,-510(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -510);
	// lhz r9,-508(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -508);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r9,512(r10)
	PPC_STORE_U16(ctx.r10.u32 + 512, ctx.r9.u16);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r9,1022(r10)
	PPC_STORE_U16(ctx.r10.u32 + 1022, ctx.r9.u16);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	r11.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,1024(r10)
	PPC_STORE_U16(ctx.r10.u32 + 1024, ctx.r9.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825ec3f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EC3F4;
}

__attribute__((alias("__imp__sub_825EC448"))) PPC_WEAK_FUNC(sub_825EC448);
PPC_FUNC_IMPL(__imp__sub_825EC448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC44C"))) PPC_WEAK_FUNC(sub_825EC44C);
PPC_FUNC_IMPL(__imp__sub_825EC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC450"))) PPC_WEAK_FUNC(sub_825EC450);
PPC_FUNC_IMPL(__imp__sub_825EC450) {
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
	// addi r30,r3,22216
	r30.s64 = ctx.r3.s64 + 22216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,23752(r31)
	PPC_STORE_U32(r31.u32 + 23752, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec110
	sub_825EC110(ctx, base);
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

__attribute__((alias("__imp__sub_825EC4A4"))) PPC_WEAK_FUNC(sub_825EC4A4);
PPC_FUNC_IMPL(__imp__sub_825EC4A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC4A8"))) PPC_WEAK_FUNC(sub_825EC4A8);
PPC_FUNC_IMPL(__imp__sub_825EC4A8) {
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
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,22160
	ctx.r3.s64 = ctx.r3.s64 + 22160;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,22216
	ctx.r3.s64 = r31.s64 + 22216;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r30,r11,262
	r30.u64 = r11.u64 | 262;
	// lwz r11,22088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22088);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x825ec510
	if (cr6.eq) goto loc_825EC510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec450
	sub_825EC450(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d2268
	sub_825D2268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825EC510:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825EC528"))) PPC_WEAK_FUNC(sub_825EC528);
PPC_FUNC_IMPL(__imp__sub_825EC528) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC52C"))) PPC_WEAK_FUNC(sub_825EC52C);
PPC_FUNC_IMPL(__imp__sub_825EC52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC530"))) PPC_WEAK_FUNC(sub_825EC530);
PPC_FUNC_IMPL(__imp__sub_825EC530) {
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
	// lwz r4,22088(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22088);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d2268
	sub_825D2268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,22104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 22104);
	// lwz r5,22096(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22096);
	// lwz r4,22092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22092);
	// bl 0x825f15b0
	sub_825F15B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,22108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22108);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,22088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22088);
	// bl 0x825d1f10
	sub_825D1F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EC590"))) PPC_WEAK_FUNC(sub_825EC590);
PPC_FUNC_IMPL(__imp__sub_825EC590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC594"))) PPC_WEAK_FUNC(sub_825EC594);
PPC_FUNC_IMPL(__imp__sub_825EC594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC598"))) PPC_WEAK_FUNC(sub_825EC598);
PPC_FUNC_IMPL(__imp__sub_825EC598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,10280
	r11.s64 = 673710080;
	// lwz r10,22088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22088);
	// lwz r8,22092(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22092);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// ori r11,r11,310
	r11.u64 = r11.u64 | 310;
	// lwz r7,22096(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22096);
	// ori r6,r9,6144
	ctx.r6.u64 = ctx.r9.u64 | 6144;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// ble cr6,0x825ec5d8
	if (!cr6.gt) goto loc_825EC5D8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x825ec5ec
	goto loc_825EC5EC;
loc_825EC5D8:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// subfc r10,r8,r10
	xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_825EC5EC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825ec628
	if (!cr6.eq) goto loc_825EC628;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r7,10872
	ctx.r9.s64 = ctx.r7.s64 + 10872;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,10868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10868);
	f0.f64 = double(temp.f32);
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,10864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10864);
	ctx.f13.f64 = double(temp.f32);
	// b 0x825ec664
	goto loc_825EC664;
loc_825EC628:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r7,10872
	ctx.r9.s64 = ctx.r7.s64 + 10872;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,10864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10860(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10860);
	f0.f64 = double(temp.f32);
loc_825EC664:
	// clrldi r11,r8,32
	r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// fmuls f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f11,10856(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 10856);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,4560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4560);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f0,f10,f11
	f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f12.u32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
}

__attribute__((alias("__imp__sub_825EC6B4"))) PPC_WEAK_FUNC(sub_825EC6B4);
PPC_FUNC_IMPL(__imp__sub_825EC6B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC6B8"))) PPC_WEAK_FUNC(sub_825EC6B8);
PPC_FUNC_IMPL(__imp__sub_825EC6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,11071(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC6C8"))) PPC_WEAK_FUNC(sub_825EC6C8);
PPC_FUNC_IMPL(__imp__sub_825EC6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x825ec6fc
	if (!cr6.eq) goto loc_825EC6FC;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825ec71c
	goto loc_825EC71C;
loc_825EC6FC:
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f0,10920(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 10920);
	// fmul f31,f1,f0
	f31.f64 = ctx.f1.f64 * f0.f64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
loc_825EC71C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EC730"))) PPC_WEAK_FUNC(sub_825EC730);
PPC_FUNC_IMPL(__imp__sub_825EC730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC734"))) PPC_WEAK_FUNC(sub_825EC734);
PPC_FUNC_IMPL(__imp__sub_825EC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC738"))) PPC_WEAK_FUNC(sub_825EC738);
PPC_FUNC_IMPL(__imp__sub_825EC738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x825ec748
	if (!cr6.lt) goto loc_825EC748;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825EC748:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bne cr6,0x825ec75c
	if (!cr6.eq) goto loc_825EC75C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_825EC75C:
	// cmpd cr6,r3,r4
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r4.s64, xer);
	// blt cr6,0x825ec770
	if (cr6.lt) goto loc_825EC770;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_825EC770:
	// lis r11,0
	r11.s64 = 0;
	// tdllei r4,0
	if (ctx.r4.u64 <= 0) __builtin_debugtrap();
	// ori r11,r11,65534
	r11.u64 = r11.u64 | 65534;
	// mulld r10,r3,r11
	ctx.r10.s64 = ctx.r3.s64 * r11.s64;
	// rotldi r11,r10,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r4
	ctx.r10.s64 = ctx.r10.s64 / ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r11,r4,r11
	r11.u64 = ctx.r4.u64 & ~r11.u64;
	// tdlgei r11,-1
	if (r11.u64 >= 4294967295) __builtin_debugtrap();
}

__attribute__((alias("__imp__sub_825EC798"))) PPC_WEAK_FUNC(sub_825EC798);
PPC_FUNC_IMPL(__imp__sub_825EC798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC79C"))) PPC_WEAK_FUNC(sub_825EC79C);
PPC_FUNC_IMPL(__imp__sub_825EC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC7A0"))) PPC_WEAK_FUNC(sub_825EC7A0);
PPC_FUNC_IMPL(__imp__sub_825EC7A0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825ec7c4
	if (!cr6.eq) goto loc_825EC7C4;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x825ec830
	goto loc_825EC830;
loc_825EC7C4:
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,107
	cr6.compare<uint32_t>(r11.u32, 107, xer);
	// bgt cr6,0x825ec810
	if (cr6.gt) goto loc_825EC810;
	// beq cr6,0x825ec7fc
	if (cr6.eq) goto loc_825EC7FC;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// beq cr6,0x825ec7fc
	if (cr6.eq) goto loc_825EC7FC;
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(r11.u32, 98, xer);
	// ble cr6,0x825ec82c
	if (!cr6.gt) goto loc_825EC82C;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// ble cr6,0x825ec7fc
	if (!cr6.gt) goto loc_825EC7FC;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(r11.u32, 101, xer);
	// ble cr6,0x825ec82c
	if (!cr6.gt) goto loc_825EC82C;
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bgt cr6,0x825ec82c
	if (cr6.gt) goto loc_825EC82C;
loc_825EC7FC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,10928
	ctx.r4.s64 = r11.s64 + 10928;
	// bl 0x8314d20c
	__imp__sprintf(ctx, base);
	// b 0x825ec82c
	goto loc_825EC82C;
loc_825EC810:
	// cmplwi cr6,r11,109
	cr6.compare<uint32_t>(r11.u32, 109, xer);
	// beq cr6,0x825ec824
	if (cr6.eq) goto loc_825EC824;
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x825ec82c
	if (!cr6.eq) goto loc_825EC82C;
	// b 0x825ec7fc
	goto loc_825EC7FC;
loc_825EC824:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x825f2ad0
	sub_825F2AD0(ctx, base);
loc_825EC82C:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_825EC830:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825EC83C"))) PPC_WEAK_FUNC(sub_825EC83C);
PPC_FUNC_IMPL(__imp__sub_825EC83C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC840"))) PPC_WEAK_FUNC(sub_825EC840);
PPC_FUNC_IMPL(__imp__sub_825EC840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ec8a8
	if (cr6.eq) goto loc_825EC8A8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,84
	ctx.r3.s64 = 84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825ec8ac
	goto loc_825EC8AC;
loc_825EC8A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EC8AC:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EC8D0"))) PPC_WEAK_FUNC(sub_825EC8D0);
PPC_FUNC_IMPL(__imp__sub_825EC8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC8D4"))) PPC_WEAK_FUNC(sub_825EC8D4);
PPC_FUNC_IMPL(__imp__sub_825EC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC8D8"))) PPC_WEAK_FUNC(sub_825EC8D8);
PPC_FUNC_IMPL(__imp__sub_825EC8D8) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ec904
	if (!cr6.gt) goto loc_825EC904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825EC904:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	r11.u64 = r11.u64 | 15104;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EC92C"))) PPC_WEAK_FUNC(sub_825EC92C);
PPC_FUNC_IMPL(__imp__sub_825EC92C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EC930"))) PPC_WEAK_FUNC(sub_825EC930);
PPC_FUNC_IMPL(__imp__sub_825EC930) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r5,3
	ctx.r4.s64 = ctx.r5.s64 + 3;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825ec9a4
	if (cr0.eq) goto loc_825EC9A4;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// clrlwi r9,r31,18
	ctx.r9.u64 = r31.u32 & 0x3FFF;
	// rlwimi r10,r11,16,2,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3FFF0000) | (ctx.r10.u64 & 0xFFFFFFFFC000FFFF);
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stwu r9,4(r31)
	ea = 4 + r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r31.u32 = ea;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_825EC9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825EC9A8"))) PPC_WEAK_FUNC(sub_825EC9A8);
PPC_FUNC_IMPL(__imp__sub_825EC9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825EC9AC"))) PPC_WEAK_FUNC(sub_825EC9AC);
PPC_FUNC_IMPL(__imp__sub_825EC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EC9B0"))) PPC_WEAK_FUNC(sub_825EC9B0);
PPC_FUNC_IMPL(__imp__sub_825EC9B0) {
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
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r31,r4,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// subf r10,r31,r4
	ctx.r10.s64 = ctx.r4.s64 - r31.s64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// subf r11,r9,r30
	r11.s64 = r30.s64 - ctx.r9.s64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// subf r27,r28,r11
	r27.s64 = r11.s64 - r28.s64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825eca80
	if (cr0.eq) goto loc_825ECA80;
	// addi r11,r31,4096
	r11.s64 = r31.s64 + 4096;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// beq cr6,0x825eca40
	if (cr6.eq) goto loc_825ECA40;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_825ECA40:
	// rlwinm r30,r29,4,0,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825eca78
	if (cr6.eq) goto loc_825ECA78;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
loc_825ECA78:
	// stw r31,48(r25)
	PPC_STORE_U32(r25.u32 + 48, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825ECA80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825ECA84"))) PPC_WEAK_FUNC(sub_825ECA84);
PPC_FUNC_IMPL(__imp__sub_825ECA84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825ECA88"))) PPC_WEAK_FUNC(sub_825ECA88);
PPC_FUNC_IMPL(__imp__sub_825ECA88) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ecab8
	if (!cr6.gt) goto loc_825ECAB8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825ECAB8:
	// lwz r11,13092(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13092);
	// addi r10,r29,3072
	ctx.r10.s64 = r29.s64 + 3072;
	// oris r11,r11,49158
	r11.u64 = r11.u64 | 3221618688;
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// ori r11,r11,22016
	r11.u64 = r11.u64 | 22016;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825ECB44"))) PPC_WEAK_FUNC(sub_825ECB44);
PPC_FUNC_IMPL(__imp__sub_825ECB44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ECB48"))) PPC_WEAK_FUNC(sub_825ECB48);
PPC_FUNC_IMPL(__imp__sub_825ECB48) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ecb74
	if (!cr6.gt) goto loc_825ECB74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825ECB74:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,20480
	r11.u64 = r11.u64 | 20480;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ECBAC"))) PPC_WEAK_FUNC(sub_825ECBAC);
PPC_FUNC_IMPL(__imp__sub_825ECBAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECBB0"))) PPC_WEAK_FUNC(sub_825ECBB0);
PPC_FUNC_IMPL(__imp__sub_825ECBB0) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ecbe0
	if (!cr6.gt) goto loc_825ECBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825ECBE0:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// ori r11,r11,13824
	r11.u64 = r11.u64 | 13824;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// ori r11,r10,128
	r11.u64 = ctx.r10.u64 | 128;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825ECC04"))) PPC_WEAK_FUNC(sub_825ECC04);
PPC_FUNC_IMPL(__imp__sub_825ECC04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825ECC08"))) PPC_WEAK_FUNC(sub_825ECC08);
PPC_FUNC_IMPL(__imp__sub_825ECC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,22084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22084);
	// sradi r11,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	r11.s64 = r11.s64 >> 10;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ECC48"))) PPC_WEAK_FUNC(sub_825ECC48);
PPC_FUNC_IMPL(__imp__sub_825ECC48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECC4C"))) PPC_WEAK_FUNC(sub_825ECC4C);
PPC_FUNC_IMPL(__imp__sub_825ECC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ECC50"))) PPC_WEAK_FUNC(sub_825ECC50);
PPC_FUNC_IMPL(__imp__sub_825ECC50) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ecc78
	if (!cr6.gt) goto loc_825ECC78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825ECC78:
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
	// li r27,0
	r27.s64 = 0;
	// mr r28,r30
	r28.u64 = r30.u64;
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x825ecd18
	if (!cr6.gt) goto loc_825ECD18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825ECD18:
	// li r11,8452
	r11.s64 = 8452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	r11.s64 = 8706;
	// li r9,8705
	ctx.r9.s64 = 8705;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,8962
	ctx.r7.s64 = 8962;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,8712
	r30.s64 = 8712;
	// li r29,4
	r29.s64 = 4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r28,8707
	r28.s64 = 8707;
	// li r11,0
	r11.s64 = 0;
	// li r27,8578
	r27.s64 = 8578;
	// li r26,-1
	r26.s64 = -1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
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
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825ECDA0"))) PPC_WEAK_FUNC(sub_825ECDA0);
PPC_FUNC_IMPL(__imp__sub_825ECDA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825ECDA4"))) PPC_WEAK_FUNC(sub_825ECDA4);
PPC_FUNC_IMPL(__imp__sub_825ECDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ECDA8"))) PPC_WEAK_FUNC(sub_825ECDA8);
PPC_FUNC_IMPL(__imp__sub_825ECDA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x825ecdd8
	if (!cr6.eq) goto loc_825ECDD8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2088(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2088);
	// b 0x825ecde0
	goto loc_825ECDE0;
loc_825ECDD8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
loc_825ECDE0:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r10,10
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 10;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r10,22084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22084);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ece2c
	if (cr6.eq) goto loc_825ECE2C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,93
	ctx.r3.s64 = 93;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825ECE2C:
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

__attribute__((alias("__imp__sub_825ECE40"))) PPC_WEAK_FUNC(sub_825ECE40);
PPC_FUNC_IMPL(__imp__sub_825ECE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ECE44"))) PPC_WEAK_FUNC(sub_825ECE44);
PPC_FUNC_IMPL(__imp__sub_825ECE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ECE48"))) PPC_WEAK_FUNC(sub_825ECE48);
PPC_FUNC_IMPL(__imp__sub_825ECE48) {
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
	// lwz r11,22068(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22068);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16968);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825ece70
	if (!cr6.eq) goto loc_825ECE70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825ece9c
	goto loc_825ECE9C;
loc_825ECE70:
	// bl 0x8314d09c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825ece98
	if (cr6.eq) goto loc_825ECE98;
	// lwz r11,22056(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22056);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825ecea4
	if (cr6.eq) goto loc_825ECEA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ece98
	if (!cr6.eq) goto loc_825ECE98;
	// li r11,1
	r11.s64 = 1;
	// stw r11,22056(r31)
	PPC_STORE_U32(r31.u32 + 22056, r11.u32);
loc_825ECE98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825ECE9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825ECEA4:
	// lwz r10,22064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22064);
	// lwz r11,22060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22060);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825ece98
	if (cr6.eq) goto loc_825ECE98;
	// lwz r10,22048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22048);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825e7208
	sub_825E7208(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825ece98
	if (!cr0.eq) goto loc_825ECE98;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r30,r29,-14996
	r30.s64 = r29.s64 + -14996;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r30,484
	ctx.r4.s64 = r30.s64 + 484;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,-14996(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -14996);
	// lwz r10,22048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22048);
	// addi r4,r30,484
	ctx.r4.s64 = r30.s64 + 484;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, r11.u32);
	// lwz r11,22060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22060);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825e9080
	sub_825E9080(ctx, base);
	// lwz r11,22060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22060);
	// lwz r10,22052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22052);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,-14996(r29)
	PPC_STORE_U32(r29.u32 + -14996, ctx.r10.u32);
	// bne cr6,0x825ecf3c
	if (!cr6.eq) goto loc_825ECF3C;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ecf40
	goto loc_825ECF40;
loc_825ECF3C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825ECF40:
	// lwz r10,16968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,22060(r31)
	PPC_STORE_U32(r31.u32 + 22060, r11.u32);
	// stw r10,22068(r31)
	PPC_STORE_U32(r31.u32 + 22068, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825ECF50"))) PPC_WEAK_FUNC(sub_825ECF50);
PPC_FUNC_IMPL(__imp__sub_825ECF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ece9c
	// ERROR 825ECE9C
	return;
}

__attribute__((alias("__imp__sub_825ECF54"))) PPC_WEAK_FUNC(sub_825ECF54);
PPC_FUNC_IMPL(__imp__sub_825ECF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ECF58"))) PPC_WEAK_FUNC(sub_825ECF58);
PPC_FUNC_IMPL(__imp__sub_825ECF58) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,21992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21992);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r7,21988(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21988);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// or r11,r6,r7
	r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825ECF8C:
	// stdu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x825ecf8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825ECF8C;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// sradi r7,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = r11.s64 >> 32;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r11,22032(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22032);
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
	// lwz r4,21984(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21984);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// lwz r3,16968(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16968);
	// lwz r31,22024(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22024);
	// lfs f0,22000(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22000);
	f0.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r30,22028(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22028);
	// lwz r29,23760(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23760);
	// lfs f13,21996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21996);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,11024(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r7,r27,r28
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(r27.u32 + r28.u32));
	// lwbrx r10,r10,r28
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + r28.u32));
	// lwbrx r5,r8,r28
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + r28.u32));
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825ed084
	if (cr6.eq) goto loc_825ED084;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpldi cr6,r8,0
	cr6.compare<uint64_t>(ctx.r8.u64, 0, xer);
	// stw r11,22032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22032, r11.u32);
	// beq cr6,0x825ed084
	if (cr6.eq) goto loc_825ED084;
	// cmpldi cr6,r5,0
	cr6.compare<uint64_t>(ctx.r5.u64, 0, xer);
	// beq cr6,0x825ed084
	if (cr6.eq) goto loc_825ED084;
	// li r11,1
	r11.s64 = 1;
	// cmpld cr6,r8,r5
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r5.u64, xer);
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x825ed064
	if (cr6.gt) goto loc_825ED064;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
loc_825ED064:
	// cmpld cr6,r10,r8
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, xer);
	// bgt cr6,0x825ed070
	if (cr6.gt) goto loc_825ED070;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_825ED070:
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// rlwimi r3,r6,0,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_825ED084:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed364
	if (cr0.eq) goto loc_825ED364;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-14996
	ctx.r9.s64 = r11.s64 + -14996;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-14996(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14996);
	// ld r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4);
	// ld r8,484(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 484);
	// ld r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 12);
	// ld r6,492(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 492);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - r11.s64;
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwimi r11,r3,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// ld r11,124(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 124);
	// ld r10,604(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 604);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ld r7,132(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 132);
	// ld r6,612(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 612);
	// subf r29,r11,r10
	r29.s64 = ctx.r10.s64 - r11.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r7,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r7.s64;
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// ld r5,620(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 620);
	// ld r31,140(r9)
	r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 140);
	// rlwimi r30,r3,16,0,15
	r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// subf r11,r5,r29
	r11.s64 = r29.s64 - ctx.r5.s64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// subf r3,r31,r5
	ctx.r3.s64 = ctx.r5.s64 - r31.s64;
	// bl 0x825ec738
	sub_825EC738(ctx, base);
	// ld r11,444(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 444);
	// ld r10,924(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 924);
	// rlwimi r6,r3,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// ld r7,436(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 436);
	// lis r5,0
	ctx.r5.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// ld r11,916(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 916);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r5,r3,43689
	ctx.r5.u64 = ctx.r3.u64 | 43689;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x825ed180
	if (!cr6.lt) goto loc_825ED180;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ed1b0
	goto loc_825ED1B0;
loc_825ED180:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed190
	if (!cr6.eq) goto loc_825ED190;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// b 0x825ed1b0
	goto loc_825ED1B0;
loc_825ED190:
	// mulld r10,r11,r5
	ctx.r10.s64 = r11.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r10,-1
	if (ctx.r10.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED1B0:
	// ld r10,452(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 452);
	// ld r7,932(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 932);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwimi r11,r6,0,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// bge cr6,0x825ed1d4
	if (!cr6.lt) goto loc_825ED1D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ed204
	goto loc_825ED204;
loc_825ED1D4:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed1e4
	if (!cr6.eq) goto loc_825ED1E4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x825ed204
	goto loc_825ED204;
loc_825ED1E4:
	// mulld r7,r10,r5
	ctx.r7.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 / ctx.r8.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r7,-1
	if (ctx.r7.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED204:
	// ld r7,236(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 236);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,716(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 716);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// bge cr6,0x825ed228
	if (!cr6.lt) goto loc_825ED228;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ed258
	goto loc_825ED258;
loc_825ED228:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed238
	if (!cr6.eq) goto loc_825ED238;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// b 0x825ed258
	goto loc_825ED258;
loc_825ED238:
	// mulld r10,r10,r5
	ctx.r10.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r10,-1
	if (ctx.r10.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED258:
	// ld r10,92(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 92);
	// ld r7,572(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 572);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwimi r11,r6,0,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// bge cr6,0x825ed27c
	if (!cr6.lt) goto loc_825ED27C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ed2ac
	goto loc_825ED2AC;
loc_825ED27C:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed28c
	if (!cr6.eq) goto loc_825ED28C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x825ed2ac
	goto loc_825ED2AC;
loc_825ED28C:
	// mulld r7,r10,r5
	ctx.r7.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r7,r7,r8
	ctx.r7.s64 = ctx.r7.s64 / ctx.r8.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// andc r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r7,-1
	if (ctx.r7.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED2AC:
	// ld r7,460(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 460);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// ld r6,940(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 940);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rldicr r11,r10,1,62
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x825ed2d4
	if (!cr6.lt) goto loc_825ED2D4;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ed304
	goto loc_825ED304;
loc_825ED2D4:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed2e4
	if (!cr6.eq) goto loc_825ED2E4;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// b 0x825ed304
	goto loc_825ED304;
loc_825ED2E4:
	// mulld r10,r11,r5
	ctx.r10.s64 = r11.s64 * ctx.r5.s64;
	// rotldi r11,r10,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 / ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// andc r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r10,-1
	if (ctx.r10.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED304:
	// ld r10,468(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 468);
	// ld r9,948(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 948);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwimi r11,r7,0,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// bge cr6,0x825ed32c
	if (!cr6.lt) goto loc_825ED32C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825ed35c
	goto loc_825ED35C;
loc_825ED32C:
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x825ed33c
	if (!cr6.eq) goto loc_825ED33C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x825ed35c
	goto loc_825ED35C;
loc_825ED33C:
	// mulld r9,r10,r5
	ctx.r9.s64 = ctx.r10.s64 * ctx.r5.s64;
	// rotldi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1);
	// divd r9,r9,r8
	ctx.r9.s64 = ctx.r9.s64 / ctx.r8.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// andc r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdlgei r9,-1
	if (ctx.r9.u64 >= 4294967295) __builtin_debugtrap();
loc_825ED35C:
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x825ed384
	goto loc_825ED384;
loc_825ED364:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r11,-1
	r11.s64 = -1;
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
loc_825ED384:
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lis r3,17459
	ctx.r3.s64 = 1144193024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r3,r3,25703
	ctx.r3.u64 = ctx.r3.u64 | 25703;
	// bl 0x82606f38
	sub_82606F38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825ED3A0"))) PPC_WEAK_FUNC(sub_825ED3A0);
PPC_FUNC_IMPL(__imp__sub_825ED3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825ED3A4"))) PPC_WEAK_FUNC(sub_825ED3A4);
PPC_FUNC_IMPL(__imp__sub_825ED3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ED3A8"))) PPC_WEAK_FUNC(sub_825ED3A8);
PPC_FUNC_IMPL(__imp__sub_825ED3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplwi cr6,r4,18
	cr6.compare<uint32_t>(ctx.r4.u32, 18, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bgt cr6,0x825ed864
	if (cr6.gt) goto loc_825ED864;
	// lis r12,-32253
	r12.s64 = -2113732608;
	// rlwinm r0,r31,1,0,30
	r0.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,10816
	r12.s64 = r12.s64 + 10816;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32161
	r12.s64 = -2107703296;
	// addi r12,r12,-11260
	r12.s64 = r12.s64 + -11260;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lwz r11,21984(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	// lfs f0,22000(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 22000);
	f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x825ed868
	goto loc_825ED868;
	// lwz r11,21984(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,21996(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21996);
	f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// b 0x825ed868
	goto loc_825ED868;
	// lwz r11,16968(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16968);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_825ED45C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// b 0x825ed868
	goto loc_825ED868;
	// lwz r11,22024(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22024);
	// lwz r9,21984(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
loc_825ED494:
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f12,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
loc_825ED49C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4028(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4028);
	f0.f64 = double(temp.f32);
loc_825ED4A4:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825ed4b8
	if (!cr6.lt) goto loc_825ED4B8;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x825ed4c4
	goto loc_825ED4C4;
loc_825ED4B8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x825ed4c4
	if (cr6.gt) goto loc_825ED4C4;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_825ED4C4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// b 0x825ed868
	goto loc_825ED868;
	// lwz r11,21984(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	// lwz r9,22028(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22028);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
loc_825ED4F0:
	// frsp f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// b 0x825ed494
	goto loc_825ED494;
	// lwz r11,21984(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21984);
	// lwz r9,22028(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22028);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r7,22024(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22024);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// b 0x825ed4f0
	goto loc_825ED4F0;
	// lwz r11,22032(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22032);
	// lwz r8,11024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r31,r7,r8
	r31.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32));
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// lwbrx r30,r10,r8
	r30.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32));
	// lwbrx r10,r9,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32));
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// stw r11,22032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22032, r11.u32);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// li r11,1
	r11.s64 = 1;
	// cmpld cr6,r10,r30
	cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, xer);
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x825ed5ac
	if (cr6.gt) goto loc_825ED5AC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_825ED5AC:
	// cmpld cr6,r31,r10
	cr6.compare<uint64_t>(r31.u64, ctx.r10.u64, xer);
	// bgt cr6,0x825ed5b8
	if (cr6.gt) goto loc_825ED5B8;
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
loc_825ED5B8:
	// subf r3,r10,r31
	ctx.r3.s64 = r31.s64 - ctx.r10.s64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// subf r3,r30,r31
	ctx.r3.s64 = r31.s64 - r30.s64;
	// b 0x825ed698
	goto loc_825ED698;
	// lwz r11,23760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23760);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x825ed45c
	goto loc_825ED45C;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-14996
	ctx.r7.s64 = r11.s64 + -14996;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// lwz r9,-14996(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -14996);
	// ld r11,4(r7)
	r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 4);
	// ld r10,484(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 484);
	// ld r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 12);
	// ld r7,492(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 492);
	// subf r31,r11,r10
	r31.s64 = ctx.r10.s64 - r11.s64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r3,r8,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r8.s64;
	// bne cr6,0x825ed624
	if (!cr6.eq) goto loc_825ED624;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
loc_825ED624:
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// fdiv f11,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f31.f64 / ctx.f1.f64;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// b 0x825ed49c
	goto loc_825ED49C;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,-14996
	r11.s64 = r11.s64 + -14996;
	// ld r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 124);
	// ld r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 604);
	// subf r31,r10,r9
	r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// ld r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 132);
	// ld r11,612(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 612);
loc_825ED68C:
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825ED698:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// fdiv f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 / ctx.f1.f64;
loc_825ED6A4:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// frsp f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4028(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4028);
	f0.f64 = double(temp.f32);
	// b 0x825ed4a4
	goto loc_825ED4A4;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,-14996
	r31.s64 = r11.s64 + -14996;
	// ld r11,124(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 124);
	// ld r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 604);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// ld r11,132(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 132);
	// ld r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 612);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// ld r11,140(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 140);
	// ld r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 620);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64 - ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// fsub f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64 - ctx.f1.f64;
	// fdiv f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 / f31.f64;
	// b 0x825ed6a4
	goto loc_825ED6A4;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,-14996
	r11.s64 = r11.s64 + -14996;
	// ld r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 124);
	// ld r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 604);
	// subf r31,r10,r9
	r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// beq cr6,0x825ed864
	if (cr6.eq) goto loc_825ED864;
	// ld r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 140);
	// ld r11,620(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 620);
	// b 0x825ed68c
	goto loc_825ED68C;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,444(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 444);
	// ld r10,924(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 924);
	// ld r9,436(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 436);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// ld r11,4(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 484);
	// ld r8,916(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 916);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_825ED788:
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
loc_825ED78C:
	// bl 0x825ec6c8
	sub_825EC6C8(ctx, base);
	// b 0x825ed868
	goto loc_825ED868;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,4(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,452(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 452);
	// ld r8,932(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 932);
loc_825ED7B8:
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x825ed788
	goto loc_825ED788;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,4(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,236(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 236);
	// ld r8,716(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 716);
	// b 0x825ed7b8
	goto loc_825ED7B8;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,4(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// ld r10,484(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 484);
	// ld r9,92(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 92);
	// ld r8,572(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 572);
	// b 0x825ed7b8
	goto loc_825ED7B8;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,460(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 460);
	// ld r10,940(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 940);
loc_825ED82C:
	// ld r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// ld r8,484(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 484);
	// rldicr r3,r11,1,62
	ctx.r3.u64 = __builtin_rotateleft64(r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// b 0x825ed78c
	goto loc_825ED78C;
	// bl 0x825ece48
	sub_825ECE48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825ed864
	if (cr0.eq) goto loc_825ED864;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-14996
	ctx.r8.s64 = r11.s64 + -14996;
	// ld r11,468(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 468);
	// ld r10,948(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 948);
	// b 0x825ed82c
	goto loc_825ED82C;
loc_825ED864:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_825ED868:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825ED884"))) PPC_WEAK_FUNC(sub_825ED884);
PPC_FUNC_IMPL(__imp__sub_825ED884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825ED888"))) PPC_WEAK_FUNC(sub_825ED888);
PPC_FUNC_IMPL(__imp__sub_825ED888) {
	PPC_FUNC_PROLOGUE();
	// b 0x825e4a00
	sub_825E4A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825ED888"))) PPC_WEAK_FUNC(sub_825ED888);
PPC_FUNC_IMPL(__imp__sub_825ED888) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825ED88C"))) PPC_WEAK_FUNC(sub_825ED88C);
PPC_FUNC_IMPL(__imp__sub_825ED88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825ED890"))) PPC_WEAK_FUNC(sub_825ED890);
PPC_FUNC_IMPL(__imp__sub_825ED890) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825eda64
	if (cr6.eq) goto loc_825EDA64;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eda64
	if (cr6.eq) goto loc_825EDA64;
	// ld r11,11008(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 11008);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825eda64
	if (cr6.eq) goto loc_825EDA64;
	// cmplwi cr6,r3,224
	cr6.compare<uint32_t>(ctx.r3.u32, 224, xer);
	// bgt cr6,0x825ed978
	if (cr6.gt) goto loc_825ED978;
	// beq cr6,0x825eda2c
	if (cr6.eq) goto loc_825EDA2C;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x825ed964
	if (cr6.lt) goto loc_825ED964;
	// beq cr6,0x825ed964
	if (cr6.eq) goto loc_825ED964;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x825ed938
	if (cr6.eq) goto loc_825ED938;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// beq cr6,0x825ed904
	if (cr6.eq) goto loc_825ED904;
	// cmplwi cr6,r3,34
	cr6.compare<uint32_t>(ctx.r3.u32, 34, xer);
	// bne cr6,0x825eda64
	if (!cr6.eq) goto loc_825EDA64;
	// stw r4,23768(r31)
	PPC_STORE_U32(r31.u32 + 23768, ctx.r4.u32);
	// b 0x825eda64
	goto loc_825EDA64;
loc_825ED904:
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,-13992(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13992);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// stw r11,-13992(r9)
	PPC_STORE_U32(ctx.r9.u32 + -13992, r11.u32);
	// bne cr6,0x825eda64
	if (!cr6.eq) goto loc_825EDA64;
	// li r11,0
	r11.s64 = 0;
	// stw r10,22040(r31)
	PPC_STORE_U32(r31.u32 + 22040, ctx.r10.u32);
	// stw r11,22032(r31)
	PPC_STORE_U32(r31.u32 + 22032, r11.u32);
	// stw r11,22036(r31)
	PPC_STORE_U32(r31.u32 + 22036, r11.u32);
	// b 0x825eda64
	goto loc_825EDA64;
loc_825ED938:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,-13992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13992);
	// andc r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	// stw r11,-13992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13992, r11.u32);
	// bne cr6,0x825eda64
	if (!cr6.eq) goto loc_825EDA64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,22040(r31)
	PPC_STORE_U32(r31.u32 + 22040, r11.u32);
	// b 0x825eda64
	goto loc_825EDA64;
loc_825ED964:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stw r11,22040(r31)
	PPC_STORE_U32(r31.u32 + 22040, r11.u32);
	// stw r11,-13992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13992, r11.u32);
	// b 0x825eda64
	goto loc_825EDA64;
loc_825ED978:
	// cmplwi cr6,r3,225
	cr6.compare<uint32_t>(ctx.r3.u32, 225, xer);
	// beq cr6,0x825eda2c
	if (cr6.eq) goto loc_825EDA2C;
	// cmplwi cr6,r3,226
	cr6.compare<uint32_t>(ctx.r3.u32, 226, xer);
	// beq cr6,0x825eda2c
	if (cr6.eq) goto loc_825EDA2C;
	// cmplwi cr6,r3,227
	cr6.compare<uint32_t>(ctx.r3.u32, 227, xer);
	// beq cr6,0x825eda20
	if (cr6.eq) goto loc_825EDA20;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bne cr6,0x825eda64
	if (!cr6.eq) goto loc_825EDA64;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r11,-13992(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13992);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ed9d8
	if (cr0.eq) goto loc_825ED9D8;
	// lwz r11,21984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21984);
	// lfs f13,22000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 22000);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,6196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6196);
	f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82606ed0
	sub_82606ED0(ctx, base);
loc_825ED9D8:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r29,17
	r29.s64 = 17;
	// addi r11,r11,23480
	r11.s64 = r11.s64 + 23480;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_825ED9E8:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// lwz r10,-13992(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -13992);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eda10
	if (cr0.eq) goto loc_825EDA10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r27,-4(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x825ed3a8
	sub_825ED3A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82606ed0
	sub_82606ED0(ctx, base);
loc_825EDA10:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x825ed9e8
	if (!cr0.eq) goto loc_825ED9E8;
	// b 0x825eda64
	goto loc_825EDA64;
loc_825EDA20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec598
	sub_825EC598(ctx, base);
	// b 0x825eda64
	goto loc_825EDA64;
loc_825EDA2C:
	// lwz r11,21940(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825eda64
	if (cr6.eq) goto loc_825EDA64;
	// bl 0x82605c68
	sub_82605C68(ctx, base);
	// lwz r11,11016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11016);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x825eda64
	if (!cr6.eq) goto loc_825EDA64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825eda60
	if (!cr6.gt) goto loc_825EDA60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825EDA60:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825EDA64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825EDA68"))) PPC_WEAK_FUNC(sub_825EDA68);
PPC_FUNC_IMPL(__imp__sub_825EDA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825EDA6C"))) PPC_WEAK_FUNC(sub_825EDA6C);
PPC_FUNC_IMPL(__imp__sub_825EDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EDA70"))) PPC_WEAK_FUNC(sub_825EDA70);
PPC_FUNC_IMPL(__imp__sub_825EDA70) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825edabc
	if (cr6.eq) goto loc_825EDABC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edae4
	if (cr6.eq) goto loc_825EDAE4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edae4
	if (cr6.eq) goto loc_825EDAE4;
	// b 0x825edad0
	goto loc_825EDAD0;
loc_825EDABC:
	// lwz r11,1880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edae4
	if (cr6.eq) goto loc_825EDAE4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_825EDAD0:
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r10,-14432
	ctx.r4.s64 = ctx.r10.s64 + -14432;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EDAE4:
	// lis r11,-32161
	r11.s64 = -2107703296;
	// lwz r10,1880(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1880);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-14664
	r11.s64 = r11.s64 + -14664;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edb18
	if (cr6.eq) goto loc_825EDB18;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,66
	ctx.r3.s64 = 66;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EDB18:
	// lwz r11,1880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edb40
	if (cr6.eq) goto loc_825EDB40;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// li r3,89
	ctx.r3.s64 = 89;
	// addi r4,r10,-10096
	ctx.r4.s64 = ctx.r10.s64 + -10096;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EDB40:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,22032(r30)
	PPC_STORE_U32(r30.u32 + 22032, r11.u32);
	// stw r11,22036(r30)
	PPC_STORE_U32(r30.u32 + 22036, r11.u32);
	// stw r10,22040(r30)
	PPC_STORE_U32(r30.u32 + 22040, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825EDB68"))) PPC_WEAK_FUNC(sub_825EDB68);
PPC_FUNC_IMPL(__imp__sub_825EDB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EDB6C"))) PPC_WEAK_FUNC(sub_825EDB6C);
PPC_FUNC_IMPL(__imp__sub_825EDB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EDB70"))) PPC_WEAK_FUNC(sub_825EDB70);
PPC_FUNC_IMPL(__imp__sub_825EDB70) {
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
	// lis r31,-32256
	r31.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,1880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1880);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825edbb4
	if (cr6.eq) goto loc_825EDBB4;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1880);
loc_825EDBB4:
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r10,r10,-14664
	ctx.r10.s64 = ctx.r10.s64 + -14664;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825edbe8
	if (cr6.eq) goto loc_825EDBE8;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,65
	ctx.r3.s64 = 65;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1880);
loc_825EDBE8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825edc0c
	if (cr6.eq) goto loc_825EDC0C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// li r3,90
	ctx.r3.s64 = 90;
	// addi r4,r10,-10096
	ctx.r4.s64 = ctx.r10.s64 + -10096;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EDC0C:
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

__attribute__((alias("__imp__sub_825EDC20"))) PPC_WEAK_FUNC(sub_825EDC20);
PPC_FUNC_IMPL(__imp__sub_825EDC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EDC24"))) PPC_WEAK_FUNC(sub_825EDC24);
PPC_FUNC_IMPL(__imp__sub_825EDC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EDC28"))) PPC_WEAK_FUNC(sub_825EDC28);
PPC_FUNC_IMPL(__imp__sub_825EDC28) {
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
	// lwz r11,22044(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22044);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825edc64
	if (!cr6.eq) goto loc_825EDC64;
	// lis r4,-23680
	ctx.r4.s64 = -1551892480;
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825edc60
	if (!cr0.eq) goto loc_825EDC60;
loc_825EDC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825edcc0
	goto loc_825EDCC0;
loc_825EDC60:
	// stw r3,22044(r29)
	PPC_STORE_U32(r29.u32 + 22044, ctx.r3.u32);
loc_825EDC64:
	// lwz r11,22048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825edc88
	if (!cr6.eq) goto loc_825EDC88;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825edc58
	if (cr0.eq) goto loc_825EDC58;
	// stw r3,22048(r29)
	PPC_STORE_U32(r29.u32 + 22048, ctx.r3.u32);
loc_825EDC88:
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_825EDC90:
	// lwz r10,22048(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 22048);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,22044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 22044);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + r11.u64;
	// bl 0x825e6b60
	sub_825E6B60(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,480
	r30.s64 = r30.s64 + 480;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// blt cr6,0x825edc90
	if (cr6.lt) goto loc_825EDC90;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825EDCC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825EDCC4"))) PPC_WEAK_FUNC(sub_825EDCC4);
PPC_FUNC_IMPL(__imp__sub_825EDCC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825EDCC8"))) PPC_WEAK_FUNC(sub_825EDCC8);
PPC_FUNC_IMPL(__imp__sub_825EDCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825e4988
	sub_825E4988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825edcf0
	if (cr0.eq) goto loc_825EDCF0;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825EDCF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EDD00"))) PPC_WEAK_FUNC(sub_825EDD00);
PPC_FUNC_IMPL(__imp__sub_825EDD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EDD04"))) PPC_WEAK_FUNC(sub_825EDD04);
PPC_FUNC_IMPL(__imp__sub_825EDD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EDD08"))) PPC_WEAK_FUNC(sub_825EDD08);
PPC_FUNC_IMPL(__imp__sub_825EDD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// li r11,6
	r11.s64 = 6;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r30.u32);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// addi r8,r7,7
	ctx.r8.s64 = ctx.r7.s64 + 7;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// addi r7,r26,7
	ctx.r7.s64 = r26.s64 + 7;
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// rlwinm r22,r8,0,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r21,r7,0,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825EDD6C:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x825edd6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EDD6C;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825d4fa0
	sub_825D4FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825def38
	sub_825DEF38(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// addi r11,r1,640
	r11.s64 = ctx.r1.s64 + 640;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
loc_825EDDC0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825deef0
	sub_825DEEF0(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x825eddc0
	if (cr6.lt) goto loc_825EDDC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ddea8
	sub_825DDEA8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dde80
	sub_825DDE80(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x825edf24
	if (cr6.eq) goto loc_825EDF24;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825ede30
	if (cr6.eq) goto loc_825EDE30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// bl 0x825f71e0
	sub_825F71E0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_825EDE30:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825ede60
	if (cr6.eq) goto loc_825EDE60;
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
loc_825EDE60:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825ede98
	if (cr6.eq) goto loc_825EDE98;
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
loc_825EDE98:
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
	// beq cr6,0x825edee0
	if (cr6.eq) goto loc_825EDEE0;
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
loc_825EDEE0:
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
	// beq cr6,0x825edf24
	if (cr6.eq) goto loc_825EDF24;
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
loc_825EDF24:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825edf74
	if (cr6.eq) goto loc_825EDF74;
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
	// beq cr6,0x825edf74
	if (cr6.eq) goto loc_825EDF74;
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
loc_825EDF74:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x825edfac
	if (cr6.eq) goto loc_825EDFAC;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825edfac
	if (cr6.eq) goto loc_825EDFAC;
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
loc_825EDFAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec8d8
	sub_825EC8D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,7296
	r29.s64 = r11.s64 + 7296;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec930
	sub_825EC930(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825edfec
	if (cr0.eq) goto loc_825EDFEC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
loc_825EDFEC:
	// addi r4,r29,352
	ctx.r4.s64 = r29.s64 + 352;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,429
	ctx.r5.s64 = 429;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec930
	sub_825EC930(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ee01c
	if (cr0.eq) goto loc_825EE01C;
	// addi r5,r29,160
	ctx.r5.s64 = r29.s64 + 160;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
loc_825EE01C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825ee038
	if (!cr6.gt) goto loc_825EE038;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825EE038:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825ecc50
	sub_825ECC50(ctx, base);
	// clrldi r11,r27,32
	r11.u64 = r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r25,31,1,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r1,324
	r11.s64 = ctx.r1.s64 + 324;
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// stfs f31,320(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f13,15536(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 15536);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stfs f13,388(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfs f11,10668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10668);
	ctx.f11.f64 = double(temp.f32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// lfs f10,10972(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10972);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,8892(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8892);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,-372(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -372);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -376);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f11,344(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f10,348(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f9,360(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f8,364(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f12,392(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f7,340(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,396(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f31,400(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f31,416(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f31,420(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f13,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmsubs f2,f6,f13,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - f0.f64));
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f12,10968(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10968);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f11,10964(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10964);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f10,10960(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10960);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32253
	r29.s64 = -2113732608;
	// lfs f9,10956(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10956);
	ctx.f9.f64 = double(temp.f32);
	// li r5,160
	ctx.r5.s64 = 160;
	// lfs f8,10952(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10952);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,10948(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 10948);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f13,10944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,10940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10940);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f1,f0,f3
	ctx.f1.f64 = double(float(f0.f64 / ctx.f3.f64));
	// lfs f6,10936(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 10936);
	ctx.f6.f64 = double(temp.f32);
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,408(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f1,412(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f2,376(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f2,380(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f12,436(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f11,440(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f10,444(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f0,448(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f9,452(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f8,456(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f7,460(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f0,464(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f6,468(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f13,472(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f5,476(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825ee318
	if (cr6.eq) goto loc_825EE318;
	// addi r27,r23,-4
	r27.s64 = r23.s64 + -4;
	// addi r28,r1,468
	r28.s64 = ctx.r1.s64 + 468;
loc_825EE24C:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// stfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r11,r1,248
	r11.s64 = ctx.r1.s64 + 248;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfsu f0,16(r28)
	temp.f32 = float(f0.f64);
	ea = 16 + r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_825EE278:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x825ee278
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EE278;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r8,296(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,288(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// lwzu r11,4(r27)
	ea = 4 + r27.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r27.u32 = ea;
	// rlwimi r9,r10,11,13,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x7FC00) | (ctx.r9.u64 & 0xFFFFFFFFFFF803FF);
	// rlwinm r10,r8,0,13,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// stw r9,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// rlwimi r11,r7,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eca88
	sub_825ECA88(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x825ee24c
	if (cr6.lt) goto loc_825EE24C;
loc_825EE318:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ecb48
	sub_825ECB48(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825ee35c
	if (!cr0.eq) goto loc_825EE35C;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ee364
	if (cr0.eq) goto loc_825EE364;
loc_825EE35C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d12f0
	sub_825D12F0(ctx, base);
loc_825EE364:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ecbb0
	sub_825ECBB0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,648
	r11.s64 = ctx.r1.s64 + 648;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825EE384:
	// stdu r10,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	r11.u32 = ea;
	// bdnz 0x825ee384
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EE384;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,262
	ctx.r9.u64 = ctx.r9.u64 | 262;
	// lwz r5,22096(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 22096);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,22092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 22092);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// lwz r11,22100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22100);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825ee3f4
	if (!cr6.lt) goto loc_825EE3F4;
	// addis r11,r11,-16384
	r11.s64 = r11.s64 + -1073741824;
	// b 0x825ee3f8
	goto loc_825EE3F8;
loc_825EE3F4:
	// addis r11,r11,-16640
	r11.s64 = r11.s64 + -1090519040;
loc_825EE3F8:
	// lwz r8,688(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r8,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, r11.u32);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825ee460
	if (cr6.eq) goto loc_825EE460;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825EE460:
	// addi r28,r1,640
	r28.s64 = ctx.r1.s64 + 640;
loc_825EE464:
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825df648
	sub_825DF648(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825ee488
	if (cr6.eq) goto loc_825EE488;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_825EE488:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825ee464
	if (cr6.lt) goto loc_825EE464;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dde80
	sub_825DDE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_825EE4B8"))) PPC_WEAK_FUNC(sub_825EE4B8);
PPC_FUNC_IMPL(__imp__sub_825EE4B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_825EE4BC"))) PPC_WEAK_FUNC(sub_825EE4BC);
PPC_FUNC_IMPL(__imp__sub_825EE4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EE4C0"))) PPC_WEAK_FUNC(sub_825EE4C0);
PPC_FUNC_IMPL(__imp__sub_825EE4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eaaf8
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	r11.s64 = 6;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r1,344
	ctx.r10.s64 = ctx.r1.s64 + 344;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_825EE508:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825ee508
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EE508;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r11,r1,148
	r11.s64 = ctx.r1.s64 + 148;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// lwz r11,384(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,400(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwimi r11,r10,0,0,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e5a38
	sub_825E5A38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec8d8
	sub_825EC8D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,9364
	r29.s64 = r11.s64 + 9364;
	// li r5,306
	ctx.r5.s64 = 306;
	// addi r4,r29,228
	ctx.r4.s64 = r29.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec930
	sub_825EC930(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ee5e4
	if (cr0.eq) goto loc_825EE5E4;
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,244
	ctx.r4.s64 = 244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
loc_825EE5E4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ec930
	sub_825EC930(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825ee614
	if (!cr6.gt) goto loc_825EE614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825EE614:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5888
	ctx.r9.s64 = 385875968;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,15
	ctx.r9.u64 = ctx.r9.u64 | 15;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x825ecc50
	sub_825ECC50(ctx, base);
	// addi r5,r26,28
	ctx.r5.s64 = r26.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825eca88
	sub_825ECA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ecb48
	sub_825ECB48(ctx, base);
	// lwz r22,636(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lwz r11,628(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lfs f9,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// std r22,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r22.u64);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lfs f13,15536(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15536);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fdivs f1,f9,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// frsp f31,f10
	f31.f64 = double(float(ctx.f10.f64));
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fdivs f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f6.f64));
	// stfs f0,284(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lfs f11,8892(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8892);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,10996(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 10996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32476);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f9,-372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4432(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4432);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f7,10992(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10992);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,10988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10988);
	f0.f64 = double(temp.f32);
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fdivs f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f9,204(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,224(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f8,272(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f12,276(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f30,192(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f29,196(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f28,212(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f7,280(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f0,292(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fdivs f4,f0,f31
	ctx.f4.f64 = double(float(f0.f64 / f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fsubs f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 - f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// fdivs f30,f0,f6
	f30.f64 = double(float(f0.f64 / ctx.f6.f64));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f10,10984(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 10984);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,320
	r11.s64 = ctx.r1.s64 + 320;
	// lfs f9,10308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10308);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,10980(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10980);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 * ctx.f10.f64));
	// lfs f13,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f8,10976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10976);
	ctx.f8.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f7,28092(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28092);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fmuls f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f5,240(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 + f0.f64));
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f3,244(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,256(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stfs f10,268(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f6,248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f2,216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,252(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f1,220(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f9,264(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fctidz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfs f8,304(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfs f7,308(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f13,316(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// stfd f11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f11.u64);
	// std r30,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r30.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r28,r11,r10
	r28.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825ee920
	if (cr6.eq) goto loc_825EE920;
loc_825EE83C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r26,r11,1
	r26.s64 = r11.s64 + 1;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// add r11,r10,r23
	r11.u64 = ctx.r10.u64 + r23.u64;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// beq cr6,0x825ee858
	if (cr6.eq) goto loc_825EE858;
	// li r9,16384
	ctx.r9.s64 = 16384;
loc_825EE858:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r9,255
	ctx.r10.s64 = ctx.r9.s64 + 255;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// mulli r29,r10,42
	r29.s64 = ctx.r10.s64 * 42;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bge cr6,0x825ee878
	if (!cr6.lt) goto loc_825EE878;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_825EE878:
	// clrldi r7,r27,32
	ctx.r7.u64 = r27.u64 & 0xFFFFFFFF;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// rlwinm r11,r11,0,3,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// andi. r10,r8,49400
	ctx.r10.u64 = ctx.r8.u64 & 49400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// oris r10,r10,19200
	ctx.r10.u64 = ctx.r10.u64 | 1258291200;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// lis r8,19200
	ctx.r8.s64 = 1258291200;
	// ori r10,r10,2561
	ctx.r10.u64 = ctx.r10.u64 | 2561;
	// oris r11,r9,19200
	r11.u64 = ctx.r9.u64 | 1258291200;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x825ec9b0
	sub_825EC9B0(ctx, base);
	// mullw r5,r29,r22
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r22.s32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ecbb0
	sub_825ECBB0(ctx, base);
	// subf r28,r29,r28
	r28.s64 = r28.s64 - r29.s64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x825ee83c
	if (cr6.lt) goto loc_825EE83C;
loc_825EE920:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e5b30
	sub_825E5B30(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825EE954"))) PPC_WEAK_FUNC(sub_825EE954);
PPC_FUNC_IMPL(__imp__sub_825EE954) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825EE958"))) PPC_WEAK_FUNC(sub_825EE958);
PPC_FUNC_IMPL(__imp__sub_825EE958) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-3376(r1)
	ea = -3376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,23756(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23756);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// stw r11,23756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23756, r11.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// li r21,0
	r21.s64 = 0;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825ee9a0
	if (cr0.eq) goto loc_825EE9A0;
	// bl 0x825ec450
	sub_825EC450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// b 0x825eec8c
	goto loc_825EEC8C;
loc_825EE9A0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r10,512
	r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addis r30,r11,-16384
	r30.s64 = r11.s64 + -1073741824;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825eec78
	if (!cr6.eq) goto loc_825EEC78;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x825eec78
	if (cr6.gt) goto loc_825EEC78;
	// lwz r26,22092(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 22092);
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bgt cr6,0x825eec70
	if (cr6.gt) goto loc_825EEC70;
	// lwz r27,22096(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 22096);
	// lwz r29,20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bgt cr6,0x825eec70
	if (cr6.gt) goto loc_825EEC70;
	// addi r24,r7,4096
	r24.s64 = ctx.r7.s64 + 4096;
	// cmplwi cr6,r24,16384
	cr6.compare<uint32_t>(r24.u32, 16384, xer);
	// blt cr6,0x825eea10
	if (cr6.lt) goto loc_825EEA10;
	// mr r24,r21
	r24.u64 = r21.u64;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
loc_825EEA10:
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,22116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22116);
	// lwz r10,22112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22112);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,22160
	ctx.r3.s64 = r31.s64 + 22160;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,56
	ctx.r9.s64 = r11.s64 + 56;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fmuls f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_825EEA9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x825eeabc
	if (!cr0.eq) goto loc_825EEABC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x825eea9c
	if (!cr6.eq) goto loc_825EEA9C;
loc_825EEABC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825eeae8
	if (cr0.eq) goto loc_825EEAE8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f15b0
	sub_825F15B0(ctx, base);
loc_825EEAE8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825eeb00
	if (cr0.eq) goto loc_825EEB00;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// b 0x825eeb28
	goto loc_825EEB28;
loc_825EEB00:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eeb20
	if (cr0.eq) goto loc_825EEB20;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r29,r1,1728
	r29.s64 = ctx.r1.s64 + 1728;
	// bl 0x825ec3e0
	sub_825EC3E0(ctx, base);
	// b 0x825eeb28
	goto loc_825EEB28;
loc_825EEB20:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_825EEB28:
	// lwz r11,23752(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23752);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bne cr6,0x825eeb70
	if (!cr6.eq) goto loc_825EEB70;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x825eebac
	if (cr6.eq) goto loc_825EEBAC;
	// addi r10,r31,22216
	ctx.r10.s64 = r31.s64 + 22216;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r8,r29,1536
	ctx.r8.s64 = r29.s64 + 1536;
loc_825EEB48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x825eeb68
	if (!cr0.eq) goto loc_825EEB68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x825eeb48
	if (!cr6.eq) goto loc_825EEB48;
loc_825EEB68:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825eebac
	if (cr0.eq) goto loc_825EEBAC;
loc_825EEB70:
	// stw r6,23752(r31)
	PPC_STORE_U32(r31.u32 + 23752, ctx.r6.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x825eeb94
	if (cr6.eq) goto loc_825EEB94;
	// addi r3,r31,22216
	ctx.r3.s64 = r31.s64 + 22216;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x825eeb98
	goto loc_825EEB98;
loc_825EEB94:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_825EEB98:
	// lis r4,10280
	ctx.r4.s64 = 673710080;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r4,262
	ctx.r4.u64 = ctx.r4.u64 | 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d1f10
	sub_825D1F10(ctx, base);
loc_825EEBAC:
	// lwz r11,21944(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21944);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// clrlwi r10,r11,1
	ctx.r10.u64 = r11.u32 & 0x7FFFFFFF;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r10,21944(r31)
	PPC_STORE_U32(r31.u32 + 21944, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// srawi r29,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r11.s32 >> 31;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x825edd08
	sub_825EDD08(ctx, base);
	// lwz r11,21944(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21944);
	// rlwimi r11,r29,31,0,0
	r11.u64 = (__builtin_rotateleft32(r29.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stw r11,21944(r31)
	PPC_STORE_U32(r31.u32 + 21944, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x825eebf8
	if (cr0.eq) goto loc_825EEBF8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825EEBF8:
	// lwz r9,22100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 22100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// beq 0x825eec38
	if (cr0.eq) goto loc_825EEC38;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// b 0x825eec44
	goto loc_825EEC44;
loc_825EEC38:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825eec50
	if (cr0.eq) goto loc_825EEC50;
	// addi r4,r1,1728
	ctx.r4.s64 = ctx.r1.s64 + 1728;
loc_825EEC44:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825EEC50:
	// cmplwi cr6,r22,1560
	cr6.compare<uint32_t>(r22.u32, 1560, xer);
	// li r5,1560
	ctx.r5.s64 = 1560;
	// bgt cr6,0x825eec60
	if (cr6.gt) goto loc_825EEC60;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_825EEC60:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x825eec7c
	goto loc_825EEC7C;
loc_825EEC70:
	// li r21,7
	r21.s64 = 7;
	// b 0x825eec7c
	goto loc_825EEC7C;
loc_825EEC78:
	// li r21,6
	r21.s64 = 6;
loc_825EEC7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1572
	ctx.r4.s64 = r30.s64 + 1572;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9198
	sub_825F9198(ctx, base);
loc_825EEC8C:
	// lwz r11,23756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23756);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,23756(r31)
	PPC_STORE_U32(r31.u32 + 23756, r11.u32);
	// addi r1,r1,3376
	ctx.r1.s64 = ctx.r1.s64 + 3376;
}

__attribute__((alias("__imp__sub_825EECA0"))) PPC_WEAK_FUNC(sub_825EECA0);
PPC_FUNC_IMPL(__imp__sub_825EECA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_825EECA4"))) PPC_WEAK_FUNC(sub_825EECA4);
PPC_FUNC_IMPL(__imp__sub_825EECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EECA8"))) PPC_WEAK_FUNC(sub_825EECA8);
PPC_FUNC_IMPL(__imp__sub_825EECA8) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// li r18,0
	r18.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_825EED04:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x825eed04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825EED04;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r9,r1,200
	ctx.r9.s64 = ctx.r1.s64 + 200;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// addi r11,r1,204
	r11.s64 = ctx.r1.s64 + 204;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x825d4ca8
	sub_825D4CA8(ctx, base);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lwz r8,264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r11,9
	r11.s64 = 9;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r8,r10,21,9,10
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (ctx.r8.u64 & 0xFFFFFFFFFF9FFFFF);
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// rlwimi r9,r11,11,16,21
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 11) & 0xFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF03FF);
	// addis r11,r31,-16384
	r11.s64 = r31.s64 + -1073741824;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// blt cr6,0x825eed8c
	if (cr6.lt) goto loc_825EED8C;
	// addis r11,r31,-16640
	r11.s64 = r31.s64 + -1090519040;
loc_825EED8C:
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwimi r11,r10,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x825eedb0
	if (!cr6.eq) goto loc_825EEDB0;
	// li r10,27
	ctx.r10.s64 = 27;
	// rlwimi r11,r10,1,26,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
loc_825EEDB0:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r19,304(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x825eedd0
	if (!cr6.eq) goto loc_825EEDD0;
	// lwz r19,22112(r23)
	r19.u64 = PPC_LOAD_U32(r23.u32 + 22112);
loc_825EEDD0:
	// lwz r20,308(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x825eede0
	if (!cr6.eq) goto loc_825EEDE0;
	// lwz r20,22116(r23)
	r20.u64 = PPC_LOAD_U32(r23.u32 + 22116);
loc_825EEDE0:
	// lwz r24,296(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r25,288(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpw cr6,r24,r25
	cr6.compare<int32_t>(r24.s32, r25.s32, xer);
	// bne cr6,0x825eedf8
	if (!cr6.eq) goto loc_825EEDF8;
	// mr r25,r18
	r25.u64 = r18.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
loc_825EEDF8:
	// lwz r26,300(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r27,292(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// bne cr6,0x825eee10
	if (!cr6.eq) goto loc_825EEE10;
	// mr r27,r18
	r27.u64 = r18.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_825EEE10:
	// lwz r11,22112(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 22112);
	// clrldi r10,r20,32
	ctx.r10.u64 = r20.u64 & 0xFFFFFFFF;
	// lwz r9,22116(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 22116);
	// clrldi r8,r19,32
	ctx.r8.u64 = r19.u64 & 0xFFFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f0
	ctx.f9.f64 = double(f0.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f12,11052(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11052);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825eee90
	if (!cr6.lt) goto loc_825EEE90;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x825eee94
	goto loc_825EEE94;
loc_825EEE90:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f0.f64;
loc_825EEE94:
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825eeea8
	if (!cr6.lt) goto loc_825EEEA8;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x825eeeac
	goto loc_825EEEAC;
loc_825EEEA8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
loc_825EEEAC:
	// subf r31,r25,r24
	r31.s64 = r24.s64 - r25.s64;
	// subf r28,r27,r26
	r28.s64 = r26.s64 - r27.s64;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(f0.f64 * ctx.f10.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// extsw r11,r28
	r11.s64 = r28.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,21948(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 21948);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// clrlwi r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,35
	r11.s64 = r11.s64 + 35;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// andi. r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 & 9;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// addi r8,r9,19
	ctx.r8.s64 = ctx.r9.s64 + 19;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// divw r10,r9,r11
	ctx.r10.s32 = ctx.r9.s32 / r11.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r10,24
	cr6.compare<int32_t>(ctx.r10.s32, 24, xer);
	// twlgei r11,-1
	if (r11.u32 >= 4294967295) __builtin_debugtrap();
	// bgt cr6,0x825eef64
	if (cr6.gt) goto loc_825EEF64;
	// li r10,24
	ctx.r10.s64 = 24;
loc_825EEF64:
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// divw r11,r9,r8
	r11.s32 = ctx.r9.s32 / ctx.r8.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// bgt cr6,0x825eef98
	if (cr6.gt) goto loc_825EEF98;
	// li r11,24
	r11.s64 = 24;
loc_825EEF98:
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// divw r7,r7,r10
	ctx.r7.s32 = ctx.r7.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addze r22,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r22.s64 = temp.s64;
	// mullw r30,r7,r10
	r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r5.s64 = r11.s32 >> 2;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// divw r7,r6,r11
	ctx.r7.s32 = ctx.r6.s32 / r11.s32;
	// andc r8,r11,r8
	ctx.r8.u64 = r11.u64 & ~ctx.r8.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// addze r21,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	r21.s64 = temp.s64;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// mullw r29,r7,r11
	r29.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// ble cr6,0x825ef014
	if (!cr6.gt) goto loc_825EF014;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r8,r31,r10
	ctx.r8.s32 = r31.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mullw r30,r8,r10
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
loc_825EF014:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// ble cr6,0x825ef038
	if (!cr6.gt) goto loc_825EF038;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.s32 = r28.s32 / r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// mullw r29,r9,r11
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	if (r11.u32 >= 4294967295) __builtin_debugtrap();
loc_825EF038:
	// lwz r10,22112(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 22112);
	// mullw r11,r30,r19
	r11.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// lwz r9,22116(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 22116);
	// lwz r8,22124(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 22124);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// divwu r11,r11,r31
	r11.u32 = r11.u32 / r31.u32;
	// mullw r10,r29,r20
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r20.s32);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// twllei r31,0
	if (r31.u32 <= 0) __builtin_debugtrap();
	// twllei r28,0
	if (r28.u32 <= 0) __builtin_debugtrap();
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// divwu r11,r10,r28
	r11.u32 = ctx.r10.u32 / r28.u32;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// add r10,r25,r24
	ctx.r10.u64 = r25.u64 + r24.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r9,r27,r26
	ctx.r9.u64 = r27.u64 + r26.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// srawi r10,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// subf r20,r10,r11
	r20.s64 = r11.s64 - ctx.r10.s64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r11.s64 = temp.s64;
	// srawi r10,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subf r19,r10,r11
	r19.s64 = r11.s64 - ctx.r10.s64;
	// fdivs f30,f12,f11
	f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / f0.f64));
	// beq cr6,0x825ef0fc
	if (cr6.eq) goto loc_825EF0FC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f0.f64 = double(temp.f32);
	// lfs f13,11048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11048);
	ctx.f13.f64 = double(temp.f32);
	// b 0x825ef10c
	goto loc_825EF10C;
loc_825EF0FC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,15536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15536);
	f0.f64 = double(temp.f32);
	// lfs f13,3640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3640);
	ctx.f13.f64 = double(temp.f32);
loc_825EF10C:
	// divw r8,r30,r22
	ctx.r8.s32 = r30.s32 / r22.s32;
	// fmuls f13,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// divw r7,r29,r21
	ctx.r7.s32 = r29.s32 / r21.s32;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// li r11,42
	r11.s64 = 42;
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// fdivs f29,f0,f13
	f29.f64 = double(float(f0.f64 / ctx.f13.f64));
	// divwu r11,r6,r11
	r11.u32 = ctx.r6.u32 / r11.u32;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 1);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// rotlwi r9,r29,1
	ctx.r9.u64 = __builtin_rotateleft32(r29.u32, 1);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r6,6
	r11.s64 = ctx.r6.s64 * 6;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r6,r22,r5
	ctx.r6.u64 = r22.u64 & ~ctx.r5.u64;
	// andc r9,r21,r9
	ctx.r9.u64 = r21.u64 & ~ctx.r9.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// twllei r22,0
	if (r22.u32 <= 0) __builtin_debugtrap();
	// twllei r21,0
	if (r21.u32 <= 0) __builtin_debugtrap();
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r31,16384
	cr6.compare<uint32_t>(r31.u32, 16384, xer);
	// bgt cr6,0x825ef178
	if (cr6.gt) goto loc_825EF178;
	// li r31,16384
	r31.s64 = 16384;
loc_825EF178:
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r18.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef1c0
	if (cr6.eq) goto loc_825EF1C0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x825ef1c4
	goto loc_825EF1C4;
loc_825EF1C0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_825EF1C4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ef3a4
	if (cr6.eq) goto loc_825EF3A4;
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// lwz r28,180(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi r9,r10,18
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFF;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// addi r24,r9,1
	r24.s64 = ctx.r9.s64 + 1;
	// beq cr6,0x825ef210
	if (cr6.eq) goto loc_825EF210;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,310
	ctx.r10.u64 = ctx.r10.u64 | 310;
	// subf r10,r16,r10
	ctx.r10.s64 = ctx.r10.s64 - r16.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_825EF210:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r8,20585
	ctx.r8.s64 = 1349058560;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// ori r9,r8,30806
	ctx.r9.u64 = ctx.r8.u64 | 30806;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r18,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r18.u32);
	// lwz r9,21948(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 21948);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r26.u32);
	// stw r25,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r25.u32);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f30,28(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f29,32(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// beq cr6,0x825ef260
	if (cr6.eq) goto loc_825EF260;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825EF260:
	// addi r4,r27,4096
	ctx.r4.s64 = r27.s64 + 4096;
	// cmplwi cr6,r4,16384
	cr6.compare<uint32_t>(ctx.r4.u32, 16384, xer);
	// blt cr6,0x825ef278
	if (cr6.lt) goto loc_825EF278;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_825EF278:
	// extsw r11,r30
	r11.s64 = r30.s32;
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// extsw r9,r20
	ctx.r9.s64 = r20.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r11.u64);
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f11,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// extsw r11,r21
	r11.s64 = r21.s32;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// lfd f10,216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// extsw r10,r19
	ctx.r10.s64 = r19.s32;
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, r11.u64);
	// lfd f9,208(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// extsw r11,r22
	r11.s64 = r22.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mullw r11,r29,r30
	r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// ori r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 6144;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// lfd f0,128(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f0,f11
	f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f0,f10
	f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f9
	f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ble cr6,0x825ef324
	if (!cr6.gt) goto loc_825EF324;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x825ef340
	goto loc_825EF340;
loc_825EF324:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// eqv r11,r11,r10
	r11.u64 = ~(r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
loc_825EF340:
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,21948(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 21948);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-54
	r11.s64 = r11.s64 + -54;
	// addi r30,r6,11000
	r30.s64 = ctx.r6.s64 + 11000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x825ee4c0
	sub_825EE4C0(ctx, base);
loc_825EF3A4:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
}

__attribute__((alias("__imp__sub_825EF3B8"))) PPC_WEAK_FUNC(sub_825EF3B8);
PPC_FUNC_IMPL(__imp__sub_825EF3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_825EF3BC"))) PPC_WEAK_FUNC(sub_825EF3BC);
PPC_FUNC_IMPL(__imp__sub_825EF3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EF3C0"))) PPC_WEAK_FUNC(sub_825EF3C0);
PPC_FUNC_IMPL(__imp__sub_825EF3C0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,276(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r7,22088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22088, ctx.r7.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r8,22092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22092, ctx.r8.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r9,22096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22096, ctx.r9.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r6,22100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22100, ctx.r6.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r10,22104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22104, ctx.r10.u32);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// stw r25,22108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22108, r25.u32);
	// rlwinm. r11,r4,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef414
	if (cr0.eq) goto loc_825EF414;
	// addi r3,r3,22112
	ctx.r3.s64 = ctx.r3.s64 + 22112;
	// bl 0x8314d26c
	__imp__VdQueryVideoMode(ctx, base);
loc_825EF414:
	// lwz r11,21944(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21944);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef4e4
	if (cr0.eq) goto loc_825EF4E4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825ef45c
	if (!cr6.eq) goto loc_825EF45C;
	// lbz r11,11069(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825ef45c
	if (!cr0.eq) goto loc_825EF45C;
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
	// bl 0x825eeca8
	sub_825EECA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825ef4ac
	goto loc_825EF4AC;
loc_825EF45C:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = r11.u64 ^ 1;
	// lwz r11,1880(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1880);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef4a8
	if (cr6.eq) goto loc_825EF4A8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EF4A8:
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_825EF4AC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825ef4c8
	if (!cr6.gt) goto loc_825EF4C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825EF4C8:
	// lis r11,-32161
	r11.s64 = -2107703296;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-12888
	ctx.r6.s64 = r11.s64 + -12888;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3db0
	sub_825E3DB0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825EF4E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825EF4E8"))) PPC_WEAK_FUNC(sub_825EF4E8);
PPC_FUNC_IMPL(__imp__sub_825EF4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825EF4EC"))) PPC_WEAK_FUNC(sub_825EF4EC);
PPC_FUNC_IMPL(__imp__sub_825EF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EF4F0"))) PPC_WEAK_FUNC(sub_825EF4F0);
PPC_FUNC_IMPL(__imp__sub_825EF4F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82607058
	sub_82607058(ctx, base);
	// rlwinm. r11,r3,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef51c
	if (cr0.eq) goto loc_825EF51C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ecf58
	sub_825ECF58(ctx, base);
loc_825EF51C:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lbz r11,11072(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lwz r9,16968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// stb r11,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, r11.u8);
	// lis r11,-32161
	r11.s64 = -2107703296;
	// addi r8,r8,-10104
	ctx.r8.s64 = ctx.r8.s64 + -10104;
	// lwz r10,1880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1880);
	// addi r11,r11,-13304
	r11.s64 = r11.s64 + -13304;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,21119
	ctx.r9.s64 = 21119;
	// lis r7,-32161
	ctx.r7.s64 = -2107703296;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r6,-32161
	ctx.r6.s64 = -2107703296;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lis r5,-32161
	ctx.r5.s64 = -2107703296;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r5,-5800
	r11.s64 = ctx.r5.s64 + -5800;
	// addi r8,r7,-15192
	ctx.r8.s64 = ctx.r7.s64 + -15192;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r9,r6,-15056
	ctx.r9.s64 = ctx.r6.s64 + -15056;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef5c8
	if (cr6.eq) goto loc_825EF5C8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,82
	ctx.r3.s64 = 82;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,1880(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1880);
	// b 0x825ef5cc
	goto loc_825EF5CC;
loc_825EF5C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EF5CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825ef624
	if (!cr6.eq) goto loc_825EF624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825ef604
	if (cr6.eq) goto loc_825EF604;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef624
	if (cr6.eq) goto loc_825EF624;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef624
	if (cr6.eq) goto loc_825EF624;
	// b 0x825ef614
	goto loc_825EF614;
loc_825EF604:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef624
	if (cr6.eq) goto loc_825EF624;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_825EF614:
	// li r3,46
	ctx.r3.s64 = 46;
	// lwz r4,16968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EF624:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11072);
	// lwz r9,21944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 21944);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,11072(r31)
	PPC_STORE_U8(r31.u32 + 11072, ctx.r10.u8);
	// stw r8,21948(r31)
	PPC_STORE_U32(r31.u32 + 21948, ctx.r8.u32);
	// stw r9,21944(r31)
	PPC_STORE_U32(r31.u32 + 21944, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_825EF660"))) PPC_WEAK_FUNC(sub_825EF660);
PPC_FUNC_IMPL(__imp__sub_825EF660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EF664"))) PPC_WEAK_FUNC(sub_825EF664);
PPC_FUNC_IMPL(__imp__sub_825EF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EF668"))) PPC_WEAK_FUNC(sub_825EF668);
PPC_FUNC_IMPL(__imp__sub_825EF668) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ef69c
	if (!cr6.gt) goto loc_825EF69C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825EF69C:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r11,22528
	ctx.r9.u64 = r11.u64 | 22528;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ori r10,r8,48879
	ctx.r10.u64 = ctx.r8.u64 | 48879;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825EF6F0"))) PPC_WEAK_FUNC(sub_825EF6F0);
PPC_FUNC_IMPL(__imp__sub_825EF6F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EF6F4"))) PPC_WEAK_FUNC(sub_825EF6F4);
PPC_FUNC_IMPL(__imp__sub_825EF6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EF6F8"))) PPC_WEAK_FUNC(sub_825EF6F8);
PPC_FUNC_IMPL(__imp__sub_825EF6F8) {
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
	// lwz r11,22056(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22056);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x825ef7b8
	if (!cr6.eq) goto loc_825EF7B8;
	// lwz r11,22064(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22064);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x825ef730
	if (!cr6.eq) goto loc_825EF730;
	// li r11,0
	r11.s64 = 0;
	// b 0x825ef734
	goto loc_825EF734;
loc_825EF730:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_825EF734:
	// lwz r10,22060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22060);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825ef7b8
	if (cr6.eq) goto loc_825EF7B8;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x825ef750
	if (!cr6.eq) goto loc_825EF750;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_825EF750:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825ef768
	if (!cr6.gt) goto loc_825EF768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825EF768:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r11,r11,22528
	r11.u64 = r11.u64 | 22528;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r8,r9,48879
	ctx.r8.u64 = ctx.r9.u64 | 48879;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,22052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22052);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_825EF7B8:
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

__attribute__((alias("__imp__sub_825EF7CC"))) PPC_WEAK_FUNC(sub_825EF7CC);
PPC_FUNC_IMPL(__imp__sub_825EF7CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EF7D0"))) PPC_WEAK_FUNC(sub_825EF7D0);
PPC_FUNC_IMPL(__imp__sub_825EF7D0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,17128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r10,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef960
	if (cr0.eq) goto loc_825EF960;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef814
	if (cr6.eq) goto loc_825EF814;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x825ef818
	goto loc_825EF818;
loc_825EF814:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825EF818:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,17132(r31)
	PPC_STORE_U32(r31.u32 + 17132, ctx.r3.u32);
loc_825EF828:
	// stw r30,17128(r31)
	PPC_STORE_U32(r31.u32 + 17128, r30.u32);
loc_825EF82C:
	// lwz r11,21992(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21992);
	// lwz r10,21988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21988);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// beq cr6,0x825ef860
	if (cr6.eq) goto loc_825EF860;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,21984(r31)
	PPC_STORE_U32(r31.u32 + 21984, r11.u32);
loc_825EF860:
	// ld r8,22008(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 22008);
	// ld r10,22016(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 22016);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,22056(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22056);
	// stw r8,22024(r31)
	PPC_STORE_U32(r31.u32 + 22024, ctx.r8.u32);
	// std r30,22008(r31)
	PPC_STORE_U64(r31.u32 + 22008, r30.u64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r9,21992(r31)
	PPC_STORE_U32(r31.u32 + 21992, ctx.r9.u32);
	// stw r7,21988(r31)
	PPC_STORE_U32(r31.u32 + 21988, ctx.r7.u32);
	// stw r10,22028(r31)
	PPC_STORE_U32(r31.u32 + 22028, ctx.r10.u32);
	// std r30,22016(r31)
	PPC_STORE_U64(r31.u32 + 22016, r30.u64);
	// bne cr6,0x825ef9cc
	if (!cr6.eq) goto loc_825EF9CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825edc28
	sub_825EDC28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef9c4
	if (cr0.eq) goto loc_825EF9C4;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,19
	r11.s64 = 19;
	// li r9,8
	ctx.r9.s64 = 8;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r11.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r11,25
	r11.s64 = 25;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r11.u32);
	// li r11,30
	r11.s64 = 30;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bne 0x825ef924
	if (!cr0.eq) goto loc_825EF924;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6a78
	sub_825E6A78(ctx, base);
loc_825EF924:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6c00
	sub_825E6C00(ctx, base);
	// lwz r11,22052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22052);
	// stw r30,22060(r31)
	PPC_STORE_U32(r31.u32 + 22060, r30.u32);
	// stw r30,22064(r31)
	PPC_STORE_U32(r31.u32 + 22064, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ef954
	if (!cr6.eq) goto loc_825EF954;
	// lwz r11,22044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22044);
	// addi r11,r11,1920
	r11.s64 = r11.s64 + 1920;
	// stw r11,22052(r31)
	PPC_STORE_U32(r31.u32 + 22052, r11.u32);
loc_825EF954:
	// li r11,2
	r11.s64 = 2;
	// stw r11,22056(r31)
	PPC_STORE_U32(r31.u32 + 22056, r11.u32);
	// b 0x825efa24
	goto loc_825EFA24;
loc_825EF960:
	// rlwinm. r11,r10,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825ef82c
	if (cr0.eq) goto loc_825EF82C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ef984
	if (cr6.eq) goto loc_825EF984;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x825ef988
	goto loc_825EF988;
loc_825EF984:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825EF988:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// rlwinm r4,r10,20,4,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF00000;
	// addi r3,r9,11056
	ctx.r3.s64 = ctx.r9.s64 + 11056;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,17132(r31)
	PPC_STORE_U32(r31.u32 + 17132, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825ef828
	if (cr0.lt) goto loc_825EF828;
	// lwz r11,17128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17128);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,23,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,17128(r31)
	PPC_STORE_U32(r31.u32 + 17128, r11.u32);
	// b 0x825ef82c
	goto loc_825EF82C;
loc_825EF9C4:
	// stw r30,22056(r31)
	PPC_STORE_U32(r31.u32 + 22056, r30.u32);
	// b 0x825efa24
	goto loc_825EFA24;
loc_825EF9CC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x825efa24
	if (!cr6.eq) goto loc_825EFA24;
	// lbz r11,11070(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11070);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825ef9ec
	if (!cr0.eq) goto loc_825EF9EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e6a78
	sub_825E6A78(ctx, base);
loc_825EF9EC:
	// lwz r11,22064(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22064);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825ef9fc
	if (cr6.eq) goto loc_825EF9FC;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
loc_825EF9FC:
	// lwz r11,22060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22060);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x825efa24
	if (cr6.eq) goto loc_825EFA24;
	// lwz r10,22048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22048);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e7b38
	sub_825E7B38(ctx, base);
	// stw r30,22064(r31)
	PPC_STORE_U32(r31.u32 + 22064, r30.u32);
loc_825EFA24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ef4f0
	sub_825EF4F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2100);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825efa58
	if (cr6.eq) goto loc_825EFA58;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825efa58
	if (cr6.eq) goto loc_825EFA58;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825EFA58:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825EFA6C"))) PPC_WEAK_FUNC(sub_825EFA6C);
PPC_FUNC_IMPL(__imp__sub_825EFA6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EFA70"))) PPC_WEAK_FUNC(sub_825EFA70);
PPC_FUNC_IMPL(__imp__sub_825EFA70) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x825efae4
	if (!cr6.eq) goto loc_825EFAE4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825efae4
	if (!cr6.eq) goto loc_825EFAE4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825efae4
	if (!cr6.eq) goto loc_825EFAE4;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825efae4
	if (!cr6.eq) goto loc_825EFAE4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_825EFAE4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r29,r9,r7
	r29.s64 = ctx.r7.s64 - ctx.r9.s64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// bne cr6,0x825efb08
	if (!cr6.eq) goto loc_825EFB08;
	// lwz r28,21952(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 21952);
loc_825EFB08:
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825efb50
	if (!cr6.eq) goto loc_825EFB50;
	// lwz r11,13992(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 13992);
	// mullw r9,r28,r29
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// divwu r30,r9,r10
	r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// bne 0x825efb4c
	if (!cr0.eq) goto loc_825EFB4C;
	// bl 0x8314d2ec
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825efb4c
	if (!cr0.eq) goto loc_825EFB4C;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bgt cr6,0x825efb4c
	if (cr6.gt) goto loc_825EFB4C;
	// lwz r11,21956(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21956);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825efb50
	if (!cr6.gt) goto loc_825EFB50;
loc_825EFB4C:
	// lwz r30,21956(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 21956);
loc_825EFB50:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r28,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r28.u32);
	// stw r30,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r9.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r8.u32);
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825EFB90"))) PPC_WEAK_FUNC(sub_825EFB90);
PPC_FUNC_IMPL(__imp__sub_825EFB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825EFB94"))) PPC_WEAK_FUNC(sub_825EFB94);
PPC_FUNC_IMPL(__imp__sub_825EFB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EFB98"))) PPC_WEAK_FUNC(sub_825EFB98);
PPC_FUNC_IMPL(__imp__sub_825EFB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825efbe4
	if (!cr6.eq) goto loc_825EFBE4;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, r11.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// b 0x825efbf0
	goto loc_825EFBF0;
loc_825EFBE4:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_825EFBF0:
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, r11.u32);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, r11.u32);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, r11.u32);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r11.u32);
	// stw r11,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, r11.u32);
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, r11.u32);
}

__attribute__((alias("__imp__sub_825EFC08"))) PPC_WEAK_FUNC(sub_825EFC08);
PPC_FUNC_IMPL(__imp__sub_825EFC08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EFC0C"))) PPC_WEAK_FUNC(sub_825EFC0C);
PPC_FUNC_IMPL(__imp__sub_825EFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EFC10"))) PPC_WEAK_FUNC(sub_825EFC10);
PPC_FUNC_IMPL(__imp__sub_825EFC10) {
	PPC_FUNC_PROLOGUE();
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x825efa70
	sub_825EFA70(ctx, base);
	// lwz r11,21952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21952);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,21956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21956);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r30.u16);
	// sth r29,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r29.u16);
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r11.u16);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d23c
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_825EFC6C"))) PPC_WEAK_FUNC(sub_825EFC6C);
PPC_FUNC_IMPL(__imp__sub_825EFC6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825EFC70"))) PPC_WEAK_FUNC(sub_825EFC70);
PPC_FUNC_IMPL(__imp__sub_825EFC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// vrfim128 v61,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_round_ps(_mm_load_ps(ctx.v1.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,11104
	r11.s64 = r11.s64 + 11104;
	// addi r10,r10,11088
	ctx.r10.s64 = ctx.r10.s64 + 11088;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vspltw128 v8,v63,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vspltw128 v7,v62,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vsubfp128 v0,v1,v61
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v61.f32)));
	// vspltw128 v6,v62,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v5,v63,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vexptefp128 v61,v61
	v61.f32[0] = exp2f(v61.f32[0]);
	v61.f32[1] = exp2f(v61.f32[1]);
	v61.f32[2] = exp2f(v61.f32[2]);
	v61.f32[3] = exp2f(v61.f32[3]);
	// vspltw128 v9,v62,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vspltw128 v10,v63,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vspltw128 v11,v62,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vmaddfp v8,v0,v8,v12
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v0,v6,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v8,v13,v5,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v13,v9,v7
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v13,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v0,v10,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v0,v11,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v13,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vor128 v63,v0,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrefp128 v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v63.f32)));
	// vor128 v9,v63,v63
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v63.u8));
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v63.u8));
	// vnmsubfp v8,v9,v0,v12
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v61,v12
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v12.f32)));
}

__attribute__((alias("__imp__sub_825EFD0C"))) PPC_WEAK_FUNC(sub_825EFD0C);
PPC_FUNC_IMPL(__imp__sub_825EFD0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EFD10"))) PPC_WEAK_FUNC(sub_825EFD10);
PPC_FUNC_IMPL(__imp__sub_825EFD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-25596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f12,11152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11152);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,2512
	r11.s64 = r11.s64 + 2512;
	// lfs f11,15384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15384);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,2544
	r11.s64 = ctx.r8.s64 + 2544;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r9,2528
	ctx.r9.s64 = ctx.r9.s64 + 2528;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lvx128 v60,r0,r11
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	f0.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vmulfp128 v59,v59,v63
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v58,v59,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vmsum4fp128 v62,v59,v62
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v62.f32), 0xFF));
	// vmulfp128 v63,v58,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// vmulfp128 v62,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v63,v62,v63
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// vmsum4fp128 v62,v62,v61
	_mm_store_ps(v62.f32, _mm_dp_ps(_mm_load_ps(v62.f32), _mm_load_ps(v61.f32), 0xFF));
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v63.f32, _mm_dp_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32), 0xFF));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + f0.f64));
}

__attribute__((alias("__imp__sub_825EFDF0"))) PPC_WEAK_FUNC(sub_825EFDF0);
PPC_FUNC_IMPL(__imp__sub_825EFDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EFDF4"))) PPC_WEAK_FUNC(sub_825EFDF4);
PPC_FUNC_IMPL(__imp__sub_825EFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825EFDF8"))) PPC_WEAK_FUNC(sub_825EFDF8);
PPC_FUNC_IMPL(__imp__sub_825EFDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f1,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)v59.u32, _mm_set1_epi32(int(0x0)));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vspltisw128 v60,-1
	_mm_store_si128((__m128i*)v60.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw128 v58,-9
	_mm_store_si128((__m128i*)v58.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// vspltisw128 v55,1
	_mm_store_si128((__m128i*)v55.u32, _mm_set1_epi32(int(0x1)));
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r11,r8,11136
	r11.s64 = ctx.r8.s64 + 11136;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vupkd3d128 v63,v59,4
	temp.f32 = 3.0f;
	temp.s32 += v59.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v59.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v63 = vTemp;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vslw128 v57,v60,v60
	v57.u32[0] = v60.u32[0] << (v60.u8[0] & 0x1F);
	v57.u32[1] = v60.u32[1] << (v60.u8[4] & 0x1F);
	v57.u32[2] = v60.u32[2] << (v60.u8[8] & 0x1F);
	v57.u32[3] = v60.u32[3] << (v60.u8[12] & 0x1F);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vspltw128 v30,v62,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// addi r10,r10,11088
	ctx.r10.s64 = ctx.r10.s64 + 11088;
	// vspltw128 v31,v62,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// vspltw128 v56,v63,3
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v28,v62,2
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vspltw128 v2,v63,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vspltw128 v1,v63,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// stfs f0,-20(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// vspltw128 v29,v63,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vspltw128 v27,v63,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v26,v62,3
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw128 v5,v63,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw128 v6,v63,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vor128 v13,v56,v56
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v56.u8));
	// vspltw128 v8,v63,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v11,v63,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vandc128 v61,v62,v57
	_mm_store_si128((__m128i*)v61.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v61.u8));
	// vlogefp128 v53,v61
	ctx.fpscr.enableFlushModeUnconditional();
	v53.f32[0] = log2f(v61.f32[0]);
	v53.f32[1] = log2f(v61.f32[1]);
	v53.f32[2] = log2f(v61.f32[2]);
	v53.f32[3] = log2f(v61.f32[3]);
	// vslw128 v3,v60,v58
	ctx.v3.u32[0] = v60.u32[0] << (v58.u8[0] & 0x1F);
	ctx.v3.u32[1] = v60.u32[1] << (v58.u8[4] & 0x1F);
	ctx.v3.u32[2] = v60.u32[2] << (v58.u8[8] & 0x1F);
	ctx.v3.u32[3] = v60.u32[3] << (v58.u8[12] & 0x1F);
	// addi r11,r11,11104
	r11.s64 = r11.s64 + 11104;
	// vcfpsxws128 v54,v63,0
	_mm_store_si128((__m128i*)v54.s32, _mm_vctsxs(_mm_load_ps(v63.f32)));
	// vcmpeqfp128 v9,v63,v59
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(v63.f32), _mm_load_ps(v59.f32)));
	// vsel v3,v0,v13,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v12,v61,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vsubfp128 v0,v3,v56
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v56.f32)));
	// vspltw128 v4,v61,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v7,v61,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vspltw128 v10,v61,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vrfim128 v61,v53
	_mm_store_ps(v61.f32, _mm_round_ps(_mm_load_ps(v53.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vand128 v54,v54,v55
	_mm_store_si128((__m128i*)v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)v55.u8)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v0,v1,v2
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v31,v0,v30,v31
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v30.f32)), _mm_load_ps(v31.f32)));
	// vmulfp128 v2,v0,v63
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v3,v61,v63
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v1,v13,v29,v1
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v31,v13,v28,v31
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v28.f32)), _mm_load_ps(v31.f32)));
	// vmulfp128 v30,v13,v13
	_mm_store_ps(v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v27,v1
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v27.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v0,v26,v31
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v26.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v0,v30,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v2,v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v3.f32)));
	// vrfim128 v61,v0
	_mm_store_ps(v61.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vsubfp128 v0,v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v61.f32)));
	// vexptefp128 v61,v61
	v61.f32[0] = exp2f(v61.f32[0]);
	v61.f32[1] = exp2f(v61.f32[1]);
	v61.f32[2] = exp2f(v61.f32[2]);
	v61.f32[3] = exp2f(v61.f32[3]);
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v0,v4,v12
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v0,v6,v5
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v7,v13,v7,v4
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v8,v13,v8,v6
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v6.f32)));
	// vslw128 v54,v54,v60
	v54.u32[0] = v54.u32[0] << (v60.u8[0] & 0x1F);
	v54.u32[1] = v54.u32[1] << (v60.u8[4] & 0x1F);
	v54.u32[2] = v54.u32[2] << (v60.u8[8] & 0x1F);
	v54.u32[3] = v54.u32[3] << (v60.u8[12] & 0x1F);
	// vand128 v57,v62,v57
	_mm_store_si128((__m128i*)v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vmaddfp v7,v0,v10,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v13,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vslw128 v60,v60,v58
	v60.u32[0] = v60.u32[0] << (v58.u8[0] & 0x1F);
	v60.u32[1] = v60.u32[1] << (v58.u8[4] & 0x1F);
	v60.u32[2] = v60.u32[2] << (v58.u8[8] & 0x1F);
	v60.u32[3] = v60.u32[3] << (v58.u8[12] & 0x1F);
	// vcmpeqfp128 v58,v62,v59
	_mm_store_ps(v58.f32, _mm_cmpeq_ps(_mm_load_ps(v62.f32), _mm_load_ps(v59.f32)));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vcmpgtfp128 v53,v59,v63
	_mm_store_ps(v53.f32, _mm_cmpgt_ps(_mm_load_ps(v59.f32), _mm_load_ps(v63.f32)));
	// vand128 v57,v57,v54
	_mm_store_si128((__m128i*)v57.u8, _mm_and_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v54.u8)));
	// vrfiz128 v54,v63
	_mm_store_ps(v54.f32, _mm_round_ps(_mm_load_ps(v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vcmpgtfp128 v62,v59,v62
	_mm_store_ps(v62.f32, _mm_cmpgt_ps(_mm_load_ps(v59.f32), _mm_load_ps(v62.f32)));
	// vsrw128 v10,v60,v55
	ctx.v10.u32[0] = v60.u32[0] >> (v55.u8[0] & 0x1F);
	ctx.v10.u32[1] = v60.u32[1] >> (v55.u8[4] & 0x1F);
	ctx.v10.u32[2] = v60.u32[2] >> (v55.u8[8] & 0x1F);
	ctx.v10.u32[3] = v60.u32[3] >> (v55.u8[12] & 0x1F);
	// vmaddfp v8,v0,v11,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// vor128 v11,v59,v57
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vor128 v0,v56,v56
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v56.u8));
	// vor128 v60,v58,v9
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vcmpeqfp128 v63,v63,v54
	_mm_store_ps(v63.f32, _mm_cmpeq_ps(_mm_load_ps(v63.f32), _mm_load_ps(v54.f32)));
	// vmaddfp v7,v13,v8,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v7.f32)));
	// vandc128 v13,v58,v53
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v58.u8)));
	// vsel v13,v10,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vandc128 v63,v62,v63
	_mm_store_si128((__m128i*)v63.u8, _mm_andnot_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// vsel v8,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vor128 v62,v7,v7
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vor128 v7,v63,v60
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vrefp128 v0,v62
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(v62.f32)));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v62.u8));
	// vor128 v10,v62,v62
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v62.u8));
	// vnmsubfp v6,v9,v0,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v61,v12
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v0,v63,v57
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v57.u8)));
	// vsel v13,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_825EFFDC"))) PPC_WEAK_FUNC(sub_825EFFDC);
PPC_FUNC_IMPL(__imp__sub_825EFFDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825EFFE0"))) PPC_WEAK_FUNC(sub_825EFFE0);
PPC_FUNC_IMPL(__imp__sub_825EFFE0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mullw. r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// ble 0x825f0020
	if (!cr0.gt) goto loc_825F0020;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_825F0008:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x825f0008
	if (cr6.lt) goto loc_825F0008;
loc_825F0020:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f0044
	if (!cr6.gt) goto loc_825F0044;
	// addi r11,r1,28
	r11.s64 = ctx.r1.s64 + 28;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq 0x825f0044
	if (cr0.eq) goto loc_825F0044;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_825F003C:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825f003c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F003C;
loc_825F0044:
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r11.s64 = ctx.r5.s32 >> 1;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// stwx r27,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r27.u32);
	// stwx r27,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r27.u32);
	// beq cr6,0x825f00ac
	if (cr6.eq) goto loc_825F00AC;
	// addi r11,r5,2
	r11.s64 = ctx.r5.s64 + 2;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r29.u32);
	// stwx r29,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r29.u32);
loc_825F00AC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f00d8
	if (!cr6.gt) goto loc_825F00D8;
	// addi r11,r1,32
	r11.s64 = ctx.r1.s64 + 32;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_825F00BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x825f00d0
	if (!cr6.eq) goto loc_825F00D0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825F00D0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825f00bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F00BC;
loc_825F00D8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x825f042c
	if (!cr6.gt) goto loc_825F042C;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// subf r30,r4,r11
	r30.s64 = r11.s64 - ctx.r4.s64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfd f10,7288(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 7288);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,4
	r31.s64 = 4;
	// lfs f12,6196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
loc_825F010C:
	// li r7,512
	ctx.r7.s64 = 512;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f01d8
	if (!cr6.gt) goto loc_825F01D8;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// subf r9,r11,r30
	ctx.r9.s64 = r30.s64 - r11.s64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_825F0130:
	// lfsux f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	f0.f64 = double(temp.f32);
	// stfsu f0,4(r8)
	temp.f32 = float(f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x825f0130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F0130;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_825F0144:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// ble cr6,0x825f0190
	if (!cr6.gt) goto loc_825F0190;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fadd f0,f0,f10
	f0.f64 = f0.f64 + ctx.f10.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x825f01b4
	goto loc_825F01B4;
loc_825F0190:
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsub f0,f0,f10
	f0.f64 = f0.f64 - ctx.f10.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, f0.u64);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
loc_825F01B4:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// subfic r10,r10,2
	xer.ca = ctx.r10.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// stwx r9,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825f0144
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F0144;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x825f02c8
	if (!cr6.gt) goto loc_825F02C8;
loc_825F01D8:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f029c
	if (!cr6.gt) goto loc_825F029C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_825F01F4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x825f0258
	if (!cr6.gt) goto loc_825F0258;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwax r4,r11,r4
	ctx.r4.s64 = int32_t(PPC_LOAD_U32(r11.u32 + ctx.r4.u32));
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fdivs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x825f025c
	goto loc_825F025C;
loc_825F0258:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_825F025C:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bge cr6,0x825f0290
	if (!cr6.lt) goto loc_825F0290;
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sraw r10,r31,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r10.s64 = r31.s32 >> temp.u32;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x825f0290
	if (cr6.lt) goto loc_825F0290;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x825f0290
	if (!cr6.lt) goto loc_825F0290;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_825F0290:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825f01f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F01F4;
loc_825F029C:
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sraw r8,r31,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf. r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x825f01d8
	if (cr0.gt) goto loc_825F01D8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
loc_825F02C8:
	// bge cr6,0x825f03e4
	if (!cr6.lt) goto loc_825F03E4;
loc_825F02CC:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f03bc
	if (!cr6.gt) goto loc_825F03BC;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_825F02E8:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x825f0354
	if (!cr6.gt) goto loc_825F0354;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,32
	r26.s64 = ctx.r1.s64 + 32;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// lfd f9,72(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fdivs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x825f0358
	goto loc_825F0358;
loc_825F0354:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_825F0358:
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sraw r9,r31,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r9.s64 = r31.s32 >> temp.u32;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bgt cr6,0x825f03b0
	if (cr6.gt) goto loc_825F03B0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825f038c
	if (!cr6.eq) goto loc_825F038C;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x825f03a0
	if (cr6.gt) goto loc_825F03A0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_825F038C:
	// ble cr6,0x825f03b0
	if (!cr6.gt) goto loc_825F03B0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-256
	cr6.compare<int32_t>(ctx.r10.s32, -256, xer);
	// ble cr6,0x825f03b0
	if (!cr6.gt) goto loc_825F03B0;
loc_825F03A0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x825f03b0
	if (!cr6.lt) goto loc_825F03B0;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_825F03B0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825f02e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F02E8;
loc_825F03BC:
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,32
	ctx.r9.s64 = ctx.r1.s64 + 32;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r9,r31,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r9.s64 = r31.s32 >> temp.u32;
	// add. r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// blt 0x825f02cc
	if (cr0.lt) goto loc_825F02CC;
loc_825F03E4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x825f0420
	if (!cr6.gt) goto loc_825F0420;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
loc_825F03FC:
	// addi r8,r1,32
	ctx.r8.s64 = ctx.r1.s64 + 32;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subfic r8,r8,2
	xer.ca = ctx.r8.u32 <= 2;
	ctx.r8.s64 = 2 - ctx.r8.s64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// stwux r8,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825f03fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F03FC;
loc_825F0420:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x825f010c
	if (!cr0.eq) goto loc_825F010C;
loc_825F042C:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
}

__attribute__((alias("__imp__sub_825F0430"))) PPC_WEAK_FUNC(sub_825F0430);
PPC_FUNC_IMPL(__imp__sub_825F0430) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825F0434"))) PPC_WEAK_FUNC(sub_825F0434);
PPC_FUNC_IMPL(__imp__sub_825F0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F0438"))) PPC_WEAK_FUNC(sub_825F0438);
PPC_FUNC_IMPL(__imp__sub_825F0438) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f30,f1
	f30.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,11220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11220);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x825f04c8
	if (!cr6.lt) goto loc_825F04C8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,11216(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11216);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,11212(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11212);
	f0.f64 = double(temp.f32);
	// lfs f13,11208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11208);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f12,11204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11204);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,11200(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,11196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,11192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f0,f7,f0,f13
	f0.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f7,f12
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f0,f0,f7,f11
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f0,f0,f7,f10
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f0,f0,f7,f9
	f0.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f1,f0,f7,f8
	ctx.f1.f64 = double(float(f0.f64 * ctx.f7.f64 + ctx.f8.f64));
	// b 0x825f05c4
	goto loc_825F05C4;
loc_825F04C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fdivs f29,f0,f30
	f29.f64 = double(float(f0.f64 / f30.f64));
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x825efc70
	sub_825EFC70(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v63
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v63.f32))));
	// lfs f0,11188(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11188);
	f0.f64 = double(temp.f32);
	// vmulfp128 v12,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f13,11184(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11184);
	ctx.f13.f64 = double(temp.f32);
	// vmulfp128 v13,v63,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v11.f32)));
	// fmsubs f13,f29,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f29.f64 * f0.f64 - ctx.f13.f64));
	// lfs f0,11180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11180);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// vcmpeqfp128 v62,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v63.u8));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f12,11172(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11172);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	f0.f64 = double(float(ctx.f13.f64 * f29.f64 + f0.f64));
	// lfs f13,11176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11176);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v11,v13,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f10,11164(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,11168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,11160(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11160);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmsubs f13,f0,f29,f13
	ctx.f13.f64 = double(float(f0.f64 * f29.f64 - ctx.f13.f64));
	// lfs f0,11156(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11156);
	f0.f64 = double(temp.f32);
	// vmaddfp v0,v0,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	_mm_store_ps(v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// fmadds f13,f13,f29,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64 + ctx.f12.f64));
	// vmulfp128 v0,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8)));
	// fmsubs f13,f13,f29,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64 - ctx.f11.f64));
	// vsel v13,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f13,f13,f29,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64 + ctx.f10.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// fmadds f13,f13,f29,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64 + ctx.f9.f64));
	// fmadds f0,f13,f29,f0
	f0.f64 = double(float(ctx.f13.f64 * f29.f64 + f0.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 * ctx.f12.f64));
loc_825F05C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F05DC"))) PPC_WEAK_FUNC(sub_825F05DC);
PPC_FUNC_IMPL(__imp__sub_825F05DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F05E0"))) PPC_WEAK_FUNC(sub_825F05E0);
PPC_FUNC_IMPL(__imp__sub_825F05E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// vspltisw128 v63,1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x1)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// vcsxwfp128 v11,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)v63.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// fdivs f12,f0,f2
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(f0.f64 / ctx.f2.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fnmsubs f0,f12,f12,f13
	f0.f64 = double(float(-(ctx.f12.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v63.f32))));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v63.u8));
	// vmulfp128 v13,v63,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v11.f32)));
	// vcmpeqfp128 v62,v0,v0
	_mm_store_ps(v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v13,v12,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v61,v11,v11
	_mm_store_ps(v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v13,v61,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8)));
	// vsel v13,v0,v10,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(f0.f64 * ctx.f3.f64));
	// bl 0x825f0438
	sub_825F0438(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825f0438
	sub_825F0438(ctx, base);
	// fdivs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 / ctx.f1.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F0698"))) PPC_WEAK_FUNC(sub_825F0698);
PPC_FUNC_IMPL(__imp__sub_825F0698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F069C"))) PPC_WEAK_FUNC(sub_825F069C);
PPC_FUNC_IMPL(__imp__sub_825F069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F06A0"))) PPC_WEAK_FUNC(sub_825F06A0);
PPC_FUNC_IMPL(__imp__sub_825F06A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x825f06cc
	if (!cr6.eq) goto loc_825F06CC;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f1,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825f06e4
	goto loc_825F06E4;
loc_825F06CC:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825efd10
	sub_825EFD10(ctx, base);
	// fdivs f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / f31.f64));
loc_825F06E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F06F4"))) PPC_WEAK_FUNC(sub_825F06F4);
PPC_FUNC_IMPL(__imp__sub_825F06F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F06F8"))) PPC_WEAK_FUNC(sub_825F06F8);
PPC_FUNC_IMPL(__imp__sub_825F06F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825f0774
	if (!cr6.lt) goto loc_825F0774;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f2,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-19644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19644);
	f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,-31320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31320);
	f0.f64 = double(temp.f32);
	// lfs f13,3648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f30,f0,f12
	f0.f64 = double(float(f30.f64 * f0.f64 - ctx.f12.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x825f07e0
	goto loc_825F07E0;
loc_825F0774:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x825f07d8
	if (!cr6.lt) goto loc_825F07D8;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f2,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fabs f10,f31
	ctx.f10.u64 = f31.u64 & ~0x8000000000000000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-19644(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19644);
	f0.f64 = double(temp.f32);
	// lfs f13,-24324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4580);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	f0.f64 = double(float(f29.f64 * f0.f64 - ctx.f11.f64));
	// fnmsubs f0,f10,f13,f0
	f0.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - f0.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x825f07e0
	goto loc_825F07E0;
loc_825F07D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
loc_825F07E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F07F8"))) PPC_WEAK_FUNC(sub_825F07F8);
PPC_FUNC_IMPL(__imp__sub_825F07F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F07FC"))) PPC_WEAK_FUNC(sub_825F07FC);
PPC_FUNC_IMPL(__imp__sub_825F07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F0800"))) PPC_WEAK_FUNC(sub_825F0800);
PPC_FUNC_IMPL(__imp__sub_825F0800) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x825f087c
	if (!cr6.lt) goto loc_825F087C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f2,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -912);
	f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,11048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11048);
	f0.f64 = double(temp.f32);
	// lfs f13,-23476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23476);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f30,f0,f12
	f0.f64 = double(float(f30.f64 * f0.f64 - ctx.f12.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x825f08e8
	goto loc_825F08E8;
loc_825F087C:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// bge cr6,0x825f08e0
	if (!cr6.lt) goto loc_825F08E0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f30,3640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fabs f10,f31
	ctx.f10.u64 = f31.u64 & ~0x8000000000000000;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-912(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -912);
	f0.f64 = double(temp.f32);
	// lfs f13,7136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19644);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	f0.f64 = double(float(f29.f64 * f0.f64 - ctx.f11.f64));
	// fnmsubs f0,f10,f13,f0
	f0.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - f0.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x825f08e8
	goto loc_825F08E8;
loc_825F08E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
loc_825F08E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F0900"))) PPC_WEAK_FUNC(sub_825F0900);
PPC_FUNC_IMPL(__imp__sub_825F0900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F0904"))) PPC_WEAK_FUNC(sub_825F0904);
PPC_FUNC_IMPL(__imp__sub_825F0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825F0908"))) PPC_WEAK_FUNC(sub_825F0908);
PPC_FUNC_IMPL(__imp__sub_825F0908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaae4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lfs f25,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f25.f64 = double(temp.f32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// mullw r31,r4,r5
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x825f0958
	if (cr6.eq) goto loc_825F0958;
	// fmr f30,f25
	f30.f64 = f25.f64;
	// b 0x825f095c
	goto loc_825F095C;
loc_825F0958:
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = f0.f64;
loc_825F095C:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfs f26,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f26.f64 = double(temp.f32);
	// beq cr6,0x825f0c68
	if (cr6.eq) goto loc_825F0C68;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825f0bec
	if (cr6.eq) goto loc_825F0BEC;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825f0b70
	if (cr6.eq) goto loc_825F0B70;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x825f0b10
	if (cr6.eq) goto loc_825F0B10;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x825f0a98
	if (cr6.eq) goto loc_825F0A98;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x825f09f8
	if (cr6.eq) goto loc_825F09F8;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x825f09f8
	if (!cr6.eq) goto loc_825F09F8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f09c0
	if (cr6.eq) goto loc_825F09C0;
	// addi r11,r28,-4
	r11.s64 = r28.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x825f09c0
	if (cr0.eq) goto loc_825F09C0;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_825F09B8:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x825f09b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F09B8;
loc_825F09C0:
	// subf r11,r27,r31
	r11.s64 = r31.s64 - r27.s64;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825f0cc4
	if (!cr6.lt) goto loc_825F0CC4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_825F09E4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfsu f26,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f09e4
	if (cr6.lt) goto loc_825F09E4;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F09F8:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// rlwinm r10,r31,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r31
	ctr.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_825F0A10:
	// subf r9,r27,r10
	ctx.r9.s64 = ctx.r10.s64 - r27.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825f0a48
	if (cr6.lt) goto loc_825F0A48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825f0a48
	if (!cr6.lt) goto loc_825F0A48;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// b 0x825f0a7c
	goto loc_825F0A7C;
loc_825F0A48:
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825f0a84
	if (!cr6.lt) goto loc_825F0A84;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825f0a84
	if (cr6.lt) goto loc_825F0A84;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
loc_825F0A7C:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x825f0a88
	goto loc_825F0A88;
loc_825F0A84:
	// stfs f25,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_825F0A88:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x825f0a10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F0A10;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F0A98:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f26,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f26.f64 / f29.f64));
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_825F0AC4:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f28,f0,f27
	f28.f64 = double(float(f0.f64 * f27.f64));
	// fmuls f1,f31,f28
	ctx.f1.f64 = double(float(f31.f64 * f28.f64));
	// bl 0x825f06a0
	sub_825F06A0(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x825f06a0
	sub_825F06A0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f24,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f24.f64 * ctx.f1.f64));
	// stfsu f0,4(r29)
	temp.f32 = float(f0.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x825f0ac4
	if (cr6.lt) goto loc_825F0AC4;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F0B10:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_825F0B38:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(f0.f64 * f27.f64));
	// bl 0x825f06f8
	sub_825F06F8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x825f0b38
	if (cr6.lt) goto loc_825F0B38;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F0B70:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f26,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f26.f64 / f29.f64));
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f28,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f28.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_825F0BA4:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x825efdf8
	sub_825EFDF8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x825f0ba4
	if (cr6.lt) goto loc_825F0BA4;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F0BEC:
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// li r30,0
	r30.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsubs f28,f31,f30
	f28.f64 = double(float(f31.f64 - f30.f64));
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
loc_825F0C18:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f24,f0
	f24.f64 = double(float(f0.f64));
	// fsubs f0,f24,f31
	f0.f64 = double(float(f24.f64 - f31.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(f0.f64 * f27.f64));
	// bl 0x825f06a0
	sub_825F06A0(ctx, base);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x825f05e0
	sub_825F05E0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f23,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f23.f64 * ctx.f1.f64));
	// stfsu f0,4(r29)
	temp.f32 = float(f0.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x825f0c18
	if (cr6.lt) goto loc_825F0C18;
	// b 0x825f0cc4
	goto loc_825F0CC4;
loc_825F0C68:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825f0cc4
	if (cr6.eq) goto loc_825F0CC4;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_825F0C90:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(f0.f64 * f27.f64));
	// bl 0x825f0800
	sub_825F0800(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x825f0c90
	if (cr6.lt) goto loc_825F0C90;
loc_825F0CC4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x825f0cd0
	if (cr6.eq) goto loc_825F0CD0;
	// stfs f25,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
loc_825F0CD0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825f0d30
	if (cr6.eq) goto loc_825F0D30;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_825F0CE0:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	f0.f64 = f25.f64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825f0d24
	if (cr6.eq) goto loc_825F0D24;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctr.u64 = r26.u64;
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
loc_825F0CF8:
	// lfsux f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ea = ctx.r10.u32 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// bdnz 0x825f0cf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F0CF8;
	// fdivs f0,f26,f0
	f0.f64 = double(float(f26.f64 / f0.f64));
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_825F0D10:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x825f0d10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825F0D10;
loc_825F0D24:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x825f0ce0
	if (!cr0.eq) goto loc_825F0CE0;
loc_825F0D30:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_825F0D3C"))) PPC_WEAK_FUNC(sub_825F0D3C);
PPC_FUNC_IMPL(__imp__sub_825F0D3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825F0D40"))) PPC_WEAK_FUNC(sub_825F0D40);
PPC_FUNC_IMPL(__imp__sub_825F0D40) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825f0d7c
	if (!cr6.eq) goto loc_825F0D7C;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r11.u64);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
loc_825F0D7C:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x825f0d94
	if (!cr6.lt) goto loc_825F0D94;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_825F0D94:
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f11,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x825f0da8
	if (!cr6.gt) goto loc_825F0DA8;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0DA8:
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,11264(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11264);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,26628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26628);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// beq cr6,0x825f0e64
	if (cr6.eq) goto loc_825F0E64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825f0e64
	if (cr6.eq) goto loc_825F0E64;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x825f0de0
	if (!cr6.lt) goto loc_825F0DE0;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_825F0DE0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x825f0dec
	if (!cr6.gt) goto loc_825F0DEC;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0DEC:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f13,-32360(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32360);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f13
	ctx.f8.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,4576(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4576);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,11256(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 11256);
	// fcmpu cr6,f1,f12
	cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// fnmsubs f13,f8,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * f0.f64 - ctx.f13.f64)));
	// ble cr6,0x825f0e24
	if (!cr6.gt) goto loc_825F0E24;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,11248(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 11248);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x825f0e28
	if (cr6.lt) goto loc_825F0E28;
loc_825F0E24:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F0E28:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x825f0e34
	if (!cr6.lt) goto loc_825F0E34;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F0E34:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x825f0e40
	if (!cr6.lt) goto loc_825F0E40;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F0E40:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x825f0e58
	if (cr6.lt) goto loc_825F0E58;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0E58:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// b 0x825f0ea8
	goto loc_825F0EA8;
loc_825F0E64:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,11240(r9)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 11240);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825f0e84
	if (!cr6.gt) goto loc_825F0E84;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,11232(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 11232);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x825f0e88
	if (cr6.lt) goto loc_825F0E88;
loc_825F0E84:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F0E88:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x825f0e94
	if (!cr6.lt) goto loc_825F0E94;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_825F0E94:
	// fdivs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x825f0ea4
	if (cr6.lt) goto loc_825F0EA4;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0EA4:
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
loc_825F0EA8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -372);
	f0.f64 = double(temp.f32);
	// lis r11,31
	r11.s64 = 2031616;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,-32732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32732);
	f0.f64 = double(temp.f32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// lfs f10,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f10
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f10.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// stw r9,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r9.u32);
	// ble cr6,0x825f0ef0
	if (!cr6.gt) goto loc_825F0EF0;
	// stw r11,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r11.u32);
loc_825F0EF0:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x825f0f3c
	if (!cr6.eq) goto loc_825F0F3C;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x825f0f10
	if (!cr6.lt) goto loc_825F0F10;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_825F0F10:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x825f0f1c
	if (!cr6.gt) goto loc_825F0F1C;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0F1C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,3640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2816);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,3648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3648);
	ctx.f13.f64 = double(temp.f32);
	// b 0x825f0fbc
	goto loc_825F0FBC;
loc_825F0F3C:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x825f0f7c
	if (!cr6.eq) goto loc_825F0F7C;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x825f0f54
	if (!cr6.lt) goto loc_825F0F54;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_825F0F54:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x825f0f60
	if (!cr6.gt) goto loc_825F0F60;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0F60:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f13,-31316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11224);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f2,f13,f0,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f10.f64));
	// b 0x825f0fcc
	goto loc_825F0FCC;
loc_825F0F7C:
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x825f0fc4
	if (!cr6.eq) goto loc_825F0FC4;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x825f0f94
	if (!cr6.lt) goto loc_825F0F94;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_825F0F94:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x825f0fa0
	if (!cr6.gt) goto loc_825F0FA0;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_825F0FA0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,3656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3656);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7224);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,15536(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15536);
	ctx.f13.f64 = double(temp.f32);
loc_825F0FBC:
	// fmadds f2,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// b 0x825f0fcc
	goto loc_825F0FCC;
loc_825F0FC4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f2,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
loc_825F0FCC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x825f0fdc
	if (!cr6.eq) goto loc_825F0FDC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_825F0FDC:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825f0908
	sub_825F0908(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825effe0
	sub_825EFFE0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825F1018"))) PPC_WEAK_FUNC(sub_825F1018);
PPC_FUNC_IMPL(__imp__sub_825F1018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825F101C"))) PPC_WEAK_FUNC(sub_825F101C);
PPC_FUNC_IMPL(__imp__sub_825F101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

