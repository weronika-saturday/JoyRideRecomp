#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8270F7B0"))) PPC_WEAK_FUNC(sub_8270F7B0);
PPC_FUNC_IMPL(__imp__sub_8270F7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// addi r8,r9,22000
	ctx.r8.s64 = ctx.r9.s64 + 22000;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r7,24192(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r31,r11,23752
	r31.s64 = r11.s64 + 23752;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,508(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 508);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x8270f804
	if (!cr6.eq) goto loc_8270F804;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
loc_8270F804:
	// li r25,0
	r25.s64 = 0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// li r26,1
	r26.s64 = 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// addi r24,r11,24772
	r24.s64 = r11.s64 + 24772;
	// addi r23,r10,-15152
	r23.s64 = ctx.r10.s64 + -15152;
	// beq cr6,0x8270f904
	if (cr6.eq) goto loc_8270F904;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// srw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 >> (r28.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// blt cr6,0x8270f854
	if (cr6.lt) goto loc_8270F854;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8270F854:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(r31.u32 + 524, ctx.r10.u32);
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// srw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 >> (r28.u8 & 0x3F));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8270f87c
	if (cr6.lt) goto loc_8270F87C;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8270F87C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r10,31
	ctx.r9.s64 = ctx.r10.s64 + 31;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r4,r11,31
	ctx.r4.s64 = r11.s64 + 31;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// addi r27,r23,12
	r27.s64 = r23.s64 + 12;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// rlwinm r3,r9,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,532(r31)
	PPC_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// addi r8,r31,268
	ctx.r8.s64 = r31.s64 + 268;
	// stb r5,460(r31)
	PPC_STORE_U8(r31.u32 + 460, ctx.r5.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r11.u32);
	// rlwinm r4,r4,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r26,540(r31)
	PPC_STORE_U8(r31.u32 + 540, r26.u8);
	// stw r30,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r30.u32);
	// stb r28,464(r31)
	PPC_STORE_U8(r31.u32 + 464, r28.u8);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x8270f928
	goto loc_8270F928;
loc_8270F904:
	// li r11,88
	r11.s64 = 88;
	// stb r25,540(r31)
	PPC_STORE_U8(r31.u32 + 540, r25.u8);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,560(r31)
	PPC_STORE_U32(r31.u32 + 560, r25.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r11.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stb r25,460(r31)
	PPC_STORE_U8(r31.u32 + 460, r25.u8);
	// stb r25,464(r31)
	PPC_STORE_U8(r31.u32 + 464, r25.u8);
loc_8270F928:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8270fa80
	if (cr6.eq) goto loc_8270FA80;
	// lwz r11,100(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// srw r11,r10,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r24.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8270f95c
	if (cr6.lt) goto loc_8270F95C;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8270F95C:
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r22
	ctx.r10.u64 = r22.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r22.u8 & 0x3F));
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x8270f980
	if (cr6.lt) goto loc_8270F980;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
loc_8270F980:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// blt cr6,0x8270f990
	if (cr6.lt) goto loc_8270F990;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8270F990:
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8270f99c
	if (!cr6.eq) goto loc_8270F99C;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_8270F99C:
	// addi r8,r11,15
	ctx.r8.s64 = r11.s64 + 15;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r6,r8,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lis r5,28
	ctx.r5.s64 = 1835008;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// ori r3,r5,8192
	ctx.r3.u64 = ctx.r5.u64 | 8192;
	// rlwinm r11,r4,9,0,22
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x8270f9cc
	if (!cr6.gt) goto loc_8270F9CC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_8270F9CC:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8270f9e4
	if (cr6.lt) goto loc_8270F9E4;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8270F9E4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(r31.u32 + 524, ctx.r10.u32);
	// lwz r11,80(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// srw r11,r11,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (r11.u32 >> (r22.u8 & 0x3F));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8270fa0c
	if (cr6.lt) goto loc_8270FA0C;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8270FA0C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,31
	ctx.r4.s64 = ctx.r10.s64 + 31;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r28,r11,31
	r28.s64 = r11.s64 + 31;
	// addi r27,r23,12
	r27.s64 = r23.s64 + 12;
	// rlwinm r3,r4,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// addi r8,r31,468
	ctx.r8.s64 = r31.s64 + 468;
	// stw r10,532(r31)
	PPC_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// rlwinm r4,r28,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r26,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r26.u8);
	// stw r11,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, r11.u32);
	// stw r29,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r29.u32);
	// stb r22,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r22.u8);
	// stb r21,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r21.u8);
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,100(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r24
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lwzx r5,r10,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// b 0x8270faa4
	goto loc_8270FAA4;
loc_8270FA80:
	// li r11,88
	r11.s64 = 88;
	// stb r25,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r25.u8);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r25.u32);
	// stw r11,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, r11.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stb r25,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r25.u8);
	// stb r25,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r25.u8);
loc_8270FAA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8270FAB8"))) PPC_WEAK_FUNC(sub_8270FAB8);
PPC_FUNC_IMPL(__imp__sub_8270FAB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8270FABC"))) PPC_WEAK_FUNC(sub_8270FABC);
PPC_FUNC_IMPL(__imp__sub_8270FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270FAC0"))) PPC_WEAK_FUNC(sub_8270FAC0);
PPC_FUNC_IMPL(__imp__sub_8270FAC0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r20,0
	r20.s64 = 0;
	// addi r21,r11,22000
	r21.s64 = r11.s64 + 22000;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r22,r20
	r22.u64 = r20.u64;
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwz r11,296(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 296);
	// rldicr r29,r9,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r23,-1
	r23.s64 = -1;
	// addi r24,r11,20
	r24.s64 = r11.s64 + 20;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// addi r26,r11,25196
	r26.s64 = r11.s64 + 25196;
	// addi r25,r10,25256
	r25.s64 = ctx.r10.s64 + 25256;
loc_8270FB08:
	// addi r11,r21,204
	r11.s64 = r21.s64 + 204;
	// lwzx r8,r30,r11
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8270fbf4
	if (cr6.eq) goto loc_8270FBF4;
	// add r11,r22,r24
	r11.u64 = r22.u64 + r24.u64;
	// lbz r11,72(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x8270fbec
	if (cr6.eq) goto loc_8270FBEC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8270fbec
	if (cr0.eq) goto loc_8270FBEC;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r11,2(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 2);
	// rlwinm r31,r10,28,4,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8270fb58
	if (!cr6.gt) goto loc_8270FB58;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8270FB58:
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwzx r11,r30,r25
	r11.u64 = PPC_LOAD_U32(r30.u32 + r25.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8270fb94
	if (cr6.eq) goto loc_8270FB94;
	// add r11,r4,r31
	r11.u64 = ctx.r4.u64 + r31.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r11,r7,32
	r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srad r9,r29,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r29.s64 < 0) & (((r29.s64 >> temp.u64) << temp.u64) != r29.s64);
	ctx.r9.s64 = r29.s64 >> temp.u64;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x8270fbd4
	goto loc_8270FBD4;
loc_8270FB94:
	// lwzx r11,r30,r26
	r11.u64 = PPC_LOAD_U32(r30.u32 + r26.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8270fbdc
	if (!cr6.gt) goto loc_8270FBDC;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r6,r11,r31
	ctx.r6.s64 = r31.s64 - r11.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r7,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r7,r29,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r29.s64 < 0) & (((r29.s64 >> temp.u64) << temp.u64) != r29.s64);
	ctx.r7.s64 = r29.s64 >> temp.u64;
	// srd r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r8.u8 & 0x7F));
loc_8270FBD4:
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
loc_8270FBDC:
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// stwx r31,r30,r26
	PPC_STORE_U32(r30.u32 + r26.u32, r31.u32);
	// stwx r11,r30,r25
	PPC_STORE_U32(r30.u32 + r25.u32, r11.u32);
	// b 0x8270fbf4
	goto loc_8270FBF4;
loc_8270FBEC:
	// stwx r23,r30,r25
	PPC_STORE_U32(r30.u32 + r25.u32, r23.u32);
	// stwx r20,r30,r26
	PPC_STORE_U32(r30.u32 + r26.u32, r20.u32);
loc_8270FBF4:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r30,60
	cr6.compare<uint32_t>(r30.u32, 60, xer);
	// blt cr6,0x8270fb08
	if (cr6.lt) goto loc_8270FB08;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8270FC08"))) PPC_WEAK_FUNC(sub_8270FC08);
PPC_FUNC_IMPL(__imp__sub_8270FC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8270FC0C"))) PPC_WEAK_FUNC(sub_8270FC0C);
PPC_FUNC_IMPL(__imp__sub_8270FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270FC10"))) PPC_WEAK_FUNC(sub_8270FC10);
PPC_FUNC_IMPL(__imp__sub_8270FC10) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r20,r11,22000
	r20.s64 = r11.s64 + 22000;
	// lwz r11,496(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 496);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270fd5c
	if (cr6.eq) goto loc_8270FD5C;
	// addi r24,r11,20
	r24.s64 = r11.s64 + 20;
	// li r21,0
	r21.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r22,r21
	r22.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// rldicr r30,r9,63,63
	r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r23,-1
	r23.s64 = -1;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// addi r26,r11,25076
	r26.s64 = r11.s64 + 25076;
	// addi r25,r10,25136
	r25.s64 = ctx.r10.s64 + 25136;
loc_8270FC60:
	// addi r11,r20,308
	r11.s64 = r20.s64 + 308;
	// lwzx r8,r29,r11
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8270fd4c
	if (cr6.eq) goto loc_8270FD4C;
	// add r11,r22,r24
	r11.u64 = r22.u64 + r24.u64;
	// lbz r11,72(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x8270fd44
	if (cr6.eq) goto loc_8270FD44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r28,r11,r9
	r28.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8270fd44
	if (cr0.eq) goto loc_8270FD44;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r11,2(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 2);
	// rlwinm r31,r10,28,4,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8270fcb0
	if (!cr6.gt) goto loc_8270FCB0;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8270FCB0:
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwzx r11,r29,r25
	r11.u64 = PPC_LOAD_U32(r29.u32 + r25.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8270fcec
	if (cr6.eq) goto loc_8270FCEC;
	// add r11,r4,r31
	r11.u64 = ctx.r4.u64 + r31.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r11,r7,32
	r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srad r9,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	ctx.r9.s64 = r30.s64 >> temp.u64;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x8270fd2c
	goto loc_8270FD2C;
loc_8270FCEC:
	// lwzx r11,r29,r26
	r11.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8270fd34
	if (!cr6.gt) goto loc_8270FD34;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r6,r11,r31
	ctx.r6.s64 = r31.s64 - r11.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r7,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r10,r8,r11
	ctx.r10.s64 = r11.s64 - ctx.r8.s64;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r7,r30,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	ctx.r7.s64 = r30.s64 >> temp.u64;
	// srd r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r8.u8 & 0x7F));
loc_8270FD2C:
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d7258
	sub_825D7258(ctx, base);
loc_8270FD34:
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// stwx r31,r29,r26
	PPC_STORE_U32(r29.u32 + r26.u32, r31.u32);
	// stwx r11,r29,r25
	PPC_STORE_U32(r29.u32 + r25.u32, r11.u32);
	// b 0x8270fd4c
	goto loc_8270FD4C;
loc_8270FD44:
	// stwx r23,r29,r25
	PPC_STORE_U32(r29.u32 + r25.u32, r23.u32);
	// stwx r21,r29,r26
	PPC_STORE_U32(r29.u32 + r26.u32, r21.u32);
loc_8270FD4C:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r29,60
	cr6.compare<uint32_t>(r29.u32, 60, xer);
	// blt cr6,0x8270fc60
	if (cr6.lt) goto loc_8270FC60;
loc_8270FD5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8270FD60"))) PPC_WEAK_FUNC(sub_8270FD60);
PPC_FUNC_IMPL(__imp__sub_8270FD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8270FD64"))) PPC_WEAK_FUNC(sub_8270FD64);
PPC_FUNC_IMPL(__imp__sub_8270FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270FD68"))) PPC_WEAK_FUNC(sub_8270FD68);
PPC_FUNC_IMPL(__imp__sub_8270FD68) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,25672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25672);
	// lwz r30,21952(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21952);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270fdd4
	if (cr6.eq) goto loc_8270FDD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270fdd4
	if (!cr6.eq) goto loc_8270FDD4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8270FDD4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825dde80
	sub_825DDE80(ctx, base);
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

__attribute__((alias("__imp__sub_8270FDF8"))) PPC_WEAK_FUNC(sub_8270FDF8);
PPC_FUNC_IMPL(__imp__sub_8270FDF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270FDFC"))) PPC_WEAK_FUNC(sub_8270FDFC);
PPC_FUNC_IMPL(__imp__sub_8270FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270FE00"))) PPC_WEAK_FUNC(sub_8270FE00);
PPC_FUNC_IMPL(__imp__sub_8270FE00) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,25668(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25668);
	// lwz r30,21952(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21952);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270fe6c
	if (cr6.eq) goto loc_8270FE6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270fe6c
	if (!cr6.eq) goto loc_8270FE6C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8270FE6C:
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

__attribute__((alias("__imp__sub_8270FE80"))) PPC_WEAK_FUNC(sub_8270FE80);
PPC_FUNC_IMPL(__imp__sub_8270FE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270FE84"))) PPC_WEAK_FUNC(sub_8270FE84);
PPC_FUNC_IMPL(__imp__sub_8270FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270FE88"))) PPC_WEAK_FUNC(sub_8270FE88);
PPC_FUNC_IMPL(__imp__sub_8270FE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,30324(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 30324);
	// lwz r30,21952(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 21952);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270feec
	if (cr6.eq) goto loc_8270FEEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270feec
	if (!cr6.eq) goto loc_8270FEEC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8270FEEC:
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825d2e50
	sub_825D2E50(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r12,15
	r12.s64 = 15;
	// addi r30,r11,21920
	r30.s64 = r11.s64 + 21920;
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r9.u64);
	// lbz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// beq cr6,0x8270ff64
	if (cr6.eq) goto loc_8270FF64;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// addi r30,r10,25344
	r30.s64 = ctx.r10.s64 + 25344;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,508(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
	// bl 0x82710a10
	sub_82710A10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825d2e58
	sub_825D2E58(ctx, base);
	// b 0x8270ffa0
	goto loc_8270FFA0;
loc_8270FF64:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,25344
	ctx.r10.s64 = r11.s64 + 25344;
	// lwz r11,25336(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25336);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x825d2e58
	sub_825D2E58(ctx, base);
	// lwz r10,25336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 25336);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf r11,r8,r10
	r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r11,25336(r28)
	PPC_STORE_U32(r28.u32 + 25336, r11.u32);
loc_8270FFA0:
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r12,-16
	r12.s64 = -16;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & r12.u64;
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r30,21952(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 21952);
	// lwz r11,30320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30320);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8271000c
	if (cr6.eq) goto loc_8271000C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8271000c
	if (!cr6.eq) goto loc_8271000C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8271000C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82710010"))) PPC_WEAK_FUNC(sub_82710010);
PPC_FUNC_IMPL(__imp__sub_82710010) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82710014"))) PPC_WEAK_FUNC(sub_82710014);
PPC_FUNC_IMPL(__imp__sub_82710014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82710018"))) PPC_WEAK_FUNC(sub_82710018);
PPC_FUNC_IMPL(__imp__sub_82710018) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r10,25324(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25324);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82710050
	if (cr6.eq) goto loc_82710050;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25324(r11)
	PPC_STORE_U8(r11.u32 + 25324, ctx.r10.u8);
	// bl 0x8270fac0
	sub_8270FAC0(ctx, base);
loc_82710050:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r10,25325(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25325);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8271006c
	if (cr6.eq) goto loc_8271006C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25325(r11)
	PPC_STORE_U8(r11.u32 + 25325, ctx.r10.u8);
	// bl 0x8270fc10
	sub_8270FC10(ctx, base);
loc_8271006C:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-31933
	ctx.r3.s64 = -2092761088;
	// lwz r9,25328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25328);
	// addi r11,r6,2392
	r11.s64 = ctx.r6.s64 + 2392;
	// lwz r4,-18768(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18768);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r10,r31
	ctx.r6.s64 = r31.s64 - ctx.r10.s64;
	// lwz r3,25320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25320);
	// divwu r10,r6,r9
	ctx.r10.u32 = ctx.r6.u32 / ctx.r9.u32;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
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

__attribute__((alias("__imp__sub_827100D0"))) PPC_WEAK_FUNC(sub_827100D0);
PPC_FUNC_IMPL(__imp__sub_827100D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827100D4"))) PPC_WEAK_FUNC(sub_827100D4);
PPC_FUNC_IMPL(__imp__sub_827100D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827100D8"))) PPC_WEAK_FUNC(sub_827100D8);
PPC_FUNC_IMPL(__imp__sub_827100D8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r10,25324(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25324);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8271010c
	if (cr6.eq) goto loc_8271010C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25324(r11)
	PPC_STORE_U8(r11.u32 + 25324, ctx.r10.u8);
	// bl 0x8270fac0
	sub_8270FAC0(ctx, base);
loc_8271010C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r10,25325(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25325);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82710128
	if (cr6.eq) goto loc_82710128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,25325(r11)
	PPC_STORE_U8(r11.u32 + 25325, ctx.r10.u8);
	// bl 0x8270fc10
	sub_8270FC10(ctx, base);
loc_82710128:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r9,25328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25328);
	// addi r11,r6,2392
	r11.s64 = ctx.r6.s64 + 2392;
	// lwz r4,-18768(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18768);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// lwz r3,25320(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 25320);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r11,r7,r8
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x825e0bc8
	sub_825E0BC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82710180"))) PPC_WEAK_FUNC(sub_82710180);
PPC_FUNC_IMPL(__imp__sub_82710180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82710184"))) PPC_WEAK_FUNC(sub_82710184);
PPC_FUNC_IMPL(__imp__sub_82710184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82710188"))) PPC_WEAK_FUNC(sub_82710188);
PPC_FUNC_IMPL(__imp__sub_82710188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827102e8
	if (cr6.eq) goto loc_827102E8;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,2,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x827101d4
	if (cr6.eq) goto loc_827101D4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,27180
	ctx.r8.s64 = ctx.r10.s64 + 27180;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825dc928
	sub_825DC928(ctx, base);
loc_827101D4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,4,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x3;
	// rlwinm r9,r10,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82710204
	if (cr6.eq) goto loc_82710204;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,27192
	ctx.r8.s64 = ctx.r10.s64 + 27192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825dc8f8
	sub_825DC8F8(ctx, base);
loc_82710204:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82710254
	if (cr6.eq) goto loc_82710254;
	// lbz r10,25676(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 25676);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82710248
	if (cr6.eq) goto loc_82710248;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82710248:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825dd4c8
	sub_825DD4C8(ctx, base);
loc_82710254:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x827102a0
	if (cr6.eq) goto loc_827102A0;
	// lbz r10,25676(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 25676);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82710294
	if (cr6.eq) goto loc_82710294;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82710294:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825dd400
	sub_825DD400(ctx, base);
loc_827102A0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r4,r11,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827102c0
	if (cr6.eq) goto loc_827102C0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825df508
	sub_825DF508(ctx, base);
loc_827102C0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r4,r11,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// rlwinm r9,r10,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827103a8
	if (cr6.eq) goto loc_827103A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825dd570
	sub_825DD570(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_827102E8:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r8,r11,4,28,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xC;
	// addi r9,r10,27180
	ctx.r9.s64 = ctx.r10.s64 + 27180;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x825dc928
	sub_825DC928(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r6,r7,27192
	ctx.r6.s64 = ctx.r7.s64 + 27192;
	// rlwinm r4,r5,6,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xC;
	// lwzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// bl 0x825dc8f8
	sub_825DC8F8(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// lbz r3,25676(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 25676);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82710348
	if (cr6.eq) goto loc_82710348;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8271034c
	goto loc_8271034C;
loc_82710348:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8271034C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825dd4c8
	sub_825DD4C8(ctx, base);
	// lbz r11,25676(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8271037c
	if (cr6.eq) goto loc_8271037C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82710380
	goto loc_82710380;
loc_8271037C:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82710380:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825dd400
	sub_825DD400(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r4,r11,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// bl 0x825df508
	sub_825DF508(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r4,r10,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// bl 0x825dd570
	sub_825DD570(ctx, base);
loc_827103A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_827103AC"))) PPC_WEAK_FUNC(sub_827103AC);
PPC_FUNC_IMPL(__imp__sub_827103AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_827103B0"))) PPC_WEAK_FUNC(sub_827103B0);
PPC_FUNC_IMPL(__imp__sub_827103B0) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x827105f4
	if (cr6.eq) goto loc_827105F4;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827103ec
	if (cr6.eq) goto loc_827103EC;
	// bl 0x825dd020
	sub_825DD020(ctx, base);
loc_827103EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r4,r11,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271040c
	if (cr6.eq) goto loc_8271040C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd060
	sub_825DD060(ctx, base);
loc_8271040C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,5,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x7;
	// rlwinm r9,r10,5,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271043c
	if (cr6.eq) goto loc_8271043C;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-15216
	ctx.r8.s64 = ctx.r10.s64 + -15216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825dd090
	sub_825DD090(ctx, base);
loc_8271043C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r4,r11,6,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271045c
	if (cr6.eq) goto loc_8271045C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd0c8
	sub_825DD0C8(ctx, base);
loc_8271045C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r4,r11,14,24,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFF;
	// rlwinm r9,r10,14,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271047c
	if (cr6.eq) goto loc_8271047C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd300
	sub_825DD300(ctx, base);
loc_8271047C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r4,r11,22,24,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0xFF;
	// rlwinm r9,r10,22,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271049c
	if (cr6.eq) goto loc_8271049C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd320
	sub_825DD320(ctx, base);
loc_8271049C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// rlwinm r8,r9,25,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7;
	// addi r28,r10,27348
	r28.s64 = ctx.r10.s64 + 27348;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x827104cc
	if (cr6.eq) goto loc_827104CC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd170
	sub_825DD170(ctx, base);
loc_827104CC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,28,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// rlwinm r9,r10,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x827104f4
	if (cr6.eq) goto loc_827104F4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd1a8
	sub_825DD1A8(ctx, base);
loc_827104F4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,31,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r10,31,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271051c
	if (cr6.eq) goto loc_8271051C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd1e0
	sub_825DD1E0(ctx, base);
loc_8271051C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r27,r11,27284
	r27.s64 = r11.s64 + 27284;
	// rlwinm r11,r10,3,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// rlwinm r8,r9,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8271054c
	if (cr6.eq) goto loc_8271054C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dd140
	sub_825DD140(ctx, base);
loc_8271054C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,6,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7;
	// rlwinm r9,r10,6,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82710574
	if (cr6.eq) goto loc_82710574;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd240
	sub_825DD240(ctx, base);
loc_82710574:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,9,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7;
	// rlwinm r9,r10,9,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271059c
	if (cr6.eq) goto loc_8271059C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd278
	sub_825DD278(ctx, base);
loc_8271059C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,12,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// rlwinm r9,r10,12,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x827105c4
	if (cr6.eq) goto loc_827105C4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// bl 0x825dd2b0
	sub_825DD2B0(ctx, base);
loc_827105C4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,15,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// rlwinm r9,r10,15,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82710708
	if (cr6.eq) goto loc_82710708;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dd210
	sub_825DD210(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_827105F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd020
	sub_825DD020(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// bl 0x825dd060
	sub_825DD060(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// rlwinm r6,r7,7,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1C;
	// addi r8,r9,-15216
	ctx.r8.s64 = ctx.r9.s64 + -15216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x825dd090
	sub_825DD090(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r5,6,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x1;
	// bl 0x825dd0c8
	sub_825DD0C8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r4,14,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFF;
	// bl 0x825dd300
	sub_825DD300(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,22,24,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0xFF;
	// bl 0x825dd320
	sub_825DD320(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r8,r9,27,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1C;
	// addi r29,r10,27348
	r29.s64 = ctx.r10.s64 + 27348;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r8,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// bl 0x825dd170
	sub_825DD170(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r7,30,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1C;
	// lwzx r4,r6,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r29.u32);
	// bl 0x825dd1a8
	sub_825DD1A8(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r5,1,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1C;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r29.u32);
	// bl 0x825dd1e0
	sub_825DD1E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,27284
	r28.s64 = r11.s64 + 27284;
	// rlwinm r9,r10,5,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1C;
	// lwzx r4,r9,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// bl 0x825dd140
	sub_825DD140(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r7,r8,8,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x1C;
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	// bl 0x825dd240
	sub_825DD240(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r6,11,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x1C;
	// lwzx r4,r5,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + r29.u32);
	// bl 0x825dd278
	sub_825DD278(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r4,14,27,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x1C;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x825dd2b0
	sub_825DD2B0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r10,17,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1C;
	// lwzx r4,r9,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// bl 0x825dd210
	sub_825DD210(ctx, base);
loc_82710708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8271070C"))) PPC_WEAK_FUNC(sub_8271070C);
PPC_FUNC_IMPL(__imp__sub_8271070C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82710710"))) PPC_WEAK_FUNC(sub_82710710);
PPC_FUNC_IMPL(__imp__sub_82710710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// subfic r10,r19,1
	xer.ca = r19.u32 <= 1;
	ctx.r10.s64 = 1 - r19.s64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// and r28,r8,r11
	r28.u64 = ctx.r8.u64 & r11.u64;
	// beq cr6,0x82710864
	if (cr6.eq) goto loc_82710864;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r21,r4,540
	r21.s64 = ctx.r4.s64 + 540;
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r20,r4,560
	r20.s64 = ctx.r4.s64 + 560;
	// lfs f30,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f30.f64 = double(temp.f32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// mr r23,r19
	r23.u64 = r19.u64;
	// li r18,2
	r18.s64 = 2;
	// lis r22,-31933
	r22.s64 = -2092761088;
	// addi r29,r11,-15184
	r29.s64 = r11.s64 + -15184;
loc_8271077C:
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(r19.u32, 1, xer);
	// ble cr6,0x82710790
	if (!cr6.gt) goto loc_82710790;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// slw r4,r18,r24
	ctx.r4.u64 = r24.u8 & 0x20 ? 0 : (r18.u32 << (r24.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710790:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
loc_82710798:
	// lbzx r11,r21,r31
	r11.u64 = PPC_LOAD_U8(r21.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827107e4
	if (cr6.eq) goto loc_827107E4;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r9,r31,r30
	ctx.r9.u64 = r31.u64 + r30.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lbz r8,460(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 460);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// or r4,r11,r31
	ctx.r4.u64 = r11.u64 | r31.u64;
	// lbz r9,464(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 464);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
loc_827107E4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82710798
	if (cr6.lt) goto loc_82710798;
	// lbz r11,1013(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1013);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82710854
	if (cr6.eq) goto loc_82710854;
	// lbz r11,25676(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 25676);
	// lwz r8,1020(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 1020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8271081c
	if (cr6.eq) goto loc_8271081C;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - f0.f64));
	// b 0x82710820
	goto loc_82710820;
loc_8271081C:
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
loc_82710820:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r9,517(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 517);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// lbz r8,516(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 516);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
loc_82710854:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x8271077c
	if (!cr0.eq) goto loc_8271077C;
loc_82710864:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
}

__attribute__((alias("__imp__sub_8271087C"))) PPC_WEAK_FUNC(sub_8271087C);
PPC_FUNC_IMPL(__imp__sub_8271087C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82710880"))) PPC_WEAK_FUNC(sub_82710880);
PPC_FUNC_IMPL(__imp__sub_82710880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,0(r4)
	r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// subfic r10,r18,1
	xer.ca = r18.u32 <= 1;
	ctx.r10.s64 = 1 - r18.s64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// and r27,r8,r11
	r27.u64 = ctx.r8.u64 & r11.u64;
	// beq cr6,0x827109fc
	if (cr6.eq) goto loc_827109FC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r17,r5,540
	r17.s64 = ctx.r5.s64 + 540;
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r21,r5,560
	r21.s64 = ctx.r5.s64 + 560;
	// lfs f30,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f30.f64 = double(temp.f32);
	// addi r20,r4,544
	r20.s64 = ctx.r4.s64 + 544;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r22,r18
	r22.u64 = r18.u64;
	// li r15,2
	r15.s64 = 2;
	// lis r16,-31933
	r16.s64 = -2092761088;
	// addi r28,r11,-15184
	r28.s64 = r11.s64 + -15184;
loc_827108F4:
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(r18.u32, 1, xer);
	// ble cr6,0x82710908
	if (!cr6.gt) goto loc_82710908;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// slw r4,r15,r23
	ctx.r4.u64 = r23.u8 & 0x20 ? 0 : (r15.u32 << (r23.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710908:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
loc_82710914:
	// lbzx r11,r17,r31
	r11.u64 = PPC_LOAD_U8(r17.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8271096c
	if (cr6.eq) goto loc_8271096C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x8271096c
	if (cr6.eq) goto loc_8271096C;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r9,r31,r30
	ctx.r9.u64 = r31.u64 + r30.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r10,r28,16
	ctx.r10.s64 = r28.s64 + 16;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lbz r8,460(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 460);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// or r4,r11,r31
	ctx.r4.u64 = r11.u64 | r31.u64;
	// lbz r9,464(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 464);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
loc_8271096C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82710914
	if (cr6.lt) goto loc_82710914;
	// lbz r11,1013(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1013);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827109ec
	if (cr6.eq) goto loc_827109EC;
	// lwz r11,1016(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 1016);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x827109ec
	if (cr6.eq) goto loc_827109EC;
	// lbz r11,25676(r16)
	r11.u64 = PPC_LOAD_U8(r16.u32 + 25676);
	// lwz r8,1020(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 1020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827109b4
	if (cr6.eq) goto loc_827109B4;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - f0.f64));
	// b 0x827109b8
	goto loc_827109B8;
loc_827109B4:
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
loc_827109B8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lbz r9,517(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 517);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// lbz r8,516(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 516);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
loc_827109EC:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r23,r23,2
	r23.s64 = r23.s64 + 2;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// bne 0x827108f4
	if (!cr0.eq) goto loc_827108F4;
loc_827109FC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
}

__attribute__((alias("__imp__sub_82710A08"))) PPC_WEAK_FUNC(sub_82710A08);
PPC_FUNC_IMPL(__imp__sub_82710A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_82710A0C"))) PPC_WEAK_FUNC(sub_82710A0C);
PPC_FUNC_IMPL(__imp__sub_82710A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82710A10"))) PPC_WEAK_FUNC(sub_82710A10);
PPC_FUNC_IMPL(__imp__sub_82710A10) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,100(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// beq cr6,0x82710b38
	if (cr6.eq) goto loc_82710B38;
	// addi r11,r5,136
	r11.s64 = ctx.r5.s64 + 136;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r6,r10,r21
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// bl 0x827148d8
	sub_827148D8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// addi r9,r21,12
	ctx.r9.s64 = r21.s64 + 12;
	// lwz r20,0(r21)
	r20.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subfic r8,r20,1
	xer.ca = r20.u32 <= 1;
	ctx.r8.s64 = 1 - r20.s64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r9
	r31.u64 = ctx.r6.u64 & ctx.r9.u64;
	// beq cr6,0x82710b14
	if (cr6.eq) goto loc_82710B14;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r24,r29,16
	r24.s64 = r29.s64 + 16;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r29,r20
	r29.u64 = r20.u64;
	// li r19,2
	r19.s64 = 2;
	// addi r25,r11,-15184
	r25.s64 = r11.s64 + -15184;
loc_82710ABC:
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(r20.u32, 1, xer);
	// ble cr6,0x82710ad0
	if (!cr6.gt) goto loc_82710AD0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r4,r19,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r19.u32 << (r28.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710AD0:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r10,r25,16
	ctx.r10.s64 = r25.s64 + 16;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// or r4,r11,r26
	ctx.r4.u64 = r11.u64 | r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82710abc
	if (!cr0.eq) goto loc_82710ABC;
loc_82710B14:
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// addi r5,r11,268
	ctx.r5.s64 = r11.s64 + 268;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// b 0x82710bd0
	goto loc_82710BD0;
loc_82710B38:
	// lwz r20,0(r21)
	r20.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r11,r21,12
	r11.s64 = r21.s64 + 12;
	// subfic r10,r20,1
	xer.ca = r20.u32 <= 1;
	ctx.r10.s64 = 1 - r20.s64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & r11.u64;
	// beq cr6,0x82710bd0
	if (cr6.eq) goto loc_82710BD0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r24,r29,16
	r24.s64 = r29.s64 + 16;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lfs f31,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r29,r20
	r29.u64 = r20.u64;
	// li r19,2
	r19.s64 = 2;
	// addi r25,r11,-15184
	r25.s64 = r11.s64 + -15184;
loc_82710B78:
	// cmplwi cr6,r20,1
	cr6.compare<uint32_t>(r20.u32, 1, xer);
	// ble cr6,0x82710b8c
	if (!cr6.gt) goto loc_82710B8C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r4,r19,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r19.u32 << (r28.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710B8C:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r10,r25,16
	ctx.r10.s64 = r25.s64 + 16;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// or r4,r11,r26
	ctx.r4.u64 = r11.u64 | r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82710b78
	if (!cr0.eq) goto loc_82710B78;
loc_82710BD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_82710BEC"))) PPC_WEAK_FUNC(sub_82710BEC);
PPC_FUNC_IMPL(__imp__sub_82710BEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82710BF0"))) PPC_WEAK_FUNC(sub_82710BF0);
PPC_FUNC_IMPL(__imp__sub_82710BF0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,100(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// beq cr6,0x82710d14
	if (cr6.eq) goto loc_82710D14;
	// lwz r5,1016(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1016);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x827149c8
	sub_827149C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// addi r11,r22,12
	r11.s64 = r22.s64 + 12;
	// lwz r21,0(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// subfic r10,r21,1
	xer.ca = r21.u32 <= 1;
	ctx.r10.s64 = 1 - r21.s64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & r11.u64;
	// beq cr6,0x82710d04
	if (cr6.eq) goto loc_82710D04;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lfs f31,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// li r19,2
	r19.s64 = 2;
	// lis r20,-31933
	r20.s64 = -2092761088;
	// addi r28,r11,-15184
	r28.s64 = r11.s64 + -15184;
loc_82710C90:
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(r21.u32, 1, xer);
	// ble cr6,0x82710ca4
	if (!cr6.gt) goto loc_82710CA4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r4,r19,r29
	ctx.r4.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710CA4:
	// lbz r11,25676(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + 25676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82710cbc
	if (cr6.eq) goto loc_82710CBC;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - f0.f64));
	// b 0x82710cc0
	goto loc_82710CC0;
loc_82710CBC:
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
loc_82710CC0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82710c90
	if (!cr0.eq) goto loc_82710C90;
loc_82710D04:
	// addi r4,r22,468
	ctx.r4.s64 = r22.s64 + 468;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// b 0x82710dcc
	goto loc_82710DCC;
loc_82710D14:
	// lwz r21,0(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r22,12
	r11.s64 = r22.s64 + 12;
	// subfic r10,r21,1
	xer.ca = r21.u32 <= 1;
	ctx.r10.s64 = 1 - r21.s64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & r11.u64;
	// beq cr6,0x82710dcc
	if (cr6.eq) goto loc_82710DCC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lfs f31,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// li r19,2
	r19.s64 = 2;
	// lis r22,-31933
	r22.s64 = -2092761088;
	// addi r28,r11,-15184
	r28.s64 = r11.s64 + -15184;
loc_82710D58:
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(r21.u32, 1, xer);
	// ble cr6,0x82710d6c
	if (!cr6.gt) goto loc_82710D6C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r4,r19,r29
	ctx.r4.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// bl 0x825e9358
	sub_825E9358(ctx, base);
loc_82710D6C:
	// lbz r11,25676(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 25676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82710d84
	if (cr6.eq) goto loc_82710D84;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 - f0.f64));
	// b 0x82710d88
	goto loc_82710D88;
loc_82710D84:
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
loc_82710D88:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x82710d58
	if (!cr0.eq) goto loc_82710D58;
loc_82710DCC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e9358
	sub_825E9358(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
}

__attribute__((alias("__imp__sub_82710DE8"))) PPC_WEAK_FUNC(sub_82710DE8);
PPC_FUNC_IMPL(__imp__sub_82710DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82710DEC"))) PPC_WEAK_FUNC(sub_82710DEC);
PPC_FUNC_IMPL(__imp__sub_82710DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82710DF0"))) PPC_WEAK_FUNC(sub_82710DF0);
PPC_FUNC_IMPL(__imp__sub_82710DF0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r29,r4,16
	r29.s64 = ctx.r4.s64 + 16;
	// beq cr6,0x827110a0
	if (cr6.eq) goto loc_827110A0;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,4,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r8,r9,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// rldicr r28,r10,63,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82710eb8
	if (cr6.eq) goto loc_82710EB8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,27380
	ctx.r8.s64 = ctx.r10.s64 + 27380;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825de340
	sub_825DE340(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r7,27416
	ctx.r6.s64 = ctx.r7.s64 + 27416;
	// rlwinm r11,r5,6,26,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// bl 0x825de198
	sub_825DE198(ctx, base);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// addi r8,r10,27452
	ctx.r8.s64 = ctx.r10.s64 + 27452;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// addi r10,r11,1164
	ctx.r10.s64 = r11.s64 + 1164;
	// rlwinm r10,r4,6,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x3C;
	// srd r5,r28,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r3,1164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwimi r3,r9,23,7,8
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x1800000) | (ctx.r3.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r3,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r3.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_82710EB8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwinm r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// addi r10,r11,27488
	ctx.r10.s64 = r11.s64 + 27488;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82710f14
	if (cr6.eq) goto loc_82710F14;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r9,r4,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r9.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_82710F14:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r11,10,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7;
	// rlwinm r7,r8,10,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x7;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82710f68
	if (cr6.eq) goto loc_82710F68;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r9,r4,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r9.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_82710F68:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r11,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r7,r8,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82710fbc
	if (cr6.eq) goto loc_82710FBC;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r10,r4,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 | ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
loc_82710FBC:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82710fe8
	if (cr6.eq) goto loc_82710FE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de700
	sub_825DE700(ctx, base);
loc_82710FE8:
	// lbz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// lbz r11,16(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82711004
	if (cr6.eq) goto loc_82711004;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de5e0
	sub_825DE5E0(ctx, base);
loc_82711004:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82711054
	if (cr6.eq) goto loc_82711054;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// add r8,r29,r10
	ctx.r8.u64 = r29.u64 + ctx.r10.u64;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// srd r4,r28,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r3,1172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r7,r3,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r7.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | r11.u64;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
loc_82711054:
	// lbz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lbz r11,24(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82711070
	if (cr6.eq) goto loc_82711070;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de7a0
	sub_825DE7A0(ctx, base);
loc_82711070:
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// lbz r10,25(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 25);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82711234
	if (cr6.eq) goto loc_82711234;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82711224
	if (cr6.gt) goto loc_82711224;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// b 0x82711224
	goto loc_82711224;
loc_827110A0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r8,r11,6,26,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3C;
	// addi r9,r10,27380
	ctx.r9.s64 = ctx.r10.s64 + 27380;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x825de340
	sub_825DE340(ctx, base);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r7,27416
	ctx.r6.s64 = ctx.r7.s64 + 27416;
	// rlwinm r11,r5,6,26,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// bl 0x825de198
	sub_825DE198(ctx, base);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// addi r8,r10,27452
	ctx.r8.s64 = ctx.r10.s64 + 27452;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// add r28,r10,r31
	r28.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// rldicr r4,r6,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r29,32
	ctx.r7.s64 = r29.s64 + 32;
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// srd r27,r4,r5
	r27.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r7,27488
	ctx.r5.s64 = ctx.r7.s64 + 27488;
	// lwz r9,1164(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 1164);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r6,r10,6,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwimi r9,r10,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,1164(r28)
	PPC_STORE_U32(r28.u32 + 1164, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r8,r27,r9
	ctx.r8.u64 = r27.u64 | ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r6,9,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1C;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwimi r7,r9,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r7,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r7.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r27,r8
	ctx.r7.u64 = r27.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r10,12,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1C;
	// lwzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwimi r6,r8,13,16,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r6,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r6.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r27,r7
	ctx.r6.u64 = r27.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r8,r9,15,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1C;
	// lwzx r7,r8,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwimi r10,r7,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r5,r27,r6
	ctx.r5.u64 = r27.u64 | ctx.r6.u64;
	// std r5,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r5.u64);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x825de700
	sub_825DE700(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// bl 0x825de5e0
	sub_825DE5E0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r9,1172(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 1172);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r8,r9,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,1172(r28)
	PPC_STORE_U32(r28.u32 + 1172, ctx.r8.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r27,r7
	ctx.r6.u64 = r27.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lbz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// bl 0x825de7a0
	sub_825DE7A0(ctx, base);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x82711224
	if (cr6.gt) goto loc_82711224;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82711224:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de820
	sub_825DE820(ctx, base);
loc_82711234:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82711238"))) PPC_WEAK_FUNC(sub_82711238);
PPC_FUNC_IMPL(__imp__sub_82711238) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8271123C"))) PPC_WEAK_FUNC(sub_8271123C);
PPC_FUNC_IMPL(__imp__sub_8271123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82711240"))) PPC_WEAK_FUNC(sub_82711240);
PPC_FUNC_IMPL(__imp__sub_82711240) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lbz r11,25676(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25676);
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// fctidz f4,f9
	ctx.f4.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f9.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f6,f12
	ctx.f6.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// fctidz f5,f10
	ctx.f5.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// fctidz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// beq cr6,0x827112e0
	if (cr6.eq) goto loc_827112E0;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x827112e4
	goto loc_827112E4;
loc_827112E0:
	// stfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_827112E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827112fc
	if (cr6.eq) goto loc_827112FC;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x82711304
	goto loc_82711304;
loc_827112FC:
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82711304:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82711320"))) PPC_WEAK_FUNC(sub_82711320);
PPC_FUNC_IMPL(__imp__sub_82711320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711324"))) PPC_WEAK_FUNC(sub_82711324);
PPC_FUNC_IMPL(__imp__sub_82711324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82711328"))) PPC_WEAK_FUNC(sub_82711328);
PPC_FUNC_IMPL(__imp__sub_82711328) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827115cc
	if (cr6.eq) goto loc_827115CC;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,4,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r8,r9,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xF;
	// rldicr r28,r10,63,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x827113e8
	if (cr6.eq) goto loc_827113E8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,27380
	ctx.r8.s64 = ctx.r10.s64 + 27380;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825de340
	sub_825DE340(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r7,27416
	ctx.r6.s64 = ctx.r7.s64 + 27416;
	// rlwinm r11,r5,6,26,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// bl 0x825de198
	sub_825DE198(ctx, base);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// addi r8,r10,27452
	ctx.r8.s64 = ctx.r10.s64 + 27452;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,6,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0x3C;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lwz r3,1164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// srd r5,r28,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r3,r9,23,7,8
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x1800000) | (ctx.r3.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r3,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r3.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_827113E8:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r10,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwinm r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// addi r10,r11,27488
	ctx.r10.s64 = r11.s64 + 27488;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82711444
	if (cr6.eq) goto loc_82711444;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r9,r4,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r9.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_82711444:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r11,10,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7;
	// rlwinm r7,r8,10,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x7;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x82711498
	if (cr6.eq) goto loc_82711498;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r9,r4,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r9.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
loc_82711498:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwinm r9,r11,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// rlwinm r7,r8,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x827114ec
	if (cr6.eq) goto loc_827114EC;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwimi r10,r4,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 | ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
loc_827114EC:
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82711518
	if (cr6.eq) goto loc_82711518;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de700
	sub_825DE700(ctx, base);
loc_82711518:
	// lbz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// lbz r11,16(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82711534
	if (cr6.eq) goto loc_82711534;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de5e0
	sub_825DE5E0(ctx, base);
loc_82711534:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82711580
	if (cr6.eq) goto loc_82711580;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// add r8,r30,r10
	ctx.r8.u64 = r30.u64 + ctx.r10.u64;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r4,r28,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r3,1172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r7,r3,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r7.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | r11.u64;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
loc_82711580:
	// lbz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// lbz r11,24(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x8271159c
	if (cr6.eq) goto loc_8271159C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de7a0
	sub_825DE7A0(ctx, base);
loc_8271159C:
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// lbz r10,25(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 25);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82711760
	if (cr6.eq) goto loc_82711760;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82711750
	if (cr6.gt) goto loc_82711750;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// b 0x82711750
	goto loc_82711750;
loc_827115CC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r8,r11,6,26,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3C;
	// addi r9,r10,27380
	ctx.r9.s64 = ctx.r10.s64 + 27380;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x825de340
	sub_825DE340(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r7,27416
	ctx.r6.s64 = ctx.r7.s64 + 27416;
	// rlwinm r11,r5,6,26,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// bl 0x825de198
	sub_825DE198(ctx, base);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// addi r8,r10,27452
	ctx.r8.s64 = ctx.r10.s64 + 27452;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// add r28,r10,r31
	r28.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// rldicr r4,r6,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// srd r27,r4,r5
	r27.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r5,r7,27488
	ctx.r5.s64 = ctx.r7.s64 + 27488;
	// lwz r9,1164(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 1164);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r6,r10,6,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwimi r9,r10,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,1164(r28)
	PPC_STORE_U32(r28.u32 + 1164, ctx.r9.u32);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r8,r27,r9
	ctx.r8.u64 = r27.u64 | ctx.r9.u64;
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r6,9,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1C;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwimi r7,r9,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r7,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r7.u32);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r27,r8
	ctx.r7.u64 = r27.u64 | ctx.r8.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r9,r10,12,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1C;
	// lwzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// rlwimi r6,r8,13,16,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 13) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r6,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r6.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r27,r7
	ctx.r6.u64 = r27.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r8,r9,15,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1C;
	// lwzx r7,r8,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// rlwimi r10,r7,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r5,r27,r6
	ctx.r5.u64 = r27.u64 | ctx.r6.u64;
	// std r5,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r5.u64);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x825de700
	sub_825DE700(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// bl 0x825de5e0
	sub_825DE5E0(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,1172(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1172);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r8,r10,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,1172(r28)
	PPC_STORE_U32(r28.u32 + 1172, ctx.r8.u32);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r27,r7
	ctx.r6.u64 = r27.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lbz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// bl 0x825de7a0
	sub_825DE7A0(ctx, base);
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x82711750
	if (cr6.gt) goto loc_82711750;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82711750:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de820
	sub_825DE820(ctx, base);
loc_82711760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82711764"))) PPC_WEAK_FUNC(sub_82711764);
PPC_FUNC_IMPL(__imp__sub_82711764) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82711768"))) PPC_WEAK_FUNC(sub_82711768);
PPC_FUNC_IMPL(__imp__sub_82711768) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x82711a40
	if (cr6.eq) goto loc_82711A40;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827117b0
	if (cr6.eq) goto loc_827117B0;
	// bl 0x825ddf10
	sub_825DDF10(ctx, base);
loc_827117B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r4,r11,5,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827117d0
	if (cr6.eq) goto loc_827117D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dc990
	sub_825DC990(ctx, base);
loc_827117D0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r4,r11,21,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0xF;
	// rlwinm r9,r10,21,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827117f0
	if (cr6.eq) goto loc_827117F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd5c0
	sub_825DD5C0(ctx, base);
loc_827117F0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r4,r11,17,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xF;
	// rlwinm r9,r10,17,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82711810
	if (cr6.eq) goto loc_82711810;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd600
	sub_825DD600(ctx, base);
loc_82711810:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r4,r11,13,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xF;
	// rlwinm r9,r10,13,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82711830
	if (cr6.eq) goto loc_82711830;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd640
	sub_825DD640(ctx, base);
loc_82711830:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r4,r11,9,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xF;
	// rlwinm r9,r10,9,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xF;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x82711850
	if (cr6.eq) goto loc_82711850;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dd680
	sub_825DD680(ctx, base);
loc_82711850:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,25,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0xF;
	// rlwinm r8,r9,25,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xF;
	// addi r27,r10,27204
	r27.s64 = ctx.r10.s64 + 27204;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82711880
	if (cr6.eq) goto loc_82711880;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
loc_82711880:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,29,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xF;
	// rlwinm r9,r10,29,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x827118a8
	if (cr6.eq) goto loc_827118A8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
loc_827118A8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// addi r26,r10,27264
	r26.s64 = ctx.r10.s64 + 27264;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x827118d8
	if (cr6.eq) goto loc_827118D8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
loc_827118D8:
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82711900
	if (cr6.eq) goto loc_82711900;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dcd20
	sub_825DCD20(ctx, base);
loc_82711900:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82711914
	if (!cr6.eq) goto loc_82711914;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8271198c
	if (cr6.eq) goto loc_8271198C;
loc_82711914:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r11,r11,4,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r9,r10,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271193c
	if (cr6.eq) goto loc_8271193C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dcc40
	sub_825DCC40(ctx, base);
loc_8271193C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 16);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82711964
	if (cr6.eq) goto loc_82711964;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x825dccb0
	sub_825DCCB0(ctx, base);
loc_82711964:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r11,r11,11,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// rlwinm r9,r10,11,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8271198c
	if (cr6.eq) goto loc_8271198C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// bl 0x825dcbd0
	sub_825DCBD0(ctx, base);
loc_8271198C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1;
	// rlwinm r4,r10,12,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x827119ac
	if (cr6.eq) goto loc_827119AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dc958
	sub_825DC958(ctx, base);
loc_827119AC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827119e4
	if (cr6.eq) goto loc_827119E4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,17,27,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1C;
	// addi r8,r10,27284
	ctx.r8.s64 = ctx.r10.s64 + 27284;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x825dce18
	sub_825DCE18(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r7,23,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF;
	// bl 0x825dcdb8
	sub_825DCDB8(ctx, base);
loc_827119E4:
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x82711b84
	if (!cr6.eq) goto loc_82711B84;
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bne cr6,0x82711b84
	if (!cr6.eq) goto loc_82711B84;
	// fcmpu cr6,f3,f13
	cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bne cr6,0x82711b84
	if (!cr6.eq) goto loc_82711B84;
	// fcmpu cr6,f4,f12
	cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// beq cr6,0x82711b8c
	if (cr6.eq) goto loc_82711B8C;
	// b 0x82711b84
	goto loc_82711B84;
loc_82711A40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ddf10
	sub_825DDF10(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r10,5,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// bl 0x825dc990
	sub_825DC990(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r9,21,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xF;
	// bl 0x825dd5c0
	sub_825DD5C0(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r8,17,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xF;
	// bl 0x825dd600
	sub_825DD600(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r7,13,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xF;
	// bl 0x825dd640
	sub_825DD640(ctx, base);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r6,9,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xF;
	// bl 0x825dd680
	sub_825DD680(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// rlwinm r11,r4,27,26,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x3C;
	// addi r29,r5,27204
	r29.s64 = ctx.r5.s64 + 27204;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r10,31,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3C;
	// lwzx r4,r9,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r8,27264
	r28.s64 = ctx.r8.s64 + 27264;
	// rlwinm r6,r7,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1C;
	// lwzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + r28.u32);
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// bl 0x825dcd20
	sub_825DCD20(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r5,6,26,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3C;
	// lwzx r4,r4,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r29.u32);
	// bl 0x825dcc40
	sub_825DCC40(ctx, base);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3C;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x825dccb0
	sub_825DCCB0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r8,r9,13,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1C;
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + r28.u32);
	// bl 0x825dcbd0
	sub_825DCBD0(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r7,12,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1;
	// bl 0x825dc958
	sub_825DC958(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// rlwinm r11,r4,17,27,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1C;
	// addi r5,r6,27284
	ctx.r5.s64 = ctx.r6.s64 + 27284;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// bl 0x825dce18
	sub_825DCE18(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r10,23,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF;
	// bl 0x825dcdb8
	sub_825DCDB8(ctx, base);
	// lfs f4,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82711B84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8290d4a0
	sub_8290D4A0(ctx, base);
loc_82711B8C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82711B98"))) PPC_WEAK_FUNC(sub_82711B98);
PPC_FUNC_IMPL(__imp__sub_82711B98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82711B9C"))) PPC_WEAK_FUNC(sub_82711B9C);
PPC_FUNC_IMPL(__imp__sub_82711B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82711BA0"))) PPC_WEAK_FUNC(sub_82711BA0);
PPC_FUNC_IMPL(__imp__sub_82711BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711BA8"))) PPC_WEAK_FUNC(sub_82711BA8);
PPC_FUNC_IMPL(__imp__sub_82711BA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711BB0"))) PPC_WEAK_FUNC(sub_82711BB0);
PPC_FUNC_IMPL(__imp__sub_82711BB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711BB8"))) PPC_WEAK_FUNC(sub_82711BB8);
PPC_FUNC_IMPL(__imp__sub_82711BB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711BC0"))) PPC_WEAK_FUNC(sub_82711BC0);
PPC_FUNC_IMPL(__imp__sub_82711BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82711c08
	if (!cr6.eq) goto loc_82711C08;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82711C08:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,30236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x82716118
	sub_82716118(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711c50
	if (cr6.eq) goto loc_82711C50;
loc_82711C34:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82711c34
	if (!cr0.eq) goto loc_82711C34;
loc_82711C50:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82711c78
	if (cr6.eq) goto loc_82711C78;
loc_82711C5C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82711c5c
	if (!cr0.eq) goto loc_82711C5C;
loc_82711C78:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711ca0
	if (cr6.eq) goto loc_82711CA0;
loc_82711C84:
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
	// bne 0x82711c84
	if (!cr0.eq) goto loc_82711C84;
loc_82711CA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82711CB4"))) PPC_WEAK_FUNC(sub_82711CB4);
PPC_FUNC_IMPL(__imp__sub_82711CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711CB8"))) PPC_WEAK_FUNC(sub_82711CB8);
PPC_FUNC_IMPL(__imp__sub_82711CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82711d00
	if (!cr6.eq) goto loc_82711D00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82711D00:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,30236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x82716200
	sub_82716200(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711d48
	if (cr6.eq) goto loc_82711D48;
loc_82711D2C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82711d2c
	if (!cr0.eq) goto loc_82711D2C;
loc_82711D48:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82711d70
	if (cr6.eq) goto loc_82711D70;
loc_82711D54:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82711d54
	if (!cr0.eq) goto loc_82711D54;
loc_82711D70:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711d98
	if (cr6.eq) goto loc_82711D98;
loc_82711D7C:
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
	// bne 0x82711d7c
	if (!cr0.eq) goto loc_82711D7C;
loc_82711D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82711DAC"))) PPC_WEAK_FUNC(sub_82711DAC);
PPC_FUNC_IMPL(__imp__sub_82711DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711DB0"))) PPC_WEAK_FUNC(sub_82711DB0);
PPC_FUNC_IMPL(__imp__sub_82711DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82711df8
	if (!cr6.eq) goto loc_82711DF8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82711DF8:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,30236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x827162e8
	sub_827162E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711e40
	if (cr6.eq) goto loc_82711E40;
loc_82711E24:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82711e24
	if (!cr0.eq) goto loc_82711E24;
loc_82711E40:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82711e68
	if (cr6.eq) goto loc_82711E68;
loc_82711E4C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82711e4c
	if (!cr0.eq) goto loc_82711E4C;
loc_82711E68:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711e90
	if (cr6.eq) goto loc_82711E90;
loc_82711E74:
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
	// bne 0x82711e74
	if (!cr0.eq) goto loc_82711E74;
loc_82711E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82711EA4"))) PPC_WEAK_FUNC(sub_82711EA4);
PPC_FUNC_IMPL(__imp__sub_82711EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711EA8"))) PPC_WEAK_FUNC(sub_82711EA8);
PPC_FUNC_IMPL(__imp__sub_82711EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82711ef0
	if (!cr6.eq) goto loc_82711EF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82711EF0:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,30236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 30236);
	// bl 0x827163d0
	sub_827163D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711f38
	if (cr6.eq) goto loc_82711F38;
loc_82711F1C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82711f1c
	if (!cr0.eq) goto loc_82711F1C;
loc_82711F38:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82711f60
	if (cr6.eq) goto loc_82711F60;
loc_82711F44:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82711f44
	if (!cr0.eq) goto loc_82711F44;
loc_82711F60:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82711f88
	if (cr6.eq) goto loc_82711F88;
loc_82711F6C:
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
	// bne 0x82711f6c
	if (!cr0.eq) goto loc_82711F6C;
loc_82711F88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82711F9C"))) PPC_WEAK_FUNC(sub_82711F9C);
PPC_FUNC_IMPL(__imp__sub_82711F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711FA0"))) PPC_WEAK_FUNC(sub_82711FA0);
PPC_FUNC_IMPL(__imp__sub_82711FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// b 0x826d7d78
	sub_826D7D78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711FAC"))) PPC_WEAK_FUNC(sub_82711FAC);
PPC_FUNC_IMPL(__imp__sub_82711FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82711FB0"))) PPC_WEAK_FUNC(sub_82711FB0);
PPC_FUNC_IMPL(__imp__sub_82711FB0) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82711fdc
	if (cr6.eq) goto loc_82711FDC;
	// bl 0x8271ec20
	sub_8271EC20(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
loc_82711FDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d7d60
	sub_826D7D60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82711FF4"))) PPC_WEAK_FUNC(sub_82711FF4);
PPC_FUNC_IMPL(__imp__sub_82711FF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711FF8"))) PPC_WEAK_FUNC(sub_82711FF8);
PPC_FUNC_IMPL(__imp__sub_82711FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_82712008"))) PPC_WEAK_FUNC(sub_82712008);
PPC_FUNC_IMPL(__imp__sub_82712008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271200C"))) PPC_WEAK_FUNC(sub_8271200C);
PPC_FUNC_IMPL(__imp__sub_8271200C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712010"))) PPC_WEAK_FUNC(sub_82712010);
PPC_FUNC_IMPL(__imp__sub_82712010) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82712040
	if (cr6.eq) goto loc_82712040;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82712040:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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

__attribute__((alias("__imp__sub_82712068"))) PPC_WEAK_FUNC(sub_82712068);
PPC_FUNC_IMPL(__imp__sub_82712068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271206C"))) PPC_WEAK_FUNC(sub_8271206C);
PPC_FUNC_IMPL(__imp__sub_8271206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712070"))) PPC_WEAK_FUNC(sub_82712070);
PPC_FUNC_IMPL(__imp__sub_82712070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82712084"))) PPC_WEAK_FUNC(sub_82712084);
PPC_FUNC_IMPL(__imp__sub_82712084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712088"))) PPC_WEAK_FUNC(sub_82712088);
PPC_FUNC_IMPL(__imp__sub_82712088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82712094"))) PPC_WEAK_FUNC(sub_82712094);
PPC_FUNC_IMPL(__imp__sub_82712094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712098"))) PPC_WEAK_FUNC(sub_82712098);
PPC_FUNC_IMPL(__imp__sub_82712098) {
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
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827120ec
	if (cr6.eq) goto loc_827120EC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827120d8
	if (cr6.eq) goto loc_827120D8;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_827120D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_827120EC:
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

__attribute__((alias("__imp__sub_82712100"))) PPC_WEAK_FUNC(sub_82712100);
PPC_FUNC_IMPL(__imp__sub_82712100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712104"))) PPC_WEAK_FUNC(sub_82712104);
PPC_FUNC_IMPL(__imp__sub_82712104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712108"))) PPC_WEAK_FUNC(sub_82712108);
PPC_FUNC_IMPL(__imp__sub_82712108) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r7,r10,24864
	ctx.r7.s64 = ctx.r10.s64 + 24864;
	// li r8,33
	ctx.r8.s64 = 33;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82712174
	if (cr6.eq) goto loc_82712174;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
loc_82712174:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r27.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82712190"))) PPC_WEAK_FUNC(sub_82712190);
PPC_FUNC_IMPL(__imp__sub_82712190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82712194"))) PPC_WEAK_FUNC(sub_82712194);
PPC_FUNC_IMPL(__imp__sub_82712194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712198"))) PPC_WEAK_FUNC(sub_82712198);
PPC_FUNC_IMPL(__imp__sub_82712198) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82712108
	sub_82712108(ctx, base);
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

__attribute__((alias("__imp__sub_827121D8"))) PPC_WEAK_FUNC(sub_827121D8);
PPC_FUNC_IMPL(__imp__sub_827121D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827121DC"))) PPC_WEAK_FUNC(sub_827121DC);
PPC_FUNC_IMPL(__imp__sub_827121DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827121E0"))) PPC_WEAK_FUNC(sub_827121E0);
PPC_FUNC_IMPL(__imp__sub_827121E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r3,r3,0,24,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827121F4"))) PPC_WEAK_FUNC(sub_827121F4);
PPC_FUNC_IMPL(__imp__sub_827121F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827121F8"))) PPC_WEAK_FUNC(sub_827121F8);
PPC_FUNC_IMPL(__imp__sub_827121F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r3,0,24,22
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r11,r11,-256
	r11.s64 = r11.s64 + -256;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271220C"))) PPC_WEAK_FUNC(sub_8271220C);
PPC_FUNC_IMPL(__imp__sub_8271220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712210"))) PPC_WEAK_FUNC(sub_82712210);
PPC_FUNC_IMPL(__imp__sub_82712210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24948
	ctx.r9.s64 = r11.s64 + 24948;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712228"))) PPC_WEAK_FUNC(sub_82712228);
PPC_FUNC_IMPL(__imp__sub_82712228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24960
	ctx.r9.s64 = r11.s64 + 24960;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712240"))) PPC_WEAK_FUNC(sub_82712240);
PPC_FUNC_IMPL(__imp__sub_82712240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82712250:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82712268
	if (!cr6.eq) goto loc_82712268;
	// li r11,1
	r11.s64 = 1;
loc_82712268:
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82712278
	if (!cr6.eq) goto loc_82712278;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82712278:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82712250
	if (!cr6.eq) goto loc_82712250;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712288"))) PPC_WEAK_FUNC(sub_82712288);
PPC_FUNC_IMPL(__imp__sub_82712288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,88
	ctx.r10.s64 = 88;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r9,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_827122C8"))) PPC_WEAK_FUNC(sub_827122C8);
PPC_FUNC_IMPL(__imp__sub_827122C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827122CC"))) PPC_WEAK_FUNC(sub_827122CC);
PPC_FUNC_IMPL(__imp__sub_827122CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827122D0"))) PPC_WEAK_FUNC(sub_827122D0);
PPC_FUNC_IMPL(__imp__sub_827122D0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24948
	ctx.r9.s64 = r11.s64 + 24948;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r30,r8,r4
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r6,r11,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x82712314
	if (!cr6.eq) goto loc_82712314;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82712314:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8271236c
	if (!cr6.eq) goto loc_8271236C;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x82712370
	if (cr6.eq) goto loc_82712370;
loc_82712334:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82712370
	if (cr6.eq) goto loc_82712370;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8271234c
	if (!cr6.eq) goto loc_8271234C;
	// li r11,1
	r11.s64 = 1;
loc_8271234C:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8271235c
	if (!cr6.eq) goto loc_8271235C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8271235C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82712334
	if (!cr6.eq) goto loc_82712334;
	// b 0x82712370
	goto loc_82712370;
loc_8271236C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82712370:
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff178
	sub_825FF178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82712398"))) PPC_WEAK_FUNC(sub_82712398);
PPC_FUNC_IMPL(__imp__sub_82712398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8271239C"))) PPC_WEAK_FUNC(sub_8271239C);
PPC_FUNC_IMPL(__imp__sub_8271239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827123A0"))) PPC_WEAK_FUNC(sub_827123A0);
PPC_FUNC_IMPL(__imp__sub_827123A0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// addi r7,r10,24960
	ctx.r7.s64 = ctx.r10.s64 + 24960;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r9,r7
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mullw r30,r6,r4
	r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mullw r29,r11,r5
	r29.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r7,r11,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x827123f4
	if (!cr6.eq) goto loc_827123F4;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_827123F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8271244c
	if (!cr6.eq) goto loc_8271244C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x82712450
	if (cr6.eq) goto loc_82712450;
loc_82712414:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82712450
	if (cr6.eq) goto loc_82712450;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8271242c
	if (!cr6.eq) goto loc_8271242C;
	// li r11,1
	r11.s64 = 1;
loc_8271242C:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8271243c
	if (!cr6.eq) goto loc_8271243C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8271243C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82712414
	if (!cr6.eq) goto loc_82712414;
	// b 0x82712450
	goto loc_82712450;
loc_8271244C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82712450:
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82712480"))) PPC_WEAK_FUNC(sub_82712480);
PPC_FUNC_IMPL(__imp__sub_82712480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82712484"))) PPC_WEAK_FUNC(sub_82712484);
PPC_FUNC_IMPL(__imp__sub_82712484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712488"))) PPC_WEAK_FUNC(sub_82712488);
PPC_FUNC_IMPL(__imp__sub_82712488) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// addi r7,r10,24960
	ctx.r7.s64 = ctx.r10.s64 + 24960;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r9,r7
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mullw r30,r6,r4
	r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mullw r29,r11,r5
	r29.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r8,r11,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x827124e0
	if (!cr6.eq) goto loc_827124E0;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_827124E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82712538
	if (!cr6.eq) goto loc_82712538;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x8271253c
	if (cr6.eq) goto loc_8271253C;
loc_82712500:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8271253c
	if (cr6.eq) goto loc_8271253C;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82712518
	if (!cr6.eq) goto loc_82712518;
	// li r11,1
	r11.s64 = 1;
loc_82712518:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82712528
	if (!cr6.eq) goto loc_82712528;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82712528:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82712500
	if (!cr6.eq) goto loc_82712500;
	// b 0x8271253c
	goto loc_8271253C;
loc_82712538:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8271253C:
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff2b0
	sub_825FF2B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82712570"))) PPC_WEAK_FUNC(sub_82712570);
PPC_FUNC_IMPL(__imp__sub_82712570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82712574"))) PPC_WEAK_FUNC(sub_82712574);
PPC_FUNC_IMPL(__imp__sub_82712574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712578"))) PPC_WEAK_FUNC(sub_82712578);
PPC_FUNC_IMPL(__imp__sub_82712578) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24948
	ctx.r9.s64 = r11.s64 + 24948;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r30,r8,r4
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lbz r7,1(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r6,r11,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x827125bc
	if (!cr6.eq) goto loc_827125BC;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_827125BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82712614
	if (!cr6.eq) goto loc_82712614;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x82712618
	if (cr6.eq) goto loc_82712618;
loc_827125DC:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82712618
	if (cr6.eq) goto loc_82712618;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827125f4
	if (!cr6.eq) goto loc_827125F4;
	// li r11,1
	r11.s64 = 1;
loc_827125F4:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82712604
	if (!cr6.eq) goto loc_82712604;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82712604:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827125dc
	if (!cr6.eq) goto loc_827125DC;
	// b 0x82712618
	goto loc_82712618;
loc_82712614:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82712618:
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff1e0
	sub_825FF1E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82712640"))) PPC_WEAK_FUNC(sub_82712640);
PPC_FUNC_IMPL(__imp__sub_82712640) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82712644"))) PPC_WEAK_FUNC(sub_82712644);
PPC_FUNC_IMPL(__imp__sub_82712644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712648"))) PPC_WEAK_FUNC(sub_82712648);
PPC_FUNC_IMPL(__imp__sub_82712648) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// addi r7,r10,24960
	ctx.r7.s64 = ctx.r10.s64 + 24960;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r9,r7
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// mullw r30,r6,r4
	r30.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mullw r29,r11,r5
	r29.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r8,r11,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x827126a0
	if (!cr6.eq) goto loc_827126A0;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_827126A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827126f8
	if (!cr6.eq) goto loc_827126F8;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x827126fc
	if (cr6.eq) goto loc_827126FC;
loc_827126C0:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x827126fc
	if (cr6.eq) goto loc_827126FC;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827126d8
	if (!cr6.eq) goto loc_827126D8;
	// li r11,1
	r11.s64 = 1;
loc_827126D8:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827126e8
	if (!cr6.eq) goto loc_827126E8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_827126E8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827126c0
	if (!cr6.eq) goto loc_827126C0;
	// b 0x827126fc
	goto loc_827126FC;
loc_827126F8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_827126FC:
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff250
	sub_825FF250(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82712734"))) PPC_WEAK_FUNC(sub_82712734);
PPC_FUNC_IMPL(__imp__sub_82712734) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82712738"))) PPC_WEAK_FUNC(sub_82712738);
PPC_FUNC_IMPL(__imp__sub_82712738) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82712760
	if (!cr6.eq) goto loc_82712760;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82712764
	goto loc_82712764;
loc_82712760:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82712764:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r31,r10,0,0,19
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x825ff850
	sub_825FF850(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82712788"))) PPC_WEAK_FUNC(sub_82712788);
PPC_FUNC_IMPL(__imp__sub_82712788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271278C"))) PPC_WEAK_FUNC(sub_8271278C);
PPC_FUNC_IMPL(__imp__sub_8271278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712790"))) PPC_WEAK_FUNC(sub_82712790);
PPC_FUNC_IMPL(__imp__sub_82712790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
}

__attribute__((alias("__imp__sub_82712798"))) PPC_WEAK_FUNC(sub_82712798);
PPC_FUNC_IMPL(__imp__sub_82712798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271279C"))) PPC_WEAK_FUNC(sub_8271279C);
PPC_FUNC_IMPL(__imp__sub_8271279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827127A0"))) PPC_WEAK_FUNC(sub_827127A0);
PPC_FUNC_IMPL(__imp__sub_827127A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,88
	ctx.r10.s64 = 88;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stb r9,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_827127E0"))) PPC_WEAK_FUNC(sub_827127E0);
PPC_FUNC_IMPL(__imp__sub_827127E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827127E4"))) PPC_WEAK_FUNC(sub_827127E4);
PPC_FUNC_IMPL(__imp__sub_827127E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827127E8"))) PPC_WEAK_FUNC(sub_827127E8);
PPC_FUNC_IMPL(__imp__sub_827127E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r19{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// bl 0x825e4e98
	sub_825E4E98(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x82712bfc
	if (cr6.gt) goto loc_82712BFC;
	// li r29,4
	r29.s64 = 4;
	// lis r12,-32143
	r12.s64 = -2106523648;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10304
	r12.s64 = r12.s64 + 10304;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82712924;
	case 1:
		goto loc_82712BFC;
	case 2:
		goto loc_82712BFC;
	case 3:
		goto loc_82712BFC;
	case 4:
		goto loc_82712BFC;
	case 5:
		goto loc_82712BFC;
	case 6:
		goto loc_82712BFC;
	case 7:
		goto loc_82712BFC;
	case 8:
		goto loc_82712BFC;
	case 9:
		goto loc_82712BFC;
	case 10:
		goto loc_82712BFC;
	case 11:
		goto loc_82712BFC;
	case 12:
		goto loc_82712BFC;
	case 13:
		goto loc_82712BFC;
	case 14:
		goto loc_827129D8;
	case 15:
		goto loc_82712A50;
	case 16:
		goto loc_82712AEC;
	case 17:
		goto loc_82712888;
	default:
		__builtin_unreachable();
	}
	// lwz r19,10532(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 10532);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,11260(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 11260);
	// lwz r19,10712(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 10712);
	// lwz r19,10832(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 10832);
	// lwz r19,10988(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 10988);
	// lwz r19,10376(r17)
	r19.u64 = PPC_LOAD_U32(r17.u32 + 10376);
loc_82712888:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8270ded0
	sub_8270DED0(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r6,r9,24948
	ctx.r6.s64 = ctx.r9.s64 + 24948;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r10,r11,24960
	ctx.r10.s64 = r11.s64 + 24960;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// mullw r6,r7,r5
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82712b8c
	goto loc_82712B8C;
loc_82712924:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8270ded0
	sub_8270DED0(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r7,24948
	r11.s64 = ctx.r7.s64 + 24948;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r8,r9,24960
	ctx.r8.s64 = ctx.r9.s64 + 24960;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwzx r7,r5,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// mullw r6,r7,r6
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// mullw r11,r5,r10
	r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// rlwinm r11,r10,0,24,22
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r8,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82712ba0
	goto loc_82712BA0;
loc_827129D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5320
	sub_825D5320(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,3
	r11.s64 = 3;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r5,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r5.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82712b8c
	goto loc_82712B8C;
loc_82712A50:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r11,6
	r11.s64 = 6;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8270ded0
	sub_8270DED0(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r5,r8,24948
	ctx.r5.s64 = ctx.r8.s64 + 24948;
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r9,r10,24960
	ctx.r9.s64 = ctx.r10.s64 + 24960;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x82712b8c
	goto loc_82712B8C;
loc_82712AEC:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5220
	sub_825D5220(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r11,5
	r11.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// bl 0x825d3810
	sub_825D3810(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5210
	sub_825D5210(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x8270ded0
	sub_8270DED0(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r5,r8,24948
	ctx.r5.s64 = ctx.r8.s64 + 24948;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r9,r10,24960
	ctx.r9.s64 = ctx.r10.s64 + 24960;
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// mullw r7,r8,r7
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_82712B8C:
	// rlwinm r11,r3,0,24,22
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-256
	r11.s64 = r11.s64 + -256;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82712BA0:
	// li r5,52
	ctx.r5.s64 = 52;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stb r27,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r27.u8);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8270d9f8
	sub_8270D9F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subfic r6,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// li r4,8
	ctx.r4.s64 = 8;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	r11.s64 = 0 - ctx.r8.s64;
	// and r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 & r29.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r4,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r4.u32);
loc_82712BFC:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82712C08"))) PPC_WEAK_FUNC(sub_82712C08);
PPC_FUNC_IMPL(__imp__sub_82712C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82712C0C"))) PPC_WEAK_FUNC(sub_82712C0C);
PPC_FUNC_IMPL(__imp__sub_82712C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712C10"))) PPC_WEAK_FUNC(sub_82712C10);
PPC_FUNC_IMPL(__imp__sub_82712C10) {
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
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82712c50
	if (cr6.eq) goto loc_82712C50;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4918
	sub_825E4918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82712c50
	if (cr6.eq) goto loc_82712C50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e33f0
	sub_825E33F0(ctx, base);
loc_82712C50:
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82712ca0
	if (cr6.eq) goto loc_82712CA0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82712c90
	if (cr6.eq) goto loc_82712C90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82712ca4
	goto loc_82712CA4;
loc_82712C90:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82712ca0
	if (cr6.eq) goto loc_82712CA0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
loc_82712CA0:
	// li r11,0
	r11.s64 = 0;
loc_82712CA4:
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_82712CBC"))) PPC_WEAK_FUNC(sub_82712CBC);
PPC_FUNC_IMPL(__imp__sub_82712CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712CC0"))) PPC_WEAK_FUNC(sub_82712CC0);
PPC_FUNC_IMPL(__imp__sub_82712CC0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r28,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r28.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// sth r28,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, r28.u16);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// sth r28,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, r28.u16);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82712e0c
	if (cr6.gt) goto loc_82712E0C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82712d48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712D48;
	// bdzf 4*cr6+eq,0x82712d78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712D78;
	// bdzf 4*cr6+eq,0x82712db0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712DB0;
	// bne cr6,0x82712dd8
	if (!cr6.eq) goto loc_82712DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r28,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r28.u16);
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_82712D48:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// sth r28,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r28.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x82712e08
	goto loc_82712E08;
loc_82712D78:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x825d5328
	sub_825D5328(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r11,r8,r27
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r27.s32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// b 0x82712e04
	goto loc_82712E04;
loc_82712DB0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82712dfc
	goto loc_82712DFC;
loc_82712DD8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82712DFC:
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_82712E04:
	// sth r27,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r27.u16);
loc_82712E08:
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
loc_82712E0C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82712e24
	if (cr6.eq) goto loc_82712E24;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,68(r29)
	PPC_STORE_U32(r29.u32 + 68, ctx.r10.u32);
loc_82712E24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82712E28"))) PPC_WEAK_FUNC(sub_82712E28);
PPC_FUNC_IMPL(__imp__sub_82712E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82712E2C"))) PPC_WEAK_FUNC(sub_82712E2C);
PPC_FUNC_IMPL(__imp__sub_82712E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82712E30"))) PPC_WEAK_FUNC(sub_82712E30);
PPC_FUNC_IMPL(__imp__sub_82712E30) {
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
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82712ec0
	if (cr6.gt) goto loc_82712EC0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82712e7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712E7C;
	// bdzf 4*cr6+eq,0x82712e8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712E8C;
	// bdzf 4*cr6+eq,0x82712e9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712E9C;
	// bne cr6,0x82712eb0
	if (!cr6.eq) goto loc_82712EB0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// b 0x82712ec0
	goto loc_82712EC0;
loc_82712E7C:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// b 0x82712ec0
	goto loc_82712EC0;
loc_82712E8C:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// b 0x82712ec0
	goto loc_82712EC0;
loc_82712E9C:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// b 0x82712ec0
	goto loc_82712EC0;
loc_82712EB0:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r4,2(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
loc_82712EC0:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82712EDC"))) PPC_WEAK_FUNC(sub_82712EDC);
PPC_FUNC_IMPL(__imp__sub_82712EDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712EE0"))) PPC_WEAK_FUNC(sub_82712EE0);
PPC_FUNC_IMPL(__imp__sub_82712EE0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r29,r11,29,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82712f14
	if (cr6.eq) goto loc_82712F14;
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82712F14:
	// li r11,0
	r11.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82712F5C"))) PPC_WEAK_FUNC(sub_82712F5C);
PPC_FUNC_IMPL(__imp__sub_82712F5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82712F60"))) PPC_WEAK_FUNC(sub_82712F60);
PPC_FUNC_IMPL(__imp__sub_82712F60) {
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
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x827130d4
	if (cr6.gt) goto loc_827130D4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82712fd0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82712FD0;
	// bdzf 4*cr6+eq,0x82713010
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713010;
	// bdzf 4*cr6+eq,0x82713054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713054;
	// bne cr6,0x82713090
	if (!cr6.eq) goto loc_82713090;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x827122d0
	sub_827122D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82712FD0:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x827123a0
	sub_827123A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82713010:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x82712488
	sub_82712488(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82713054:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x82712578
	sub_82712578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82713090:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,84(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x82712648
	sub_82712648(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827130D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827130E4"))) PPC_WEAK_FUNC(sub_827130E4);
PPC_FUNC_IMPL(__imp__sub_827130E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827130E8"))) PPC_WEAK_FUNC(sub_827130E8);
PPC_FUNC_IMPL(__imp__sub_827130E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_827130F8"))) PPC_WEAK_FUNC(sub_827130F8);
PPC_FUNC_IMPL(__imp__sub_827130F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82712c10
	sub_82712C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827130FC"))) PPC_WEAK_FUNC(sub_827130FC);
PPC_FUNC_IMPL(__imp__sub_827130FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713100"))) PPC_WEAK_FUNC(sub_82713100);
PPC_FUNC_IMPL(__imp__sub_82713100) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
}

__attribute__((alias("__imp__sub_82713104"))) PPC_WEAK_FUNC(sub_82713104);
PPC_FUNC_IMPL(__imp__sub_82713104) {
	PPC_FUNC_PROLOGUE();
	// b 0x827127e8
	sub_827127E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82713108"))) PPC_WEAK_FUNC(sub_82713108);
PPC_FUNC_IMPL(__imp__sub_82713108) {
	PPC_FUNC_PROLOGUE();
	// b 0x82712cc0
	sub_82712CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8271310C"))) PPC_WEAK_FUNC(sub_8271310C);
PPC_FUNC_IMPL(__imp__sub_8271310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82713110"))) PPC_WEAK_FUNC(sub_82713110);
PPC_FUNC_IMPL(__imp__sub_82713110) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82713110"))) PPC_WEAK_FUNC(sub_82713110);
PPC_FUNC_IMPL(__imp__sub_82713110) {
	PPC_FUNC_PROLOGUE();
	// b 0x82712e30
	sub_82712E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82713114"))) PPC_WEAK_FUNC(sub_82713114);
PPC_FUNC_IMPL(__imp__sub_82713114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82713118"))) PPC_WEAK_FUNC(sub_82713118);
PPC_FUNC_IMPL(__imp__sub_82713118) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r24,r3,16
	r24.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82713410
	if (cr6.eq) goto loc_82713410;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// mr r25,r29
	r25.u64 = r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82713190
	if (cr6.eq) goto loc_82713190;
	// li r25,2
	r25.s64 = 2;
loc_82713190:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827131a4
	if (!cr6.eq) goto loc_827131A4;
	// ori r25,r25,1
	r25.u64 = r25.u64 | 1;
loc_827131A4:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// clrlwi r26,r10,26
	r26.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x827136d0
	if (cr6.gt) goto loc_827136D0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82713230
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713230;
	// bdzf 4*cr6+eq,0x82713290
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713290;
	// bdzf 4*cr6+eq,0x8271335c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8271335C;
	// bne cr6,0x827133c4
	if (!cr6.eq) goto loc_827133C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82604a18
	sub_82604A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_82713230:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r8,172(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82604a18
	sub_82604A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_82713290:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5328
	sub_825D5328(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// srw r11,r10,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r30.u8 & 0x3F));
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r23.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r29.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r29.u32);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r29.u32);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// bgt cr6,0x827132f4
	if (cr6.gt) goto loc_827132F4;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
loc_827132F4:
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// lbz r11,6(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 6);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// add r29,r11,r5
	r29.u64 = r11.u64 + ctx.r5.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r27,r1,240
	r27.s64 = ctx.r1.s64 + 240;
	// addi r31,r29,-1
	r31.s64 = r29.s64 + -1;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// divwu r11,r31,r11
	r11.u32 = r31.u32 / r11.u32;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82603d50
	sub_82603D50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_8271335C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82604a18
	sub_82604A18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_827133C4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82604a18
	sub_82604A18(ctx, base);
	// b 0x827136c0
	goto loc_827136C0;
loc_82713410:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// srw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r30.u8 & 0x3F));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// bgt cr6,0x82713434
	if (cr6.gt) goto loc_82713434;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82713434:
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r10,r9,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r30.u8 & 0x3F));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// bgt cr6,0x82713458
	if (cr6.gt) goto loc_82713458;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82713458:
	// lbz r11,6(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 6);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// lbz r7,5(r22)
	ctx.r7.u64 = PPC_LOAD_U8(r22.u32 + 5);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r4,r5,r11
	ctx.r4.u32 = ctx.r5.u32 / r11.u32;
	// divwu r31,r6,r11
	r31.u32 = ctx.r6.u32 / r11.u32;
	// mullw r26,r4,r7
	r26.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x827136d0
	if (cr6.gt) goto loc_827136D0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82713514
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713514;
	// bdzf 4*cr6+eq,0x82713580
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82713580;
	// bdzf 4*cr6+eq,0x827135f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_827135F8;
	// bne cr6,0x8271366c
	if (!cr6.eq) goto loc_8271366C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827134f8
	if (cr6.eq) goto loc_827134F8;
loc_827134CC:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x827134cc
	if (cr6.lt) goto loc_827134CC;
loc_827134F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_82713514:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82713564
	if (cr6.eq) goto loc_82713564;
loc_82713538:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x82713538
	if (cr6.lt) goto loc_82713538;
loc_82713564:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_82713580:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5328
	sub_825D5328(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827135dc
	if (cr6.eq) goto loc_827135DC;
loc_827135A4:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x827135a4
	if (cr6.lt) goto loc_827135A4;
loc_827135DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_827135F8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8271364c
	if (cr6.eq) goto loc_8271364C;
loc_82713620:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x82713620
	if (cr6.lt) goto loc_82713620;
loc_8271364C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x828e9450
	return;
loc_8271366C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d5300
	sub_825D5300(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827136c0
	if (cr6.eq) goto loc_827136C0;
loc_82713694:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x82713694
	if (cr6.lt) goto loc_82713694;
loc_827136C0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
loc_827136D0:
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
}

__attribute__((alias("__imp__sub_827136DC"))) PPC_WEAK_FUNC(sub_827136DC);
PPC_FUNC_IMPL(__imp__sub_827136DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827136E0"))) PPC_WEAK_FUNC(sub_827136E0);
PPC_FUNC_IMPL(__imp__sub_827136E0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r30.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82713764
	if (!cr6.eq) goto loc_82713764;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x82713764
	if (cr6.eq) goto loc_82713764;
loc_82713730:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82713764
	if (cr6.eq) goto loc_82713764;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82713748
	if (!cr6.eq) goto loc_82713748;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82713748:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82713758
	if (!cr6.eq) goto loc_82713758;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82713758:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82713730
	if (!cr6.eq) goto loc_82713730;
loc_82713764:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r7,24960
	ctx.r4.s64 = ctx.r7.s64 + 24960;
	// lwzx r11,r10,r8
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r30.u8);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// bl 0x8270ddd0
	sub_8270DDD0(ctx, base);
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r25,r11,0,24,22
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x827137e0
	if (!cr6.eq) goto loc_827137E0;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_827137E0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x827122d0
	sub_827122D0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82713828
	if (cr6.eq) goto loc_82713828;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8271386c
	goto loc_8271386C;
loc_82713828:
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,25
	r11.s64 = 25;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// addi r8,r10,24976
	ctx.r8.s64 = ctx.r10.s64 + 24976;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,135
	ctx.r9.s64 = 135;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
loc_8271386C:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82713890
	if (!cr6.eq) goto loc_82713890;
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
loc_82713890:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825ff178
	sub_825FF178(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r11,4
	r11.s64 = 4;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lbz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// and r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	// or r8,r11,r7
	ctx.r8.u64 = r11.u64 | ctx.r7.u64;
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r11,r3,r8
	r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// beq cr6,0x8271399c
	if (cr6.eq) goto loc_8271399C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827139cc
	if (!cr6.gt) goto loc_827139CC;
loc_82713940:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82713980
	if (!cr6.gt) goto loc_82713980;
loc_82713950:
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82713118
	sub_82713118(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82713950
	if (cr6.lt) goto loc_82713950;
loc_82713980:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82713940
	if (cr6.lt) goto loc_82713940;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9450
	return;
loc_8271399C:
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827139cc
	if (cr6.gt) goto loc_827139CC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_827139C0:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x827139c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827139C0;
loc_827139CC:
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_827139D4"))) PPC_WEAK_FUNC(sub_827139D4);
PPC_FUNC_IMPL(__imp__sub_827139D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_827139D8"))) PPC_WEAK_FUNC(sub_827139D8);
PPC_FUNC_IMPL(__imp__sub_827139D8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	r30.s64 = 1;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82713a5c
	if (!cr6.eq) goto loc_82713A5C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x82713a5c
	if (cr6.eq) goto loc_82713A5C;
loc_82713A28:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82713a5c
	if (cr6.eq) goto loc_82713A5C;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82713a40
	if (!cr6.eq) goto loc_82713A40;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82713A40:
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82713a50
	if (!cr6.eq) goto loc_82713A50;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82713A50:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82713a28
	if (!cr6.eq) goto loc_82713A28;
loc_82713A5C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r7,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r10,r7,24960
	ctx.r10.s64 = ctx.r7.s64 + 24960;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r7,r8,r5
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r30.u8);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r28,324(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// bl 0x8270ddd0
	sub_8270DDD0(ctx, base);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r25,r11,0,24,22
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x82713ae0
	if (!cr6.eq) goto loc_82713AE0;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82713AE0:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x827123a0
	sub_827123A0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82713b2c
	if (cr6.eq) goto loc_82713B2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82713b70
	goto loc_82713B70;
loc_82713B2C:
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r8,r9,24976
	ctx.r8.s64 = ctx.r9.s64 + 24976;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// li r9,217
	ctx.r9.s64 = 217;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
loc_82713B70:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82713b94
	if (!cr6.eq) goto loc_82713B94;
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
loc_82713B94:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r11,4
	r11.s64 = 4;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// and r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	// or r8,r11,r7
	ctx.r8.u64 = r11.u64 | ctx.r7.u64;
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// lbz r7,1(r28)
	ctx.r7.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r11,r3,r8
	r11.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// beq cr6,0x82713ca8
	if (cr6.eq) goto loc_82713CA8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82713cd8
	if (!cr6.gt) goto loc_82713CD8;
loc_82713C4C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82713c8c
	if (!cr6.gt) goto loc_82713C8C;
loc_82713C5C:
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82713118
	sub_82713118(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82713c5c
	if (cr6.lt) goto loc_82713C5C;
loc_82713C8C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82713c4c
	if (cr6.lt) goto loc_82713C4C;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9450
	return;
loc_82713CA8:
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82713cd8
	if (cr6.gt) goto loc_82713CD8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82713CCC:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x82713ccc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82713CCC;
loc_82713CD8:
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82713CE0"))) PPC_WEAK_FUNC(sub_82713CE0);
PPC_FUNC_IMPL(__imp__sub_82713CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82713CE4"))) PPC_WEAK_FUNC(sub_82713CE4);
PPC_FUNC_IMPL(__imp__sub_82713CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82713CE8"))) PPC_WEAK_FUNC(sub_82713CE8);
PPC_FUNC_IMPL(__imp__sub_82713CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,3
	r22.s64 = 3;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// stw r22,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r22.u32);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// li r21,0
	r21.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82713d6c
	if (!cr6.eq) goto loc_82713D6C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x82713d6c
	if (cr6.eq) goto loc_82713D6C;
loc_82713D38:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82713d6c
	if (cr6.eq) goto loc_82713D6C;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82713d50
	if (!cr6.eq) goto loc_82713D50;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82713D50:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82713d60
	if (!cr6.eq) goto loc_82713D60;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82713D60:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82713d38
	if (!cr6.eq) goto loc_82713D38;
loc_82713D6C:
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// addi r7,r10,24948
	ctx.r7.s64 = ctx.r10.s64 + 24948;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r9,r9,24960
	ctx.r9.s64 = ctx.r9.s64 + 24960;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r5,r7,r5
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r11,r4,r6
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r23,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r23.u8);
	// stb r23,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r23.u8);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r28,348(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// bl 0x8270ddd0
	sub_8270DDD0(ctx, base);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r25,r11,0,24,22
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x82713df4
	if (!cr6.eq) goto loc_82713DF4;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82713DF4:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82712488
	sub_82712488(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82713e44
	if (cr6.eq) goto loc_82713E44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82713e88
	goto loc_82713E88;
loc_82713E44:
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r8,r10,24976
	ctx.r8.s64 = ctx.r10.s64 + 24976;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// li r9,300
	ctx.r9.s64 = 300;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r21.u32);
	// rldicr r6,r23,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r23.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
loc_82713E88:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82713eac
	if (!cr6.eq) goto loc_82713EAC;
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
loc_82713EAC:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// bl 0x825ff2b0
	sub_825FF2B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r10
	r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// or r10,r11,r7
	ctx.r10.u64 = r11.u64 | ctx.r7.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lbz r8,1(r28)
	ctx.r8.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// or r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x82713fdc
	if (cr6.eq) goto loc_82713FDC;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8271400c
	if (!cr6.gt) goto loc_8271400C;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
loc_82713F68:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// srw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 >> (r28.u8 & 0x3F));
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x82713f84
	if (cr6.lt) goto loc_82713F84;
	// addi r11,r1,120
	r11.s64 = ctx.r1.s64 + 120;
loc_82713F84:
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82713fc0
	if (cr6.eq) goto loc_82713FC0;
loc_82713F94:
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82713118
	sub_82713118(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82713f94
	if (cr6.lt) goto loc_82713F94;
loc_82713FC0:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82713f68
	if (cr6.lt) goto loc_82713F68;
	// stw r20,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9448
	return;
loc_82713FDC:
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8271400c
	if (cr6.gt) goto loc_8271400C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82714000:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x82714000
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82714000;
loc_8271400C:
	// stw r20,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82714014"))) PPC_WEAK_FUNC(sub_82714014);
PPC_FUNC_IMPL(__imp__sub_82714014) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82714018"))) PPC_WEAK_FUNC(sub_82714018);
PPC_FUNC_IMPL(__imp__sub_82714018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,4
	r22.s64 = 4;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r22.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// li r23,0
	r23.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827140a4
	if (!cr6.eq) goto loc_827140A4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x827140a4
	if (cr6.eq) goto loc_827140A4;
loc_82714070:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x827140a4
	if (cr6.eq) goto loc_827140A4;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82714088
	if (!cr6.eq) goto loc_82714088;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82714088:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82714098
	if (!cr6.eq) goto loc_82714098;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82714098:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82714070
	if (!cr6.eq) goto loc_82714070;
loc_827140A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// addi r8,r11,24948
	ctx.r8.s64 = r11.s64 + 24948;
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r7,24960
	ctx.r4.s64 = ctx.r7.s64 + 24960;
	// lwzx r11,r10,r8
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwzx r8,r10,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// mullw r7,r8,r5
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r30.u8);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lbz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// bl 0x8270ddd0
	sub_8270DDD0(ctx, base);
	// lbz r6,1(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rlwinm r24,r11,0,24,22
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x82714124
	if (!cr6.eq) goto loc_82714124;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82714124:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82712578
	sub_82712578(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8271416c
	if (cr6.eq) goto loc_8271416C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827141b0
	goto loc_827141B0;
loc_8271416C:
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r8,r9,24976
	ctx.r8.s64 = ctx.r9.s64 + 24976;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// li r9,382
	ctx.r9.s64 = 382;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
loc_827141B0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827141d4
	if (!cr6.eq) goto loc_827141D4;
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
loc_827141D4:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825ff1e0
	sub_825FF1E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r11,8
	r11.s64 = 8;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lbz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r22
	ctx.r3.u64 = ctx.r4.u64 & r22.u64;
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lbz r8,1(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & r11.u64;
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// beq cr6,0x827142dc
	if (cr6.eq) goto loc_827142DC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8271430c
	if (!cr6.gt) goto loc_8271430C;
loc_82714280:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827142c0
	if (!cr6.gt) goto loc_827142C0;
loc_82714290:
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82713118
	sub_82713118(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82714290
	if (cr6.lt) goto loc_82714290;
loc_827142C0:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82714280
	if (cr6.lt) goto loc_82714280;
	// stw r21,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r21.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e944c
	return;
loc_827142DC:
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8271430c
	if (cr6.gt) goto loc_8271430C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82714300:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x82714300
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82714300;
loc_8271430C:
	// stw r21,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r21.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82714314"))) PPC_WEAK_FUNC(sub_82714314);
PPC_FUNC_IMPL(__imp__sub_82714314) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82714318"))) PPC_WEAK_FUNC(sub_82714318);
PPC_FUNC_IMPL(__imp__sub_82714318) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	r11.s64 = 5;
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// li r23,0
	r23.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8271439c
	if (!cr6.eq) goto loc_8271439C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x8271439c
	if (cr6.eq) goto loc_8271439C;
loc_82714368:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8271439c
	if (cr6.eq) goto loc_8271439C;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82714380
	if (!cr6.eq) goto loc_82714380;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82714380:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82714390
	if (!cr6.eq) goto loc_82714390;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82714390:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82714368
	if (!cr6.eq) goto loc_82714368;
loc_8271439C:
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// addi r7,r10,24948
	ctx.r7.s64 = ctx.r10.s64 + 24948;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r9,r9,24960
	ctx.r9.s64 = ctx.r9.s64 + 24960;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r5,r7,r5
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r11,r4,r6
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stb r30,13(r31)
	PPC_STORE_U8(r31.u32 + 13, r30.u8);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r28,348(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// bl 0x8270ddd0
	sub_8270DDD0(ctx, base);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r25,r11,0,24,22
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bne cr6,0x82714424
	if (!cr6.eq) goto loc_82714424;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82714424:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82712648
	sub_82712648(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82714474
	if (cr6.eq) goto loc_82714474;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827144b8
	goto loc_827144B8;
loc_82714474:
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r8,r10,24976
	ctx.r8.s64 = ctx.r10.s64 + 24976;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// li r9,464
	ctx.r9.s64 = 464;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
loc_827144B8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r10,r3,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827144dc
	if (!cr6.eq) goto loc_827144DC;
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
loc_827144DC:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x825ff250
	sub_825FF250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r6,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r6.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// and r10,r11,r10
	ctx.r10.u64 = r11.u64 & ctx.r10.u64;
	// or r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// lbz r6,1(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 1);
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// and r11,r3,r9
	r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// or r10,r11,r7
	ctx.r10.u64 = r11.u64 | ctx.r7.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// beq cr6,0x827145f8
	if (cr6.eq) goto loc_827145F8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82714628
	if (!cr6.gt) goto loc_82714628;
loc_8271459C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827145dc
	if (!cr6.gt) goto loc_827145DC;
loc_827145AC:
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82713118
	sub_82713118(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x827145ac
	if (cr6.lt) goto loc_827145AC;
loc_827145DC:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8271459c
	if (cr6.lt) goto loc_8271459C;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9450
	return;
loc_827145F8:
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82714628
	if (cr6.gt) goto loc_82714628;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8271461C:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x8271461c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8271461C;
loc_82714628:
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82714630"))) PPC_WEAK_FUNC(sub_82714630);
PPC_FUNC_IMPL(__imp__sub_82714630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82714634"))) PPC_WEAK_FUNC(sub_82714634);
PPC_FUNC_IMPL(__imp__sub_82714634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82714638"))) PPC_WEAK_FUNC(sub_82714638);
PPC_FUNC_IMPL(__imp__sub_82714638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,-18640
	ctx.r9.s64 = r11.s64 + -18640;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82714650"))) PPC_WEAK_FUNC(sub_82714650);
PPC_FUNC_IMPL(__imp__sub_82714650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-18640
	r11.s64 = r11.s64 + -18640;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r3,r8,r4
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271466C"))) PPC_WEAK_FUNC(sub_8271466C);
PPC_FUNC_IMPL(__imp__sub_8271466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82714670"))) PPC_WEAK_FUNC(sub_82714670);
PPC_FUNC_IMPL(__imp__sub_82714670) {
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
	// lbz r11,1012(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1012);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827146cc
	if (cr6.eq) goto loc_827146CC;
	// lbz r11,1132(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1132);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827146a8
	if (!cr6.eq) goto loc_827146A8;
	// lwz r3,1020(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// b 0x827146c4
	goto loc_827146C4;
loc_827146A8:
	// lwz r29,1020(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1020);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827146c8
	if (cr6.eq) goto loc_827146C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_827146C4:
	// stw r30,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r30.u32);
loc_827146C8:
	// stb r30,1132(r31)
	PPC_STORE_U8(r31.u32 + 1132, r30.u8);
loc_827146CC:
	// li r11,88
	r11.s64 = 88;
	// stb r30,1012(r31)
	PPC_STORE_U8(r31.u32 + 1012, r30.u8);
	// stb r30,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r30.u8);
	// stw r11,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, r11.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r30.u32);
	// stb r30,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r30.u8);
	// stb r30,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827146EC"))) PPC_WEAK_FUNC(sub_827146EC);
PPC_FUNC_IMPL(__imp__sub_827146EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827146F0"))) PPC_WEAK_FUNC(sub_827146F0);
PPC_FUNC_IMPL(__imp__sub_827146F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,520(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,2
	ctx.r9.u64 = r11.u64 | 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82714704"))) PPC_WEAK_FUNC(sub_82714704);
PPC_FUNC_IMPL(__imp__sub_82714704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82714708"))) PPC_WEAK_FUNC(sub_82714708);
PPC_FUNC_IMPL(__imp__sub_82714708) {
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
	// addi r27,r3,544
	r27.s64 = ctx.r3.s64 + 544;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8271472C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// beq cr6,0x82714748
	if (cr6.eq) goto loc_82714748;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x8271472c
	if (cr6.lt) goto loc_8271472C;
loc_82714748:
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827147b0
	if (cr6.eq) goto loc_827147B0;
	// addi r31,r30,268
	r31.s64 = r30.s64 + 268;
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
loc_82714764:
	// lwzu r3,4(r27)
	ea = 4 + r27.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r27.u32 = ea;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ff310
	sub_825FF310(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bne 0x82714764
	if (!cr0.eq) goto loc_82714764;
loc_827147B0:
	// lwz r3,1016(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1016);
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// beq cr6,0x827147f8
	if (cr6.eq) goto loc_827147F8;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r30,468
	r31.s64 = r30.s64 + 468;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ff310
	sub_825FF310(ctx, base);
loc_827147F8:
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,520(r30)
	PPC_STORE_U32(r30.u32 + 520, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82714808"))) PPC_WEAK_FUNC(sub_82714808);
PPC_FUNC_IMPL(__imp__sub_82714808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8271480C"))) PPC_WEAK_FUNC(sub_8271480C);
PPC_FUNC_IMPL(__imp__sub_8271480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82714810"))) PPC_WEAK_FUNC(sub_82714810);
PPC_FUNC_IMPL(__imp__sub_82714810) {
	PPC_FUNC_PROLOGUE();
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
	// add r30,r4,r3
	r30.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stb r28,536(r30)
	PPC_STORE_U8(r30.u32 + 536, r28.u8);
	// stb r28,540(r30)
	PPC_STORE_U8(r30.u32 + 540, r28.u8);
	// lwz r3,40(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + r11.u64;
	// stwx r3,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stwx r28,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, r28.u32);
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stb r28,460(r30)
	PPC_STORE_U8(r30.u32 + 460, r28.u8);
	// stb r28,464(r30)
	PPC_STORE_U8(r30.u32 + 464, r28.u8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,268
	ctx.r3.s64 = r11.s64 + 268;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82714884"))) PPC_WEAK_FUNC(sub_82714884);
PPC_FUNC_IMPL(__imp__sub_82714884) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82714888"))) PPC_WEAK_FUNC(sub_82714888);
PPC_FUNC_IMPL(__imp__sub_82714888) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r30,1012(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1012, r30.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r30,1013(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1013, r30.u8);
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x8270de80
	sub_8270DE80(ctx, base);
	// stw r3,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, ctx.r3.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r30.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stb r30,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r30.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r30,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r30.u8);
	// addi r3,r31,468
	ctx.r3.s64 = r31.s64 + 468;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827148D4"))) PPC_WEAK_FUNC(sub_827148D4);
PPC_FUNC_IMPL(__imp__sub_827148D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827148D8"))) PPC_WEAK_FUNC(sub_827148D8);
PPC_FUNC_IMPL(__imp__sub_827148D8) {
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
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,532(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r7,524(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// lwz r5,528(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,24192(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r11,r4,-18640
	r11.s64 = ctx.r4.s64 + -18640;
	// lwz r30,296(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r6,r30,20
	ctx.r6.u64 = r30.u32 & 0xFFF;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwzx r11,r4,r11
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// lwzx r10,r4,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// mullw r30,r11,r7
	r30.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// mullw r28,r10,r5
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8271497c
	if (!cr6.eq) goto loc_8271497C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82714994
	goto loc_82714994;
loc_8271497C:
	// rlwinm r3,r30,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bge cr6,0x82714990
	if (!cr6.lt) goto loc_82714990;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82714994
	goto loc_82714994;
loc_82714990:
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82714994:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ff310
	sub_825FF310(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827149C4"))) PPC_WEAK_FUNC(sub_827149C4);
PPC_FUNC_IMPL(__imp__sub_827149C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827149C8"))) PPC_WEAK_FUNC(sub_827149C8);
PPC_FUNC_IMPL(__imp__sub_827149C8) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r9,496(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,532(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// lwz r9,528(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// lwz r30,24192(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r11,r4,-18640
	r11.s64 = ctx.r4.s64 + -18640;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r6,524(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r30,r5,r6
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r28,r4,r9
	r28.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82714a5c
	if (cr6.eq) goto loc_82714A5C;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bge cr6,0x82714a64
	if (!cr6.lt) goto loc_82714A64;
loc_82714A5C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82714a68
	goto loc_82714A68;
loc_82714A64:
	// rlwinm r4,r28,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82714A68:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ff310
	sub_825FF310(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82714A9C"))) PPC_WEAK_FUNC(sub_82714A9C);
PPC_FUNC_IMPL(__imp__sub_82714A9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82714AA0"))) PPC_WEAK_FUNC(sub_82714AA0);
PPC_FUNC_IMPL(__imp__sub_82714AA0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r3,576
	r30.s64 = ctx.r3.s64 + 576;
	// li r31,3
	r31.s64 = 3;
loc_82714AB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// bge 0x82714ab8
	if (!cr0.lt) goto loc_82714AB8;
	// addi r3,r29,1024
	ctx.r3.s64 = r29.s64 + 1024;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,520(r29)
	PPC_STORE_U32(r29.u32 + 520, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82714AE4"))) PPC_WEAK_FUNC(sub_82714AE4);
PPC_FUNC_IMPL(__imp__sub_82714AE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82714AE8"))) PPC_WEAK_FUNC(sub_82714AE8);
PPC_FUNC_IMPL(__imp__sub_82714AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r5,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r6,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r6.u32);
	// li r31,0
	r31.s64 = 0;
	// stw r4,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r4.u32);
	// stw r9,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r9,r3,536
	ctx.r9.s64 = ctx.r3.s64 + 536;
	// addi r8,r3,540
	ctx.r8.s64 = ctx.r3.s64 + 540;
	// addi r7,r3,460
	ctx.r7.s64 = ctx.r3.s64 + 460;
	// addi r6,r3,464
	ctx.r6.s64 = ctx.r3.s64 + 464;
	// addi r5,r3,1008
	ctx.r5.s64 = ctx.r3.s64 + 1008;
	// addi r10,r3,556
	ctx.r10.s64 = ctx.r3.s64 + 556;
	// li r29,88
	r29.s64 = 88;
loc_82714B38:
	// stbx r31,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r31.u8);
	// stbx r31,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, r31.u8);
	// stw r29,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, r29.u32);
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// stbx r31,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, r31.u8);
	// stbx r31,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + r11.u32, r31.u8);
	// stbx r31,r5,r11
	PPC_STORE_U8(ctx.r5.u32 + r11.u32, r31.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82714b38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82714B38;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,268
	ctx.r3.s64 = r30.s64 + 268;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stb r31,1132(r30)
	PPC_STORE_U8(r30.u32 + 1132, r31.u8);
	// stb r31,1012(r30)
	PPC_STORE_U8(r30.u32 + 1012, r31.u8);
	// li r5,48
	ctx.r5.s64 = 48;
	// stb r31,1013(r30)
	PPC_STORE_U8(r30.u32 + 1013, r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,1016(r30)
	PPC_STORE_U32(r30.u32 + 1016, r29.u32);
	// addi r3,r30,468
	ctx.r3.s64 = r30.s64 + 468;
	// stw r31,1020(r30)
	PPC_STORE_U32(r30.u32 + 1020, r31.u32);
	// stb r31,516(r30)
	PPC_STORE_U8(r30.u32 + 516, r31.u8);
	// stb r31,517(r30)
	PPC_STORE_U8(r30.u32 + 517, r31.u8);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82714BB8"))) PPC_WEAK_FUNC(sub_82714BB8);
PPC_FUNC_IMPL(__imp__sub_82714BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82714BBC"))) PPC_WEAK_FUNC(sub_82714BBC);
PPC_FUNC_IMPL(__imp__sub_82714BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82714BC0"))) PPC_WEAK_FUNC(sub_82714BC0);
PPC_FUNC_IMPL(__imp__sub_82714BC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82714670
	sub_82714670(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stb r27,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r27.u8);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// stw r30,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, r30.u32);
	// stb r29,1012(r31)
	PPC_STORE_U8(r31.u32 + 1012, r29.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82714c58
	if (cr6.eq) goto loc_82714C58;
	// addi r3,r31,1024
	ctx.r3.s64 = r31.s64 + 1024;
	// stb r29,1132(r31)
	PPC_STORE_U8(r31.u32 + 1132, r29.u8);
	// stw r3,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, ctx.r3.u32);
	// bl 0x82712288
	sub_82712288(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,1016(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1016);
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1020);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r30.u8);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// stb r30,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r30.u8);
	// stb r30,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_82714C58:
	// li r30,0
	r30.s64 = 0;
	// stw r30,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r30.u32);
	// stb r30,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r30.u8);
	// stb r30,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82714C6C"))) PPC_WEAK_FUNC(sub_82714C6C);
PPC_FUNC_IMPL(__imp__sub_82714C6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82714C70"))) PPC_WEAK_FUNC(sub_82714C70);
PPC_FUNC_IMPL(__imp__sub_82714C70) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x82714670
	sub_82714670(ctx, base);
	// stb r27,1012(r31)
	PPC_STORE_U8(r31.u32 + 1012, r27.u8);
	// stb r26,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r26.u8);
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r9,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, ctx.r9.u32);
	// stw r30,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r30.u32);
	// stb r29,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r29.u8);
	// stb r28,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82714CB8"))) PPC_WEAK_FUNC(sub_82714CB8);
PPC_FUNC_IMPL(__imp__sub_82714CB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82714CBC"))) PPC_WEAK_FUNC(sub_82714CBC);
PPC_FUNC_IMPL(__imp__sub_82714CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82714CC0"))) PPC_WEAK_FUNC(sub_82714CC0);
PPC_FUNC_IMPL(__imp__sub_82714CC0) {
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
	// add r27,r4,r3
	r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lbz r11,536(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82714d34
	if (cr6.eq) goto loc_82714D34;
	// lbz r11,1008(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 1008);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r4,140
	r11.s64 = ctx.r4.s64 + 140;
	// bne cr6,0x82714d0c
	if (!cr6.eq) goto loc_82714D0C;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r3
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + ctx.r3.u32);
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// stwx r30,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, r30.u32);
	// b 0x82714d30
	goto loc_82714D30;
loc_82714D0C:
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r26,r31
	r28.u64 = PPC_LOAD_U32(r26.u32 + r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82714d30
	if (cr6.eq) goto loc_82714D30;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stwx r30,r26,r31
	PPC_STORE_U32(r26.u32 + r31.u32, r30.u32);
loc_82714D30:
	// stb r30,1008(r27)
	PPC_STORE_U8(r27.u32 + 1008, r30.u8);
loc_82714D34:
	// addi r11,r29,136
	r11.s64 = r29.s64 + 136;
	// stb r30,536(r27)
	PPC_STORE_U8(r27.u32 + 536, r30.u8);
	// addi r10,r29,140
	ctx.r10.s64 = r29.s64 + 140;
	// stb r30,540(r27)
	PPC_STORE_U8(r27.u32 + 540, r30.u8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,88
	ctx.r7.s64 = 88;
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r7.u32);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, r30.u32);
	// stb r30,460(r27)
	PPC_STORE_U8(r27.u32 + 460, r30.u8);
	// stb r30,464(r27)
	PPC_STORE_U8(r27.u32 + 464, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82714D64"))) PPC_WEAK_FUNC(sub_82714D64);
PPC_FUNC_IMPL(__imp__sub_82714D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82714D68"))) PPC_WEAK_FUNC(sub_82714D68);
PPC_FUNC_IMPL(__imp__sub_82714D68) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// lwz r11,1016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1016);
	// li r28,0
	r28.s64 = 0;
	// lwz r25,4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r24,8(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82714e28
	if (cr6.eq) goto loc_82714E28;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82714dc0
	if (cr6.lt) goto loc_82714DC0;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714DC0:
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// bne cr6,0x82714dcc
	if (!cr6.eq) goto loc_82714DCC;
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714DCC:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lis r7,28
	ctx.r7.s64 = 1835008;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// ori r5,r7,8192
	ctx.r5.u64 = ctx.r7.u64 | 8192;
	// rlwinm r4,r6,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// li r3,-1
	ctx.r3.s64 = -1;
	// subfc r11,r4,r5
	xer.ca = ctx.r5.u32 >= ctx.r4.u32;
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// lwz r3,1016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1016);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825d3850
	sub_825D3850(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82714E28:
	// addi r29,r31,544
	r29.s64 = r31.s64 + 544;
	// addi r31,r26,8
	r31.s64 = r26.s64 + 8;
	// mr r27,r28
	r27.u64 = r28.u64;
	// li r22,80
	r22.s64 = 80;
	// li r26,5120
	r26.s64 = 5120;
loc_82714E3C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x82714ee8
	if (cr6.eq) goto loc_82714EE8;
	// stw r30,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r30.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// blt cr6,0x82714e80
	if (cr6.lt) goto loc_82714E80;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714E80:
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// bne cr6,0x82714e8c
	if (!cr6.eq) goto loc_82714E8C;
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714E8C:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r22
	r11.u32 = r11.u32 / r22.u32;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82714ec0
	if (cr6.eq) goto loc_82714EC0;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82714ec0
	if (cr6.eq) goto loc_82714EC0;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x82714ec4
	if (!cr6.eq) goto loc_82714EC4;
loc_82714EC0:
	// li r7,8
	ctx.r7.s64 = 8;
loc_82714EC4:
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// divwu r11,r10,r26
	r11.u32 = ctx.r10.u32 / r26.u32;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// blt cr6,0x82714e3c
	if (cr6.lt) goto loc_82714E3C;
loc_82714EE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82714EEC"))) PPC_WEAK_FUNC(sub_82714EEC);
PPC_FUNC_IMPL(__imp__sub_82714EEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82714EF0"))) PPC_WEAK_FUNC(sub_82714EF0);
PPC_FUNC_IMPL(__imp__sub_82714EF0) {
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
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r26,544
	r30.s64 = r26.s64 + 544;
	// li r24,80
	r24.s64 = 80;
	// li r23,5120
	r23.s64 = 5120;
loc_82714F28:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// beq cr6,0x82714fbc
	if (cr6.eq) goto loc_82714FBC;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// blt cr6,0x82714f58
	if (cr6.lt) goto loc_82714F58;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714F58:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x82714f64
	if (!cr6.eq) goto loc_82714F64;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714F64:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r24
	r11.u32 = r11.u32 / r24.u32;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82714f98
	if (cr6.eq) goto loc_82714F98;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82714f98
	if (cr6.eq) goto loc_82714F98;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x82714f9c
	if (!cr6.eq) goto loc_82714F9C;
loc_82714F98:
	// li r7,8
	ctx.r7.s64 = 8;
loc_82714F9C:
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// divwu r11,r10,r23
	r11.u32 = ctx.r10.u32 / r23.u32;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r25,r11,r25
	r25.u64 = r11.u64 + r25.u64;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82714f28
	if (cr6.lt) goto loc_82714F28;
loc_82714FBC:
	// lwz r3,1016(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 1016);
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// beq cr6,0x82715048
	if (cr6.eq) goto loc_82715048;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// blt cr6,0x82714fec
	if (cr6.lt) goto loc_82714FEC;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714FEC:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x82714ff8
	if (!cr6.eq) goto loc_82714FF8;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82714FF8:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r24
	r11.u32 = r11.u32 / r24.u32;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x8271502c
	if (cr6.eq) goto loc_8271502C;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x8271502c
	if (cr6.eq) goto loc_8271502C;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x82715030
	if (!cr6.eq) goto loc_82715030;
loc_8271502C:
	// li r7,8
	ctx.r7.s64 = 8;
loc_82715030:
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// divwu r11,r10,r23
	r11.u32 = ctx.r10.u32 / r23.u32;
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9454
	return;
loc_82715048:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82715050"))) PPC_WEAK_FUNC(sub_82715050);
PPC_FUNC_IMPL(__imp__sub_82715050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82715054"))) PPC_WEAK_FUNC(sub_82715054);
PPC_FUNC_IMPL(__imp__sub_82715054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715058"))) PPC_WEAK_FUNC(sub_82715058);
PPC_FUNC_IMPL(__imp__sub_82715058) {
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
	// lwz r11,520(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r10.u32);
loc_8271507C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82714cc0
	sub_82714CC0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x8271507c
	if (cr6.lt) goto loc_8271507C;
	// lbz r11,1012(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827150dc
	if (cr6.eq) goto loc_827150DC;
	// lbz r11,1132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1132);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827150b8
	if (!cr6.eq) goto loc_827150B8;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1020);
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// b 0x827150d4
	goto loc_827150D4;
loc_827150B8:
	// lwz r30,1020(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1020);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827150d8
	if (cr6.eq) goto loc_827150D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_827150D4:
	// stw r29,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r29.u32);
loc_827150D8:
	// stb r29,1132(r31)
	PPC_STORE_U8(r31.u32 + 1132, r29.u8);
loc_827150DC:
	// li r11,88
	r11.s64 = 88;
	// stb r29,1012(r31)
	PPC_STORE_U8(r31.u32 + 1012, r29.u8);
	// stb r29,1013(r31)
	PPC_STORE_U8(r31.u32 + 1013, r29.u8);
	// stw r11,1016(r31)
	PPC_STORE_U32(r31.u32 + 1016, r11.u32);
	// stw r29,1020(r31)
	PPC_STORE_U32(r31.u32 + 1020, r29.u32);
	// stb r29,516(r31)
	PPC_STORE_U8(r31.u32 + 516, r29.u8);
	// stb r29,517(r31)
	PPC_STORE_U8(r31.u32 + 517, r29.u8);
	// stw r29,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715100"))) PPC_WEAK_FUNC(sub_82715100);
PPC_FUNC_IMPL(__imp__sub_82715100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715104"))) PPC_WEAK_FUNC(sub_82715104);
PPC_FUNC_IMPL(__imp__sub_82715104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715108"))) PPC_WEAK_FUNC(sub_82715108);
PPC_FUNC_IMPL(__imp__sub_82715108) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x82714cc0
	sub_82714CC0(ctx, base);
	// addi r11,r29,136
	r11.s64 = r29.s64 + 136;
	// add r30,r29,r31
	r30.u64 = r29.u64 + r31.u64;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,1
	r27.s64 = 1;
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// stb r27,536(r30)
	PPC_STORE_U8(r30.u32 + 536, r27.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r24,540(r30)
	PPC_STORE_U8(r30.u32 + 540, r24.u8);
	// stwx r28,r26,r31
	PPC_STORE_U32(r26.u32 + r31.u32, r28.u32);
	// beq cr6,0x827151c4
	if (cr6.eq) goto loc_827151C4;
	// addi r10,r29,140
	ctx.r10.s64 = r29.s64 + 140;
	// mulli r11,r29,108
	r11.s64 = r29.s64 * 108;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r11,576
	ctx.r9.s64 = r11.s64 + 576;
	// stwx r9,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, ctx.r9.u32);
	// stb r27,1008(r30)
	PPC_STORE_U8(r30.u32 + 1008, r27.u8);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// bl 0x82712288
	sub_82712288(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r4,r26,r31
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + r31.u32);
	// lwzx r3,r28,r31
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// stb r29,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r29.u8);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// stb r29,464(r30)
	PPC_STORE_U8(r30.u32 + 464, r29.u8);
	// stb r29,460(r30)
	PPC_STORE_U8(r30.u32 + 460, r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_827151C4:
	// addi r11,r29,140
	r11.s64 = r29.s64 + 140;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r29.u32);
	// stb r29,464(r30)
	PPC_STORE_U8(r30.u32 + 464, r29.u8);
	// stb r29,460(r30)
	PPC_STORE_U8(r30.u32 + 460, r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_827151E0"))) PPC_WEAK_FUNC(sub_827151E0);
PPC_FUNC_IMPL(__imp__sub_827151E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827151E4"))) PPC_WEAK_FUNC(sub_827151E4);
PPC_FUNC_IMPL(__imp__sub_827151E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827151E8"))) PPC_WEAK_FUNC(sub_827151E8);
PPC_FUNC_IMPL(__imp__sub_827151E8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
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
	// bl 0x82714cc0
	sub_82714CC0(ctx, base);
	// addi r10,r31,136
	ctx.r10.s64 = r31.s64 + 136;
	// addi r9,r31,140
	ctx.r9.s64 = r31.s64 + 140;
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,536(r11)
	PPC_STORE_U8(r11.u32 + 536, r26.u8);
	// stb r25,540(r11)
	PPC_STORE_U8(r11.u32 + 540, r25.u8);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// stwx r4,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r4.u32);
	// stwx r29,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + r30.u32, r29.u32);
	// stb r28,460(r11)
	PPC_STORE_U8(r11.u32 + 460, r28.u8);
	// stb r27,464(r11)
	PPC_STORE_U8(r11.u32 + 464, r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82715248"))) PPC_WEAK_FUNC(sub_82715248);
PPC_FUNC_IMPL(__imp__sub_82715248) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8271524C"))) PPC_WEAK_FUNC(sub_8271524C);
PPC_FUNC_IMPL(__imp__sub_8271524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715250"))) PPC_WEAK_FUNC(sub_82715250);
PPC_FUNC_IMPL(__imp__sub_82715250) {
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
	// lwz r9,524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8271529c
	if (!cr6.eq) goto loc_8271529C;
	// lwz r11,528(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x8271529c
	if (!cr6.eq) goto loc_8271529C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8271529C:
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// lwz r31,528(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r8,r5,31
	ctx.r8.s64 = ctx.r5.s64 + 31;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r11,r8,0,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu. r29,r6,r10
	r29.u32 = ctx.r6.u32 / ctx.r10.u32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// divwu r4,r4,r11
	ctx.r4.u32 = ctx.r4.u32 / r11.u32;
	// mullw r11,r4,r29
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x8271539c
	if (cr0.eq) goto loc_8271539C;
	// rlwinm r28,r4,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_827152F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82715390
	if (cr6.eq) goto loc_82715390;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
loc_82715310:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r27,8(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r10,r27,r10
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r10.s32);
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x8271535c
	if (cr6.lt) goto loc_8271535C;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
loc_8271535C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// blt cr6,0x8271537c
	if (cr6.lt) goto loc_8271537C;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_8271537C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x82715310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82715310;
loc_82715390:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// blt cr6,0x827152f4
	if (cr6.lt) goto loc_827152F4;
loc_8271539C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_827153A0"))) PPC_WEAK_FUNC(sub_827153A0);
PPC_FUNC_IMPL(__imp__sub_827153A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827153A4"))) PPC_WEAK_FUNC(sub_827153A4);
PPC_FUNC_IMPL(__imp__sub_827153A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827153A8"))) PPC_WEAK_FUNC(sub_827153A8);
PPC_FUNC_IMPL(__imp__sub_827153A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,524(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r23,528(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// addi r11,r3,544
	r11.s64 = ctx.r3.s64 + 544;
	// li r16,16
	r16.s64 = 16;
	// li r15,0
	r15.s64 = 0;
	// li r14,0
	r14.s64 = 0;
	// li r21,0
	r21.s64 = 0;
loc_827153D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// beq cr6,0x827153f0
	if (cr6.eq) goto loc_827153F0;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r21,4
	cr6.compare<uint32_t>(r21.u32, 4, xer);
	// blt cr6,0x827153d4
	if (cr6.lt) goto loc_827153D4;
loc_827153F0:
	// lwz r3,532(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 532);
	// bl 0x8270deb8
	sub_8270DEB8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r25,1
	r25.s64 = 1;
	// li r20,80
	r20.s64 = 80;
	// li r19,5120
	r19.s64 = 5120;
loc_82715408:
	// li r26,1
	r26.s64 = 1;
	// mr r18,r25
	r18.u64 = r25.u64;
loc_82715410:
	// cmplw cr6,r18,r16
	cr6.compare<uint32_t>(r18.u32, r16.u32, xer);
	// bgt cr6,0x827155bc
	if (cr6.gt) goto loc_827155BC;
	// divwu r11,r24,r25
	r11.u32 = r24.u32 / r25.u32;
	// divwu r10,r23,r26
	ctx.r10.u32 = r23.u32 / r26.u32;
	// mullw r9,r11,r25
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	// mullw r8,r10,r26
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r7,r9,r24
	ctx.r7.s64 = r24.s64 - ctx.r9.s64;
	// subf r6,r8,r23
	ctx.r6.s64 = r23.s64 - ctx.r8.s64;
	// mullw r10,r7,r25
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// divwu r11,r24,r25
	r11.u32 = r24.u32 / r25.u32;
	// mullw r8,r6,r26
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// divwu r9,r23,r26
	ctx.r9.u32 = r23.u32 / r26.u32;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// divwu r3,r5,r11
	ctx.r3.u32 = ctx.r5.u32 / r11.u32;
	// divwu r8,r4,r10
	ctx.r8.u32 = ctx.r4.u32 / ctx.r10.u32;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// mullw r11,r8,r10
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// addi r6,r11,31
	ctx.r6.s64 = r11.s64 + 31;
	// rlwinm r29,r7,0,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r6,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82715514
	if (cr6.eq) goto loc_82715514;
	// addi r31,r17,544
	r31.s64 = r17.s64 + 544;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8271548C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// blt cr6,0x827154b4
	if (cr6.lt) goto loc_827154B4;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_827154B4:
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// bne cr6,0x827154c0
	if (!cr6.eq) goto loc_827154C0;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_827154C0:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r20
	r11.u32 = r11.u32 / r20.u32;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x827154f4
	if (cr6.eq) goto loc_827154F4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x827154f4
	if (cr6.eq) goto loc_827154F4;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x827154f8
	if (!cr6.eq) goto loc_827154F8;
loc_827154F4:
	// li r7,8
	ctx.r7.s64 = 8;
loc_827154F8:
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// divwu r11,r10,r19
	r11.u32 = ctx.r10.u32 / r19.u32;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// bne 0x8271548c
	if (!cr0.eq) goto loc_8271548C;
loc_82715514:
	// lwz r3,1016(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 1016);
	// cmpwi cr6,r3,88
	cr6.compare<int32_t>(ctx.r3.s32, 88, xer);
	// beq cr6,0x82715598
	if (cr6.eq) goto loc_82715598;
	// bl 0x8270d978
	sub_8270D978(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// blt cr6,0x82715544
	if (cr6.lt) goto loc_82715544;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_82715544:
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// bne cr6,0x82715550
	if (!cr6.eq) goto loc_82715550;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82715550:
	// addi r11,r11,79
	r11.s64 = r11.s64 + 79;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r20
	r11.u32 = r11.u32 / r20.u32;
	// rlwinm r8,r10,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,21
	cr6.compare<int32_t>(ctx.r9.s32, 21, xer);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x82715584
	if (cr6.eq) goto loc_82715584;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82715584
	if (cr6.eq) goto loc_82715584;
	// cmpwi cr6,r9,37
	cr6.compare<int32_t>(ctx.r9.s32, 37, xer);
	// bne cr6,0x82715588
	if (!cr6.eq) goto loc_82715588;
loc_82715584:
	// li r7,8
	ctx.r7.s64 = 8;
loc_82715588:
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// divwu r11,r10,r19
	r11.u32 = ctx.r10.u32 / r19.u32;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
loc_82715598:
	// cmplwi cr6,r27,2048
	cr6.compare<uint32_t>(r27.u32, 2048, xer);
	// bgt cr6,0x827155ac
	if (cr6.gt) goto loc_827155AC;
	// mr r16,r18
	r16.u64 = r18.u64;
	// mr r15,r29
	r15.u64 = r29.u64;
	// mr r14,r28
	r14.u64 = r28.u64;
loc_827155AC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r18,r18,r25
	r18.u64 = r18.u64 + r25.u64;
	// cmplwi cr6,r26,8
	cr6.compare<uint32_t>(r26.u32, 8, xer);
	// blt cr6,0x82715410
	if (cr6.lt) goto loc_82715410;
loc_827155BC:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(r25.u32, 8, xer);
	// blt cr6,0x82715408
	if (cr6.lt) goto loc_82715408;
	// cmplwi cr6,r16,1
	cr6.compare<uint32_t>(r16.u32, 1, xer);
	// bne cr6,0x82715600
	if (!cr6.eq) goto loc_82715600;
	// lwz r11,524(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 524);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,528(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 528);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r10,0(r17)
	PPC_STORE_U32(r17.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r17,12
	ctx.r3.s64 = r17.s64 + 12;
	// stw r11,4(r17)
	PPC_STORE_U32(r17.u32 + 4, r11.u32);
	// stw r9,8(r17)
	PPC_STORE_U32(r17.u32 + 8, ctx.r9.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9430
	return;
loc_82715600:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82715250
	sub_82715250(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82715614"))) PPC_WEAK_FUNC(sub_82715614);
PPC_FUNC_IMPL(__imp__sub_82715614) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82715618"))) PPC_WEAK_FUNC(sub_82715618);
PPC_FUNC_IMPL(__imp__sub_82715618) {
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
	// lwz r11,520(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82715644
	if (cr6.eq) goto loc_82715644;
	// bl 0x82715058
	sub_82715058(ctx, base);
loc_82715644:
	// addi r3,r31,1024
	ctx.r3.s64 = r31.s64 + 1024;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addi r31,r31,1008
	r31.s64 = r31.s64 + 1008;
	// li r30,3
	r30.s64 = 3;
loc_82715654:
	// addi r31,r31,-108
	r31.s64 = r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82715654
	if (!cr0.lt) goto loc_82715654;
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

__attribute__((alias("__imp__sub_8271567C"))) PPC_WEAK_FUNC(sub_8271567C);
PPC_FUNC_IMPL(__imp__sub_8271567C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715680"))) PPC_WEAK_FUNC(sub_82715680);
PPC_FUNC_IMPL(__imp__sub_82715680) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,544
	ctx.r10.s64 = ctx.r3.s64 + 544;
	// lwz r8,24192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
loc_827156A8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,88
	cr6.compare<int32_t>(ctx.r9.s32, 88, xer);
	// beq cr6,0x827156c4
	if (cr6.eq) goto loc_827156C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827156a8
	if (cr6.lt) goto loc_827156A8;
loc_827156C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827156d8
	if (!cr6.eq) goto loc_827156D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827153a8
	sub_827153A8(ctx, base);
loc_827156D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82714d68
	sub_82714D68(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82714708
	sub_82714708(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82715714"))) PPC_WEAK_FUNC(sub_82715714);
PPC_FUNC_IMPL(__imp__sub_82715714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715718"))) PPC_WEAK_FUNC(sub_82715718);
PPC_FUNC_IMPL(__imp__sub_82715718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
}

__attribute__((alias("__imp__sub_82715728"))) PPC_WEAK_FUNC(sub_82715728);
PPC_FUNC_IMPL(__imp__sub_82715728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8271572C"))) PPC_WEAK_FUNC(sub_8271572C);
PPC_FUNC_IMPL(__imp__sub_8271572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715730"))) PPC_WEAK_FUNC(sub_82715730);
PPC_FUNC_IMPL(__imp__sub_82715730) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8270dd70
	sub_8270DD70(ctx, base);
	// ori r11,r3,512
	r11.u64 = ctx.r3.u64 | 512;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mullw r30,r27,r26
	r30.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// li r11,0
	r11.s64 = 0;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r5,22
	ctx.r5.s64 = 22;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r8,r9,25056
	ctx.r8.s64 = ctx.r9.s64 + 25056;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r9,35
	ctx.r9.s64 = 35;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// rldicr r6,r10,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82bbaf08
	sub_82BBAF08(ctx, base);
	// rlwinm r4,r3,0,21,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827157d0
	if (!cr6.eq) goto loc_827157D0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// ori r10,r11,4
	ctx.r10.u64 = r11.u64 | 4;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_827157D0:
	// li r11,1
	r11.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fed50
	sub_825FED50(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8271585c
	if (cr6.eq) goto loc_8271585C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8271585c
	if (cr6.eq) goto loc_8271585C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8271585c
	if (cr6.gt) goto loc_8271585C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82715850:
	// dcbf r0,r11
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// bdnz 0x82715850
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82715850;
loc_8271585C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r26,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82715878"))) PPC_WEAK_FUNC(sub_82715878);
PPC_FUNC_IMPL(__imp__sub_82715878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8271587C"))) PPC_WEAK_FUNC(sub_8271587C);
PPC_FUNC_IMPL(__imp__sub_8271587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715880"))) PPC_WEAK_FUNC(sub_82715880);
PPC_FUNC_IMPL(__imp__sub_82715880) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x825e4f28
	sub_825E4F28(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r29,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r29.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8270dda8
	sub_8270DDA8(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825fed50
	sub_825FED50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82715920"))) PPC_WEAK_FUNC(sub_82715920);
PPC_FUNC_IMPL(__imp__sub_82715920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715924"))) PPC_WEAK_FUNC(sub_82715924);
PPC_FUNC_IMPL(__imp__sub_82715924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715928"))) PPC_WEAK_FUNC(sub_82715928);
PPC_FUNC_IMPL(__imp__sub_82715928) {
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
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e4918
	sub_825E4918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8271595c
	if (cr6.eq) goto loc_8271595C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e33f0
	sub_825E33F0(ctx, base);
loc_8271595C:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82715980
	if (cr6.eq) goto loc_82715980;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82715980
	if (cr6.eq) goto loc_82715980;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82715980:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827159A4"))) PPC_WEAK_FUNC(sub_827159A4);
PPC_FUNC_IMPL(__imp__sub_827159A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827159A8"))) PPC_WEAK_FUNC(sub_827159A8);
PPC_FUNC_IMPL(__imp__sub_827159A8) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x827159d8
	if (!cr6.eq) goto loc_827159D8;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r5,r11
	ctx.r9.s64 = r11.s64 - ctx.r5.s64;
	// mullw r30,r10,r5
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r29,r9,r10
	r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// b 0x827159e4
	goto loc_827159E4;
loc_827159D8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mullw r30,r11,r5
	r30.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// mullw r29,r11,r6
	r29.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
loc_827159E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8270dd90
	sub_8270DD90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x825e6740
	sub_825E6740(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715A10"))) PPC_WEAK_FUNC(sub_82715A10);
PPC_FUNC_IMPL(__imp__sub_82715A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715A14"))) PPC_WEAK_FUNC(sub_82715A14);
PPC_FUNC_IMPL(__imp__sub_82715A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715A18"))) PPC_WEAK_FUNC(sub_82715A18);
PPC_FUNC_IMPL(__imp__sub_82715A18) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x825e5398
	sub_825E5398(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82715A50"))) PPC_WEAK_FUNC(sub_82715A50);
PPC_FUNC_IMPL(__imp__sub_82715A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715A54"))) PPC_WEAK_FUNC(sub_82715A54);
PPC_FUNC_IMPL(__imp__sub_82715A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715A58"))) PPC_WEAK_FUNC(sub_82715A58);
PPC_FUNC_IMPL(__imp__sub_82715A58) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82715a88
	if (!cr6.eq) goto loc_82715A88;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r5,r11
	ctx.r9.s64 = r11.s64 - ctx.r5.s64;
	// mullw r4,r10,r5
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r9,r10
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// b 0x82715a94
	goto loc_82715A94;
loc_82715A88:
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mullw r4,r11,r5
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r11,r6
	r31.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
loc_82715A94:
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x825e6740
	sub_825E6740(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e5398
	sub_825E5398(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715AC0"))) PPC_WEAK_FUNC(sub_82715AC0);
PPC_FUNC_IMPL(__imp__sub_82715AC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715AC4"))) PPC_WEAK_FUNC(sub_82715AC4);
PPC_FUNC_IMPL(__imp__sub_82715AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715AC8"))) PPC_WEAK_FUNC(sub_82715AC8);
PPC_FUNC_IMPL(__imp__sub_82715AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_82715AD8"))) PPC_WEAK_FUNC(sub_82715AD8);
PPC_FUNC_IMPL(__imp__sub_82715AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82715928
	sub_82715928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82715ADC"))) PPC_WEAK_FUNC(sub_82715ADC);
PPC_FUNC_IMPL(__imp__sub_82715ADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715AE0"))) PPC_WEAK_FUNC(sub_82715AE0);
PPC_FUNC_IMPL(__imp__sub_82715AE0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,25140
	ctx.r9.s64 = r11.s64 + 25140;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,30236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30236, r11.u32);
	// beq cr6,0x82715b20
	if (cr6.eq) goto loc_82715B20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82715B20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82715B30"))) PPC_WEAK_FUNC(sub_82715B30);
PPC_FUNC_IMPL(__imp__sub_82715B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B34"))) PPC_WEAK_FUNC(sub_82715B34);
PPC_FUNC_IMPL(__imp__sub_82715B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82715B38"))) PPC_WEAK_FUNC(sub_82715B38);
PPC_FUNC_IMPL(__imp__sub_82715B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B40"))) PPC_WEAK_FUNC(sub_82715B40);
PPC_FUNC_IMPL(__imp__sub_82715B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B48"))) PPC_WEAK_FUNC(sub_82715B48);
PPC_FUNC_IMPL(__imp__sub_82715B48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B50"))) PPC_WEAK_FUNC(sub_82715B50);
PPC_FUNC_IMPL(__imp__sub_82715B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B58"))) PPC_WEAK_FUNC(sub_82715B58);
PPC_FUNC_IMPL(__imp__sub_82715B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
loc_82715B70:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715b70
	if (!cr0.eq) goto loc_82715B70;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715B90"))) PPC_WEAK_FUNC(sub_82715B90);
PPC_FUNC_IMPL(__imp__sub_82715B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,84(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
loc_82715BA8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715ba8
	if (!cr0.eq) goto loc_82715BA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715BC8"))) PPC_WEAK_FUNC(sub_82715BC8);
PPC_FUNC_IMPL(__imp__sub_82715BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,132(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
loc_82715BE0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715be0
	if (!cr0.eq) goto loc_82715BE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715C00"))) PPC_WEAK_FUNC(sub_82715C00);
PPC_FUNC_IMPL(__imp__sub_82715C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
loc_82715C18:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715c18
	if (!cr0.eq) goto loc_82715C18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82715C38"))) PPC_WEAK_FUNC(sub_82715C38);
PPC_FUNC_IMPL(__imp__sub_82715C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715c90
	if (cr6.eq) goto loc_82715C90;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715C78:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715c90
	if (cr6.eq) goto loc_82715C90;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715c78
	if (!cr6.eq) goto loc_82715C78;
loc_82715C90:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715CAC"))) PPC_WEAK_FUNC(sub_82715CAC);
PPC_FUNC_IMPL(__imp__sub_82715CAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715CB0"))) PPC_WEAK_FUNC(sub_82715CB0);
PPC_FUNC_IMPL(__imp__sub_82715CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715d08
	if (cr6.eq) goto loc_82715D08;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715CF0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715d08
	if (cr6.eq) goto loc_82715D08;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715cf0
	if (!cr6.eq) goto loc_82715CF0;
loc_82715D08:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715D24"))) PPC_WEAK_FUNC(sub_82715D24);
PPC_FUNC_IMPL(__imp__sub_82715D24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715D28"))) PPC_WEAK_FUNC(sub_82715D28);
PPC_FUNC_IMPL(__imp__sub_82715D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715d80
	if (cr6.eq) goto loc_82715D80;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715D68:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715d80
	if (cr6.eq) goto loc_82715D80;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715d68
	if (!cr6.eq) goto loc_82715D68;
loc_82715D80:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715D9C"))) PPC_WEAK_FUNC(sub_82715D9C);
PPC_FUNC_IMPL(__imp__sub_82715D9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715DA0"))) PPC_WEAK_FUNC(sub_82715DA0);
PPC_FUNC_IMPL(__imp__sub_82715DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715df8
	if (cr6.eq) goto loc_82715DF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715DE0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715df8
	if (cr6.eq) goto loc_82715DF8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715de0
	if (!cr6.eq) goto loc_82715DE0;
loc_82715DF8:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82715E14"))) PPC_WEAK_FUNC(sub_82715E14);
PPC_FUNC_IMPL(__imp__sub_82715E14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82715E18"))) PPC_WEAK_FUNC(sub_82715E18);
PPC_FUNC_IMPL(__imp__sub_82715E18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715e7c
	if (cr6.eq) goto loc_82715E7C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715E5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715e74
	if (cr6.eq) goto loc_82715E74;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715e5c
	if (!cr6.eq) goto loc_82715E5C;
loc_82715E74:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715e98
	if (!cr6.eq) goto loc_82715E98;
loc_82715E7C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82715E98:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq cr6,0x82715ec4
	if (cr6.eq) goto loc_82715EC4;
loc_82715EA8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715ea8
	if (!cr0.eq) goto loc_82715EA8;
loc_82715EC4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82715ED4"))) PPC_WEAK_FUNC(sub_82715ED4);
PPC_FUNC_IMPL(__imp__sub_82715ED4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82715ED8"))) PPC_WEAK_FUNC(sub_82715ED8);
PPC_FUNC_IMPL(__imp__sub_82715ED8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715f3c
	if (cr6.eq) goto loc_82715F3C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715F1C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715f34
	if (cr6.eq) goto loc_82715F34;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715f1c
	if (!cr6.eq) goto loc_82715F1C;
loc_82715F34:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715f58
	if (!cr6.eq) goto loc_82715F58;
loc_82715F3C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82715F58:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq cr6,0x82715f84
	if (cr6.eq) goto loc_82715F84;
loc_82715F68:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82715f68
	if (!cr0.eq) goto loc_82715F68;
loc_82715F84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82715F94"))) PPC_WEAK_FUNC(sub_82715F94);
PPC_FUNC_IMPL(__imp__sub_82715F94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82715F98"))) PPC_WEAK_FUNC(sub_82715F98);
PPC_FUNC_IMPL(__imp__sub_82715F98) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,4
	r28.s64 = ctx.r4.s64 + 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82715ffc
	if (cr6.eq) goto loc_82715FFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82715FDC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82715ff4
	if (cr6.eq) goto loc_82715FF4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82715fdc
	if (!cr6.eq) goto loc_82715FDC;
loc_82715FF4:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82716018
	if (!cr6.eq) goto loc_82716018;
loc_82715FFC:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82716018:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq cr6,0x82716044
	if (cr6.eq) goto loc_82716044;
loc_82716028:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82716028
	if (!cr0.eq) goto loc_82716028;
loc_82716044:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82716054"))) PPC_WEAK_FUNC(sub_82716054);
PPC_FUNC_IMPL(__imp__sub_82716054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

