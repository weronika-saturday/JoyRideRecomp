#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826775E0"))) PPC_WEAK_FUNC(sub_826775E0);
PPC_FUNC_IMPL(__imp__sub_826775E0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x826776e4
	if (!cr6.gt) goto loc_826776E4;
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r26,512
	r26.s64 = 512;
loc_82677618:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// bge cr6,0x82677648
	if (!cr6.lt) goto loc_82677648;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// dcbt r0,r9
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r9
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// dcbt r0,r7
	// dcbt r10,r26
loc_82677648:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lhz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// rotlwi r9,r8,7
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lhz r6,26(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// rotlwi r10,r6,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r5.u32);
	// lhz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// lhz r3,26(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lhz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,22
	cr6.compare<uint32_t>(ctx.r7.u32, 22, xer);
	// bne cr6,0x826776d0
	if (!cr6.eq) goto loc_826776D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c47dd8
	sub_82C47DD8(ctx, base);
	// b 0x826776d8
	goto loc_826776D8;
loc_826776D0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82c45a78
	sub_82C45A78(ctx, base);
loc_826776D8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x82677618
	if (cr6.lt) goto loc_82677618;
loc_826776E4:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826776fc
	if (!cr6.eq) goto loc_826776FC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826776FC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82677714
	if (!cr0.gt) goto loc_82677714;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
loc_82677714:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82677718"))) PPC_WEAK_FUNC(sub_82677718);
PPC_FUNC_IMPL(__imp__sub_82677718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8267771C"))) PPC_WEAK_FUNC(sub_8267771C);
PPC_FUNC_IMPL(__imp__sub_8267771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677720"))) PPC_WEAK_FUNC(sub_82677720);
PPC_FUNC_IMPL(__imp__sub_82677720) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r22,12
	r22.s64 = 12;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677778
	if (!cr6.lt) goto loc_82677778;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17740
	ctx.r7.s64 = ctx.r9.s64 + 17740;
	// addi r6,r8,28916
	ctx.r6.s64 = ctx.r8.s64 + 28916;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82677778:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// lbz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 40);
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r25,16(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// beq cr6,0x826777bc
	if (cr6.eq) goto loc_826777BC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826777c0
	if (!cr6.eq) goto loc_826777C0;
loc_826777BC:
	// li r24,0
	r24.s64 = 0;
loc_826777C0:
	// li r30,0
	r30.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82677898
	if (!cr6.gt) goto loc_82677898;
	// li r27,512
	r27.s64 = 512;
loc_826777D4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bge cr6,0x82677804
	if (!cr6.lt) goto loc_82677804;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// dcbt r0,r9
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r9
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// dcbt r0,r7
	// dcbt r10,r27
loc_82677804:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lhz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// rotlwi r10,r8,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lhz r6,26(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// rotlwi r10,r6,7
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 7);
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lhz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 24);
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// lhz r3,26(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lhz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 20);
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,22
	cr6.compare<uint32_t>(ctx.r7.u32, 22, xer);
	// bne cr6,0x82677884
	if (!cr6.eq) goto loc_82677884;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82c47dd8
	sub_82C47DD8(ctx, base);
	// b 0x8267788c
	goto loc_8267788C;
loc_82677884:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82c45a78
	sub_82C45A78(ctx, base);
loc_8267788C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x826777d4
	if (cr6.lt) goto loc_826777D4;
loc_82677898:
	// extsb r11,r24
	r11.s64 = r24.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826778b4
	if (!cr6.eq) goto loc_826778B4;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x826778d0
	goto loc_826778D0;
loc_826778B4:
	// subf. r11,r10,r25
	r11.s64 = r25.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x826778d0
	if (!cr0.gt) goto loc_826778D0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_826778D0:
	// lwzx r10,r22,r23
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677900
	if (!cr6.lt) goto loc_82677900;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
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
loc_82677900:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82bf8a38
	sub_82BF8A38(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82677918"))) PPC_WEAK_FUNC(sub_82677918);
PPC_FUNC_IMPL(__imp__sub_82677918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8267791C"))) PPC_WEAK_FUNC(sub_8267791C);
PPC_FUNC_IMPL(__imp__sub_8267791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677920"))) PPC_WEAK_FUNC(sub_82677920);
PPC_FUNC_IMPL(__imp__sub_82677920) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r30,24(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82677b24
	if (!cr6.gt) goto loc_82677B24;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677998
	if (!cr6.lt) goto loc_82677998;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17740
	ctx.r7.s64 = ctx.r9.s64 + 17740;
	// addi r6,r8,28936
	ctx.r6.s64 = ctx.r8.s64 + 28936;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82677998:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// li r26,0
	r26.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82677ac4
	if (!cr6.gt) goto loc_82677AC4;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_826779B0:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwzx r31,r28,r11
	r31.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,164(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 164);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,164(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 164);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lbz r7,18(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// clrlwi r6,r7,28
	ctx.r6.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r6,r6,0,31,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82677a84
	if (cr6.eq) goto loc_82677A84;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x82677a50
	if (cr6.lt) goto loc_82677A50;
loc_82677A40:
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bge cr6,0x82677a40
	if (!cr6.lt) goto loc_82677A40;
loc_82677A50:
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82679ae8
	sub_82679AE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82677a84
	if (cr6.eq) goto loc_82677A84;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r8,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r8.u16);
loc_82677A84:
	// lbz r11,18(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 18);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82677ab0
	if (cr6.eq) goto loc_82677AB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82677AB0:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826779b0
	if (cr6.lt) goto loc_826779B0;
loc_82677AC4:
	// lwz r31,116(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r29,112(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
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
	// stw r26,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r26.u32);
	// stw r26,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r26.u32);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677b24
	if (!cr6.lt) goto loc_82677B24;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
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
loc_82677B24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82bf8a38
	sub_82BF8A38(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82677B3C"))) PPC_WEAK_FUNC(sub_82677B3C);
PPC_FUNC_IMPL(__imp__sub_82677B3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82677B40"))) PPC_WEAK_FUNC(sub_82677B40);
PPC_FUNC_IMPL(__imp__sub_82677B40) {
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677b98
	if (!cr6.lt) goto loc_82677B98;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17740
	ctx.r7.s64 = ctx.r9.s64 + 17740;
	// addi r6,r8,28960
	ctx.r6.s64 = ctx.r8.s64 + 28960;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82677B98:
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// li r6,224
	ctx.r6.s64 = 224;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lhz r5,38(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r7,7,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82671400
	sub_82671400(ctx, base);
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82677bfc
	if (!cr6.lt) goto loc_82677BFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
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
loc_82677BFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bf8a38
	sub_82BF8A38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82677C14"))) PPC_WEAK_FUNC(sub_82677C14);
PPC_FUNC_IMPL(__imp__sub_82677C14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82677C18"))) PPC_WEAK_FUNC(sub_82677C18);
PPC_FUNC_IMPL(__imp__sub_82677C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677C24"))) PPC_WEAK_FUNC(sub_82677C24);
PPC_FUNC_IMPL(__imp__sub_82677C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677C28"))) PPC_WEAK_FUNC(sub_82677C28);
PPC_FUNC_IMPL(__imp__sub_82677C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,276(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r21,0(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x82677c9c
	if (cr6.eq) goto loc_82677C9C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82677ca0
	goto loc_82677CA0;
loc_82677C9C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82677CA0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82677cc4
	if (!cr6.eq) goto loc_82677CC4;
	// lbz r11,319(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 319);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82677cd4
	if (!cr6.eq) goto loc_82677CD4;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// b 0x82677cd4
	goto loc_82677CD4;
loc_82677CC4:
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_82677CD4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r26,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r26.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r9,48(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r25,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r25.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82677de8
	if (!cr6.gt) goto loc_82677DE8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r11,r5,28
	r11.s64 = ctx.r5.s64 + 28;
loc_82677D18:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// clrlwi r6,r7,28
	ctx.r6.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82677d60
	if (cr6.eq) goto loc_82677D60;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r19,r7,1
	r19.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r19,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r19.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
loc_82677D60:
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// lhz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r6,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r6.u16);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,18(r11)
	PPC_STORE_U16(r11.u32 + 18, ctx.r7.u16);
	// lhz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// lhz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r9.u16);
	// sth r6,20(r11)
	PPC_STORE_U16(r11.u32 + 20, ctx.r6.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,240
	ctx.r9.s64 = ctx.r9.s64 + 240;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r9,240
	ctx.r7.s64 = ctx.r9.s64 + 240;
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lhz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lhz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// bdnz 0x82677d18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82677D18;
loc_82677DE8:
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lbz r11,327(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r11,15
	ctx.r9.s64 = r11.s64 + 15;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r5,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r5.u32);
	// beq cr6,0x82677f3c
	if (cr6.eq) goto loc_82677F3C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82677e58
	if (cr6.eq) goto loc_82677E58;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stb r28,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r28.u8);
	// sth r28,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, r28.u16);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// b 0x82677e5c
	goto loc_82677E5C;
loc_82677E58:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82677E5C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82677e6c
	if (cr6.eq) goto loc_82677E6C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82677E6C:
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// beq cr6,0x82677efc
	if (cr6.eq) goto loc_82677EFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82677e90
	if (!cr6.eq) goto loc_82677E90;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82677E90:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82677ef0
	if (cr6.eq) goto loc_82677EF0;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// beq cr6,0x82677ed8
	if (cr6.eq) goto loc_82677ED8;
loc_82677EB4:
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82677ed8
	if (cr6.eq) goto loc_82677ED8;
	// sth r9,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r9.u16);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82677eb4
	if (!cr6.eq) goto loc_82677EB4;
loc_82677ED8:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r9.u8);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r7,r10,30
	ctx.r7.s64 = ctx.r10.s64 + 30;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_82677EF0:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r10,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_82677EFC:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// lwz r6,48(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// stw r21,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r21.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r4,r25,r5
	ctx.r4.s64 = ctx.r5.s64 - r25.s64;
	// stw r4,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r21,r3
	ctx.r10.s64 = ctx.r3.s64 - r21.s64;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_82677F3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82677F40"))) PPC_WEAK_FUNC(sub_82677F40);
PPC_FUNC_IMPL(__imp__sub_82677F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_82677F44"))) PPC_WEAK_FUNC(sub_82677F44);
PPC_FUNC_IMPL(__imp__sub_82677F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677F48"))) PPC_WEAK_FUNC(sub_82677F48);
PPC_FUNC_IMPL(__imp__sub_82677F48) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,12
	r11.s64 = 12;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stb r4,399(r1)
	PPC_STORE_U8(ctx.r1.u32 + 399, ctx.r4.u8);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// stw r6,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// stw r7,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r7.u32);
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82677fa4
	if (!cr6.lt) goto loc_82677FA4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29000
	ctx.r8.s64 = ctx.r9.s64 + 29000;
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
loc_82677FA4:
	// li r15,0
	r15.s64 = 0;
	// lwz r14,76(r18)
	r14.u64 = PPC_LOAD_U32(r18.u32 + 76);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// lwz r28,72(r18)
	r28.u64 = PPC_LOAD_U32(r18.u32 + 72);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r15.u32);
	// rlwinm r11,r14,2,0,29
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r15.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// add r17,r11,r28
	r17.u64 = r11.u64 + r28.u64;
	// lwz r31,28(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// stw r14,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r14.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8267800c
	if (!cr6.lt) goto loc_8267800C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82677ffc
	if (cr6.lt) goto loc_82677FFC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82677FFC:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8267800C:
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r15.u32);
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r15.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// lwz r31,28(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82678054
	if (!cr6.lt) goto loc_82678054;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82678044
	if (cr6.lt) goto loc_82678044;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82678044:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82678054:
	// lwz r31,28(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r15.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r31,r30
	ctx.r10.u64 = r31.u64 | r30.u64;
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// li r25,1
	r25.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r14,64
	cr6.compare<int32_t>(r14.s32, 64, xer);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r11,64
	r11.s64 = 64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ble cr6,0x826780a0
	if (!cr6.gt) goto loc_826780A0;
loc_82678094:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r14
	cr6.compare<int32_t>(r11.s32, r14.s32, xer);
	// blt cr6,0x82678094
	if (cr6.lt) goto loc_82678094;
loc_826780A0:
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r20,r31,4,0,27
	r20.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82bfc798
	sub_82BFC798(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// ble cr6,0x82678114
	if (!cr6.gt) goto loc_82678114;
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
loc_826780E8:
	// lwzu r29,4(r30)
	ea = 4 + r30.u32;
	r29.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r14
	cr6.compare<int32_t>(r31.s32, r14.s32, xer);
	// blt cr6,0x826780e8
	if (cr6.lt) goto loc_826780E8;
loc_82678114:
	// li r26,128
	r26.s64 = 128;
	// mr r22,r15
	r22.u64 = r15.u64;
	// cmplw cr6,r28,r17
	cr6.compare<uint32_t>(r28.u32, r17.u32, xer);
	// bge cr6,0x82678298
	if (!cr6.lt) goto loc_82678298;
	// subf r11,r28,r17
	r11.s64 = r17.s64 - r28.s64;
	// addi r27,r28,16
	r27.s64 = r28.s64 + 16;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r21,164
	r21.s64 = 164;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r23,r11,1
	r23.s64 = r11.s64 + 1;
	// lis r11,0
	r11.s64 = 0;
	// ori r24,r11,65535
	r24.u64 = r11.u64 | 65535;
loc_82678144:
	// lwz r11,-16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -16);
	// cmplw cr6,r27,r17
	cr6.compare<uint32_t>(r27.u32, r17.u32, xer);
	// bge cr6,0x82678188
	if (!cr6.lt) goto loc_82678188;
	// lwz r10,-8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -8);
	// lhz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_82678168:
	// dcbt r0,r10
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r10
	// addic. r9,r9,-256
	xer.ca = ctx.r9.u32 > 255;
	ctx.r9.s64 = ctx.r9.s64 + -256;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// bgt 0x82678168
	if (cr0.gt) goto loc_82678168;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// dcbt r10,r21
loc_82678188:
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// beq cr6,0x82678198
	if (cr6.eq) goto loc_82678198;
	// stw r26,164(r11)
	PPC_STORE_U32(r11.u32 + 164, r26.u32);
loc_82678198:
	// lhz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 176);
	// addi r9,r11,172
	ctx.r9.s64 = r11.s64 + 172;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// addi r26,r26,128
	r26.s64 = r26.s64 + 128;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r8
	r28.u64 = r11.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, xer);
	// bge cr6,0x82678284
	if (!cr6.lt) goto loc_82678284;
	// clrlwi r29,r22,16
	r29.u64 = r22.u32 & 0xFFFF;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
loc_826781CC:
	// lbz r10,26(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 26);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subfic r30,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	r30.s64 = 1 - ctx.r10.s64;
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// sthx r29,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + r11.u32, r29.u16);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// bl 0x82bfc8f8
	sub_82BFC8F8(ctx, base);
	// lbz r6,27(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 27);
	// rlwinm r5,r30,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r4,19(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 19);
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// addic r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// subfe r8,r10,r6
	temp.u8 = (~ctx.r10.u32 + ctx.r6.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// sthx r3,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + r11.u32, ctx.r3.u16);
	// and r25,r8,r25
	r25.u64 = ctx.r8.u64 & r25.u64;
	// bge cr6,0x8267824c
	if (!cr6.lt) goto loc_8267824C;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267823c
	if (cr0.eq) goto loc_8267823C;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_8267823C:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// b 0x82678274
	goto loc_82678274;
loc_8267824C:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82678268
	if (cr0.eq) goto loc_82678268;
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_82678268:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_82678274:
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x826781cc
	if (cr6.lt) goto loc_826781CC;
loc_82678284:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// bne 0x82678144
	if (!cr0.eq) goto loc_82678144;
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82678298:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82678318
	if (!cr6.lt) goto loc_82678318;
	// extsw r8,r14
	ctx.r8.s64 = r14.s32;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r6,r7,28628
	ctx.r6.s64 = ctx.r7.s64 + 28628;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82678318:
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8267835c
	if (!cr6.lt) goto loc_8267835C;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// addi r6,r8,28980
	ctx.r6.s64 = ctx.r8.s64 + 28980;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r5,28(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 28);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8267835C:
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826783a0
	if (!cr6.lt) goto loc_826783A0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// addi r7,r9,28644
	ctx.r7.s64 = ctx.r9.s64 + 28644;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r6,16(r18)
	ctx.r6.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_826783A0:
	// addi r10,r25,0
	ctx.r10.s64 = r25.s64 + 0;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r11,-1
	r11.s64 = -1;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r18,r9,4
	r18.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r25,r15
	r25.u64 = r15.u64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// stb r7,89(r16)
	PPC_STORE_U8(r16.u32 + 89, ctx.r7.u8);
	// mr r17,r15
	r17.u64 = r15.u64;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// mr r14,r15
	r14.u64 = r15.u64;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r26,r15
	r26.u64 = r15.u64;
	// stb r11,88(r16)
	PPC_STORE_U8(r16.u32 + 88, r11.u8);
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r31,60(r16)
	r31.u64 = PPC_LOAD_U32(r16.u32 + 60);
	// lwz r28,64(r16)
	r28.u64 = PPC_LOAD_U32(r16.u32 + 64);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// sth r15,0(r18)
	PPC_STORE_U16(r18.u32 + 0, r15.u16);
	// rlwinm r11,r3,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,1152
	ctx.r10.s64 = r11.s64 + 1152;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r15.u32);
loc_8267843C:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82678450
	if (cr6.eq) goto loc_82678450;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// b 0x82678458
	goto loc_82678458;
loc_82678450:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r25,r15
	r25.u64 = r15.u64;
loc_82678458:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82678ae0
	if (cr6.eq) goto loc_82678AE0;
loc_82678468:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82678494
	if (!cr6.gt) goto loc_82678494;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r11,r8,-4
	r11.s64 = ctx.r8.s64 + -4;
	// beq cr6,0x82678494
	if (cr6.eq) goto loc_82678494;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8267848C:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x8267848c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267848C;
loc_82678494:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,1
	r22.s64 = 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// add r20,r10,r11
	r20.u64 = ctx.r10.u64 + r11.u64;
	// mr r24,r11
	r24.u64 = r11.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bge cr6,0x8267884c
	if (!cr6.lt) goto loc_8267884C;
	// lbz r11,399(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 399);
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsb r19,r11
	r19.s64 = r11.s8;
loc_826784D8:
	// lhz r11,4(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 4);
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x826784f0
	if (!cr6.eq) goto loc_826784F0;
	// addi r21,r1,120
	r21.s64 = ctx.r1.s64 + 120;
	// b 0x826784f8
	goto loc_826784F8;
loc_826784F0:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r21,r11,r8
	r21.u64 = r11.u64 + ctx.r8.u64;
loc_826784F8:
	// lhz r11,6(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 6);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x8267850c
	if (!cr6.eq) goto loc_8267850C;
	// addi r23,r1,120
	r23.s64 = ctx.r1.s64 + 120;
	// b 0x82678514
	goto loc_82678514;
loc_8267850C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r11,r8
	r23.u64 = r11.u64 + ctx.r8.u64;
loc_82678514:
	// cmpwi cr6,r26,144
	cr6.compare<int32_t>(r26.s32, 144, xer);
	// bne cr6,0x8267879c
	if (!cr6.eq) goto loc_8267879C;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267855c
	if (cr6.eq) goto loc_8267855C;
	// stw r15,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r15.u32);
	// stw r15,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r15.u32);
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r15.u32);
	// b 0x82678560
	goto loc_82678560;
loc_8267855C:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_82678560:
	// lwz r7,412(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82678578
	if (!cr6.eq) goto loc_82678578;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r15,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r15.u32);
	// b 0x82678580
	goto loc_82678580;
loc_82678578:
	// stw r6,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// stw r31,16(r25)
	PPC_STORE_U32(r25.u32 + 16, r31.u32);
loc_82678580:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r6,28
	r11.s64 = ctx.r6.s64 + 28;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r16,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r16.u32);
	// lwz r7,48(r16)
	ctx.r7.u64 = PPC_LOAD_U32(r16.u32 + 48);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r31.u32);
loc_826785B8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,18(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r7,r7,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826785ec
	if (cr6.eq) goto loc_826785EC;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stdx r3,r8,r4
	PPC_STORE_U64(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u64);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r30.u32);
loc_826785EC:
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r8.u32);
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r7,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r7.u16);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,18(r11)
	PPC_STORE_U16(r11.u32 + 18, ctx.r7.u16);
	// lhz r7,6(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// sth r3,20(r11)
	PPC_STORE_U16(r11.u32 + 20, ctx.r3.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// sth r8,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r8.u16);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,240
	ctx.r8.s64 = ctx.r8.s64 + 240;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r8,240
	ctx.r7.s64 = ctx.r8.s64 + 240;
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lhz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// rotlwi r8,r3,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// bdnz 0x826785b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826785B8;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r10,r28,15
	ctx.r10.s64 = r28.s64 + 15;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// extsb r30,r11
	r30.s64 = r11.s8;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r31.u32);
	// mr r26,r15
	r26.u64 = r15.u64;
	// rlwinm r28,r10,0,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x82678784
	if (cr6.eq) goto loc_82678784;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826786cc
	if (cr6.eq) goto loc_826786CC;
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r15.u32);
	// stb r15,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r15.u8);
	// sth r15,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, r15.u16);
	// stw r15,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r15.u32);
	// b 0x826786d0
	goto loc_826786D0;
loc_826786CC:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_826786D0:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x826786dc
	if (cr6.eq) goto loc_826786DC;
	// stw r11,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r11.u32);
loc_826786DC:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82678750
	if (cr6.eq) goto loc_82678750;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826786fc
	if (!cr6.eq) goto loc_826786FC;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_826786FC:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82678748
	if (cr6.eq) goto loc_82678748;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lhz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// lwz r14,84(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82678738
	if (cr6.eq) goto loc_82678738;
loc_8267871C:
	// cmplw cr6,r10,r14
	cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, xer);
	// beq cr6,0x82678738
	if (cr6.eq) goto loc_82678738;
	// sth r9,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r9.u16);
	// stw r14,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r14.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8267871c
	if (!cr6.eq) goto loc_8267871C;
loc_82678738:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r18,r17,30
	r18.s64 = r17.s64 + 30;
	// stb r10,28(r17)
	PPC_STORE_U8(r17.u32 + 28, ctx.r10.u8);
	// b 0x8267874c
	goto loc_8267874C;
loc_82678748:
	// lwz r14,84(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8267874C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82678750:
	// lhz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// subf r9,r29,r31
	ctx.r9.s64 = r31.s64 - r29.s64;
	// subf r8,r27,r28
	ctx.r8.s64 = r28.s64 - r27.s64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// mr r17,r11
	r17.u64 = r11.u64;
	// sth r7,0(r18)
	PPC_STORE_U16(r18.u32 + 0, ctx.r7.u16);
	// stw r16,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r16.u32);
	// lwz r5,48(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + 48);
	// stw r29,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r29.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r8.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
loc_82678784:
	// addic r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfe r11,r11,r30
	temp.u8 = (~r11.u32 + r30.u32 < ~r11.u32) | (~r11.u32 + r30.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r30,108(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r22,r11,r22
	r22.u64 = r11.u64 + r22.u64;
loc_8267879C:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x826787ac
	if (cr6.eq) goto loc_826787AC;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// bgt cr6,0x82678818
	if (cr6.gt) goto loc_82678818;
loc_826787AC:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826787c0
	if (cr6.eq) goto loc_826787C0;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// bne cr6,0x826787d4
	if (!cr6.eq) goto loc_826787D4;
loc_826787C0:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826787e8
	if (cr6.eq) goto loc_826787E8;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// beq cr6,0x826787e8
	if (cr6.eq) goto loc_826787E8;
loc_826787D4:
	// ld r11,0(r24)
	r11.u64 = PPC_LOAD_U64(r24.u32 + 0);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x82678808
	goto loc_82678808;
loc_826787E8:
	// rlwinm r11,r26,3,0,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826787fc
	if (cr0.eq) goto loc_826787FC;
	// ld r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U64(r24.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_826787FC:
	// stw r22,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r22.u32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r22,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r22.u32);
loc_82678808:
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(r24.u32, r20.u32, xer);
	// blt cr6,0x826784d8
	if (cr6.lt) goto loc_826784D8;
	// b 0x8267884c
	goto loc_8267884C;
loc_82678818:
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(r24.u32, r20.u32, xer);
	// bge cr6,0x8267884c
	if (!cr6.lt) goto loc_8267884C;
	// subf r10,r24,r20
	ctx.r10.s64 = r20.s64 - r24.s64;
	// addi r11,r24,-8
	r11.s64 = r24.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82678838:
	// ldu r10,8(r11)
	ea = 8 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82678838
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82678838;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_8267884C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82678abc
	if (cr6.eq) goto loc_82678ABC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82678894
	if (cr6.eq) goto loc_82678894;
	// stw r15,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r15.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r15,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r15.u32);
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r15.u32);
	// b 0x82678898
	goto loc_82678898;
loc_82678894:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_82678898:
	// lwz r10,412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x826788b0
	if (!cr6.eq) goto loc_826788B0;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r15,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r15.u32);
	// b 0x826788b8
	goto loc_826788B8;
loc_826788B0:
	// stw r6,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r6.u32);
	// stw r31,16(r25)
	PPC_STORE_U32(r25.u32 + 16, r31.u32);
loc_826788B8:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r16,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r16.u32);
	// stw r26,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, r26.u32);
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 48);
	// stw r31,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r31.u32);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// ble cr6,0x826789a4
	if (!cr6.gt) goto loc_826789A4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r26
	ctr.u64 = r26.u64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r11,r6,28
	r11.s64 = ctx.r6.s64 + 28;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_826788F4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,18(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r7,r7,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82678928
	if (cr6.eq) goto loc_82678928;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r27,r11,-4
	r27.s64 = r11.s64 + -4;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stdx r3,r8,r4
	PPC_STORE_U64(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u64);
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r27.u32);
loc_82678928:
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r8.u32);
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r7,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r7.u16);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r7,18(r11)
	PPC_STORE_U16(r11.u32 + 18, ctx.r7.u16);
	// lhz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// sth r3,22(r11)
	PPC_STORE_U16(r11.u32 + 22, ctx.r3.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// sth r7,20(r11)
	PPC_STORE_U16(r11.u32 + 20, ctx.r7.u16);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r8,240
	ctx.r7.s64 = ctx.r8.s64 + 240;
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r8,240
	ctx.r3.s64 = ctx.r8.s64 + 240;
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lhz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// bdnz 0x826788f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826788F4;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
loc_826789A4:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r10,r28,15
	ctx.r10.s64 = r28.s64 + 15;
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r31.u32);
	// mr r26,r15
	r26.u64 = r15.u64;
	// rlwinm r28,r10,0,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82678abc
	if (cr6.eq) goto loc_82678ABC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82678a04
	if (cr6.eq) goto loc_82678A04;
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r15.u32);
	// stb r15,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r15.u8);
	// sth r15,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, r15.u16);
	// stw r15,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r15.u32);
	// b 0x82678a08
	goto loc_82678A08;
loc_82678A04:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82678A08:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82678a14
	if (cr6.eq) goto loc_82678A14;
	// stw r11,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r11.u32);
loc_82678A14:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82678a88
	if (cr6.eq) goto loc_82678A88;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82678a34
	if (!cr6.eq) goto loc_82678A34;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82678A34:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x82678a80
	if (cr6.eq) goto loc_82678A80;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// lhz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// lwz r14,84(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82678a70
	if (cr6.eq) goto loc_82678A70;
loc_82678A54:
	// cmplw cr6,r10,r14
	cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, xer);
	// beq cr6,0x82678a70
	if (cr6.eq) goto loc_82678A70;
	// sth r9,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r9.u16);
	// stw r14,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r14.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82678a54
	if (!cr6.eq) goto loc_82678A54;
loc_82678A70:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r18,r17,30
	r18.s64 = r17.s64 + 30;
	// stb r10,28(r17)
	PPC_STORE_U8(r17.u32 + 28, ctx.r10.u8);
	// b 0x82678a84
	goto loc_82678A84;
loc_82678A80:
	// lwz r14,84(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82678A84:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82678A88:
	// lhz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// subf r9,r30,r31
	ctx.r9.s64 = r31.s64 - r30.s64;
	// subf r8,r29,r28
	ctx.r8.s64 = r28.s64 - r29.s64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// mr r17,r11
	r17.u64 = r11.u64;
	// sth r7,0(r18)
	PPC_STORE_U16(r18.u32 + 0, ctx.r7.u16);
	// stw r16,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r16.u32);
	// lwz r5,48(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + 48);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r8.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
loc_82678ABC:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82678468
	if (!cr6.eq) goto loc_82678468;
loc_82678AE0:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8267843c
	if (cr6.lt) goto loc_8267843C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82678b88
	if (cr6.eq) goto loc_82678B88;
	// lhz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U16(r18.u32 + 0);
	// mr r11,r14
	r11.u64 = r14.u64;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x82678b50
	if (cr6.eq) goto loc_82678B50;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82678B34:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82678b50
	if (cr6.eq) goto loc_82678B50;
	// sth r10,30(r11)
	PPC_STORE_U16(r11.u32 + 30, ctx.r10.u16);
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82678b34
	if (!cr6.eq) goto loc_82678B34;
loc_82678B50:
	// li r11,1
	r11.s64 = 1;
	// stb r11,28(r17)
	PPC_STORE_U8(r17.u32 + 28, r11.u8);
	// lhz r11,84(r16)
	r11.u64 = PPC_LOAD_U16(r16.u32 + 84);
	// lwz r10,48(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 48);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r8,52(r16)
	PPC_STORE_U32(r16.u32 + 52, ctx.r8.u32);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r6,56(r16)
	PPC_STORE_U16(r16.u32 + 56, ctx.r6.u16);
	// sth r6,58(r16)
	PPC_STORE_U16(r16.u32 + 58, ctx.r6.u16);
loc_82678B88:
	// lwz r30,412(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r31,196(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r15,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r15.u32);
	// stw r15,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r15.u32);
	// beq cr6,0x82678bf4
	if (cr6.eq) goto loc_82678BF4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// ble cr6,0x82678bf4
	if (!cr6.gt) goto loc_82678BF4;
	// mtctr r31
	ctr.u64 = r31.u64;
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r31,-8
	r11.s64 = r31.s64 + -8;
loc_82678BDC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82678bdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82678BDC;
	// b 0x82678bf8
	goto loc_82678BF8;
loc_82678BF4:
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82678BF8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82678c44
	if (!cr6.eq) goto loc_82678C44;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82678C44:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r15.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82678c7c
	if (!cr6.eq) goto loc_82678C7C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82678C7C:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r15.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r15.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82678cc0
	if (!cr6.eq) goto loc_82678CC0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82678CC0:
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r15.u32);
	// li r11,12
	r11.s64 = 12;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82678d00
	if (!cr6.lt) goto loc_82678D00;
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
loc_82678D00:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
}

__attribute__((alias("__imp__sub_82678D04"))) PPC_WEAK_FUNC(sub_82678D04);
PPC_FUNC_IMPL(__imp__sub_82678D04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82678D08"))) PPC_WEAK_FUNC(sub_82678D08);
PPC_FUNC_IMPL(__imp__sub_82678D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,20(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82675000
	sub_82675000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r20,1
	r20.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82678dd8
	if (!cr6.eq) goto loc_82678DD8;
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,16
	r27.s64 = 16;
loc_82678D70:
	// lwzx r26,r27,r31
	r26.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r20,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r20.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82bf8c98
	sub_82BF8C98(ctx, base);
	// stwx r26,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r26.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82678f18
	if (cr6.eq) goto loc_82678F18;
	// li r10,4000
	ctx.r10.s64 = 4000;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82678DA0:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x82678da0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82678DA0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82678d70
	if (cr6.eq) goto loc_82678D70;
loc_82678DD8:
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r21,12
	r21.s64 = 12;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82678e1c
	if (!cr6.lt) goto loc_82678E1C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17740
	ctx.r7.s64 = ctx.r9.s64 + 17740;
	// addi r6,r8,17732
	ctx.r6.s64 = ctx.r8.s64 + 17732;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82678E1C:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r19,r11,464
	r19.s64 = r11.s64 + 464;
	// lbz r11,176(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82678eb0
	if (!cr6.eq) goto loc_82678EB0;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82678e60
	if (!cr6.lt) goto loc_82678E60;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17720
	ctx.r8.s64 = ctx.r9.s64 + 17720;
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
loc_82678E60:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// addi r27,r28,56
	r27.s64 = r28.s64 + 56;
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82678eb0
	if (!cr6.gt) goto loc_82678EB0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82678E78:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82678e9c
	if (cr6.eq) goto loc_82678E9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82678E9C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82678e78
	if (cr6.lt) goto loc_82678E78;
loc_82678EB0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82678f6c
	if (cr6.eq) goto loc_82678F6C;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r20,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r20.u32);
	// stw r20,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r20.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r30.u32);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r30.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r30.u32);
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r30.u32);
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r30.u32);
	// stw r30,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r30.u32);
	// stw r30,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r30.u32);
	// sth r30,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, r30.u16);
	// b 0x82678f70
	goto loc_82678F70;
loc_82678F18:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82bf86b8
	sub_82BF86B8(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// stb r30,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r11.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82bf88c8
	sub_82BF88C8(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,280
	r11.s64 = ctx.r1.s64 + 280;
	// addi r10,r29,-8
	ctx.r10.s64 = r29.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82678F54:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82678f54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82678F54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x828e9434
	return;
loc_82678F6C:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82678F70:
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82678fa0
	if (!cr6.lt) goto loc_82678FA0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29072
	ctx.r8.s64 = ctx.r9.s64 + 29072;
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
loc_82678FA0:
	// lwz r26,76(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// addi r23,r31,104
	r23.s64 = r31.s64 + 104;
	// lwz r27,72(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// mr r24,r30
	r24.u64 = r30.u64;
	// clrlwi r25,r26,16
	r25.u64 = r26.u32 & 0xFFFF;
	// sth r25,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r25.u16);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// sth r11,86(r31)
	PPC_STORE_U16(r31.u32 + 86, r11.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// lwzx r11,r21,r22
	r11.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82679010
	if (!cr6.lt) goto loc_82679010;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29056
	ctx.r8.s64 = ctx.r9.s64 + 29056;
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
loc_82679010:
	// lbz r11,36(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 36);
	// lbz r8,37(r28)
	ctx.r8.u64 = PPC_LOAD_U8(r28.u32 + 37);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r8,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,36(r28)
	PPC_STORE_U8(r28.u32 + 36, ctx.r9.u8);
	// bne cr6,0x8267905c
	if (!cr6.eq) goto loc_8267905C;
	// rlwinm r11,r8,0,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826790a8
	if (cr6.eq) goto loc_826790A8;
	// clrlwi r11,r9,29
	r11.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826790a8
	if (!cr6.eq) goto loc_826790A8;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lbz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 200);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826790a8
	if (cr6.eq) goto loc_826790A8;
	// b 0x826790a4
	goto loc_826790A4;
loc_8267905C:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82679070
	if (cr6.gt) goto loc_82679070;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82679070:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r7,180(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82679098
	if (cr6.lt) goto loc_82679098;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,37(r28)
	PPC_STORE_U8(r28.u32 + 37, r11.u8);
	// b 0x826790a0
	goto loc_826790A0;
loc_82679098:
	// clrlwi r11,r9,29
	r11.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
loc_826790A0:
	// bne cr6,0x826790a8
	if (!cr6.eq) goto loc_826790A8;
loc_826790A4:
	// mr r24,r20
	r24.u64 = r20.u64;
loc_826790A8:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82679120
	if (!cr6.eq) goto loc_82679120;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826790e4
	if (!cr6.lt) goto loc_826790E4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29044
	ctx.r8.s64 = ctx.r9.s64 + 29044;
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
loc_826790E4:
	// li r8,224
	ctx.r8.s64 = 224;
	// lwz r7,76(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// addi r5,r19,48
	ctx.r5.s64 = r19.s64 + 48;
	// lwz r6,72(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r19,16
	ctx.r3.s64 = r19.s64 + 16;
	// bl 0x826706b8
	sub_826706B8(ctx, base);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r5,76(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// b 0x826791ac
	goto loc_826791AC;
loc_82679120:
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82679134
	if (!cr6.gt) goto loc_82679134;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82679134:
	// lwz r10,240(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 240);
	// lwz r9,188(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x82679274
	if (!cr6.lt) goto loc_82679274;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82679174
	if (!cr6.lt) goto loc_82679174;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29028
	ctx.r8.s64 = ctx.r9.s64 + 29028;
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
loc_82679174:
	// addi r4,r17,16
	ctx.r4.s64 = r17.s64 + 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r19,16
	ctx.r4.s64 = r19.s64 + 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82675170
	sub_82675170(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
loc_826791AC:
	// bgt cr6,0x826791b4
	if (cr6.gt) goto loc_826791B4;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_826791B4:
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x826791f0
	if (cr6.eq) goto loc_826791F0;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82676e68
	sub_82676E68(ctx, base);
loc_826791F0:
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82679220
	if (!cr6.lt) goto loc_82679220;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
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
loc_82679220:
	// li r11,12
	r11.s64 = 12;
	// stb r20,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r20.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r30,1(r29)
	PPC_STORE_U8(r29.u32 + 1, r30.u8);
	// stb r10,2(r29)
	PPC_STORE_U8(r29.u32 + 2, ctx.r10.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r9,4(r29)
	PPC_STORE_U16(r29.u32 + 4, ctx.r9.u16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// sth r8,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r8.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r20,32(r29)
	PPC_STORE_U16(r29.u32 + 32, r20.u16);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82bf8b78
	sub_82BF8B78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x828e9434
	return;
loc_82679274:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82679298
	if (!cr6.lt) goto loc_82679298;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29016
	ctx.r8.s64 = ctx.r9.s64 + 29016;
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
loc_82679298:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82674820
	sub_82674820(ctx, base);
	// addi r8,r26,-1
	ctx.r8.s64 = r26.s64 + -1;
	// addi r9,r17,16
	ctx.r9.s64 = r17.s64 + 16;
	// rlwinm r11,r8,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// stw r9,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r24,33(r31)
	PPC_STORE_U8(r31.u32 + 33, r24.u8);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stb r20,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r20.u8);
	// stw r31,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r31.u32);
	// stw r27,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r27.u32);
	// sth r30,36(r29)
	PPC_STORE_U16(r29.u32 + 36, r30.u16);
	// sth r25,38(r29)
	PPC_STORE_U16(r29.u32 + 38, r25.u16);
	// stb r20,2(r29)
	PPC_STORE_U8(r29.u32 + 2, r20.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// bl 0x82bf86b8
	sub_82BF86B8(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sth r30,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, r30.u16);
	// lbz r4,308(r19)
	ctx.r4.u64 = PPC_LOAD_U8(r19.u32 + 308);
	// bl 0x82677f48
	sub_82677F48(ctx, base);
	// lwzx r11,r21,r22
	r11.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82679378
	if (!cr6.lt) goto loc_82679378;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12864
	ctx.r8.s64 = ctx.r9.s64 + 12864;
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
loc_82679378:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// std r10,120(r31)
	PPC_STORE_U64(r31.u32 + 120, ctx.r10.u64);
	// stw r28,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r28.u32);
	// stw r27,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r27.u32);
	// stw r26,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r26.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r30.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lhz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// stb r20,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r20.u8);
	// sth r8,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r8.u16);
	// sth r7,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r7.u16);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// sth r9,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r9.u16);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x82bf8a38
	sub_82BF8A38(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
}

__attribute__((alias("__imp__sub_826793F8"))) PPC_WEAK_FUNC(sub_826793F8);
PPC_FUNC_IMPL(__imp__sub_826793F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_826793FC"))) PPC_WEAK_FUNC(sub_826793FC);
PPC_FUNC_IMPL(__imp__sub_826793FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679400"))) PPC_WEAK_FUNC(sub_82679400);
PPC_FUNC_IMPL(__imp__sub_82679400) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82679520
	if (cr6.eq) goto loc_82679520;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82679520
	if (cr6.eq) goto loc_82679520;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r27,r11,92
	r27.s64 = r11.s64 + 92;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r26,0
	r26.s64 = 0;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// sth r7,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r7.u16);
	// sth r10,32(r9)
	PPC_STORE_U16(ctx.r9.u32 + 32, ctx.r10.u16);
	// lwz r3,20(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r11,40
	r31.s64 = r11.s64 + 40;
	// ble cr6,0x826794d0
	if (!cr6.gt) goto loc_826794D0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82679470:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// sth r10,32(r28)
	PPC_STORE_U16(r28.u32 + 32, ctx.r10.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x826794a8
	if (!cr6.eq) goto loc_826794A8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826794A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
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
	// bne 0x82679470
	if (!cr0.eq) goto loc_82679470;
loc_826794D0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82679508
	if (!cr6.eq) goto loc_82679508;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82679508:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82679520:
	// lhz r11,32(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82679558
	if (!cr6.gt) goto loc_82679558;
	// lhz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r11,32(r9)
	PPC_STORE_U16(ctx.r9.u32 + 32, r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r7,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r7.u16);
	// sth r8,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r8.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82679558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82679560"))) PPC_WEAK_FUNC(sub_82679560);
PPC_FUNC_IMPL(__imp__sub_82679560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82679564"))) PPC_WEAK_FUNC(sub_82679564);
PPC_FUNC_IMPL(__imp__sub_82679564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679568"))) PPC_WEAK_FUNC(sub_82679568);
PPC_FUNC_IMPL(__imp__sub_82679568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bgt cr6,0x82679578
	if (cr6.gt) goto loc_82679578;
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82679578:
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bgt cr6,0x82679588
	if (cr6.gt) goto loc_82679588;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82679588:
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// bgt cr6,0x82679598
	if (cr6.gt) goto loc_82679598;
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_82679598:
	// cmpwi cr6,r3,64
	cr6.compare<int32_t>(ctx.r3.s32, 64, xer);
	// bgt cr6,0x826795a8
	if (cr6.gt) goto loc_826795A8;
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_826795A8:
	// cmpwi cr6,r3,96
	cr6.compare<int32_t>(ctx.r3.s32, 96, xer);
	// bgt cr6,0x826795b8
	if (cr6.gt) goto loc_826795B8;
	// li r3,96
	ctx.r3.s64 = 96;
	// blr 
	return;
loc_826795B8:
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bgt cr6,0x826795c8
	if (cr6.gt) goto loc_826795C8;
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
loc_826795C8:
	// cmpwi cr6,r3,160
	cr6.compare<int32_t>(ctx.r3.s32, 160, xer);
	// bgt cr6,0x826795d8
	if (cr6.gt) goto loc_826795D8;
	// li r3,160
	ctx.r3.s64 = 160;
	// blr 
	return;
loc_826795D8:
	// cmpwi cr6,r3,192
	cr6.compare<int32_t>(ctx.r3.s32, 192, xer);
	// bgt cr6,0x826795e8
	if (cr6.gt) goto loc_826795E8;
	// li r3,192
	ctx.r3.s64 = 192;
	// blr 
	return;
loc_826795E8:
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// bgt cr6,0x826795f8
	if (cr6.gt) goto loc_826795F8;
	// li r3,256
	ctx.r3.s64 = 256;
	// blr 
	return;
loc_826795F8:
	// cmpwi cr6,r3,320
	cr6.compare<int32_t>(ctx.r3.s32, 320, xer);
	// bgt cr6,0x82679608
	if (cr6.gt) goto loc_82679608;
	// li r3,320
	ctx.r3.s64 = 320;
	// blr 
	return;
loc_82679608:
	// cmpwi cr6,r3,512
	cr6.compare<int32_t>(ctx.r3.s32, 512, xer);
	// bgt cr6,0x82679618
	if (cr6.gt) goto loc_82679618;
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
loc_82679618:
	// cmpwi cr6,r3,544
	cr6.compare<int32_t>(ctx.r3.s32, 544, xer);
	// bgt cr6,0x82679628
	if (cr6.gt) goto loc_82679628;
	// li r3,544
	ctx.r3.s64 = 544;
	// blr 
	return;
loc_82679628:
	// cmpwi cr6,r3,1024
	cr6.compare<int32_t>(ctx.r3.s32, 1024, xer);
	// bgt cr6,0x82679638
	if (cr6.gt) goto loc_82679638;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
loc_82679638:
	// cmpwi cr6,r3,2048
	cr6.compare<int32_t>(ctx.r3.s32, 2048, xer);
	// bgt cr6,0x82679648
	if (cr6.gt) goto loc_82679648;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
loc_82679648:
	// cmpwi cr6,r3,4096
	cr6.compare<int32_t>(ctx.r3.s32, 4096, xer);
	// bgt cr6,0x82679658
	if (cr6.gt) goto loc_82679658;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
loc_82679658:
	// cmpwi cr6,r3,8192
	cr6.compare<int32_t>(ctx.r3.s32, 8192, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,8192
	ctx.r3.s64 = 8192;
}

__attribute__((alias("__imp__sub_82679664"))) PPC_WEAK_FUNC(sub_82679664);
PPC_FUNC_IMPL(__imp__sub_82679664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82679668"))) PPC_WEAK_FUNC(sub_82679668);
PPC_FUNC_IMPL(__imp__sub_82679668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mullw r11,r10,r3
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r9,r11,63
	ctx.r9.s64 = r11.s64 + 63;
	// rlwinm r26,r9,0,0,27
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82679568
	sub_82679568(ctx, base);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,7
	r11.s64 = 7;
	// sth r26,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r26.u16);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// sth r28,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r28.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r31,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r31.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r27,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r27.u16);
	// stb r29,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r29.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// sth r4,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r4.u16);
loc_82679708:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82679708
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82679708;
	// li r11,22
	r11.s64 = 22;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82679720"))) PPC_WEAK_FUNC(sub_82679720);
PPC_FUNC_IMPL(__imp__sub_82679720) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82679724"))) PPC_WEAK_FUNC(sub_82679724);
PPC_FUNC_IMPL(__imp__sub_82679724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679728"))) PPC_WEAK_FUNC(sub_82679728);
PPC_FUNC_IMPL(__imp__sub_82679728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e941c
	// ld r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// lhz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// li r31,0
	r31.s64 = 0;
	// rotlwi r11,r7,5
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r6.u64);
	// addi r30,r11,48
	r30.s64 = r11.s64 + 48;
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r5,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r5.u64);
	// ld r11,40(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// rotlwi r11,r7,5
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lbz r5,10(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// beq cr6,0x82679804
	if (cr6.eq) {
		sub_82679804(ctx, base);
		return;
	}
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// srawi r29,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	r29.s64 = ctx.r5.s32 >> 2;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
loc_826797A8:
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lvx128 v13,r10,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stvx128 v13,r6,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// ble cr6,0x826797e4
	if (!cr6.gt) goto loc_826797E4;
	// subf r9,r11,r30
	ctx.r9.s64 = r30.s64 - r11.s64;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_826797D4:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x826797d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826797D4;
loc_826797E4:
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r30,r5,r30
	r30.u64 = ctx.r5.u64 + r30.u64;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// blt cr6,0x826797a8
	if (cr6.lt) goto loc_826797A8;
}

__attribute__((alias("__imp__sub_82679804"))) PPC_WEAK_FUNC(sub_82679804);
PPC_FUNC_IMPL(__imp__sub_82679804) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82679808"))) PPC_WEAK_FUNC(sub_82679808);
PPC_FUNC_IMPL(__imp__sub_82679808) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,4(r3)
	r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x826798a8
	if (cr6.lt) goto loc_826798A8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bgt cr6,0x82679844
	if (cr6.gt) goto loc_82679844;
	// li r11,2
	r11.s64 = 2;
loc_82679844:
	// lhz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// blt cr6,0x82679858
	if (cr6.lt) goto loc_82679858;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82679858:
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// bl 0x82679668
	sub_82679668(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82679728
	sub_82679728(ctx, base);
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// bl 0x82679568
	sub_82679568(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
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
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stb r9,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r9.u8);
loc_826798A8:
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rotlwi r10,r6,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// sth r5,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r5.u16);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// blt 0x826798fc
	if (cr0.lt) goto loc_826798FC;
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826798fc
	if (cr0.eq) goto loc_826798FC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826798F4:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x826798f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826798F4;
loc_826798FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82679904"))) PPC_WEAK_FUNC(sub_82679904);
PPC_FUNC_IMPL(__imp__sub_82679904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82679908"))) PPC_WEAK_FUNC(sub_82679908);
PPC_FUNC_IMPL(__imp__sub_82679908) {
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
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bgt cr6,0x82679994
	if (cr6.gt) goto loc_82679994;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// bl 0x82679668
	sub_82679668(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82679728
	sub_82679728(ctx, base);
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// bl 0x82679568
	sub_82679568(ctx, base);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r9,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82679994:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267999C"))) PPC_WEAK_FUNC(sub_8267999C);
PPC_FUNC_IMPL(__imp__sub_8267999C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826799A0"))) PPC_WEAK_FUNC(sub_826799A0);
PPC_FUNC_IMPL(__imp__sub_826799A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826799B0"))) PPC_WEAK_FUNC(sub_826799B0);
PPC_FUNC_IMPL(__imp__sub_826799B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799C0"))) PPC_WEAK_FUNC(sub_826799C0);
PPC_FUNC_IMPL(__imp__sub_826799C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799C8"))) PPC_WEAK_FUNC(sub_826799C8);
PPC_FUNC_IMPL(__imp__sub_826799C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799D4"))) PPC_WEAK_FUNC(sub_826799D4);
PPC_FUNC_IMPL(__imp__sub_826799D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826799D8"))) PPC_WEAK_FUNC(sub_826799D8);
PPC_FUNC_IMPL(__imp__sub_826799D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799E0"))) PPC_WEAK_FUNC(sub_826799E0);
PPC_FUNC_IMPL(__imp__sub_826799E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_826799E4"))) PPC_WEAK_FUNC(sub_826799E4);
PPC_FUNC_IMPL(__imp__sub_826799E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826799E8"))) PPC_WEAK_FUNC(sub_826799E8);
PPC_FUNC_IMPL(__imp__sub_826799E8) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
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
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82679adc
	if (cr6.eq) goto loc_82679ADC;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// blt cr6,0x82679adc
	if (cr6.lt) goto loc_82679ADC;
loc_82679A24:
	// addi r11,r11,-23
	r11.s64 = r11.s64 + -23;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x82679acc
	if (cr6.gt) goto loc_82679ACC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82679a70
	if (cr6.eq) goto loc_82679A70;
	// bdz 0x82679a50
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82679A50;
	// bdz 0x82679acc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82679ACC;
	// bdz 0x82679a90
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82679A90;
	// bdz 0x82679acc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82679ACC;
	// b 0x82679ab0
	goto loc_82679AB0;
loc_82679A50:
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
	// bl 0x82658540
	sub_82658540(ctx, base);
	// b 0x82679acc
	goto loc_82679ACC;
loc_82679A70:
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
	// bl 0x82658ad8
	sub_82658AD8(ctx, base);
	// b 0x82679acc
	goto loc_82679ACC;
loc_82679A90:
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
	// bl 0x82658708
	sub_82658708(ctx, base);
	// b 0x82679acc
	goto loc_82679ACC;
loc_82679AB0:
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
	// bl 0x82658918
	sub_82658918(ctx, base);
loc_82679ACC:
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bge cr6,0x82679a24
	if (!cr6.lt) goto loc_82679A24;
loc_82679ADC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82679AE0"))) PPC_WEAK_FUNC(sub_82679AE0);
PPC_FUNC_IMPL(__imp__sub_82679AE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82679AE4"))) PPC_WEAK_FUNC(sub_82679AE4);
PPC_FUNC_IMPL(__imp__sub_82679AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679AE8"))) PPC_WEAK_FUNC(sub_82679AE8);
PPC_FUNC_IMPL(__imp__sub_82679AE8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae4
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r4,72
	ctx.r9.s64 = ctx.r4.s64 + 72;
	// lhz r11,4(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// addi r25,r11,-1
	r25.s64 = r11.s64 + -1;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// lbz r8,10(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// addi r29,r5,48
	r29.s64 = ctx.r5.s64 + 48;
	// lwz r21,48(r4)
	r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r20,52(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// addi r19,r4,48
	r19.s64 = ctx.r4.s64 + 48;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r18,r4,52
	r18.s64 = ctx.r4.s64 + 52;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r26,0
	r26.s64 = 0;
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r15,r26
	r15.u64 = r26.u64;
	// addi r31,r10,48
	r31.s64 = ctx.r10.s64 + 48;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r24,8(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lbz r6,18(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 18);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r14,r11,31
	r14.u64 = r11.u32 & 0x1;
	// blt cr6,0x82679f6c
	if (cr6.lt) goto loc_82679F6C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f27,-5556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5556);
	f27.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f28,1468(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1468);
	f28.f64 = double(temp.f32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lfs f30,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f30.f64 = double(temp.f32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f29,18248(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18248);
	f29.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f25,-12728(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12728);
	f25.f64 = double(temp.f32);
	// lfs f23,-512(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -512);
	f23.f64 = double(temp.f32);
	// li r17,2
	r17.s64 = 2;
	// addi r11,r11,5472
	r11.s64 = r11.s64 + 5472;
	// lfs f26,18244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 18244);
	f26.f64 = double(temp.f32);
	// lfs f31,21036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f24,9104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9104);
	f24.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_82679BE0:
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82679e7c
	if (cr6.eq) goto loc_82679E7C;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r6,r11,64
	ctx.r6.s64 = r11.s64 + 64;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826700c0
	sub_826700C0(ctx, base);
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r22.u32);
	// addi r6,r23,-20
	ctx.r6.s64 = r23.s64 + -20;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r17.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r14,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, r14.u8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stb r7,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r7.u8);
	// stb r8,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r8.u8);
	// stw r5,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r26.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r21.u32);
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r20.u32);
	// bl 0x826596f8
	sub_826596F8(ctx, base);
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// lhz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82679c98
	if (cr6.eq) goto loc_82679C98;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82679C98:
	// li r11,1
	r11.s64 = 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// lhz r10,516(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82679cb8
	if (cr6.eq) goto loc_82679CB8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82679CB8:
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// bge cr6,0x82679cdc
	if (!cr6.lt) goto loc_82679CDC;
	// lbz r11,14(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82679cdc
	if (cr6.eq) goto loc_82679CDC;
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,15(r31)
	PPC_STORE_U8(r31.u32 + 15, ctx.r10.u8);
loc_82679CDC:
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82679d08
	if (cr6.eq) goto loc_82679D08;
	// stfs f24,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82679f4c
	goto loc_82679F4C;
loc_82679D08:
	// lbz r9,13(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,120(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lfs f10,112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// lfd f0,288(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f26
	f0.f64 = double(float(ctx.f11.f64 * f26.f64));
	// bge cr6,0x82679df8
	if (!cr6.lt) goto loc_82679DF8;
	// fcmpu cr6,f0,f23
	cr6.compare(f0.f64, f23.f64);
	// ble cr6,0x82679df8
	if (!cr6.gt) goto loc_82679DF8;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stfs f0,260(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,272(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lbz r11,14(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// stfs f31,276(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f13,268(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f25,264(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lfsx f0,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// beq cr6,0x82679d84
	if (cr6.eq) goto loc_82679D84;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
loc_82679D84:
	// addi r10,r1,296
	ctx.r10.s64 = ctx.r1.s64 + 296;
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8267b2f0
	sub_8267B2F0(ctx, base);
	// lbz r11,280(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82679de4
	if (cr6.eq) goto loc_82679DE4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,1
	r11.s64 = 1;
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,240(r1)
	PPC_STORE_U16(ctx.r1.u32 + 240, r11.u16);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// sth r11,242(r1)
	PPC_STORE_U16(ctx.r1.u32 + 242, r11.u16);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r31.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// bl 0x8265a3f0
	sub_8265A3F0(ctx, base);
loc_82679DE4:
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82679f4c
	goto loc_82679F4C;
loc_82679DF8:
	// li r11,416
	r11.s64 = 416;
	// fadds f12,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f0.f64 + f30.f64));
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r27,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r27.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v12,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// stvewx v11,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 + f29.f64));
	// fdivs f6,f30,f7
	ctx.f6.f64 = double(float(f30.f64 / ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * f28.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r16)
	temp.u32 = PPC_LOAD_U32(r16.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * f27.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f10,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsel f8,f11,f31,f9
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : ctx.f9.f64;
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82679f4c
	goto loc_82679F4C;
loc_82679E7C:
	// extsb r11,r14
	r11.s64 = r14.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82679f50
	if (cr6.eq) goto loc_82679F50;
	// subf r11,r28,r25
	r11.s64 = r25.s64 - r28.s64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r11.u8);
	// addi r6,r23,-20
	ctx.r6.s64 = r23.s64 + -20;
	// stb r8,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r8.u8);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// stb r7,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r21.u32);
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r20.u32);
	// bl 0x826596f8
	sub_826596F8(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// lhz r4,516(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82679f0c
	if (cr6.eq) goto loc_82679F0C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82679F0C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lhz r10,516(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82679f2c
	if (cr6.eq) goto loc_82679F2C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82679F2C:
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(r28.s32, r25.s32, xer);
	// bge cr6,0x82679f50
	if (!cr6.lt) goto loc_82679F50;
	// lbz r11,14(r15)
	r11.u64 = PPC_LOAD_U8(r15.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82679f50
	if (cr6.eq) goto loc_82679F50;
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82679F4C:
	// stb r10,15(r31)
	PPC_STORE_U8(r31.u32 + 15, ctx.r10.u8);
loc_82679F50:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r15,r31
	r15.u64 = r31.u64;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// bge 0x82679be0
	if (!cr0.lt) goto loc_82679BE0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82679F6C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// rlwinm r9,r10,0,24,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_82679F8C"))) PPC_WEAK_FUNC(sub_82679F8C);
PPC_FUNC_IMPL(__imp__sub_82679F8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82679F90"))) PPC_WEAK_FUNC(sub_82679F90);
PPC_FUNC_IMPL(__imp__sub_82679F90) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lhz r31,4(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// sth r8,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r8.u16);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r26,40(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82679808
	sub_82679808(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r3.u32);
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rotlwi r11,r31,5
	r11.u64 = __builtin_rotateleft32(r31.u32, 5);
	// lbz r4,10(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mullw r10,r4,r31
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rotlwi r9,r5,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = r11.s64 - ctx.r4.s64;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stb r6,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r6.u8);
	// ble cr6,0x8267a050
	if (!cr6.gt) goto loc_8267A050;
	// lbz r9,15(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15);
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8267a050
	if (!cr6.eq) goto loc_8267A050;
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8267a050
	if (!cr6.eq) goto loc_8267A050;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
loc_8267A050:
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r10,1,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// mulli r11,r10,112
	r11.s64 = ctx.r10.s64 * 112;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r11,160
	ctx.r6.s64 = r11.s64 + 160;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bne cr6,0x8267a0a0
	if (!cr6.eq) goto loc_8267A0A0;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8267A0A0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r11,r8,48
	r11.s64 = ctx.r8.s64 + 48;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bne cr6,0x8267a0b8
	if (!cr6.eq) goto loc_8267A0B8;
	// addi r11,r8,64
	r11.s64 = ctx.r8.s64 + 64;
loc_8267A0B8:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264cda8
	sub_8264CDA8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267a0fc
	if (cr6.eq) goto loc_8267A0FC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lhz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lwz r5,40(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// bl 0x8264c0e8
	sub_8264C0E8(ctx, base);
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
loc_8267A0FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x8267a3c0
	sub_8267A3C0(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8267A110"))) PPC_WEAK_FUNC(sub_8267A110);
PPC_FUNC_IMPL(__imp__sub_8267A110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267A114"))) PPC_WEAK_FUNC(sub_8267A114);
PPC_FUNC_IMPL(__imp__sub_8267A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A118"))) PPC_WEAK_FUNC(sub_8267A118);
PPC_FUNC_IMPL(__imp__sub_8267A118) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// addi r8,r10,18332
	ctx.r8.s64 = ctx.r10.s64 + 18332;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r11,r9,8
	r11.u64 = ctx.r9.u64 | 8;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// sth r7,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r7.u16);
	// li r10,13312
	ctx.r10.s64 = 13312;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// lbz r4,209(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 209);
	// lbz r5,209(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 209);
	// add r11,r5,r4
	r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r9,r11,13
	ctx.r9.s64 = r11.s64 + 13;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r7,r10,r8
	ctx.r7.s32 = ctx.r10.s32 / ctx.r8.s32;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// bl 0x82679668
	sub_82679668(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// sth r30,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, r30.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r6.u16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8267A1BC:
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8267a1bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267A1BC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
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

__attribute__((alias("__imp__sub_8267A1E8"))) PPC_WEAK_FUNC(sub_8267A1E8);
PPC_FUNC_IMPL(__imp__sub_8267A1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A1EC"))) PPC_WEAK_FUNC(sub_8267A1EC);
PPC_FUNC_IMPL(__imp__sub_8267A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A1F0"))) PPC_WEAK_FUNC(sub_8267A1F0);
PPC_FUNC_IMPL(__imp__sub_8267A1F0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267a3b0
	if (cr6.eq) goto loc_8267A3B0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// li r11,0
	r11.s64 = 0;
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r31,16(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r6,23
	cr6.compare<uint32_t>(ctx.r6.u32, 23, xer);
	// blt cr6,0x8267a2a8
	if (cr6.lt) goto loc_8267A2A8;
loc_8267A254:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8267a27c
	if (!cr6.eq) goto loc_8267A27C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8267A27C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r31,20(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r8,23
	cr6.compare<uint32_t>(ctx.r8.u32, 23, xer);
	// bge cr6,0x8267a254
	if (!cr6.lt) goto loc_8267A254;
loc_8267A2A8:
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8267a374
	if (cr0.lt) goto loc_8267A374;
	// rlwinm r31,r25,2,0,29
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8267A2B4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,-23
	r11.s64 = r11.s64 + -23;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8267a368
	if (cr6.gt) goto loc_8267A368;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8267a30c
	if (cr6.eq) goto loc_8267A30C;
	// bdz 0x8267a2ec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8267A2EC;
	// bdz 0x8267a368
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8267A368;
	// bdz 0x8267a32c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8267A32C;
	// bdz 0x8267a368
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8267A368;
	// b 0x8267a34c
	goto loc_8267A34C;
loc_8267A2EC:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82658510
	sub_82658510(ctx, base);
	// b 0x8267a368
	goto loc_8267A368;
loc_8267A30C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82658658
	sub_82658658(ctx, base);
	// b 0x8267a368
	goto loc_8267A368;
loc_8267A32C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82658738
	sub_82658738(ctx, base);
	// b 0x8267a368
	goto loc_8267A368;
loc_8267A34C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82658a08
	sub_82658A08(ctx, base);
loc_8267A368:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x8267a2b4
	if (!cr0.lt) goto loc_8267A2B4;
loc_8267A374:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8267a3b0
	if (!cr6.eq) goto loc_8267A3B0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267A3B0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_8267A3B8"))) PPC_WEAK_FUNC(sub_8267A3B8);
PPC_FUNC_IMPL(__imp__sub_8267A3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267A3BC"))) PPC_WEAK_FUNC(sub_8267A3BC);
PPC_FUNC_IMPL(__imp__sub_8267A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A3C0"))) PPC_WEAK_FUNC(sub_8267A3C0);
PPC_FUNC_IMPL(__imp__sub_8267A3C0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r3.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8267a3fc
	if (cr0.lt) goto loc_8267A3FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8267A3E8:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x8267a45c
	if (cr6.eq) goto loc_8267A45C;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8267a3e8
	if (!cr0.lt) goto loc_8267A3E8;
loc_8267A3FC:
	// clrlwi r30,r4,24
	r30.u64 = ctx.r4.u32 & 0xFF;
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
	// bne cr6,0x8267a428
	if (!cr6.eq) goto loc_8267A428;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8267A428:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stbx r30,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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
loc_8267A45C:
	// stbx r4,r11,r3
	PPC_STORE_U8(r11.u32 + ctx.r3.u32, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_8267A460"))) PPC_WEAK_FUNC(sub_8267A460);
PPC_FUNC_IMPL(__imp__sub_8267A460) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267a444
	// ERROR 8267A444
	return;
}

__attribute__((alias("__imp__sub_8267A464"))) PPC_WEAK_FUNC(sub_8267A464);
PPC_FUNC_IMPL(__imp__sub_8267A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A468"))) PPC_WEAK_FUNC(sub_8267A468);
PPC_FUNC_IMPL(__imp__sub_8267A468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bne cr6,0x8267a480
	if (!cr6.eq) {
		sub_8267A480(ctx, base);
		return;
	}
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8267A480"))) PPC_WEAK_FUNC(sub_8267A480);
PPC_FUNC_IMPL(__imp__sub_8267A480) {
	PPC_FUNC_PROLOGUE();
	// b 0x82641408
	sub_82641408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A484"))) PPC_WEAK_FUNC(sub_8267A484);
PPC_FUNC_IMPL(__imp__sub_8267A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A488"))) PPC_WEAK_FUNC(sub_8267A488);
PPC_FUNC_IMPL(__imp__sub_8267A488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bne cr6,0x8267a4a0
	if (!cr6.eq) {
		sub_8267A4A0(ctx, base);
		return;
	}
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8267A4A0"))) PPC_WEAK_FUNC(sub_8267A4A0);
PPC_FUNC_IMPL(__imp__sub_8267A4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8263e9c0
	sub_8263E9C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267A4A4"))) PPC_WEAK_FUNC(sub_8267A4A4);
PPC_FUNC_IMPL(__imp__sub_8267A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A4A8"))) PPC_WEAK_FUNC(sub_8267A4A8);
PPC_FUNC_IMPL(__imp__sub_8267A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8267a4dc
	if (!cr6.eq) goto loc_8267A4DC;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8267a4dc
	if (!cr6.eq) goto loc_8267A4DC;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8267a4e0
	if (cr6.eq) goto loc_8267A4E0;
loc_8267A4DC:
	// li r11,0
	r11.s64 = 0;
loc_8267A4E0:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267A4E8"))) PPC_WEAK_FUNC(sub_8267A4E8);
PPC_FUNC_IMPL(__imp__sub_8267A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r22,20(r8)
	r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,48
	r26.s64 = r11.s64 + 48;
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lwz r9,64(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// rotlwi r10,r4,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// lwz r21,24(r6)
	r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lbz r19,10(r11)
	r19.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lhz r30,4(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r28,r10,48
	r28.s64 = ctx.r10.s64 + 48;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lbz r7,18(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 18);
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r24,r3,31
	r24.u64 = ctx.r3.u32 & 0x1;
	// blt cr6,0x8267a630
	if (cr6.lt) goto loc_8267A630;
	// li r20,3
	r20.s64 = 3;
	// li r30,0
	r30.s64 = 0;
loc_8267A598:
	// lbz r11,15(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 15);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8267a5b4
	if (!cr6.eq) goto loc_8267A5B4;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267a620
	if (cr6.eq) goto loc_8267A620;
loc_8267A5B4:
	// subf r11,r29,r27
	r11.s64 = r27.s64 - r29.s64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// cntlzw r10,r29
	ctx.r10.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r6,r28,20
	ctx.r6.s64 = r28.s64 + 20;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stb r24,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r7,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
	// stb r8,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r8.u8);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267A620:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r26,r26,32
	r26.s64 = r26.s64 + 32;
	// add r28,r19,r28
	r28.u64 = r19.u64 + r28.u64;
	// bge 0x8267a598
	if (!cr0.lt) goto loc_8267A598;
loc_8267A630:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8267A634"))) PPC_WEAK_FUNC(sub_8267A634);
PPC_FUNC_IMPL(__imp__sub_8267A634) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8267A638"))) PPC_WEAK_FUNC(sub_8267A638);
PPC_FUNC_IMPL(__imp__sub_8267A638) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8267a680
	if (!cr6.eq) goto loc_8267A680;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8267A680:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267A6BC"))) PPC_WEAK_FUNC(sub_8267A6BC);
PPC_FUNC_IMPL(__imp__sub_8267A6BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8267A6C0"))) PPC_WEAK_FUNC(sub_8267A6C0);
PPC_FUNC_IMPL(__imp__sub_8267A6C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
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
	// bne cr6,0x8267a704
	if (!cr6.eq) goto loc_8267A704;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8267A704:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267A734"))) PPC_WEAK_FUNC(sub_8267A734);
PPC_FUNC_IMPL(__imp__sub_8267A734) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267A738"))) PPC_WEAK_FUNC(sub_8267A738);
PPC_FUNC_IMPL(__imp__sub_8267A738) {
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
	// lwz r26,4(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8267a98c
	if (cr6.eq) goto loc_8267A98C;
	// li r27,0
	r27.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x8267a84c
	if (cr6.eq) goto loc_8267A84C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne cr6,0x8267a7b4
	if (!cr6.eq) goto loc_8267A7B4;
loc_8267A7B0:
	// lis r11,-32768
	r11.s64 = -2147483648;
loc_8267A7B4:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// ble cr6,0x8267a8e4
	if (!cr6.gt) goto loc_8267A8E4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8267A7D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8267a85c
	if (!cr6.gt) goto loc_8267A85C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_8267A7F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bne cr6,0x8267a828
	if (!cr6.eq) goto loc_8267A828;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r25,4(r9)
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, xer);
	// bne cr6,0x8267a828
	if (!cr6.eq) goto loc_8267A828;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r25,8(r9)
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r25,r8
	cr6.compare<int32_t>(r25.s32, ctx.r8.s32, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq cr6,0x8267a82c
	if (cr6.eq) goto loc_8267A82C;
loc_8267A828:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_8267A82C:
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8267a854
	if (!cr6.eq) goto loc_8267A854;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8267a7f8
	if (cr6.lt) goto loc_8267A7F8;
	// b 0x8267a85c
	goto loc_8267A85C;
loc_8267A84C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8267a7b0
	goto loc_8267A7B0;
loc_8267A854:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8267a88c
	if (!cr6.eq) goto loc_8267A88C;
loc_8267A85C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + r11.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// b 0x8267a8d8
	goto loc_8267A8D8;
loc_8267A88C:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8267a8d8
	if (cr6.eq) goto loc_8267A8D8;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8267A8C8:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8267a8c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267A8C8;
loc_8267A8D8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x8267a7d4
	if (!cr0.eq) goto loc_8267A7D4;
loc_8267A8E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r26,r29
	ctx.r10.s64 = r29.s64 - r26.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8267a928
	if (!cr6.lt) goto loc_8267A928;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8267a918
	if (cr6.lt) goto loc_8267A918;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8267A918:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8267A928:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r6,r11,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8267a98c
	if (!cr6.eq) goto loc_8267A98C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267A98C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8267A990"))) PPC_WEAK_FUNC(sub_8267A990);
PPC_FUNC_IMPL(__imp__sub_8267A990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267A994"))) PPC_WEAK_FUNC(sub_8267A994);
PPC_FUNC_IMPL(__imp__sub_8267A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A998"))) PPC_WEAK_FUNC(sub_8267A998);
PPC_FUNC_IMPL(__imp__sub_8267A998) {
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
	// lwz r26,4(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8267abe4
	if (cr6.eq) goto loc_8267ABE4;
	// li r27,0
	r27.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x8267aaac
	if (cr6.eq) goto loc_8267AAAC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne cr6,0x8267aa14
	if (!cr6.eq) goto loc_8267AA14;
loc_8267AA10:
	// lis r11,-32768
	r11.s64 = -2147483648;
loc_8267AA14:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// ble cr6,0x8267ab3c
	if (!cr6.gt) goto loc_8267AB3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8267AA34:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8267aabc
	if (!cr6.gt) goto loc_8267AABC;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_8267AA58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bne cr6,0x8267aa88
	if (!cr6.eq) goto loc_8267AA88;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r25,4(r8)
	r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// bne cr6,0x8267aa88
	if (!cr6.eq) goto loc_8267AA88;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r25,8(r8)
	r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r25,r9
	cr6.compare<int32_t>(r25.s32, ctx.r9.s32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x8267aa8c
	if (cr6.eq) goto loc_8267AA8C;
loc_8267AA88:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
loc_8267AA8C:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8267aab4
	if (!cr6.eq) goto loc_8267AAB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8267aa58
	if (cr6.lt) goto loc_8267AA58;
	// b 0x8267aabc
	goto loc_8267AABC;
loc_8267AAAC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8267aa10
	goto loc_8267AA10;
loc_8267AAB4:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8267aae4
	if (!cr6.eq) goto loc_8267AAE4;
loc_8267AABC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// b 0x8267ab30
	goto loc_8267AB30;
loc_8267AAE4:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8267ab30
	if (cr6.eq) goto loc_8267AB30;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8267AB20:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8267ab20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267AB20;
loc_8267AB30:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bne 0x8267aa34
	if (!cr0.eq) goto loc_8267AA34;
loc_8267AB3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r26,r29
	ctx.r10.s64 = r29.s64 - r26.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8267ab80
	if (!cr6.lt) goto loc_8267AB80;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8267ab70
	if (cr6.lt) goto loc_8267AB70;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8267AB70:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8267AB80:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r6,r11,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x8267abe4
	if (!cr6.eq) goto loc_8267ABE4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267ABE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8267ABE8"))) PPC_WEAK_FUNC(sub_8267ABE8);
PPC_FUNC_IMPL(__imp__sub_8267ABE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267ABEC"))) PPC_WEAK_FUNC(sub_8267ABEC);
PPC_FUNC_IMPL(__imp__sub_8267ABEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267ABF0"))) PPC_WEAK_FUNC(sub_8267ABF0);
PPC_FUNC_IMPL(__imp__sub_8267ABF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,18700
	ctx.r7.s64 = r11.s64 + 18700;
	// li r11,0
	r11.s64 = 0;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// addi r6,r10,29112
	ctx.r6.s64 = ctx.r10.s64 + 29112;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r5,r9,29096
	ctx.r5.s64 = ctx.r9.s64 + 29096;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8267AC50"))) PPC_WEAK_FUNC(sub_8267AC50);
PPC_FUNC_IMPL(__imp__sub_8267AC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267AC54"))) PPC_WEAK_FUNC(sub_8267AC54);
PPC_FUNC_IMPL(__imp__sub_8267AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267AC58"))) PPC_WEAK_FUNC(sub_8267AC58);
PPC_FUNC_IMPL(__imp__sub_8267AC58) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x8267ae6c
	if (cr6.eq) goto loc_8267AE6C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq 0x8267ad68
	if (cr0.eq) goto loc_8267AD68;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// bne cr6,0x8267acc8
	if (!cr6.eq) goto loc_8267ACC8;
loc_8267ACC4:
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
loc_8267ACC8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x8267addc
	if (!cr6.lt) goto loc_8267ADDC;
loc_8267ACF0:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8267ad9c
	if (!cr6.lt) goto loc_8267AD9C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,88(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r27,88(r5)
	r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// lwz r5,92(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// lwz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r4,212(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// lwz r27,212(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 212);
	// lwz r5,212(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,212(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// rldicr r27,r27,32,63
	r27.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r5,r27,r5
	ctx.r5.u64 = r27.u64 | ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpld cr6,r5,r4
	cr6.compare<uint64_t>(ctx.r5.u64, ctx.r4.u64, xer);
	// blt cr6,0x8267ad40
	if (cr6.lt) goto loc_8267AD40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8267AD40:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8267ad70
	if (cr6.eq) goto loc_8267AD70;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// b 0x8267ad88
	goto loc_8267AD88;
loc_8267AD68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267acc4
	goto loc_8267ACC4;
loc_8267AD70:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8267AD88:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8267acf0
	if (cr6.lt) goto loc_8267ACF0;
	// b 0x8267addc
	goto loc_8267ADDC;
loc_8267AD9C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x8267addc
	if (!cr6.lt) goto loc_8267ADDC;
	// subf r9,r31,r29
	ctx.r9.s64 = r29.s64 - r31.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8267ADB4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x8267adb4
	if (!cr0.eq) goto loc_8267ADB4;
loc_8267ADDC:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8267ae20
	if (!cr6.lt) goto loc_8267AE20;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// divwu r9,r5,r8
	ctx.r9.u32 = ctx.r5.u32 / ctx.r8.u32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8267ADF8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne 0x8267adf8
	if (!cr0.eq) goto loc_8267ADF8;
loc_8267AE20:
	// li r11,0
	r11.s64 = 0;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r10,r31,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8267ae6c
	if (!cr6.eq) goto loc_8267AE6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// clrlwi r5,r31,2
	ctx.r5.u64 = r31.u32 & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267AE6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8267AE70"))) PPC_WEAK_FUNC(sub_8267AE70);
PPC_FUNC_IMPL(__imp__sub_8267AE70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8267AE74"))) PPC_WEAK_FUNC(sub_8267AE74);
PPC_FUNC_IMPL(__imp__sub_8267AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267AE78"))) PPC_WEAK_FUNC(sub_8267AE78);
PPC_FUNC_IMPL(__imp__sub_8267AE78) {
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
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8267aec0
	if (!cr6.lt) goto loc_8267AEC0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,29124
	ctx.r8.s64 = ctx.r9.s64 + 29124;
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
loc_8267AEC0:
	// addi r28,r27,24
	r28.s64 = r27.s64 + 24;
	// addi r31,r27,36
	r31.s64 = r27.s64 + 36;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a738
	sub_8267A738(ctx, base);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8267a998
	sub_8267A998(ctx, base);
	// lbz r11,8(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267af2c
	if (cr6.eq) goto loc_8267AF2C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r25.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x8267af1c
	if (!cr6.gt) goto loc_8267AF1C;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8267b088
	sub_8267B088(ctx, base);
loc_8267AF1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8267ac58
	sub_8267AC58(ctx, base);
	// b 0x8267afe4
	goto loc_8267AFE4;
loc_8267AF2C:
	// lwz r30,28(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8267af70
	if (!cr6.lt) goto loc_8267AF70;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8267af60
	if (!cr6.lt) goto loc_8267AF60;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8267AF60:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8267AF70:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8267afe0
	if (!cr6.gt) goto loc_8267AFE0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_8267AFA8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x8267afa8
	if (cr6.lt) goto loc_8267AFA8;
loc_8267AFE0:
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
loc_8267AFE4:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8267b048
	if (!cr6.gt) goto loc_8267B048;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_8267AFF8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r30,r28,r11
	r30.u64 = r28.u64 + r11.u64;
	// lwzx r31,r28,r11
	r31.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82639718
	sub_82639718(ctx, base);
	// lbz r9,38(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// rlwinm r8,r9,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8267b03c
	if (cr6.eq) goto loc_8267B03C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8267a4e8
	sub_8267A4E8(ctx, base);
loc_8267B03C:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x8267aff8
	if (!cr0.eq) goto loc_8267AFF8;
loc_8267B048:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8267b07c
	if (!cr6.lt) goto loc_8267B07C;
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
loc_8267B07C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8267B080"))) PPC_WEAK_FUNC(sub_8267B080);
PPC_FUNC_IMPL(__imp__sub_8267B080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8267B084"))) PPC_WEAK_FUNC(sub_8267B084);
PPC_FUNC_IMPL(__imp__sub_8267B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B088"))) PPC_WEAK_FUNC(sub_8267B088);
PPC_FUNC_IMPL(__imp__sub_8267B088) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_8267B0A0:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8267B0E4:
	// lwz r9,88(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,92(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lwz r3,212(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lwz r11,212(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// rldicr r9,r3,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
loc_8267B104:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,212(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// lwz r6,212(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rldicr r3,r11,32,63
	ctx.r3.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r3,r6
	r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// blt cr6,0x8267b140
	if (cr6.lt) goto loc_8267B140;
	// bne cr6,0x8267b138
	if (!cr6.eq) goto loc_8267B138;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8267b140
	if (cr6.lt) goto loc_8267B140;
loc_8267B138:
	// li r11,0
	r11.s64 = 0;
	// b 0x8267b144
	goto loc_8267B144;
loc_8267B140:
	// li r11,1
	r11.s64 = 1;
loc_8267B144:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8267b15c
	if (cr6.eq) goto loc_8267B15C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// b 0x8267b104
	goto loc_8267B104;
loc_8267B15C:
	// rlwinm r11,r5,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
loc_8267B164:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r11,212(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// lwz r6,212(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rldicr r3,r11,32,63
	ctx.r3.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r3,r6
	r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, r11.u64, xer);
	// blt cr6,0x8267b1a0
	if (cr6.lt) goto loc_8267B1A0;
	// bne cr6,0x8267b198
	if (!cr6.eq) goto loc_8267B198;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x8267b1a0
	if (cr6.lt) goto loc_8267B1A0;
loc_8267B198:
	// li r11,0
	r11.s64 = 0;
	// b 0x8267b1a4
	goto loc_8267B1A4;
loc_8267B1A0:
	// li r11,1
	r11.s64 = 1;
loc_8267B1A4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8267b1bc
	if (cr6.eq) goto loc_8267B1BC;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// b 0x8267b164
	goto loc_8267B164;
loc_8267B1BC:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x8267b250
	if (cr6.lt) goto loc_8267B250;
	// beq cr6,0x8267b240
	if (cr6.eq) goto loc_8267B240;
	// rlwinm r11,r5,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r25,12(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r24,0(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r27.u32);
	// stw r26,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r26.u32);
	// stw r25,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r25.u32);
	// lwz r27,8(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// lwz r26,4(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r26,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r26.u32);
	// lwz r26,12(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
loc_8267B240:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x8267b0e4
	if (!cr6.gt) goto loc_8267B0E4;
loc_8267B250:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x8267b264
	if (!cr6.lt) goto loc_8267B264;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8267b088
	sub_8267B088(ctx, base);
loc_8267B264:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x8267b274
	if (!cr6.lt) goto loc_8267B274;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8267b0a0
	goto loc_8267B0A0;
loc_8267B274:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8267B278"))) PPC_WEAK_FUNC(sub_8267B278);
PPC_FUNC_IMPL(__imp__sub_8267B278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8267B27C"))) PPC_WEAK_FUNC(sub_8267B27C);
PPC_FUNC_IMPL(__imp__sub_8267B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B280"))) PPC_WEAK_FUNC(sub_8267B280);
PPC_FUNC_IMPL(__imp__sub_8267B280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_8267B284"))) PPC_WEAK_FUNC(sub_8267B284);
PPC_FUNC_IMPL(__imp__sub_8267B284) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8267b288
	goto loc_8267B288;
loc_8267B288:
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
	// bl 0x82669978
	sub_82669978(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267b2d4
	if (cr6.eq) goto loc_8267B2D4;
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
loc_8267B2D4:
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267B288"))) PPC_WEAK_FUNC(sub_8267B288);
PPC_FUNC_IMPL(__imp__sub_8267B288) {
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
	// bl 0x82669978
	sub_82669978(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267b2d4
	if (cr6.eq) goto loc_8267B2D4;
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
loc_8267B2D4:
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

__attribute__((alias("__imp__sub_8267B2F0"))) PPC_WEAK_FUNC(sub_8267B2F0);
PPC_FUNC_IMPL(__imp__sub_8267B2F0) {
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
	PPCRegister f0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,304
	r31.s64 = ctx.r1.s64 + 304;
	// li r28,2
	r28.s64 = 2;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r27,16
	r27.s64 = 16;
	// li r19,32
	r19.s64 = 32;
	// li r22,-16
	r22.s64 = -16;
	// addi r23,r8,7520
	r23.s64 = ctx.r8.s64 + 7520;
loc_8267B34C:
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r30,r11,80
	r30.s64 = r11.s64 + 80;
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// lvx128 v13,r0,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r24.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v11,r0,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r27
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32 + r27.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,48
	r26.s64 = r11.s64 + 48;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v9,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lvx128 v13,r30,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + r27.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v0,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v12,r30,r19
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r19.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v13,v8
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v4,v12,v8
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v6,r0,r26
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r22
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v3,v5,v11
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v2,v7,v4
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v1,v2,v3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// stvx128 v1,r29,r27
	_mm_store_si128((__m128i*)(base + ((r29.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a380
	sub_8262A380(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v31,r0,r26
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vspltw v30,v31,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xFF));
	// vspltw v28,v31,1
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xAA));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// vspltw v26,v31,2
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x55));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lvx128 v29,r0,r6
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lvx128 v27,r0,r11
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v24,v30,v29
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v29.f32)));
	// lvx128 v25,r0,r10
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v23,v28,v27
	_mm_store_ps(v23.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v27.f32)));
	// vmulfp128 v22,v26,v25
	_mm_store_ps(v22.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v25.f32)));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v24,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262acd8
	sub_8262ACD8(ctx, base);
	// addi r6,r25,240
	ctx.r6.s64 = r25.s64 + 240;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r6,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// addi r31,r31,96
	r31.s64 = r31.s64 + 96;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// bne 0x8267b34c
	if (!cr0.eq) goto loc_8267B34C;
	// lfs f0,16(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r11,r24,16
	r11.s64 = r24.s64 + 16;
	// lfs f13,20(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f12,24(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8267b494
	if (!cr6.lt) goto loc_8267B494;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8267B494:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8267b4a0
	if (!cr6.lt) goto loc_8267B4A0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8267B4A0:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v5,v0,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vxor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_setzero_si128());
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfsx f13,r7,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// addi r11,r8,7632
	r11.s64 = ctx.r8.s64 + 7632;
	// stfsx f12,r5,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v1,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v1
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v1.f32))));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v1,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vcmpeqfp v7,v3,v1
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
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
	// vsel v13,v0,v3,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v31,v13,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v8,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v31.f32)));
	// vpermwi128 v30,v0,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v29,v0,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v28,v5,v30
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v27,v4,v29
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v29.f32)));
	// vsubfp v26,v27,v28
	_mm_store_ps(v26.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32)));
	// stvx128 v26,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82c52160
	sub_82C52160(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82c52690
	sub_82C52690(ctx, base);
	// stfs f1,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r14.u32 + 0, temp.u32);
	// lwz r5,0(r18)
	ctx.r5.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,68(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,432
	ctx.r10.s64 = 432;
	// stvx128 v0,r16,r27
	_mm_store_si128((__m128i*)(base + ((r16.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r8,232(r17)
	ctx.r8.u64 = PPC_LOAD_U8(r17.u32 + 232);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r11,448
	r11.s64 = 448;
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x8267b5fc
	if (cr6.eq) goto loc_8267B5FC;
	// stvx128 v0,r17,r10
	_mm_store_si128((__m128i*)(base + ((r17.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r17,r11
	_mm_store_si128((__m128i*)(base + ((r17.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8267B5FC:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r21,r27
	_mm_store_si128((__m128i*)(base + ((r21.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r7,232(r20)
	ctx.r7.u64 = PPC_LOAD_U8(r20.u32 + 232);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// beq cr6,0x8267b624
	if (cr6.eq) goto loc_8267B624;
	// stvx128 v12,r20,r10
	_mm_store_si128((__m128i*)(base + ((r20.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r20,r11
	_mm_store_si128((__m128i*)(base + ((r20.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8267B624:
	// addi r11,r16,80
	r11.s64 = r16.s64 + 80;
	// vspltw v11,v13,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v10,v13,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v13,v13,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v9,v6,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r11,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r11.u32 + r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r19
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + r19.u32) & ~0xF), VectorMaskL));
	// addi r11,r21,80
	r11.s64 = r21.s64 + 80;
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v11,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v13,r16,r19
	_mm_store_si128((__m128i*)(base + ((r16.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v5,v7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r21,r19
	_mm_store_si128((__m128i*)(base + ((r21.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
}

__attribute__((alias("__imp__sub_8267B680"))) PPC_WEAK_FUNC(sub_8267B680);
PPC_FUNC_IMPL(__imp__sub_8267B680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8267B684"))) PPC_WEAK_FUNC(sub_8267B684);
PPC_FUNC_IMPL(__imp__sub_8267B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B688"))) PPC_WEAK_FUNC(sub_8267B688);
PPC_FUNC_IMPL(__imp__sub_8267B688) {
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
	PPCRegister f0{};
	PPCRegister f31{};
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
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,92(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f12,108(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lvx128 v11,r0,r3
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r29,r6,16
	r29.s64 = ctx.r6.s64 + 16;
	// addi r28,r9,7536
	r28.s64 = ctx.r9.s64 + 7536;
	// addi r11,r29,64
	r11.s64 = r29.s64 + 64;
	// li r26,80
	r26.s64 = 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v0,v8,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r29,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32 + r26.u32) & ~0xF), VectorMaskL));
	// li r24,192
	r24.s64 = 192;
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// vsubfp v6,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lvx128 v7,r31,r24
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r31.u32 + r24.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stvx128 v7,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,40(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// vmulfp128 v13,v6,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v5,v11,v0
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v5,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f10,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 - ctx.f10.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f8,108(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lvx128 v3,r0,r27
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r11,r28,64
	r11.s64 = r28.s64 + 64;
	// lvx128 v2,r30,r24
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r30.u32 + r24.u32) & ~0xF), VectorMaskL));
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r29.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stvx128 v2,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lvx128 v12,r28,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32 + r26.u32) & ~0xF), VectorMaskL));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v1,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v31,v1,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vspltw v0,v31,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xFF));
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// vsubfp v30,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// vmulfp128 v13,v30,v4
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v29,v3,v0
	_mm_store_ps(v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v29,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r7,92
	ctx.r7.s64 = 92;
	// lvx128 v27,r29,r26
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((r29.u32 + r26.u32) & ~0xF), VectorMaskL));
	// li r8,144
	ctx.r8.s64 = 144;
	// li r9,208
	ctx.r9.s64 = 208;
	// li r10,224
	ctx.r10.s64 = 224;
	// lvx128 v28,r29,r6
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((r29.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// lvlx v26,r29,r7
	temp.u32 = r29.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v24,r28,r6
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r28.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v25,v27,v28
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32)));
	// lvx128 v22,r28,r26
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r28.u32 + r26.u32) & ~0xF), VectorMaskL));
	// vspltw v23,v26,0
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0xFF));
	// vsubfp v20,v22,v24
	_mm_store_ps(v20.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(v24.f32)));
	// lvlx v21,r28,r7
	temp.u32 = r28.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v19,v21,0
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v21.u32), 0xFF));
	// lvx128 v18,r29,r8
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v17,r28,r8
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((r28.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r28.u32);
	// lfs f6,16(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// vmulfp128 v16,v18,v23
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v23.f32)));
	// lfs f5,20(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fabs f0,f6
	f0.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// vmulfp128 v14,v17,v19
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(v19.f32)));
	// fabs f13,f5
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lvx128 v62,r31,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v60,r30,r9
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v59,r30,r10
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f4,24(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// vmulfp128 v15,v25,v23
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v23.f32)));
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v61,r31,r10
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v20,v19
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v19.f32)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// addi r26,r1,272
	r26.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// stvx128 v59,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,0
	ctx.r8.s64 = 0;
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,1
	ctx.r10.s64 = 1;
	// stvx128 v60,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,2
	ctx.r9.s64 = 2;
	// stvx128 v16,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fabs f12,f4
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// stvx128 v14,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r26
	_mm_store_si128((__m128i*)(base + ((r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge cr6,0x8267b8a8
	if (!cr6.lt) goto loc_8267B8A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8267B8A8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8267b8b4
	if (!cr6.lt) goto loc_8267B8B4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8267B8B4:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v5,v0,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vxor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_setzero_si128());
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,176
	r28.s64 = ctx.r1.s64 + 176;
	// fneg f12,f0
	ctx.f12.u64 = f0.u64 ^ 0x8000000000000000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfsx f13,r7,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// addi r11,r8,7632
	r11.s64 = ctx.r8.s64 + 7632;
	// stfsx f12,r5,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, temp.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v1,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v1
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v1.f32))));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v1,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vcmpeqfp v7,v3,v1
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
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
	// vsel v13,v0,v3,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v31,v13,0
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v8,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v31.f32)));
	// vpermwi128 v30,v0,99
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v29,v0,135
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v28,v5,v30
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v27,v4,v29
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v29.f32)));
	// vsubfp v26,v27,v28
	_mm_store_ps(v26.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32)));
	// stvx128 v26,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82c52160
	sub_82C52160(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82c52690
	sub_82C52690(ctx, base);
	// stfs f1,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,60(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82c525d8
	sub_82C525D8(ctx, base);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82c525d8
	sub_82C525D8(ctx, base);
	// lfs f11,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,4(r23)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f10,8(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r23.u32 + 8, temp.u32);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x8267ba54
	if (cr6.eq) goto loc_8267BA54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267BA54:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8267ba90
	if (cr6.eq) goto loc_8267BA90;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267BA90:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_8267BA98"))) PPC_WEAK_FUNC(sub_8267BA98);
PPC_FUNC_IMPL(__imp__sub_8267BA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8267BA9C"))) PPC_WEAK_FUNC(sub_8267BA9C);
PPC_FUNC_IMPL(__imp__sub_8267BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BAA0"))) PPC_WEAK_FUNC(sub_8267BAA0);
PPC_FUNC_IMPL(__imp__sub_8267BAA0) {
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

__attribute__((alias("__imp__sub_8267BAB4"))) PPC_WEAK_FUNC(sub_8267BAB4);
PPC_FUNC_IMPL(__imp__sub_8267BAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BAB8"))) PPC_WEAK_FUNC(sub_8267BAB8);
PPC_FUNC_IMPL(__imp__sub_8267BAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-9036
	ctx.r3.s64 = r11.s64 + -9036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BAC4"))) PPC_WEAK_FUNC(sub_8267BAC4);
PPC_FUNC_IMPL(__imp__sub_8267BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BAC8"))) PPC_WEAK_FUNC(sub_8267BAC8);
PPC_FUNC_IMPL(__imp__sub_8267BAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,17532
	ctx.r10.s64 = r11.s64 + 17532;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BAE0"))) PPC_WEAK_FUNC(sub_8267BAE0);
PPC_FUNC_IMPL(__imp__sub_8267BAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,17532
	ctx.r3.s64 = r11.s64 + 17532;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BAEC"))) PPC_WEAK_FUNC(sub_8267BAEC);
PPC_FUNC_IMPL(__imp__sub_8267BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BAF0"))) PPC_WEAK_FUNC(sub_8267BAF0);
PPC_FUNC_IMPL(__imp__sub_8267BAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BAF4"))) PPC_WEAK_FUNC(sub_8267BAF4);
PPC_FUNC_IMPL(__imp__sub_8267BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BAF8"))) PPC_WEAK_FUNC(sub_8267BAF8);
PPC_FUNC_IMPL(__imp__sub_8267BAF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BAFC"))) PPC_WEAK_FUNC(sub_8267BAFC);
PPC_FUNC_IMPL(__imp__sub_8267BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BB00"))) PPC_WEAK_FUNC(sub_8267BB00);
PPC_FUNC_IMPL(__imp__sub_8267BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-8892
	ctx.r3.s64 = r11.s64 + -8892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BB0C"))) PPC_WEAK_FUNC(sub_8267BB0C);
PPC_FUNC_IMPL(__imp__sub_8267BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BB10"))) PPC_WEAK_FUNC(sub_8267BB10);
PPC_FUNC_IMPL(__imp__sub_8267BB10) {
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
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267bb5c
	if (cr6.eq) goto loc_8267BB5C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8267bb60
	if (cr6.eq) goto loc_8267BB60;
loc_8267BB5C:
	// li r11,1
	r11.s64 = 1;
loc_8267BB60:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267BB78"))) PPC_WEAK_FUNC(sub_8267BB78);
PPC_FUNC_IMPL(__imp__sub_8267BB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BB7C"))) PPC_WEAK_FUNC(sub_8267BB7C);
PPC_FUNC_IMPL(__imp__sub_8267BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BB80"))) PPC_WEAK_FUNC(sub_8267BB80);
PPC_FUNC_IMPL(__imp__sub_8267BB80) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267bbd4
	if (cr6.eq) goto loc_8267BBD4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8267bbd8
	if (cr6.eq) goto loc_8267BBD8;
loc_8267BBD4:
	// li r11,1
	r11.s64 = 1;
loc_8267BBD8:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_8267BBF0"))) PPC_WEAK_FUNC(sub_8267BBF0);
PPC_FUNC_IMPL(__imp__sub_8267BBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BBF4"))) PPC_WEAK_FUNC(sub_8267BBF4);
PPC_FUNC_IMPL(__imp__sub_8267BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BBF8"))) PPC_WEAK_FUNC(sub_8267BBF8);
PPC_FUNC_IMPL(__imp__sub_8267BBF8) {
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
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267bc44
	if (cr6.eq) goto loc_8267BC44;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8267bc48
	if (cr6.eq) goto loc_8267BC48;
loc_8267BC44:
	// li r11,1
	r11.s64 = 1;
loc_8267BC48:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267BC60"))) PPC_WEAK_FUNC(sub_8267BC60);
PPC_FUNC_IMPL(__imp__sub_8267BC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BC64"))) PPC_WEAK_FUNC(sub_8267BC64);
PPC_FUNC_IMPL(__imp__sub_8267BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BC68"))) PPC_WEAK_FUNC(sub_8267BC68);
PPC_FUNC_IMPL(__imp__sub_8267BC68) {
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
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267bcb4
	if (cr6.eq) goto loc_8267BCB4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8267bcb8
	if (cr6.eq) goto loc_8267BCB8;
loc_8267BCB4:
	// li r11,1
	r11.s64 = 1;
loc_8267BCB8:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267BCD0"))) PPC_WEAK_FUNC(sub_8267BCD0);
PPC_FUNC_IMPL(__imp__sub_8267BCD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BCD4"))) PPC_WEAK_FUNC(sub_8267BCD4);
PPC_FUNC_IMPL(__imp__sub_8267BCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BCD8"))) PPC_WEAK_FUNC(sub_8267BCD8);
PPC_FUNC_IMPL(__imp__sub_8267BCD8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r11,30496
	ctx.r6.s64 = r11.s64 + 30496;
	// addi r5,r10,30484
	ctx.r5.s64 = ctx.r10.s64 + 30484;
	// addi r4,r9,30464
	ctx.r4.s64 = ctx.r9.s64 + 30464;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r11,r8,30452
	r11.s64 = ctx.r8.s64 + 30452;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,30440
	ctx.r10.s64 = ctx.r7.s64 + 30440;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x8267bd3c
	if (cr6.eq) goto loc_8267BD3C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8267BD3C:
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcf60
	sub_82BFCF60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r10,11916
	ctx.r5.s64 = ctx.r10.s64 + 11916;
	// addi r4,r9,11948
	ctx.r4.s64 = ctx.r9.s64 + 11948;
	// addi r3,r8,11928
	ctx.r3.s64 = ctx.r8.s64 + 11928;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// addi r11,r7,11888
	r11.s64 = ctx.r7.s64 + 11888;
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// addi r10,r6,-13048
	ctx.r10.s64 = ctx.r6.s64 + -13048;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8267BDAC"))) PPC_WEAK_FUNC(sub_8267BDAC);
PPC_FUNC_IMPL(__imp__sub_8267BDAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BDB0"))) PPC_WEAK_FUNC(sub_8267BDB0);
PPC_FUNC_IMPL(__imp__sub_8267BDB0) {
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
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// bge cr6,0x8267bdd8
	if (!cr6.lt) goto loc_8267BDD8;
	// rldicr r11,r11,32,31
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8267bde0
	goto loc_8267BDE0;
loc_8267BDD8:
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_8267BDE0:
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfcdc0
	sub_82BFCDC0(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x8267be04
	if (!cr6.eq) goto loc_8267BE04;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8267BE04:
	// addi r29,r3,-1
	r29.s64 = ctx.r3.s64 + -1;
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// ble cr6,0x8267be38
	if (!cr6.gt) goto loc_8267BE38;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfccc8
	sub_82BFCCC8(ctx, base);
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(r29.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8267BE38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfd138
	sub_82BFD138(ctx, base);
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(r29.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8267BE4C"))) PPC_WEAK_FUNC(sub_8267BE4C);
PPC_FUNC_IMPL(__imp__sub_8267BE4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267BE50"))) PPC_WEAK_FUNC(sub_8267BE50);
PPC_FUNC_IMPL(__imp__sub_8267BE50) {
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
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// bge cr6,0x8267be78
	if (!cr6.lt) goto loc_8267BE78;
	// rldicr r11,r11,32,31
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8267be80
	goto loc_8267BE80;
loc_8267BE78:
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_8267BE80:
	// addi r30,r3,48
	r30.s64 = ctx.r3.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bfcdc0
	sub_82BFCDC0(ctx, base);
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfccc8
	sub_82BFCCC8(ctx, base);
	// rotlwi r3,r29,0
	ctx.r3.u64 = __builtin_rotateleft32(r29.u32, 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8267BEBC"))) PPC_WEAK_FUNC(sub_8267BEBC);
PPC_FUNC_IMPL(__imp__sub_8267BEBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267BEC0"))) PPC_WEAK_FUNC(sub_8267BEC0);
PPC_FUNC_IMPL(__imp__sub_8267BEC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82c56308
	sub_82C56308(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r5,r10,30484
	ctx.r5.s64 = ctx.r10.s64 + 30484;
	// addi r6,r11,30496
	ctx.r6.s64 = r11.s64 + 30496;
	// addi r4,r9,30464
	ctx.r4.s64 = ctx.r9.s64 + 30464;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r3,r8,30452
	ctx.r3.s64 = ctx.r8.s64 + 30452;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r10,r7,30440
	ctx.r10.s64 = ctx.r7.s64 + 30440;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x82bfd198
	sub_82BFD198(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// beq cr6,0x8267bf60
	if (cr6.eq) goto loc_8267BF60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8267BF60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8267BF68"))) PPC_WEAK_FUNC(sub_8267BF68);
PPC_FUNC_IMPL(__imp__sub_8267BF68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267BF6C"))) PPC_WEAK_FUNC(sub_8267BF6C);
PPC_FUNC_IMPL(__imp__sub_8267BF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BF70"))) PPC_WEAK_FUNC(sub_8267BF70);
PPC_FUNC_IMPL(__imp__sub_8267BF70) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8267bfdc
	if (cr6.eq) goto loc_8267BFDC;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8267bfdc
	if (cr6.eq) goto loc_8267BFDC;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// bge cr6,0x8267bfb0
	if (!cr6.lt) goto loc_8267BFB0;
	// rldicr r11,r11,32,31
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF00000000;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8267bfb8
	goto loc_8267BFB8;
loc_8267BFB0:
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_8267BFB8:
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267c0e0
	sub_8267C0E0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267bfe0
	if (cr6.eq) goto loc_8267BFE0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8267bfe4
	goto loc_8267BFE4;
loc_8267BFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8267BFE0:
	// li r11,1
	r11.s64 = 1;
loc_8267BFE4:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267BFF8"))) PPC_WEAK_FUNC(sub_8267BFF8);
PPC_FUNC_IMPL(__imp__sub_8267BFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BFFC"))) PPC_WEAK_FUNC(sub_8267BFFC);
PPC_FUNC_IMPL(__imp__sub_8267BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C000"))) PPC_WEAK_FUNC(sub_8267C000);
PPC_FUNC_IMPL(__imp__sub_8267C000) {
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
	// lwz r11,52(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267c064
	if (cr6.eq) goto loc_8267C064;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8267c064
	if (!cr6.eq) goto loc_8267C064;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8267C064:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8267c080
	if (!cr6.eq) goto loc_8267C080;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// b 0x8267c084
	goto loc_8267C084;
loc_8267C080:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8267C084:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8267c0a0
	if (!cr6.eq) goto loc_8267C0A0;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// b 0x8267c0a4
	goto loc_8267C0A4;
loc_8267C0A0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8267C0A4:
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8267bf70
	sub_8267BF70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267C0B8"))) PPC_WEAK_FUNC(sub_8267C0B8);
PPC_FUNC_IMPL(__imp__sub_8267C0B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267C0BC"))) PPC_WEAK_FUNC(sub_8267C0BC);
PPC_FUNC_IMPL(__imp__sub_8267C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C0C0"))) PPC_WEAK_FUNC(sub_8267C0C0);
PPC_FUNC_IMPL(__imp__sub_8267C0C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_8267C0C4"))) PPC_WEAK_FUNC(sub_8267C0C4);
PPC_FUNC_IMPL(__imp__sub_8267C0C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267c140
	sub_8267C140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C0C8"))) PPC_WEAK_FUNC(sub_8267C0C8);
PPC_FUNC_IMPL(__imp__sub_8267C0C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_8267C0CC"))) PPC_WEAK_FUNC(sub_8267C0CC);
PPC_FUNC_IMPL(__imp__sub_8267C0CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267c140
	sub_8267C140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C0D0"))) PPC_WEAK_FUNC(sub_8267C0D0);
PPC_FUNC_IMPL(__imp__sub_8267C0D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_8267C0D4"))) PPC_WEAK_FUNC(sub_8267C0D4);
PPC_FUNC_IMPL(__imp__sub_8267C0D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267c140
	sub_8267C140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C0D8"))) PPC_WEAK_FUNC(sub_8267C0D8);
PPC_FUNC_IMPL(__imp__sub_8267C0D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_8267C0DC"))) PPC_WEAK_FUNC(sub_8267C0DC);
PPC_FUNC_IMPL(__imp__sub_8267C0DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8267c140
	sub_8267C140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C0E0"))) PPC_WEAK_FUNC(sub_8267C0E0);
PPC_FUNC_IMPL(__imp__sub_8267C0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bfcd70
	sub_82BFCD70(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r10,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 31;
	// subfc r8,r3,r11
	xer.ca = r11.u32 >= ctx.r3.u32;
	ctx.r8.s64 = r11.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// adde r7,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r7.u8);
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

__attribute__((alias("__imp__sub_8267C138"))) PPC_WEAK_FUNC(sub_8267C138);
PPC_FUNC_IMPL(__imp__sub_8267C138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C13C"))) PPC_WEAK_FUNC(sub_8267C13C);
PPC_FUNC_IMPL(__imp__sub_8267C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C140"))) PPC_WEAK_FUNC(sub_8267C140);
PPC_FUNC_IMPL(__imp__sub_8267C140) {
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
	// bl 0x8267bcd8
	sub_8267BCD8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267c18c
	if (cr6.eq) goto loc_8267C18C;
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
loc_8267C18C:
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

__attribute__((alias("__imp__sub_8267C1A4"))) PPC_WEAK_FUNC(sub_8267C1A4);
PPC_FUNC_IMPL(__imp__sub_8267C1A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C1A8"))) PPC_WEAK_FUNC(sub_8267C1A8);
PPC_FUNC_IMPL(__imp__sub_8267C1A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8264ce68
	sub_8264CE68(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | r30.u64;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8267C1EC"))) PPC_WEAK_FUNC(sub_8267C1EC);
PPC_FUNC_IMPL(__imp__sub_8267C1EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C1F0"))) PPC_WEAK_FUNC(sub_8267C1F0);
PPC_FUNC_IMPL(__imp__sub_8267C1F0) {
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
	// add r29,r4,r5
	r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// bge cr6,0x8267c260
	if (!cr6.lt) goto loc_8267C260;
loc_8267C210:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8267c230
	if (cr6.lt) goto loc_8267C230;
	// bne cr6,0x8267c260
	if (!cr6.eq) goto loc_8267C260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8264d010
	sub_8264D010(ctx, base);
	// b 0x8267c254
	goto loc_8267C254;
loc_8267C230:
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8264ce68
	sub_8264CE68(ctx, base);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// or r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 | r27.u64;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
loc_8267C254:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8267c210
	if (cr6.lt) goto loc_8267C210;
loc_8267C260:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267C264"))) PPC_WEAK_FUNC(sub_8267C264);
PPC_FUNC_IMPL(__imp__sub_8267C264) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8267C268"))) PPC_WEAK_FUNC(sub_8267C268);
PPC_FUNC_IMPL(__imp__sub_8267C268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82641a70
	sub_82641A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267C274"))) PPC_WEAK_FUNC(sub_8267C274);
PPC_FUNC_IMPL(__imp__sub_8267C274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C278"))) PPC_WEAK_FUNC(sub_8267C278);
PPC_FUNC_IMPL(__imp__sub_8267C278) {
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

__attribute__((alias("__imp__sub_8267C28C"))) PPC_WEAK_FUNC(sub_8267C28C);
PPC_FUNC_IMPL(__imp__sub_8267C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C290"))) PPC_WEAK_FUNC(sub_8267C290);
PPC_FUNC_IMPL(__imp__sub_8267C290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82641a70
	sub_82641A70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8267C2B8"))) PPC_WEAK_FUNC(sub_8267C2B8);
PPC_FUNC_IMPL(__imp__sub_8267C2B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C2BC"))) PPC_WEAK_FUNC(sub_8267C2BC);
PPC_FUNC_IMPL(__imp__sub_8267C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C2C0"))) PPC_WEAK_FUNC(sub_8267C2C0);
PPC_FUNC_IMPL(__imp__sub_8267C2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-8844
	ctx.r3.s64 = r11.s64 + -8844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C2CC"))) PPC_WEAK_FUNC(sub_8267C2CC);
PPC_FUNC_IMPL(__imp__sub_8267C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C2D0"))) PPC_WEAK_FUNC(sub_8267C2D0);
PPC_FUNC_IMPL(__imp__sub_8267C2D0) {
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

__attribute__((alias("__imp__sub_8267C2E4"))) PPC_WEAK_FUNC(sub_8267C2E4);
PPC_FUNC_IMPL(__imp__sub_8267C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C2E8"))) PPC_WEAK_FUNC(sub_8267C2E8);
PPC_FUNC_IMPL(__imp__sub_8267C2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-8780
	ctx.r3.s64 = r11.s64 + -8780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C2F4"))) PPC_WEAK_FUNC(sub_8267C2F4);
PPC_FUNC_IMPL(__imp__sub_8267C2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C2F8"))) PPC_WEAK_FUNC(sub_8267C2F8);
PPC_FUNC_IMPL(__imp__sub_8267C2F8) {
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
	// beq cr6,0x8267c324
	if (cr6.eq) goto loc_8267C324;
	// bl 0x8263c1a0
	sub_8263C1A0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,13952
	ctx.r10.s64 = r11.s64 + 13952;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8267C324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267C334"))) PPC_WEAK_FUNC(sub_8267C334);
PPC_FUNC_IMPL(__imp__sub_8267C334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C338"))) PPC_WEAK_FUNC(sub_8267C338);
PPC_FUNC_IMPL(__imp__sub_8267C338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263c1a0
	sub_8263C1A0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r11,13952
	ctx.r3.s64 = r11.s64 + 13952;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8267C364"))) PPC_WEAK_FUNC(sub_8267C364);
PPC_FUNC_IMPL(__imp__sub_8267C364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C368"))) PPC_WEAK_FUNC(sub_8267C368);
PPC_FUNC_IMPL(__imp__sub_8267C368) {
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

__attribute__((alias("__imp__sub_8267C378"))) PPC_WEAK_FUNC(sub_8267C378);
PPC_FUNC_IMPL(__imp__sub_8267C378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C384"))) PPC_WEAK_FUNC(sub_8267C384);
PPC_FUNC_IMPL(__imp__sub_8267C384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C388"))) PPC_WEAK_FUNC(sub_8267C388);
PPC_FUNC_IMPL(__imp__sub_8267C388) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-29916
	ctx.r4.s64 = ctx.r10.s64 + -29916;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_8267C3DC"))) PPC_WEAK_FUNC(sub_8267C3DC);
PPC_FUNC_IMPL(__imp__sub_8267C3DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C3E0"))) PPC_WEAK_FUNC(sub_8267C3E0);
PPC_FUNC_IMPL(__imp__sub_8267C3E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C3E8"))) PPC_WEAK_FUNC(sub_8267C3E8);
PPC_FUNC_IMPL(__imp__sub_8267C3E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C3F0"))) PPC_WEAK_FUNC(sub_8267C3F0);
PPC_FUNC_IMPL(__imp__sub_8267C3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-29884
	ctx.r9.s64 = r11.s64 + -29884;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8267C40C"))) PPC_WEAK_FUNC(sub_8267C40C);
PPC_FUNC_IMPL(__imp__sub_8267C40C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C410"))) PPC_WEAK_FUNC(sub_8267C410);
PPC_FUNC_IMPL(__imp__sub_8267C410) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1000
	r11.s64 = 1000;
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8267C498"))) PPC_WEAK_FUNC(sub_8267C498);
PPC_FUNC_IMPL(__imp__sub_8267C498) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C49C"))) PPC_WEAK_FUNC(sub_8267C49C);
PPC_FUNC_IMPL(__imp__sub_8267C49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C4A0"))) PPC_WEAK_FUNC(sub_8267C4A0);
PPC_FUNC_IMPL(__imp__sub_8267C4A0) {
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
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,24(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8267C4F4"))) PPC_WEAK_FUNC(sub_8267C4F4);
PPC_FUNC_IMPL(__imp__sub_8267C4F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C4F8"))) PPC_WEAK_FUNC(sub_8267C4F8);
PPC_FUNC_IMPL(__imp__sub_8267C4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-8716
	ctx.r3.s64 = r11.s64 + -8716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C504"))) PPC_WEAK_FUNC(sub_8267C504);
PPC_FUNC_IMPL(__imp__sub_8267C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C508"))) PPC_WEAK_FUNC(sub_8267C508);
PPC_FUNC_IMPL(__imp__sub_8267C508) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82cadd98
	sub_82CADD98(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// li r11,1
	r11.s64 = 1;
	// addi r6,r7,-29804
	ctx.r6.s64 = ctx.r7.s64 + -29804;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,6196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6196);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,-13388(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13388);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267C570"))) PPC_WEAK_FUNC(sub_8267C570);
PPC_FUNC_IMPL(__imp__sub_8267C570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C574"))) PPC_WEAK_FUNC(sub_8267C574);
PPC_FUNC_IMPL(__imp__sub_8267C574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C578"))) PPC_WEAK_FUNC(sub_8267C578);
PPC_FUNC_IMPL(__imp__sub_8267C578) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82628128
	sub_82628128(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r30,240
	ctx.r4.s64 = r30.s64 + 240;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82628128
	sub_82628128(ctx, base);
	// lvx128 v10,r0,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r29
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vsubfp v8,v9,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,7632
	ctx.r9.s64 = r11.s64 + 7632;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v6.f32))));
	// vmulfp128 v9,v6,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v11,v6
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)));
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
	// vmulfp128 v5,v6,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v5,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267C61C"))) PPC_WEAK_FUNC(sub_8267C61C);
PPC_FUNC_IMPL(__imp__sub_8267C61C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267C620"))) PPC_WEAK_FUNC(sub_8267C620);
PPC_FUNC_IMPL(__imp__sub_8267C620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// stvx128 v0,r30,r10
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r30,r9
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,240
	ctx.r4.s64 = r31.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,7632
	ctx.r4.s64 = ctx.r6.s64 + 7632;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v10,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v6.f32))));
	// vmulfp128 v9,v6,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v11,v6
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)));
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
	// vmulfp128 v5,v6,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v5,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8267C6E0"))) PPC_WEAK_FUNC(sub_8267C6E0);
PPC_FUNC_IMPL(__imp__sub_8267C6E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267C6E4"))) PPC_WEAK_FUNC(sub_8267C6E4);
PPC_FUNC_IMPL(__imp__sub_8267C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C6E8"))) PPC_WEAK_FUNC(sub_8267C6E8);
PPC_FUNC_IMPL(__imp__sub_8267C6E8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8267c718
	if (cr6.eq) goto loc_8267C718;
loc_8267C710:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267c79c
	goto loc_8267C79C;
loc_8267C718:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8267c710
	if (!cr6.eq) goto loc_8267C710;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,96
	ctx.r9.s64 = 96;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8267c508
	sub_8267C508(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r11,64
	r11.s64 = 64;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f12,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lbz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// stb r7,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r7.u8);
	// lbz r6,93(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 93);
	// stb r6,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r6.u8);
loc_8267C79C:
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

__attribute__((alias("__imp__sub_8267C7B0"))) PPC_WEAK_FUNC(sub_8267C7B0);
PPC_FUNC_IMPL(__imp__sub_8267C7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C7B4"))) PPC_WEAK_FUNC(sub_8267C7B4);
PPC_FUNC_IMPL(__imp__sub_8267C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C7B8"))) PPC_WEAK_FUNC(sub_8267C7B8);
PPC_FUNC_IMPL(__imp__sub_8267C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	PPCRegister f31{};
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
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,24(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r26,240
	ctx.r4.s64 = r26.s64 + 240;
	// lwz r25,28(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r25,240
	ctx.r4.s64 = r25.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826280e0
	sub_826280E0(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,7632
	ctx.r7.s64 = ctx.r9.s64 + 7632;
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// vsubfp v8,v5,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v8,v8
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v10,v3,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v6,v12,v3
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
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
	// vsel v13,v0,v9,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vmulfp128 v2,v3,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v2,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,-31496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31496);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8267c9f8
	if (cr6.lt) goto loc_8267C9F8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lbz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v127,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// bne cr6,0x8267c8ac
	if (!cr6.eq) goto loc_8267C8AC;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8267c9f8
	if (cr6.lt) goto loc_8267C9F8;
loc_8267C8AC:
	// lbz r11,93(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 93);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267c8c4
	if (!cr6.eq) goto loc_8267C8C4;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8267c9f8
	if (cr6.gt) goto loc_8267C9F8;
loc_8267C8C4:
	// li r8,96
	ctx.r8.s64 = 96;
	// addi r30,r26,224
	r30.s64 = r26.s64 + 224;
	// addi r29,r25,224
	r29.s64 = r25.s64 + 224;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// addi r10,r29,224
	ctx.r10.s64 = r29.s64 + 224;
	// li r9,208
	ctx.r9.s64 = 208;
	// lvx128 v0,r30,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r29,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v4,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v11,v5,v13
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v10,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v7,v10,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// lvx128 v6,r30,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v9,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// lvx128 v4,r29,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v9,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// vpermwi128 v2,v12,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vpermwi128 v1,v12,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v31,v11,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v30,v11,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmulfp128 v29,v8,v2
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v28,v7,v1
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v27,v5,v31
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v31.f32)));
	// vmulfp128 v26,v3,v30
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v30.f32)));
	// vsubfp v25,v28,v29
	_mm_store_ps(v25.f32, _mm_sub_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vsubfp v24,v26,v27
	_mm_store_ps(v24.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// vaddfp v23,v25,v6
	_mm_store_ps(v23.f32, _mm_add_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v6.f32)));
	// vaddfp v22,v24,v4
	_mm_store_ps(v22.f32, _mm_add_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v4.f32)));
	// vsubfp v21,v22,v23
	_mm_store_ps(v21.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)));
	// vmsum3fp128 v20,v21,v127
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v21.f32), _mm_load_ps(v127.f32), 0xEF));
	// stvewx v20,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v20.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fmadds f0,f9,f11,f8
	f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f7,f0
	ctx.f7.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v19,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v19.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v18,v19,0
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v19.u32), 0xFF));
	// vmulfp128 v17,v127,v18
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v17.f32, _mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(v18.f32)));
	// stvx128 v17,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r4,224(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 224);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lvlx v16,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v15,v16,0
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v16.u32), 0xFF));
	// vmulfp128 v14,v127,v15
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(v15.f32)));
	// stvx128 v14,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,8(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r9,224(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 224);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267C9F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_8267CA08"))) PPC_WEAK_FUNC(sub_8267CA08);
PPC_FUNC_IMPL(__imp__sub_8267CA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267CA0C"))) PPC_WEAK_FUNC(sub_8267CA0C);
PPC_FUNC_IMPL(__imp__sub_8267CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CA10"))) PPC_WEAK_FUNC(sub_8267CA10);
PPC_FUNC_IMPL(__imp__sub_8267CA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,-3588
	ctx.r3.s64 = r11.s64 + -3588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CA1C"))) PPC_WEAK_FUNC(sub_8267CA1C);
PPC_FUNC_IMPL(__imp__sub_8267CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CA20"))) PPC_WEAK_FUNC(sub_8267CA20);
PPC_FUNC_IMPL(__imp__sub_8267CA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r10,-29772
	ctx.r10.s64 = ctx.r10.s64 + -29772;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8267CA3C"))) PPC_WEAK_FUNC(sub_8267CA3C);
PPC_FUNC_IMPL(__imp__sub_8267CA3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eed00
	sub_828EED00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267CA40"))) PPC_WEAK_FUNC(sub_8267CA40);
PPC_FUNC_IMPL(__imp__sub_8267CA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CA44"))) PPC_WEAK_FUNC(sub_8267CA44);
PPC_FUNC_IMPL(__imp__sub_8267CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CA48"))) PPC_WEAK_FUNC(sub_8267CA48);
PPC_FUNC_IMPL(__imp__sub_8267CA48) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r4
	r11.u32 = r11.u32 / ctx.r4.u32;
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// rlwinm r30,r10,29,3,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828eed60
	sub_828EED60(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x8267cadc
	if (cr0.eq) goto loc_8267CADC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// clrlwi. r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267cadc
	if (cr0.eq) goto loc_8267CADC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// bge cr6,0x8267cadc
	if (!cr6.lt) goto loc_8267CADC;
	// subfic r9,r11,8
	xer.ca = r11.u32 <= 8;
	ctx.r9.s64 = 8 - r11.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8267CAC0:
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// bdnz 0x8267cac0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267CAC0;
loc_8267CADC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_8267CAFC"))) PPC_WEAK_FUNC(sub_8267CAFC);
PPC_FUNC_IMPL(__imp__sub_8267CAFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CB00"))) PPC_WEAK_FUNC(sub_8267CB00);
PPC_FUNC_IMPL(__imp__sub_8267CB00) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267cb30
	if (!cr6.eq) goto loc_8267CB30;
	// bl 0x8267ca48
	sub_8267CA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8267cc7c
	if (cr0.eq) goto loc_8267CC7C;
loc_8267CB30:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x8267cc74
	if (!cr6.eq) goto loc_8267CC74;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8267cc74
	if (cr6.eq) goto loc_8267CC74;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8267cc74
	if (cr6.eq) goto loc_8267CC74;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bgt cr6,0x8267cc74
	if (cr6.gt) goto loc_8267CC74;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8267cbf4
	if (cr6.eq) goto loc_8267CBF4;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// divwu r11,r11,r3
	r11.u32 = r11.u32 / ctx.r3.u32;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r11,29
	ctx.r7.u64 = r11.u32 & 0x7;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// slw r11,r6,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// andc r11,r7,r11
	r11.u64 = ctx.r7.u64 & ~r11.u64;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x8267cbe8
	if (cr6.eq) goto loc_8267CBE8;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8267cbe8
	if (!cr6.lt) goto loc_8267CBE8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r8,29
	ctx.r9.u64 = ctx.r8.u32 & 0x7;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// and. r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267cbe8
	if (cr0.eq) goto loc_8267CBE8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// b 0x8267cbec
	goto loc_8267CBEC;
loc_8267CBE8:
	// li r11,0
	r11.s64 = 0;
loc_8267CBEC:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8267cc7c
	goto loc_8267CC7C;
loc_8267CBF4:
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// rlwinm. r4,r10,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8267cc78
	if (cr0.eq) goto loc_8267CC78;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8267CC0C:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mr. r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8267cc34
	if (cr0.eq) goto loc_8267CC34;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267CC1C:
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// and. r30,r9,r5
	r30.u64 = ctx.r9.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8267cc48
	if (!cr0.eq) goto loc_8267CC48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x8267cc1c
	if (cr6.lt) goto loc_8267CC1C;
loc_8267CC34:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x8267cc0c
	if (cr6.lt) goto loc_8267CC0C;
	// b 0x8267cc78
	goto loc_8267CC78;
loc_8267CC48:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// andc r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r3.s32);
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8267cc7c
	goto loc_8267CC7C;
loc_8267CC74:
	// mullw r3,r30,r28
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(r28.s32);
loc_8267CC78:
	// bl 0x828eed60
	sub_828EED60(ctx, base);
loc_8267CC7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267CC80"))) PPC_WEAK_FUNC(sub_8267CC80);
PPC_FUNC_IMPL(__imp__sub_8267CC80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267CC84"))) PPC_WEAK_FUNC(sub_8267CC84);
PPC_FUNC_IMPL(__imp__sub_8267CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CC88"))) PPC_WEAK_FUNC(sub_8267CC88);
PPC_FUNC_IMPL(__imp__sub_8267CC88) {
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
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bgt cr6,0x8267cd70
	if (cr6.gt) goto loc_8267CD70;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x8267cd70
	if (cr6.lt) goto loc_8267CD70;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8267cd70
	if (cr6.gt) goto loc_8267CD70;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// divwu r29,r10,r11
	r29.u32 = ctx.r10.u32 / r11.u32;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8267ccf4
	if (!cr6.eq) goto loc_8267CCF4;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
loc_8267CCF4:
	// subf r11,r31,r7
	r11.s64 = ctx.r7.s64 - r31.s64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x8267cd90
	if (cr6.eq) goto loc_8267CD90;
loc_8267CD04:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// ble cr6,0x8267cd3c
	if (!cr6.gt) goto loc_8267CD3C;
	// clrlwi. r11,r29,29
	r11.u64 = r29.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267cd3c
	if (!cr0.eq) goto loc_8267CD3C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r29,29,3,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r31,29
	ctx.r9.u64 = r31.u32 & 0x7;
	// rlwinm r5,r31,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,255
	ctx.r4.s64 = 255;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// subf r28,r9,r31
	r28.s64 = r31.s64 - ctx.r9.s64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// subf r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
	// add r29,r28,r29
	r29.u64 = r28.u64 + r29.u64;
loc_8267CD3C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r29,29,3,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r29,29
	ctx.r9.u64 = r29.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bne 0x8267cd04
	if (!cr0.eq) goto loc_8267CD04;
	// b 0x8267cd90
	goto loc_8267CD90;
loc_8267CD70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8267cd90
	if (cr6.eq) goto loc_8267CD90;
loc_8267CD78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828eed00
	sub_828EED00(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
	// bne 0x8267cd78
	if (!cr0.eq) goto loc_8267CD78;
loc_8267CD90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267CD94"))) PPC_WEAK_FUNC(sub_8267CD94);
PPC_FUNC_IMPL(__imp__sub_8267CD94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267CD98"))) PPC_WEAK_FUNC(sub_8267CD98);
PPC_FUNC_IMPL(__imp__sub_8267CD98) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_8267CD9C"))) PPC_WEAK_FUNC(sub_8267CD9C);
PPC_FUNC_IMPL(__imp__sub_8267CD9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CDA0"))) PPC_WEAK_FUNC(sub_8267CDA0);
PPC_FUNC_IMPL(__imp__sub_8267CDA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r30,-31933
	r30.s64 = -2092761088;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r31,r30,11857
	r31.s64 = r30.s64 + 11857;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-8201
	ctx.r3.s64 = r31.s64 + -8201;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,-8200(r31)
	PPC_STORE_U16(r31.u32 + -8200, r11.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,10
	ctx.r8.s64 = 10;
	// sth r10,-8198(r31)
	PPC_STORE_U16(r31.u32 + -8198, ctx.r10.u16);
	// lwz r11,11848(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11848);
	// stb r9,-8196(r31)
	PPC_STORE_U8(r31.u32 + -8196, ctx.r9.u8);
	// addi r9,r31,-8201
	ctx.r9.s64 = r31.s64 + -8201;
	// stb r10,11857(r30)
	PPC_STORE_U8(r30.u32 + 11857, ctx.r10.u8);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r8,-5(r31)
	PPC_STORE_U32(r31.u32 + -5, ctx.r8.u32);
	// addi r4,r9,40
	ctx.r4.s64 = ctx.r9.s64 + 40;
	// addi r3,r10,11884
	ctx.r3.s64 = ctx.r10.s64 + 11884;
	// stb r11,-8201(r31)
	PPC_STORE_U8(r31.u32 + -8201, r11.u8);
	// bl 0x82680978
	sub_82680978(ctx, base);
	// lwz r11,-5(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -5);
	// addi r10,r31,-8201
	ctx.r10.s64 = r31.s64 + -8201;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfic r9,r11,2048
	xer.ca = r11.u32 <= 2048;
	ctx.r9.s64 = 2048 - r11.s64;
	// stw r11,-5(r31)
	PPC_STORE_U32(r31.u32 + -5, r11.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
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

__attribute__((alias("__imp__sub_8267CE4C"))) PPC_WEAK_FUNC(sub_8267CE4C);
PPC_FUNC_IMPL(__imp__sub_8267CE4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CE50"))) PPC_WEAK_FUNC(sub_8267CE50);
PPC_FUNC_IMPL(__imp__sub_8267CE50) {
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
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8267cea8
	if (!cr0.eq) goto loc_8267CEA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,-4673
	r30.s64 = -4673;
	// bl 0x82bb9358
	sub_82BB9358(ctx, base);
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82625338
	sub_82625338(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_8267CEA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8267CEB0"))) PPC_WEAK_FUNC(sub_8267CEB0);
PPC_FUNC_IMPL(__imp__sub_8267CEB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8267CEB4"))) PPC_WEAK_FUNC(sub_8267CEB4);
PPC_FUNC_IMPL(__imp__sub_8267CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CEB8"))) PPC_WEAK_FUNC(sub_8267CEB8);
PPC_FUNC_IMPL(__imp__sub_8267CEB8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8267CEE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82605130
	sub_82605130(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8267cf00
	if (!cr6.eq) goto loc_8267CF00;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8267cf0c
	goto loc_8267CF0C;
loc_8267CF00:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8267cf0c
	if (!cr6.eq) goto loc_8267CF0C;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_8267CF0C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(r29.s32, 20, xer);
	// blt cr6,0x8267cee0
	if (cr6.lt) goto loc_8267CEE0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8267CF1C"))) PPC_WEAK_FUNC(sub_8267CF1C);
PPC_FUNC_IMPL(__imp__sub_8267CF1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8267CF20"))) PPC_WEAK_FUNC(sub_8267CF20);
PPC_FUNC_IMPL(__imp__sub_8267CF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r28,r11,11876
	r28.s64 = r11.s64 + 11876;
	// lbz r11,4(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8267cf48
	if (!cr0.eq) goto loc_8267CF48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267d04c
	goto loc_8267D04C;
loc_8267CF48:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r11,-29684
	ctx.r4.s64 = r11.s64 + -29684;
	// bl 0x82d29068
	sub_82D29068(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82605e48
	sub_82605E48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// bl 0x8267ceb8
	sub_8267CEB8(ctx, base);
	// bl 0x82bb9588
	sub_82BB9588(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82bb9388
	sub_82BB9388(ctx, base);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8314d7cc
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8267CFA8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8267cfa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8267CFA8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8314ce2c
	__imp__XGetVideoMode(ctx, base);
	// bl 0x8314db7c
	__imp__XGetVideoCapabilities(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82bb9360
	sub_82BB9360(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82625e50
	sub_82625E50(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x826254c0
	sub_826254C0(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82605118
	sub_82605118(ctx, base);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x826810f0
	sub_826810F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8267d048
	if (!cr0.eq) goto loc_8267D048;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29724
	ctx.r4.s64 = r11.s64 + -29724;
	// addi r3,r10,-29760
	ctx.r3.s64 = ctx.r10.s64 + -29760;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267D048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D04C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8267D050"))) PPC_WEAK_FUNC(sub_8267D050);
PPC_FUNC_IMPL(__imp__sub_8267D050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8267D054"))) PPC_WEAK_FUNC(sub_8267D054);
PPC_FUNC_IMPL(__imp__sub_8267D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D058"))) PPC_WEAK_FUNC(sub_8267D058);
PPC_FUNC_IMPL(__imp__sub_8267D058) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne cr6,0x8267d080
	if (!cr6.eq) goto loc_8267D080;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D080:
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267D0A0"))) PPC_WEAK_FUNC(sub_8267D0A0);
PPC_FUNC_IMPL(__imp__sub_8267D0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D0A4"))) PPC_WEAK_FUNC(sub_8267D0A4);
PPC_FUNC_IMPL(__imp__sub_8267D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D0A8"))) PPC_WEAK_FUNC(sub_8267D0A8);
PPC_FUNC_IMPL(__imp__sub_8267D0A8) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bne cr6,0x8267d0d0
	if (!cr6.eq) goto loc_8267D0D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D0D0:
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267D0F0"))) PPC_WEAK_FUNC(sub_8267D0F0);
PPC_FUNC_IMPL(__imp__sub_8267D0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D0F4"))) PPC_WEAK_FUNC(sub_8267D0F4);
PPC_FUNC_IMPL(__imp__sub_8267D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D0F8"))) PPC_WEAK_FUNC(sub_8267D0F8);
PPC_FUNC_IMPL(__imp__sub_8267D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d138
	if (!cr6.eq) goto loc_8267D138;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29656
	ctx.r3.s64 = ctx.r10.s64 + -29656;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d264
	goto loc_8267D264;
loc_8267D138:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8267d16c
	if (cr0.eq) goto loc_8267D16C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4168
	r11.s64 = r11.s64 + -4168;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// b 0x8267d170
	goto loc_8267D170;
loc_8267D16C:
	// li r11,0
	r11.s64 = 0;
loc_8267D170:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r31,r10,-8664
	r31.s64 = ctx.r10.s64 + -8664;
	// addi r3,r9,11884
	ctx.r3.s64 = ctx.r9.s64 + 11884;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,12288
	ctx.r5.s64 = 12288;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82680eb0
	sub_82680EB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d1c0
	if (!cr0.eq) goto loc_8267D1C0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d1b8
	if (cr6.eq) goto loc_8267D1B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267D1B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267d264
	goto loc_8267D264;
loc_8267D1C0:
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// addi r11,r31,12304
	r11.s64 = r31.s64 + 12304;
	// stw r3,20524(r31)
	PPC_STORE_U32(r31.u32 + 20524, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// stb r11,20522(r31)
	PPC_STORE_U8(r31.u32 + 20522, r11.u8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-12512
	ctx.r5.s64 = ctx.r10.s64 + -12512;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828ef150
	sub_828EF150(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,33
	ctx.r3.s64 = 33;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826051f8
	sub_826051F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,20540
	ctx.r3.s64 = r31.s64 + 20540;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8267e7e0
	sub_8267E7E0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,20544(r31)
	PPC_STORE_U8(r31.u32 + 20544, r11.u8);
	// bl 0x826254b0
	sub_826254B0(ctx, base);
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267d24c
	if (cr0.eq) goto loc_8267D24C;
	// addi r4,r31,20528
	ctx.r4.s64 = r31.s64 + 20528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826253c8
	sub_826253C8(ctx, base);
loc_8267D24C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d25c
	if (cr6.eq) goto loc_8267D25C;
	// bl 0x82bb9618
	sub_82BB9618(ctx, base);
loc_8267D25C:
	// bl 0x8267cda0
	sub_8267CDA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267D274"))) PPC_WEAK_FUNC(sub_8267D274);
PPC_FUNC_IMPL(__imp__sub_8267D274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D278"))) PPC_WEAK_FUNC(sub_8267D278);
PPC_FUNC_IMPL(__imp__sub_8267D278) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// ble cr6,0x8267d2b8
	if (!cr6.gt) goto loc_8267D2B8;
loc_8267D2A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8267d2a4
	if (cr6.gt) goto loc_8267D2A4;
loc_8267D2B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267D2C8"))) PPC_WEAK_FUNC(sub_8267D2C8);
PPC_FUNC_IMPL(__imp__sub_8267D2C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D2CC"))) PPC_WEAK_FUNC(sub_8267D2CC);
PPC_FUNC_IMPL(__imp__sub_8267D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D2D0"))) PPC_WEAK_FUNC(sub_8267D2D0);
PPC_FUNC_IMPL(__imp__sub_8267D2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267d300
	if (cr0.eq) goto loc_8267D300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8267D300:
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

__attribute__((alias("__imp__sub_8267D318"))) PPC_WEAK_FUNC(sub_8267D318);
PPC_FUNC_IMPL(__imp__sub_8267D318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D31C"))) PPC_WEAK_FUNC(sub_8267D31C);
PPC_FUNC_IMPL(__imp__sub_8267D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D320"))) PPC_WEAK_FUNC(sub_8267D320);
PPC_FUNC_IMPL(__imp__sub_8267D320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-29552(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29552);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d370
	if (!cr6.eq) goto loc_8267D370;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29596
	ctx.r3.s64 = ctx.r10.s64 + -29596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d448
	goto loc_8267D448;
loc_8267D370:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-8664
	r30.s64 = r11.s64 + -8664;
	// lbz r11,20544(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20544);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d444
	if (cr0.eq) goto loc_8267D444;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d3d4
	if (cr6.eq) goto loc_8267D3D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8267d3d4
	if (!cr0.eq) goto loc_8267D3D4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8267D3D4:
	// bl 0x8267cda0
	sub_8267CDA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r30,12304
	ctx.r3.s64 = r30.s64 + 12304;
	// stw r11,20524(r30)
	PPC_STORE_U32(r30.u32 + 20524, r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r10,20522(r30)
	PPC_STORE_U8(r30.u32 + 20522, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// bl 0x82681058
	sub_82681058(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d42c
	if (cr6.eq) goto loc_8267D42C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267D42C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,20544(r30)
	PPC_STORE_U8(r30.u32 + 20544, r11.u8);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8267D444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D448:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_8267D328"))) PPC_WEAK_FUNC(sub_8267D328);
PPC_FUNC_IMPL(__imp__sub_8267D328) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d370
	if (!cr6.eq) goto loc_8267D370;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29596
	ctx.r3.s64 = ctx.r10.s64 + -29596;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d448
	goto loc_8267D448;
loc_8267D370:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-8664
	r30.s64 = r11.s64 + -8664;
	// lbz r11,20544(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20544);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d444
	if (cr0.eq) goto loc_8267D444;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d3d4
	if (cr6.eq) goto loc_8267D3D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8267d3d4
	if (!cr0.eq) goto loc_8267D3D4;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8267D3D4:
	// bl 0x8267cda0
	sub_8267CDA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r30,12304
	ctx.r3.s64 = r30.s64 + 12304;
	// stw r11,20524(r30)
	PPC_STORE_U32(r30.u32 + 20524, r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r10,20522(r30)
	PPC_STORE_U8(r30.u32 + 20522, ctx.r10.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// bl 0x82681058
	sub_82681058(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d42c
	if (cr6.eq) goto loc_8267D42C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8267D42C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,20544(r30)
	PPC_STORE_U8(r30.u32 + 20544, r11.u8);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8267D444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D448:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8267D460"))) PPC_WEAK_FUNC(sub_8267D460);
PPC_FUNC_IMPL(__imp__sub_8267D460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8267D484"))) PPC_WEAK_FUNC(sub_8267D484);
PPC_FUNC_IMPL(__imp__sub_8267D484) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D488"))) PPC_WEAK_FUNC(sub_8267D488);
PPC_FUNC_IMPL(__imp__sub_8267D488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-29344(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29344);
	// mflr r12
	// bl 0x828e9414
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d4d4
	if (!cr6.eq) goto loc_8267D4D4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267D4C8:
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D4D4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r29,r11,11860
	r29.s64 = r11.s64 + 11860;
	// lbz r11,20(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d4c8
	if (cr0.eq) goto loc_8267D4C8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// bne cr6,0x8267d514
	if (!cr6.eq) goto loc_8267D514;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29412
	ctx.r4.s64 = r11.s64 + -29412;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D514:
	// cmplwi cr6,r5,254
	cr6.compare<uint32_t>(ctx.r5.u32, 254, xer);
	// bne cr6,0x8267d53c
	if (!cr6.eq) goto loc_8267D53C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29444
	ctx.r4.s64 = r11.s64 + -29444;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D53C:
	// cmplwi cr6,r5,253
	cr6.compare<uint32_t>(ctx.r5.u32, 253, xer);
	// bne cr6,0x8267d564
	if (!cr6.eq) goto loc_8267D564;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29476
	ctx.r4.s64 = r11.s64 + -29476;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D564:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bge cr6,0x8267d704
	if (!cr6.lt) goto loc_8267D704;
	// lwz r11,-20512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -20512);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r27,r11,11884
	r27.s64 = r11.s64 + 11884;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82680a78
	sub_82680A78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8267e710
	sub_8267E710(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x8267d5d0
	if (!cr0.lt) goto loc_8267D5D0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D5D0:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// subfic r9,r10,2048
	xer.ca = ctx.r10.u32 <= 2048;
	ctx.r9.s64 = 2048 - ctx.r10.s64;
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8267d620
	if (!cr6.gt) goto loc_8267D620;
	// lbz r11,-3(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - r11.s64;
	// li r11,1
	r11.s64 = 1;
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stb r11,-3(r29)
	PPC_STORE_U8(r29.u32 + -3, r11.u8);
	// sth r10,-8203(r29)
	PPC_STORE_U16(r29.u32 + -8203, ctx.r10.u16);
	// b 0x8267d6f4
	goto loc_8267D6F4;
loc_8267D620:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r29,-8204
	r11.s64 = r29.s64 + -8204;
	// ld r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r29,-8204
	ctx.r9.s64 = r29.s64 + -8204;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r5,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r5.u16);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r7,4(r11)
	PPC_STORE_U64(r11.u32 + 4, ctx.r7.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// beq cr6,0x8267d690
	if (cr6.eq) goto loc_8267D690;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_8267D674:
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x8267d674
	if (cr6.lt) goto loc_8267D674;
loc_8267D690:
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r29,-8204
	ctx.r10.s64 = r29.s64 + -8204;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8267d6d4
	if (cr6.eq) goto loc_8267D6D4;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_8267D6B8:
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x8267d6b8
	if (cr6.lt) goto loc_8267D6B8;
loc_8267D6D4:
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,-8(r29)
	PPC_STORE_U32(r29.u32 + -8, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82680f80
	sub_82680F80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// stw r28,-8(r29)
	PPC_STORE_U32(r29.u32 + -8, r28.u32);
loc_8267D6F4:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D704:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29504
	ctx.r4.s64 = r11.s64 + -29504;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_8267D720:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8267D490"))) PPC_WEAK_FUNC(sub_8267D490);
PPC_FUNC_IMPL(__imp__sub_8267D490) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d4d4
	if (!cr6.eq) goto loc_8267D4D4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267D4C8:
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D4D4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r29,r11,11860
	r29.s64 = r11.s64 + 11860;
	// lbz r11,20(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d4c8
	if (cr0.eq) goto loc_8267D4C8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// bne cr6,0x8267d514
	if (!cr6.eq) goto loc_8267D514;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29412
	ctx.r4.s64 = r11.s64 + -29412;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D514:
	// cmplwi cr6,r5,254
	cr6.compare<uint32_t>(ctx.r5.u32, 254, xer);
	// bne cr6,0x8267d53c
	if (!cr6.eq) goto loc_8267D53C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29444
	ctx.r4.s64 = r11.s64 + -29444;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D53C:
	// cmplwi cr6,r5,253
	cr6.compare<uint32_t>(ctx.r5.u32, 253, xer);
	// bne cr6,0x8267d564
	if (!cr6.eq) goto loc_8267D564;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29476
	ctx.r4.s64 = r11.s64 + -29476;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D564:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bge cr6,0x8267d704
	if (!cr6.lt) goto loc_8267D704;
	// lwz r11,-20512(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -20512);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r27,r11,11884
	r27.s64 = r11.s64 + 11884;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82680a78
	sub_82680A78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8267e710
	sub_8267E710(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x8267d5d0
	if (!cr0.lt) goto loc_8267D5D0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D5D0:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// subfic r9,r10,2048
	xer.ca = ctx.r10.u32 <= 2048;
	ctx.r9.s64 = 2048 - ctx.r10.s64;
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// ble cr6,0x8267d620
	if (!cr6.gt) goto loc_8267D620;
	// lbz r11,-3(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - r11.s64;
	// li r11,1
	r11.s64 = 1;
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stb r11,-3(r29)
	PPC_STORE_U8(r29.u32 + -3, r11.u8);
	// sth r10,-8203(r29)
	PPC_STORE_U16(r29.u32 + -8203, ctx.r10.u16);
	// b 0x8267d6f4
	goto loc_8267D6F4;
loc_8267D620:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r29,-8204
	r11.s64 = r29.s64 + -8204;
	// ld r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r29,-8204
	ctx.r9.s64 = r29.s64 + -8204;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r5,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r5.u16);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r7,4(r11)
	PPC_STORE_U64(r11.u32 + 4, ctx.r7.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r4,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r4.u16);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// beq cr6,0x8267d690
	if (cr6.eq) goto loc_8267D690;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_8267D674:
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x8267d674
	if (cr6.lt) goto loc_8267D674;
loc_8267D690:
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r29,-8204
	ctx.r10.s64 = r29.s64 + -8204;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x8267d6d4
	if (cr6.eq) goto loc_8267D6D4;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
loc_8267D6B8:
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x8267d6b8
	if (cr6.lt) goto loc_8267D6B8;
loc_8267D6D4:
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,-8(r29)
	PPC_STORE_U32(r29.u32 + -8, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82680f80
	sub_82680F80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d6f4
	if (!cr0.eq) goto loc_8267D6F4;
	// stw r28,-8(r29)
	PPC_STORE_U32(r29.u32 + -8, r28.u32);
loc_8267D6F4:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267d720
	goto loc_8267D720;
loc_8267D704:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29504
	ctx.r4.s64 = r11.s64 + -29504;
	// addi r3,r10,-29380
	ctx.r3.s64 = ctx.r10.s64 + -29380;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_8267D720:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
}

__attribute__((alias("__imp__sub_8267D728"))) PPC_WEAK_FUNC(sub_8267D728);
PPC_FUNC_IMPL(__imp__sub_8267D728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8267D74C"))) PPC_WEAK_FUNC(sub_8267D74C);
PPC_FUNC_IMPL(__imp__sub_8267D74C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D750"))) PPC_WEAK_FUNC(sub_8267D750);
PPC_FUNC_IMPL(__imp__sub_8267D750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-29200(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -29200);
	// mflr r12
	// bl 0x828e9414
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r11,11956(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d798
	if (!cr6.eq) goto loc_8267D798;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29244
	ctx.r3.s64 = ctx.r10.s64 + -29244;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267D78C:
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d9dc
	goto loc_8267D9DC;
loc_8267D798:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-8664
	r30.s64 = r11.s64 + -8664;
	// lbz r11,20544(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20544);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d78c
	if (cr0.eq) goto loc_8267D78C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d828
	if (cr6.eq) goto loc_8267D828;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8267d828
	if (cr0.eq) goto loc_8267D828;
loc_8267D7E0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bne cr6,0x8267d7f0
	if (!cr6.eq) goto loc_8267D7F0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8267D7F0:
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8267d7e0
	if (!cr0.eq) goto loc_8267D7E0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8267d828
	if (cr6.eq) goto loc_8267D828;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20540(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20540);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826811a0
	sub_826811A0(ctx, base);
loc_8267D828:
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d87c
	if (cr6.eq) goto loc_8267D87C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8267d87c
	if (!cr0.eq) goto loc_8267D87C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
loc_8267D87C:
	// ld r11,20528(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 20528);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x8267d8a4
	if (!cr6.eq) goto loc_8267D8A4;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826254b0
	sub_826254B0(ctx, base);
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267d8a4
	if (cr0.eq) goto loc_8267D8A4;
	// addi r4,r30,20528
	ctx.r4.s64 = r30.s64 + 20528;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826253c8
	sub_826253C8(ctx, base);
loc_8267D8A4:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,20524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20524);
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// lwz r11,688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8267d8c8
	if (!cr6.lt) goto loc_8267D8C8;
	// lbz r11,20523(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20523);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d9d0
	if (cr0.eq) goto loc_8267D9D0;
loc_8267D8C8:
	// lwz r11,20516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20516);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// ble cr6,0x8267d9c0
	if (!cr6.gt) goto loc_8267D9C0;
	// addi r4,r30,20522
	ctx.r4.s64 = r30.s64 + 20522;
	// addi r3,r30,12304
	ctx.r3.s64 = r30.s64 + 12304;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8267ce50
	sub_8267CE50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d908
	if (!cr0.eq) goto loc_8267D908;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29280
	ctx.r4.s64 = r11.s64 + -29280;
	// addi r3,r10,-29244
	ctx.r3.s64 = ctx.r10.s64 + -29244;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// b 0x8267d9d0
	goto loc_8267D9D0;
loc_8267D908:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82bb9358
	sub_82BB9358(ctx, base);
	// addi r11,r30,12320
	r11.s64 = r30.s64 + 12320;
	// li r10,12342
	ctx.r10.s64 = 12342;
	// addi r3,r11,6
	ctx.r3.s64 = r11.s64 + 6;
	// addi r4,r30,12304
	ctx.r4.s64 = r30.s64 + 12304;
	// li r5,16
	ctx.r5.s64 = 16;
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stdx r11,r30,r10
	PPC_STORE_U64(r30.u32 + ctx.r10.u32, r11.u64);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,20521(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20521);
	// li r8,12351
	ctx.r8.s64 = 12351;
	// ld r9,20528(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 20528);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,20524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20524);
	// stb r10,12350(r30)
	PPC_STORE_U8(r30.u32 + 12350, ctx.r10.u8);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// stdx r9,r30,r8
	PPC_STORE_U64(r30.u32 + ctx.r8.u32, ctx.r9.u64);
	// bne 0x8267d970
	if (!cr0.eq) goto loc_8267D970;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// sth r28,12323(r30)
	PPC_STORE_U16(r30.u32 + 12323, r28.u16);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// sth r11,12321(r30)
	PPC_STORE_U16(r30.u32 + 12321, r11.u16);
	// b 0x8267d97c
	goto loc_8267D97C;
loc_8267D970:
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// sth r11,12323(r30)
	PPC_STORE_U16(r30.u32 + 12323, r11.u16);
loc_8267D97C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// bl 0x82680590
	sub_82680590(ctx, base);
	// lwz r11,20516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20516);
	// addi r9,r30,12320
	ctx.r9.s64 = r30.s64 + 12320;
	// lwz r10,11956(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 11956);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20000
	ctx.r6.s64 = 20000;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82681288
	sub_82681288(ctx, base);
loc_8267D9C0:
	// stw r29,20524(r30)
	PPC_STORE_U32(r30.u32 + 20524, r29.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stb r28,20523(r30)
	PPC_STORE_U8(r30.u32 + 20523, r28.u8);
	// bl 0x8267cda0
	sub_8267CDA0(ctx, base);
loc_8267D9D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D9DC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8267D758"))) PPC_WEAK_FUNC(sub_8267D758);
PPC_FUNC_IMPL(__imp__sub_8267D758) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r11,11956(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267d798
	if (!cr6.eq) goto loc_8267D798;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29244
	ctx.r3.s64 = ctx.r10.s64 + -29244;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267D78C:
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x8267d9dc
	goto loc_8267D9DC;
loc_8267D798:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-8664
	r30.s64 = r11.s64 + -8664;
	// lbz r11,20544(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20544);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d78c
	if (cr0.eq) goto loc_8267D78C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d828
	if (cr6.eq) goto loc_8267D828;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8267d828
	if (cr0.eq) goto loc_8267D828;
loc_8267D7E0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bne cr6,0x8267d7f0
	if (!cr6.eq) goto loc_8267D7F0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8267D7F0:
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314ce1c
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8267d7e0
	if (!cr0.eq) goto loc_8267D7E0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8267d828
	if (cr6.eq) goto loc_8267D828;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,20540(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20540);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826811a0
	sub_826811A0(ctx, base);
loc_8267D828:
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8267d87c
	if (cr6.eq) goto loc_8267D87C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82605590
	sub_82605590(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8267d87c
	if (!cr0.eq) goto loc_8267D87C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
loc_8267D87C:
	// ld r11,20528(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 20528);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x8267d8a4
	if (!cr6.eq) goto loc_8267D8A4;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826254b0
	sub_826254B0(ctx, base);
	// rlwinm. r11,r3,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8267d8a4
	if (cr0.eq) goto loc_8267D8A4;
	// addi r4,r30,20528
	ctx.r4.s64 = r30.s64 + 20528;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x826253c8
	sub_826253C8(ctx, base);
loc_8267D8A4:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,20524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20524);
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// lwz r11,688(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x8267d8c8
	if (!cr6.lt) goto loc_8267D8C8;
	// lbz r11,20523(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20523);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267d9d0
	if (cr0.eq) goto loc_8267D9D0;
loc_8267D8C8:
	// lwz r11,20516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20516);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// ble cr6,0x8267d9c0
	if (!cr6.gt) goto loc_8267D9C0;
	// addi r4,r30,20522
	ctx.r4.s64 = r30.s64 + 20522;
	// addi r3,r30,12304
	ctx.r3.s64 = r30.s64 + 12304;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8267ce50
	sub_8267CE50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8267d908
	if (!cr0.eq) goto loc_8267D908;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29280
	ctx.r4.s64 = r11.s64 + -29280;
	// addi r3,r10,-29244
	ctx.r3.s64 = ctx.r10.s64 + -29244;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
	// b 0x8267d9d0
	goto loc_8267D9D0;
loc_8267D908:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82bb9358
	sub_82BB9358(ctx, base);
	// addi r11,r30,12320
	r11.s64 = r30.s64 + 12320;
	// li r10,12342
	ctx.r10.s64 = 12342;
	// addi r3,r11,6
	ctx.r3.s64 = r11.s64 + 6;
	// addi r4,r30,12304
	ctx.r4.s64 = r30.s64 + 12304;
	// li r5,16
	ctx.r5.s64 = 16;
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// stdx r11,r30,r10
	PPC_STORE_U64(r30.u32 + ctx.r10.u32, r11.u64);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lbz r11,20521(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20521);
	// li r8,12351
	ctx.r8.s64 = 12351;
	// ld r9,20528(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 20528);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,20524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20524);
	// stb r10,12350(r30)
	PPC_STORE_U8(r30.u32 + 12350, ctx.r10.u8);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// stdx r9,r30,r8
	PPC_STORE_U64(r30.u32 + ctx.r8.u32, ctx.r9.u64);
	// bne 0x8267d970
	if (!cr0.eq) goto loc_8267D970;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// sth r28,12323(r30)
	PPC_STORE_U16(r30.u32 + 12323, r28.u16);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// sth r11,12321(r30)
	PPC_STORE_U16(r30.u32 + 12321, r11.u16);
	// b 0x8267d97c
	goto loc_8267D97C;
loc_8267D970:
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// sth r11,12323(r30)
	PPC_STORE_U16(r30.u32 + 12323, r11.u16);
loc_8267D97C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,11884
	ctx.r3.s64 = r11.s64 + 11884;
	// bl 0x82680590
	sub_82680590(ctx, base);
	// lwz r11,20516(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20516);
	// addi r9,r30,12320
	ctx.r9.s64 = r30.s64 + 12320;
	// lwz r10,11956(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 11956);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20000
	ctx.r6.s64 = 20000;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82681288
	sub_82681288(ctx, base);
loc_8267D9C0:
	// stw r29,20524(r30)
	PPC_STORE_U32(r30.u32 + 20524, r29.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// stb r28,20523(r30)
	PPC_STORE_U8(r30.u32 + 20523, r28.u8);
	// bl 0x8267cda0
	sub_8267CDA0(ctx, base);
loc_8267D9D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267D9DC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
}

__attribute__((alias("__imp__sub_8267D9E4"))) PPC_WEAK_FUNC(sub_8267D9E4);
PPC_FUNC_IMPL(__imp__sub_8267D9E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8267DA08"))) PPC_WEAK_FUNC(sub_8267DA08);
PPC_FUNC_IMPL(__imp__sub_8267DA08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267DA0C"))) PPC_WEAK_FUNC(sub_8267DA0C);
PPC_FUNC_IMPL(__imp__sub_8267DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267DA10"))) PPC_WEAK_FUNC(sub_8267DA10);
PPC_FUNC_IMPL(__imp__sub_8267DA10) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,11956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8267da68
	if (!cr6.eq) goto loc_8267DA68;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r11,-29628
	ctx.r4.s64 = r11.s64 + -29628;
	// addi r3,r10,-29152
	ctx.r3.s64 = ctx.r10.s64 + -29152;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8267DA48:
	// lis r3,-32680
	ctx.r3.s64 = -2141716480;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_8267DA50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8267DA68:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,11859
	r31.s64 = r11.s64 + 11859;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8267da48
	if (cr0.eq) goto loc_8267DA48;
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,-20511(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -20511);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,13(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// lwz r10,692(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8267dae0
	if (!cr6.gt) goto loc_8267DAE0;
	// li r11,1
	r11.s64 = 1;
	// stw r30,13(r31)
	PPC_STORE_U32(r31.u32 + 13, r30.u32);
	// li r30,0
	r30.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8267da50
	goto loc_8267DA50;
loc_8267DAE0:
	// lis r30,-32680
	r30.s64 = -2141716480;
	// ori r30,r30,6
	r30.u64 = r30.u64 | 6;
}

